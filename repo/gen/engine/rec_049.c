#include "recomp.h"
#include "rec_mod.h"

void f_7dc1ca(void) {
  LOAD_REGS();
L_7dc1ca: /* 7dc1ca: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7dc1cd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dc1d2: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7dc1d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dc1d6: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7dc1d9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dc1deu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dc1de(); return;
}

void f_7dc1de(void) {
  LOAD_REGS();
L_7dc1de: /* 7dc1de: push 0xa0f8cc */
  { uint32_t v = 0xa0f8ccu; esp -= 4; W32(esp, v); }
/* 7dc1e3: push 0xadd1c8 */
  { uint32_t v = 0xadd1c8u; esp -= 4; W32(esp, v); }
/* 7dc1e8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dc1eeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dc1ee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc1f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dc1f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dc1f5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dc1fau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7dc1fa: guest_badaddr(0x7dc1fa); return;
}

void f_7dc2b0(void) {
  LOAD_REGS();
L_7dc2b0: /* 7dc2b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dc2b1: mov ebp, esp */
  ebp = esp;
/* 7dc2b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dc2b5: push 0x9d04f5 */
  { uint32_t v = 0x9d04f5u; esp -= 4; W32(esp, v); }
/* 7dc2ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dc2c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc2c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dc2c8: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7dc2cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dc2cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc2cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dc2ce: xor edi, edi */
  edi = 0;
/* 7dc2d0: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7dc2d3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7dc2d6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7dc2d9: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dc2dfu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dc2df: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7dc2e2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dc2e5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dc2e8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dc2eb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc2ec: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dc2ef: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 7dc2f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc2f3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dc2f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc2f9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dc2fd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dc300u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc300: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7dc303: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dc309u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dc309: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dc30c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dc30f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dc312: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc313: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dc316: lea eax, [ebp - 0x74] */
  eax = (uint32_t)(ebp + 0xffffff8cu);
/* 7dc319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc31a: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dc31f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc320: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dc324: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dc327u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc327: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dc32a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dc32d: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 7dc330: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dc333: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc334: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dc337: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7dc33a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc33b: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dc340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc341: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dc344u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc344: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7dc347: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dc34du); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dc34d: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7dc353: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7dc355: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dc358: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dc35b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dc35e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc35f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dc362: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 7dc365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc366: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dc36b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc36c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7dc370: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dc373u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc373: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7dc379: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7dc37b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc37d: je 0x7dc38c */
  if (zf) goto L_7dc38c;
L_7dc37f: /* 7dc37f: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7dc384: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7dc386: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dc388: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc389: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7dc38cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dc38c: /* 7dc38c: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7dc392: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dc394: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc396: je 0x7dc39d */
  if (zf) goto L_7dc39d;
L_7dc398: /* 7dc398: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7dc39b: jmp 0x7dc3a3 */
  goto L_7dc3a3;
L_7dc39d: /* 7dc39d: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 7dc3a0: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
L_7dc3a3: /* 7dc3a3: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7dc3a6: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dc3acu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dc3ac: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 7dc3b1: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7dc3b3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dc3b6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dc3b9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dc3bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc3bd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dc3c0: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 7dc3c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc3c4: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dc3c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc3ca: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7dc3ce: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dc3d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc3d1: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7dc3d7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7dc3d9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc3db: je 0x7dc3ea */
  if (zf) goto L_7dc3ea;
L_7dc3dd: /* 7dc3dd: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7dc3e2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7dc3e4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dc3e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc3e7: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7dc3eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dc3ea: /* 7dc3ea: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7dc3f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dc3f2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc3f4: je 0x7dc3fb */
  if (zf) goto L_7dc3fb;
L_7dc3f6: /* 7dc3f6: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7dc3f9: jmp 0x7dc401 */
  goto L_7dc401;
L_7dc3fb: /* 7dc3fb: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 7dc3fe: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
L_7dc401: /* 7dc401: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7dc404: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7dc405: mov eax, edx */
  eax = edx;
/* 7dc407: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7dc40a: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc40d: jne 0x7dc423 */
  if (!zf) goto L_7dc423;
L_7dc40f: /* 7dc40f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dc412: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc413: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dc414: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dc417: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dc41c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc41d: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7dc423u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dc423: /* 7dc423: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dc426: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7dc42cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7dc42c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dc42d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dc42e: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dc431: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7dc436: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dc437: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7dc43b: call dword ptr [0xcfa93c] */
  esp -= 4; W32(esp, 0x7dc441u); SPILL(); f_4e44d0(); if (g_unwind) return; /* Core!?GetRegistryObjects@UObject@@SAXAAV?$TArray@VFRegistryObjectInfo@@@@PAVUClass@@1H@Z */ RELOAD();
/* 7dc441: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 7dc444: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc447: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7dc44a: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 7dc44d: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 7dc450: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7dc453: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7dc456: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dc45cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dc45c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc45d: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7dc463u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7dc463: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc466: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7dc469: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7dc46c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7dc470: /* 7dc470: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7dc473: cmp edx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dc476: jge 0x7dc52e */
  if ((sf == of)) goto L_7dc52e;
L_7dc47c: /* 7dc47c: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7dc47f: mov esi, edx */
  esi = edx;
/* 7dc481: imul esi, esi, 0x3c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x3cu);
  esi = (uint32_t)r;
  }
/* 7dc484: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7dc487: lea ebx, [esi + eax] */
  ebx = (uint32_t)(esi + eax);
/* 7dc48a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dc490u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dc490: mov ecx, ebx */
  ecx = ebx;
/* 7dc492: mov edi, eax */
  edi = eax;
/* 7dc494: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dc49au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dc49a: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7dc49d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dc49e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dc49f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc4a0: call dword ptr [0xcfa940] */
  esp -= 4; W32(esp, 0x7dc4a6u); SPILL(); f_4e2f90(); if (g_unwind) return; /* Core!?appStrnicmp@@YAHPBG0H@Z */ RELOAD();
/* 7dc4a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc4a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dc4ab: jne 0x7dc51f */
  if (!zf) goto L_7dc51f;
L_7dc4ad: /* 7dc4ad: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dc4b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dc4b2: je 0x7dc4be */
  if (zf) goto L_7dc4be;
L_7dc4b4: /* 7dc4b4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7dc4b7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7dc4ba: mov esi, edx */
  esi = edx;
/* 7dc4bc: jmp 0x7dc538 */
  goto L_7dc538;
L_7dc4be: /* 7dc4be: cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc4c2: jne 0x7dc4ca */
  if (!zf) goto L_7dc4ca;
L_7dc4c4: /* 7dc4c4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7dc4c7: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_7dc4ca: /* 7dc4ca: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7dc4cd: lea edi, [esi + ecx] */
  edi = (uint32_t)(esi + ecx);
/* 7dc4d0: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7dc4d3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dc4d9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dc4d9: mov ecx, edi */
  ecx = edi;
/* 7dc4db: mov esi, eax */
  esi = eax;
/* 7dc4dd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dc4e3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dc4e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc4e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc4e5: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7dc4ebu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7dc4eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc4ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dc4f0: jne 0x7dc519 */
  if (!zf) goto L_7dc519;
L_7dc4f2: /* 7dc4f2: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7dc4f5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc4f8: jne 0x7dc504 */
  if (!zf) goto L_7dc504;
L_7dc4fa: /* 7dc4fa: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7dc4fd: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7dc500: mov esi, edx */
  esi = edx;
/* 7dc502: jmp 0x7dc538 */
  goto L_7dc538;
L_7dc504: /* 7dc504: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dc506: jne 0x7dc512 */
  if (!zf) goto L_7dc512;
L_7dc508: /* 7dc508: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7dc50b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7dc50e: mov esi, eax */
  esi = eax;
/* 7dc510: jmp 0x7dc538 */
  goto L_7dc538;
L_7dc512: /* 7dc512: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_7dc519: /* 7dc519: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7dc51c: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_7dc51f: /* 7dc51f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7dc522: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dc525: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc526: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7dc529: jmp 0x7dc470 */
  goto L_7dc470;
L_7dc52e: /* 7dc52e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dc531: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dc533: je 0x7dc538 */
  if (zf) goto L_7dc538;
L_7dc535: /* 7dc535: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
L_7dc538: /* 7dc538: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc53b: jne 0x7dc540 */
  if (!zf) goto L_7dc540;
L_7dc53d: /* 7dc53d: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
L_7dc540: /* 7dc540: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7dc542: jl 0x7dc56f */
  if ((sf != of)) goto L_7dc56f;
L_7dc544: /* 7dc544: cmp esi, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dc547: jge 0x7dc56f */
  if ((sf == of)) goto L_7dc56f;
L_7dc549: /* 7dc549: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7dc54c: imul esi, esi, 0x3c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x3cu);
  esi = (uint32_t)r;
  }
/* 7dc54f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7dc552: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* 7dc555: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc556: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7dc55cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dc55c: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7dc55f: lea edx, [esi + ecx + 0x24] */
  edx = (uint32_t)(esi + ecx + 0x24u);
/* 7dc563: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7dc566: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dc567: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7dc56du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dc56d: jmp 0x7dc58b */
  goto L_7dc58b;
L_7dc56f: /* 7dc56f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7dc572: push 0xb82204 */
  { uint32_t v = 0xb82204u; esp -= 4; W32(esp, v); }
/* 7dc577: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7dc57du); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7dc57d: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7dc580: push 0xb82208 */
  { uint32_t v = 0xb82208u; esp -= 4; W32(esp, v); }
/* 7dc585: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7dc58bu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_7dc58b: /* 7dc58b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7dc58e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc58f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dc591: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dc594: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7dc598: call 0x6cc1a8 */
  esp -= 4; W32(esp, 0x7dc59du); SPILL(); f_6cc1a8(); if (g_unwind) return; RELOAD();
/* 7dc59d: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dc5a0: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7dc5a4: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7dc5aau); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7dc5aa: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7dc5ad: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7dc5b1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dc5b7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dc5b7: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7dc5ba: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dc5be: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dc5c4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dc5c4: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7dc5c7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dc5cb: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dc5d1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dc5d1: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7dc5d4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dc5d8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dc5deu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dc5de: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dc5e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dc5e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dc5e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dc5ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dc5eb: mov esp, ebp */
  esp = ebp;
/* 7dc5ed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dc5ee: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7dc5f1(void) {
  LOAD_REGS();
L_7dc5f1: /* 7dc5f1: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7dc5f4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dc5f9: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7dc5fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dc5fd: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7dc600: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dc605u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dc605(); return;
}

void f_7dc605(void) {
  LOAD_REGS();
L_7dc605: /* 7dc605: push 0xa0f90c */
  { uint32_t v = 0xa0f90cu; esp -= 4; W32(esp, v); }
/* 7dc60a: push 0xadd2dc */
  { uint32_t v = 0xadd2dcu; esp -= 4; W32(esp, v); }
/* 7dc60f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dc615u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dc615: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc618: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dc61a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dc61c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dc621u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7dc621: guest_badaddr(0x7dc621); return;
}

void f_7dc710(void) {
  LOAD_REGS();
L_7dc710: /* 7dc710: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dc711: mov ebp, esp */
  ebp = esp;
/* 7dc713: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dc715: push 0x9d0568 */
  { uint32_t v = 0x9d0568u; esp -= 4; W32(esp, v); }
/* 7dc71a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dc720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc721: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dc728: sub esp, 0x454 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x454u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7dc72e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dc72f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc730: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dc731: xor edi, edi */
  edi = 0;
/* 7dc733: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7dc736: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7dc739: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7dc73c: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dc742u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dc742: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7dc745: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dc748: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dc74b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dc74e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc74f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dc752: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 7dc755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc756: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dc75b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc75c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dc760: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dc763u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc763: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7dc766: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dc76cu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dc76c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dc76f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dc772: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dc775: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc776: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dc779: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 7dc77c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc77d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dc782: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc783: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dc787: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dc78au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc78a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dc78d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dc790: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 7dc793: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dc796: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc797: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dc79a: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7dc79d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc79e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dc7a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc7a4: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dc7a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc7a7: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7dc7aa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7dc7ab: mov eax, edx */
  eax = edx;
/* 7dc7ad: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7dc7b0: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc7b3: jne 0x7dc7ca */
  if (!zf) goto L_7dc7ca;
L_7dc7b5: /* 7dc7b5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dc7b8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc7b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dc7ba: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dc7bd: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7dc7c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc7c4: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7dc7cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dc7ca: /* 7dc7ca: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7dc7cd: push 0xb8220c */
  { uint32_t v = 0xb8220cu; esp -= 4; W32(esp, v); }
/* 7dc7d2: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7dc7d8u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7dc7d8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7dc7db: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7dc7e1u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7dc7e1: mov ecx, 0xcebd5c */
  ecx = 0xcebd5cu;
/* 7dc7e6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7dc7ea: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dc7f0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dc7f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc7f1: lea eax, [ebp - 0x460] */
  eax = (uint32_t)(ebp + 0xfffffba0u);
/* 7dc7f7: push 0xadd2e4 */
  { uint32_t v = 0xadd2e4u; esp -= 4; W32(esp, v); }
/* 7dc7fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc7fd: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7dc803u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7dc803: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc806: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7dc809: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7dc810: /* 7dc810: mov edx, dword ptr [0xcfa94c] */
  edx = R32((uint32_t)(0xcfa94cu));
/* 7dc816: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7dc819: xor ecx, ecx */
  ecx = 0;
/* 7dc81b: cmp word ptr [edx], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc81e: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7dc821: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7dc822: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dc824: jge 0x7dc9f8 */
  if ((sf == of)) goto L_7dc9f8;
L_7dc82a: /* 7dc82a: xor ebx, ebx */
  ebx = 0;
L_7dc82c: /* 7dc82c: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7dc831: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7dc833: cmp ebx, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dc836: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 7dc839: jge 0x7dc9f0 */
  if ((sf == of)) goto L_7dc9f0;
L_7dc83f: /* 7dc83f: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 7dc842: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 7dc845: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7dc848: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7dc84a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dc850u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dc850: lea ecx, [ebp - 0x460] */
  ecx = (uint32_t)(ebp + 0xfffffba0u);
/* 7dc856: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dc857: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc858: call dword ptr [0xcfa908] */
  esp -= 4; W32(esp, 0x7dc85eu); SPILL(); f_4e2220(); if (g_unwind) return; /* Core!?appStrstr@@YAPAGPBG0@Z */ RELOAD();
/* 7dc85e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc861: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dc863: je 0x7dc9ea */
  if (zf) goto L_7dc9ea;
L_7dc869: /* 7dc869: mov dx, word ptr [0xb82210] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb82210u))) & 0xffffu);
/* 7dc870: xor eax, eax */
  eax = 0;
/* 7dc872: mov word ptr [ebp - 0x260], dx */
  W16((uint32_t)(ebp + 0xfffffda0u), (edx & 0xffffu));
/* 7dc879: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 7dc87e: lea edi, [ebp - 0x25e] */
  edi = (uint32_t)(ebp + 0xfffffda2u);
/* 7dc884: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7dc886: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7dc888: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7dc88b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dc88d: mov edi, dword ptr [0xcfa914] */
  edi = R32((uint32_t)(0xcfa914u));
/* 7dc893: je 0x7dc8b8 */
  if (zf) goto L_7dc8b8;
L_7dc895: /* 7dc895: mov eax, dword ptr [0xcfa94c] */
  eax = R32((uint32_t)(0xcfa94cu));
/* 7dc89a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc89b: lea ecx, [ebp - 0x260] */
  ecx = (uint32_t)(ebp + 0xfffffda0u);
/* 7dc8a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dc8a2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7dc8a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc8a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc8a7: lea edx, [ebp - 0x260] */
  edx = (uint32_t)(ebp + 0xfffffda0u);
/* 7dc8ad: push 0xadd2f0 */
  { uint32_t v = 0xadd2f0u; esp -= 4; W32(esp, v); }
/* 7dc8b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dc8b3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7dc8b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc8b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7dc8b8: /* 7dc8b8: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7dc8bd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7dc8bf: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 7dc8c2: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7dc8c4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dc8cau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dc8ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc8cb: lea edx, [ebp - 0x260] */
  edx = (uint32_t)(ebp + 0xfffffda0u);
/* 7dc8d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dc8d2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7dc8d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc8d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc8d7: lea eax, [ebp - 0x460] */
  eax = (uint32_t)(ebp + 0xfffffba0u);
/* 7dc8dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc8de: lea ecx, [ebp - 0x260] */
  ecx = (uint32_t)(ebp + 0xfffffda0u);
/* 7dc8e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dc8e5: call dword ptr [0xcfa908] */
  esp -= 4; W32(esp, 0x7dc8ebu); SPILL(); f_4e2220(); if (g_unwind) return; /* Core!?appStrstr@@YAPAGPBG0@Z */ RELOAD();
/* 7dc8eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc8ee: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7dc8f1: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* 7dc8f6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dc8fcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dc8fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc8fd: lea edx, [ebp - 0x260] */
  edx = (uint32_t)(ebp + 0xfffffda0u);
/* 7dc903: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dc904: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7dc906u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc906: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc909: lea eax, [ebp - 0x460] */
  eax = (uint32_t)(ebp + 0xfffffba0u);
/* 7dc90f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc910: lea ecx, [ebp - 0x260] */
  ecx = (uint32_t)(ebp + 0xfffffda0u);
/* 7dc916: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dc917: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7dc919u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc919: mov edx, dword ptr [0xcfa3b0] */
  edx = R32((uint32_t)(0xcfa3b0u));
/* 7dc91f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7dc921: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dc923: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc926: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dc928: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dc92a: lea edx, [ebp - 0x260] */
  edx = (uint32_t)(ebp + 0xfffffda0u);
/* 7dc930: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dc931: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dc934: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dc935: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x7dc938u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc938: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7dc93c: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
L_7dc943: /* 7dc943: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7dc946: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dc949: jge 0x7dc9ce */
  if ((sf == of)) goto L_7dc9ce;
L_7dc94f: /* 7dc94f: xor esi, esi */
  esi = 0;
L_7dc951: /* 7dc951: cmp esi, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dc954: jge 0x7dc990 */
  if ((sf == of)) goto L_7dc990;
L_7dc956: /* 7dc956: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7dc959: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 7dc95c: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 7dc95f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7dc962: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7dc965: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7dc968: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 7dc96b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dc971u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dc971: mov ecx, ebx */
  ecx = ebx;
/* 7dc973: mov edi, eax */
  edi = eax;
/* 7dc975: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dc97bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dc97b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dc97c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc97d: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7dc983u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7dc983: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc986: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dc988: je 0x7dc98d */
  if (zf) goto L_7dc98d;
L_7dc98a: /* 7dc98a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7dc98b: jmp 0x7dc951 */
  goto L_7dc951;
L_7dc98d: /* 7dc98d: cmp esi, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_7dc990: /* 7dc990: jne 0x7dc9bf */
  if (!zf) goto L_7dc9bf;
L_7dc992: /* 7dc992: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7dc994: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dc996: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7dc999: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7dc99fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7dc99f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7dc9a2: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7dc9a5: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7dc9a8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dc9aa: je 0x7dc9bf */
  if (zf) goto L_7dc9bf;
L_7dc9ac: /* 7dc9ac: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7dc9af: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7dc9b2: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7dc9b5: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 7dc9b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc9b9: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7dc9bfu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_7dc9bf: /* 7dc9bf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7dc9c2: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7dc9c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc9c6: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7dc9c9: jmp 0x7dc943 */
  goto L_7dc943;
L_7dc9ce: /* 7dc9ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc9cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dc9d1: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dc9d4: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7dc9d8: call 0x6cd00d */
  esp -= 4; W32(esp, 0x7dc9ddu); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 7dc9dd: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dc9e0: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7dc9e4: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7dc9eau); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
L_7dc9ea: /* 7dc9ea: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7dc9eb: jmp 0x7dc82c */
  goto L_7dc82c;
L_7dc9f0: /* 7dc9f0: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 7dc9f3: jmp 0x7dc810 */
  goto L_7dc810;
L_7dc9f8: /* 7dc9f8: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dc9fb: push 0xadd300 */
  { uint32_t v = 0xadd300u; esp -= 4; W32(esp, v); }
/* 7dca00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dca01: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7dca07u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7dca07: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dca0a: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7dca0e: xor edi, edi */
  edi = 0;
L_7dca10: /* 7dca10: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dca13: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dca15: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7dca18: jge 0x7dca97 */
  if ((sf == of)) goto L_7dca97;
L_7dca1e: /* 7dca1e: mov edi, edi */
  edi = edi;
L_7dca20: /* 7dca20: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7dca23: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 7dca26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dca28: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dca2b: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7dca2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dca2f: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* 7dca32: call dword ptr [0xcfa948] */
  esp -= 4; W32(esp, 0x7dca38u); SPILL(); f_4e16ea(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHABV1@H@Z */ RELOAD();
/* 7dca38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7dca3a: jl 0x7dca91 */
  if ((sf != of)) goto L_7dca91;
L_7dca3c: /* 7dca3c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7dca3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dca41: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dca44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dca45: lea ecx, [esi + edx] */
  ecx = (uint32_t)(esi + edx);
/* 7dca48: call dword ptr [0xcfa948] */
  esp -= 4; W32(esp, 0x7dca4eu); SPILL(); f_4e16ea(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHABV1@H@Z */ RELOAD();
/* 7dca4e: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* 7dca51: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7dca54: lea edi, [esi + eax] */
  edi = (uint32_t)(esi + eax);
/* 7dca57: mov ecx, edi */
  ecx = edi;
/* 7dca59: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7dca5fu); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7dca5f: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7dca61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dca62: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dca65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dca66: mov ecx, edi */
  ecx = edi;
/* 7dca68: call dword ptr [0xcfa944] */
  esp -= 4; W32(esp, 0x7dca6eu); SPILL(); f_4e174e(); if (g_unwind) return; /* Core!?Right@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7dca6e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7dca71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dca72: lea ecx, [esi + edx] */
  ecx = (uint32_t)(esi + edx);
/* 7dca75: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7dca79: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7dca7fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dca7f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dca82: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7dca86: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dca8cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dca8c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7dca8f: jmp 0x7dca20 */
  goto L_7dca20;
L_7dca91: /* 7dca91: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7dca92: jmp 0x7dca10 */
  goto L_7dca10;
L_7dca97: /* 7dca97: xor esi, esi */
  esi = 0;
/* 7dca99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7dcaa0: /* 7dcaa0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dcaa2: jge 0x7dcb16 */
  if ((sf == of)) goto L_7dcb16;
L_7dcaa4: /* 7dcaa4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7dcaa7: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 7dcaaa: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 7dcaad: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7dcab0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dcab6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dcab6: mov ecx, ebx */
  ecx = ebx;
/* 7dcab8: mov edi, eax */
  edi = eax;
/* 7dcaba: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dcac0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dcac0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dcac1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcac2: call dword ptr [0xcfa834] */
  esp -= 4; W32(esp, 0x7dcac8u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* 7dcac8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dcacb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dcacd: jne 0x7dcb10 */
  if (!zf) goto L_7dcb10;
L_7dcacf: /* 7dcacf: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7dcad2: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* 7dcad5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7dcad7: jge 0x7dcadf */
  if ((sf == of)) goto L_7dcadf;
L_7dcad9: /* 7dcad9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dcadc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7dcadd: jmp 0x7dcae6 */
  goto L_7dcae6;
L_7dcadf: /* 7dcadf: cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dcae2: jl 0x7dcae6 */
  if ((sf != of)) goto L_7dcae6;
L_7dcae4: /* 7dcae4: xor eax, eax */
  eax = 0;
L_7dcae6: /* 7dcae6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7dcae9: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7dcaec: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 7dcaef: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7dcaf2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dcaf3: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7dcaf9u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dcaf9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dcafc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7dcb00: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dcb06u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dcb06: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dcb09: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7dcb0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcb0e: jmp 0x7dcb67 */
  goto L_7dcb67;
L_7dcb10: /* 7dcb10: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dcb13: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7dcb14: jmp 0x7dcaa0 */
  goto L_7dcaa0;
L_7dcb16: /* 7dcb16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7dcb18: jle 0x7dcb29 */
  if ((zf || sf != of)) goto L_7dcb29;
L_7dcb1a: /* 7dcb1a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7dcb1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dcb1e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7dcb21: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7dcb27u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dcb27: jmp 0x7dcb52 */
  goto L_7dcb52;
L_7dcb29: /* 7dcb29: push 0xb82214 */
  { uint32_t v = 0xb82214u; esp -= 4; W32(esp, v); }
/* 7dcb2e: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dcb31: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7dcb37u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7dcb37: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7dcb3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcb3b: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7dcb3f: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7dcb45u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dcb45: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dcb48: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7dcb4c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dcb52u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7dcb52: /* 7dcb52: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dcb55: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7dcb59: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dcb5fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dcb5f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dcb62: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7dcb66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_7dcb67: /* 7dcb67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dcb69: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7dcb6c: call 0x6cd00d */
  esp -= 4; W32(esp, 0x7dcb71u); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 7dcb71: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7dcb74: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dcb78: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7dcb7eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7dcb7e: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7dcb81: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dcb85: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dcb8bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dcb8b: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7dcb8e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dcb92: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dcb98u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dcb98: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dcb9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dcb9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dcb9d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dcba4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dcba5: mov esp, ebp */
  esp = ebp;
/* 7dcba7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dcba8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7dcbab(void) {
  LOAD_REGS();
L_7dcbab: /* 7dcbab: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7dcbae: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dcbb3: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7dcbb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dcbb7: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7dcbba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dcbbfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dcbbf(); return;
}

void f_7dcbbf(void) {
  LOAD_REGS();
L_7dcbbf: /* 7dcbbf: push 0xa0f948 */
  { uint32_t v = 0xa0f948u; esp -= 4; W32(esp, v); }
/* 7dcbc4: push 0xadd304 */
  { uint32_t v = 0xadd304u; esp -= 4; W32(esp, v); }
/* 7dcbc9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dcbcfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dcbcf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dcbd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dcbd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dcbd6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dcbdbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7dcbdb: guest_badaddr(0x7dcbdb); return;
}

void f_7dcd20(void) {
  LOAD_REGS();
L_7dcd20: /* 7dcd20: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 7dcd23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dcd25: je 0x7dcd51 */
  if (zf) goto L_7dcd51;
L_7dcd27: /* 7dcd27: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7dcd29: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7dcd2c: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7dcd30: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dcd33: jle 0x7dcd4c */
  if ((zf || sf != of)) goto L_7dcd4c;
L_7dcd35: /* 7dcd35: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 7dcd38: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7dcd39: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7dcd3b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7dcd3d: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 7dcd40: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7dcd43: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7dcd47: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dcd4a: jg 0x7dcd35 */
  if ((!zf && sf == of)) goto L_7dcd35;
L_7dcd4c: /* 7dcd4c: jmp 0x6cb398 */
  SPILL(); f_6cb398(); return;
L_7dcd51: /* 7dcd51: ret  */
  esp += 4; SPILL(); return;
}

void f_7dcd70(void) {
  LOAD_REGS();
L_7dcd70: /* 7dcd70: jmp 0x6c1f14 */
  SPILL(); f_6c1f14(); return;
}

void f_7dcd90(void) {
  LOAD_REGS();
L_7dcd90: /* 7dcd90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dcd91: mov ebp, esp */
  ebp = esp;
/* 7dcd93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dcd95: push 0x9d05c4 */
  { uint32_t v = 0x9d05c4u; esp -= 4; W32(esp, v); }
/* 7dcd9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dcda0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcda1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dcda8: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7dcdab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dcdac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dcdad: mov esi, ecx */
  esi = ecx;
/* 7dcdaf: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 7dcdb2: xor ebx, ebx */
  ebx = 0;
/* 7dcdb4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dcdb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dcdb7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7dcdba: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7dcdbd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7dcdc0: je 0x7dcfff */
  if (zf) goto L_7dcfff;
L_7dcdc6: /* 7dcdc6: cmp dword ptr [esi + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dcdc9: jne 0x7dcfff */
  if (!zf) goto L_7dcfff;
L_7dcdcf: /* 7dcdcf: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dcdd2: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 7dcdd5: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dcddbu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dcddb: mov edi, esi */
  edi = esi;
/* 7dcddd: mov dword ptr [ebp - 0x70], esi */
  W32((uint32_t)(ebp + 0xffffff90u), esi);
/* 7dcde0: mov dword ptr [ebp - 0x6c], edi */
  W32((uint32_t)(ebp + 0xffffff94u), edi);
/* 7dcde3: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 7dcde6: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 7dcde9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dcded: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7dcdf0: /* 7dcdf0: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dcdf3: jge 0x7dcf67 */
  if ((sf == of)) goto L_7dcf67;
L_7dcdf9: /* 7dcdf9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7dcdfb: lea esi, [ebx + ebx*8] */
  esi = (uint32_t)(ebx + ebx*8);
/* 7dcdfe: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7dce01: lea ecx, [eax + esi + 4] */
  ecx = (uint32_t)(eax + esi + 0x4u);
/* 7dce05: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dce0bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dce0b: push 0xadd37c */
  { uint32_t v = 0xadd37cu; esp -= 4; W32(esp, v); }
/* 7dce10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dce11: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7dce14: push 0xadd36c */
  { uint32_t v = 0xadd36cu; esp -= 4; W32(esp, v); }
/* 7dce19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dce1a: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7dce20u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7dce20: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dce23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dce24: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dce27: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7dce2b: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7dce31u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dce31: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7dce34: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dce38: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dce3eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dce3e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7dce40: lea eax, [edx + esi + 0x10] */
  eax = (uint32_t)(edx + esi + 0x10u);
/* 7dce44: xor edx, edx */
  edx = 0;
/* 7dce46: mov ecx, eax */
  ecx = eax;
/* 7dce48: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 7dce4b: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 7dce4e: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 7dce51: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 7dce54: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7dce58: jmp 0x7dce60 */
  goto L_7dce60;
L_7dce60: /* 7dce60: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dce63: jge 0x7dceff */
  if ((sf == of)) goto L_7dceff;
L_7dce69: /* 7dce69: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dce6c: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 7dce6f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dce71: mov dword ptr [ebp - 0x14], 0xadd368 */
  W32((uint32_t)(ebp + 0xffffffecu), 0xadd368u);
/* 7dce78: jne 0x7dcef8 */
  if (!zf) goto L_7dcef8;
L_7dce7a: /* 7dce7a: mov dword ptr [ebp - 0x14], 0xb08944 */
  W32((uint32_t)(ebp + 0xffffffecu), 0xb08944u);
/* 7dce81: mov edi, 0xb08944 */
  edi = 0xb08944u;
L_7dce86: /* 7dce86: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7dce88: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 7dce8b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7dce8d: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 7dce90: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 7dce93: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dce99u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dce99: mov ecx, ebx */
  ecx = ebx;
/* 7dce9b: mov esi, eax */
  esi = eax;
/* 7dce9d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dcea3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dcea3: mov ecx, 0xadd37c */
  ecx = 0xadd37cu;
/* 7dcea8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dcea9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dceac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dcead: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dceae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dceaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dceb0: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dceb3: push 0xadd34c */
  { uint32_t v = 0xadd34cu; esp -= 4; W32(esp, v); }
/* 7dceb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dceb9: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7dcebfu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7dcebf: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dcec2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcec3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dcec6: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7dceca: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7dced0u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dced0: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dced3: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7dced7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dceddu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dcedd: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7dcee0: mov ebx, dword ptr [ebp - 0x68] */
  ebx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7dcee3: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 7dcee6: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7dcee9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dceea: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 7dceed: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7dcef0: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7dcef3: jmp 0x7dce60 */
  goto L_7dce60;
L_7dcef8: /* 7dcef8: mov edi, 0xadd368 */
  edi = 0xadd368u;
/* 7dcefd: jmp 0x7dce86 */
  goto L_7dce86;
L_7dceff: /* 7dceff: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 7dcf02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dcf04: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dcf08: je 0x7dcf2d */
  if (zf) goto L_7dcf2d;
L_7dcf0a: /* 7dcf0a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7dcf10: /* 7dcf10: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7dcf13: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 7dcf16: lea edx, [edx + edx + 8] */
  edx = (uint32_t)(edx + edx + 0x8u);
/* 7dcf1a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dcf1c: jle 0x7dcf28 */
  if ((zf || sf != of)) goto L_7dcf28;
L_7dcf1e: /* 7dcf1e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7dcf1f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7dcf21: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7dcf23: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 7dcf26: jmp 0x7dcf10 */
  goto L_7dcf10;
L_7dcf28: /* 7dcf28: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7dcf2du); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
L_7dcf2d: /* 7dcf2d: mov eax, 0xadd37c */
  eax = 0xadd37cu;
/* 7dcf32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcf33: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 7dcf36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcf37: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7dcf3du); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7dcf3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dcf40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcf41: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dcf44: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7dcf48: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7dcf4eu); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dcf4e: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7dcf51: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dcf55: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dcf5bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dcf5b: mov esi, dword ptr [ebp - 0x70] */
  esi = R32((uint32_t)(ebp + 0xffffff90u));
/* 7dcf5e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7dcf5f: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 7dcf62: jmp 0x7dcdf0 */
  goto L_7dcdf0;
L_7dcf67: /* 7dcf67: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7dcf6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dcf6c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dcf70: je 0x7dcf91 */
  if (zf) goto L_7dcf91;
L_7dcf72: /* 7dcf72: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7dcf75: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 7dcf78: lea ecx, [ecx + ecx + 8] */
  ecx = (uint32_t)(ecx + ecx + 0x8u);
/* 7dcf7c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dcf7e: jle 0x7dcf8a */
  if ((zf || sf != of)) goto L_7dcf8a;
L_7dcf80: /* 7dcf80: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7dcf81: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7dcf83: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7dcf85: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7dcf88: jmp 0x7dcf72 */
  goto L_7dcf72;
L_7dcf8a: /* 7dcf8a: mov ecx, esi */
  ecx = esi;
/* 7dcf8c: call 0x6c3215 */
  esp -= 4; W32(esp, 0x7dcf91u); SPILL(); f_6c3215(); if (g_unwind) return; RELOAD();
L_7dcf91: /* 7dcf91: mov edx, dword ptr [0xcfa3b0] */
  edx = R32((uint32_t)(0xcfa3b0u));
/* 7dcf97: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7dcf99: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7dcf9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcf9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dcf9e: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dcfa1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dcfa2: call dword ptr [0xcfa840] */
  esp -= 4; W32(esp, 0x7dcfa8u); SPILL(); f_4e1d39(); if (g_unwind) return; /* Core!?appSaveStringToFile@@YAHABVFString@@PBGPAVFFileManager@@@Z */ RELOAD();
/* 7dcfa8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dcfab: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dcfae: mov esi, eax */
  esi = eax;
/* 7dcfb0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dcfb4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dcfbau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dcfba: mov eax, esi */
  eax = esi;
/* 7dcfbc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dcfbf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dcfc6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dcfc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dcfc8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dcfc9: mov esp, ebp */
  esp = ebp;
/* 7dcfcb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dcfcc: ret 4 */
  esp += 8; SPILL(); return;
L_7dcfff: /* 7dcfff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dd002: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dd003: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd004: mov eax, 1 */
  eax = 0x1u;
/* 7dd009: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dd010: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dd011: mov esp, ebp */
  esp = ebp;
/* 7dd013: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dd014: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dce5a(void) {
  LOAD_REGS();
  goto L_7dce5a;
L_7dcdf0: /* 7dcdf0: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dcdf3: jge 0x7dcf67 */
  if ((sf == of)) goto L_7dcf67;
L_7dcdf9: /* 7dcdf9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7dcdfb: lea esi, [ebx + ebx*8] */
  esi = (uint32_t)(ebx + ebx*8);
/* 7dcdfe: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7dce01: lea ecx, [eax + esi + 4] */
  ecx = (uint32_t)(eax + esi + 0x4u);
/* 7dce05: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dce0bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dce0b: push 0xadd37c */
  { uint32_t v = 0xadd37cu; esp -= 4; W32(esp, v); }
/* 7dce10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dce11: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7dce14: push 0xadd36c */
  { uint32_t v = 0xadd36cu; esp -= 4; W32(esp, v); }
/* 7dce19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dce1a: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7dce20u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7dce20: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dce23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dce24: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dce27: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7dce2b: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7dce31u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dce31: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7dce34: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dce38: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dce3eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dce3e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7dce40: lea eax, [edx + esi + 0x10] */
  eax = (uint32_t)(edx + esi + 0x10u);
/* 7dce44: xor edx, edx */
  edx = 0;
/* 7dce46: mov ecx, eax */
  ecx = eax;
/* 7dce48: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 7dce4b: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 7dce4e: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 7dce51: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 7dce54: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7dce58: jmp 0x7dce60 */
  goto L_7dce60;
L_7dce5a: /* 7dce5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7dce60: /* 7dce60: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dce63: jge 0x7dceff */
  if ((sf == of)) goto L_7dceff;
L_7dce69: /* 7dce69: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dce6c: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 7dce6f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dce71: mov dword ptr [ebp - 0x14], 0xadd368 */
  W32((uint32_t)(ebp + 0xffffffecu), 0xadd368u);
/* 7dce78: jne 0x7dcef8 */
  if (!zf) goto L_7dcef8;
L_7dce7a: /* 7dce7a: mov dword ptr [ebp - 0x14], 0xb08944 */
  W32((uint32_t)(ebp + 0xffffffecu), 0xb08944u);
/* 7dce81: mov edi, 0xb08944 */
  edi = 0xb08944u;
L_7dce86: /* 7dce86: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7dce88: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 7dce8b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7dce8d: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 7dce90: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 7dce93: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dce99u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dce99: mov ecx, ebx */
  ecx = ebx;
/* 7dce9b: mov esi, eax */
  esi = eax;
/* 7dce9d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dcea3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dcea3: mov ecx, 0xadd37c */
  ecx = 0xadd37cu;
/* 7dcea8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dcea9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dceac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dcead: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dceae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dceaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dceb0: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dceb3: push 0xadd34c */
  { uint32_t v = 0xadd34cu; esp -= 4; W32(esp, v); }
/* 7dceb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dceb9: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7dcebfu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7dcebf: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dcec2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcec3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dcec6: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7dceca: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7dced0u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dced0: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dced3: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7dced7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dceddu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dcedd: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7dcee0: mov ebx, dword ptr [ebp - 0x68] */
  ebx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7dcee3: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 7dcee6: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7dcee9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dceea: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 7dceed: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7dcef0: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7dcef3: jmp 0x7dce60 */
  goto L_7dce60;
L_7dcef8: /* 7dcef8: mov edi, 0xadd368 */
  edi = 0xadd368u;
/* 7dcefd: jmp 0x7dce86 */
  goto L_7dce86;
L_7dceff: /* 7dceff: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 7dcf02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dcf04: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dcf08: je 0x7dcf2d */
  if (zf) goto L_7dcf2d;
L_7dcf0a: /* 7dcf0a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7dcf10: /* 7dcf10: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7dcf13: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 7dcf16: lea edx, [edx + edx + 8] */
  edx = (uint32_t)(edx + edx + 0x8u);
/* 7dcf1a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dcf1c: jle 0x7dcf28 */
  if ((zf || sf != of)) goto L_7dcf28;
L_7dcf1e: /* 7dcf1e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7dcf1f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7dcf21: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7dcf23: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 7dcf26: jmp 0x7dcf10 */
  goto L_7dcf10;
L_7dcf28: /* 7dcf28: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7dcf2du); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
L_7dcf2d: /* 7dcf2d: mov eax, 0xadd37c */
  eax = 0xadd37cu;
/* 7dcf32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcf33: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 7dcf36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcf37: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7dcf3du); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7dcf3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dcf40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcf41: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dcf44: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7dcf48: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7dcf4eu); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dcf4e: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7dcf51: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dcf55: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dcf5bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dcf5b: mov esi, dword ptr [ebp - 0x70] */
  esi = R32((uint32_t)(ebp + 0xffffff90u));
/* 7dcf5e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7dcf5f: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 7dcf62: jmp 0x7dcdf0 */
  goto L_7dcdf0;
L_7dcf67: /* 7dcf67: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7dcf6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dcf6c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dcf70: je 0x7dcf91 */
  if (zf) goto L_7dcf91;
L_7dcf72: /* 7dcf72: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7dcf75: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 7dcf78: lea ecx, [ecx + ecx + 8] */
  ecx = (uint32_t)(ecx + ecx + 0x8u);
/* 7dcf7c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dcf7e: jle 0x7dcf8a */
  if ((zf || sf != of)) goto L_7dcf8a;
L_7dcf80: /* 7dcf80: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7dcf81: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7dcf83: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7dcf85: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7dcf88: jmp 0x7dcf72 */
  goto L_7dcf72;
L_7dcf8a: /* 7dcf8a: mov ecx, esi */
  ecx = esi;
/* 7dcf8c: call 0x6c3215 */
  esp -= 4; W32(esp, 0x7dcf91u); SPILL(); f_6c3215(); if (g_unwind) return; RELOAD();
L_7dcf91: /* 7dcf91: mov edx, dword ptr [0xcfa3b0] */
  edx = R32((uint32_t)(0xcfa3b0u));
/* 7dcf97: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7dcf99: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7dcf9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dcf9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dcf9e: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dcfa1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dcfa2: call dword ptr [0xcfa840] */
  esp -= 4; W32(esp, 0x7dcfa8u); SPILL(); f_4e1d39(); if (g_unwind) return; /* Core!?appSaveStringToFile@@YAHABVFString@@PBGPAVFFileManager@@@Z */ RELOAD();
/* 7dcfa8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dcfab: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dcfae: mov esi, eax */
  esi = eax;
/* 7dcfb0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dcfb4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dcfbau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dcfba: mov eax, esi */
  eax = esi;
/* 7dcfbc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dcfbf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dcfc6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dcfc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dcfc8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dcfc9: mov esp, ebp */
  esp = ebp;
/* 7dcfcb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dcfcc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dcfcf(void) {
  LOAD_REGS();
L_7dcfcf: /* 7dcfcf: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7dcfd2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dcfd7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7dcfda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dcfdb: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7dcfde: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dcfe3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dcfe3(); return;
}

void f_7dcfe3(void) {
  LOAD_REGS();
L_7dcfe3: /* 7dcfe3: push 0xa0f980 */
  { uint32_t v = 0xa0f980u; esp -= 4; W32(esp, v); }
/* 7dcfe8: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7dcfed: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dcff3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dcff3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dcff6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dcff8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dcffa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dcfffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7dcfff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dd002: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dd003: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd004: mov eax, 1 */
  eax = 0x1u;
/* 7dd009: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dd010: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dd011: mov esp, ebp */
  esp = ebp;
/* 7dd013: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dd014: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dd0d0(void) {
  LOAD_REGS();
L_7dd0d0: /* 7dd0d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd0d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd0d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7dd0d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd0d7: mov esi, ecx */
  esi = ecx;
/* 7dd0d9: call 0x6c824c */
  esp -= 4; W32(esp, 0x7dd0deu); SPILL(); f_6c824c(); if (g_unwind) return; RELOAD();
/* 7dd0de: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 7dd0e1: mov ecx, esi */
  ecx = esi;
/* 7dd0e3: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7dd0e6: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7dd0ebu); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7dd0eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dd0ec: mov eax, esi */
  eax = esi;
/* 7dd0ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd0ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dd110(void) {
  LOAD_REGS();
L_7dd110: /* 7dd110: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dd112: push 0x9d05e8 */
  { uint32_t v = 0x9d05e8u; esp -= 4; W32(esp, v); }
/* 7dd117: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dd11d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd11e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dd125: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd126: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd127: mov esi, ecx */
  esi = ecx;
/* 7dd129: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7dd12d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7dd133u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7dd133: xor eax, eax */
  eax = 0;
/* 7dd135: mov ecx, esi */
  ecx = esi;
/* 7dd137: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7dd13b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dd13e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7dd145: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7dd14au); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7dd14a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7dd14e: mov eax, esi */
  eax = esi;
/* 7dd150: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd151: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dd158: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dd15b: ret  */
  esp += 4; SPILL(); return;
}

void f_7dd180(void) {
  LOAD_REGS();
L_7dd180: /* 7dd180: jmp 0x6c312a */
  SPILL(); f_6c312a(); return;
}

void f_7dd1a0(void) {
  LOAD_REGS();
L_7dd1a0: /* 7dd1a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd1a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd1a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7dd1a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd1a7: mov esi, ecx */
  esi = ecx;
/* 7dd1a9: call 0x6c824c */
  esp -= 4; W32(esp, 0x7dd1aeu); SPILL(); f_6c824c(); if (g_unwind) return; RELOAD();
/* 7dd1ae: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 7dd1b1: mov ecx, esi */
  ecx = esi;
/* 7dd1b3: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7dd1b6: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7dd1bbu); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7dd1bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dd1bc: mov eax, esi */
  eax = esi;
/* 7dd1be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd1bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dd1e0(void) {
  LOAD_REGS();
L_7dd1e0: /* 7dd1e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7dd1e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd1e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd1e6: mov esi, ecx */
  esi = ecx;
/* 7dd1e8: call 0x6c2531 */
  esp -= 4; W32(esp, 0x7dd1edu); SPILL(); f_6c2531(); if (g_unwind) return; RELOAD();
/* 7dd1ed: mov eax, esi */
  eax = esi;
/* 7dd1ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd1f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dd210(void) {
  LOAD_REGS();
L_7dd210: /* 7dd210: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dd211: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd212: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd213: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7dd217: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7dd219: mov esi, ecx */
  esi = ecx;
/* 7dd21b: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7dd21e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd21f: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7dd222: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7dd224: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7dd22au); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dd22a: lea ebx, [edi + 0x10] */
  ebx = (uint32_t)(edi + 0x10u);
/* 7dd22d: lea edi, [esi + 0x10] */
  edi = (uint32_t)(esi + 0x10u);
/* 7dd230: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dd231: mov ecx, edi */
  ecx = edi;
/* 7dd233: call 0x6c824c */
  esp -= 4; W32(esp, 0x7dd238u); SPILL(); f_6c824c(); if (g_unwind) return; RELOAD();
/* 7dd238: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 7dd23b: mov ecx, edi */
  ecx = edi;
/* 7dd23d: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 7dd240: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7dd245u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7dd245: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dd246: mov eax, esi */
  eax = esi;
/* 7dd248: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd249: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dd24a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dd260(void) {
  LOAD_REGS();
L_7dd260: /* 7dd260: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dd262: push 0x9d0608 */
  { uint32_t v = 0x9d0608u; esp -= 4; W32(esp, v); }
/* 7dd267: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dd26d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd26e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dd275: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd276: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd277: mov esi, ecx */
  esi = ecx;
/* 7dd279: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7dd27d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7dd283u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7dd283: xor eax, eax */
  eax = 0;
/* 7dd285: mov ecx, esi */
  ecx = esi;
/* 7dd287: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7dd28b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dd28e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7dd295: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7dd29au); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7dd29a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7dd29e: mov eax, esi */
  eax = esi;
/* 7dd2a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd2a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dd2a8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dd2ab: ret  */
  esp += 4; SPILL(); return;
}

void f_7dd2d0(void) {
  LOAD_REGS();
L_7dd2d0: /* 7dd2d0: jmp 0x6c312a */
  SPILL(); f_6c312a(); return;
}

void f_7dd2f0(void) {
  LOAD_REGS();
L_7dd2f0: /* 7dd2f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dd2f2: push 0x9d062c */
  { uint32_t v = 0x9d062cu; esp -= 4; W32(esp, v); }
/* 7dd2f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dd2fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd2fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dd305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd306: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd307: mov esi, ecx */
  esi = ecx;
/* 7dd309: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7dd30d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7dd310: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7dd318: call 0x6c312a */
  esp -= 4; W32(esp, 0x7dd31du); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7dd31d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7dd320: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7dd328: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dd32eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dd32e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7dd332: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd333: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dd33a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dd33d: ret  */
  esp += 4; SPILL(); return;
}

void f_7dd360(void) {
  LOAD_REGS();
L_7dd360: /* 7dd360: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7dd364: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd366: mov esi, ecx */
  esi = ecx;
/* 7dd368: call 0x6c2531 */
  esp -= 4; W32(esp, 0x7dd36du); SPILL(); f_6c2531(); if (g_unwind) return; RELOAD();
/* 7dd36d: mov eax, esi */
  eax = esi;
/* 7dd36f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd370: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dd390(void) {
  LOAD_REGS();
L_7dd390: /* 7dd390: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dd392: push 0x9d064c */
  { uint32_t v = 0x9d064cu; esp -= 4; W32(esp, v); }
/* 7dd397: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dd39d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd39e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dd3a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd3a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd3a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd3a8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 7dd3ac: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7dd3ae: mov esi, ecx */
  esi = ecx;
/* 7dd3b0: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7dd3b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd3b4: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7dd3b7: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7dd3bb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7dd3bd: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7dd3c3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7dd3c3: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7dd3c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd3c7: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7dd3ca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7dd3d2: call 0x6c2531 */
  esp -= 4; W32(esp, 0x7dd3d7u); SPILL(); f_6c2531(); if (g_unwind) return; RELOAD();
/* 7dd3d7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7dd3db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dd3dc: mov eax, esi */
  eax = esi;
/* 7dd3de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd3df: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dd3e6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dd3e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dd410(void) {
  LOAD_REGS();
L_7dd410: /* 7dd410: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dd412: push 0x9d0669 */
  { uint32_t v = 0x9d0669u; esp -= 4; W32(esp, v); }
/* 7dd417: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dd41d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd41e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dd425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd426: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dd427: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd428: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd429: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7dd42d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7dd430: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 7dd432: mov esi, ecx */
  esi = ecx;
/* 7dd434: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd435: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 7dd439: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7dd43fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7dd43f: xor ebx, ebx */
  ebx = 0;
/* 7dd441: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7dd444: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dd447: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7dd44b: jle 0x7dd47e */
  if ((zf || sf != of)) goto L_7dd47e;
L_7dd44d: /* 7dd44d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dd44e: xor ebp, ebp */
  ebp = 0;
L_7dd450: /* 7dd450: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 7dd452: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dd454: mov ecx, esi */
  ecx = esi;
/* 7dd456: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7dd45cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7dd45c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7dd45e: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 7dd461: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7dd464: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dd466: je 0x7dd472 */
  if (zf) goto L_7dd472;
L_7dd468: /* 7dd468: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7dd46a: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7dd46c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd46d: call 0x6ca8c1 */
  esp -= 4; W32(esp, 0x7dd472u); SPILL(); f_6ca8c1(); if (g_unwind) return; RELOAD();
L_7dd472: /* 7dd472: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7dd475: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7dd476: add ebp, 0x24 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7dd479: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dd47b: jl 0x7dd450 */
  if ((sf != of)) goto L_7dd450;
L_7dd47d: /* 7dd47d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7dd47e: /* 7dd47e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7dd482: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dd483: mov eax, esi */
  eax = esi;
/* 7dd485: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd486: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dd487: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dd48e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dd491: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dd4d0(void) {
  LOAD_REGS();
L_7dd4d0: /* 7dd4d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd4d1: mov esi, ecx */
  esi = ecx;
/* 7dd4d3: call 0x6c29c3 */
  esp -= 4; W32(esp, 0x7dd4d8u); SPILL(); f_6c29c3(); if (g_unwind) return; RELOAD();
/* 7dd4d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7dd4dd: je 0x7dd4ec */
  if (zf) goto L_7dd4ec;
L_7dd4df: /* 7dd4df: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7dd4e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7dd4e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dd4e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd4e9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7dd4ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dd4ec: /* 7dd4ec: mov eax, esi */
  eax = esi;
/* 7dd4ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd4ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dd510(void) {
  LOAD_REGS();
L_7dd510: /* 7dd510: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dd512: push 0x9d068c */
  { uint32_t v = 0x9d068cu; esp -= 4; W32(esp, v); }
/* 7dd517: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dd51d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd51e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dd525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd526: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7dd52a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd52b: mov esi, ecx */
  esi = ecx;
/* 7dd52d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd52e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7dd531: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 7dd535: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7dd53bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7dd53b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7dd53f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd540: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7dd543: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 7dd54b: call 0x6c2531 */
  esp -= 4; W32(esp, 0x7dd550u); SPILL(); f_6c2531(); if (g_unwind) return; RELOAD();
/* 7dd550: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7dd554: mov eax, esi */
  eax = esi;
/* 7dd556: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd557: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dd55e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dd561: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7dd590(void) {
  LOAD_REGS();
L_7dd590: /* 7dd590: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dd591: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7dd595: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7dd597: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dd598: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd599: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7dd59f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd5a0: mov ebp, ecx */
  ebp = ecx;
/* 7dd5a2: jge 0x7dd5b8 */
  if ((sf == of)) goto L_7dd5b8;
L_7dd5a4: /* 7dd5a4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7dd5a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7dd5ae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7dd5b3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7dd5b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dd5b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7dd5b8: /* 7dd5b8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dd5bb: jle 0x7dd5d1 */
  if ((zf || sf != of)) goto L_7dd5d1;
L_7dd5bd: /* 7dd5bd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7dd5c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7dd5c7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7dd5cc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7dd5ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dd5ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7dd5d1: /* 7dd5d1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7dd5d5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 7dd5d8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dd5db: jle 0x7dd5f1 */
  if ((zf || sf != of)) goto L_7dd5f1;
L_7dd5dd: /* 7dd5dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7dd5e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7dd5e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7dd5ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7dd5eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dd5ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7dd5f1: /* 7dd5f1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dd5f3: jge 0x7dd610 */
  if ((sf == of)) goto L_7dd610;
L_7dd5f5: /* 7dd5f5: lea esi, [ebx + ebx*8] */
  esi = (uint32_t)(ebx + ebx*8);
/* 7dd5f8: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7dd5fb: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7dd5fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7dd600: /* 7dd600: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7dd603: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7dd605: call 0x6c29c3 */
  esp -= 4; W32(esp, 0x7dd60au); SPILL(); f_6c29c3(); if (g_unwind) return; RELOAD();
/* 7dd60a: add esi, 0x24 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7dd60d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7dd60e: jne 0x7dd600 */
  if (!zf) goto L_7dd600;
L_7dd610: /* 7dd610: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7dd614: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 7dd616: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd617: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dd618: mov ecx, ebp */
  ecx = ebp;
/* 7dd61a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7dd620u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7dd620: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dd621: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd622: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dd623: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dd624: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7dd660(void) {
  LOAD_REGS();
L_7dd660: /* 7dd660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd661: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd662: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 7dd664: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dd666: mov esi, ecx */
  esi = ecx;
/* 7dd668: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7dd66eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7dd66e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7dd670: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7dd673: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7dd676: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dd678: je 0x7dd68d */
  if (zf) goto L_7dd68d;
L_7dd67a: /* 7dd67a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7dd67e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7dd682: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dd683: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd684: call 0x6cc2e8 */
  esp -= 4; W32(esp, 0x7dd689u); SPILL(); f_6cc2e8(); if (g_unwind) return; RELOAD();
/* 7dd689: mov edi, eax */
  edi = eax;
/* 7dd68b: jmp 0x7dd68f */
  goto L_7dd68f;
L_7dd68d: /* 7dd68d: xor edi, edi */
  edi = 0;
L_7dd68f: /* 7dd68f: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7dd692: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dd698u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dd698: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd699: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7dd69eu); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7dd69e: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7dd6a1: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7dd6a4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dd6a7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7dd6a8: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7dd6aa: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 7dd6ad: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7dd6af: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7dd6b2: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 7dd6b5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7dd6b6: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7dd6b9: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 7dd6bc: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7dd6bf: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7dd6c3: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dd6c5: jge 0x7dd6d3 */
  if ((sf == of)) goto L_7dd6d3;
L_7dd6c7: /* 7dd6c7: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7dd6c9: mov ecx, esi */
  ecx = esi;
/* 7dd6cb: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7dd6ce: call 0x6c3215 */
  esp -= 4; W32(esp, 0x7dd6d3u); SPILL(); f_6c3215(); if (g_unwind) return; RELOAD();
L_7dd6d3: /* 7dd6d3: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 7dd6d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dd6d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd6d8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7dd700(void) {
  LOAD_REGS();
L_7dd700: /* 7dd700: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dd702: push 0x9d06a9 */
  { uint32_t v = 0x9d06a9u; esp -= 4; W32(esp, v); }
/* 7dd707: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dd70d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd70e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dd715: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd716: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd717: mov esi, ecx */
  esi = ecx;
/* 7dd719: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7dd71d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7dd720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd721: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dd723: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7dd72b: call 0x6cc32e */
  esp -= 4; W32(esp, 0x7dd730u); SPILL(); f_6cc32e(); if (g_unwind) return; RELOAD();
/* 7dd730: mov ecx, esi */
  ecx = esi;
/* 7dd732: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7dd73a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7dd740u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7dd740: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7dd744: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd745: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dd74c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dd74f: ret  */
  esp += 4; SPILL(); return;
}

void f_7dd770(void) {
  LOAD_REGS();
L_7dd770: /* 7dd770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd771: mov esi, ecx */
  esi = ecx;
/* 7dd773: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7dd776: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd777: xor edi, edi */
  edi = 0;
/* 7dd779: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7dd77b: jle 0x7dd795 */
  if ((zf || sf != of)) goto L_7dd795;
L_7dd77d: /* 7dd77d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dd77e: xor ebx, ebx */
  ebx = 0;
L_7dd780: /* 7dd780: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7dd782: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7dd784: call 0x6c29c3 */
  esp -= 4; W32(esp, 0x7dd789u); SPILL(); f_6c29c3(); if (g_unwind) return; RELOAD();
/* 7dd789: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7dd78c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7dd78d: add ebx, 0x24 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7dd790: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dd792: jl 0x7dd780 */
  if ((sf != of)) goto L_7dd780;
L_7dd794: /* 7dd794: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7dd795: /* 7dd795: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7dd799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd79a: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 7dd79c: mov ecx, esi */
  ecx = esi;
/* 7dd79e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7dd7a4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7dd7a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dd7a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd7a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dd7c0(void) {
  LOAD_REGS();
L_7dd7c0: /* 7dd7c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dd7c2: push 0x9d06c8 */
  { uint32_t v = 0x9d06c8u; esp -= 4; W32(esp, v); }
/* 7dd7c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dd7cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd7ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dd7d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd7d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd7d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd7d8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 7dd7dc: mov esi, ecx */
  esi = ecx;
/* 7dd7de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd7df: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7dd7e3: call 0x6c365c */
  esp -= 4; W32(esp, 0x7dd7e8u); SPILL(); f_6c365c(); if (g_unwind) return; RELOAD();
/* 7dd7e8: xor eax, eax */
  eax = 0;
/* 7dd7ea: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7dd7ee: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dd7f1: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 7dd7f4: mov ecx, esi */
  ecx = esi;
/* 7dd7f6: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7dd7f9: call 0x6c3215 */
  esp -= 4; W32(esp, 0x7dd7feu); SPILL(); f_6c3215(); if (g_unwind) return; RELOAD();
/* 7dd7fe: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7dd802: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dd803: mov eax, esi */
  eax = esi;
/* 7dd805: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd806: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dd80d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dd810: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dd840(void) {
  LOAD_REGS();
L_7dd840: /* 7dd840: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dd841: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd842: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd843: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7dd847: mov esi, ecx */
  esi = ecx;
/* 7dd849: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dd84b: je 0x7dd890 */
  if (zf) goto L_7dd890;
L_7dd84d: /* 7dd84d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7dd850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd851: call 0x6c8d00 */
  esp -= 4; W32(esp, 0x7dd856u); SPILL(); f_6c8d00(); if (g_unwind) return; RELOAD();
/* 7dd856: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7dd859: xor ebx, ebx */
  ebx = 0;
/* 7dd85b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7dd85d: jle 0x7dd890 */
  if ((zf || sf != of)) goto L_7dd890;
L_7dd85f: /* 7dd85f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dd860: xor ebp, ebp */
  ebp = 0;
L_7dd862: /* 7dd862: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 7dd864: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dd866: mov ecx, esi */
  ecx = esi;
/* 7dd868: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7dd86eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7dd86e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7dd870: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 7dd873: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7dd876: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dd878: je 0x7dd884 */
  if (zf) goto L_7dd884;
L_7dd87a: /* 7dd87a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7dd87c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7dd87e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd87f: call 0x6ca8c1 */
  esp -= 4; W32(esp, 0x7dd884u); SPILL(); f_6ca8c1(); if (g_unwind) return; RELOAD();
L_7dd884: /* 7dd884: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7dd887: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7dd888: add ebp, 0x24 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7dd88b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dd88d: jl 0x7dd862 */
  if ((sf != of)) goto L_7dd862;
L_7dd88f: /* 7dd88f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7dd890: /* 7dd890: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dd891: mov eax, esi */
  eax = esi;
/* 7dd893: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd894: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dd895: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dd8c0(void) {
  LOAD_REGS();
L_7dd8c0: /* 7dd8c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dd8c2: push 0x9d06e8 */
  { uint32_t v = 0x9d06e8u; esp -= 4; W32(esp, v); }
/* 7dd8c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dd8cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd8ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dd8d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd8d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd8d7: mov esi, ecx */
  esi = ecx;
/* 7dd8d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7dd8dd: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7dd8e3u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7dd8e3: xor eax, eax */
  eax = 0;
/* 7dd8e5: mov ecx, esi */
  ecx = esi;
/* 7dd8e7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7dd8eb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dd8ee: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7dd8f5: call 0x6c3215 */
  esp -= 4; W32(esp, 0x7dd8fau); SPILL(); f_6c3215(); if (g_unwind) return; RELOAD();
/* 7dd8fa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7dd8fe: mov eax, esi */
  eax = esi;
/* 7dd900: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd901: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dd908: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dd90b: ret  */
  esp += 4; SPILL(); return;
}

void f_7dd930(void) {
  LOAD_REGS();
L_7dd930: /* 7dd930: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dd932: push 0x9d0708 */
  { uint32_t v = 0x9d0708u; esp -= 4; W32(esp, v); }
/* 7dd937: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dd93d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd93e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dd945: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dd946: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd947: mov esi, ecx */
  esi = ecx;
/* 7dd949: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7dd94d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dd950: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dd952: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7dd95a: je 0x7dd96a */
  if (zf) goto L_7dd96a;
L_7dd95c: /* 7dd95c: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7dd962: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7dd964: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dd966: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dd967: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7dd96au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dd96a: /* 7dd96a: mov ecx, esi */
  ecx = esi;
/* 7dd96c: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 7dd973: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 7dd97a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7dd982: call 0x6c5bdc */
  esp -= 4; W32(esp, 0x7dd987u); SPILL(); f_6c5bdc(); if (g_unwind) return; RELOAD();
/* 7dd987: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7dd98b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd98c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dd993: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dd996: ret  */
  esp += 4; SPILL(); return;
}

void f_7dd9c0(void) {
  LOAD_REGS();
L_7dd9c0: /* 7dd9c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd9c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dd9c3: mov esi, ecx */
  esi = ecx;
/* 7dd9c5: call 0x6c8d00 */
  esp -= 4; W32(esp, 0x7dd9cau); SPILL(); f_6c8d00(); if (g_unwind) return; RELOAD();
/* 7dd9ca: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7dd9d1: mov ecx, esi */
  ecx = esi;
/* 7dd9d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dd9d4: jmp 0x6c3215 */
  SPILL(); f_6c3215(); return;
}

void f_7dd9f0(void) {
  LOAD_REGS();
L_7dd9f0: /* 7dd9f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dd9f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dd9f2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 7dd9f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dd9f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dd9f8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dd9f9: mov ebx, ecx */
  ebx = ecx;
/* 7dd9fb: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7dda00u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7dda00: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 7dda03: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 7dda06: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dda09: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7dda0a: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7dda0c: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 7dda0f: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dda12: je 0x7dda35 */
  if (zf) goto L_7dda35;
L_7dda14: /* 7dda14: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7dda16: lea edi, [esi + esi*8] */
  edi = (uint32_t)(esi + esi*8);
/* 7dda19: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7dda1c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dda1d: lea ecx, [edi + eax + 4] */
  ecx = (uint32_t)(edi + eax + 0x4u);
/* 7dda21: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x7dda27u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 7dda27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dda29: jne 0x7dda49 */
  if (!zf) goto L_7dda49;
L_7dda2b: /* 7dda2b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7dda2d: mov esi, dword ptr [edi + ecx] */
  esi = R32((uint32_t)(edi + ecx));
/* 7dda30: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dda33: jne 0x7dda14 */
  if (!zf) goto L_7dda14;
L_7dda35: /* 7dda35: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7dda39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dda3a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dda3b: mov ecx, ebx */
  ecx = ebx;
/* 7dda3d: call 0x6cb375 */
  esp -= 4; W32(esp, 0x7dda42u); SPILL(); f_6cb375(); if (g_unwind) return; RELOAD();
/* 7dda42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dda43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dda44: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dda45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dda46: ret 8 */
  esp += 12; SPILL(); return;
L_7dda49: /* 7dda49: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7dda4b: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 7dda4f: lea esi, [esi + esi*8] */
  esi = (uint32_t)(esi + esi*8);
/* 7dda52: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7dda55: lea edi, [esi + edx + 0x10] */
  edi = (uint32_t)(esi + edx + 0x10u);
/* 7dda59: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dda5a: mov ecx, edi */
  ecx = edi;
/* 7dda5c: call 0x6c824c */
  esp -= 4; W32(esp, 0x7dda61u); SPILL(); f_6c824c(); if (g_unwind) return; RELOAD();
/* 7dda61: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7dda64: mov ecx, edi */
  ecx = edi;
/* 7dda66: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 7dda69: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7dda6eu); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7dda6e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7dda70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dda71: lea eax, [esi + ecx + 0x10] */
  eax = (uint32_t)(esi + ecx + 0x10u);
/* 7dda75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dda76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dda77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dda78: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ddab0(void) {
  LOAD_REGS();
L_7ddab0: /* 7ddab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddab1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddab2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7ddab6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddab7: mov esi, ecx */
  esi = ecx;
/* 7ddab9: call 0x6c269e */
  esp -= 4; W32(esp, 0x7ddabeu); SPILL(); f_6c269e(); if (g_unwind) return; RELOAD();
/* 7ddabe: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 7ddac1: mov ecx, esi */
  ecx = esi;
/* 7ddac3: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7ddac6: call 0x6c3215 */
  esp -= 4; W32(esp, 0x7ddacbu); SPILL(); f_6c3215(); if (g_unwind) return; RELOAD();
/* 7ddacb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ddacc: mov eax, esi */
  eax = esi;
/* 7ddace: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ddacf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ddaf0(void) {
  LOAD_REGS();
L_7ddaf0: /* 7ddaf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ddaf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddaf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ddaf6: mov esi, ecx */
  esi = ecx;
/* 7ddaf8: call 0x6c2d74 */
  esp -= 4; W32(esp, 0x7ddafdu); SPILL(); f_6c2d74(); if (g_unwind) return; RELOAD();
/* 7ddafd: mov eax, esi */
  eax = esi;
/* 7ddaff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ddb00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ddb20(void) {
  LOAD_REGS();
L_7ddb20: /* 7ddb20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ddb21: mov ebp, esp */
  ebp = esp;
/* 7ddb23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ddb25: push 0x9d0753 */
  { uint32_t v = 0x9d0753u; esp -= 4; W32(esp, v); }
/* 7ddb2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ddb30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ddb31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ddb38: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ddb3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ddb3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddb3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddb3e: xor edi, edi */
  edi = 0;
/* 7ddb40: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ddb43: mov esi, ecx */
  esi = ecx;
/* 7ddb45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddb46: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7ddb49: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7ddb4c: call 0x6c8d00 */
  esp -= 4; W32(esp, 0x7ddb51u); SPILL(); f_6c8d00(); if (g_unwind) return; RELOAD();
/* 7ddb51: mov ecx, esi */
  ecx = esi;
/* 7ddb53: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7ddb5a: call 0x6c3215 */
  esp -= 4; W32(esp, 0x7ddb5fu); SPILL(); f_6c3215(); if (g_unwind) return; RELOAD();
/* 7ddb5f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ddb62: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7ddb68u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7ddb68: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 7ddb6d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ddb6f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ddb72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ddb73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ddb74: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7ddb77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ddb78: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ddb7c: call dword ptr [0xcfa950] */
  esp -= 4; W32(esp, 0x7ddb82u); SPILL(); f_4e3c24(); if (g_unwind) return; /* Core!?appLoadFileToString@@YAHAAVFString@@PBGPAVFFileManager@@@Z */ RELOAD();
/* 7ddb82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddb85: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddb87: je 0x7ddd52 */
  if (zf) goto L_7ddd52;
L_7ddb8d: /* 7ddb8d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ddb90: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ddb96u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ddb96: mov ebx, eax */
  ebx = eax;
/* 7ddb98: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7ddb9b: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7ddb9e: mov edi, edi */
  edi = edi;
L_7ddba0: /* 7ddba0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ddba3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ddba5: jne 0x7ddd52 */
  if (!zf) goto L_7ddd52;
L_7ddbab: /* 7ddbab: jmp 0x7ddbb0 */
  goto L_7ddbb0;
L_7ddbb0: /* 7ddbb0: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 7ddbb3: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddbb7: je 0x7ddd4a */
  if (zf) goto L_7ddd4a;
L_7ddbbd: /* 7ddbbd: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddbc1: je 0x7ddd4a */
  if (zf) goto L_7ddd4a;
L_7ddbc7: /* 7ddbc7: mov edi, ebx */
  edi = ebx;
/* 7ddbc9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7ddbd0: /* 7ddbd0: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 7ddbd3: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7ddbd6: je 0x7ddbef */
  if (zf) goto L_7ddbef;
L_7ddbd8: /* 7ddbd8: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddbdc: je 0x7ddbe9 */
  if (zf) goto L_7ddbe9;
L_7ddbde: /* 7ddbde: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddbe2: je 0x7ddbe9 */
  if (zf) goto L_7ddbe9;
L_7ddbe4: /* 7ddbe4: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ddbe7: jmp 0x7ddbd0 */
  goto L_7ddbd0;
L_7ddbe9: /* 7ddbe9: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddbed: jne 0x7ddbf6 */
  if (!zf) goto L_7ddbf6;
L_7ddbef: /* 7ddbef: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_7ddbf6: /* 7ddbf6: mov word ptr [ebx], 0 */
  W16((uint32_t)(ebx), 0x0u);
/* 7ddbfb: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ddbfe: cmp word ptr [edi], 0x5b */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x5bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddc02: jne 0x7ddcd9 */
  if (!zf) goto L_7ddcd9;
L_7ddc08: /* 7ddc08: mov esi, dword ptr [0xcfa3c4] */
  esi = R32((uint32_t)(0xcfa3c4u));
/* 7ddc0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddc0f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ddc11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ddc11: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddc14: cmp word ptr [edi + eax*2 - 2], 0x5d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi + eax*2 + 0xfffffffeu))); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddc1a: jne 0x7ddcd9 */
  if (!zf) goto L_7ddcd9;
L_7ddc20: /* 7ddc20: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ddc23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddc24: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ddc26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ddc26: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddc29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddc2a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ddc2d: mov word ptr [edi + eax*2 - 2], 0 */
  W16((uint32_t)(edi + eax*2 + 0xfffffffeu), 0x0u);
/* 7ddc34: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7ddc3au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7ddc3a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ddc3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ddc3e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ddc41: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7ddc45: call 0x6c9061 */
  esp -= 4; W32(esp, 0x7ddc4au); SPILL(); f_6c9061(); if (g_unwind) return; RELOAD();
/* 7ddc4a: mov esi, eax */
  esi = eax;
/* 7ddc4c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ddc4f: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 7ddc52: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ddc56: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ddc5cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ddc5c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ddc5e: jne 0x7ddba0 */
  if (!zf) goto L_7ddba0;
L_7ddc64: /* 7ddc64: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ddc67: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7ddc6du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7ddc6d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ddc70: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ddc74: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 7ddc77: mov dword ptr [ebp - 0x3c], 8 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x8u);
/* 7ddc7e: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7ddc83u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7ddc83: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ddc86: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ddc89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ddc8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddc8b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7ddc8f: call 0x6c2c7a */
  esp -= 4; W32(esp, 0x7ddc94u); SPILL(); f_6c2c7a(); if (g_unwind) return; RELOAD();
/* 7ddc94: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7ddc97: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ddc9a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddc9c: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7ddca0: je 0x7ddcb0 */
  if (zf) goto L_7ddcb0;
L_7ddca2: /* 7ddca2: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7ddca8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7ddcaa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ddcac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ddcad: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7ddcb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ddcb0: /* 7ddcb0: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 7ddcb3: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 7ddcb6: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7ddcb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ddcba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddcbb: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ddcbe: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7ddcc2: call 0x6c8049 */
  esp -= 4; W32(esp, 0x7ddcc7u); SPILL(); f_6c8049(); if (g_unwind) return; RELOAD();
/* 7ddcc7: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ddcca: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ddcce: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7ddcd4u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7ddcd4: jmp 0x7ddba0 */
  goto L_7ddba0;
L_7ddcd9: /* 7ddcd9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ddcdc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ddcde: je 0x7ddba0 */
  if (zf) goto L_7ddba0;
L_7ddce4: /* 7ddce4: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddce8: je 0x7ddba0 */
  if (zf) goto L_7ddba0;
L_7ddcee: /* 7ddcee: push 0xadd384 */
  { uint32_t v = 0xadd384u; esp -= 4; W32(esp, v); }
/* 7ddcf3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddcf4: call dword ptr [0xcfa908] */
  esp -= 4; W32(esp, 0x7ddcfau); SPILL(); f_4e2220(); if (g_unwind) return; /* Core!?appStrstr@@YAPAGPBG0@Z */ RELOAD();
/* 7ddcfa: mov esi, eax */
  esi = eax;
/* 7ddcfc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddcff: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ddd01: je 0x7ddba0 */
  if (zf) goto L_7ddba0;
L_7ddd07: /* 7ddd07: mov word ptr [esi], 0 */
  W16((uint32_t)(esi), 0x0u);
/* 7ddd0c: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ddd0f: cmp word ptr [esi], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddd13: jne 0x7ddd3b */
  if (!zf) goto L_7ddd3b;
L_7ddd15: /* 7ddd15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddd16: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7ddd1cu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7ddd1c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddd1f: cmp word ptr [esi + eax*2 - 2], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + eax*2 + 0xfffffffeu))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddd25: jne 0x7ddd3b */
  if (!zf) goto L_7ddd3b;
L_7ddd27: /* 7ddd27: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ddd2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddd2b: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7ddd31u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7ddd31: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddd34: mov word ptr [esi + eax*2 - 2], 0 */
  W16((uint32_t)(esi + eax*2 + 0xfffffffeu), 0x0u);
L_7ddd3b: /* 7ddd3b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ddd3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddd3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddd40: call 0x6c1f14 */
  esp -= 4; W32(esp, 0x7ddd45u); SPILL(); f_6c1f14(); if (g_unwind) return; RELOAD();
/* 7ddd45: jmp 0x7ddba0 */
  goto L_7ddba0;
L_7ddd4a: /* 7ddd4a: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ddd4d: jmp 0x7ddbb0 */
  goto L_7ddbb0;
L_7ddd52: /* 7ddd52: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ddd55: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ddd59: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ddd5fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ddd5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ddd62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ddd63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ddd64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ddd6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ddd6c: mov esp, ebp */
  esp = ebp;
/* 7ddd6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ddd6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ddbad(void) {
  LOAD_REGS();
  goto L_7ddbad;
L_7ddba0: /* 7ddba0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ddba3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ddba5: jne 0x7ddd52 */
  if (!zf) goto L_7ddd52;
L_7ddbab: /* 7ddbab: jmp 0x7ddbb0 */
  goto L_7ddbb0;
L_7ddbad: /* 7ddbad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7ddbb0: /* 7ddbb0: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 7ddbb3: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddbb7: je 0x7ddd4a */
  if (zf) goto L_7ddd4a;
L_7ddbbd: /* 7ddbbd: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddbc1: je 0x7ddd4a */
  if (zf) goto L_7ddd4a;
L_7ddbc7: /* 7ddbc7: mov edi, ebx */
  edi = ebx;
/* 7ddbc9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7ddbd0: /* 7ddbd0: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 7ddbd3: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7ddbd6: je 0x7ddbef */
  if (zf) goto L_7ddbef;
L_7ddbd8: /* 7ddbd8: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddbdc: je 0x7ddbe9 */
  if (zf) goto L_7ddbe9;
L_7ddbde: /* 7ddbde: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddbe2: je 0x7ddbe9 */
  if (zf) goto L_7ddbe9;
L_7ddbe4: /* 7ddbe4: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ddbe7: jmp 0x7ddbd0 */
  goto L_7ddbd0;
L_7ddbe9: /* 7ddbe9: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddbed: jne 0x7ddbf6 */
  if (!zf) goto L_7ddbf6;
L_7ddbef: /* 7ddbef: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_7ddbf6: /* 7ddbf6: mov word ptr [ebx], 0 */
  W16((uint32_t)(ebx), 0x0u);
/* 7ddbfb: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ddbfe: cmp word ptr [edi], 0x5b */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x5bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddc02: jne 0x7ddcd9 */
  if (!zf) goto L_7ddcd9;
L_7ddc08: /* 7ddc08: mov esi, dword ptr [0xcfa3c4] */
  esi = R32((uint32_t)(0xcfa3c4u));
/* 7ddc0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddc0f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ddc11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ddc11: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddc14: cmp word ptr [edi + eax*2 - 2], 0x5d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi + eax*2 + 0xfffffffeu))); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddc1a: jne 0x7ddcd9 */
  if (!zf) goto L_7ddcd9;
L_7ddc20: /* 7ddc20: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ddc23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddc24: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ddc26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ddc26: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddc29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddc2a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ddc2d: mov word ptr [edi + eax*2 - 2], 0 */
  W16((uint32_t)(edi + eax*2 + 0xfffffffeu), 0x0u);
/* 7ddc34: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7ddc3au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7ddc3a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ddc3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ddc3e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ddc41: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7ddc45: call 0x6c9061 */
  esp -= 4; W32(esp, 0x7ddc4au); SPILL(); f_6c9061(); if (g_unwind) return; RELOAD();
/* 7ddc4a: mov esi, eax */
  esi = eax;
/* 7ddc4c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ddc4f: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 7ddc52: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ddc56: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ddc5cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ddc5c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ddc5e: jne 0x7ddba0 */
  if (!zf) goto L_7ddba0;
L_7ddc64: /* 7ddc64: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ddc67: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7ddc6du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7ddc6d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ddc70: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ddc74: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 7ddc77: mov dword ptr [ebp - 0x3c], 8 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x8u);
/* 7ddc7e: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7ddc83u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7ddc83: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ddc86: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ddc89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ddc8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddc8b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7ddc8f: call 0x6c2c7a */
  esp -= 4; W32(esp, 0x7ddc94u); SPILL(); f_6c2c7a(); if (g_unwind) return; RELOAD();
/* 7ddc94: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7ddc97: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ddc9a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddc9c: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7ddca0: je 0x7ddcb0 */
  if (zf) goto L_7ddcb0;
L_7ddca2: /* 7ddca2: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7ddca8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7ddcaa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ddcac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ddcad: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7ddcb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ddcb0: /* 7ddcb0: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 7ddcb3: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 7ddcb6: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7ddcb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ddcba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddcbb: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ddcbe: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7ddcc2: call 0x6c8049 */
  esp -= 4; W32(esp, 0x7ddcc7u); SPILL(); f_6c8049(); if (g_unwind) return; RELOAD();
/* 7ddcc7: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ddcca: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ddcce: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7ddcd4u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7ddcd4: jmp 0x7ddba0 */
  goto L_7ddba0;
L_7ddcd9: /* 7ddcd9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ddcdc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ddcde: je 0x7ddba0 */
  if (zf) goto L_7ddba0;
L_7ddce4: /* 7ddce4: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddce8: je 0x7ddba0 */
  if (zf) goto L_7ddba0;
L_7ddcee: /* 7ddcee: push 0xadd384 */
  { uint32_t v = 0xadd384u; esp -= 4; W32(esp, v); }
/* 7ddcf3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddcf4: call dword ptr [0xcfa908] */
  esp -= 4; W32(esp, 0x7ddcfau); SPILL(); f_4e2220(); if (g_unwind) return; /* Core!?appStrstr@@YAPAGPBG0@Z */ RELOAD();
/* 7ddcfa: mov esi, eax */
  esi = eax;
/* 7ddcfc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddcff: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ddd01: je 0x7ddba0 */
  if (zf) goto L_7ddba0;
L_7ddd07: /* 7ddd07: mov word ptr [esi], 0 */
  W16((uint32_t)(esi), 0x0u);
/* 7ddd0c: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ddd0f: cmp word ptr [esi], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddd13: jne 0x7ddd3b */
  if (!zf) goto L_7ddd3b;
L_7ddd15: /* 7ddd15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddd16: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7ddd1cu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7ddd1c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddd1f: cmp word ptr [esi + eax*2 - 2], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + eax*2 + 0xfffffffeu))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ddd25: jne 0x7ddd3b */
  if (!zf) goto L_7ddd3b;
L_7ddd27: /* 7ddd27: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ddd2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddd2b: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7ddd31u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7ddd31: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddd34: mov word ptr [esi + eax*2 - 2], 0 */
  W16((uint32_t)(esi + eax*2 + 0xfffffffeu), 0x0u);
L_7ddd3b: /* 7ddd3b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ddd3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddd3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddd40: call 0x6c1f14 */
  esp -= 4; W32(esp, 0x7ddd45u); SPILL(); f_6c1f14(); if (g_unwind) return; RELOAD();
/* 7ddd45: jmp 0x7ddba0 */
  goto L_7ddba0;
L_7ddd4a: /* 7ddd4a: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7ddd4d: jmp 0x7ddbb0 */
  goto L_7ddbb0;
L_7ddd52: /* 7ddd52: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ddd55: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ddd59: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ddd5fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ddd5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ddd62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ddd63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ddd64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ddd6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ddd6c: mov esp, ebp */
  esp = ebp;
/* 7ddd6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ddd6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ddd72(void) {
  LOAD_REGS();
L_7ddd72: /* 7ddd72: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ddd75: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ddd7a: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7ddd7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ddd7e: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7ddd81: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ddd86u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ddd86(); return;
}

void f_7ddd86(void) {
  LOAD_REGS();
L_7ddd86: /* 7ddd86: push 0xa0f9b0 */
  { uint32_t v = 0xa0f9b0u; esp -= 4; W32(esp, v); }
/* 7ddd8b: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7ddd90: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ddd96u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ddd96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddd99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ddd9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ddd9d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ddda2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ddda2: guest_badaddr(0x7ddda2); return;
}

void f_7dde60(void) {
  LOAD_REGS();
L_7dde60: /* 7dde60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dde62: push 0x9d0778 */
  { uint32_t v = 0x9d0778u; esp -= 4; W32(esp, v); }
/* 7dde67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dde6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dde6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dde75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dde76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dde77: mov esi, ecx */
  esi = ecx;
/* 7dde79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7dde7d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7dde83u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7dde83: xor eax, eax */
  eax = 0;
/* 7dde85: mov ecx, esi */
  ecx = esi;
/* 7dde87: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7dde8b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dde8e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7dde95: call 0x6c3215 */
  esp -= 4; W32(esp, 0x7dde9au); SPILL(); f_6c3215(); if (g_unwind) return; RELOAD();
/* 7dde9a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7dde9e: mov eax, esi */
  eax = esi;
/* 7ddea0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ddea1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ddea8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddeab: ret  */
  esp += 4; SPILL(); return;
}

void f_7dded0(void) {
  LOAD_REGS();
L_7dded0: /* 7dded0: jmp 0x6c441c */
  SPILL(); f_6c441c(); return;
}

void f_7ddef0(void) {
  LOAD_REGS();
L_7ddef0: /* 7ddef0: jmp 0x6c441c */
  SPILL(); f_6c441c(); return;
}

void f_7ddf10(void) {
  LOAD_REGS();
L_7ddf10: /* 7ddf10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddf11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddf12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7ddf16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddf17: mov esi, ecx */
  esi = ecx;
/* 7ddf19: call 0x6c269e */
  esp -= 4; W32(esp, 0x7ddf1eu); SPILL(); f_6c269e(); if (g_unwind) return; RELOAD();
/* 7ddf1e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 7ddf21: mov ecx, esi */
  ecx = esi;
/* 7ddf23: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7ddf26: call 0x6c3215 */
  esp -= 4; W32(esp, 0x7ddf2bu); SPILL(); f_6c3215(); if (g_unwind) return; RELOAD();
/* 7ddf2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ddf2c: mov eax, esi */
  eax = esi;
/* 7ddf2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ddf2f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ddf50(void) {
  LOAD_REGS();
L_7ddf50: /* 7ddf50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ddf52: push 0x9d079c */
  { uint32_t v = 0x9d079cu; esp -= 4; W32(esp, v); }
/* 7ddf57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ddf5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ddf5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ddf65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ddf66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddf67: mov esi, ecx */
  esi = ecx;
/* 7ddf69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7ddf6d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7ddf70: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7ddf78: call 0x6c441c */
  esp -= 4; W32(esp, 0x7ddf7du); SPILL(); f_6c441c(); if (g_unwind) return; RELOAD();
/* 7ddf7d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7ddf80: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7ddf88: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ddf8eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ddf8e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7ddf92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ddf93: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ddf9a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ddf9d: ret  */
  esp += 4; SPILL(); return;
}

void f_7ddfc0(void) {
  LOAD_REGS();
L_7ddfc0: /* 7ddfc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ddfc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddfc2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7ddfc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ddfc7: mov esi, ecx */
  esi = ecx;
/* 7ddfc9: call 0x6c2d74 */
  esp -= 4; W32(esp, 0x7ddfceu); SPILL(); f_6c2d74(); if (g_unwind) return; RELOAD();
/* 7ddfce: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 7ddfd1: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 7ddfd4: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 7ddfd7: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 7ddfda: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 7ddfdd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ddfde: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 7ddfe1: mov eax, esi */
  eax = esi;
/* 7ddfe3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ddfe4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7de000(void) {
  LOAD_REGS();
L_7de000: /* 7de000: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7de002: push 0x9d07b8 */
  { uint32_t v = 0x9d07b8u; esp -= 4; W32(esp, v); }
/* 7de007: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7de00d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de00e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7de015: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7de016: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de017: mov esi, ecx */
  esi = ecx;
/* 7de019: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7de01a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 7de01e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7de024u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7de024: xor edi, edi */
  edi = 0;
/* 7de026: mov ecx, esi */
  ecx = esi;
/* 7de028: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 7de02c: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 7de02f: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7de036: call 0x6c3215 */
  esp -= 4; W32(esp, 0x7de03bu); SPILL(); f_6c3215(); if (g_unwind) return; RELOAD();
/* 7de03b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7de03f: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 7de042: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 7de045: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* 7de048: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7de049: mov eax, esi */
  eax = esi;
/* 7de04b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de04c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7de053: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7de056: ret  */
  esp += 4; SPILL(); return;
}

void f_7de080(void) {
  LOAD_REGS();
L_7de080: /* 7de080: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de081: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7de082: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7de086: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7de087: mov esi, ecx */
  esi = ecx;
/* 7de089: call 0x6c269e */
  esp -= 4; W32(esp, 0x7de08eu); SPILL(); f_6c269e(); if (g_unwind) return; RELOAD();
/* 7de08e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 7de091: mov ecx, esi */
  ecx = esi;
/* 7de093: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7de096: call 0x6c3215 */
  esp -= 4; W32(esp, 0x7de09bu); SPILL(); f_6c3215(); if (g_unwind) return; RELOAD();
/* 7de09b: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 7de09e: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 7de0a1: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 7de0a4: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 7de0a7: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 7de0aa: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 7de0ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7de0ae: mov eax, esi */
  eax = esi;
/* 7de0b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de0b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7de0d0(void) {
  LOAD_REGS();
L_7de0d0: /* 7de0d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de0d1: mov esi, ecx */
  esi = ecx;
/* 7de0d3: call 0x6c980e */
  esp -= 4; W32(esp, 0x7de0d8u); SPILL(); f_6c980e(); if (g_unwind) return; RELOAD();
/* 7de0d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7de0dd: je 0x7de0ec */
  if (zf) goto L_7de0ec;
L_7de0df: /* 7de0df: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7de0e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7de0e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7de0e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de0e9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7de0ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7de0ec: /* 7de0ec: mov eax, esi */
  eax = esi;
/* 7de0ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de0ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7de110(void) {
  LOAD_REGS();
L_7de110: /* 7de110: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7de112: push 0x9d07dc */
  { uint32_t v = 0x9d07dcu; esp -= 4; W32(esp, v); }
/* 7de117: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7de11d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de11e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7de125: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7de126: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7de12a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7de12b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de12c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7de12d: mov edi, ecx */
  edi = ecx;
/* 7de12f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de130: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7de133: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 7de137: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7de13du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7de13d: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 7de141: lea esi, [edi + 0x10] */
  esi = (uint32_t)(edi + 0x10u);
/* 7de144: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7de145: mov ecx, esi */
  ecx = esi;
/* 7de147: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 7de14f: call 0x6c2d74 */
  esp -= 4; W32(esp, 0x7de154u); SPILL(); f_6c2d74(); if (g_unwind) return; RELOAD();
/* 7de154: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 7de157: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 7de15a: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
/* 7de15d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7de161: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 7de164: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 7de167: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 7de16a: mov eax, edi */
  eax = edi;
/* 7de16c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7de16d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de16e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7de16f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7de176: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7de179: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7de1a0(void) {
  LOAD_REGS();
L_7de1a0: /* 7de1a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de1a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7de1a2: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7de1a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7de1a6: mov esi, ecx */
  esi = ecx;
/* 7de1a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7de1aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7de1ae: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7de1b1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7de1b3: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7de1b6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7de1b8: je 0x7de1cd */
  if (zf) goto L_7de1cd;
L_7de1ba: /* 7de1ba: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7de1be: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 7de1c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de1c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7de1c4: call 0x6cc6c1 */
  esp -= 4; W32(esp, 0x7de1c9u); SPILL(); f_6cc6c1(); if (g_unwind) return; RELOAD();
/* 7de1c9: mov edi, eax */
  edi = eax;
/* 7de1cb: jmp 0x7de1cf */
  goto L_7de1cf;
L_7de1cd: /* 7de1cd: xor edi, edi */
  edi = 0;
L_7de1cf: /* 7de1cf: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7de1d2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7de1d8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7de1d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de1d9: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7de1deu); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7de1de: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7de1e1: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7de1e4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7de1e7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7de1e8: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7de1ea: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 7de1ed: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7de1ef: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7de1f2: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 7de1f5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7de1f6: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7de1f9: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 7de1fc: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7de1ff: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7de203: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7de205: jge 0x7de213 */
  if ((sf == of)) goto L_7de213;
L_7de207: /* 7de207: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7de209: mov ecx, esi */
  ecx = esi;
/* 7de20b: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7de20e: call 0x6c80a8 */
  esp -= 4; W32(esp, 0x7de213u); SPILL(); f_6c80a8(); if (g_unwind) return; RELOAD();
L_7de213: /* 7de213: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 7de216: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7de217: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de218: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7de240(void) {
  LOAD_REGS();
L_7de240: /* 7de240: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7de241: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7de245: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7de247: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7de248: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de249: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7de24f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7de250: mov ebp, ecx */
  ebp = ecx;
/* 7de252: jge 0x7de268 */
  if ((sf == of)) goto L_7de268;
L_7de254: /* 7de254: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7de259: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7de25e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7de263: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7de265u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7de265: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7de268: /* 7de268: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7de26b: jle 0x7de281 */
  if ((zf || sf != of)) goto L_7de281;
L_7de26d: /* 7de26d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7de272: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7de277: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7de27c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7de27eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7de27e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7de281: /* 7de281: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7de285: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 7de288: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7de28b: jle 0x7de2a1 */
  if ((zf || sf != of)) goto L_7de2a1;
L_7de28d: /* 7de28d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7de292: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7de297: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7de29c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7de29eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7de29e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7de2a1: /* 7de2a1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7de2a3: jge 0x7de2c0 */
  if ((sf == of)) goto L_7de2c0;
L_7de2a5: /* 7de2a5: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 7de2a8: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7de2ab: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7de2ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7de2b0: /* 7de2b0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7de2b3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7de2b5: call 0x6c980e */
  esp -= 4; W32(esp, 0x7de2bau); SPILL(); f_6c980e(); if (g_unwind) return; RELOAD();
/* 7de2ba: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7de2bd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7de2be: jne 0x7de2b0 */
  if (!zf) goto L_7de2b0;
L_7de2c0: /* 7de2c0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7de2c4: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7de2c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7de2c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7de2c8: mov ecx, ebp */
  ecx = ebp;
/* 7de2ca: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7de2d0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7de2d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7de2d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de2d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7de2d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7de2d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7de310(void) {
  LOAD_REGS();
L_7de310: /* 7de310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de311: mov esi, ecx */
  esi = ecx;
/* 7de313: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7de316: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7de317: xor edi, edi */
  edi = 0;
/* 7de319: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7de31b: jle 0x7de335 */
  if ((zf || sf != of)) goto L_7de335;
L_7de31d: /* 7de31d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7de31e: xor ebx, ebx */
  ebx = 0;
L_7de320: /* 7de320: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7de322: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7de324: call 0x6c980e */
  esp -= 4; W32(esp, 0x7de329u); SPILL(); f_6c980e(); if (g_unwind) return; RELOAD();
/* 7de329: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7de32c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7de32d: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7de330: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7de332: jl 0x7de320 */
  if ((sf != of)) goto L_7de320;
L_7de334: /* 7de334: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7de335: /* 7de335: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7de339: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de33a: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7de33c: mov ecx, esi */
  ecx = esi;
/* 7de33e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7de344u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7de344: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7de345: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de346: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7de360(void) {
  LOAD_REGS();
L_7de360: /* 7de360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de361: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7de363: mov esi, ecx */
  esi = ecx;
/* 7de365: call 0x6cb15e */
  esp -= 4; W32(esp, 0x7de36au); SPILL(); f_6cb15e(); if (g_unwind) return; RELOAD();
/* 7de36a: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7de371: mov ecx, esi */
  ecx = esi;
/* 7de373: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de374: jmp 0x6c80a8 */
  SPILL(); f_6c80a8(); return;
}

void f_7de390(void) {
  LOAD_REGS();
L_7de390: /* 7de390: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7de391: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7de392: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 7de396: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de397: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7de398: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7de399: mov ebx, ecx */
  ebx = ecx;
/* 7de39b: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7de3a0u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7de3a0: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 7de3a3: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 7de3a6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7de3a9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7de3aa: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7de3ac: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 7de3af: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7de3b2: je 0x7de3d5 */
  if (zf) goto L_7de3d5;
L_7de3b4: /* 7de3b4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7de3b6: lea edi, [esi + esi*2] */
  edi = (uint32_t)(esi + esi*2);
/* 7de3b9: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7de3bc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7de3bd: lea ecx, [edi + eax + 4] */
  ecx = (uint32_t)(edi + eax + 0x4u);
/* 7de3c1: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x7de3c7u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 7de3c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7de3c9: jne 0x7de3e9 */
  if (!zf) goto L_7de3e9;
L_7de3cb: /* 7de3cb: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7de3cd: mov esi, dword ptr [edi + ecx] */
  esi = R32((uint32_t)(edi + ecx));
/* 7de3d0: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7de3d3: jne 0x7de3b4 */
  if (!zf) goto L_7de3b4;
L_7de3d5: /* 7de3d5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7de3d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7de3da: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7de3db: mov ecx, ebx */
  ecx = ebx;
/* 7de3dd: call 0x6cb8ed */
  esp -= 4; W32(esp, 0x7de3e2u); SPILL(); f_6cb8ed(); if (g_unwind) return; RELOAD();
/* 7de3e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7de3e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de3e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7de3e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7de3e6: ret 8 */
  esp += 12; SPILL(); return;
L_7de3e9: /* 7de3e9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7de3eb: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 7de3ef: lea edi, [esi + esi*2] */
  edi = (uint32_t)(esi + esi*2);
/* 7de3f2: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7de3f5: lea esi, [edi + edx + 0x10] */
  esi = (uint32_t)(edi + edx + 0x10u);
/* 7de3f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7de3fa: mov ecx, esi */
  ecx = esi;
/* 7de3fc: call 0x6c269e */
  esp -= 4; W32(esp, 0x7de401u); SPILL(); f_6c269e(); if (g_unwind) return; RELOAD();
/* 7de401: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7de404: mov ecx, esi */
  ecx = esi;
/* 7de406: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7de409: call 0x6c3215 */
  esp -= 4; W32(esp, 0x7de40eu); SPILL(); f_6c3215(); if (g_unwind) return; RELOAD();
/* 7de40e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7de411: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 7de414: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7de417: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 7de41a: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 7de41d: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 7de420: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7de422: lea eax, [edi + ecx + 0x10] */
  eax = (uint32_t)(edi + ecx + 0x10u);
/* 7de426: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7de427: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de428: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7de429: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7de42a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7de460(void) {
  LOAD_REGS();
L_7de460: /* 7de460: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7de461: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de462: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7de463: mov edi, ecx */
  edi = ecx;
/* 7de465: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 7de468: xor ebp, ebp */
  ebp = 0;
/* 7de46a: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 7de46b: js 0x7de4cd */
  if (sf) goto L_7de4cd;
L_7de46d: /* 7de46d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7de46e: lea ebx, [esi + esi*2] */
  ebx = (uint32_t)(esi + esi*2);
/* 7de471: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
L_7de474: /* 7de474: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7de478: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7de47a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de47b: lea ecx, [ebx + ecx + 4] */
  ecx = (uint32_t)(ebx + ecx + 0x4u);
/* 7de47f: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x7de485u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 7de485: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7de487: je 0x7de494 */
  if (zf) goto L_7de494;
L_7de489: /* 7de489: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7de48b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de48c: mov ecx, edi */
  ecx = edi;
/* 7de48e: call 0x6c9043 */
  esp -= 4; W32(esp, 0x7de493u); SPILL(); f_6c9043(); if (g_unwind) return; RELOAD();
/* 7de493: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_7de494: /* 7de494: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7de495: sub ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 7de498: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7de49a: jge 0x7de474 */
  if ((sf == of)) goto L_7de474;
L_7de49c: /* 7de49c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7de49e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7de49f: je 0x7de4cd */
  if (zf) goto L_7de4cd;
L_7de4a1: /* 7de4a1: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 7de4a4: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 7de4a7: lea eax, [edx + edx + 8] */
  eax = (uint32_t)(edx + edx + 0x8u);
/* 7de4ab: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7de4ad: jle 0x7de4c6 */
  if ((zf || sf != of)) goto L_7de4c6;
L_7de4af: /* 7de4af: nop  */
L_7de4b0: /* 7de4b0: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 7de4b3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7de4b4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7de4b6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7de4b8: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 7de4bb: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7de4be: lea edx, [ecx + ecx + 8] */
  edx = (uint32_t)(ecx + ecx + 0x8u);
/* 7de4c2: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7de4c4: jg 0x7de4b0 */
  if ((!zf && sf == of)) goto L_7de4b0;
L_7de4c6: /* 7de4c6: mov ecx, edi */
  ecx = edi;
/* 7de4c8: call 0x6c80a8 */
  esp -= 4; W32(esp, 0x7de4cdu); SPILL(); f_6c80a8(); if (g_unwind) return; RELOAD();
L_7de4cd: /* 7de4cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7de4ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de4cf: mov eax, ebp */
  eax = ebp;
/* 7de4d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7de4d2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7de500(void) {
  LOAD_REGS();
L_7de500: /* 7de500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7de502: push 0x9d07f9 */
  { uint32_t v = 0x9d07f9u; esp -= 4; W32(esp, v); }
/* 7de507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7de50d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de50e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7de515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7de516: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de517: mov esi, ecx */
  esi = ecx;
/* 7de519: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7de51d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7de520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de521: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7de523: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7de52b: call 0x6c9043 */
  esp -= 4; W32(esp, 0x7de530u); SPILL(); f_6c9043(); if (g_unwind) return; RELOAD();
/* 7de530: mov ecx, esi */
  ecx = esi;
/* 7de532: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7de53a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7de540u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7de540: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7de544: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de545: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7de54c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7de54f: ret  */
  esp += 4; SPILL(); return;
}

void f_7de570(void) {
  LOAD_REGS();
L_7de570: /* 7de570: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7de571: mov ebp, esp */
  ebp = esp;
/* 7de573: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7de575: push 0x9d0821 */
  { uint32_t v = 0x9d0821u; esp -= 4; W32(esp, v); }
/* 7de57a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7de580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de581: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7de588: sub esp, 0x238 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x238u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7de58e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7de591: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7de593: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7de594: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de595: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7de596: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7de599: mov edi, ecx */
  edi = ecx;
/* 7de59b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7de5a2: jne 0x7de5ad */
  if (!zf) goto L_7de5ad;
L_7de5a4: /* 7de5a4: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 7de5a7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7de5adu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
L_7de5ad: /* 7de5ad: mov ebx, dword ptr [0xcfa900] */
  ebx = R32((uint32_t)(0xcfa900u));
/* 7de5b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de5b4: lea eax, [ebp - 0x244] */
  eax = (uint32_t)(ebp + 0xfffffdbcu);
/* 7de5ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de5bb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7de5bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7de5bd: lea ecx, [ebp - 0x244] */
  ecx = (uint32_t)(ebp + 0xfffffdbcu);
/* 7de5c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7de5c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7de5c7: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7de5cdu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7de5cd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7de5d0: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7de5d3: jl 0x7de5ee */
  if ((sf != of)) goto L_7de5ee;
L_7de5d5: /* 7de5d5: mov ecx, 0x2e */
  ecx = 0x2eu;
/* 7de5da: cmp word ptr [ebp + eax*2 - 0x24c], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + eax*2 + 0xfffffdb4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7de5e2: je 0x7de603 */
  if (zf) goto L_7de603;
L_7de5e4: /* 7de5e4: cmp word ptr [ebp + eax*2 - 0x24e], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + eax*2 + 0xfffffdb2u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7de5ec: je 0x7de603 */
  if (zf) goto L_7de603;
L_7de5ee: /* 7de5ee: lea edx, [ebp - 0x244] */
  edx = (uint32_t)(ebp + 0xfffffdbcu);
/* 7de5f4: push 0xadd3bc */
  { uint32_t v = 0xadd3bcu; esp -= 4; W32(esp, v); }
/* 7de5f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7de5fa: call dword ptr [0xcfa914] */
  esp -= 4; W32(esp, 0x7de600u); SPILL(); f_4e35ad(); if (g_unwind) return; /* Core!?appStrcat@@YAPAGPAGPBG@Z */ RELOAD();
/* 7de600: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7de603: /* 7de603: mov esi, dword ptr [0xcfa340] */
  esi = R32((uint32_t)(0xcfa340u));
/* 7de609: lea eax, [ebp - 0x244] */
  eax = (uint32_t)(ebp + 0xfffffdbcu);
/* 7de60f: push 0xadd3a4 */
  { uint32_t v = 0xadd3a4u; esp -= 4; W32(esp, v); }
/* 7de614: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de615: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7de617u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7de617: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7de61a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7de61c: jne 0x7de631 */
  if (!zf) goto L_7de631;
L_7de61e: /* 7de61e: lea ecx, [edi + 0x24] */
  ecx = (uint32_t)(edi + 0x24u);
/* 7de621: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7de627u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7de627: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de628: lea ecx, [ebp - 0x244] */
  ecx = (uint32_t)(ebp + 0xfffffdbcu);
/* 7de62e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7de62f: jmp 0x7de657 */
  goto L_7de657;
L_7de631: /* 7de631: lea edx, [ebp - 0x244] */
  edx = (uint32_t)(ebp + 0xfffffdbcu);
/* 7de637: push 0xadd388 */
  { uint32_t v = 0xadd388u; esp -= 4; W32(esp, v); }
/* 7de63c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7de63d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7de63fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7de63f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7de642: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7de644: jne 0x7de65c */
  if (!zf) goto L_7de65c;
L_7de646: /* 7de646: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 7de649: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7de64fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7de64f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de650: lea eax, [ebp - 0x244] */
  eax = (uint32_t)(ebp + 0xfffffdbcu);
/* 7de656: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_7de657: /* 7de657: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7de659u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7de659: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7de65c: /* 7de65c: lea ecx, [ebp - 0x244] */
  ecx = (uint32_t)(ebp + 0xfffffdbcu);
/* 7de662: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7de663: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7de666: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7de66cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7de66c: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7de66f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7de672: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7de673: mov ecx, edi */
  ecx = edi;
/* 7de675: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7de679: call 0x6c3620 */
  esp -= 4; W32(esp, 0x7de67eu); SPILL(); f_6c3620(); if (g_unwind) return; RELOAD();
/* 7de67e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7de681: mov esi, eax */
  esi = eax;
/* 7de683: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7de687: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7de68du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7de68d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7de68f: jne 0x7de6e6 */
  if (!zf) goto L_7de6e6;
L_7de691: /* 7de691: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7de694: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7de696: jne 0x7de6af */
  if (!zf) goto L_7de6af;
L_7de698: /* 7de698: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 7de69d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7de69f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7de6a1: lea eax, [ebp - 0x244] */
  eax = (uint32_t)(ebp + 0xfffffdbcu);
/* 7de6a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de6a8: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7de6abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7de6ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7de6ad: jl 0x7de6e6 */
  if ((sf != of)) goto L_7de6e6;
L_7de6af: /* 7de6af: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7de6b2: call 0x6ca48e */
  esp -= 4; W32(esp, 0x7de6b7u); SPILL(); f_6ca48e(); if (g_unwind) return; RELOAD();
/* 7de6b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de6b8: lea ecx, [ebp - 0x244] */
  ecx = (uint32_t)(ebp + 0xfffffdbcu);
/* 7de6be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7de6bf: mov ecx, edi */
  ecx = edi;
/* 7de6c1: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7de6c5: call 0x6c69c4 */
  esp -= 4; W32(esp, 0x7de6cau); SPILL(); f_6c69c4(); if (g_unwind) return; RELOAD();
/* 7de6ca: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7de6cd: mov esi, eax */
  esi = eax;
/* 7de6cf: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7de6d3: call 0x6c441c */
  esp -= 4; W32(esp, 0x7de6d8u); SPILL(); f_6c441c(); if (g_unwind) return; RELOAD();
/* 7de6d8: lea edx, [ebp - 0x244] */
  edx = (uint32_t)(ebp + 0xfffffdbcu);
/* 7de6de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7de6df: mov ecx, esi */
  ecx = esi;
/* 7de6e1: call 0x6c37d3 */
  esp -= 4; W32(esp, 0x7de6e6u); SPILL(); f_6c37d3(); if (g_unwind) return; RELOAD();
L_7de6e6: /* 7de6e6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7de6e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7de6ea: mov eax, esi */
  eax = esi;
/* 7de6ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de6ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7de6f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7de6f5: mov esp, ebp */
  esp = ebp;
/* 7de6f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7de6f8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7de6fb(void) {
  LOAD_REGS();
L_7de6fb: /* 7de6fb: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7de6fe: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7de703: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7de706: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7de707: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7de70a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7de70fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7de70f(); return;
}

void f_7de70f(void) {
  LOAD_REGS();
L_7de70f: /* 7de70f: push 0xa0f9dc */
  { uint32_t v = 0xa0f9dcu; esp -= 4; W32(esp, v); }
/* 7de714: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7de719: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7de71fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7de71f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7de722: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7de724: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7de726: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7de72bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7de72b: guest_badaddr(0x7de72b); return;
}

void f_7de7a0(void) {
  LOAD_REGS();
L_7de7a0: /* 7de7a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7de7a1: mov ebp, esp */
  ebp = esp;
/* 7de7a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7de7a5: push 0x9d0854 */
  { uint32_t v = 0x9d0854u; esp -= 4; W32(esp, v); }
/* 7de7aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7de7b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de7b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7de7b8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7de7bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7de7bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de7bd: xor esi, esi */
  esi = 0;
/* 7de7bf: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7de7c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7de7c2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7de7c5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7de7c8: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7de7cb: je 0x7de7d2 */
  if (zf) goto L_7de7d2;
L_7de7cd: /* 7de7cd: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 7de7d0: jmp 0x7de7d4 */
  goto L_7de7d4;
L_7de7d2: /* 7de7d2: xor edi, edi */
  edi = 0;
L_7de7d4: /* 7de7d4: mov ebx, edi */
  ebx = edi;
/* 7de7d6: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 7de7d9: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 7de7dc: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 7de7df: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7de7e2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_7de7e6: /* 7de7e6: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7de7e9: jge 0x7de833 */
  if ((sf == of)) goto L_7de833;
L_7de7eb: /* 7de7eb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7de7ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7de7f0: je 0x7de809 */
  if (zf) goto L_7de809;
L_7de7f2: /* 7de7f2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7de7f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de7f5: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 7de7f8: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7de7fb: lea ecx, [eax + ecx + 4] */
  ecx = (uint32_t)(eax + ecx + 0x4u);
/* 7de7ff: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x7de805u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 7de805: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7de807: je 0x7de82a */
  if (zf) goto L_7de82a;
L_7de809: /* 7de809: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7de80b: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 7de80e: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7de811: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7de813: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 7de816: lea ebx, [eax + 0x10] */
  ebx = (uint32_t)(eax + 0x10u);
/* 7de819: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7de81fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7de81f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de820: mov ecx, ebx */
  ecx = ebx;
/* 7de822: call 0x6c8067 */
  esp -= 4; W32(esp, 0x7de827u); SPILL(); f_6c8067(); if (g_unwind) return; RELOAD();
/* 7de827: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
L_7de82a: /* 7de82a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7de82d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7de82e: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 7de831: jmp 0x7de7e6 */
  goto L_7de7e6;
L_7de833: /* 7de833: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7de836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7de838: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7de83c: je 0x7de862 */
  if (zf) goto L_7de862;
L_7de83e: /* 7de83e: mov edi, edi */
  edi = edi;
L_7de840: /* 7de840: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7de843: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 7de846: lea ecx, [ecx + ecx + 8] */
  ecx = (uint32_t)(ecx + ecx + 0x8u);
/* 7de84a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7de84c: jle 0x7de858 */
  if ((zf || sf != of)) goto L_7de858;
L_7de84e: /* 7de84e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7de84f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7de851: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7de853: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 7de856: jmp 0x7de840 */
  goto L_7de840;
L_7de858: /* 7de858: mov ecx, ebx */
  ecx = ebx;
/* 7de85a: call 0x6c80a8 */
  esp -= 4; W32(esp, 0x7de85fu); SPILL(); f_6c80a8(); if (g_unwind) return; RELOAD();
/* 7de85f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7de862: /* 7de862: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7de865: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7de867: je 0x7de879 */
  if (zf) goto L_7de879;
L_7de869: /* 7de869: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7de86c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7de86e: je 0x7de88c */
  if (zf) goto L_7de88c;
L_7de870: /* 7de870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de871: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7de874: call 0x6c3f21 */
  esp -= 4; W32(esp, 0x7de879u); SPILL(); f_6c3f21(); if (g_unwind) return; RELOAD();
L_7de879: /* 7de879: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7de87c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7de883: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7de884: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de885: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7de886: mov esp, ebp */
  esp = ebp;
/* 7de888: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7de889: ret 8 */
  esp += 12; SPILL(); return;
L_7de88c: /* 7de88c: lea ebx, [ecx + 4] */
  ebx = (uint32_t)(ecx + 0x4u);
/* 7de88f: xor edi, edi */
  edi = 0;
L_7de891: /* 7de891: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7de894: jge 0x7de8bf */
  if ((sf == of)) goto L_7de8bf;
L_7de896: /* 7de896: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7de898: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 7de89b: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7de89e: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7de8a0: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 7de8a3: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7de8a6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7de8aa: call 0x6c441c */
  esp -= 4; W32(esp, 0x7de8afu); SPILL(); f_6c441c(); if (g_unwind) return; RELOAD();
/* 7de8af: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7de8b2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7de8b6: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7de8bcu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7de8bc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7de8bd: jmp 0x7de891 */
  goto L_7de891;
L_7de8bf: /* 7de8bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7de8c1: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7de8c3: mov ecx, ebx */
  ecx = ebx;
/* 7de8c5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7de8cbu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7de8cb: mov ecx, ebx */
  ecx = ebx;
/* 7de8cd: mov dword ptr [ebx + 0x10], 8 */
  W32((uint32_t)(ebx + 0x10u), 0x8u);
/* 7de8d4: call 0x6c80a8 */
  esp -= 4; W32(esp, 0x7de8d9u); SPILL(); f_6c80a8(); if (g_unwind) return; RELOAD();
/* 7de8d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7de8dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7de8dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de8de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7de8e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7de8e6: mov esp, ebp */
  esp = ebp;
/* 7de8e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7de8e9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7de8ec(void) {
  LOAD_REGS();
L_7de8ec: /* 7de8ec: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7de8ef: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7de8f4: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7de8f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de8f8: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7de8fb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7de900u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7de900(); return;
}

void f_7de900(void) {
  LOAD_REGS();
L_7de900: /* 7de900: push 0xa0fa10 */
  { uint32_t v = 0xa0fa10u; esp -= 4; W32(esp, v); }
/* 7de905: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7de90a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7de910u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7de910: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7de913: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7de915: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7de917: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7de91cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7de91c: guest_badaddr(0x7de91c); return;
}

void f_7de980(void) {
  LOAD_REGS();
L_7de980: /* 7de980: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7de981: mov ebp, esp */
  ebp = esp;
/* 7de983: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7de985: push 0x9d0882 */
  { uint32_t v = 0x9d0882u; esp -= 4; W32(esp, v); }
/* 7de98a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7de990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de991: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7de998: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7de99b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7de99e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7de99f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7de9a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7de9a1: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7de9a4: xor ebx, ebx */
  ebx = 0;
/* 7de9a6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7de9a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7de9aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7de9ab: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7de9ae: mov word ptr [edi], bx */
  W16((uint32_t)(edi), (ebx & 0xffffu));
/* 7de9b1: call 0x6ca4a2 */
  esp -= 4; W32(esp, 0x7de9b6u); SPILL(); f_6ca4a2(); if (g_unwind) return; RELOAD();
/* 7de9b6: mov esi, eax */
  esi = eax;
/* 7de9b8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7de9ba: jne 0x7de9d1 */
  if (!zf) goto L_7de9d1;
L_7de9bc: /* 7de9bc: xor eax, eax */
  eax = 0;
/* 7de9be: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7de9c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7de9c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7de9c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7de9ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7de9cb: mov esp, ebp */
  esp = ebp;
/* 7de9cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7de9ce: ret 0x14 */
  esp += 24; SPILL(); return;
L_7de9d1: /* 7de9d1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7de9d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7de9d5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7de9d8: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7de9deu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7de9de: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7de9e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7de9e2: mov ecx, esi */
  ecx = esi;
/* 7de9e4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7de9e8: call 0x6c9061 */
  esp -= 4; W32(esp, 0x7de9edu); SPILL(); f_6c9061(); if (g_unwind) return; RELOAD();
/* 7de9ed: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7de9f0: mov esi, eax */
  esi = eax;
/* 7de9f2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7de9f5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7de9fbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7de9fb: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7de9fd: je 0x7de9bc */
  if (zf) goto L_7de9bc;
L_7de9ff: /* 7de9ff: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7dea02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dea03: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7dea06: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7dea0cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7dea0c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7dea0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dea10: mov ecx, esi */
  ecx = esi;
/* 7dea12: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dea16: call 0x6c2fae */
  esp -= 4; W32(esp, 0x7dea1bu); SPILL(); f_6c2fae(); if (g_unwind) return; RELOAD();
/* 7dea1b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7dea1e: mov esi, eax */
  esi = eax;
/* 7dea20: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7dea23: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dea29u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dea29: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dea2b: je 0x7de9bc */
  if (zf) goto L_7de9bc;
L_7dea2d: /* 7dea2d: mov ecx, esi */
  ecx = esi;
/* 7dea2f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dea35u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dea35: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7dea38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dea39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dea3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dea3b: call dword ptr [0xcfa5a4] */
  esp -= 4; W32(esp, 0x7dea41u); SPILL(); f_4e2be4(); if (g_unwind) return; /* Core!?appStrncpy@@YAPAGPAGPBGH@Z */ RELOAD();
/* 7dea41: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dea44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dea47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dea48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dea49: mov eax, 1 */
  eax = 0x1u;
/* 7dea4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dea55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dea56: mov esp, ebp */
  esp = ebp;
/* 7dea58: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dea59: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7dea5c(void) {
  LOAD_REGS();
L_7dea5c: /* 7dea5c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dea5f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dea64: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7dea67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dea68: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7dea6b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dea70u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dea70(); return;
}

void f_7dea70(void) {
  LOAD_REGS();
L_7dea70: /* 7dea70: push 0xa0fa48 */
  { uint32_t v = 0xa0fa48u; esp -= 4; W32(esp, v); }
/* 7dea75: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7dea7a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dea80u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dea80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dea83: xor ebx, ebx */
  ebx = 0;
/* 7dea85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dea86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dea87: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dea8cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7dea8c: guest_badaddr(0x7dea8c); return;
}

void f_7deae0(void) {
  LOAD_REGS();
L_7deae0: /* 7deae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7deae1: mov ebp, esp */
  ebp = esp;
/* 7deae3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7deae5: push 0x9d08b1 */
  { uint32_t v = 0x9d08b1u; esp -= 4; W32(esp, v); }
/* 7deaea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7deaf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7deaf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7deaf8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7deafb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7deafe: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7deb01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7deb02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7deb03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7deb04: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7deb07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7deb08: xor ebx, ebx */
  ebx = 0;
/* 7deb0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7deb0b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7deb0e: call 0x6ca4a2 */
  esp -= 4; W32(esp, 0x7deb13u); SPILL(); f_6ca4a2(); if (g_unwind) return; RELOAD();
/* 7deb13: mov edi, eax */
  edi = eax;
/* 7deb15: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7deb17: jne 0x7deb2e */
  if (!zf) goto L_7deb2e;
L_7deb19: /* 7deb19: xor eax, eax */
  eax = 0;
/* 7deb1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7deb1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7deb25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7deb26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7deb27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7deb28: mov esp, ebp */
  esp = ebp;
/* 7deb2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7deb2b: ret 0x10 */
  esp += 20; SPILL(); return;
L_7deb2e: /* 7deb2e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7deb31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7deb32: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7deb35: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7deb3bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7deb3b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7deb3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7deb3f: mov ecx, edi */
  ecx = edi;
/* 7deb41: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7deb45: call 0x6c9061 */
  esp -= 4; W32(esp, 0x7deb4au); SPILL(); f_6c9061(); if (g_unwind) return; RELOAD();
/* 7deb4a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7deb4d: mov esi, eax */
  esi = eax;
/* 7deb4f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7deb52: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7deb58u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7deb58: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7deb5a: jne 0x7deb8a */
  if (!zf) goto L_7deb8a;
L_7deb5c: /* 7deb5c: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7deb5f: je 0x7deb9b */
  if (zf) goto L_7deb9b;
L_7deb61: /* 7deb61: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7deb64: call 0x6c8ecc */
  esp -= 4; W32(esp, 0x7deb69u); SPILL(); f_6c8ecc(); if (g_unwind) return; RELOAD();
/* 7deb69: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7deb6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7deb6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7deb6e: mov ecx, edi */
  ecx = edi;
/* 7deb70: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7deb74: call 0x6c2c7a */
  esp -= 4; W32(esp, 0x7deb79u); SPILL(); f_6c2c7a(); if (g_unwind) return; RELOAD();
/* 7deb79: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7deb7c: mov esi, eax */
  esi = eax;
/* 7deb7e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7deb81: call 0x6c312a */
  esp -= 4; W32(esp, 0x7deb86u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7deb86: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7deb88: je 0x7deb9b */
  if (zf) goto L_7deb9b;
L_7deb8a: /* 7deb8a: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7deb8d: jne 0x7deb94 */
  if (!zf) goto L_7deb94;
L_7deb8f: /* 7deb8f: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7deb92: jne 0x7deb9b */
  if (!zf) goto L_7deb9b;
L_7deb94: /* 7deb94: mov dword ptr [edi + 0x14], 1 */
  W32((uint32_t)(edi + 0x14u), 0x1u);
L_7deb9b: /* 7deb9b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7deb9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7deb9f: mov eax, esi */
  eax = esi;
/* 7deba1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7deba2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7deba9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7debaa: mov esp, ebp */
  esp = ebp;
/* 7debac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7debad: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7debb0(void) {
  LOAD_REGS();
L_7debb0: /* 7debb0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7debb3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7debb8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7debbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7debbc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7debbf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7debc4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7debc4(); return;
}

void f_7debc4(void) {
  LOAD_REGS();
L_7debc4: /* 7debc4: push 0xa0fa88 */
  { uint32_t v = 0xa0fa88u; esp -= 4; W32(esp, v); }
/* 7debc9: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7debce: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7debd4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7debd4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7debd7: xor ebx, ebx */
  ebx = 0;
/* 7debd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7debda: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7debdb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7debe0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7debe0: guest_badaddr(0x7debe0); return;
}

void f_7dec40(void) {
  LOAD_REGS();
L_7dec40: /* 7dec40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dec41: mov ebp, esp */
  ebp = esp;
/* 7dec43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dec45: push 0x9d08ea */
  { uint32_t v = 0x9d08eau; esp -= 4; W32(esp, v); }
/* 7dec4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dec50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dec51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dec58: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7dec5b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7dec5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dec5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dec60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dec61: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7dec64: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dec66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dec67: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dec6e: call 0x6ca4a2 */
  esp -= 4; W32(esp, 0x7dec73u); SPILL(); f_6ca4a2(); if (g_unwind) return; RELOAD();
/* 7dec73: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7dec76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dec77: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dec7a: mov ebx, eax */
  ebx = eax;
/* 7dec7c: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7dec82u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7dec82: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dec85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dec86: mov ecx, ebx */
  ecx = ebx;
/* 7dec88: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dec8c: call 0x6c9061 */
  esp -= 4; W32(esp, 0x7dec91u); SPILL(); f_6c9061(); if (g_unwind) return; RELOAD();
/* 7dec91: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dec94: mov esi, eax */
  esi = eax;
/* 7dec96: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dec9a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7deca0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7deca0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7deca2: jne 0x7decc7 */
  if (!zf) goto L_7decc7;
L_7deca4: /* 7deca4: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7deca7: call 0x6c8ecc */
  esp -= 4; W32(esp, 0x7decacu); SPILL(); f_6c8ecc(); if (g_unwind) return; RELOAD();
/* 7decac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7decad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7decae: mov ecx, ebx */
  ecx = ebx;
/* 7decb0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7decb4: call 0x6c2c7a */
  esp -= 4; W32(esp, 0x7decb9u); SPILL(); f_6c2c7a(); if (g_unwind) return; RELOAD();
/* 7decb9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7decbc: mov esi, eax */
  esi = eax;
/* 7decbe: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7decc2: call 0x6c312a */
  esp -= 4; W32(esp, 0x7decc7u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
L_7decc7: /* 7decc7: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7decca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7deccb: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7decce: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7decd4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7decd4: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7decd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7decd8: mov ecx, esi */
  ecx = esi;
/* 7decda: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7decde: call 0x6c2fae */
  esp -= 4; W32(esp, 0x7dece3u); SPILL(); f_6c2fae(); if (g_unwind) return; RELOAD();
/* 7dece3: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7dece6: mov edi, eax */
  edi = eax;
/* 7dece8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7decec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7decf2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7decf2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7decf4: jne 0x7ded1f */
  if (!zf) goto L_7ded1f;
L_7decf6: /* 7decf6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7decf9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7decfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7decfd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7decfe: mov ecx, esi */
  ecx = esi;
/* 7ded00: call 0x6c1f14 */
  esp -= 4; W32(esp, 0x7ded05u); SPILL(); f_6c1f14(); if (g_unwind) return; RELOAD();
/* 7ded05: mov dword ptr [ebx + 0x14], 1 */
  W32((uint32_t)(ebx + 0x14u), 0x1u);
L_7ded0c: /* 7ded0c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ded0f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ded16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ded17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ded18: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ded19: mov esp, ebp */
  esp = ebp;
/* 7ded1b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ded1c: ret 0x10 */
  esp += 20; SPILL(); return;
L_7ded1f: /* 7ded1f: mov ecx, edi */
  ecx = edi;
/* 7ded21: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ded27u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ded27: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7ded2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ded2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ded2c: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7ded32u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7ded32: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ded35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ded37: je 0x7ded0c */
  if (zf) goto L_7ded0c;
L_7ded39: /* 7ded39: mov ecx, edi */
  ecx = edi;
/* 7ded3b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ded41u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ded41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ded42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ded43: call dword ptr [0xcfa834] */
  esp -= 4; W32(esp, 0x7ded49u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* 7ded49: xor ecx, ecx */
  ecx = 0;
/* 7ded4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ded4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ded50: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7ded53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ded54: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 7ded57: mov ecx, edi */
  ecx = edi;
/* 7ded59: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7ded5fu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7ded5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ded62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ded63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ded64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ded6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ded6c: mov esp, ebp */
  esp = ebp;
/* 7ded6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ded6f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7ded72(void) {
  LOAD_REGS();
L_7ded72: /* 7ded72: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ded75: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ded7a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7ded7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ded7e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7ded81: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ded86u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ded86(); return;
}

void f_7ded86(void) {
  LOAD_REGS();
L_7ded86: /* 7ded86: push 0xa0fadc */
  { uint32_t v = 0xa0fadcu; esp -= 4; W32(esp, v); }
/* 7ded8b: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7ded90: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ded96u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ded96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ded99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ded9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ded9d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7deda2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7deda2: guest_badaddr(0x7deda2); return;
}

void f_7dee10(void) {
  LOAD_REGS();
L_7dee10: /* 7dee10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dee12: push 0x9d0908 */
  { uint32_t v = 0x9d0908u; esp -= 4; W32(esp, v); }
/* 7dee17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dee1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dee1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dee25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dee26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dee27: mov esi, ecx */
  esi = ecx;
/* 7dee29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7dee2d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7dee33u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7dee33: xor eax, eax */
  eax = 0;
/* 7dee35: mov ecx, esi */
  ecx = esi;
/* 7dee37: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7dee3b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dee3e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7dee45: call 0x6c80a8 */
  esp -= 4; W32(esp, 0x7dee4au); SPILL(); f_6c80a8(); if (g_unwind) return; RELOAD();
/* 7dee4a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7dee4e: mov eax, esi */
  eax = esi;
/* 7dee50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dee51: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dee58: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dee5b: ret  */
  esp += 4; SPILL(); return;
}

void f_7dee80(void) {
  LOAD_REGS();
L_7dee80: /* 7dee80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dee82: push 0x9d0928 */
  { uint32_t v = 0x9d0928u; esp -= 4; W32(esp, v); }
/* 7dee87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dee8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dee8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dee95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dee96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dee97: mov esi, ecx */
  esi = ecx;
/* 7dee99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7dee9d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7deea0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7deea2: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7deeaa: je 0x7deeba */
  if (zf) goto L_7deeba;
L_7deeac: /* 7deeac: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7deeb2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7deeb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7deeb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7deeb7: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7deebau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7deeba: /* 7deeba: mov ecx, esi */
  ecx = esi;
/* 7deebc: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 7deec3: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 7deeca: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7deed2: call 0x6cb366 */
  esp -= 4; W32(esp, 0x7deed7u); SPILL(); f_6cb366(); if (g_unwind) return; RELOAD();
/* 7deed7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7deedb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7deedc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7deee3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7deee6: ret  */
  esp += 4; SPILL(); return;
}

void f_7def10(void) {
  LOAD_REGS();
L_7def10: /* 7def10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7def12: push 0x9d0948 */
  { uint32_t v = 0x9d0948u; esp -= 4; W32(esp, v); }
/* 7def17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7def1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7def1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7def25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7def26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7def27: mov esi, ecx */
  esi = ecx;
/* 7def29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7def2d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7def33u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7def33: xor eax, eax */
  eax = 0;
/* 7def35: mov ecx, esi */
  ecx = esi;
/* 7def37: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7def3b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7def3e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7def45: call 0x6c80a8 */
  esp -= 4; W32(esp, 0x7def4au); SPILL(); f_6c80a8(); if (g_unwind) return; RELOAD();
/* 7def4a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7def4e: mov eax, esi */
  eax = esi;
/* 7def50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7def51: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7def58: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7def5b: ret  */
  esp += 4; SPILL(); return;
}

void f_7def80(void) {
  LOAD_REGS();
L_7def80: /* 7def80: jmp 0x6c6c0d */
  SPILL(); f_6c6c0d(); return;
}

void f_7defa0(void) {
  LOAD_REGS();
L_7defa0: /* 7defa0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7defa2: push 0x9d0987 */
  { uint32_t v = 0x9d0987u; esp -= 4; W32(esp, v); }
/* 7defa7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7defad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7defae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7defb5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7defb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7defb9: mov esi, ecx */
  esi = ecx;
/* 7defbb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7defbc: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 7defc0: mov dword ptr [esi], 0xa0f800 */
  W32((uint32_t)(esi), 0xa0f800u);
/* 7defc6: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 7defc9: mov ecx, edi */
  ecx = edi;
/* 7defcb: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7defd3: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 7defd7: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7defddu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7defdd: mov ecx, edi */
  ecx = edi;
/* 7defdf: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 7defe4: mov dword ptr [edi + 0xc], 0 */
  W32((uint32_t)(edi + 0xcu), 0x0u);
/* 7defeb: mov dword ptr [edi + 0x10], 8 */
  W32((uint32_t)(edi + 0x10u), 0x8u);
/* 7deff2: call 0x6c80a8 */
  esp -= 4; W32(esp, 0x7deff7u); SPILL(); f_6c80a8(); if (g_unwind) return; RELOAD();
/* 7deff7: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 7deffa: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 7defff: mov dword ptr [esi], 0xa0fb20 */
  W32((uint32_t)(esi), 0xa0fb20u);
/* 7df005: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7df00bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7df00b: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 7df00e: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 7df013: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7df019u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7df019: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7df01d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df01e: mov eax, esi */
  eax = esi;
/* 7df020: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df021: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df028: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df02b: ret  */
  esp += 4; SPILL(); return;
}

void f_7df060(void) {
  LOAD_REGS();
L_7df060: /* 7df060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7df061: mov ebp, esp */
  ebp = esp;
/* 7df063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7df065: push 0x9d09a0 */
  { uint32_t v = 0x9d09a0u; esp -= 4; W32(esp, v); }
/* 7df06a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7df070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7df078: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7df07b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7df07e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7df07f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7df080: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df081: mov esi, ecx */
  esi = ecx;
/* 7df083: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7df086: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df087: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 7df08a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7df091: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7df097u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7df097: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7df09a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df09b: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 7df09e: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7df0a4u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7df0a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df0a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df0a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df0a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df0b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df0b1: mov esp, ebp */
  esp = ebp;
/* 7df0b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df0b4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7df0b7(void) {
  LOAD_REGS();
L_7df0b7: /* 7df0b7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7df0ba: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7df0bf: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7df0c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df0c3: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7df0c6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df0cbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7df0cb(); return;
}

void f_7df0cb(void) {
  LOAD_REGS();
L_7df0cb: /* 7df0cb: push 0xa0fb80 */
  { uint32_t v = 0xa0fb80u; esp -= 4; W32(esp, v); }
/* 7df0d0: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7df0d5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7df0dbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7df0db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df0de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df0e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df0e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df0e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7df0e7: guest_badaddr(0x7df0e7); return;
}

void f_7df120(void) {
  LOAD_REGS();
L_7df120: /* 7df120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7df121: mov ebp, esp */
  ebp = esp;
/* 7df123: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7df125: push 0x9d09b0 */
  { uint32_t v = 0x9d09b0u; esp -= 4; W32(esp, v); }
/* 7df12a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7df130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df131: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7df138: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7df13b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7df13d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7df13e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7df13f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df140: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7df143: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df145: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7df147: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7df14e: call dword ptr [eax + 0x34] */
  { uint32_t t = R32((uint32_t)(eax + 0x34u)); esp -= 4; W32(esp, 0x7df151u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7df151: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df154: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df155: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df156: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df15d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df15e: mov esp, ebp */
  esp = ebp;
/* 7df160: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df161: ret  */
  esp += 4; SPILL(); return;
}

void f_7df162(void) {
  LOAD_REGS();
L_7df162: /* 7df162: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7df165: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7df16a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7df16d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df16e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7df171: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df176u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7df176(); return;
}

void f_7df176(void) {
  LOAD_REGS();
L_7df176: /* 7df176: push 0xa0fbb4 */
  { uint32_t v = 0xa0fbb4u; esp -= 4; W32(esp, v); }
/* 7df17b: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7df180: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7df186u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7df186: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df189: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df18b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df18d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df192u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7df192: guest_badaddr(0x7df192); return;
}

void f_7df1c0(void) {
  LOAD_REGS();
L_7df1c0: /* 7df1c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7df1c1: mov ebp, esp */
  ebp = esp;
/* 7df1c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7df1c5: push 0x9d09c0 */
  { uint32_t v = 0x9d09c0u; esp -= 4; W32(esp, v); }
/* 7df1ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7df1d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df1d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7df1d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df1d9: mov eax, 0x2008 */
  eax = 0x2008u;
/* 7df1de: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7df1e3u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7df1e3: mov ax, word ptr [0xb08944] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb08944u))) & 0xffffu);
/* 7df1e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7df1ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7df1eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df1ec: mov edx, ecx */
  edx = ecx;
/* 7df1ee: mov word ptr [ebp - 0x2018], ax */
  W16((uint32_t)(ebp + 0xffffdfe8u), (eax & 0xffffu));
/* 7df1f5: xor eax, eax */
  eax = 0;
/* 7df1f7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7df1fa: mov ecx, 0x7ff */
  ecx = 0x7ffu;
/* 7df1ff: lea edi, [ebp - 0x2016] */
  edi = (uint32_t)(ebp + 0xffffdfeau);
/* 7df205: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7df207: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7df20a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df20b: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 7df210: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 7df216: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df217: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7df21a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df21b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7df21e: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7df220: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7df222: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df223: mov ecx, edx */
  ecx = edx;
/* 7df225: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7df22c: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x7df22fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7df22f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7df232: lea edx, [ebp - 0x2018] */
  edx = (uint32_t)(ebp + 0xffffdfe8u);
/* 7df238: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df239: mov esi, eax */
  esi = eax;
/* 7df23b: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7df241u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7df241: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df244: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df245: mov eax, esi */
  eax = esi;
/* 7df247: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df248: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df24f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df250: mov esp, ebp */
  esp = ebp;
/* 7df252: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df253: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7df256(void) {
  LOAD_REGS();
L_7df256: /* 7df256: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7df259: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7df25e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7df261: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df262: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7df265: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df26au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7df26a(); return;
}

void f_7df26a(void) {
  LOAD_REGS();
L_7df26a: /* 7df26a: push 0xa0fbe8 */
  { uint32_t v = 0xa0fbe8u; esp -= 4; W32(esp, v); }
/* 7df26f: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7df274: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7df27au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7df27a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df27d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df27f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df281: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df286u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7df286: guest_badaddr(0x7df286); return;
}

void f_7df2d0(void) {
  LOAD_REGS();
L_7df2d0: /* 7df2d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7df2d1: mov ebp, esp */
  ebp = esp;
/* 7df2d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7df2d5: push 0x9d09d0 */
  { uint32_t v = 0x9d09d0u; esp -= 4; W32(esp, v); }
/* 7df2da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7df2e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df2e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7df2e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7df2eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7df2ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7df2ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df2ee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7df2f1: mov esi, ecx */
  esi = ecx;
/* 7df2f3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7df2fa: call dword ptr [0xcfa954] */
  esp -= 4; W32(esp, 0x7df300u); SPILL(); f_4e292d(); if (g_unwind) return; /* Core!?appStaticString1024@@YAPAGXZ */ RELOAD();
/* 7df300: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7df303: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7df306: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df307: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7df30a: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7df30f: mov edi, eax */
  edi = eax;
/* 7df311: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7df313: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df314: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df315: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df316: mov ecx, esi */
  ecx = esi;
/* 7df318: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x7df31bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7df31b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df31e: mov eax, edi */
  eax = edi;
/* 7df320: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df321: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df322: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df329: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df32a: mov esp, ebp */
  esp = ebp;
/* 7df32c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df32d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7df330(void) {
  LOAD_REGS();
L_7df330: /* 7df330: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7df333: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7df338: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7df33b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df33c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7df33f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df344u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7df344(); return;
}

void f_7df344(void) {
  LOAD_REGS();
L_7df344: /* 7df344: push 0xa0fc28 */
  { uint32_t v = 0xa0fc28u; esp -= 4; W32(esp, v); }
/* 7df349: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7df34e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7df354u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7df354: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df357: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df359: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df35b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df360u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7df360: guest_badaddr(0x7df360); return;
}

void f_7df3a0(void) {
  LOAD_REGS();
L_7df3a0: /* 7df3a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7df3a1: mov ebp, esp */
  ebp = esp;
/* 7df3a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7df3a5: push 0x9d09e0 */
  { uint32_t v = 0x9d09e0u; esp -= 4; W32(esp, v); }
/* 7df3aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7df3b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df3b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7df3b8: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7df3be: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7df3c1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7df3c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7df3c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7df3c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df3c6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7df3c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df3ca: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 7df3cc: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 7df3d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df3d3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7df3d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df3d7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7df3da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df3db: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7df3e2: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x7df3e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7df3e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7df3e7: je 0x7df416 */
  if (zf) goto L_7df416;
L_7df3e9: /* 7df3e9: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 7df3ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df3f0: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7df3f6u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7df3f6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7df3f9: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7df3fb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df3fe: mov eax, 1 */
  eax = 0x1u;
/* 7df403: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df406: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df40d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df40e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df40f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df410: mov esp, ebp */
  esp = ebp;
/* 7df412: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df413: ret 0x10 */
  esp += 20; SPILL(); return;
L_7df416: /* 7df416: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df419: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df41a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df41b: xor eax, eax */
  eax = 0;
/* 7df41d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df424: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df425: mov esp, ebp */
  esp = ebp;
/* 7df427: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df428: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7df42b(void) {
  LOAD_REGS();
L_7df42b: /* 7df42b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7df42e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7df433: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7df436: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df437: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7df43a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df43fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7df43f(); return;
}

void f_7df43f(void) {
  LOAD_REGS();
L_7df43f: /* 7df43f: push 0xa0fc64 */
  { uint32_t v = 0xa0fc64u; esp -= 4; W32(esp, v); }
/* 7df444: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7df449: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7df44fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7df44f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df452: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df454: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df456: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df45bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7df45b: guest_badaddr(0x7df45b); return;
}

void f_7df490(void) {
  LOAD_REGS();
L_7df490: /* 7df490: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7df491: mov ebp, esp */
  ebp = esp;
/* 7df493: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7df495: push 0x9d09f0 */
  { uint32_t v = 0x9d09f0u; esp -= 4; W32(esp, v); }
/* 7df49a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7df4a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df4a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7df4a8: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7df4ae: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7df4b1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7df4b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7df4b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7df4b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df4b6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7df4b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df4ba: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 7df4bc: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 7df4c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df4c3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7df4c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df4c7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7df4ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df4cb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7df4d2: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x7df4d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7df4d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7df4d7: je 0x7df509 */
  if (zf) goto L_7df509;
L_7df4d9: /* 7df4d9: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 7df4df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df4e0: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x7df4e6u); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 7df4e6: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 7df4e9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7df4ec: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 7df4ee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df4f1: mov eax, 1 */
  eax = 0x1u;
/* 7df4f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df4f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df500: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df501: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df502: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df503: mov esp, ebp */
  esp = ebp;
/* 7df505: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df506: ret 0x10 */
  esp += 20; SPILL(); return;
L_7df509: /* 7df509: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df50c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df50d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df50e: xor eax, eax */
  eax = 0;
/* 7df510: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df517: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df518: mov esp, ebp */
  esp = ebp;
/* 7df51a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df51b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7df51e(void) {
  LOAD_REGS();
L_7df51e: /* 7df51e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7df521: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7df526: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7df529: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df52a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7df52d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df532u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7df532(); return;
}

void f_7df532(void) {
  LOAD_REGS();
L_7df532: /* 7df532: push 0xa0fca0 */
  { uint32_t v = 0xa0fca0u; esp -= 4; W32(esp, v); }
/* 7df537: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7df53c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7df542u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7df542: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df545: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df547: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df549: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df54eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7df54e: guest_badaddr(0x7df54e); return;
}

void f_7df580(void) {
  LOAD_REGS();
L_7df580: /* 7df580: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7df581: mov ebp, esp */
  ebp = esp;
/* 7df583: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7df585: push 0x9d0a00 */
  { uint32_t v = 0x9d0a00u; esp -= 4; W32(esp, v); }
/* 7df58a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7df590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df591: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7df598: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7df59e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7df5a1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7df5a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7df5a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7df5a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df5a6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7df5a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df5aa: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 7df5ac: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 7df5b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df5b3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7df5b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df5b7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7df5ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df5bb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7df5c2: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x7df5c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7df5c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7df5c7: je 0x7df622 */
  if (zf) goto L_7df622;
L_7df5c9: /* 7df5c9: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 7df5cf: push 0xadd3c8 */
  { uint32_t v = 0xadd3c8u; esp -= 4; W32(esp, v); }
/* 7df5d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df5d5: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7df5dbu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7df5db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df5de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7df5e0: jne 0x7df5ed */
  if (!zf) goto L_7df5ed;
L_7df5e2: /* 7df5e2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7df5e5: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 7df5eb: jmp 0x7df60a */
  goto L_7df60a;
L_7df5ed: /* 7df5ed: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 7df5f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df5f4: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7df5fau); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7df5fa: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7df5fd: xor ecx, ecx */
  ecx = 0;
/* 7df5ff: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df602: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7df605: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7df608: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_7df60a: /* 7df60a: mov eax, 1 */
  eax = 0x1u;
/* 7df60f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df612: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df619: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df61a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df61b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df61c: mov esp, ebp */
  esp = ebp;
/* 7df61e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df61f: ret 0x10 */
  esp += 20; SPILL(); return;
L_7df622: /* 7df622: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df625: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df626: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df627: xor eax, eax */
  eax = 0;
/* 7df629: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df630: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df631: mov esp, ebp */
  esp = ebp;
/* 7df633: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df634: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7df637(void) {
  LOAD_REGS();
L_7df637: /* 7df637: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7df63a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7df63f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7df642: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df643: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7df646: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df64bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7df64b(); return;
}

void f_7df64b(void) {
  LOAD_REGS();
L_7df64b: /* 7df64b: push 0xa0fce0 */
  { uint32_t v = 0xa0fce0u; esp -= 4; W32(esp, v); }
/* 7df650: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7df655: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7df65bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7df65b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df65e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df660: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df662: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df667u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7df667: guest_badaddr(0x7df667); return;
}

void f_7df6b0(void) {
  LOAD_REGS();
L_7df6b0: /* 7df6b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7df6b1: mov ebp, esp */
  ebp = esp;
/* 7df6b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7df6b5: push 0x9d0a10 */
  { uint32_t v = 0x9d0a10u; esp -= 4; W32(esp, v); }
/* 7df6ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7df6c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df6c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7df6c8: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7df6cb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7df6ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7df6cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7df6d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df6d1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7df6d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df6d5: mov esi, ecx */
  esi = ecx;
/* 7df6d7: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7df6da: push 0xadd3d4 */
  { uint32_t v = 0xadd3d4u; esp -= 4; W32(esp, v); }
/* 7df6df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df6e0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7df6e7: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7df6edu); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7df6ed: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7df6f0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7df6f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df6f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df6f6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7df6f9: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7df6fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df6fd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7df700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df701: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df702: mov ecx, esi */
  ecx = esi;
/* 7df704: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x7df707u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7df707: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df70a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df70b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df70c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df713: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df714: mov esp, ebp */
  esp = ebp;
/* 7df716: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df717: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7df71a(void) {
  LOAD_REGS();
L_7df71a: /* 7df71a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7df71d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7df722: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7df725: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df726: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7df729: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df72eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7df72e(); return;
}

void f_7df72e(void) {
  LOAD_REGS();
L_7df72e: /* 7df72e: push 0xa0fd1c */
  { uint32_t v = 0xa0fd1cu; esp -= 4; W32(esp, v); }
/* 7df733: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7df738: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7df73eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7df73e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df741: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df743: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df745: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df74au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7df74a: guest_badaddr(0x7df74a); return;
}

void f_7df780(void) {
  LOAD_REGS();
L_7df780: /* 7df780: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7df781: mov ebp, esp */
  ebp = esp;
/* 7df783: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7df785: push 0x9d0a20 */
  { uint32_t v = 0x9d0a20u; esp -= 4; W32(esp, v); }
/* 7df78a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7df790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df791: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7df798: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7df79b: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7df79e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7df79f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7df7a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df7a1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7df7a4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7df7a7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7df7aa: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 7df7ad: push 0xadd3dc */
  { uint32_t v = 0xadd3dcu; esp -= 4; W32(esp, v); }
/* 7df7b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df7b3: mov esi, ecx */
  esi = ecx;
/* 7df7b5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7df7bc: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7df7c2u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7df7c2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7df7c5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7df7c7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df7ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df7cb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7df7ce: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7df7d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df7d2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7df7d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df7d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df7d7: mov ecx, esi */
  ecx = esi;
/* 7df7d9: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x7df7dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7df7dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df7df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df7e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df7e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df7e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df7e9: mov esp, ebp */
  esp = ebp;
/* 7df7eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df7ec: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7df7ef(void) {
  LOAD_REGS();
L_7df7ef: /* 7df7ef: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7df7f2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7df7f7: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7df7fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df7fb: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7df7fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df803u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7df803(); return;
}

void f_7df803(void) {
  LOAD_REGS();
L_7df803: /* 7df803: push 0xa0fd58 */
  { uint32_t v = 0xa0fd58u; esp -= 4; W32(esp, v); }
/* 7df808: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7df80d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7df813u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7df813: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df816: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df818: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df81a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df81fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7df81f: guest_badaddr(0x7df81f); return;
}

void f_7df850(void) {
  LOAD_REGS();
L_7df850: /* 7df850: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7df851: mov ebp, esp */
  ebp = esp;
/* 7df853: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7df855: push 0x9d0a30 */
  { uint32_t v = 0x9d0a30u; esp -= 4; W32(esp, v); }
/* 7df85a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7df860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df861: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7df868: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7df86b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7df86e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7df86f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7df870: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df871: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7df873: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7df876: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7df87d: mov eax, 0xadd3c8 */
  eax = 0xadd3c8u;
/* 7df882: jne 0x7df889 */
  if (!zf) goto L_7df889;
L_7df884: /* 7df884: mov eax, 0xadd3e4 */
  eax = 0xadd3e4u;
L_7df889: /* 7df889: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7df88c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7df88e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7df88f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df890: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7df893: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df894: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7df897: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df898: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x7df89bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7df89b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df89e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df89f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df8a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df8a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df8a8: mov esp, ebp */
  esp = ebp;
/* 7df8aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df8ab: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7df8ae(void) {
  LOAD_REGS();
L_7df8ae: /* 7df8ae: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7df8b1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7df8b6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7df8b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7df8ba: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7df8bd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df8c2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7df8c2(); return;
}

void f_7df8c2(void) {
  LOAD_REGS();
L_7df8c2: /* 7df8c2: push 0xa0fd98 */
  { uint32_t v = 0xa0fd98u; esp -= 4; W32(esp, v); }
/* 7df8c7: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7df8cc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7df8d2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7df8d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df8d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df8d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df8d9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df8deu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7df8de: guest_badaddr(0x7df8de); return;
}

void f_7df910(void) {
  LOAD_REGS();
L_7df910: /* 7df910: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7df911: mov ebp, esp */
  ebp = esp;
/* 7df913: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7df915: push 0x9d0a40 */
  { uint32_t v = 0x9d0a40u; esp -= 4; W32(esp, v); }
/* 7df91a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7df920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df921: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7df928: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7df92b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7df92c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7df92d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df92e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7df931: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7df934: mov esi, ecx */
  esi = ecx;
/* 7df936: push 0xadd3f4 */
  { uint32_t v = 0xadd3f4u; esp -= 4; W32(esp, v); }
/* 7df93b: mov ecx, edi */
  ecx = edi;
/* 7df93d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7df944: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x7df94au); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* 7df94a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df94b: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7df94e: call 0x6c58ad */
  esp -= 4; W32(esp, 0x7df953u); SPILL(); f_6c58ad(); if (g_unwind) return; RELOAD();
/* 7df953: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7df956: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7df957: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7df958: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7df95f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7df960: mov esp, ebp */
  esp = ebp;
/* 7df962: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7df963: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7df966(void) {
  LOAD_REGS();
L_7df966: /* 7df966: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7df969: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7df96e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7df971: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df972: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7df975: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df97au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7df97a(); return;
}

void f_7df97a(void) {
  LOAD_REGS();
L_7df97a: /* 7df97a: push 0xa0fdd4 */
  { uint32_t v = 0xa0fdd4u; esp -= 4; W32(esp, v); }
/* 7df97f: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7df984: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7df98au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7df98a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7df98d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df98f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7df991: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7df996u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7df996: guest_badaddr(0x7df996); return;
}

void f_7df9d0(void) {
  LOAD_REGS();
L_7df9d0: /* 7df9d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7df9d1: mov ebp, esp */
  ebp = esp;
/* 7df9d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7df9d5: push 0x9d0a50 */
  { uint32_t v = 0x9d0a50u; esp -= 4; W32(esp, v); }
/* 7df9da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7df9e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df9e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7df9e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7df9eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7df9ec: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7df9ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7df9f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7df9f1: mov esi, ecx */
  esi = ecx;
/* 7df9f3: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7df9f6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7df9f9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7df9fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7df9fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7df9fe: push 0xadd438 */
  { uint32_t v = 0xadd438u; esp -= 4; W32(esp, v); }
/* 7dfa03: xor edi, edi */
  edi = 0;
/* 7dfa05: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dfa06: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7dfa09: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7dfa0fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7dfa0f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7dfa12: /* 7dfa12: cmp edi, dword ptr [esi + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dfa15: jge 0x7dfa77 */
  if ((sf == of)) goto L_7dfa77;
L_7dfa17: /* 7dfa17: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7dfa1a: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7dfa1d: xor ecx, ecx */
  ecx = 0;
/* 7dfa1f: nop  */
L_7dfa20: /* 7dfa20: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dfa23: je 0x7dfa33 */
  if (zf) goto L_7dfa33;
L_7dfa25: /* 7dfa25: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7dfa27: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7dfa2a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7dfa2b: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7dfa2e: mov eax, dword ptr [eax + edx] */
  eax = R32((uint32_t)(eax + edx));
/* 7dfa31: jmp 0x7dfa20 */
  goto L_7dfa20;
L_7dfa33: /* 7dfa33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dfa34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dfa35: push 0xadd410 */
  { uint32_t v = 0xadd410u; esp -= 4; W32(esp, v); }
/* 7dfa3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dfa3b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7dfa41u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7dfa41: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dfa44: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7dfa45: jmp 0x7dfa12 */
  goto L_7dfa12;
L_7dfa77: /* 7dfa77: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dfa7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dfa7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dfa7c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dfa83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dfa84: mov esp, ebp */
  esp = ebp;
/* 7dfa86: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dfa87: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dfa47(void) {
  LOAD_REGS();
L_7dfa47: /* 7dfa47: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dfa4a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dfa4f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7dfa52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dfa53: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7dfa56: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dfa5bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dfa5b(); return;
}

void f_7dfa5b(void) {
  LOAD_REGS();
L_7dfa5b: /* 7dfa5b: push 0xa0fe08 */
  { uint32_t v = 0xa0fe08u; esp -= 4; W32(esp, v); }
/* 7dfa60: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7dfa65: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dfa6bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dfa6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dfa6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dfa70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dfa72: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dfa77u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7dfa77: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dfa7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dfa7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dfa7c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dfa83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dfa84: mov esp, ebp */
  esp = ebp;
/* 7dfa86: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dfa87: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dfac0(void) {
  LOAD_REGS();
L_7dfac0: /* 7dfac0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dfac1: mov ebp, esp */
  ebp = esp;
/* 7dfac3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dfac5: push 0x9d0a60 */
  { uint32_t v = 0x9d0a60u; esp -= 4; W32(esp, v); }
/* 7dfaca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dfad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dfad1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dfad8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7dfadb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dfadc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dfadd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dfade: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7dfae1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7dfae4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dfae6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dfae7: mov esi, ecx */
  esi = ecx;
/* 7dfae9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dfaf0: call 0x6ca4a2 */
  esp -= 4; W32(esp, 0x7dfaf5u); SPILL(); f_6ca4a2(); if (g_unwind) return; RELOAD();
/* 7dfaf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dfaf7: je 0x7dfb02 */
  if (zf) goto L_7dfb02;
L_7dfaf9: /* 7dfaf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dfafa: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7dfafd: call 0x6c3f21 */
  esp -= 4; W32(esp, 0x7dfb02u); SPILL(); f_6c3f21(); if (g_unwind) return; RELOAD();
L_7dfb02: /* 7dfb02: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dfb05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dfb06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dfb07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dfb0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dfb0f: mov esp, ebp */
  esp = ebp;
/* 7dfb11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dfb12: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dfb15(void) {
  LOAD_REGS();
L_7dfb15: /* 7dfb15: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dfb18: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dfb1d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7dfb20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dfb21: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7dfb24: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dfb29u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dfb29(); return;
}

void f_7dfb29(void) {
  LOAD_REGS();
L_7dfb29: /* 7dfb29: push 0xa0fe2c */
  { uint32_t v = 0xa0fe2cu; esp -= 4; W32(esp, v); }
/* 7dfb2e: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7dfb33: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dfb39u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dfb39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dfb3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dfb3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dfb40: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dfb45u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7dfb45: guest_badaddr(0x7dfb45); return;
}

void f_7dfb80(void) {
  LOAD_REGS();
L_7dfb80: /* 7dfb80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dfb81: mov ebp, esp */
  ebp = esp;
/* 7dfb83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dfb85: push 0x9d0a70 */
  { uint32_t v = 0x9d0a70u; esp -= 4; W32(esp, v); }
/* 7dfb8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dfb90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dfb91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dfb98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7dfb9b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7dfb9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dfb9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dfba0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dfba1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7dfba4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dfba6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dfba7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dfbae: call 0x6ca4a2 */
  esp -= 4; W32(esp, 0x7dfbb3u); SPILL(); f_6ca4a2(); if (g_unwind) return; RELOAD();
/* 7dfbb3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dfbb5: je 0x7dfbbe */
  if (zf) goto L_7dfbbe;
L_7dfbb7: /* 7dfbb7: mov dword ptr [eax + 0x18], 1 */
  W32((uint32_t)(eax + 0x18u), 0x1u);
L_7dfbbe: /* 7dfbbe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dfbc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dfbc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dfbc3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dfbca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dfbcb: mov esp, ebp */
  esp = ebp;
/* 7dfbcd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dfbce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7dfbd1(void) {
  LOAD_REGS();
L_7dfbd1: /* 7dfbd1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dfbd4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dfbd9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7dfbdc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dfbdd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7dfbe0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dfbe5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dfbe5(); return;
}

void f_7dfbe5(void) {
  LOAD_REGS();
L_7dfbe5: /* 7dfbe5: push 0xa0fe70 */
  { uint32_t v = 0xa0fe70u; esp -= 4; W32(esp, v); }
/* 7dfbea: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7dfbef: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dfbf5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dfbf5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dfbf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dfbfa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dfbfc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dfc01u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7dfc01: guest_badaddr(0x7dfc01); return;
}

void f_7dfc40(void) {
  LOAD_REGS();
L_7dfc40: /* 7dfc40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dfc41: mov ebp, esp */
  ebp = esp;
/* 7dfc43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dfc45: push 0x9d0a91 */
  { uint32_t v = 0x9d0a91u; esp -= 4; W32(esp, v); }
/* 7dfc4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dfc50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dfc51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dfc58: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7dfc5b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7dfc5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dfc5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dfc60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dfc61: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7dfc64: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7dfc67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dfc69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dfc6a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dfc71: mov word ptr [edi], 0 */
  W16((uint32_t)(edi), 0x0u);
/* 7dfc76: call 0x6ca4a2 */
  esp -= 4; W32(esp, 0x7dfc7bu); SPILL(); f_6ca4a2(); if (g_unwind) return; RELOAD();
/* 7dfc7b: mov esi, eax */
  esi = eax;
/* 7dfc7d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dfc7f: jne 0x7dfc96 */
  if (!zf) goto L_7dfc96;
L_7dfc81: /* 7dfc81: xor eax, eax */
  eax = 0;
/* 7dfc83: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dfc86: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dfc8d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dfc8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dfc8f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dfc90: mov esp, ebp */
  esp = ebp;
/* 7dfc92: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dfc93: ret 0x10 */
  esp += 20; SPILL(); return;
L_7dfc96: /* 7dfc96: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7dfc99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dfc9a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dfc9d: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7dfca3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7dfca3: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dfca6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dfca7: mov ecx, esi */
  ecx = esi;
/* 7dfca9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dfcad: call 0x6c9061 */
  esp -= 4; W32(esp, 0x7dfcb2u); SPILL(); f_6c9061(); if (g_unwind) return; RELOAD();
/* 7dfcb2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dfcb5: mov esi, eax */
  esi = eax;
/* 7dfcb7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dfcbb: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dfcc1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dfcc1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dfcc3: je 0x7dfc81 */
  if (zf) goto L_7dfc81;
L_7dfcc5: /* 7dfcc5: mov ecx, esi */
  ecx = esi;
/* 7dfcc7: mov ebx, esi */
  ebx = esi;
/* 7dfcc9: xor esi, esi */
  esi = 0;
/* 7dfccb: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7dfcce: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 7dfcd1: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7dfcd4: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 7dfcd7: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dfcdb: jmp 0x7dfce0 */
  goto L_7dfce0;
L_7dfce0: /* 7dfce0: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dfce3: jge 0x7dfd56 */
  if ((sf == of)) goto L_7dfd56;
L_7dfce5: /* 7dfce5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7dfce7: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 7dfcea: lea ecx, [eax + esi + 4] */
  ecx = (uint32_t)(eax + esi + 0x4u);
/* 7dfcee: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dfcf4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dfcf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dfcf5: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7dfcfbu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7dfcfb: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7dfcfe: mov ecx, edi */
  ecx = edi;
/* 7dfd00: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7dfd02: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 7dfd04: lea edx, [ecx + eax + 1] */
  edx = (uint32_t)(ecx + eax + 0x1u);
/* 7dfd08: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7dfd0b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dfd0e: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dfd10: jge 0x7dfd53 */
  if ((sf == of)) goto L_7dfd53;
L_7dfd12: /* 7dfd12: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7dfd14: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7dfd16: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 7dfd19: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 7dfd1c: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 7dfd1f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dfd25u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dfd25: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7dfd28: mov esi, eax */
  esi = eax;
/* 7dfd2a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dfd30u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dfd30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dfd31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dfd32: push 0xadd48c */
  { uint32_t v = 0xadd48cu; esp -= 4; W32(esp, v); }
/* 7dfd37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dfd38: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7dfd3eu); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7dfd3e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7dfd41: lea edi, [edi + eax*2 + 2] */
  edi = (uint32_t)(edi + eax*2 + 0x2u);
/* 7dfd45: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7dfd48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dfd4b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dfd4c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7dfd4f: mov esi, eax */
  esi = eax;
/* 7dfd51: jmp 0x7dfce0 */
  goto L_7dfce0;
L_7dfd53: /* 7dfd53: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
L_7dfd56: /* 7dfd56: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7dfd59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dfd5b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dfd5f: je 0x7dfd7e */
  if (zf) goto L_7dfd7e;
L_7dfd61: /* 7dfd61: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7dfd64: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 7dfd67: lea edx, [edx + edx + 8] */
  edx = (uint32_t)(edx + edx + 0x8u);
/* 7dfd6b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dfd6d: jle 0x7dfd79 */
  if ((zf || sf != of)) goto L_7dfd79;
L_7dfd6f: /* 7dfd6f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7dfd70: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7dfd72: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7dfd74: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 7dfd77: jmp 0x7dfd61 */
  goto L_7dfd61;
L_7dfd79: /* 7dfd79: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7dfd7eu); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
L_7dfd7e: /* 7dfd7e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dfd81: mov word ptr [edi], 0 */
  W16((uint32_t)(edi), 0x0u);
/* 7dfd86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dfd87: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dfd88: mov eax, 1 */
  eax = 0x1u;
/* 7dfd8d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dfd94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dfd95: mov esp, ebp */
  esp = ebp;
/* 7dfd97: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dfd98: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7dfcdd(void) {
  LOAD_REGS();
L_7dfcdd: /* 7dfcdd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7dfce0: /* 7dfce0: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dfce3: jge 0x7dfd56 */
  if ((sf == of)) goto L_7dfd56;
L_7dfce5: /* 7dfce5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7dfce7: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 7dfcea: lea ecx, [eax + esi + 4] */
  ecx = (uint32_t)(eax + esi + 0x4u);
/* 7dfcee: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dfcf4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dfcf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dfcf5: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7dfcfbu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7dfcfb: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7dfcfe: mov ecx, edi */
  ecx = edi;
/* 7dfd00: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7dfd02: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 7dfd04: lea edx, [ecx + eax + 1] */
  edx = (uint32_t)(ecx + eax + 0x1u);
/* 7dfd08: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7dfd0b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dfd0e: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dfd10: jge 0x7dfd53 */
  if ((sf == of)) goto L_7dfd53;
L_7dfd12: /* 7dfd12: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7dfd14: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7dfd16: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 7dfd19: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 7dfd1c: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 7dfd1f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dfd25u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dfd25: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7dfd28: mov esi, eax */
  esi = eax;
/* 7dfd2a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dfd30u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dfd30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dfd31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dfd32: push 0xadd48c */
  { uint32_t v = 0xadd48cu; esp -= 4; W32(esp, v); }
/* 7dfd37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dfd38: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7dfd3eu); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7dfd3e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7dfd41: lea edi, [edi + eax*2 + 2] */
  edi = (uint32_t)(edi + eax*2 + 0x2u);
/* 7dfd45: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7dfd48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dfd4b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dfd4c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7dfd4f: mov esi, eax */
  esi = eax;
/* 7dfd51: jmp 0x7dfce0 */
  goto L_7dfce0;
L_7dfd53: /* 7dfd53: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
L_7dfd56: /* 7dfd56: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7dfd59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dfd5b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dfd5f: je 0x7dfd7e */
  if (zf) goto L_7dfd7e;
L_7dfd61: /* 7dfd61: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7dfd64: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 7dfd67: lea edx, [edx + edx + 8] */
  edx = (uint32_t)(edx + edx + 0x8u);
/* 7dfd6b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dfd6d: jle 0x7dfd79 */
  if ((zf || sf != of)) goto L_7dfd79;
L_7dfd6f: /* 7dfd6f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7dfd70: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7dfd72: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7dfd74: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 7dfd77: jmp 0x7dfd61 */
  goto L_7dfd61;
L_7dfd79: /* 7dfd79: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7dfd7eu); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
L_7dfd7e: /* 7dfd7e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dfd81: mov word ptr [edi], 0 */
  W16((uint32_t)(edi), 0x0u);
/* 7dfd86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dfd87: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dfd88: mov eax, 1 */
  eax = 0x1u;
/* 7dfd8d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dfd94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dfd95: mov esp, ebp */
  esp = ebp;
/* 7dfd97: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dfd98: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7dfd9b(void) {
  LOAD_REGS();
L_7dfd9b: /* 7dfd9b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dfd9e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dfda3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7dfda6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dfda7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7dfdaa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dfdafu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dfdaf(); return;
}

void f_7dfdaf(void) {
  LOAD_REGS();
L_7dfdaf: /* 7dfdaf: push 0xa0feac */
  { uint32_t v = 0xa0feacu; esp -= 4; W32(esp, v); }
/* 7dfdb4: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7dfdb9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dfdbfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dfdbf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dfdc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dfdc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dfdc6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dfdcbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7dfdcb: guest_badaddr(0x7dfdcb); return;
}

void f_7dfe40(void) {
  LOAD_REGS();
L_7dfe40: /* 7dfe40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dfe41: mov ebp, esp */
  ebp = esp;
/* 7dfe43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dfe45: push 0x9d0ab9 */
  { uint32_t v = 0x9d0ab9u; esp -= 4; W32(esp, v); }
/* 7dfe4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dfe50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dfe51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dfe58: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7dfe5b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7dfe5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dfe5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dfe60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dfe61: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7dfe64: xor ebx, ebx */
  ebx = 0;
/* 7dfe66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dfe67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dfe68: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7dfe6b: call 0x6ca4a2 */
  esp -= 4; W32(esp, 0x7dfe70u); SPILL(); f_6ca4a2(); if (g_unwind) return; RELOAD();
/* 7dfe70: mov esi, eax */
  esi = eax;
/* 7dfe72: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dfe74: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 7dfe77: je 0x7dfeeb */
  if (zf) goto L_7dfeeb;
L_7dfe79: /* 7dfe79: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7dfe7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dfe7d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dfe80: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7dfe86u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7dfe86: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dfe89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dfe8a: mov ecx, esi */
  ecx = esi;
/* 7dfe8c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dfe90: call 0x6c9061 */
  esp -= 4; W32(esp, 0x7dfe95u); SPILL(); f_6c9061(); if (g_unwind) return; RELOAD();
/* 7dfe95: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dfe98: mov esi, eax */
  esi = eax;
/* 7dfe9a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7dfe9d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dfea3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dfea3: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dfea5: je 0x7dfeeb */
  if (zf) goto L_7dfeeb;
L_7dfea7: /* 7dfea7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7dfeaa: xor ecx, ecx */
  ecx = 0;
/* 7dfeac: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dfeae: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 7dfeb1: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 7dfeb4: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 7dfeb7: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 7dfeba: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 7dfebd: mov edi, ecx */
  edi = ecx;
/* 7dfebf: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7dfec2: call 0x6c388c */
  esp -= 4; W32(esp, 0x7dfec7u); SPILL(); f_6c388c(); if (g_unwind) return; RELOAD();
/* 7dfec7: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dfec9: je 0x7dfeeb */
  if (zf) goto L_7dfeeb;
L_7dfecb: /* 7dfecb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dfecc: mov ecx, esi */
  ecx = esi;
/* 7dfece: call 0x6c5ba5 */
  esp -= 4; W32(esp, 0x7dfed3u); SPILL(); f_6c5ba5(); if (g_unwind) return; RELOAD();
/* 7dfed3: mov ecx, esi */
  ecx = esi;
/* 7dfed5: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 7dfedc: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7dfee1u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7dfee1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7dfee4: mov dword ptr [edx + 0x14], 1 */
  W32((uint32_t)(edx + 0x14u), 0x1u);
L_7dfeeb: /* 7dfeeb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dfeee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dfeef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dfef0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dfef7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dfef8: mov esp, ebp */
  esp = ebp;
/* 7dfefa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dfefb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7dfefe(void) {
  LOAD_REGS();
L_7dfefe: /* 7dfefe: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dff01: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dff06: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7dff09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dff0a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7dff0d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dff12u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dff12(); return;
}

void f_7dff12(void) {
  LOAD_REGS();
L_7dff12: /* 7dff12: push 0xa0fef0 */
  { uint32_t v = 0xa0fef0u; esp -= 4; W32(esp, v); }
/* 7dff17: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7dff1c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dff22u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dff22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dff25: xor ebx, ebx */
  ebx = 0;
/* 7dff27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dff28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dff29: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dff2eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7dff2e: guest_badaddr(0x7dff2e); return;
}

void f_7dff70(void) {
  LOAD_REGS();
L_7dff70: /* 7dff70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dff71: mov ebp, esp */
  ebp = esp;
/* 7dff73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dff75: push 0x9d0b17 */
  { uint32_t v = 0x9d0b17u; esp -= 4; W32(esp, v); }
/* 7dff7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dff80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dff81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dff88: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7dff8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dff8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dff8d: mov esi, ecx */
  esi = ecx;
/* 7dff8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dff90: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7dff93: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7dff96: mov dword ptr [esi], 0xa0fb20 */
  W32((uint32_t)(esi), 0xa0fb20u);
/* 7dff9c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dffa3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dffa5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dffa7: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7dffab: call 0x6c37ec */
  esp -= 4; W32(esp, 0x7dffb0u); SPILL(); f_6c37ec(); if (g_unwind) return; RELOAD();
/* 7dffb0: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 7dffb3: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dffba: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dffc0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dffc0: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 7dffc3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dffc7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dffcdu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dffcd: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7dffd0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dffd4: call 0x6c6c0d */
  esp -= 4; W32(esp, 0x7dffd9u); SPILL(); f_6c6c0d(); if (g_unwind) return; RELOAD();
/* 7dffd9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dffdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dffdd: mov dword ptr [esi], 0xa0f800 */
  W32((uint32_t)(esi), 0xa0f800u);
/* 7dffe3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dffe4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dffeb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dffec: mov esp, ebp */
  esp = ebp;
/* 7dffee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dffef: ret  */
  esp += 4; SPILL(); return;
}

void f_7dfff0(void) {
  LOAD_REGS();
L_7dfff0: /* 7dfff0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7dfff3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dfff8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7dfffb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dfffc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7dffff: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e0004u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e0004(); return;
}

void f_7e0004(void) {
  LOAD_REGS();
L_7e0004: /* 7e0004: push 0xa0ff38 */
  { uint32_t v = 0xa0ff38u; esp -= 4; W32(esp, v); }
/* 7e0009: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7e000e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e0014u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e0014: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e0017: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0019: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e001b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e0020u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e0020: guest_badaddr(0x7e0020); return;
}

void f_7e0060(void) {
  LOAD_REGS();
L_7e0060: /* 7e0060: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e0061: mov esi, ecx */
  esi = ecx;
/* 7e0063: call 0x6cb77b */
  esp -= 4; W32(esp, 0x7e0068u); SPILL(); f_6cb77b(); if (g_unwind) return; RELOAD();
/* 7e0068: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e006d: je 0x7e007c */
  if (zf) goto L_7e007c;
L_7e006f: /* 7e006f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7e0074: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0076: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e0078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e0079: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e007cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e007c: /* 7e007c: mov eax, esi */
  eax = esi;
/* 7e007e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e007f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7e00a0(void) {
  LOAD_REGS();
L_7e00a0: /* 7e00a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e00a1: mov ebp, esp */
  ebp = esp;
/* 7e00a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e00a5: push 0x9d0b62 */
  { uint32_t v = 0x9d0b62u; esp -= 4; W32(esp, v); }
/* 7e00aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e00b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e00b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e00b8: sub esp, 0x270 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x270u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e00be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e00bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e00c0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7e00c3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7e00c6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7e00c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e00ca: xor edi, edi */
  edi = 0;
/* 7e00cc: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 7e00cf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7e00d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e00d3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7e00d6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e00d9: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7e00dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e00dd: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7e00e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e00e3: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7e00e6: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7e00e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e00e9: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7e00ec: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7e00f2u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7e00f2: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7e00f8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e00fa: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7e00fd: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7e0100: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7e0103: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e0104: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7e0107: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 7e010a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e010b: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7e0110: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e0111: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e0115: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7e0118u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e0118: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7e011e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7e0120: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0122: je 0x7e0131 */
  if (zf) goto L_7e0131;
L_7e0124: /* 7e0124: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7e0129: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e012b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e012d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e012e: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7e0131u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e0131: /* 7e0131: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7e0137: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e0139: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e013b: je 0x7e0142 */
  if (zf) goto L_7e0142;
L_7e013d: /* 7e013d: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7e0140: jmp 0x7e0148 */
  goto L_7e0148;
L_7e0142: /* 7e0142: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 7e0145: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_7e0148: /* 7e0148: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7e014b: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7e0151u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7e0151: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 7e0156: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7e0158: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7e015b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7e015e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7e0161: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e0162: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7e0165: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 7e0168: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0169: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7e016e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e016f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7e0173: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7e0176u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e0176: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7e017c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7e017e: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0180: je 0x7e018f */
  if (zf) goto L_7e018f;
L_7e0182: /* 7e0182: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7e0187: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e0189: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e018b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e018c: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7e018fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e018f: /* 7e018f: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7e0195: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e0197: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0199: je 0x7e01a0 */
  if (zf) goto L_7e01a0;
L_7e019b: /* 7e019b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e019e: jmp 0x7e01a6 */
  goto L_7e01a6;
L_7e01a0: /* 7e01a0: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7e01a3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
L_7e01a6: /* 7e01a6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7e01a9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e01aa: mov eax, edx */
  eax = edx;
/* 7e01ac: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7e01af: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e01b2: jne 0x7e01c8 */
  if (!zf) goto L_7e01c8;
L_7e01b4: /* 7e01b4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7e01b7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e01b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e01b9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7e01bc: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7e01c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e01c2: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7e01c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e01c8: /* 7e01c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e01cb: push 0xb821f4 */
  { uint32_t v = 0xb821f4u; esp -= 4; W32(esp, v); }
/* 7e01d0: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7e01d6u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7e01d6: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e01d9: push 0xb821f8 */
  { uint32_t v = 0xb821f8u; esp -= 4; W32(esp, v); }
/* 7e01de: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7e01e4u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7e01e4: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e01e7: call 0x6ccf7c */
  esp -= 4; W32(esp, 0x7e01ecu); SPILL(); f_6ccf7c(); if (g_unwind) return; RELOAD();
/* 7e01ec: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e01f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7e01f4: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e01f7: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e01fb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0201u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0201: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0202: lea edx, [ebp - 0x27c] */
  edx = (uint32_t)(ebp + 0xfffffd84u);
/* 7e0208: push 0xadd1d0 */
  { uint32_t v = 0xadd1d0u; esp -= 4; W32(esp, v); }
/* 7e020d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e020e: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7e0214u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7e0214: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e0217: lea eax, [ebp - 0x27c] */
  eax = (uint32_t)(ebp + 0xfffffd84u);
/* 7e021d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e021e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e0220: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0221: push 0xadd1ec */
  { uint32_t v = 0xadd1ecu; esp -= 4; W32(esp, v); }
/* 7e0226: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e0229: call 0x6ca871 */
  esp -= 4; W32(esp, 0x7e022eu); SPILL(); f_6ca871(); if (g_unwind) return; RELOAD();
/* 7e022e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0230: je 0x7e0314 */
  if (zf) goto L_7e0314;
L_7e0236: /* 7e0236: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7e0239: xor esi, esi */
  esi = 0;
/* 7e023b: mov ebx, eax */
  ebx = eax;
/* 7e023d: mov edi, eax */
  edi = eax;
/* 7e023f: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 7e0242: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 7e0245: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 7e0248: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7e024b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7e024f: nop  */
L_7e0250: /* 7e0250: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e0253: jge 0x7e02e8 */
  if ((sf == of)) goto L_7e02e8;
L_7e0259: /* 7e0259: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7e025b: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 7e025e: lea ecx, [ecx + esi + 0x10] */
  ecx = (uint32_t)(ecx + esi + 0x10u);
/* 7e0262: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0268u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0268: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e026c: je 0x7e02da */
  if (zf) goto L_7e02da;
L_7e026e: /* 7e026e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e0271: cmp edx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0274: jne 0x7e02d7 */
  if (!zf) goto L_7e02d7;
L_7e0276: /* 7e0276: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7e0278: lea ecx, [eax + esi + 4] */
  ecx = (uint32_t)(eax + esi + 0x4u);
/* 7e027c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0282u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0282: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e0285: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0286: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7e028cu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7e028c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7e028e: lea ecx, [ecx + esi + 0x10] */
  ecx = (uint32_t)(ecx + esi + 0x10u);
/* 7e0292: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0298u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0298: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e029b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e029c: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7e02a2u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7e02a2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e02a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e02a7: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e02aa: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* 7e02b0: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e02b4: je 0x7e0319 */
  if (zf) goto L_7e0319;
L_7e02b6: /* 7e02b6: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7e02b9: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 7e02bc: lea ecx, [ecx + ecx + 8] */
  ecx = (uint32_t)(ecx + ecx + 0x8u);
/* 7e02c0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e02c2: jle 0x7e02ce */
  if ((zf || sf != of)) goto L_7e02ce;
L_7e02c4: /* 7e02c4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7e02c5: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7e02c7: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7e02c9: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 7e02cc: jmp 0x7e02b6 */
  goto L_7e02b6;
L_7e02ce: /* 7e02ce: mov ecx, ebx */
  ecx = ebx;
/* 7e02d0: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7e02d5u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7e02d5: jmp 0x7e0319 */
  goto L_7e0319;
L_7e02d7: /* 7e02d7: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_7e02da: /* 7e02da: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e02dd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e02de: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7e02e1: mov esi, eax */
  esi = eax;
/* 7e02e3: jmp 0x7e0250 */
  goto L_7e0250;
L_7e02e8: /* 7e02e8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e02eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e02ed: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e02f1: je 0x7e0312 */
  if (zf) goto L_7e0312;
L_7e02f3: /* 7e02f3: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7e02f6: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 7e02f9: lea edx, [ecx + ecx + 8] */
  edx = (uint32_t)(ecx + ecx + 0x8u);
/* 7e02fd: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e02ff: jle 0x7e030b */
  if ((zf || sf != of)) goto L_7e030b;
L_7e0301: /* 7e0301: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7e0302: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7e0304: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7e0306: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 7e0309: jmp 0x7e02f3 */
  goto L_7e02f3;
L_7e030b: /* 7e030b: mov ecx, ebx */
  ecx = ebx;
/* 7e030d: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7e0312u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
L_7e0312: /* 7e0312: xor edi, edi */
  edi = 0;
L_7e0314: /* 7e0314: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7e0317: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_7e0319: /* 7e0319: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e031c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7e0320: call 0x6cb77b */
  esp -= 4; W32(esp, 0x7e0325u); SPILL(); f_6cb77b(); if (g_unwind) return; RELOAD();
/* 7e0325: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7e0328: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e032c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0332u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0332: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7e0335: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e0339: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e033fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e033f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e0342: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e0343: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e0344: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e034b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e034c: mov esp, ebp */
  esp = ebp;
/* 7e034e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e034f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7e0352(void) {
  LOAD_REGS();
L_7e0352: /* 7e0352: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7e0355: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e035a: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 7e035d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e035e: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7e0361: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e0366u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e0366(); return;
}

void f_7e0366(void) {
  LOAD_REGS();
L_7e0366: /* 7e0366: push 0xa0ff8c */
  { uint32_t v = 0xa0ff8cu; esp -= 4; W32(esp, v); }
/* 7e036b: push 0xadd1f8 */
  { uint32_t v = 0xadd1f8u; esp -= 4; W32(esp, v); }
/* 7e0370: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e0376u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e0376: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e0379: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e037b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e037d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e0382u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e0382: guest_badaddr(0x7e0382); return;
}

void f_7e0450(void) {
  LOAD_REGS();
L_7e0450: /* 7e0450: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e0451: mov ebp, esp */
  ebp = esp;
/* 7e0453: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e0455: push 0x9d0c48 */
  { uint32_t v = 0x9d0c48u; esp -= 4; W32(esp, v); }
/* 7e045a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e0460: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0461: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e0468: sub esp, 0x4a8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4a8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e046e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e046f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e0470: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0471: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0474: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e0477: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e047e: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7e0484u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7e0484: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7e0487: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7e048a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7e048d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7e0490: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e0491: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7e0494: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0497: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0498: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7e049d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e049e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e04a2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7e04a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e04a5: push 0xb821fc */
  { uint32_t v = 0xb821fcu; esp -= 4; W32(esp, v); }
/* 7e04aa: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e04ad: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e04b3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e04b3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7e04b6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7e04b9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7e04bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e04bd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7e04c0: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7e04c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e04c4: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7e04c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e04ca: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7e04ce: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7e04d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e04d1: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7e04d4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e04d5: mov eax, edx */
  eax = edx;
/* 7e04d7: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7e04da: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e04dd: jne 0x7e04f5 */
  if (!zf) goto L_7e04f5;
L_7e04df: /* 7e04df: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7e04e2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e04e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e04e5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7e04e8: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7e04ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e04ef: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7e04f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e04f5: /* 7e04f5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7e04f8: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e04fe: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 7e0504: call 0x6ccf7c */
  esp -= 4; W32(esp, 0x7e0509u); SPILL(); f_6ccf7c(); if (g_unwind) return; RELOAD();
/* 7e0509: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e050f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7e0511: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e0514: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e0518: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e051eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e051e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e051f: lea edx, [ebp - 0x2b4] */
  edx = (uint32_t)(ebp + 0xfffffd4cu);
/* 7e0525: push 0xadd200 */
  { uint32_t v = 0xadd200u; esp -= 4; W32(esp, v); }
/* 7e052a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e052b: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7e0531u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7e0531: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e0534: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0537: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e053du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e053d: lea ecx, [ebp - 0x2b4] */
  ecx = (uint32_t)(ebp + 0xfffffd4cu);
/* 7e0543: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0544: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7e0549: lea edx, [ebp - 0x4b4] */
  edx = (uint32_t)(ebp + 0xfffffb4cu);
/* 7e054f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e0550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0551: push 0xadd21c */
  { uint32_t v = 0xadd21cu; esp -= 4; W32(esp, v); }
/* 7e0556: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e055c: call 0x6c5fb0 */
  esp -= 4; W32(esp, 0x7e0561u); SPILL(); f_6c5fb0(); if (g_unwind) return; RELOAD();
/* 7e0561: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e0563: je 0x7e06c9 */
  if (zf) goto L_7e06c9;
L_7e0569: /* 7e0569: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e056c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0572u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0572: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0576: jne 0x7e0588 */
  if (!zf) goto L_7e0588;
L_7e0578: /* 7e0578: lea eax, [ebp - 0x4b4] */
  eax = (uint32_t)(ebp + 0xfffffb4cu);
/* 7e057e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e057f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e0582: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7e0588u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_7e0588: /* 7e0588: mov bl, 4 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
/* 7e058a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7e0590: /* 7e0590: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0592: push 0xadd228 */
  { uint32_t v = 0xadd228u; esp -= 4; W32(esp, v); }
/* 7e0597: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e059a: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7e05a0u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7e05a0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e05a3: je 0x7e05d5 */
  if (zf) goto L_7e05d5;
L_7e05a5: /* 7e05a5: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 7e05aa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e05ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e05ac: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e05af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e05b0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e05b3: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x7e05b9u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 7e05b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e05ba: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e05bd: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e05c0: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e05c6u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e05c6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e05c9: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e05cd: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e05d3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e05d3: jmp 0x7e0590 */
  goto L_7e0590;
L_7e05d5: /* 7e05d5: mov bl, 5 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x5u) & 0xffu);
/* 7e05d7: jmp 0x7e05e0 */
  goto L_7e05e0;
L_7e05e0: /* 7e05e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e05e2: push 0xadd22c */
  { uint32_t v = 0xadd22cu; esp -= 4; W32(esp, v); }
/* 7e05e7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e05ea: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7e05f0u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7e05f0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e05f3: je 0x7e0625 */
  if (zf) goto L_7e0625;
L_7e05f5: /* 7e05f5: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 7e05fa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e05fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e05fc: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e05ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e0600: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e0603: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x7e0609u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 7e0609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e060a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e060d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0610: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e0616u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e0616: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0619: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e061d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0623u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0623: jmp 0x7e05e0 */
  goto L_7e05e0;
L_7e0625: /* 7e0625: mov bl, 6 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x6u) & 0xffu);
/* 7e0627: jmp 0x7e0630 */
  goto L_7e0630;
L_7e0630: /* 7e0630: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0632: push 0xadd230 */
  { uint32_t v = 0xadd230u; esp -= 4; W32(esp, v); }
/* 7e0637: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e063a: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7e0640u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7e0640: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0643: je 0x7e0675 */
  if (zf) goto L_7e0675;
L_7e0645: /* 7e0645: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 7e064a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e064b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e064c: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7e064f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0650: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e0653: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x7e0659u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 7e0659: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e065a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e065d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0660: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e0666u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e0666: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0669: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e066d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0673u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0673: jmp 0x7e0630 */
  goto L_7e0630;
L_7e0675: /* 7e0675: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e0678: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0679: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e067c: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7e0682u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7e0682: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0684: push 0xadd234 */
  { uint32_t v = 0xadd234u; esp -= 4; W32(esp, v); }
/* 7e0689: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e068c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0690: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7e0696u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7e0696: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0699: jne 0x7e0705 */
  if (!zf) goto L_7e0705;
L_7e069b: /* 7e069b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e069e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e06a4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e06a4: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7e06aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e06ab: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e06ad: push 0xadd238 */
  { uint32_t v = 0xadd238u; esp -= 4; W32(esp, v); }
/* 7e06b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e06b3: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7e06b9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7e06b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e06bc: /* 7e06bc: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
L_7e06bf: /* 7e06bf: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e06c3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06c9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7e06c9: /* 7e06c9: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e06cf: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7e06d3: call 0x6cb77b */
  esp -= 4; W32(esp, 0x7e06d8u); SPILL(); f_6cb77b(); if (g_unwind) return; RELOAD();
/* 7e06d8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e06db: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e06df: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06e5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06e5: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e06e8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e06ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06f2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e06f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e06f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e06f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e06fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e06ff: mov esp, ebp */
  esp = ebp;
/* 7e0701: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e0702: ret 8 */
  esp += 12; SPILL(); return;
L_7e0705: /* 7e0705: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
L_7e0707: /* 7e0707: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e070a: je 0x7e074c */
  if (zf) goto L_7e074c;
L_7e070c: /* 7e070c: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 7e0711: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e0712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0713: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0716: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0717: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e071a: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x7e0720u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 7e0720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0721: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e0724: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0727: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e072du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e072d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0730: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0734: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e073au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e073a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e073c: push 0xadd27c */
  { uint32_t v = 0xadd27cu; esp -= 4; W32(esp, v); }
/* 7e0741: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e0744: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7e074au); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7e074a: jmp 0x7e0707 */
  goto L_7e0707;
L_7e074c: /* 7e074c: push 0xadd280 */
  { uint32_t v = 0xadd280u; esp -= 4; W32(esp, v); }
/* 7e0751: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0754: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e075au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e075a: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7e075d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e075e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0761: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0762: mov bl, 9 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x9u) & 0xffu);
/* 7e0764: mov ecx, eax */
  ecx = eax;
/* 7e0766: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0769: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e076fu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e076f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0770: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e0773: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7e0777: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e077du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e077d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0780: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0783: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0789u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0789: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e078c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0790: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0796u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0796: xor ebx, ebx */
  ebx = 0;
/* 7e0798: jmp 0x7e07a0 */
  goto L_7e07a0;
L_7e07a0: /* 7e07a0: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e07a5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e07a7: cmp ebx, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e07aa: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e07ad: jge 0x7e06bf */
  if ((sf == of)) goto L_7e06bf;
L_7e07b3: /* 7e07b3: mov eax, edx */
  eax = edx;
/* 7e07b5: mov esi, dword ptr [eax + 0x54] */
  esi = R32((uint32_t)(eax + 0x54u));
/* 7e07b8: lea edi, [ebx + ebx*2] */
  edi = (uint32_t)(ebx + ebx*2);
/* 7e07bb: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7e07be: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7e07c0: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e07c6u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e07c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e07c7: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e07ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e07cb: mov ecx, esi */
  ecx = esi;
/* 7e07cd: call dword ptr [0xcfa944] */
  esp -= 4; W32(esp, 0x7e07d3u); SPILL(); f_4e174e(); if (g_unwind) return; /* Core!?Right@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7e07d3: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7e07d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e07d7: mov ecx, eax */
  ecx = eax;
/* 7e07d9: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7e07dd: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x7e07e3u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 7e07e3: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e07e6: mov esi, eax */
  esi = eax;
/* 7e07e8: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e07ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e07f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e07f2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e07f4: je 0x7e0a7f */
  if (zf) goto L_7e0a7f;
L_7e07fa: /* 7e07fa: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e07ff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0801: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 7e0804: lea ebx, [edx + edi] */
  ebx = (uint32_t)(edx + edi);
/* 7e0807: mov ecx, ebx */
  ecx = ebx;
/* 7e0809: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e080fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e080f: mov ecx, ebx */
  ecx = ebx;
/* 7e0811: mov esi, eax */
  esi = eax;
/* 7e0813: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e0819u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e0819: lea esi, [esi + eax*2 - 2] */
  esi = (uint32_t)(esi + eax*2 + 0xfffffffeu);
/* 7e081d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e0820: /* 7e0820: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e0825: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0827: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 7e082a: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e082c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0832u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0832: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7e0834: jb 0x7e0850 */
  if (cf) goto L_7e0850;
L_7e0836: /* 7e0836: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7e0839: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e083d: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e083f: /* 7e083f: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0843: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e0845: /* 7e0845: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0849: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e084b: /* 7e084b: sub esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7e084e: jmp 0x7e0820 */
  goto L_7e0820;
L_7e0850: /* 7e0850: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7e0856: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e0858: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 7e085b: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7e085d: mov ecx, edi */
  ecx = edi;
/* 7e085f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0865u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0865: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7e0867: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 7e0869: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e086a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e086b: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e086e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e086f: mov ecx, edi */
  ecx = edi;
/* 7e0871: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x7e0877u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7e0877: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7e087a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e087b: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e087e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e087f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0882: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0886: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e088cu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e088c: mov edi, eax */
  edi = eax;
/* 7e088e: push 0xadd284 */
  { uint32_t v = 0xadd284u; esp -= 4; W32(esp, v); }
/* 7e0893: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0896: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7e089a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e08a0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e08a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e08a1: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e08a6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e08a8: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7e08ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08ac: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e08af: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7e08b3: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08b9u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08b9: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e08bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e08bd: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e08c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08c1: mov ecx, eax */
  ecx = eax;
/* 7e08c3: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7e08c7: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08cdu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08cd: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e08d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e08d5: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e08d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08d9: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e08dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e08dd: mov bl, 0x10 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 7e08df: mov ecx, eax */
  ecx = eax;
/* 7e08e1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e08e4: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08eau); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08ea: mov esi, eax */
  esi = eax;
/* 7e08ec: mov ecx, edi */
  ecx = edi;
/* 7e08ee: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7e08f2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e08f8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e08f8: mov ecx, esi */
  ecx = esi;
/* 7e08fa: mov edi, eax */
  edi = eax;
/* 7e08fc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0902u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0902: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7e0908: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e090a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e090c: push 0xadd288 */
  { uint32_t v = 0xadd288u; esp -= 4; W32(esp, v); }
/* 7e0911: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0912: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7e0918u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7e0918: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e091b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e091e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0921: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0927u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0927: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e092a: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7e092e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0934u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0934: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7e0937: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7e093b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0941u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0941: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0944: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7e0948: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e094eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e094e: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e0951: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0955: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e095bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e095b: push 0xadd2bc */
  { uint32_t v = 0xadd2bcu; esp -= 4; W32(esp, v); }
/* 7e0960: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0963: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e0969u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e0969: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7e096f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0970: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e0973: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0974: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7e0976: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e0979: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7e097d: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e0983u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e0983: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0986: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0987: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7e098a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e098b: mov ecx, eax */
  ecx = eax;
/* 7e098d: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7e0991: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e0997u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e0997: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e099d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e099f: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e09a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e09a3: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e09a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e09a7: mov ecx, eax */
  ecx = eax;
/* 7e09a9: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7e09ad: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e09b3u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e09b3: mov esi, eax */
  esi = eax;
/* 7e09b5: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e09b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e09b9: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 7e09bc: mov bl, 0x15 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x15u) & 0xffu);
/* 7e09be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e09bf: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e09c2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e09c5: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e09cbu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e09cb: mov edi, eax */
  edi = eax;
/* 7e09cd: mov ecx, esi */
  ecx = esi;
/* 7e09cf: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7e09d3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e09d9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e09d9: mov ecx, edi */
  ecx = edi;
/* 7e09db: mov esi, eax */
  esi = eax;
/* 7e09dd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e09e3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e09e3: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7e09e9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7e09eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e09ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e09ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e09f1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e09f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e09f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e09f5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7e09f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e09f8: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e09fb: mov esi, eax */
  esi = eax;
/* 7e09fd: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0a00: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a06u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a06: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0a09: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7e0a0d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a13u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a13: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7e0a16: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7e0a1a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a20u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a20: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e0a23: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7e0a27: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a2du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a2d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0a30: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0a34: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a3au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a3a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e0a3c: je 0x7e0a6d */
  if (zf) goto L_7e0a6d;
L_7e0a3e: /* 7e0a3e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0a41: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0a47u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0a47: lea ecx, [ebp - 0x2b4] */
  ecx = (uint32_t)(ebp + 0xfffffd4cu);
/* 7e0a4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0a4e: push 0xb82200 */
  { uint32_t v = 0xb82200u; esp -= 4; W32(esp, v); }
/* 7e0a53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0a54: push 0xadd2c0 */
  { uint32_t v = 0xadd2c0u; esp -= 4; W32(esp, v); }
/* 7e0a59: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e0a5f: call 0x6c6feb */
  esp -= 4; W32(esp, 0x7e0a64u); SPILL(); f_6c6feb(); if (g_unwind) return; RELOAD();
/* 7e0a64: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e0a67: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
L_7e0a6d: /* 7e0a6d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0a70: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0a74: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a7au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a7a: jmp 0x7e06bc */
  goto L_7e06bc;
L_7e0a7f: /* 7e0a7f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e0a80: jmp 0x7e07a0 */
  goto L_7e07a0;
}

void f_7e05d9(void) {
  LOAD_REGS();
L_7e05d9: /* 7e05d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e05e0: /* 7e05e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e05e2: push 0xadd22c */
  { uint32_t v = 0xadd22cu; esp -= 4; W32(esp, v); }
/* 7e05e7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e05ea: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7e05f0u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7e05f0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e05f3: je 0x7e0625 */
  if (zf) goto L_7e0625;
L_7e05f5: /* 7e05f5: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 7e05fa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e05fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e05fc: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e05ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e0600: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e0603: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x7e0609u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 7e0609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e060a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e060d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0610: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e0616u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e0616: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0619: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e061d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0623u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0623: jmp 0x7e05e0 */
  goto L_7e05e0;
L_7e0625: /* 7e0625: mov bl, 6 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x6u) & 0xffu);
/* 7e0627: jmp 0x7e0630 */
  goto L_7e0630;
L_7e0630: /* 7e0630: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0632: push 0xadd230 */
  { uint32_t v = 0xadd230u; esp -= 4; W32(esp, v); }
/* 7e0637: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e063a: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7e0640u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7e0640: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0643: je 0x7e0675 */
  if (zf) goto L_7e0675;
L_7e0645: /* 7e0645: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 7e064a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e064b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e064c: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7e064f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0650: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e0653: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x7e0659u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 7e0659: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e065a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e065d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0660: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e0666u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e0666: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0669: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e066d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0673u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0673: jmp 0x7e0630 */
  goto L_7e0630;
L_7e0675: /* 7e0675: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e0678: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0679: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e067c: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7e0682u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7e0682: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0684: push 0xadd234 */
  { uint32_t v = 0xadd234u; esp -= 4; W32(esp, v); }
/* 7e0689: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e068c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0690: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7e0696u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7e0696: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0699: jne 0x7e0705 */
  if (!zf) goto L_7e0705;
L_7e069b: /* 7e069b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e069e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e06a4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e06a4: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7e06aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e06ab: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e06ad: push 0xadd238 */
  { uint32_t v = 0xadd238u; esp -= 4; W32(esp, v); }
/* 7e06b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e06b3: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7e06b9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7e06b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e06bc: /* 7e06bc: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
L_7e06bf: /* 7e06bf: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e06c3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06c9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06c9: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e06cf: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7e06d3: call 0x6cb77b */
  esp -= 4; W32(esp, 0x7e06d8u); SPILL(); f_6cb77b(); if (g_unwind) return; RELOAD();
/* 7e06d8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e06db: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e06df: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06e5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06e5: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e06e8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e06ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06f2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e06f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e06f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e06f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e06fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e06ff: mov esp, ebp */
  esp = ebp;
/* 7e0701: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e0702: ret 8 */
  esp += 12; SPILL(); return;
L_7e0705: /* 7e0705: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
L_7e0707: /* 7e0707: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e070a: je 0x7e074c */
  if (zf) goto L_7e074c;
L_7e070c: /* 7e070c: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 7e0711: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e0712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0713: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0716: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0717: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e071a: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x7e0720u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 7e0720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0721: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e0724: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0727: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e072du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e072d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0730: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0734: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e073au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e073a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e073c: push 0xadd27c */
  { uint32_t v = 0xadd27cu; esp -= 4; W32(esp, v); }
/* 7e0741: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e0744: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7e074au); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7e074a: jmp 0x7e0707 */
  goto L_7e0707;
L_7e074c: /* 7e074c: push 0xadd280 */
  { uint32_t v = 0xadd280u; esp -= 4; W32(esp, v); }
/* 7e0751: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0754: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e075au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e075a: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7e075d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e075e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0761: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0762: mov bl, 9 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x9u) & 0xffu);
/* 7e0764: mov ecx, eax */
  ecx = eax;
/* 7e0766: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0769: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e076fu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e076f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0770: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e0773: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7e0777: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e077du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e077d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0780: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0783: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0789u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0789: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e078c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0790: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0796u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0796: xor ebx, ebx */
  ebx = 0;
/* 7e0798: jmp 0x7e07a0 */
  goto L_7e07a0;
L_7e07a0: /* 7e07a0: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e07a5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e07a7: cmp ebx, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e07aa: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e07ad: jge 0x7e06bf */
  if ((sf == of)) goto L_7e06bf;
L_7e07b3: /* 7e07b3: mov eax, edx */
  eax = edx;
/* 7e07b5: mov esi, dword ptr [eax + 0x54] */
  esi = R32((uint32_t)(eax + 0x54u));
/* 7e07b8: lea edi, [ebx + ebx*2] */
  edi = (uint32_t)(ebx + ebx*2);
/* 7e07bb: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7e07be: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7e07c0: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e07c6u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e07c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e07c7: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e07ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e07cb: mov ecx, esi */
  ecx = esi;
/* 7e07cd: call dword ptr [0xcfa944] */
  esp -= 4; W32(esp, 0x7e07d3u); SPILL(); f_4e174e(); if (g_unwind) return; /* Core!?Right@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7e07d3: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7e07d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e07d7: mov ecx, eax */
  ecx = eax;
/* 7e07d9: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7e07dd: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x7e07e3u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 7e07e3: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e07e6: mov esi, eax */
  esi = eax;
/* 7e07e8: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e07ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e07f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e07f2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e07f4: je 0x7e0a7f */
  if (zf) goto L_7e0a7f;
L_7e07fa: /* 7e07fa: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e07ff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0801: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 7e0804: lea ebx, [edx + edi] */
  ebx = (uint32_t)(edx + edi);
/* 7e0807: mov ecx, ebx */
  ecx = ebx;
/* 7e0809: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e080fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e080f: mov ecx, ebx */
  ecx = ebx;
/* 7e0811: mov esi, eax */
  esi = eax;
/* 7e0813: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e0819u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e0819: lea esi, [esi + eax*2 - 2] */
  esi = (uint32_t)(esi + eax*2 + 0xfffffffeu);
/* 7e081d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e0820: /* 7e0820: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e0825: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0827: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 7e082a: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e082c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0832u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0832: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7e0834: jb 0x7e0850 */
  if (cf) goto L_7e0850;
L_7e0836: /* 7e0836: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7e0839: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e083d: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e083f: /* 7e083f: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0843: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e0845: /* 7e0845: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0849: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e084b: /* 7e084b: sub esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7e084e: jmp 0x7e0820 */
  goto L_7e0820;
L_7e0850: /* 7e0850: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7e0856: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e0858: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 7e085b: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7e085d: mov ecx, edi */
  ecx = edi;
/* 7e085f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0865u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0865: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7e0867: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 7e0869: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e086a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e086b: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e086e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e086f: mov ecx, edi */
  ecx = edi;
/* 7e0871: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x7e0877u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7e0877: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7e087a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e087b: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e087e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e087f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0882: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0886: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e088cu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e088c: mov edi, eax */
  edi = eax;
/* 7e088e: push 0xadd284 */
  { uint32_t v = 0xadd284u; esp -= 4; W32(esp, v); }
/* 7e0893: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0896: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7e089a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e08a0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e08a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e08a1: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e08a6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e08a8: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7e08ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08ac: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e08af: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7e08b3: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08b9u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08b9: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e08bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e08bd: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e08c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08c1: mov ecx, eax */
  ecx = eax;
/* 7e08c3: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7e08c7: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08cdu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08cd: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e08d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e08d5: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e08d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08d9: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e08dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e08dd: mov bl, 0x10 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 7e08df: mov ecx, eax */
  ecx = eax;
/* 7e08e1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e08e4: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08eau); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08ea: mov esi, eax */
  esi = eax;
/* 7e08ec: mov ecx, edi */
  ecx = edi;
/* 7e08ee: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7e08f2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e08f8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e08f8: mov ecx, esi */
  ecx = esi;
/* 7e08fa: mov edi, eax */
  edi = eax;
/* 7e08fc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0902u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0902: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7e0908: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e090a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e090c: push 0xadd288 */
  { uint32_t v = 0xadd288u; esp -= 4; W32(esp, v); }
/* 7e0911: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0912: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7e0918u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7e0918: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e091b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e091e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0921: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0927u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0927: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e092a: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7e092e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0934u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0934: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7e0937: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7e093b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0941u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0941: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0944: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7e0948: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e094eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e094e: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e0951: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0955: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e095bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e095b: push 0xadd2bc */
  { uint32_t v = 0xadd2bcu; esp -= 4; W32(esp, v); }
/* 7e0960: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0963: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e0969u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e0969: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7e096f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0970: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e0973: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0974: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7e0976: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e0979: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7e097d: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e0983u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e0983: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0986: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0987: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7e098a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e098b: mov ecx, eax */
  ecx = eax;
/* 7e098d: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7e0991: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e0997u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e0997: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e099d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e099f: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e09a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e09a3: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e09a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e09a7: mov ecx, eax */
  ecx = eax;
/* 7e09a9: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7e09ad: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e09b3u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e09b3: mov esi, eax */
  esi = eax;
/* 7e09b5: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e09b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e09b9: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 7e09bc: mov bl, 0x15 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x15u) & 0xffu);
/* 7e09be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e09bf: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e09c2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e09c5: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e09cbu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e09cb: mov edi, eax */
  edi = eax;
/* 7e09cd: mov ecx, esi */
  ecx = esi;
/* 7e09cf: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7e09d3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e09d9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e09d9: mov ecx, edi */
  ecx = edi;
/* 7e09db: mov esi, eax */
  esi = eax;
/* 7e09dd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e09e3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e09e3: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7e09e9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7e09eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e09ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e09ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e09f1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e09f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e09f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e09f5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7e09f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e09f8: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e09fb: mov esi, eax */
  esi = eax;
/* 7e09fd: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0a00: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a06u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a06: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0a09: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7e0a0d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a13u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a13: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7e0a16: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7e0a1a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a20u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a20: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e0a23: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7e0a27: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a2du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a2d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0a30: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0a34: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a3au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a3a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e0a3c: je 0x7e0a6d */
  if (zf) goto L_7e0a6d;
L_7e0a3e: /* 7e0a3e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0a41: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0a47u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0a47: lea ecx, [ebp - 0x2b4] */
  ecx = (uint32_t)(ebp + 0xfffffd4cu);
/* 7e0a4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0a4e: push 0xb82200 */
  { uint32_t v = 0xb82200u; esp -= 4; W32(esp, v); }
/* 7e0a53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0a54: push 0xadd2c0 */
  { uint32_t v = 0xadd2c0u; esp -= 4; W32(esp, v); }
/* 7e0a59: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e0a5f: call 0x6c6feb */
  esp -= 4; W32(esp, 0x7e0a64u); SPILL(); f_6c6feb(); if (g_unwind) return; RELOAD();
/* 7e0a64: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e0a67: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
L_7e0a6d: /* 7e0a6d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0a70: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0a74: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a7au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a7a: jmp 0x7e06bc */
  goto L_7e06bc;
L_7e0a7f: /* 7e0a7f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e0a80: jmp 0x7e07a0 */
  goto L_7e07a0;
}

void f_7e0629(void) {
  LOAD_REGS();
L_7e0629: /* 7e0629: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e0630: /* 7e0630: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0632: push 0xadd230 */
  { uint32_t v = 0xadd230u; esp -= 4; W32(esp, v); }
/* 7e0637: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e063a: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7e0640u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7e0640: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0643: je 0x7e0675 */
  if (zf) goto L_7e0675;
L_7e0645: /* 7e0645: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 7e064a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e064b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e064c: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7e064f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0650: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e0653: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x7e0659u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 7e0659: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e065a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e065d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0660: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e0666u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e0666: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0669: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e066d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0673u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0673: jmp 0x7e0630 */
  goto L_7e0630;
L_7e0675: /* 7e0675: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e0678: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0679: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e067c: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7e0682u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7e0682: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e0684: push 0xadd234 */
  { uint32_t v = 0xadd234u; esp -= 4; W32(esp, v); }
/* 7e0689: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e068c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0690: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7e0696u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7e0696: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0699: jne 0x7e0705 */
  if (!zf) goto L_7e0705;
L_7e069b: /* 7e069b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e069e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e06a4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e06a4: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7e06aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e06ab: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e06ad: push 0xadd238 */
  { uint32_t v = 0xadd238u; esp -= 4; W32(esp, v); }
/* 7e06b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e06b3: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7e06b9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7e06b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e06bc: /* 7e06bc: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
L_7e06bf: /* 7e06bf: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e06c3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06c9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06c9: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e06cf: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7e06d3: call 0x6cb77b */
  esp -= 4; W32(esp, 0x7e06d8u); SPILL(); f_6cb77b(); if (g_unwind) return; RELOAD();
/* 7e06d8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e06db: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e06df: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06e5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06e5: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e06e8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e06ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06f2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e06f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e06f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e06f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e06fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e06ff: mov esp, ebp */
  esp = ebp;
/* 7e0701: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e0702: ret 8 */
  esp += 12; SPILL(); return;
L_7e0705: /* 7e0705: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
L_7e0707: /* 7e0707: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e070a: je 0x7e074c */
  if (zf) goto L_7e074c;
L_7e070c: /* 7e070c: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 7e0711: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e0712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0713: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0716: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0717: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e071a: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x7e0720u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 7e0720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0721: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e0724: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0727: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e072du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e072d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0730: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0734: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e073au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e073a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e073c: push 0xadd27c */
  { uint32_t v = 0xadd27cu; esp -= 4; W32(esp, v); }
/* 7e0741: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e0744: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7e074au); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7e074a: jmp 0x7e0707 */
  goto L_7e0707;
L_7e074c: /* 7e074c: push 0xadd280 */
  { uint32_t v = 0xadd280u; esp -= 4; W32(esp, v); }
/* 7e0751: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0754: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e075au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e075a: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7e075d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e075e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0761: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0762: mov bl, 9 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x9u) & 0xffu);
/* 7e0764: mov ecx, eax */
  ecx = eax;
/* 7e0766: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0769: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e076fu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e076f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0770: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e0773: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7e0777: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e077du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e077d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0780: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0783: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0789u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0789: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e078c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0790: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0796u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0796: xor ebx, ebx */
  ebx = 0;
/* 7e0798: jmp 0x7e07a0 */
  goto L_7e07a0;
L_7e07a0: /* 7e07a0: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e07a5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e07a7: cmp ebx, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e07aa: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e07ad: jge 0x7e06bf */
  if ((sf == of)) goto L_7e06bf;
L_7e07b3: /* 7e07b3: mov eax, edx */
  eax = edx;
/* 7e07b5: mov esi, dword ptr [eax + 0x54] */
  esi = R32((uint32_t)(eax + 0x54u));
/* 7e07b8: lea edi, [ebx + ebx*2] */
  edi = (uint32_t)(ebx + ebx*2);
/* 7e07bb: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7e07be: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7e07c0: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e07c6u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e07c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e07c7: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e07ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e07cb: mov ecx, esi */
  ecx = esi;
/* 7e07cd: call dword ptr [0xcfa944] */
  esp -= 4; W32(esp, 0x7e07d3u); SPILL(); f_4e174e(); if (g_unwind) return; /* Core!?Right@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7e07d3: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7e07d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e07d7: mov ecx, eax */
  ecx = eax;
/* 7e07d9: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7e07dd: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x7e07e3u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 7e07e3: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e07e6: mov esi, eax */
  esi = eax;
/* 7e07e8: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e07ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e07f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e07f2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e07f4: je 0x7e0a7f */
  if (zf) goto L_7e0a7f;
L_7e07fa: /* 7e07fa: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e07ff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0801: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 7e0804: lea ebx, [edx + edi] */
  ebx = (uint32_t)(edx + edi);
/* 7e0807: mov ecx, ebx */
  ecx = ebx;
/* 7e0809: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e080fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e080f: mov ecx, ebx */
  ecx = ebx;
/* 7e0811: mov esi, eax */
  esi = eax;
/* 7e0813: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e0819u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e0819: lea esi, [esi + eax*2 - 2] */
  esi = (uint32_t)(esi + eax*2 + 0xfffffffeu);
/* 7e081d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e0820: /* 7e0820: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e0825: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0827: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 7e082a: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e082c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0832u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0832: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7e0834: jb 0x7e0850 */
  if (cf) goto L_7e0850;
L_7e0836: /* 7e0836: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7e0839: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e083d: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e083f: /* 7e083f: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0843: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e0845: /* 7e0845: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0849: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e084b: /* 7e084b: sub esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7e084e: jmp 0x7e0820 */
  goto L_7e0820;
L_7e0850: /* 7e0850: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7e0856: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e0858: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 7e085b: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7e085d: mov ecx, edi */
  ecx = edi;
/* 7e085f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0865u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0865: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7e0867: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 7e0869: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e086a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e086b: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e086e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e086f: mov ecx, edi */
  ecx = edi;
/* 7e0871: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x7e0877u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7e0877: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7e087a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e087b: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e087e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e087f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0882: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0886: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e088cu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e088c: mov edi, eax */
  edi = eax;
/* 7e088e: push 0xadd284 */
  { uint32_t v = 0xadd284u; esp -= 4; W32(esp, v); }
/* 7e0893: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0896: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7e089a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e08a0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e08a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e08a1: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e08a6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e08a8: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7e08ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08ac: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e08af: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7e08b3: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08b9u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08b9: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e08bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e08bd: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e08c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08c1: mov ecx, eax */
  ecx = eax;
/* 7e08c3: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7e08c7: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08cdu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08cd: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e08d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e08d5: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e08d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08d9: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e08dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e08dd: mov bl, 0x10 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 7e08df: mov ecx, eax */
  ecx = eax;
/* 7e08e1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e08e4: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08eau); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08ea: mov esi, eax */
  esi = eax;
/* 7e08ec: mov ecx, edi */
  ecx = edi;
/* 7e08ee: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7e08f2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e08f8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e08f8: mov ecx, esi */
  ecx = esi;
/* 7e08fa: mov edi, eax */
  edi = eax;
/* 7e08fc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0902u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0902: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7e0908: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e090a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e090c: push 0xadd288 */
  { uint32_t v = 0xadd288u; esp -= 4; W32(esp, v); }
/* 7e0911: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0912: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7e0918u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7e0918: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e091b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e091e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0921: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0927u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0927: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e092a: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7e092e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0934u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0934: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7e0937: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7e093b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0941u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0941: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0944: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7e0948: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e094eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e094e: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e0951: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0955: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e095bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e095b: push 0xadd2bc */
  { uint32_t v = 0xadd2bcu; esp -= 4; W32(esp, v); }
/* 7e0960: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0963: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e0969u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e0969: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7e096f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0970: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e0973: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0974: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7e0976: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e0979: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7e097d: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e0983u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e0983: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0986: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0987: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7e098a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e098b: mov ecx, eax */
  ecx = eax;
/* 7e098d: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7e0991: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e0997u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e0997: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e099d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e099f: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e09a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e09a3: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e09a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e09a7: mov ecx, eax */
  ecx = eax;
/* 7e09a9: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7e09ad: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e09b3u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e09b3: mov esi, eax */
  esi = eax;
/* 7e09b5: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e09b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e09b9: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 7e09bc: mov bl, 0x15 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x15u) & 0xffu);
/* 7e09be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e09bf: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e09c2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e09c5: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e09cbu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e09cb: mov edi, eax */
  edi = eax;
/* 7e09cd: mov ecx, esi */
  ecx = esi;
/* 7e09cf: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7e09d3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e09d9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e09d9: mov ecx, edi */
  ecx = edi;
/* 7e09db: mov esi, eax */
  esi = eax;
/* 7e09dd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e09e3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e09e3: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7e09e9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7e09eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e09ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e09ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e09f1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e09f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e09f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e09f5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7e09f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e09f8: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e09fb: mov esi, eax */
  esi = eax;
/* 7e09fd: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0a00: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a06u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a06: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0a09: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7e0a0d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a13u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a13: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7e0a16: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7e0a1a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a20u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a20: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e0a23: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7e0a27: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a2du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a2d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0a30: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0a34: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a3au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a3a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e0a3c: je 0x7e0a6d */
  if (zf) goto L_7e0a6d;
L_7e0a3e: /* 7e0a3e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0a41: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0a47u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0a47: lea ecx, [ebp - 0x2b4] */
  ecx = (uint32_t)(ebp + 0xfffffd4cu);
/* 7e0a4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0a4e: push 0xb82200 */
  { uint32_t v = 0xb82200u; esp -= 4; W32(esp, v); }
/* 7e0a53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0a54: push 0xadd2c0 */
  { uint32_t v = 0xadd2c0u; esp -= 4; W32(esp, v); }
/* 7e0a59: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e0a5f: call 0x6c6feb */
  esp -= 4; W32(esp, 0x7e0a64u); SPILL(); f_6c6feb(); if (g_unwind) return; RELOAD();
/* 7e0a64: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e0a67: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
L_7e0a6d: /* 7e0a6d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0a70: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0a74: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a7au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a7a: jmp 0x7e06bc */
  goto L_7e06bc;
L_7e0a7f: /* 7e0a7f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e0a80: jmp 0x7e07a0 */
  goto L_7e07a0;
}

void f_7e0705(void) {
  LOAD_REGS();
  goto L_7e0705;
L_7e06bc: /* 7e06bc: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
L_7e06bf: /* 7e06bf: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e06c3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06c9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06c9: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e06cf: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7e06d3: call 0x6cb77b */
  esp -= 4; W32(esp, 0x7e06d8u); SPILL(); f_6cb77b(); if (g_unwind) return; RELOAD();
/* 7e06d8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e06db: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e06df: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06e5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06e5: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e06e8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e06ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06f2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e06f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e06f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e06f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e06fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e06ff: mov esp, ebp */
  esp = ebp;
/* 7e0701: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e0702: ret 8 */
  esp += 12; SPILL(); return;
L_7e0705: /* 7e0705: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
L_7e0707: /* 7e0707: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e070a: je 0x7e074c */
  if (zf) goto L_7e074c;
L_7e070c: /* 7e070c: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 7e0711: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e0712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0713: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0716: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0717: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e071a: call dword ptr [0xcfa848] */
  esp -= 4; W32(esp, 0x7e0720u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* 7e0720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0721: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e0724: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0727: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e072du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e072d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0730: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0734: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e073au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e073a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e073c: push 0xadd27c */
  { uint32_t v = 0xadd27cu; esp -= 4; W32(esp, v); }
/* 7e0741: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e0744: call dword ptr [0xcfa84c] */
  esp -= 4; W32(esp, 0x7e074au); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* 7e074a: jmp 0x7e0707 */
  goto L_7e0707;
L_7e074c: /* 7e074c: push 0xadd280 */
  { uint32_t v = 0xadd280u; esp -= 4; W32(esp, v); }
/* 7e0751: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0754: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e075au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e075a: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7e075d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e075e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0761: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0762: mov bl, 9 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x9u) & 0xffu);
/* 7e0764: mov ecx, eax */
  ecx = eax;
/* 7e0766: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0769: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e076fu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e076f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0770: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e0773: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7e0777: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e077du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e077d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0780: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0783: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0789u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0789: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e078c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0790: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0796u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0796: xor ebx, ebx */
  ebx = 0;
/* 7e0798: jmp 0x7e07a0 */
  goto L_7e07a0;
L_7e07a0: /* 7e07a0: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e07a5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e07a7: cmp ebx, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e07aa: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e07ad: jge 0x7e06bf */
  if ((sf == of)) goto L_7e06bf;
L_7e07b3: /* 7e07b3: mov eax, edx */
  eax = edx;
/* 7e07b5: mov esi, dword ptr [eax + 0x54] */
  esi = R32((uint32_t)(eax + 0x54u));
/* 7e07b8: lea edi, [ebx + ebx*2] */
  edi = (uint32_t)(ebx + ebx*2);
/* 7e07bb: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7e07be: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7e07c0: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e07c6u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e07c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e07c7: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e07ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e07cb: mov ecx, esi */
  ecx = esi;
/* 7e07cd: call dword ptr [0xcfa944] */
  esp -= 4; W32(esp, 0x7e07d3u); SPILL(); f_4e174e(); if (g_unwind) return; /* Core!?Right@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7e07d3: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7e07d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e07d7: mov ecx, eax */
  ecx = eax;
/* 7e07d9: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7e07dd: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x7e07e3u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 7e07e3: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e07e6: mov esi, eax */
  esi = eax;
/* 7e07e8: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e07ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e07f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e07f2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e07f4: je 0x7e0a7f */
  if (zf) goto L_7e0a7f;
L_7e07fa: /* 7e07fa: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e07ff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0801: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 7e0804: lea ebx, [edx + edi] */
  ebx = (uint32_t)(edx + edi);
/* 7e0807: mov ecx, ebx */
  ecx = ebx;
/* 7e0809: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e080fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e080f: mov ecx, ebx */
  ecx = ebx;
/* 7e0811: mov esi, eax */
  esi = eax;
/* 7e0813: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e0819u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e0819: lea esi, [esi + eax*2 - 2] */
  esi = (uint32_t)(esi + eax*2 + 0xfffffffeu);
/* 7e081d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e0820: /* 7e0820: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e0825: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0827: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 7e082a: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e082c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0832u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0832: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7e0834: jb 0x7e0850 */
  if (cf) goto L_7e0850;
L_7e0836: /* 7e0836: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7e0839: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e083d: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e083f: /* 7e083f: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0843: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e0845: /* 7e0845: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0849: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e084b: /* 7e084b: sub esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7e084e: jmp 0x7e0820 */
  goto L_7e0820;
L_7e0850: /* 7e0850: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7e0856: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e0858: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 7e085b: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7e085d: mov ecx, edi */
  ecx = edi;
/* 7e085f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0865u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0865: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7e0867: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 7e0869: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e086a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e086b: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e086e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e086f: mov ecx, edi */
  ecx = edi;
/* 7e0871: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x7e0877u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7e0877: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7e087a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e087b: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e087e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e087f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0882: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0886: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e088cu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e088c: mov edi, eax */
  edi = eax;
/* 7e088e: push 0xadd284 */
  { uint32_t v = 0xadd284u; esp -= 4; W32(esp, v); }
/* 7e0893: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0896: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7e089a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e08a0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e08a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e08a1: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e08a6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e08a8: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7e08ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08ac: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e08af: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7e08b3: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08b9u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08b9: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e08bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e08bd: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e08c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08c1: mov ecx, eax */
  ecx = eax;
/* 7e08c3: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7e08c7: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08cdu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08cd: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e08d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e08d5: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e08d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08d9: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e08dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e08dd: mov bl, 0x10 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 7e08df: mov ecx, eax */
  ecx = eax;
/* 7e08e1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e08e4: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08eau); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08ea: mov esi, eax */
  esi = eax;
/* 7e08ec: mov ecx, edi */
  ecx = edi;
/* 7e08ee: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7e08f2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e08f8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e08f8: mov ecx, esi */
  ecx = esi;
/* 7e08fa: mov edi, eax */
  edi = eax;
/* 7e08fc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0902u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0902: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7e0908: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e090a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e090c: push 0xadd288 */
  { uint32_t v = 0xadd288u; esp -= 4; W32(esp, v); }
/* 7e0911: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0912: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7e0918u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7e0918: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e091b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e091e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0921: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0927u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0927: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e092a: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7e092e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0934u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0934: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7e0937: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7e093b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0941u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0941: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0944: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7e0948: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e094eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e094e: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e0951: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0955: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e095bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e095b: push 0xadd2bc */
  { uint32_t v = 0xadd2bcu; esp -= 4; W32(esp, v); }
/* 7e0960: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0963: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e0969u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e0969: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7e096f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0970: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e0973: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0974: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7e0976: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e0979: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7e097d: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e0983u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e0983: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0986: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0987: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7e098a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e098b: mov ecx, eax */
  ecx = eax;
/* 7e098d: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7e0991: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e0997u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e0997: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e099d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e099f: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e09a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e09a3: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e09a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e09a7: mov ecx, eax */
  ecx = eax;
/* 7e09a9: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7e09ad: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e09b3u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e09b3: mov esi, eax */
  esi = eax;
/* 7e09b5: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e09b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e09b9: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 7e09bc: mov bl, 0x15 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x15u) & 0xffu);
/* 7e09be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e09bf: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e09c2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e09c5: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e09cbu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e09cb: mov edi, eax */
  edi = eax;
/* 7e09cd: mov ecx, esi */
  ecx = esi;
/* 7e09cf: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7e09d3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e09d9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e09d9: mov ecx, edi */
  ecx = edi;
/* 7e09db: mov esi, eax */
  esi = eax;
/* 7e09dd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e09e3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e09e3: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7e09e9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7e09eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e09ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e09ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e09f1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e09f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e09f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e09f5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7e09f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e09f8: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e09fb: mov esi, eax */
  esi = eax;
/* 7e09fd: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0a00: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a06u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a06: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0a09: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7e0a0d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a13u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a13: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7e0a16: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7e0a1a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a20u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a20: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e0a23: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7e0a27: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a2du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a2d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0a30: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0a34: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a3au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a3a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e0a3c: je 0x7e0a6d */
  if (zf) goto L_7e0a6d;
L_7e0a3e: /* 7e0a3e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0a41: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0a47u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0a47: lea ecx, [ebp - 0x2b4] */
  ecx = (uint32_t)(ebp + 0xfffffd4cu);
/* 7e0a4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0a4e: push 0xb82200 */
  { uint32_t v = 0xb82200u; esp -= 4; W32(esp, v); }
/* 7e0a53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0a54: push 0xadd2c0 */
  { uint32_t v = 0xadd2c0u; esp -= 4; W32(esp, v); }
/* 7e0a59: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e0a5f: call 0x6c6feb */
  esp -= 4; W32(esp, 0x7e0a64u); SPILL(); f_6c6feb(); if (g_unwind) return; RELOAD();
/* 7e0a64: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e0a67: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
L_7e0a6d: /* 7e0a6d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0a70: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0a74: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a7au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a7a: jmp 0x7e06bc */
  goto L_7e06bc;
L_7e0a7f: /* 7e0a7f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e0a80: jmp 0x7e07a0 */
  goto L_7e07a0;
}

void f_7e074c(void) {
  LOAD_REGS();
  goto L_7e074c;
L_7e06bc: /* 7e06bc: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
L_7e06bf: /* 7e06bf: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e06c3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06c9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06c9: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e06cf: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7e06d3: call 0x6cb77b */
  esp -= 4; W32(esp, 0x7e06d8u); SPILL(); f_6cb77b(); if (g_unwind) return; RELOAD();
/* 7e06d8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e06db: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e06df: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06e5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06e5: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e06e8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e06ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e06f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e06f2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e06f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e06f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e06f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e06fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e06ff: mov esp, ebp */
  esp = ebp;
/* 7e0701: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e0702: ret 8 */
  esp += 12; SPILL(); return;
L_7e074c: /* 7e074c: push 0xadd280 */
  { uint32_t v = 0xadd280u; esp -= 4; W32(esp, v); }
/* 7e0751: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0754: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e075au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e075a: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7e075d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e075e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0761: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0762: mov bl, 9 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x9u) & 0xffu);
/* 7e0764: mov ecx, eax */
  ecx = eax;
/* 7e0766: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0769: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e076fu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e076f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0770: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e0773: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7e0777: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7e077du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7e077d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0780: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0783: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0789u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0789: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e078c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0790: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0796u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0796: xor ebx, ebx */
  ebx = 0;
/* 7e0798: jmp 0x7e07a0 */
  goto L_7e07a0;
L_7e07a0: /* 7e07a0: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e07a5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e07a7: cmp ebx, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e07aa: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e07ad: jge 0x7e06bf */
  if ((sf == of)) goto L_7e06bf;
L_7e07b3: /* 7e07b3: mov eax, edx */
  eax = edx;
/* 7e07b5: mov esi, dword ptr [eax + 0x54] */
  esi = R32((uint32_t)(eax + 0x54u));
/* 7e07b8: lea edi, [ebx + ebx*2] */
  edi = (uint32_t)(ebx + ebx*2);
/* 7e07bb: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7e07be: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7e07c0: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e07c6u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e07c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e07c7: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e07ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e07cb: mov ecx, esi */
  ecx = esi;
/* 7e07cd: call dword ptr [0xcfa944] */
  esp -= 4; W32(esp, 0x7e07d3u); SPILL(); f_4e174e(); if (g_unwind) return; /* Core!?Right@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7e07d3: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7e07d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e07d7: mov ecx, eax */
  ecx = eax;
/* 7e07d9: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7e07dd: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x7e07e3u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 7e07e3: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e07e6: mov esi, eax */
  esi = eax;
/* 7e07e8: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e07ec: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e07f2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e07f2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e07f4: je 0x7e0a7f */
  if (zf) goto L_7e0a7f;
L_7e07fa: /* 7e07fa: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e07ff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0801: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 7e0804: lea ebx, [edx + edi] */
  ebx = (uint32_t)(edx + edi);
/* 7e0807: mov ecx, ebx */
  ecx = ebx;
/* 7e0809: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e080fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e080f: mov ecx, ebx */
  ecx = ebx;
/* 7e0811: mov esi, eax */
  esi = eax;
/* 7e0813: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7e0819u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7e0819: lea esi, [esi + eax*2 - 2] */
  esi = (uint32_t)(esi + eax*2 + 0xfffffffeu);
/* 7e081d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e0820: /* 7e0820: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e0825: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e0827: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 7e082a: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e082c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0832u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0832: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7e0834: jb 0x7e0850 */
  if (cf) goto L_7e0850;
L_7e0836: /* 7e0836: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7e0839: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e083d: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e083f: /* 7e083f: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0843: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e0845: /* 7e0845: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7e0849: je 0x7e0850 */
  if (zf) goto L_7e0850;
L_7e084b: /* 7e084b: sub esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7e084e: jmp 0x7e0820 */
  goto L_7e0820;
L_7e0850: /* 7e0850: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7e0856: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e0858: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 7e085b: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7e085d: mov ecx, edi */
  ecx = edi;
/* 7e085f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0865u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0865: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7e0867: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 7e0869: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e086a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e086b: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e086e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e086f: mov ecx, edi */
  ecx = edi;
/* 7e0871: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x7e0877u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7e0877: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7e087a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e087b: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e087e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e087f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0882: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0886: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e088cu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e088c: mov edi, eax */
  edi = eax;
/* 7e088e: push 0xadd284 */
  { uint32_t v = 0xadd284u; esp -= 4; W32(esp, v); }
/* 7e0893: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0896: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7e089a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e08a0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e08a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e08a1: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7e08a6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e08a8: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7e08ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08ac: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e08af: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7e08b3: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08b9u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08b9: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e08bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e08bd: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e08c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08c1: mov ecx, eax */
  ecx = eax;
/* 7e08c3: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7e08c7: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08cdu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08cd: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e08d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e08d5: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e08d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e08d9: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e08dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e08dd: mov bl, 0x10 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 7e08df: mov ecx, eax */
  ecx = eax;
/* 7e08e1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e08e4: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e08eau); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e08ea: mov esi, eax */
  esi = eax;
/* 7e08ec: mov ecx, edi */
  ecx = edi;
/* 7e08ee: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7e08f2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e08f8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e08f8: mov ecx, esi */
  ecx = esi;
/* 7e08fa: mov edi, eax */
  edi = eax;
/* 7e08fc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0902u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0902: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7e0908: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e0909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e090a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e090c: push 0xadd288 */
  { uint32_t v = 0xadd288u; esp -= 4; W32(esp, v); }
/* 7e0911: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0912: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7e0918u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7e0918: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e091b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e091e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0921: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0927u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0927: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e092a: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7e092e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0934u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0934: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7e0937: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7e093b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0941u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0941: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0944: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7e0948: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e094eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e094e: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e0951: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0955: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e095bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e095b: push 0xadd2bc */
  { uint32_t v = 0xadd2bcu; esp -= 4; W32(esp, v); }
/* 7e0960: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0963: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7e0969u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7e0969: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7e096f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0970: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e0973: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0974: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7e0976: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e0979: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7e097d: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e0983u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e0983: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0986: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0987: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7e098a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e098b: mov ecx, eax */
  ecx = eax;
/* 7e098d: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7e0991: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e0997u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e0997: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7e099d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e099f: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e09a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e09a3: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e09a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e09a7: mov ecx, eax */
  ecx = eax;
/* 7e09a9: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7e09ad: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e09b3u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e09b3: mov esi, eax */
  esi = eax;
/* 7e09b5: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e09b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e09b9: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 7e09bc: mov bl, 0x15 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x15u) & 0xffu);
/* 7e09be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e09bf: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e09c2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e09c5: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7e09cbu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7e09cb: mov edi, eax */
  edi = eax;
/* 7e09cd: mov ecx, esi */
  ecx = esi;
/* 7e09cf: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7e09d3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e09d9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e09d9: mov ecx, edi */
  ecx = edi;
/* 7e09db: mov esi, eax */
  esi = eax;
/* 7e09dd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e09e3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e09e3: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7e09e9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7e09eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e09ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e09ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e09f1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e09f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e09f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e09f5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7e09f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e09f8: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7e09fb: mov esi, eax */
  esi = eax;
/* 7e09fd: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7e0a00: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a06u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a06: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e0a09: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7e0a0d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a13u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a13: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7e0a16: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7e0a1a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a20u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a20: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7e0a23: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7e0a27: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a2du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a2d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e0a30: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7e0a34: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a3au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a3a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e0a3c: je 0x7e0a6d */
  if (zf) goto L_7e0a6d;
L_7e0a3e: /* 7e0a3e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e0a41: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7e0a47u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7e0a47: lea ecx, [ebp - 0x2b4] */
  ecx = (uint32_t)(ebp + 0xfffffd4cu);
/* 7e0a4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e0a4e: push 0xb82200 */
  { uint32_t v = 0xb82200u; esp -= 4; W32(esp, v); }
/* 7e0a53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e0a54: push 0xadd2c0 */
  { uint32_t v = 0xadd2c0u; esp -= 4; W32(esp, v); }
/* 7e0a59: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7e0a5f: call 0x6c6feb */
  esp -= 4; W32(esp, 0x7e0a64u); SPILL(); f_6c6feb(); if (g_unwind) return; RELOAD();
/* 7e0a64: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e0a67: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
L_7e0a6d: /* 7e0a6d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e0a70: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e0a74: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7e0a7au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7e0a7a: jmp 0x7e06bc */
  goto L_7e06bc;
L_7e0a7f: /* 7e0a7f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e0a80: jmp 0x7e07a0 */
  goto L_7e07a0;
}
