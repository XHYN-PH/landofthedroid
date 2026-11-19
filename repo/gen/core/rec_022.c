#include "recomp.h"
#include "rec_mod.h"

void f_55255b(void) {
  LOAD_REGS();
L_55255b: /* 55255b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 55255e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 552563: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 552566: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552567: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 55256a: call 0x554df6 */
  esp -= 4; W32(esp, 0x55256fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_55256f(); return;
}

void f_55256f(void) {
  LOAD_REGS();
L_55256f: /* 55256f: push 0x570410 */
  { uint32_t v = 0x570410u; esp -= 4; W32(esp, v); }
/* 552574: push 0x5aeef4 */
  { uint32_t v = 0x5aeef4u; esp -= 4; W32(esp, v); }
/* 552579: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x55257eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 55257e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 552581: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552583: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552585: call 0x554df6 */
  esp -= 4; W32(esp, 0x55258au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_55258a: guest_badaddr(0x55258a); return;
}

void f_552610(void) {
  LOAD_REGS();
L_552610: /* 552610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 552611: mov ebp, esp */
  ebp = esp;
/* 552613: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 552615: push 0x559c50 */
  { uint32_t v = 0x559c50u; esp -= 4; W32(esp, v); }
/* 55261a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 552620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552621: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 552628: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 55262b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55262c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55262d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55262e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 552631: mov ebx, ecx */
  ebx = ecx;
/* 552633: mov esi, dword ptr [ebx + 0x24] */
  esi = R32((uint32_t)(ebx + 0x24u));
/* 552636: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 552638: push 0x5ae670 */
  { uint32_t v = 0x5ae670u; esp -= 4; W32(esp, v); }
/* 55263d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 552640: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 552647: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x55264cu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 55264c: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 552651: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 552654: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552656: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552658: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552659: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55265b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 55265d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55265e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55265f: push 0x6a5bb0 */
  { uint32_t v = 0x6a5bb0u; esp -= 4; W32(esp, v); }
/* 552664: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x552669u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 552669: mov esi, eax */
  esi = eax;
/* 55266b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55266e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552670: je 0x55268d */
  if (zf) goto L_55268d;
L_552672: /* 552672: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 552677: push 0x5ae690 */
  { uint32_t v = 0x5ae690u; esp -= 4; W32(esp, v); }
/* 55267c: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 55267e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552680: mov ecx, esi */
  ecx = esi;
/* 552682: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x552687u); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 552687: mov dword ptr [esi], 0x569ce8 */
  W32((uint32_t)(esi), 0x569ce8u);
L_55268d: /* 55268d: mov esi, dword ptr [ebx + 0x24] */
  esi = R32((uint32_t)(ebx + 0x24u));
/* 552690: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 552692: push 0x5ae6a0 */
  { uint32_t v = 0x5ae6a0u; esp -= 4; W32(esp, v); }
/* 552697: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 55269a: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x55269fu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 55269f: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 5526a5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 5526a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5526aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5526ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5526ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5526af: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5526b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5526b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5526b3: push 0x6a6610 */
  { uint32_t v = 0x6a6610u; esp -= 4; W32(esp, v); }
/* 5526b8: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x5526bdu); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 5526bd: mov esi, eax */
  esi = eax;
/* 5526bf: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5526c2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5526c4: je 0x5526e1 */
  if (zf) goto L_5526e1;
L_5526c6: /* 5526c6: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 5526cb: push 0x5ae6b4 */
  { uint32_t v = 0x5ae6b4u; esp -= 4; W32(esp, v); }
/* 5526d0: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 5526d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5526d4: mov ecx, esi */
  ecx = esi;
/* 5526d6: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x5526dbu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 5526db: mov dword ptr [esi], 0x56a228 */
  W32((uint32_t)(esi), 0x56a228u);
L_5526e1: /* 5526e1: mov esi, dword ptr [ebx + 0x24] */
  esi = R32((uint32_t)(ebx + 0x24u));
/* 5526e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5526e6: push 0x5ae6c4 */
  { uint32_t v = 0x5ae6c4u; esp -= 4; W32(esp, v); }
/* 5526eb: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5526ee: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x5526f3u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 5526f3: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 5526f9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5526fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5526fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552700: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 552701: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552703: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 552705: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 552706: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 552707: push 0x6a6610 */
  { uint32_t v = 0x6a6610u; esp -= 4; W32(esp, v); }
/* 55270c: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x552711u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 552711: mov esi, eax */
  esi = eax;
/* 552713: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 552716: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552718: je 0x552735 */
  if (zf) goto L_552735;
L_55271a: /* 55271a: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 55271f: push 0x5ae6d8 */
  { uint32_t v = 0x5ae6d8u; esp -= 4; W32(esp, v); }
/* 552724: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 552726: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552728: mov ecx, esi */
  ecx = esi;
/* 55272a: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x55272fu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 55272f: mov dword ptr [esi], 0x56a228 */
  W32((uint32_t)(esi), 0x56a228u);
L_552735: /* 552735: mov esi, dword ptr [ebx + 0x24] */
  esi = R32((uint32_t)(ebx + 0x24u));
/* 552738: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55273a: push 0x5ae6e8 */
  { uint32_t v = 0x5ae6e8u; esp -= 4; W32(esp, v); }
/* 55273f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 552742: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x552747u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 552747: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 55274c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 55274f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552751: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552753: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552754: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552756: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 552758: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 552759: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55275a: push 0x6a6610 */
  { uint32_t v = 0x6a6610u; esp -= 4; W32(esp, v); }
/* 55275f: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x552764u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 552764: mov esi, eax */
  esi = eax;
/* 552766: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 552769: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55276b: je 0x552788 */
  if (zf) goto L_552788;
L_55276d: /* 55276d: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 552772: push 0x5ae6fc */
  { uint32_t v = 0x5ae6fcu; esp -= 4; W32(esp, v); }
/* 552777: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 552779: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55277b: mov ecx, esi */
  ecx = esi;
/* 55277d: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x552782u); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 552782: mov dword ptr [esi], 0x56a228 */
  W32((uint32_t)(esi), 0x56a228u);
L_552788: /* 552788: mov esi, dword ptr [ebx + 0x24] */
  esi = R32((uint32_t)(ebx + 0x24u));
/* 55278b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55278d: push 0x5ae70c */
  { uint32_t v = 0x5ae70cu; esp -= 4; W32(esp, v); }
/* 552792: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 552795: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x55279au); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 55279a: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 5527a0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 5527a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5527a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5527a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5527a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5527aa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5527ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5527ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5527ae: push 0x6a60e0 */
  { uint32_t v = 0x6a60e0u; esp -= 4; W32(esp, v); }
/* 5527b3: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x5527b8u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 5527b8: mov esi, eax */
  esi = eax;
/* 5527ba: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5527bd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5527bf: je 0x5527de */
  if (zf) goto L_5527de;
L_5527c1: /* 5527c1: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 5527c6: push 0x5ae718 */
  { uint32_t v = 0x5ae718u; esp -= 4; W32(esp, v); }
/* 5527cb: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 5527cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5527cf: mov ecx, esi */
  ecx = esi;
/* 5527d1: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x5527d6u); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 5527d6: mov dword ptr [esi], 0x56a3e8 */
  W32((uint32_t)(esi), 0x56a3e8u);
/* 5527dc: jmp 0x5527e0 */
  goto L_5527e0;
L_5527de: /* 5527de: xor esi, esi */
  esi = 0;
L_5527e0: /* 5527e0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5527e2: push 0x5ae728 */
  { uint32_t v = 0x5ae728u; esp -= 4; W32(esp, v); }
/* 5527e7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5527ea: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x5527efu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 5527ef: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 5527f5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5527f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5527fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5527fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5527fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5527ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 552801: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 552802: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 552803: push 0x6a6610 */
  { uint32_t v = 0x6a6610u; esp -= 4; W32(esp, v); }
/* 552808: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x55280du); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 55280d: mov edi, eax */
  edi = eax;
/* 55280f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 552812: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552814: je 0x552825 */
  if (zf) goto L_552825;
L_552816: /* 552816: mov ecx, edi */
  ecx = edi;
/* 552818: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x55281du); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 55281d: mov dword ptr [edi], 0x56a228 */
  W32((uint32_t)(edi), 0x56a228u);
/* 552823: jmp 0x552827 */
  goto L_552827;
L_552825: /* 552825: xor edi, edi */
  edi = 0;
L_552827: /* 552827: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 552829: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* 55282c: mov esi, dword ptr [ebx + 0x24] */
  esi = R32((uint32_t)(ebx + 0x24u));
/* 55282f: push 0x5ae744 */
  { uint32_t v = 0x5ae744u; esp -= 4; W32(esp, v); }
/* 552834: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 552837: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x55283cu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 55283c: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 552841: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 552844: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552846: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552848: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552849: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55284b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 55284d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55284e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55284f: push 0x6a60e0 */
  { uint32_t v = 0x6a60e0u; esp -= 4; W32(esp, v); }
/* 552854: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x552859u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 552859: mov esi, eax */
  esi = eax;
/* 55285b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55285e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552860: je 0x55287f */
  if (zf) goto L_55287f;
L_552862: /* 552862: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 552867: push 0x5ae758 */
  { uint32_t v = 0x5ae758u; esp -= 4; W32(esp, v); }
/* 55286c: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 55286e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552870: mov ecx, esi */
  ecx = esi;
/* 552872: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x552877u); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 552877: mov dword ptr [esi], 0x56a3e8 */
  W32((uint32_t)(esi), 0x56a3e8u);
/* 55287d: jmp 0x552881 */
  goto L_552881;
L_55287f: /* 55287f: xor esi, esi */
  esi = 0;
L_552881: /* 552881: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 552883: push 0x5ae768 */
  { uint32_t v = 0x5ae768u; esp -= 4; W32(esp, v); }
/* 552888: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 55288b: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x552890u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 552890: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 552896: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 552899: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55289b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55289d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55289e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5528a0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5528a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5528a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5528a4: push 0x6a8a78 */
  { uint32_t v = 0x6a8a78u; esp -= 4; W32(esp, v); }
/* 5528a9: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x5528aeu); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 5528ae: mov edi, eax */
  edi = eax;
/* 5528b0: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5528b3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5528b5: je 0x5528d8 */
  if (zf) goto L_5528d8;
L_5528b7: /* 5528b7: mov ecx, edi */
  ecx = edi;
/* 5528b9: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x5528beu); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 5528be: mov dword ptr [edi], 0x56a148 */
  W32((uint32_t)(edi), 0x56a148u);
/* 5528c4: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* 5528c7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5528ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5528d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5528d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5528d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5528d4: mov esp, ebp */
  esp = ebp;
/* 5528d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5528d7: ret  */
  esp += 4; SPILL(); return;
L_5528d8: /* 5528d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5528db: xor edi, edi */
  edi = 0;
/* 5528dd: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* 5528e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5528e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5528e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5528e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5528ea: mov esp, ebp */
  esp = ebp;
/* 5528ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5528ed: ret  */
  esp += 4; SPILL(); return;
}

void f_5528ee(void) {
  LOAD_REGS();
L_5528ee: /* 5528ee: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5528f1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5528f6: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5528f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5528fa: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 5528fd: call 0x554df6 */
  esp -= 4; W32(esp, 0x552902u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_552902(); return;
}

void f_552902(void) {
  LOAD_REGS();
L_552902: /* 552902: push 0x570430 */
  { uint32_t v = 0x570430u; esp -= 4; W32(esp, v); }
/* 552907: push 0x5ae784 */
  { uint32_t v = 0x5ae784u; esp -= 4; W32(esp, v); }
/* 55290c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x552911u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 552911: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 552914: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552916: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552918: call 0x554df6 */
  esp -= 4; W32(esp, 0x55291du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_55291d: guest_badaddr(0x55291d); return;
}

void f_5529f0(void) {
  LOAD_REGS();
L_5529f0: /* 5529f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5529f1: mov ebp, esp */
  ebp = esp;
/* 5529f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5529f5: push 0x559c8f */
  { uint32_t v = 0x559c8fu; esp -= 4; W32(esp, v); }
/* 5529fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 552a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552a01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 552a08: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 552a0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 552a0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 552a0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 552a0e: xor edi, edi */
  edi = 0;
/* 552a10: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 552a13: mov esi, 1 */
  esi = 0x1u;
/* 552a18: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 552a1b: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 552a1e: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 552a21: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 552a24: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 552a27: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 552a2b: call dword ptr [0x6ac794] */
  esp -= 4; W32(esp, 0x552a31u); SPILL(); call_ind(R32(0x6ac794u)); if (g_unwind) return; /* USER32!GetActiveWindow */ RELOAD();
/* 552a31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552a32: call dword ptr [0x6ac778] */
  esp -= 4; W32(esp, 0x552a38u); SPILL(); call_ind(R32(0x6ac778u)); if (g_unwind) return; /* USER32!OpenClipboard */ RELOAD();
/* 552a38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552a3a: je 0x552b71 */
  if (zf) goto L_552b71;
L_552a40: /* 552a40: cmp dword ptr [0x5a2f68], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5a2f68u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 552a46: je 0x552a5e */
  if (zf) goto L_552a5e;
L_552a48: /* 552a48: cmp dword ptr [0x5b3184], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5b3184u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 552a4e: je 0x552a5e */
  if (zf) goto L_552a5e;
L_552a50: /* 552a50: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 552a52: call dword ptr [0x6ac78c] */
  esp -= 4; W32(esp, 0x552a58u); SPILL(); call_ind(R32(0x6ac78cu)); if (g_unwind) return; /* USER32!GetClipboardData */ RELOAD();
/* 552a58: mov ebx, eax */
  ebx = eax;
/* 552a5a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 552a5c: jne 0x552a80 */
  if (!zf) goto L_552a80;
L_552a5e: /* 552a5e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 552a60: call dword ptr [0x6ac78c] */
  esp -= 4; W32(esp, 0x552a66u); SPILL(); call_ind(R32(0x6ac78cu)); if (g_unwind) return; /* USER32!GetClipboardData */ RELOAD();
/* 552a66: mov ebx, eax */
  ebx = eax;
/* 552a68: xor esi, esi */
  esi = 0;
/* 552a6a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 552a6c: jne 0x552a80 */
  if (!zf) goto L_552a80;
L_552a6e: /* 552a6e: push 0x6a9e38 */
  { uint32_t v = 0x6a9e38u; esp -= 4; W32(esp, v); }
/* 552a73: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 552a76: call 0x4e3e5e */
  esp -= 4; W32(esp, 0x552a7bu); SPILL(); f_4e3e5e(); if (g_unwind) return; RELOAD();
/* 552a7b: jmp 0x552b4e */
  goto L_552b4e;
L_552a80: /* 552a80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 552a81: call dword ptr [0x6ac51c] */
  esp -= 4; W32(esp, 0x552a87u); SPILL(); call_ind(R32(0x6ac51cu)); if (g_unwind) return; /* KERNEL32!GlobalLock */ RELOAD();
/* 552a87: mov edi, eax */
  edi = eax;
/* 552a89: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552a8b: jne 0x552aa4 */
  if (!zf) goto L_552aa4;
L_552a8d: /* 552a8d: push 0x1d8 */
  { uint32_t v = 0x1d8u; esp -= 4; W32(esp, v); }
/* 552a92: push 0x5aec44 */
  { uint32_t v = 0x5aec44u; esp -= 4; W32(esp, v); }
/* 552a97: push 0x5aec54 */
  { uint32_t v = 0x5aec54u; esp -= 4; W32(esp, v); }
/* 552a9c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x552aa1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 552aa1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_552aa4: /* 552aa4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552aa6: je 0x552ab6 */
  if (zf) goto L_552ab6;
L_552aa8: /* 552aa8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 552aa9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 552aac: call 0x4e3e5e */
  esp -= 4; W32(esp, 0x552ab1u); SPILL(); f_4e3e5e(); if (g_unwind) return; RELOAD();
/* 552ab1: jmp 0x552b45 */
  goto L_552b45;
L_552ab6: /* 552ab6: xor eax, eax */
  eax = 0;
L_552ab8: /* 552ab8: mov cl, byte ptr [eax + edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edi))) & 0xffu);
/* 552abb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 552abc: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 552abe: jne 0x552ab8 */
  if (!zf) goto L_552ab8;
L_552ac0: /* 552ac0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 552ac2: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 552ac5: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 552acc: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 552acf: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 552ad2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x552ad7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 552ad7: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 552adb: xor eax, eax */
  eax = 0;
/* 552add: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_552ae0: /* 552ae0: cmp eax, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 552ae3: jge 0x552af4 */
  if ((sf == of)) goto L_552af4;
L_552ae5: /* 552ae5: movzx cx, byte ptr [eax + edi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + edi)))) & 0xffffu);
/* 552aea: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 552aed: mov word ptr [edx + eax*2], cx */
  W16((uint32_t)(edx + eax*2), (ecx & 0xffffu));
/* 552af1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 552af2: jmp 0x552ae0 */
  goto L_552ae0;
L_552af4: /* 552af4: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 552af7: cmp dword ptr [ebp - 0x28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 552afa: mov esi, eax */
  esi = eax;
/* 552afc: je 0x552b39 */
  if (zf) goto L_552b39;
L_552afe: /* 552afe: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 552b02: je 0x552b10 */
  if (zf) goto L_552b10;
L_552b04: /* 552b04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552b05: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x552b0au); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 552b0a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 552b0d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 552b0e: jmp 0x552b12 */
  goto L_552b12;
L_552b10: /* 552b10: xor eax, eax */
  eax = 0;
L_552b12: /* 552b12: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 552b14: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 552b17: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 552b1a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 552b1d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x552b22u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 552b22: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 552b25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552b27: je 0x552b39 */
  if (zf) goto L_552b39;
L_552b29: /* 552b29: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 552b2c: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 552b2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552b2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 552b30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 552b31: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x552b36u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 552b36: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_552b39: /* 552b39: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 552b3c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 552b40: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x552b45u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_552b45: /* 552b45: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 552b46: call dword ptr [0x6ac518] */
  esp -= 4; W32(esp, 0x552b4cu); SPILL(); call_ind(R32(0x6ac518u)); if (g_unwind) return; /* KERNEL32!GlobalUnlock */ RELOAD();
/* 552b4c: xor edi, edi */
  edi = 0;
L_552b4e: /* 552b4e: call dword ptr [0x6ac77c] */
  esp -= 4; W32(esp, 0x552b54u); SPILL(); call_ind(R32(0x6ac77cu)); if (g_unwind) return; /* USER32!CloseClipboard */ RELOAD();
/* 552b54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552b56: jne 0x552b7e */
  if (!zf) goto L_552b7e;
L_552b58: /* 552b58: push 0x1e7 */
  { uint32_t v = 0x1e7u; esp -= 4; W32(esp, v); }
/* 552b5d: push 0x5aec5c */
  { uint32_t v = 0x5aec5cu; esp -= 4; W32(esp, v); }
/* 552b62: push 0x5aec6c */
  { uint32_t v = 0x5aec6cu; esp -= 4; W32(esp, v); }
/* 552b67: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x552b6cu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 552b6c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 552b6f: jmp 0x552b7e */
  goto L_552b7e;
L_552b71: /* 552b71: push 0x6a9e3c */
  { uint32_t v = 0x6a9e3cu; esp -= 4; W32(esp, v); }
/* 552b76: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 552b79: call 0x4e3e5e */
  esp -= 4; W32(esp, 0x552b7eu); SPILL(); f_4e3e5e(); if (g_unwind) return; RELOAD();
L_552b7e: /* 552b7e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 552b81: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 552b84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 552b85: mov ecx, esi */
  ecx = esi;
/* 552b87: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x552b8cu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 552b8c: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 552b90: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 552b92: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 552b95: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 552b99: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 552b9c: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 552b9f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x552ba4u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 552ba4: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 552ba7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 552bab: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x552bb0u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 552bb0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 552bb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 552bb4: mov eax, esi */
  eax = esi;
/* 552bb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 552bb7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 552bbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 552bbf: mov esp, ebp */
  esp = ebp;
/* 552bc1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 552bc2: ret  */
  esp += 4; SPILL(); return;
}

void f_552bc3(void) {
  LOAD_REGS();
L_552bc3: /* 552bc3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 552bc6: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 552bcb: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 552bce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 552bcf: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 552bd2: call 0x554df6 */
  esp -= 4; W32(esp, 0x552bd7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_552bd7(); return;
}

void f_552bd7(void) {
  LOAD_REGS();
L_552bd7: /* 552bd7: push 0x570470 */
  { uint32_t v = 0x570470u; esp -= 4; W32(esp, v); }
/* 552bdc: push 0x5aec80 */
  { uint32_t v = 0x5aec80u; esp -= 4; W32(esp, v); }
/* 552be1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x552be6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 552be6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 552be9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552beb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552bed: call 0x554df6 */
  esp -= 4; W32(esp, 0x552bf2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_552bf2: guest_badaddr(0x552bf2); return;
}

void f_552c90(void) {
  LOAD_REGS();
L_552c90: /* 552c90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 552c91: mov ebp, esp */
  ebp = esp;
/* 552c93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 552c95: push 0x559cd0 */
  { uint32_t v = 0x559cd0u; esp -= 4; W32(esp, v); }
/* 552c9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 552ca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552ca1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 552ca8: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 552cab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 552cac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 552cad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 552cae: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 552cb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552cb3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 552cb6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 552cbd: jne 0x552cd6 */
  if (!zf) goto L_552cd6;
L_552cbf: /* 552cbf: push 0x203 */
  { uint32_t v = 0x203u; esp -= 4; W32(esp, v); }
/* 552cc4: push 0x5aec88 */
  { uint32_t v = 0x5aec88u; esp -= 4; W32(esp, v); }
/* 552cc9: push 0x5aec98 */
  { uint32_t v = 0x5aec98u; esp -= 4; W32(esp, v); }
/* 552cce: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x552cd3u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 552cd3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_552cd6: /* 552cd6: mov esi, edi */
  esi = edi;
/* 552cd8: call 0x550240 */
  esp -= 4; W32(esp, 0x552cddu); SPILL(); f_550240(); if (g_unwind) return; RELOAD();
/* 552cdd: mov esi, eax */
  esi = eax;
/* 552cdf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552ce1: jne 0x552dc3 */
  if (!zf) goto L_552dc3;
L_552ce7: /* 552ce7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 552ce8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 552ceb: call 0x4e13de */
  esp -= 4; W32(esp, 0x552cf0u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 552cf0: push 0x5aeca4 */
  { uint32_t v = 0x5aeca4u; esp -= 4; W32(esp, v); }
/* 552cf5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 552cf8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 552cf9: mov ecx, eax */
  ecx = eax;
/* 552cfb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 552cff: call 0x4e2149 */
  esp -= 4; W32(esp, 0x552d04u); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 552d04: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 552d07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552d09: je 0x552d0f */
  if (zf) goto L_552d0f;
L_552d0b: /* 552d0b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 552d0d: jmp 0x552d14 */
  goto L_552d14;
L_552d0f: /* 552d0f: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_552d14: /* 552d14: mov esi, eax */
  esi = eax;
/* 552d16: call 0x550240 */
  esp -= 4; W32(esp, 0x552d1bu); SPILL(); f_550240(); if (g_unwind) return; RELOAD();
/* 552d1b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 552d1e: mov esi, eax */
  esi = eax;
/* 552d20: call 0x4e1217 */
  esp -= 4; W32(esp, 0x552d25u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 552d25: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 552d28: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 552d2c: call 0x4e1217 */
  esp -= 4; W32(esp, 0x552d31u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 552d31: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552d33: jne 0x552dc3 */
  if (!zf) goto L_552dc3;
L_552d39: /* 552d39: push 0x6a9e40 */
  { uint32_t v = 0x6a9e40u; esp -= 4; W32(esp, v); }
/* 552d3e: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 552d41: call 0x4e13de */
  esp -= 4; W32(esp, 0x552d46u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 552d46: push 0x5aecb0 */
  { uint32_t v = 0x5aecb0u; esp -= 4; W32(esp, v); }
/* 552d4b: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 552d4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 552d4f: mov ecx, eax */
  ecx = eax;
/* 552d51: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 552d55: call 0x4e2149 */
  esp -= 4; W32(esp, 0x552d5au); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 552d5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 552d5b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 552d5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 552d5f: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* 552d61: mov ecx, eax */
  ecx = eax;
/* 552d63: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 552d66: call 0x4e2149 */
  esp -= 4; W32(esp, 0x552d6bu); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 552d6b: push 0x5aecb4 */
  { uint32_t v = 0x5aecb4u; esp -= 4; W32(esp, v); }
/* 552d70: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 552d73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 552d74: mov ecx, eax */
  ecx = eax;
/* 552d76: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 552d7a: call 0x4e2149 */
  esp -= 4; W32(esp, 0x552d7fu); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 552d7f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 552d82: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552d84: je 0x552d8a */
  if (zf) goto L_552d8a;
L_552d86: /* 552d86: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 552d88: jmp 0x552d8f */
  goto L_552d8f;
L_552d8a: /* 552d8a: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_552d8f: /* 552d8f: mov esi, eax */
  esi = eax;
/* 552d91: call 0x550240 */
  esp -= 4; W32(esp, 0x552d96u); SPILL(); f_550240(); if (g_unwind) return; RELOAD();
/* 552d96: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 552d99: mov esi, eax */
  esi = eax;
/* 552d9b: call 0x4e1217 */
  esp -= 4; W32(esp, 0x552da0u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 552da0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 552da3: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 552da6: call 0x4e1217 */
  esp -= 4; W32(esp, 0x552dabu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 552dab: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 552dae: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 552db2: call 0x4e1217 */
  esp -= 4; W32(esp, 0x552db7u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 552db7: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 552dba: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 552dbe: call 0x4e1217 */
  esp -= 4; W32(esp, 0x552dc3u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
L_552dc3: /* 552dc3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 552dc6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 552dc7: mov eax, esi */
  eax = esi;
/* 552dc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 552dca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 552dd1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 552dd2: mov esp, ebp */
  esp = ebp;
/* 552dd4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 552dd5: ret  */
  esp += 4; SPILL(); return;
}

void f_552dd6(void) {
  LOAD_REGS();
L_552dd6: /* 552dd6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 552dd9: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 552dde: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 552de1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 552de2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 552de5: call 0x554df6 */
  esp -= 4; W32(esp, 0x552deau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_552dea(); return;
}

void f_552dea(void) {
  LOAD_REGS();
L_552dea: /* 552dea: push 0x57049c */
  { uint32_t v = 0x57049cu; esp -= 4; W32(esp, v); }
/* 552def: push 0x5aecc0 */
  { uint32_t v = 0x5aecc0u; esp -= 4; W32(esp, v); }
/* 552df4: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x552df9u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 552df9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 552dfc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552dfe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 552e00: call 0x554df6 */
  esp -= 4; W32(esp, 0x552e05u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_552e05: guest_badaddr(0x552e05); return;
}

void f_552e70(void) {
  LOAD_REGS();
L_552e70: /* 552e70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 552e71: mov ebp, esp */
  ebp = esp;
/* 552e73: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 552e76: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 552e78: push 0x559d06 */
  { uint32_t v = 0x559d06u; esp -= 4; W32(esp, v); }
/* 552e7d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 552e83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552e84: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 552e8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 552e8c: mov eax, 0x201c */
  eax = 0x201cu;
/* 552e91: call 0x554f80 */
  esp -= 4; W32(esp, 0x552e96u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 552e96: mov ax, word ptr [0x6a9e50] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x6a9e50u))) & 0xffffu);
/* 552e9c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 552e9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 552e9e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 552e9f: mov word ptr [esp + 0x28], ax */
  W16((uint32_t)(esp + 0x28u), (eax & 0xffffu));
/* 552ea4: xor eax, eax */
  eax = 0;
/* 552ea6: mov ecx, 0x7ff */
  ecx = 0x7ffu;
/* 552eab: lea edi, [esp + 0x2a] */
  edi = (uint32_t)(esp + 0x2au);
/* 552eaf: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 552eb1: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 552eb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 552eb5: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 552eb9: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 552ebe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 552ebf: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 552ec1: call 0x4e3693 */
  esp -= 4; W32(esp, 0x552ec6u); SPILL(); f_4e3693(); if (g_unwind) return; RELOAD();
/* 552ec6: mov ecx, dword ptr [0x5b319c] */
  ecx = R32((uint32_t)(0x5b319cu));
/* 552ecc: xor ebx, ebx */
  ebx = 0;
/* 552ece: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 552ed1: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 552ed3: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 552ed7: jle 0x552f95 */
  if ((zf || sf != of)) goto L_552f95;
L_552edd: /* 552edd: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 552ee1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 552ee5: xor edi, edi */
  edi = 0;
L_552ee7: /* 552ee7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 552eea: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 552eee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 552eef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 552ef0: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 552ef4: call 0x4e2b94 */
  esp -= 4; W32(esp, 0x552ef9u); SPILL(); f_4e2b94(); if (g_unwind) return; RELOAD();
/* 552ef9: mov ecx, dword ptr [0x5b3198] */
  ecx = R32((uint32_t)(0x5b3198u));
/* 552eff: mov edx, dword ptr [edi + ecx] */
  edx = R32((uint32_t)(edi + ecx));
/* 552f02: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 552f04: mov dword ptr [esp + 0x2034], ebx */
  W32((uint32_t)(esp + 0x2034u), ebx);
/* 552f0b: jne 0x552f43 */
  if (!zf) goto L_552f43;
L_552f0d: /* 552f0d: cmp dword ptr [eax + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 552f10: lea ecx, [edi + ecx + 4] */
  ecx = (uint32_t)(edi + ecx + 0x4u);
/* 552f14: je 0x552f1b */
  if (zf) goto L_552f1b;
L_552f16: /* 552f16: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 552f19: jmp 0x552f20 */
  goto L_552f20;
L_552f1b: /* 552f1b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_552f20: /* 552f20: cmp dword ptr [ecx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 552f23: je 0x552f29 */
  if (zf) goto L_552f29;
L_552f25: /* 552f25: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 552f27: jmp 0x552f2e */
  goto L_552f2e;
L_552f29: /* 552f29: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_552f2e: /* 552f2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552f2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 552f30: call 0x4e26df */
  esp -= 4; W32(esp, 0x552f35u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 552f35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 552f38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 552f3a: jne 0x552f43 */
  if (!zf) goto L_552f43;
L_552f3c: /* 552f3c: mov esi, 1 */
  esi = 0x1u;
/* 552f41: jmp 0x552f45 */
  goto L_552f45;
L_552f43: /* 552f43: xor esi, esi */
  esi = 0;
L_552f45: /* 552f45: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 552f47: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 552f4b: mov dword ptr [esp + 0x2038], 1 */
  W32((uint32_t)(esp + 0x2038u), 0x1u);
/* 552f56: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 552f5a: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 552f5e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x552f63u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 552f63: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 552f67: mov dword ptr [esp + 0x2034], 0xffffffff */
  W32((uint32_t)(esp + 0x2034u), 0xffffffffu);
/* 552f72: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x552f77u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 552f77: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 552f79: jne 0x552fe4 */
  if (!zf) goto L_552fe4;
L_552f7b: /* 552f7b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 552f7f: mov ecx, dword ptr [0x5b319c] */
  ecx = R32((uint32_t)(0x5b319cu));
/* 552f85: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 552f86: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 552f89: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 552f8b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 552f8f: jl 0x552ee7 */
  if ((sf != of)) goto L_552ee7;
L_552f95: /* 552f95: mov eax, dword ptr [0x5b31a0] */
  eax = R32((uint32_t)(0x5b31a0u));
/* 552f9a: mov esi, ecx */
  esi = ecx;
/* 552f9c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 552f9d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 552f9f: mov dword ptr [0x5b319c], ecx */
  W32((uint32_t)(0x5b319cu), ecx);
/* 552fa5: jle 0x552fc8 */
  if ((zf || sf != of)) goto L_552fc8;
L_552fa7: /* 552fa7: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 552faa: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 552fab: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 552fae: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 552fb0: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 552fb3: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 552fb7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 552fb9: mov ecx, 0x5b3198 */
  ecx = 0x5b3198u;
/* 552fbe: mov dword ptr [0x5b31a0], eax */
  W32((uint32_t)(0x5b31a0u), eax);
/* 552fc3: call 0x4e4502 */
  esp -= 4; W32(esp, 0x552fc8u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_552fc8: /* 552fc8: mov eax, dword ptr [0x5b3198] */
  eax = R32((uint32_t)(0x5b3198u));
/* 552fcd: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 552fd0: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  esi = r;
  }
/* 552fd2: mov ecx, esi */
  ecx = esi;
/* 552fd4: je 0x552fe4 */
  if (zf) goto L_552fe4;
L_552fd6: /* 552fd6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 552fd9: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 552fdd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 552fde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 552fdf: call 0x4e2b94 */
  esp -= 4; W32(esp, 0x552fe4u); SPILL(); f_4e2b94(); if (g_unwind) return; RELOAD();
L_552fe4: /* 552fe4: mov ecx, dword ptr [esp + 0x202c] */
  ecx = R32((uint32_t)(esp + 0x202cu));
/* 552feb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 552fec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 552fed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 552ff4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 552ff5: mov esp, ebp */
  esp = ebp;
/* 552ff7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 552ff8: ret  */
  esp += 4; SPILL(); return;
}

void f_553070(void) {
  LOAD_REGS();
L_553070: /* 553070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 553071: mov esi, ecx */
  esi = ecx;
/* 553073: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 553076: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 553077: xor edi, edi */
  edi = 0;
/* 553079: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 55307b: jle 0x553095 */
  if ((zf || sf != of)) goto L_553095;
L_55307d: /* 55307d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55307e: xor ebx, ebx */
  ebx = 0;
L_553080: /* 553080: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 553082: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 553084: call 0x4e1f05 */
  esp -= 4; W32(esp, 0x553089u); SPILL(); f_4e1f05(); if (g_unwind) return; RELOAD();
/* 553089: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 55308c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 55308d: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 553090: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 553092: jl 0x553080 */
  if ((sf != of)) goto L_553080;
L_553094: /* 553094: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_553095: /* 553095: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 553099: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 55309b: mov ecx, esi */
  ecx = esi;
/* 55309d: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 5530a4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5530a7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5530acu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5530ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5530ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5530ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5530e0(void) {
  LOAD_REGS();
L_5530e0: /* 5530e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5530e1: mov esi, ecx */
  esi = ecx;
/* 5530e3: call 0x4e245a */
  esp -= 4; W32(esp, 0x5530e8u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 5530e8: mov dword ptr [esi + 0x28], 0x569060 */
  W32((uint32_t)(esi + 0x28u), 0x569060u);
/* 5530ef: mov dword ptr [esi], 0x56aac8 */
  W32((uint32_t)(esi), 0x56aac8u);
/* 5530f5: mov dword ptr [esi + 0x28], 0x56aac4 */
  W32((uint32_t)(esi + 0x28u), 0x56aac4u);
/* 5530fc: mov eax, esi */
  eax = esi;
/* 5530fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5530ff: ret  */
  esp += 4; SPILL(); return;
}

void f_553110(void) {
  LOAD_REGS();
L_553110: /* 553110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 553111: mov ebp, esp */
  ebp = esp;
/* 553113: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 553115: push 0x559d30 */
  { uint32_t v = 0x559d30u; esp -= 4; W32(esp, v); }
/* 55311a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 553120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553121: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 553128: sub esp, 0xa38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 55312e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55312f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 553130: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 553131: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 553134: push 0x5ae78c */
  { uint32_t v = 0x5ae78cu; esp -= 4; W32(esp, v); }
/* 553139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55313a: call 0x4e32ec */
  esp -= 4; W32(esp, 0x55313fu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 55313f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553142: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 553144: je 0x5531a6 */
  if (zf) goto L_5531a6;
L_553146: /* 553146: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 553149: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55314a: mov dword ptr [ebp - 0x44], 0x20 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x20u);
/* 553151: call dword ptr [0x6ac590] */
  esp -= 4; W32(esp, 0x553157u); SPILL(); call_ind(R32(0x6ac590u)); if (g_unwind) return; /* KERNEL32!GlobalMemoryStatus */ RELOAD();
/* 553157: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 55315a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 55315d: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 553160: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 553163: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 553166: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 553167: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 55316a: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 55316d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55316e: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 553171: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 553174: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553175: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 553178: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 55317b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55317c: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 55317f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553180: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 553183: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553184: push 0x5ae7a0 */
  { uint32_t v = 0x5ae7a0u; esp -= 4; W32(esp, v); }
/* 553189: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55318a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x55318fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 55318f: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 553192: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 553193: push 0x5ae814 */
  { uint32_t v = 0x5ae814u; esp -= 4; W32(esp, v); }
/* 553198: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 553199: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x55319eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 55319e: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5531a1: jmp 0x5535ec */
  goto L_5535ec;
L_5531a6: /* 5531a6: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 5531a9: push 0x5ae83c */
  { uint32_t v = 0x5ae83cu; esp -= 4; W32(esp, v); }
/* 5531ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5531af: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5531b4u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5531b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5531b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5531b9: je 0x5531cf */
  if (zf) goto L_5531cf;
L_5531bb: /* 5531bb: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 5531c1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 5531c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5531c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5531c7: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0x5531cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5531ca: jmp 0x5535ec */
  goto L_5535ec;
L_5531cf: /* 5531cf: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5531d2: push 0x5ae854 */
  { uint32_t v = 0x5ae854u; esp -= 4; W32(esp, v); }
/* 5531d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5531d8: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5531ddu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5531dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5531e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5531e2: jne 0x5535cc */
  if (!zf) goto L_5535cc;
L_5531e8: /* 5531e8: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 5531eb: push 0x5ae860 */
  { uint32_t v = 0x5ae860u; esp -= 4; W32(esp, v); }
/* 5531f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5531f1: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5531f6u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5531f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5531f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5531fb: jne 0x5535cc */
  if (!zf) goto L_5535cc;
L_553201: /* 553201: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 553204: push 0x5ae894 */
  { uint32_t v = 0x5ae894u; esp -= 4; W32(esp, v); }
/* 553209: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55320a: call 0x4e32ec */
  esp -= 4; W32(esp, 0x55320fu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 55320f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553212: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 553214: je 0x553388 */
  if (zf) goto L_553388;
L_55321a: /* 55321a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 55321d: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 553223: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553224: push 0x5ae8a8 */
  { uint32_t v = 0x5ae8a8u; esp -= 4; W32(esp, v); }
/* 553229: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55322a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x55322fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 55322f: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 553235: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 553237: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55323a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55323c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55323e: call dword ptr [eax + 0x34] */
  { uint32_t t = R32((uint32_t)(eax + 0x34u)); esp -= 4; W32(esp, 0x553241u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 553241: mov eax, dword ptr [0x5b3184] */
  eax = R32((uint32_t)(0x5b3184u));
/* 553246: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 553248: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 55324d: jne 0x55333b */
  if (!zf) goto L_55333b;
L_553253: /* 553253: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 553259: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55325a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55325c: call dword ptr [0x6ac57c] */
  esp -= 4; W32(esp, 0x553262u); SPILL(); call_ind(R32(0x6ac57cu)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameA */ RELOAD();
/* 553262: lea edx, [ebp - 0x144] */
  edx = (uint32_t)(ebp + 0xfffffebcu);
/* 553268: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55326a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55326b: call 0x4e161d */
  esp -= 4; W32(esp, 0x553270u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 553270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553271: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 553276: push 0x5ae8c4 */
  { uint32_t v = 0x5ae8c4u; esp -= 4; W32(esp, v); }
/* 55327b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55327c: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x553281u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 553281: call 0x4e28d3 */
  esp -= 4; W32(esp, 0x553286u); SPILL(); f_4e28d3(); if (g_unwind) return; RELOAD();
/* 553286: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553287: call 0x4e3e36 */
  esp -= 4; W32(esp, 0x55328cu); SPILL(); f_4e3e36(); if (g_unwind) return; RELOAD();
/* 55328c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55328f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 553291: jne 0x553297 */
  if (!zf) goto L_553297;
L_553293: /* 553293: xor edi, edi */
  edi = 0;
/* 553295: jmp 0x5532b8 */
  goto L_5532b8;
L_553297: /* 553297: call 0x4e28d3 */
  esp -= 4; W32(esp, 0x55329cu); SPILL(); f_4e28d3(); if (g_unwind) return; RELOAD();
/* 55329c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55329d: call 0x4e3e36 */
  esp -= 4; W32(esp, 0x5532a2u); SPILL(); f_4e3e36(); if (g_unwind) return; RELOAD();
/* 5532a2: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5532a5: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5532a8: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5532ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5532ae: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5532b1: call 0x554f80 */
  esp -= 4; W32(esp, 0x5532b6u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 5532b6: mov edi, esp */
  edi = esp;
L_5532b8: /* 5532b8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5532bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5532bc: call 0x4e3e36 */
  esp -= 4; W32(esp, 0x5532c1u); SPILL(); f_4e3e36(); if (g_unwind) return; RELOAD();
/* 5532c1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5532c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5532c6: jne 0x5532cc */
  if (!zf) goto L_5532cc;
L_5532c8: /* 5532c8: xor esi, esi */
  esi = 0;
/* 5532ca: jmp 0x5532eb */
  goto L_5532eb;
L_5532cc: /* 5532cc: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5532cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5532d0: call 0x4e3e36 */
  esp -= 4; W32(esp, 0x5532d5u); SPILL(); f_4e3e36(); if (g_unwind) return; RELOAD();
/* 5532d5: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5532d8: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5532db: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5532de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5532e1: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5532e4: call 0x554f80 */
  esp -= 4; W32(esp, 0x5532e9u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 5532e9: mov esi, esp */
  esi = esp;
L_5532eb: /* 5532eb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5532ed: call 0x4e28d3 */
  esp -= 4; W32(esp, 0x5532f2u); SPILL(); f_4e28d3(); if (g_unwind) return; RELOAD();
/* 5532f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5532f3: call 0x4e3e36 */
  esp -= 4; W32(esp, 0x5532f8u); SPILL(); f_4e3e36(); if (g_unwind) return; RELOAD();
/* 5532f8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5532fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5532fc: call 0x4e28d3 */
  esp -= 4; W32(esp, 0x553301u); SPILL(); f_4e28d3(); if (g_unwind) return; RELOAD();
/* 553301: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553302: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 553303: call 0x4e267b */
  esp -= 4; W32(esp, 0x553308u); SPILL(); f_4e267b(); if (g_unwind) return; RELOAD();
/* 553308: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55330b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55330c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 55330f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553310: call 0x4e3e36 */
  esp -= 4; W32(esp, 0x553315u); SPILL(); f_4e3e36(); if (g_unwind) return; RELOAD();
/* 553315: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 553318: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553319: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55331a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55331b: call 0x4e267b */
  esp -= 4; W32(esp, 0x553320u); SPILL(); f_4e267b(); if (g_unwind) return; RELOAD();
/* 553320: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553323: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553324: push 0x5ae900 */
  { uint32_t v = 0x5ae900u; esp -= 4; W32(esp, v); }
/* 553329: push 0x5ae918 */
  { uint32_t v = 0x5ae918u; esp -= 4; W32(esp, v); }
/* 55332e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553330: call dword ptr [0x6ac748] */
  esp -= 4; W32(esp, 0x553336u); SPILL(); call_ind(R32(0x6ac748u)); if (g_unwind) return; /* SHELL32!ShellExecuteA */ RELOAD();
/* 553336: jmp 0x5535e2 */
  goto L_5535e2;
L_55333b: /* 55333b: lea edx, [ebp - 0x244] */
  edx = (uint32_t)(ebp + 0xfffffdbcu);
/* 553341: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 553342: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553344: call dword ptr [0x6ac578] */
  esp -= 4; W32(esp, 0x55334au); SPILL(); call_ind(R32(0x6ac578u)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameW */ RELOAD();
/* 55334a: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 553350: lea eax, [ebp - 0x244] */
  eax = (uint32_t)(ebp + 0xfffffdbcu);
/* 553356: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553357: push 0x5ae920 */
  { uint32_t v = 0x5ae920u; esp -= 4; W32(esp, v); }
/* 55335c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55335d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x553362u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 553362: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553365: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 553367: call 0x4e28d3 */
  esp -= 4; W32(esp, 0x55336cu); SPILL(); f_4e28d3(); if (g_unwind) return; RELOAD();
/* 55336c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 55336f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553370: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 553371: push 0x5ae95c */
  { uint32_t v = 0x5ae95cu; esp -= 4; W32(esp, v); }
/* 553376: push 0x5ae988 */
  { uint32_t v = 0x5ae988u; esp -= 4; W32(esp, v); }
/* 55337b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55337d: call dword ptr [0x6ac744] */
  esp -= 4; W32(esp, 0x553383u); SPILL(); call_ind(R32(0x6ac744u)); if (g_unwind) return; /* SHELL32!ShellExecuteW */ RELOAD();
/* 553383: jmp 0x5535e2 */
  goto L_5535e2;
L_553388: /* 553388: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 55338b: push 0x5ae994 */
  { uint32_t v = 0x5ae994u; esp -= 4; W32(esp, v); }
/* 553390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553391: call 0x4e32ec */
  esp -= 4; W32(esp, 0x553396u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 553396: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553399: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55339b: je 0x553488 */
  if (zf) goto L_553488;
L_5533a1: /* 5533a1: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5533a4: push 0x5ae9a0 */
  { uint32_t v = 0x5ae9a0u; esp -= 4; W32(esp, v); }
/* 5533a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5533aa: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5533afu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5533af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5533b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5533b4: je 0x5533d4 */
  if (zf) goto L_5533d4;
L_5533b6: /* 5533b6: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 5533bc: push 0x5ae9ac */
  { uint32_t v = 0x5ae9acu; esp -= 4; W32(esp, v); }
/* 5533c1: push 0x5ae9ec */
  { uint32_t v = 0x5ae9ecu; esp -= 4; W32(esp, v); }
/* 5533c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5533c7: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5533ccu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5533cc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5533cf: jmp 0x5535ec */
  goto L_5535ec;
L_5533d4: /* 5533d4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 5533d7: push 0x5ae9f4 */
  { uint32_t v = 0x5ae9f4u; esp -= 4; W32(esp, v); }
/* 5533dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5533dd: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5533e2u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5533e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5533e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5533e7: je 0x553405 */
  if (zf) goto L_553405;
L_5533e9: /* 5533e9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5533ec: push 0x5aea00 */
  { uint32_t v = 0x5aea00u; esp -= 4; W32(esp, v); }
/* 5533f1: call 0x4e35da */
  esp -= 4; W32(esp, 0x5533f6u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 5533f6: mov dword ptr [0], 0x7b */
  W32((uint32_t)(0x0u), 0x7bu);
/* 553400: jmp 0x5535ec */
  goto L_5535ec;
L_553405: /* 553405: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 553408: push 0x5aea48 */
  { uint32_t v = 0x5aea48u; esp -= 4; W32(esp, v); }
/* 55340d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55340e: call 0x4e32ec */
  esp -= 4; W32(esp, 0x553413u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 553413: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553416: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 553418: je 0x553437 */
  if (zf) goto L_553437;
L_55341a: /* 55341a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 55341d: push 0x5aea58 */
  { uint32_t v = 0x5aea58u; esp -= 4; W32(esp, v); }
/* 553422: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 553423: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x553428u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 553428: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55342a: call 0x54fef0 */
  esp -= 4; W32(esp, 0x55342fu); SPILL(); f_54fef0(); if (g_unwind) return; RELOAD();
/* 55342f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553432: jmp 0x5535ec */
  goto L_5535ec;
L_553437: /* 553437: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 55343a: push 0x5aea6c */
  { uint32_t v = 0x5aea6cu; esp -= 4; W32(esp, v); }
/* 55343f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553440: call 0x4e32ec */
  esp -= 4; W32(esp, 0x553445u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 553445: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553448: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55344a: je 0x553481 */
  if (zf) goto L_553481;
L_55344c: /* 55344c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 55344f: push 0x5aea7c */
  { uint32_t v = 0x5aea7cu; esp -= 4; W32(esp, v); }
/* 553454: call 0x4e35da */
  esp -= 4; W32(esp, 0x553459u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 553459: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_553460: /* 553460: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 553466: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 553468: push 0x5aeabc */
  { uint32_t v = 0x5aeabcu; esp -= 4; W32(esp, v); }
/* 55346d: push 0x10000 */
  { uint32_t v = 0x10000u; esp -= 4; W32(esp, v); }
/* 553472: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x553474u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 553474: mov edi, eax */
  edi = eax;
/* 553476: xor eax, eax */
  eax = 0;
/* 553478: mov ecx, 0x4000 */
  ecx = 0x4000u;
/* 55347d: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 55347f: jmp 0x553460 */
  goto L_553460;
L_553481: /* 553481: xor eax, eax */
  eax = 0;
/* 553483: jmp 0x5535f1 */
  goto L_5535f1;
L_553488: /* 553488: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 55348b: push 0x5aeacc */
  { uint32_t v = 0x5aeaccu; esp -= 4; W32(esp, v); }
/* 553490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553491: call 0x4e32ec */
  esp -= 4; W32(esp, 0x553496u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 553496: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553499: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55349b: je 0x553481 */
  if (zf) goto L_553481;
L_55349d: /* 55349d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5534a0: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 5534a6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5534a8: xor esi, esi */
  esi = 0;
/* 5534aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5534ab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5534ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5534ae: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 5534b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5534b2: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x5534b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5534b5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5534b8: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 5534be: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5534c0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5534c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5534c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5534c4: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 5534c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5534c8: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 5534cb: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x5534ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5534ce: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5534d1: xor eax, eax */
  eax = 0;
/* 5534d3: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5534d5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 5534d9: mov edi, ecx */
  edi = ecx;
/* 5534db: jle 0x5534ef */
  if ((zf || sf != of)) goto L_5534ef;
L_5534dd: /* 5534dd: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
L_5534e0: /* 5534e0: mov dword ptr [ebp + eax*4 - 0xa44], edx */
  W32((uint32_t)(ebp + eax*4 + 0xfffff5bcu), edx);
/* 5534e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5534e8: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5534eb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5534ed: jl 0x5534e0 */
  if ((sf != of)) goto L_5534e0;
L_5534ef: /* 5534ef: push 0x4e2e46 */
  { uint32_t v = 0x4e2e46u; esp -= 4; W32(esp, v); }
/* 5534f4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5534f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5534f7: lea ecx, [ebp - 0xa44] */
  ecx = (uint32_t)(ebp + 0xfffff5bcu);
/* 5534fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5534fe: call 0x4e1785 */
  esp -= 4; W32(esp, 0x553503u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 553503: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 553506: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553509: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 55350b: jle 0x55353f */
  if ((zf || sf != of)) goto L_55353f;
L_55350d: /* 55350d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_553510: /* 553510: mov edx, dword ptr [ebp + esi*4 - 0xa44] */
  edx = R32((uint32_t)(ebp + esi*4 + 0xfffff5bcu));
/* 553517: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 553519: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 55351c: mov eax, esp */
  eax = esp;
/* 55351e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 553520: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 553523: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 553526: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 553529: push 0x5aead4 */
  { uint32_t v = 0x5aead4u; esp -= 4; W32(esp, v); }
/* 55352e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55352f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 553532: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x553537u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 553537: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55353a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 55353b: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 55353d: jl 0x553510 */
  if ((sf != of)) goto L_553510;
L_55353f: /* 55353f: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 553542: xor eax, eax */
  eax = 0;
/* 553544: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 553546: mov edi, ecx */
  edi = ecx;
/* 553548: jle 0x55355f */
  if ((zf || sf != of)) goto L_55355f;
L_55354a: /* 55354a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 55354d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_553550: /* 553550: mov dword ptr [ebp + eax*4 - 0xa44], edx */
  W32((uint32_t)(ebp + eax*4 + 0xfffff5bcu), edx);
/* 553557: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 553558: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 55355b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 55355d: jl 0x553550 */
  if ((sf != of)) goto L_553550;
L_55355f: /* 55355f: push 0x4e2e46 */
  { uint32_t v = 0x4e2e46u; esp -= 4; W32(esp, v); }
/* 553564: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 553566: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553567: lea eax, [ebp - 0xa44] */
  eax = (uint32_t)(ebp + 0xfffff5bcu);
/* 55356d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55356e: call 0x4e1785 */
  esp -= 4; W32(esp, 0x553573u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 553573: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553576: xor esi, esi */
  esi = 0;
/* 553578: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 55357a: jle 0x5535af */
  if ((zf || sf != of)) goto L_5535af;
L_55357c: /* 55357c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_553580: /* 553580: mov ecx, dword ptr [ebp + esi*4 - 0xa44] */
  ecx = R32((uint32_t)(ebp + esi*4 + 0xfffff5bcu));
/* 553587: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 553589: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 55358c: mov edx, esp */
  edx = esp;
/* 55358e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 553590: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 553593: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 553596: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 553599: push 0x5aeae0 */
  { uint32_t v = 0x5aeae0u; esp -= 4; W32(esp, v); }
/* 55359e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55359f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 5535a2: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5535a7u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5535a7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5535aa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5535ab: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5535ad: jl 0x553580 */
  if ((sf != of)) goto L_553580;
L_5535af: /* 5535af: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5535b2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5535b6: call 0x4e262b */
  esp -= 4; W32(esp, 0x5535bbu); SPILL(); f_4e262b(); if (g_unwind) return; RELOAD();
/* 5535bb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5535be: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 5535c5: call 0x4e262b */
  esp -= 4; W32(esp, 0x5535cau); SPILL(); f_4e262b(); if (g_unwind) return; RELOAD();
/* 5535ca: jmp 0x5535ec */
  goto L_5535ec;
L_5535cc: /* 5535cc: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 5535d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5535d3: jne 0x5535ec */
  if (!zf) goto L_5535ec;
L_5535d5: /* 5535d5: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5535d8: push 0x5ae86c */
  { uint32_t v = 0x5ae86cu; esp -= 4; W32(esp, v); }
/* 5535dd: call 0x4e35da */
  esp -= 4; W32(esp, 0x5535e2u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
L_5535e2: /* 5535e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5535e4: call 0x4e3201 */
  esp -= 4; W32(esp, 0x5535e9u); SPILL(); f_4e3201(); if (g_unwind) return; RELOAD();
/* 5535e9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5535ec: /* 5535ec: mov eax, 1 */
  eax = 0x1u;
L_5535f1: /* 5535f1: lea esp, [ebp - 0xa50] */
  esp = (uint32_t)(ebp + 0xfffff5b0u);
/* 5535f7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5535fa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 553601: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 553602: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 553603: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 553604: mov esp, ebp */
  esp = ebp;
/* 553606: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 553607: ret 8 */
  esp += 12; SPILL(); return;
}

void f_553750(void) {
  LOAD_REGS();
L_553750: /* 553750: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553752: mov ecx, 0x5b3198 */
  ecx = 0x5b3198u;
/* 553757: call 0x4e3b57 */
  esp -= 4; W32(esp, 0x55375cu); SPILL(); f_4e3b57(); if (g_unwind) return; RELOAD();
/* 55375c: ret  */
  esp += 4; SPILL(); return;
}

void f_553770(void) {
  LOAD_REGS();
L_553770: /* 553770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 553771: mov ebp, esp */
  ebp = esp;
/* 553773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 553775: push 0x559da8 */
  { uint32_t v = 0x559da8u; esp -= 4; W32(esp, v); }
/* 55377a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 553780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 553788: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 55378b: mov eax, dword ptr [0x5afefc] */
  eax = R32((uint32_t)(0x5afefcu));
/* 553790: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 553793: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 553794: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 553795: xor ebx, ebx */
  ebx = 0;
/* 553797: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 553799: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55379a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 55379d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5537a0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 5537a4: je 0x5537ab */
  if (zf) goto L_5537ab;
L_5537a6: /* 5537a6: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 5537a9: jmp 0x5537b0 */
  goto L_5537b0;
L_5537ab: /* 5537ab: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5537b0: /* 5537b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5537b1: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 5537b4: push 0x5aef44 */
  { uint32_t v = 0x5aef44u; esp -= 4; W32(esp, v); }
/* 5537b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5537ba: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x5537bfu); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 5537bf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5537c2: cmp dword ptr [ebp - 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5537c5: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5537c8: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 5537cc: jne 0x5537d3 */
  if (!zf) goto L_5537d3;
L_5537ce: /* 5537ce: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5537d3: /* 5537d3: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 5537d9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5537db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5537dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5537de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5537df: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 5537e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5537e3: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x5537e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5537e6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5537ea: xor edi, edi */
  edi = 0;
/* 5537ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_5537f0: /* 5537f0: cmp edi, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5537f3: jge 0x5538e3 */
  if ((sf == of)) goto L_5538e3;
L_5537f9: /* 5537f9: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 5537fc: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 5537ff: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 553802: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 553805: je 0x55380b */
  if (zf) goto L_55380b;
L_553807: /* 553807: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 553809: jmp 0x553810 */
  goto L_553810;
L_55380b: /* 55380b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_553810: /* 553810: mov ecx, dword ptr [0x5afefc] */
  ecx = R32((uint32_t)(0x5afefcu));
/* 553816: cmp dword ptr [ecx + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 553819: je 0x553820 */
  if (zf) goto L_553820;
L_55381b: /* 55381b: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 55381e: jmp 0x553825 */
  goto L_553825;
L_553820: /* 553820: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_553825: /* 553825: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553826: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553827: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 55382a: push 0x5aef58 */
  { uint32_t v = 0x5aef58u; esp -= 4; W32(esp, v); }
/* 55382f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553830: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x553835u); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 553835: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553838: mov esi, eax */
  esi = eax;
/* 55383a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 55383d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 55383f: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 553843: je 0x55387e */
  if (zf) goto L_55387e;
L_553845: /* 553845: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 553848: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 55384a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 55384d: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 553850: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 553853: call 0x4e4502 */
  esp -= 4; W32(esp, 0x553858u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 553858: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 55385b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 55385d: je 0x55387e */
  if (zf) goto L_55387e;
L_55385f: /* 55385f: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 553862: je 0x553868 */
  if (zf) goto L_553868;
L_553864: /* 553864: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 553866: jmp 0x55386d */
  goto L_55386d;
L_553868: /* 553868: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_55386d: /* 55386d: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 553870: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 553873: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 553874: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 553875: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553876: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x55387bu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 55387b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_55387e: /* 55387e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 553880: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 553883: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 553887: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 55388a: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 55388d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x553892u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 553892: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 553895: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 553899: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x55389eu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 55389e: cmp dword ptr [ebp - 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5538a1: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5538a4: jne 0x5538ab */
  if (!zf) goto L_5538ab;
L_5538a6: /* 5538a6: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5538ab: /* 5538ab: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 5538b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5538b2: push 0x5aef64 */
  { uint32_t v = 0x5aef64u; esp -= 4; W32(esp, v); }
/* 5538b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5538b8: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5538bdu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5538bd: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 5538c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5538c3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5538c5: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5538c8: jne 0x5538cf */
  if (!zf) goto L_5538cf;
L_5538ca: /* 5538ca: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5538cf: /* 5538cf: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 5538d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5538d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5538d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5538d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5538da: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x5538ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5538dd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5538de: jmp 0x5537f0 */
  goto L_5537f0;
L_5538e3: /* 5538e3: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 5538e6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 5538ea: call 0x4e262b */
  esp -= 4; W32(esp, 0x5538efu); SPILL(); f_4e262b(); if (g_unwind) return; RELOAD();
/* 5538ef: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5538f1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5538f4: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 5538f8: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 5538fb: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 5538fe: call 0x4e4502 */
  esp -= 4; W32(esp, 0x553903u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 553903: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 553906: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 55390a: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x55390fu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 55390f: mov ecx, dword ptr [0x5afefc] */
  ecx = R32((uint32_t)(0x5afefcu));
/* 553915: push 0x5aefa4 */
  { uint32_t v = 0x5aefa4u; esp -= 4; W32(esp, v); }
/* 55391a: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 55391d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 553920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553921: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 553924: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 553928: call 0x4e2c48 */
  esp -= 4; W32(esp, 0x55392du); SPILL(); f_4e2c48(); if (g_unwind) return; RELOAD();
/* 55392d: mov ecx, dword ptr [0x5afefc] */
  ecx = R32((uint32_t)(0x5afefcu));
/* 553933: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 553936: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553937: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 55393a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55393b: mov ecx, eax */
  ecx = eax;
/* 55393d: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 553941: call 0x4e4282 */
  esp -= 4; W32(esp, 0x553946u); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 553946: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 553949: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 55394d: je 0x553953 */
  if (zf) goto L_553953;
L_55394f: /* 55394f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 553951: jmp 0x553958 */
  goto L_553958;
L_553953: /* 553953: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_553958: /* 553958: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 55395e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 553960: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 553961: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 553963: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553964: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 553967: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553968: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x55396bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 55396b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 55396d: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 553970: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 553974: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 553977: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 55397a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x55397fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 55397f: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 553982: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 553986: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x55398bu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 55398b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 55398d: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 553990: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 553994: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 553997: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 55399a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x55399fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 55399f: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 5539a2: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 5539a6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5539abu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5539ab: mov ecx, dword ptr [0x5afefc] */
  ecx = R32((uint32_t)(0x5afefcu));
/* 5539b1: cmp dword ptr [ecx + 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x2cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5539b4: je 0x553a91 */
  if (zf) goto L_553a91;
L_5539ba: /* 5539ba: xor esi, esi */
  esi = 0;
/* 5539bc: mov bl, 0x11 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x11u) & 0xffu);
/* 5539be: mov edi, edi */
  edi = edi;
L_5539c0: /* 5539c0: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5539c3: jge 0x553a91 */
  if ((sf == of)) goto L_553a91;
L_5539c9: /* 5539c9: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5539cc: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 5539cf: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 5539d2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 5539d5: xor edi, edi */
  edi = 0;
/* 5539d7: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5539d9: je 0x5539df */
  if (zf) goto L_5539df;
L_5539db: /* 5539db: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 5539dd: jmp 0x5539e4 */
  goto L_5539e4;
L_5539df: /* 5539df: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5539e4: /* 5539e4: cmp dword ptr [ecx + 0x40], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x40u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5539e7: je 0x5539ee */
  if (zf) goto L_5539ee;
L_5539e9: /* 5539e9: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 5539ec: jmp 0x5539f3 */
  goto L_5539f3;
L_5539ee: /* 5539ee: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_5539f3: /* 5539f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5539f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5539f5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5539f8: push 0x5aefa8 */
  { uint32_t v = 0x5aefa8u; esp -= 4; W32(esp, v); }
/* 5539fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5539fe: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x553a03u); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 553a03: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553a06: cmp dword ptr [ebp - 0x2c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 553a09: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 553a0c: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 553a10: jne 0x553a17 */
  if (!zf) goto L_553a17;
L_553a12: /* 553a12: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_553a17: /* 553a17: call 0x550db0 */
  esp -= 4; W32(esp, 0x553a1cu); SPILL(); f_550db0(); if (g_unwind) return; RELOAD();
/* 553a1c: mov edx, dword ptr [0x5afefc] */
  edx = R32((uint32_t)(0x5afefcu));
/* 553a22: cmp eax, dword ptr [edx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 553a25: jle 0x553a66 */
  if ((zf || sf != of)) goto L_553a66;
L_553a27: /* 553a27: cmp dword ptr [ebp - 0x2c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 553a2a: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 553a2d: jne 0x553a34 */
  if (!zf) goto L_553a34;
L_553a2f: /* 553a2f: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_553a34: /* 553a34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553a35: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 553a3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553a3b: push 0x5aefb8 */
  { uint32_t v = 0x5aefb8u; esp -= 4; W32(esp, v); }
/* 553a40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553a41: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x553a46u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 553a46: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 553a49: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553a4c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 553a4e: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 553a51: jne 0x553a58 */
  if (!zf) goto L_553a58;
L_553a53: /* 553a53: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_553a58: /* 553a58: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 553a5e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 553a60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 553a61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 553a62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553a63: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x553a66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_553a66: /* 553a66: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 553a68: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 553a6b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 553a6e: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 553a71: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 553a74: call 0x4e4502 */
  esp -= 4; W32(esp, 0x553a79u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 553a79: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 553a7c: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 553a80: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x553a85u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 553a85: mov ecx, dword ptr [0x5afefc] */
  ecx = R32((uint32_t)(0x5afefcu));
/* 553a8b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 553a8c: jmp 0x5539c0 */
  goto L_5539c0;
L_553a91: /* 553a91: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 553a94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553a95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553a97: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 553a9a: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 553a9e: call 0x4e2a63 */
  esp -= 4; W32(esp, 0x553aa3u); SPILL(); f_4e2a63(); if (g_unwind) return; RELOAD();
/* 553aa3: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 553aa6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 553aa8: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 553aac: je 0x553aba */
  if (zf) goto L_553aba;
L_553aae: /* 553aae: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 553ab4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 553ab6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553ab7: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x553abau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_553aba: /* 553aba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 553abd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 553abe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 553abf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 553ac6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 553ac7: mov esp, ebp */
  esp = ebp;
/* 553ac9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 553aca: ret  */
  esp += 4; SPILL(); return;
}

void f_553acb(void) {
  LOAD_REGS();
L_553acb: /* 553acb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 553ace: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 553ad3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 553ad6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553ad7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 553ada: call 0x554df6 */
  esp -= 4; W32(esp, 0x553adfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_553adf(); return;
}

void f_553adf(void) {
  LOAD_REGS();
L_553adf: /* 553adf: push 0x57050c */
  { uint32_t v = 0x57050cu; esp -= 4; W32(esp, v); }
/* 553ae4: push 0x5af020 */
  { uint32_t v = 0x5af020u; esp -= 4; W32(esp, v); }
/* 553ae9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x553aeeu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 553aee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553af1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553af3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553af5: call 0x554df6 */
  esp -= 4; W32(esp, 0x553afau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_553afa(); return;
}

void f_553afa(void) {
  LOAD_REGS();
L_553afa: /* 553afa: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 553afd: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 553b02: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 553b05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553b06: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 553b09: call 0x554df6 */
  esp -= 4; W32(esp, 0x553b0eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_553b0e(); return;
}

void f_553b0e(void) {
  LOAD_REGS();
L_553b0e: /* 553b0e: push 0x5704f0 */
  { uint32_t v = 0x5704f0u; esp -= 4; W32(esp, v); }
/* 553b13: push 0x5aef9c */
  { uint32_t v = 0x5aef9cu; esp -= 4; W32(esp, v); }
/* 553b18: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x553b1du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 553b1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553b20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553b22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553b24: call 0x554df6 */
  esp -= 4; W32(esp, 0x553b29u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_553b29(); return;
}

void f_553b29(void) {
  LOAD_REGS();
L_553b29: /* 553b29: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 553b2c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 553b31: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 553b34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 553b35: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 553b38: call 0x554df6 */
  esp -= 4; W32(esp, 0x553b3du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_553b3d(); return;
}

void f_553b3d(void) {
  LOAD_REGS();
L_553b3d: /* 553b3d: push 0x5704c4 */
  { uint32_t v = 0x5704c4u; esp -= 4; W32(esp, v); }
/* 553b42: push 0x5af028 */
  { uint32_t v = 0x5af028u; esp -= 4; W32(esp, v); }
/* 553b47: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x553b4cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 553b4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553b4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553b51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553b53: call 0x554df6 */
  esp -= 4; W32(esp, 0x553b58u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_553b58: guest_badaddr(0x553b58); return;
}

void f_553c60(void) {
  LOAD_REGS();
L_553c60: /* 553c60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 553c61: mov ebp, esp */
  ebp = esp;
/* 553c63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 553c65: push 0x559df1 */
  { uint32_t v = 0x559df1u; esp -= 4; W32(esp, v); }
/* 553c6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 553c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553c71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 553c78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553c79: sub esp, 0x3c0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3c0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 553c7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 553c80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 553c81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 553c82: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 553c85: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 553c8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553c8e: call 0x4e280b */
  esp -= 4; W32(esp, 0x553c93u); SPILL(); f_4e280b(); if (g_unwind) return; RELOAD();
/* 553c93: mov dword ptr [ebp - 0x354], eax */
  W32((uint32_t)(ebp + 0xfffffcacu), eax);
/* 553c99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553c9a: mov ecx, esp */
  ecx = esp;
/* 553c9c: mov dword ptr [ebp - 0x2f0], esp */
  W32((uint32_t)(ebp + 0xfffffd10u), esp);
/* 553ca2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553ca4: call 0x4e2ee1 */
  esp -= 4; W32(esp, 0x553ca9u); SPILL(); f_4e2ee1(); if (g_unwind) return; RELOAD();
/* 553ca9: mov eax, dword ptr [ebp - 0x354] */
  eax = R32((uint32_t)(ebp + 0xfffffcacu));
/* 553caf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553cb0: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 553cb2: call 0x4e428c */
  esp -= 4; W32(esp, 0x553cb7u); SPILL(); f_4e428c(); if (g_unwind) return; RELOAD();
/* 553cb7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553cba: mov dword ptr [ebp - 0x358], eax */
  W32((uint32_t)(ebp + 0xfffffca8u), eax);
/* 553cc0: mov ecx, dword ptr [ebp - 0x358] */
  ecx = R32((uint32_t)(ebp + 0xfffffca8u));
/* 553cc6: mov dword ptr [ebp - 0x2ec], ecx */
  W32((uint32_t)(ebp + 0xfffffd14u), ecx);
/* 553ccc: cmp dword ptr [ebp - 0x2ec], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 553cd3: je 0x553cf4 */
  if (zf) goto L_553cf4;
L_553cd5: /* 553cd5: mov ecx, dword ptr [ebp - 0x2ec] */
  ecx = R32((uint32_t)(ebp + 0xfffffd14u));
/* 553cdb: call 0x4e1ad2 */
  esp -= 4; W32(esp, 0x553ce0u); SPILL(); f_4e1ad2(); if (g_unwind) return; RELOAD();
/* 553ce0: mov dword ptr [ebp - 0x35c], eax */
  W32((uint32_t)(ebp + 0xfffffca4u), eax);
/* 553ce6: mov edx, dword ptr [ebp - 0x35c] */
  edx = R32((uint32_t)(ebp + 0xfffffca4u));
/* 553cec: mov dword ptr [ebp - 0x360], edx */
  W32((uint32_t)(ebp + 0xfffffca0u), edx);
/* 553cf2: jmp 0x553cfe */
  goto L_553cfe;
L_553cf4: /* 553cf4: mov dword ptr [ebp - 0x360], 0 */
  W32((uint32_t)(ebp + 0xfffffca0u), 0x0u);
L_553cfe: /* 553cfe: mov eax, dword ptr [ebp - 0x360] */
  eax = R32((uint32_t)(ebp + 0xfffffca0u));
/* 553d04: mov dword ptr [0x5afefc], eax */
  W32((uint32_t)(0x5afefcu), eax);
/* 553d09: mov ecx, dword ptr [0x5afefc] */
  ecx = R32((uint32_t)(0x5afefcu));
/* 553d0f: call 0x4e3ef4 */
  esp -= 4; W32(esp, 0x553d14u); SPILL(); f_4e3ef4(); if (g_unwind) return; RELOAD();
/* 553d14: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 553d1b: jmp 0x553d26 */
  goto L_553d26;
L_553d1d: /* 553d1d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 553d20: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 553d23: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_553d26: /* 553d26: mov edx, dword ptr [0x5afefc] */
  edx = R32((uint32_t)(0x5afefcu));
/* 553d2c: mov eax, dword ptr [edx + 0x64] */
  eax = R32((uint32_t)(edx + 0x64u));
/* 553d2f: mov dword ptr [ebp - 0x32c], eax */
  W32((uint32_t)(ebp + 0xfffffcd4u), eax);
/* 553d35: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 553d38: cmp ecx, dword ptr [ebp - 0x32c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffcd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 553d3e: jge 0x553d60 */
  if ((sf == of)) goto L_553d60;
L_553d40: /* 553d40: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 553d45: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 553d48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 553d49: mov ecx, dword ptr [0x5afefc] */
  ecx = R32((uint32_t)(0x5afefcu));
/* 553d4f: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 553d52: call 0x4e36d9 */
  esp -= 4; W32(esp, 0x553d57u); SPILL(); f_4e36d9(); if (g_unwind) return; RELOAD();
/* 553d57: mov ecx, eax */
  ecx = eax;
/* 553d59: call 0x4e2103 */
  esp -= 4; W32(esp, 0x553d5eu); SPILL(); f_4e2103(); if (g_unwind) return; RELOAD();
/* 553d5e: jmp 0x553d1d */
  goto L_553d1d;
L_553d60: /* 553d60: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 553d62: push 0x4e2928 */
  { uint32_t v = 0x4e2928u; esp -= 4; W32(esp, v); }
/* 553d67: call dword ptr [0x6ac4d8] */
  esp -= 4; W32(esp, 0x553d6du); SPILL(); call_ind(R32(0x6ac4d8u)); if (g_unwind) return; /* KERNEL32!SetConsoleCtrlHandler */ RELOAD();
/* 553d6d: cmp dword ptr [0x5b2160], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5b2160u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 553d74: je 0x553d83 */
  if (zf) goto L_553d83;
L_553d76: /* 553d76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553d78: call dword ptr [0x6ac678] */
  esp -= 4; W32(esp, 0x553d7eu); SPILL(); f_428360(); if (g_unwind) return; /* MSVCR70!srand */ RELOAD();
/* 553d7e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553d81: jmp 0x553d98 */
  goto L_553d98;
L_553d83: /* 553d83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553d85: call dword ptr [0x6ac618] */
  esp -= 4; W32(esp, 0x553d8bu); SPILL(); f_43166a(); if (g_unwind) return; /* MSVCR70!time */ RELOAD();
/* 553d8b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553d8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553d8f: call dword ptr [0x6ac678] */
  esp -= 4; W32(esp, 0x553d95u); SPILL(); f_428360(); if (g_unwind) return; /* MSVCR70!srand */ RELOAD();
/* 553d95: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_553d98: /* 553d98: call 0x4e2419 */
  esp -= 4; W32(esp, 0x553d9du); SPILL(); f_4e2419(); if (g_unwind) return; RELOAD();
/* 553d9d: mov dword ptr [ebp - 0x364], eax */
  W32((uint32_t)(ebp + 0xfffffc9cu), eax);
/* 553da3: mov eax, dword ptr [ebp - 0x364] */
  eax = R32((uint32_t)(ebp + 0xfffffc9cu));
/* 553da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553daa: push 0x5af480 */
  { uint32_t v = 0x5af480u; esp -= 4; W32(esp, v); }
/* 553daf: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 553db4: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 553dba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553dbb: call 0x4e30df */
  esp -= 4; W32(esp, 0x553dc0u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 553dc0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553dc3: call 0x4e25b8 */
  esp -= 4; W32(esp, 0x553dc8u); SPILL(); f_4e25b8(); if (g_unwind) return; RELOAD();
/* 553dc8: mov dword ptr [ebp - 0x368], eax */
  W32((uint32_t)(ebp + 0xfffffc98u), eax);
/* 553dce: mov edx, dword ptr [ebp - 0x368] */
  edx = R32((uint32_t)(ebp + 0xfffffc98u));
/* 553dd4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 553dd5: push 0x5af49c */
  { uint32_t v = 0x5af49cu; esp -= 4; W32(esp, v); }
/* 553dda: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 553ddf: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 553de4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553de5: call 0x4e30df */
  esp -= 4; W32(esp, 0x553deau); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 553dea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553ded: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 553df1: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 553df4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553df5: call dword ptr [0x6ac4dc] */
  esp -= 4; W32(esp, 0x553dfbu); SPILL(); call_ind(R32(0x6ac4dcu)); if (g_unwind) return; /* KERNEL32!GetSystemInfo */ RELOAD();
/* 553dfb: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 553dfe: mov dword ptr [0x5a0f38], edx */
  W32((uint32_t)(0x5a0f38u), edx);
/* 553e04: mov eax, dword ptr [0x5a0f38] */
  eax = R32((uint32_t)(0x5a0f38u));
/* 553e09: sub eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 553e0c: mov ecx, dword ptr [0x5a0f38] */
  ecx = R32((uint32_t)(0x5a0f38u));
/* 553e12: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 553e14: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 553e16: je 0x553e2f */
  if (zf) goto L_553e2f;
L_553e18: /* 553e18: push 0x5dc */
  { uint32_t v = 0x5dcu; esp -= 4; W32(esp, v); }
/* 553e1d: push 0x5af4b0 */
  { uint32_t v = 0x5af4b0u; esp -= 4; W32(esp, v); }
/* 553e22: push 0x5af4c0 */
  { uint32_t v = 0x5af4c0u; esp -= 4; W32(esp, v); }
/* 553e27: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x553e2cu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 553e2c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_553e2f: /* 553e2f: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 553e32: mov dword ptr [0x5a0f3c], edx */
  W32((uint32_t)(0x5a0f3cu), edx);
/* 553e38: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 553e3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553e3c: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 553e3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553e40: push 0x5af4e0 */
  { uint32_t v = 0x5af4e0u; esp -= 4; W32(esp, v); }
/* 553e45: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 553e4a: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 553e50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 553e51: call 0x4e30df */
  esp -= 4; W32(esp, 0x553e56u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 553e56: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553e59: cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 553e5d: jbe 0x553e6b */
  if ((cf | zf)) goto L_553e6b;
L_553e5f: /* 553e5f: mov dword ptr [ebp - 0x36c], 0x5af520 */
  W32((uint32_t)(ebp + 0xfffffc94u), 0x5af520u);
/* 553e69: jmp 0x553e75 */
  goto L_553e75;
L_553e6b: /* 553e6b: mov dword ptr [ebp - 0x36c], 0x6a9e68 */
  W32((uint32_t)(ebp + 0xfffffc94u), 0x6a9e68u);
L_553e75: /* 553e75: mov eax, dword ptr [ebp - 0x36c] */
  eax = R32((uint32_t)(ebp + 0xfffffc94u));
/* 553e7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553e7c: push 0x5af52c */
  { uint32_t v = 0x5af52cu; esp -= 4; W32(esp, v); }
/* 553e81: push 0x5a1f58 */
  { uint32_t v = 0x5a1f58u; esp -= 4; W32(esp, v); }
/* 553e86: call 0x4e4183 */
  esp -= 4; W32(esp, 0x553e8bu); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 553e8b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553e8e: jmp 0x553ec5 */
  goto L_553ec5;
L_553ec5: /* 553ec5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 553ecc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 553ed0: mov dword ptr [ebp - 0x26c], 0 */
  W32((uint32_t)(ebp + 0xfffffd94u), 0x0u);
/* 553eda: mov dword ptr [ebp - 0x264], 0 */
  W32((uint32_t)(ebp + 0xfffffd9cu), 0x0u);
/* 553ee4: mov dword ptr [ebp - 0x268], 0 */
  W32((uint32_t)(ebp + 0xfffffd98u), 0x0u);
/* 553eee: mov dword ptr [ebp - 0x270], 0 */
  W32((uint32_t)(ebp + 0xfffffd90u), 0x0u);
/* 553ef8: lea eax, [ebp - 0x270] */
  eax = (uint32_t)(ebp + 0xfffffd90u);
/* 553efe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553eff: lea ecx, [ebp - 0x268] */
  ecx = (uint32_t)(ebp + 0xfffffd98u);
/* 553f05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553f06: lea edx, [ebp - 0x264] */
  edx = (uint32_t)(ebp + 0xfffffd9cu);
/* 553f0c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 553f0d: lea eax, [ebp - 0x26c] */
  eax = (uint32_t)(ebp + 0xfffffd94u);
/* 553f13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553f14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553f16: call 0x551b30 */
  esp -= 4; W32(esp, 0x553f1bu); SPILL(); f_551b30(); if (g_unwind) return; RELOAD();
/* 553f1b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553f1e: mov cx, word ptr [0x6a9e6c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x6a9e6cu))) & 0xffffu);
/* 553f25: mov word ptr [ebp - 0x240], cx */
  W16((uint32_t)(ebp + 0xfffffdc0u), (ecx & 0xffffu));
/* 553f2c: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 553f31: xor eax, eax */
  eax = 0;
/* 553f33: lea edi, [ebp - 0x23e] */
  edi = (uint32_t)(ebp + 0xfffffdc2u);
/* 553f39: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 553f3b: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 553f3d: movsx dx, byte ptr [ebp - 0x264] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xfffffd9cu)))) & 0xffffu);
/* 553f45: mov word ptr [ebp - 0x260], dx */
  W16((uint32_t)(ebp + 0xfffffda0u), (edx & 0xffffu));
/* 553f4c: mov eax, dword ptr [ebp - 0x264] */
  eax = R32((uint32_t)(ebp + 0xfffffd9cu));
/* 553f52: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 553f55: movsx cx, al */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((eax & 0xffu))) & 0xffffu);
/* 553f59: mov word ptr [ebp - 0x25e], cx */
  W16((uint32_t)(ebp + 0xfffffda2u), (ecx & 0xffffu));
/* 553f60: mov edx, dword ptr [ebp - 0x264] */
  edx = R32((uint32_t)(ebp + 0xfffffd9cu));
/* 553f66: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 553f69: movsx ax, dl */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((edx & 0xffu))) & 0xffffu);
/* 553f6d: mov word ptr [ebp - 0x25c], ax */
  W16((uint32_t)(ebp + 0xfffffda4u), (eax & 0xffffu));
/* 553f74: mov ecx, dword ptr [ebp - 0x264] */
  ecx = R32((uint32_t)(ebp + 0xfffffd9cu));
/* 553f7a: shr ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 553f7d: movsx dx, cl */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((ecx & 0xffu))) & 0xffffu);
/* 553f81: mov word ptr [ebp - 0x25a], dx */
  W16((uint32_t)(ebp + 0xfffffda6u), (edx & 0xffffu));
/* 553f88: movsx ax, byte ptr [ebp - 0x270] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xfffffd90u)))) & 0xffffu);
/* 553f90: mov word ptr [ebp - 0x258], ax */
  W16((uint32_t)(ebp + 0xfffffda8u), (eax & 0xffffu));
/* 553f97: mov ecx, dword ptr [ebp - 0x270] */
  ecx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 553f9d: shr ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 553fa0: movsx dx, cl */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((ecx & 0xffu))) & 0xffffu);
/* 553fa4: mov word ptr [ebp - 0x256], dx */
  W16((uint32_t)(ebp + 0xfffffdaau), (edx & 0xffffu));
/* 553fab: mov eax, dword ptr [ebp - 0x270] */
  eax = R32((uint32_t)(ebp + 0xfffffd90u));
/* 553fb1: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 553fb4: movsx cx, al */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((eax & 0xffu))) & 0xffffu);
/* 553fb8: mov word ptr [ebp - 0x254], cx */
  W16((uint32_t)(ebp + 0xfffffdacu), (ecx & 0xffffu));
/* 553fbf: mov edx, dword ptr [ebp - 0x270] */
  edx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 553fc5: shr edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 553fc8: movsx ax, dl */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((edx & 0xffu))) & 0xffffu);
/* 553fcc: mov word ptr [ebp - 0x252], ax */
  W16((uint32_t)(ebp + 0xfffffdaeu), (eax & 0xffffu));
/* 553fd3: movsx cx, byte ptr [ebp - 0x268] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xfffffd98u)))) & 0xffffu);
/* 553fdb: mov word ptr [ebp - 0x250], cx */
  W16((uint32_t)(ebp + 0xfffffdb0u), (ecx & 0xffffu));
/* 553fe2: mov edx, dword ptr [ebp - 0x268] */
  edx = R32((uint32_t)(ebp + 0xfffffd98u));
/* 553fe8: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 553feb: movsx ax, dl */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((edx & 0xffu))) & 0xffffu);
/* 553fef: mov word ptr [ebp - 0x24e], ax */
  W16((uint32_t)(ebp + 0xfffffdb2u), (eax & 0xffffu));
/* 553ff6: mov ecx, dword ptr [ebp - 0x268] */
  ecx = R32((uint32_t)(ebp + 0xfffffd98u));
/* 553ffc: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 553fff: movsx dx, cl */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((ecx & 0xffu))) & 0xffffu);
/* 554003: mov word ptr [ebp - 0x24c], dx */
  W16((uint32_t)(ebp + 0xfffffdb4u), (edx & 0xffffu));
/* 55400a: mov eax, dword ptr [ebp - 0x268] */
  eax = R32((uint32_t)(ebp + 0xfffffd98u));
/* 554010: shr eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 554013: movsx cx, al */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((eax & 0xffu))) & 0xffffu);
/* 554017: mov word ptr [ebp - 0x24a], cx */
  W16((uint32_t)(ebp + 0xfffffdb6u), (ecx & 0xffffu));
/* 55401e: mov word ptr [ebp - 0x248], 0 */
  W16((uint32_t)(ebp + 0xfffffdb8u), 0x0u);
/* 554027: lea edx, [ebp - 0x270] */
  edx = (uint32_t)(ebp + 0xfffffd90u);
/* 55402d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55402e: lea eax, [ebp - 0x268] */
  eax = (uint32_t)(ebp + 0xfffffd98u);
/* 554034: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554035: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 55403b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55403c: lea edx, [ebp - 0x26c] */
  edx = (uint32_t)(ebp + 0xfffffd94u);
/* 554042: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554043: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 554045: call 0x551b30 */
  esp -= 4; W32(esp, 0x55404au); SPILL(); f_551b30(); if (g_unwind) return; RELOAD();
/* 55404a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55404d: mov eax, dword ptr [ebp - 0x26c] */
  eax = R32((uint32_t)(ebp + 0xfffffd94u));
/* 554053: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 554056: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 554059: mov dword ptr [ebp - 0x370], eax */
  W32((uint32_t)(ebp + 0xfffffc90u), eax);
/* 55405f: mov ecx, dword ptr [ebp - 0x370] */
  ecx = R32((uint32_t)(ebp + 0xfffffc90u));
/* 554065: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 554068: mov dword ptr [ebp - 0x370], ecx */
  W32((uint32_t)(ebp + 0xfffffc90u), ecx);
/* 55406e: cmp dword ptr [ebp - 0x370], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffc90u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 554075: ja 0x5540b4 */
  if ((!cf && !zf)) goto L_5540b4;
L_554077: /* 554077: mov edx, dword ptr [ebp - 0x370] */
  edx = R32((uint32_t)(ebp + 0xfffffc90u));
/* 55407d: jmp dword ptr [edx*4 + 0x5548ba] */
  switch (R32((uint32_t)(edx*4 + 0x5548bau))) {
    case 0x554084u: goto L_554084;
    case 0x554090u: goto L_554090;
    case 0x55409cu: goto L_55409c;
    case 0x5540a8u: goto L_5540a8;
    default: guest_badjump(0x55407d, R32((uint32_t)(edx*4 + 0x5548bau))); return;
  }
L_554084: /* 554084: mov dword ptr [ebp - 0x244], 0x5af54c */
  W32((uint32_t)(ebp + 0xfffffdbcu), 0x5af54cu);
/* 55408e: jmp 0x5540be */
  goto L_5540be;
L_554090: /* 554090: mov dword ptr [ebp - 0x244], 0x5af574 */
  W32((uint32_t)(ebp + 0xfffffdbcu), 0x5af574u);
/* 55409a: jmp 0x5540be */
  goto L_5540be;
L_55409c: /* 55409c: mov dword ptr [ebp - 0x244], 0x5af5a4 */
  W32((uint32_t)(ebp + 0xfffffdbcu), 0x5af5a4u);
/* 5540a6: jmp 0x5540be */
  goto L_5540be;
L_5540a8: /* 5540a8: mov dword ptr [ebp - 0x244], 0x5af5dc */
  W32((uint32_t)(ebp + 0xfffffdbcu), 0x5af5dcu);
/* 5540b2: jmp 0x5540be */
  goto L_5540be;
L_5540b4: /* 5540b4: mov dword ptr [ebp - 0x244], 0x5af604 */
  W32((uint32_t)(ebp + 0xfffffdbcu), 0x5af604u);
L_5540be: /* 5540be: mov eax, dword ptr [ebp - 0x270] */
  eax = R32((uint32_t)(ebp + 0xfffffd90u));
/* 5540c4: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5540c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5540cb: je 0x5540e1 */
  if (zf) goto L_5540e1;
L_5540cd: /* 5540cd: push 0x5af628 */
  { uint32_t v = 0x5af628u; esp -= 4; W32(esp, v); }
/* 5540d2: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 5540d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5540d9: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5540deu); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 5540de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5540e1: /* 5540e1: mov edx, dword ptr [ebp - 0x270] */
  edx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 5540e7: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5540ea: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5540ec: je 0x554102 */
  if (zf) goto L_554102;
L_5540ee: /* 5540ee: push 0x5af634 */
  { uint32_t v = 0x5af634u; esp -= 4; W32(esp, v); }
/* 5540f3: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 5540f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5540fa: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5540ffu); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 5540ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_554102: /* 554102: mov ecx, dword ptr [ebp - 0x270] */
  ecx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 554108: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 55410b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55410d: je 0x554123 */
  if (zf) goto L_554123;
L_55410f: /* 55410f: push 0x5af640 */
  { uint32_t v = 0x5af640u; esp -= 4; W32(esp, v); }
/* 554114: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* 55411a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55411b: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554120u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 554120: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_554123: /* 554123: mov eax, dword ptr [ebp - 0x270] */
  eax = R32((uint32_t)(ebp + 0xfffffd90u));
/* 554129: and eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 55412c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55412e: je 0x554144 */
  if (zf) goto L_554144;
L_554130: /* 554130: push 0x5af650 */
  { uint32_t v = 0x5af650u; esp -= 4; W32(esp, v); }
/* 554135: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 55413b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55413c: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554141u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 554141: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_554144: /* 554144: mov edx, dword ptr [ebp - 0x270] */
  edx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 55414a: and edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 554150: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 554152: je 0x554196 */
  if (zf) goto L_554196;
L_554154: /* 554154: call 0x4e2987 */
  esp -= 4; W32(esp, 0x554159u); SPILL(); f_4e2987(); if (g_unwind) return; RELOAD();
/* 554159: mov dword ptr [ebp - 0x374], eax */
  W32((uint32_t)(ebp + 0xfffffc8cu), eax);
/* 55415f: push 0x5af65c */
  { uint32_t v = 0x5af65cu; esp -= 4; W32(esp, v); }
/* 554164: mov eax, dword ptr [ebp - 0x374] */
  eax = R32((uint32_t)(ebp + 0xfffffc8cu));
/* 55416a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55416b: call 0x4e3387 */
  esp -= 4; W32(esp, 0x554170u); SPILL(); f_4e3387(); if (g_unwind) return; RELOAD();
/* 554170: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554173: mov dword ptr [ebp - 0x378], eax */
  W32((uint32_t)(ebp + 0xfffffc88u), eax);
/* 554179: cmp dword ptr [ebp - 0x378], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffc88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 554180: jne 0x554196 */
  if (!zf) goto L_554196;
L_554182: /* 554182: push 0x5af668 */
  { uint32_t v = 0x5af668u; esp -= 4; W32(esp, v); }
/* 554187: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 55418d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55418e: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554193u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 554193: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_554196: /* 554196: mov edx, dword ptr [ebp - 0x270] */
  edx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 55419c: and edx, 0x2000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5541a2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5541a4: je 0x5541f2 */
  if (zf) goto L_5541f2;
L_5541a6: /* 5541a6: call 0x4e2987 */
  esp -= 4; W32(esp, 0x5541abu); SPILL(); f_4e2987(); if (g_unwind) return; RELOAD();
/* 5541ab: mov dword ptr [ebp - 0x37c], eax */
  W32((uint32_t)(ebp + 0xfffffc84u), eax);
/* 5541b1: push 0x5af674 */
  { uint32_t v = 0x5af674u; esp -= 4; W32(esp, v); }
/* 5541b6: mov eax, dword ptr [ebp - 0x37c] */
  eax = R32((uint32_t)(ebp + 0xfffffc84u));
/* 5541bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5541bd: call 0x4e3387 */
  esp -= 4; W32(esp, 0x5541c2u); SPILL(); f_4e3387(); if (g_unwind) return; RELOAD();
/* 5541c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5541c5: mov dword ptr [ebp - 0x380], eax */
  W32((uint32_t)(ebp + 0xfffffc80u), eax);
/* 5541cb: cmp dword ptr [ebp - 0x380], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffc80u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5541d2: jne 0x5541f2 */
  if (!zf) goto L_5541f2;
L_5541d4: /* 5541d4: push 0x5af680 */
  { uint32_t v = 0x5af680u; esp -= 4; W32(esp, v); }
/* 5541d9: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 5541df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5541e0: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5541e5u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 5541e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5541e8: mov dword ptr [0x5b3188], 1 */
  W32((uint32_t)(0x5b3188u), 0x1u);
L_5541f2: /* 5541f2: lea edx, [ebp - 0x260] */
  edx = (uint32_t)(ebp + 0xfffffda0u);
/* 5541f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5541f9: mov eax, dword ptr [ebp - 0x244] */
  eax = R32((uint32_t)(ebp + 0xfffffdbcu));
/* 5541ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554200: push 0x5af68c */
  { uint32_t v = 0x5af68cu; esp -= 4; W32(esp, v); }
/* 554205: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 55420a: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 554210: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 554211: call 0x4e30df */
  esp -= 4; W32(esp, 0x554216u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 554216: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554219: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* 55421f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554220: push 0x5af6b8 */
  { uint32_t v = 0x5af6b8u; esp -= 4; W32(esp, v); }
/* 554225: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 55422a: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 55422f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554230: call 0x4e30df */
  esp -= 4; W32(esp, 0x554235u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 554235: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554238: mov ecx, dword ptr [ebp - 0x244] */
  ecx = R32((uint32_t)(ebp + 0xfffffdbcu));
/* 55423e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55423f: lea edx, [ebp - 0x260] */
  edx = (uint32_t)(ebp + 0xfffffda0u);
/* 554245: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554246: push 0x5af6d8 */
  { uint32_t v = 0x5af6d8u; esp -= 4; W32(esp, v); }
/* 55424b: push 0x5a1f58 */
  { uint32_t v = 0x5a1f58u; esp -= 4; W32(esp, v); }
/* 554250: call 0x4e4183 */
  esp -= 4; W32(esp, 0x554255u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 554255: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554258: jmp 0x55428a */
  goto L_55428a;
L_55428a: /* 55428a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 554291: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 554295: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 554299: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55429b: call dword ptr [0x6ac7cc] */
  esp -= 4; W32(esp, 0x5542a1u); SPILL(); call_ind(R32(0x6ac7ccu)); if (g_unwind) return; /* WINMM!timeBeginPeriod */ RELOAD();
/* 5542a1: mov dword ptr [0x5a0f28], 0 */
  W32((uint32_t)(0x5a0f28u), 0x0u);
/* 5542ab: mov dword ptr [0x5a0f2c], 0x3ff00000 */
  W32((uint32_t)(0x5a0f2cu), 0x3ff00000u);
/* 5542b5: mov dword ptr [ebp - 0x278], 0 */
  W32((uint32_t)(ebp + 0xfffffd88u), 0x0u);
/* 5542bf: jmp 0x5542d0 */
  goto L_5542d0;
L_5542c1: /* 5542c1: mov ecx, dword ptr [ebp - 0x278] */
  ecx = R32((uint32_t)(ebp + 0xfffffd88u));
/* 5542c7: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5542ca: mov dword ptr [ebp - 0x278], ecx */
  W32((uint32_t)(ebp + 0xfffffd88u), ecx);
L_5542d0: /* 5542d0: cmp dword ptr [ebp - 0x278], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd88u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5542d7: jge 0x55446b */
  if ((sf == of)) goto L_55446b;
L_5542dd: /* 5542dd: mov dword ptr [ebp - 0x280], 0 */
  W32((uint32_t)(ebp + 0xfffffd80u), 0x0u);
/* 5542e7: mov dword ptr [ebp - 0x27c], 0 */
  W32((uint32_t)(ebp + 0xfffffd84u), 0x0u);
/* 5542f1: mov dword ptr [ebp - 0x2a4], 0 */
  W32((uint32_t)(ebp + 0xfffffd5cu), 0x0u);
/* 5542fb: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 5542fd: mov dword ptr [ebp - 0x284], edx */
  W32((uint32_t)(ebp + 0xfffffd7cu), edx);
/* 554303: mov dword ptr [ebp - 0x288], eax */
  W32((uint32_t)(ebp + 0xfffffd78u), eax);
/* 554309: call dword ptr [0x6ac7c8] */
  esp -= 4; W32(esp, 0x55430fu); SPILL(); call_ind(R32(0x6ac7c8u)); if (g_unwind) return; /* WINMM!timeGetTime */ RELOAD();
/* 55430f: mov dword ptr [ebp - 0x294], eax */
  W32((uint32_t)(ebp + 0xfffffd6cu), eax);
/* 554315: mov edx, dword ptr [ebp - 0x294] */
  edx = R32((uint32_t)(ebp + 0xfffffd6cu));
/* 55431b: mov dword ptr [ebp - 0x2a8], edx */
  W32((uint32_t)(ebp + 0xfffffd58u), edx);
L_554321: /* 554321: mov eax, dword ptr [ebp - 0x2a8] */
  eax = R32((uint32_t)(ebp + 0xfffffd58u));
/* 554327: sub eax, dword ptr [ebp - 0x294] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd6cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 55432d: cmp eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 554332: jae 0x554397 */
  if (!cf) goto L_554397;
L_554334: /* 554334: mov ecx, dword ptr [ebp - 0x27c] */
  ecx = R32((uint32_t)(ebp + 0xfffffd84u));
/* 55433a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55433b: mov edx, dword ptr [ebp - 0x280] */
  edx = R32((uint32_t)(ebp + 0xfffffd80u));
/* 554341: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554342: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x554347u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 554347: fstp qword ptr [ebp - 0x388] */
  WF64((uint32_t)(ebp + 0xfffffc78u), ST0); FPOP();
/* 55434d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554350: fld qword ptr [ebp - 0x388] */
  { double v = F64((uint32_t)(ebp + 0xfffffc78u)); FPUSH(v); }
/* 554356: fadd qword ptr [0x5705c8] */
  ST0 = ST0 + (F64((uint32_t)(0x5705c8u)));
/* 55435c: fadd qword ptr [ebp - 0x280] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xfffffd80u)));
/* 554362: fst qword ptr [ebp - 0x280] */
  WF64((uint32_t)(ebp + 0xfffffd80u), ST0);
/* 554368: call 0x554f00 */
  esp -= 4; W32(esp, 0x55436du); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 55436d: add eax, 0x22b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x22bu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 554372: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 554373: mov ecx, 0xd */
  ecx = 0xdu;
/* 554378: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x554378);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 55437a: mov edx, dword ptr [ebp - 0x2a4] */
  edx = R32((uint32_t)(ebp + 0xfffffd5cu));
/* 554380: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 554383: mov dword ptr [ebp - 0x2a4], edx */
  W32((uint32_t)(ebp + 0xfffffd5cu), edx);
/* 554389: call dword ptr [0x6ac7c8] */
  esp -= 4; W32(esp, 0x55438fu); SPILL(); call_ind(R32(0x6ac7c8u)); if (g_unwind) return; /* WINMM!timeGetTime */ RELOAD();
/* 55438f: mov dword ptr [ebp - 0x2a8], eax */
  W32((uint32_t)(ebp + 0xfffffd58u), eax);
/* 554395: jmp 0x554321 */
  goto L_554321;
L_554397: /* 554397: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 554399: mov dword ptr [ebp - 0x2ac], edx */
  W32((uint32_t)(ebp + 0xfffffd54u), edx);
/* 55439f: mov dword ptr [ebp - 0x2b0], eax */
  W32((uint32_t)(ebp + 0xfffffd50u), eax);
/* 5543a5: mov eax, dword ptr [ebp - 0x284] */
  eax = R32((uint32_t)(ebp + 0xfffffd7cu));
/* 5543ab: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5543ac: mov cl, 0x20 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x20u) & 0xffu);
/* 5543ae: call 0x554ee0 */
  esp -= 4; W32(esp, 0x5543b3u); SPILL(); f_554ee0(); if (g_unwind) return; RELOAD();
/* 5543b3: mov ecx, dword ptr [ebp - 0x288] */
  ecx = R32((uint32_t)(ebp + 0xfffffd78u));
/* 5543b9: xor esi, esi */
  esi = 0;
/* 5543bb: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 5543bd: adc esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 5543bf: mov dword ptr [ebp - 0x390], ecx */
  W32((uint32_t)(ebp + 0xfffffc70u), ecx);
/* 5543c5: mov dword ptr [ebp - 0x38c], esi */
  W32((uint32_t)(ebp + 0xfffffc74u), esi);
/* 5543cb: fild qword ptr [ebp - 0x390] */
  { double v = (double)(int64_t)R64((uint32_t)(ebp + 0xfffffc70u)); FPUSH(v); }
/* 5543d1: fstp qword ptr [ebp - 0x2a0] */
  WF64((uint32_t)(ebp + 0xfffffd60u), ST0); FPOP();
/* 5543d7: mov eax, dword ptr [ebp - 0x2ac] */
  eax = R32((uint32_t)(ebp + 0xfffffd54u));
/* 5543dd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5543de: mov cl, 0x20 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x20u) & 0xffu);
/* 5543e0: call 0x554ee0 */
  esp -= 4; W32(esp, 0x5543e5u); SPILL(); f_554ee0(); if (g_unwind) return; RELOAD();
/* 5543e5: mov ecx, dword ptr [ebp - 0x2b0] */
  ecx = R32((uint32_t)(ebp + 0xfffffd50u));
/* 5543eb: xor esi, esi */
  esi = 0;
/* 5543ed: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 5543ef: adc esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 5543f1: mov dword ptr [ebp - 0x398], ecx */
  W32((uint32_t)(ebp + 0xfffffc68u), ecx);
/* 5543f7: mov dword ptr [ebp - 0x394], esi */
  W32((uint32_t)(ebp + 0xfffffc6cu), esi);
/* 5543fd: fild qword ptr [ebp - 0x398] */
  { double v = (double)(int64_t)R64((uint32_t)(ebp + 0xfffffc68u)); FPUSH(v); }
/* 554403: fstp qword ptr [ebp - 0x290] */
  WF64((uint32_t)(ebp + 0xfffffd70u), ST0); FPOP();
/* 554409: mov edx, dword ptr [ebp - 0x2a8] */
  edx = R32((uint32_t)(ebp + 0xfffffd58u));
/* 55440f: sub edx, dword ptr [ebp - 0x294] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd6cu)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 554415: mov dword ptr [ebp - 0x3a0], edx */
  W32((uint32_t)(ebp + 0xfffffc60u), edx);
/* 55441b: mov dword ptr [ebp - 0x39c], 0 */
  W32((uint32_t)(ebp + 0xfffffc64u), 0x0u);
/* 554425: fild qword ptr [ebp - 0x3a0] */
  { double v = (double)(int64_t)R64((uint32_t)(ebp + 0xfffffc60u)); FPUSH(v); }
/* 55442b: fld qword ptr [ebp - 0x290] */
  { double v = F64((uint32_t)(ebp + 0xfffffd70u)); FPUSH(v); }
/* 554431: fsub qword ptr [ebp - 0x2a0] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xfffffd60u)));
/* 554437: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 55443d: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
/* 55443f: fdivr qword ptr [0x5694a8] */
  ST0 = (F64((uint32_t)(0x5694a8u))) / ST0;
/* 554445: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 554448: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 55444b: mov eax, dword ptr [0x5a0f2c] */
  eax = R32((uint32_t)(0x5a0f2cu));
/* 554450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554451: mov ecx, dword ptr [0x5a0f28] */
  ecx = R32((uint32_t)(0x5a0f28u));
/* 554457: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 554458: call 0x4e2b17 */
  esp -= 4; W32(esp, 0x55445du); SPILL(); f_4e2b17(); if (g_unwind) return; RELOAD();
/* 55445d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554460: fstp qword ptr [0x5a0f28] */
  WF64((uint32_t)(0x5a0f28u), ST0); FPOP();
/* 554466: jmp 0x5542c1 */
  goto L_5542c1;
L_55446b: /* 55446b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55446d: call dword ptr [0x6ac7d0] */
  esp -= 4; W32(esp, 0x554473u); SPILL(); call_ind(R32(0x6ac7d0u)); if (g_unwind) return; /* WINMM!timeEndPeriod */ RELOAD();
/* 554473: fld qword ptr [0x5705b8] */
  { double v = F64((uint32_t)(0x5705b8u)); FPUSH(v); }
/* 554479: fdiv qword ptr [0x5a0f28] */
  ST0 = ST0 / (F64((uint32_t)(0x5a0f28u)));
/* 55447f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 554482: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 554485: push 0x5af774 */
  { uint32_t v = 0x5af774u; esp -= 4; W32(esp, v); }
/* 55448a: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 55448f: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 554495: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554496: call 0x4e30df */
  esp -= 4; W32(esp, 0x55449bu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 55449b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55449e: fld qword ptr [0x5705b8] */
  { double v = F64((uint32_t)(0x5705b8u)); FPUSH(v); }
/* 5544a4: fdiv qword ptr [0x5a0f28] */
  ST0 = ST0 / (F64((uint32_t)(0x5a0f28u)));
/* 5544aa: fst dword ptr [ebp - 0x3a4] */
  WF32((uint32_t)(ebp + 0xfffffc5cu), ST0);
/* 5544b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5544b1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 5544b4: call 0x4e15aa */
  esp -= 4; W32(esp, 0x5544b9u); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 5544b9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5544bc: mov dword ptr [ebp - 0x3a8], eax */
  W32((uint32_t)(ebp + 0xfffffc58u), eax);
/* 5544c2: mov eax, dword ptr [ebp - 0x3a8] */
  eax = R32((uint32_t)(ebp + 0xfffffc58u));
/* 5544c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5544c9: push 0x5af798 */
  { uint32_t v = 0x5af798u; esp -= 4; W32(esp, v); }
/* 5544ce: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 5544d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5544d5: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x5544dau); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 5544da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5544dd: mov dword ptr [ebp - 0x3ac], eax */
  W32((uint32_t)(ebp + 0xfffffc54u), eax);
/* 5544e3: mov edx, dword ptr [ebp - 0x3ac] */
  edx = R32((uint32_t)(ebp + 0xfffffc54u));
/* 5544e9: mov dword ptr [ebp - 0x3b0], edx */
  W32((uint32_t)(ebp + 0xfffffc50u), edx);
/* 5544ef: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 5544f3: mov ecx, dword ptr [ebp - 0x3b0] */
  ecx = R32((uint32_t)(ebp + 0xfffffc50u));
/* 5544f9: call 0x4e1037 */
  esp -= 4; W32(esp, 0x5544feu); SPILL(); f_4e1037(); if (g_unwind) return; RELOAD();
/* 5544fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5544ff: push 0x5a1f58 */
  { uint32_t v = 0x5a1f58u; esp -= 4; W32(esp, v); }
/* 554504: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554509u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 554509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55450c: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 554510: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 554516: call 0x4e1217 */
  esp -= 4; W32(esp, 0x55451bu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 55451b: jmp 0x554561 */
  goto L_554561;
L_554561: /* 554561: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 554568: call 0x4e2987 */
  esp -= 4; W32(esp, 0x55456du); SPILL(); f_4e2987(); if (g_unwind) return; RELOAD();
/* 55456d: mov dword ptr [ebp - 0x3b4], eax */
  W32((uint32_t)(ebp + 0xfffffc4cu), eax);
/* 554573: lea ecx, [ebp - 0x274] */
  ecx = (uint32_t)(ebp + 0xfffffd8cu);
/* 554579: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55457a: push 0x5af844 */
  { uint32_t v = 0x5af844u; esp -= 4; W32(esp, v); }
/* 55457f: mov edx, dword ptr [ebp - 0x3b4] */
  edx = R32((uint32_t)(ebp + 0xfffffc4cu));
/* 554585: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554586: call 0x4e44a8 */
  esp -= 4; W32(esp, 0x55458bu); SPILL(); f_4e44a8(); if (g_unwind) return; RELOAD();
/* 55458b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55458e: mov dword ptr [ebp - 0x3b8], eax */
  W32((uint32_t)(ebp + 0xfffffc48u), eax);
/* 554594: cmp dword ptr [ebp - 0x3b8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffc48u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 55459b: je 0x55465a */
  if (zf) goto L_55465a;
L_5545a1: /* 5545a1: fld dword ptr [ebp - 0x274] */
  { double v = F32((uint32_t)(ebp + 0xfffffd8cu)); FPUSH(v); }
/* 5545a7: fdivr qword ptr [0x5705b8] */
  ST0 = (F64((uint32_t)(0x5705b8u))) / ST0;
/* 5545ad: fstp qword ptr [0x5a0f28] */
  WF64((uint32_t)(0x5a0f28u), ST0); FPOP();
/* 5545b3: fld qword ptr [0x5705b8] */
  { double v = F64((uint32_t)(0x5705b8u)); FPUSH(v); }
/* 5545b9: fdiv qword ptr [0x5a0f28] */
  ST0 = ST0 / (F64((uint32_t)(0x5a0f28u)));
/* 5545bf: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5545c2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5545c5: push 0x5af858 */
  { uint32_t v = 0x5af858u; esp -= 4; W32(esp, v); }
/* 5545ca: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 5545cf: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 5545d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5545d5: call 0x4e30df */
  esp -= 4; W32(esp, 0x5545dau); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5545da: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5545dd: fld qword ptr [0x5705b8] */
  { double v = F64((uint32_t)(0x5705b8u)); FPUSH(v); }
/* 5545e3: fdiv qword ptr [0x5a0f28] */
  ST0 = ST0 / (F64((uint32_t)(0x5a0f28u)));
/* 5545e9: fst dword ptr [ebp - 0x3bc] */
  WF32((uint32_t)(ebp + 0xfffffc44u), ST0);
/* 5545ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5545f0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 5545f3: call 0x4e15aa */
  esp -= 4; W32(esp, 0x5545f8u); SPILL(); f_4e15aa(); if (g_unwind) return; RELOAD();
/* 5545f8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5545fb: mov dword ptr [ebp - 0x3c0], eax */
  W32((uint32_t)(ebp + 0xfffffc40u), eax);
/* 554601: mov ecx, dword ptr [ebp - 0x3c0] */
  ecx = R32((uint32_t)(ebp + 0xfffffc40u));
/* 554607: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 554608: push 0x5af890 */
  { uint32_t v = 0x5af890u; esp -= 4; W32(esp, v); }
/* 55460d: lea edx, [ebp - 0x30c] */
  edx = (uint32_t)(ebp + 0xfffffcf4u);
/* 554613: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554614: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x554619u); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 554619: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55461c: mov dword ptr [ebp - 0x3c4], eax */
  W32((uint32_t)(ebp + 0xfffffc3cu), eax);
/* 554622: mov eax, dword ptr [ebp - 0x3c4] */
  eax = R32((uint32_t)(ebp + 0xfffffc3cu));
/* 554628: mov dword ptr [ebp - 0x3c8], eax */
  W32((uint32_t)(ebp + 0xfffffc38u), eax);
/* 55462e: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 554632: mov ecx, dword ptr [ebp - 0x3c8] */
  ecx = R32((uint32_t)(ebp + 0xfffffc38u));
/* 554638: call 0x4e1037 */
  esp -= 4; W32(esp, 0x55463du); SPILL(); f_4e1037(); if (g_unwind) return; RELOAD();
/* 55463d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55463e: push 0x5a1f58 */
  { uint32_t v = 0x5a1f58u; esp -= 4; W32(esp, v); }
/* 554643: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554648u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 554648: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55464b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 55464f: lea ecx, [ebp - 0x30c] */
  ecx = (uint32_t)(ebp + 0xfffffcf4u);
/* 554655: call 0x4e1217 */
  esp -= 4; W32(esp, 0x55465au); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
L_55465a: /* 55465a: jmp 0x554694 */
  goto L_554694;
L_554694: /* 554694: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 55469b: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 55469f: lea eax, [ebp - 0x2d4] */
  eax = (uint32_t)(ebp + 0xfffffd2cu);
/* 5546a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5546a6: call dword ptr [0x6ac590] */
  esp -= 4; W32(esp, 0x5546acu); SPILL(); call_ind(R32(0x6ac590u)); if (g_unwind) return; /* KERNEL32!GlobalMemoryStatus */ RELOAD();
/* 5546ac: mov ecx, dword ptr [ebp - 0x2cc] */
  ecx = R32((uint32_t)(ebp + 0xfffffd34u));
/* 5546b2: mov dword ptr [0x5a0f40], ecx */
  W32((uint32_t)(0x5a0f40u), ecx);
/* 5546b8: mov edx, dword ptr [ebp - 0x2bc] */
  edx = R32((uint32_t)(ebp + 0xfffffd44u));
/* 5546be: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 5546c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5546c2: mov eax, dword ptr [ebp - 0x2c4] */
  eax = R32((uint32_t)(ebp + 0xfffffd3cu));
/* 5546c8: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 5546cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5546cc: mov ecx, dword ptr [ebp - 0x2cc] */
  ecx = R32((uint32_t)(ebp + 0xfffffd34u));
/* 5546d2: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 5546d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5546d6: push 0x5af8b0 */
  { uint32_t v = 0x5af8b0u; esp -= 4; W32(esp, v); }
/* 5546db: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 5546e0: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 5546e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5546e7: call 0x4e30df */
  esp -= 4; W32(esp, 0x5546ecu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5546ec: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5546ef: mov eax, dword ptr [ebp - 0x2cc] */
  eax = R32((uint32_t)(ebp + 0xfffffd34u));
/* 5546f5: shr eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 5546f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5546f9: push 0x5af904 */
  { uint32_t v = 0x5af904u; esp -= 4; W32(esp, v); }
/* 5546fe: lea ecx, [ebp - 0x31c] */
  ecx = (uint32_t)(ebp + 0xfffffce4u);
/* 554704: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 554705: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x55470au); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 55470a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55470d: mov dword ptr [ebp - 0x3cc], eax */
  W32((uint32_t)(ebp + 0xfffffc34u), eax);
/* 554713: mov edx, dword ptr [ebp - 0x3cc] */
  edx = R32((uint32_t)(ebp + 0xfffffc34u));
/* 554719: mov dword ptr [ebp - 0x3d0], edx */
  W32((uint32_t)(ebp + 0xfffffc30u), edx);
/* 55471f: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 554723: mov ecx, dword ptr [ebp - 0x3d0] */
  ecx = R32((uint32_t)(ebp + 0xfffffc30u));
/* 554729: call 0x4e1037 */
  esp -= 4; W32(esp, 0x55472eu); SPILL(); f_4e1037(); if (g_unwind) return; RELOAD();
/* 55472e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55472f: push 0x5a1f58 */
  { uint32_t v = 0x5a1f58u; esp -= 4; W32(esp, v); }
/* 554734: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554739u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 554739: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55473c: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 554740: lea ecx, [ebp - 0x31c] */
  ecx = (uint32_t)(ebp + 0xfffffce4u);
/* 554746: call 0x4e1217 */
  esp -= 4; W32(esp, 0x55474bu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 55474b: jmp 0x554785 */
  goto L_554785;
L_554785: /* 554785: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 55478c: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 554790: mov dword ptr [ebp - 0x2dc], 0 */
  W32((uint32_t)(ebp + 0xfffffd24u), 0x0u);
/* 55479a: mov dword ptr [ebp - 0x2e0], 0 */
  W32((uint32_t)(ebp + 0xfffffd20u), 0x0u);
/* 5547a4: lea edx, [ebp - 0x2e0] */
  edx = (uint32_t)(ebp + 0xfffffd20u);
/* 5547aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5547ab: lea eax, [ebp - 0x2dc] */
  eax = (uint32_t)(ebp + 0xfffffd24u);
/* 5547b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5547b2: call dword ptr [0x6ac4e0] */
  esp -= 4; W32(esp, 0x5547b8u); SPILL(); call_ind(R32(0x6ac4e0u)); if (g_unwind) return; /* KERNEL32!GetCurrentProcess */ RELOAD();
/* 5547b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5547b9: call dword ptr [0x6ac4e4] */
  esp -= 4; W32(esp, 0x5547bfu); SPILL(); call_ind(R32(0x6ac4e4u)); if (g_unwind) return; /* KERNEL32!GetProcessWorkingSetSize */ RELOAD();
/* 5547bf: mov ecx, dword ptr [ebp - 0x2e0] */
  ecx = R32((uint32_t)(ebp + 0xfffffd20u));
/* 5547c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5547c6: mov edx, dword ptr [ebp - 0x2dc] */
  edx = R32((uint32_t)(ebp + 0xfffffd24u));
/* 5547cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5547cd: push 0x5af92c */
  { uint32_t v = 0x5af92cu; esp -= 4; W32(esp, v); }
/* 5547d2: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 5547d7: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 5547dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5547dd: call 0x4e30df */
  esp -= 4; W32(esp, 0x5547e2u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5547e2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5547e5: jmp 0x55481f */
  goto L_55481f;
L_55481f: /* 55481f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 554826: push 0x6a9e64 */
  { uint32_t v = 0x6a9e64u; esp -= 4; W32(esp, v); }
/* 55482b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55482d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55482f: push 0x5520f0 */
  { uint32_t v = 0x5520f0u; esp -= 4; W32(esp, v); }
/* 554834: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 554836: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 554838: call dword ptr [0x6ac550] */
  esp -= 4; W32(esp, 0x55483eu); SPILL(); call_ind(R32(0x6ac550u)); if (g_unwind) return; /* KERNEL32!CreateThread */ RELOAD();
/* 55483e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 554841: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 554845: jne 0x55485e */
  if (!zf) goto L_55485e;
L_554847: /* 554847: push 0x66a */
  { uint32_t v = 0x66au; esp -= 4; W32(esp, v); }
/* 55484c: push 0x5af960 */
  { uint32_t v = 0x5af960u; esp -= 4; W32(esp, v); }
/* 554851: push 0x5af970 */
  { uint32_t v = 0x5af970u; esp -= 4; W32(esp, v); }
/* 554856: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55485bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55485b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_55485e: /* 55485e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 554861: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554862: call dword ptr [0x6ac574] */
  esp -= 4; W32(esp, 0x554868u); SPILL(); call_ind(R32(0x6ac574u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
/* 554868: jmp 0x5548a2 */
  goto L_5548a2;
L_5548a2: /* 5548a2: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 5548a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5548ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5548b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5548b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5548b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5548b6: mov esp, ebp */
  esp = ebp;
/* 5548b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5548b9: ret  */
  esp += 4; SPILL(); return;
}

void f_553e90(void) {
  LOAD_REGS();
L_553e90: /* 553e90: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 553e93: mov dword ptr [ebp - 0x2f4], ecx */
  W32((uint32_t)(ebp + 0xfffffd0cu), ecx);
/* 553e99: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 553e9e: lea edx, [ebp - 0x2f4] */
  edx = (uint32_t)(ebp + 0xfffffd0cu);
/* 553ea4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 553ea5: call 0x554df6 */
  esp -= 4; W32(esp, 0x553eaau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_553eaa(); return;
}

void f_553eaa(void) {
  LOAD_REGS();
L_553eaa: /* 553eaa: push 0x5705d4 */
  { uint32_t v = 0x5705d4u; esp -= 4; W32(esp, v); }
/* 553eaf: push 0x5af544 */
  { uint32_t v = 0x5af544u; esp -= 4; W32(esp, v); }
/* 553eb4: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x553eb9u); SPILL(); f_4e3f49(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 553eb9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553ebc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553ebe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553ec0: call 0x554df6 */
  esp -= 4; W32(esp, 0x553ec5u); SPILL(); f_554df6(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 553ec5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 553ecc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 553ed0: mov dword ptr [ebp - 0x26c], 0 */
  W32((uint32_t)(ebp + 0xfffffd94u), 0x0u);
/* 553eda: mov dword ptr [ebp - 0x264], 0 */
  W32((uint32_t)(ebp + 0xfffffd9cu), 0x0u);
/* 553ee4: mov dword ptr [ebp - 0x268], 0 */
  W32((uint32_t)(ebp + 0xfffffd98u), 0x0u);
/* 553eee: mov dword ptr [ebp - 0x270], 0 */
  W32((uint32_t)(ebp + 0xfffffd90u), 0x0u);
/* 553ef8: lea eax, [ebp - 0x270] */
  eax = (uint32_t)(ebp + 0xfffffd90u);
/* 553efe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553eff: lea ecx, [ebp - 0x268] */
  ecx = (uint32_t)(ebp + 0xfffffd98u);
/* 553f05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 553f06: lea edx, [ebp - 0x264] */
  edx = (uint32_t)(ebp + 0xfffffd9cu);
/* 553f0c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 553f0d: lea eax, [ebp - 0x26c] */
  eax = (uint32_t)(ebp + 0xfffffd94u);
/* 553f13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 553f14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 553f16: call 0x551b30 */
  esp -= 4; W32(esp, 0x553f1bu); SPILL(); f_551b30(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 553f1b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 553f1e: mov cx, word ptr [0x6a9e6c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x6a9e6cu))) & 0xffffu);
/* 553f25: mov word ptr [ebp - 0x240], cx */
  W16((uint32_t)(ebp + 0xfffffdc0u), (ecx & 0xffffu));
/* 553f2c: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 553f31: xor eax, eax */
  eax = 0;
/* 553f33: lea edi, [ebp - 0x23e] */
  edi = (uint32_t)(ebp + 0xfffffdc2u);
/* 553f39: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 553f3b: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 553f3d: movsx dx, byte ptr [ebp - 0x264] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xfffffd9cu)))) & 0xffffu);
/* 553f45: mov word ptr [ebp - 0x260], dx */
  W16((uint32_t)(ebp + 0xfffffda0u), (edx & 0xffffu));
/* 553f4c: mov eax, dword ptr [ebp - 0x264] */
  eax = R32((uint32_t)(ebp + 0xfffffd9cu));
/* 553f52: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 553f55: movsx cx, al */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((eax & 0xffu))) & 0xffffu);
/* 553f59: mov word ptr [ebp - 0x25e], cx */
  W16((uint32_t)(ebp + 0xfffffda2u), (ecx & 0xffffu));
/* 553f60: mov edx, dword ptr [ebp - 0x264] */
  edx = R32((uint32_t)(ebp + 0xfffffd9cu));
/* 553f66: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 553f69: movsx ax, dl */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((edx & 0xffu))) & 0xffffu);
/* 553f6d: mov word ptr [ebp - 0x25c], ax */
  W16((uint32_t)(ebp + 0xfffffda4u), (eax & 0xffffu));
/* 553f74: mov ecx, dword ptr [ebp - 0x264] */
  ecx = R32((uint32_t)(ebp + 0xfffffd9cu));
/* 553f7a: shr ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 553f7d: movsx dx, cl */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((ecx & 0xffu))) & 0xffffu);
/* 553f81: mov word ptr [ebp - 0x25a], dx */
  W16((uint32_t)(ebp + 0xfffffda6u), (edx & 0xffffu));
/* 553f88: movsx ax, byte ptr [ebp - 0x270] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xfffffd90u)))) & 0xffffu);
/* 553f90: mov word ptr [ebp - 0x258], ax */
  W16((uint32_t)(ebp + 0xfffffda8u), (eax & 0xffffu));
/* 553f97: mov ecx, dword ptr [ebp - 0x270] */
  ecx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 553f9d: shr ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 553fa0: movsx dx, cl */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((ecx & 0xffu))) & 0xffffu);
/* 553fa4: mov word ptr [ebp - 0x256], dx */
  W16((uint32_t)(ebp + 0xfffffdaau), (edx & 0xffffu));
/* 553fab: mov eax, dword ptr [ebp - 0x270] */
  eax = R32((uint32_t)(ebp + 0xfffffd90u));
/* 553fb1: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 553fb4: movsx cx, al */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((eax & 0xffu))) & 0xffffu);
/* 553fb8: mov word ptr [ebp - 0x254], cx */
  W16((uint32_t)(ebp + 0xfffffdacu), (ecx & 0xffffu));
/* 553fbf: mov edx, dword ptr [ebp - 0x270] */
  edx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 553fc5: shr edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 553fc8: movsx ax, dl */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((edx & 0xffu))) & 0xffffu);
/* 553fcc: mov word ptr [ebp - 0x252], ax */
  W16((uint32_t)(ebp + 0xfffffdaeu), (eax & 0xffffu));
/* 553fd3: movsx cx, byte ptr [ebp - 0x268] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xfffffd98u)))) & 0xffffu);
/* 553fdb: mov word ptr [ebp - 0x250], cx */
  W16((uint32_t)(ebp + 0xfffffdb0u), (ecx & 0xffffu));
/* 553fe2: mov edx, dword ptr [ebp - 0x268] */
  edx = R32((uint32_t)(ebp + 0xfffffd98u));
/* 553fe8: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 553feb: movsx ax, dl */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((edx & 0xffu))) & 0xffffu);
/* 553fef: mov word ptr [ebp - 0x24e], ax */
  W16((uint32_t)(ebp + 0xfffffdb2u), (eax & 0xffffu));
/* 553ff6: mov ecx, dword ptr [ebp - 0x268] */
  ecx = R32((uint32_t)(ebp + 0xfffffd98u));
/* 553ffc: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 553fff: movsx dx, cl */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((ecx & 0xffu))) & 0xffffu);
/* 554003: mov word ptr [ebp - 0x24c], dx */
  W16((uint32_t)(ebp + 0xfffffdb4u), (edx & 0xffffu));
/* 55400a: mov eax, dword ptr [ebp - 0x268] */
  eax = R32((uint32_t)(ebp + 0xfffffd98u));
/* 554010: shr eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 554013: movsx cx, al */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((eax & 0xffu))) & 0xffffu);
/* 554017: mov word ptr [ebp - 0x24a], cx */
  W16((uint32_t)(ebp + 0xfffffdb6u), (ecx & 0xffffu));
/* 55401e: mov word ptr [ebp - 0x248], 0 */
  W16((uint32_t)(ebp + 0xfffffdb8u), 0x0u);
/* 554027: lea edx, [ebp - 0x270] */
  edx = (uint32_t)(ebp + 0xfffffd90u);
/* 55402d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55402e: lea eax, [ebp - 0x268] */
  eax = (uint32_t)(ebp + 0xfffffd98u);
/* 554034: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554035: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 55403b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55403c: lea edx, [ebp - 0x26c] */
  edx = (uint32_t)(ebp + 0xfffffd94u);
/* 554042: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554043: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 554045: call 0x551b30 */
  esp -= 4; W32(esp, 0x55404au); SPILL(); f_551b30(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 55404a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55404d: mov eax, dword ptr [ebp - 0x26c] */
  eax = R32((uint32_t)(ebp + 0xfffffd94u));
/* 554053: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 554056: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 554059: mov dword ptr [ebp - 0x370], eax */
  W32((uint32_t)(ebp + 0xfffffc90u), eax);
/* 55405f: mov ecx, dword ptr [ebp - 0x370] */
  ecx = R32((uint32_t)(ebp + 0xfffffc90u));
/* 554065: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 554068: mov dword ptr [ebp - 0x370], ecx */
  W32((uint32_t)(ebp + 0xfffffc90u), ecx);
/* 55406e: cmp dword ptr [ebp - 0x370], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffc90u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 554075: ja 0x5540b4 */
  if ((!cf && !zf)) goto L_5540b4;
L_554077: /* 554077: mov edx, dword ptr [ebp - 0x370] */
  edx = R32((uint32_t)(ebp + 0xfffffc90u));
/* 55407d: jmp dword ptr [edx*4 + 0x5548ba] */
  switch (R32((uint32_t)(edx*4 + 0x5548bau))) {
    case 0x554084u: goto L_554084;
    case 0x554090u: goto L_554090;
    case 0x55409cu: goto L_55409c;
    case 0x5540a8u: goto L_5540a8;
    default: guest_badjump(0x55407d, R32((uint32_t)(edx*4 + 0x5548bau))); return;
  }
L_554084: /* 554084: mov dword ptr [ebp - 0x244], 0x5af54c */
  W32((uint32_t)(ebp + 0xfffffdbcu), 0x5af54cu);
/* 55408e: jmp 0x5540be */
  goto L_5540be;
L_554090: /* 554090: mov dword ptr [ebp - 0x244], 0x5af574 */
  W32((uint32_t)(ebp + 0xfffffdbcu), 0x5af574u);
/* 55409a: jmp 0x5540be */
  goto L_5540be;
L_55409c: /* 55409c: mov dword ptr [ebp - 0x244], 0x5af5a4 */
  W32((uint32_t)(ebp + 0xfffffdbcu), 0x5af5a4u);
/* 5540a6: jmp 0x5540be */
  goto L_5540be;
L_5540a8: /* 5540a8: mov dword ptr [ebp - 0x244], 0x5af5dc */
  W32((uint32_t)(ebp + 0xfffffdbcu), 0x5af5dcu);
/* 5540b2: jmp 0x5540be */
  goto L_5540be;
L_5540b4: /* 5540b4: mov dword ptr [ebp - 0x244], 0x5af604 */
  W32((uint32_t)(ebp + 0xfffffdbcu), 0x5af604u);
L_5540be: /* 5540be: mov eax, dword ptr [ebp - 0x270] */
  eax = R32((uint32_t)(ebp + 0xfffffd90u));
/* 5540c4: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5540c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5540cb: je 0x5540e1 */
  if (zf) goto L_5540e1;
L_5540cd: /* 5540cd: push 0x5af628 */
  { uint32_t v = 0x5af628u; esp -= 4; W32(esp, v); }
/* 5540d2: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 5540d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5540d9: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5540deu); SPILL(); f_4e35ad(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5540de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5540e1: /* 5540e1: mov edx, dword ptr [ebp - 0x270] */
  edx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 5540e7: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5540ea: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5540ec: je 0x554102 */
  if (zf) goto L_554102;
L_5540ee: /* 5540ee: push 0x5af634 */
  { uint32_t v = 0x5af634u; esp -= 4; W32(esp, v); }
/* 5540f3: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 5540f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5540fa: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5540ffu); SPILL(); f_4e35ad(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5540ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_554102: /* 554102: mov ecx, dword ptr [ebp - 0x270] */
  ecx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 554108: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 55410b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55410d: je 0x554123 */
  if (zf) goto L_554123;
L_55410f: /* 55410f: push 0x5af640 */
  { uint32_t v = 0x5af640u; esp -= 4; W32(esp, v); }
/* 554114: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* 55411a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 55411b: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554120u); SPILL(); f_4e35ad(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 554120: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_554123: /* 554123: mov eax, dword ptr [ebp - 0x270] */
  eax = R32((uint32_t)(ebp + 0xfffffd90u));
/* 554129: and eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 55412c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55412e: je 0x554144 */
  if (zf) goto L_554144;
L_554130: /* 554130: push 0x5af650 */
  { uint32_t v = 0x5af650u; esp -= 4; W32(esp, v); }
/* 554135: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 55413b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55413c: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554141u); SPILL(); f_4e35ad(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 554141: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_554144: /* 554144: mov edx, dword ptr [ebp - 0x270] */
  edx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 55414a: and edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 554150: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 554152: je 0x554196 */
  if (zf) goto L_554196;
L_554154: /* 554154: call 0x4e2987 */
  esp -= 4; W32(esp, 0x554159u); SPILL(); f_4e2987(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 554159: mov dword ptr [ebp - 0x374], eax */
  W32((uint32_t)(ebp + 0xfffffc8cu), eax);
/* 55415f: push 0x5af65c */
  { uint32_t v = 0x5af65cu; esp -= 4; W32(esp, v); }
/* 554164: mov eax, dword ptr [ebp - 0x374] */
  eax = R32((uint32_t)(ebp + 0xfffffc8cu));
/* 55416a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55416b: call 0x4e3387 */
  esp -= 4; W32(esp, 0x554170u); SPILL(); f_4e3387(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 554170: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554173: mov dword ptr [ebp - 0x378], eax */
  W32((uint32_t)(ebp + 0xfffffc88u), eax);
/* 554179: cmp dword ptr [ebp - 0x378], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffc88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 554180: jne 0x554196 */
  if (!zf) goto L_554196;
L_554182: /* 554182: push 0x5af668 */
  { uint32_t v = 0x5af668u; esp -= 4; W32(esp, v); }
/* 554187: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 55418d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55418e: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554193u); SPILL(); f_4e35ad(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 554193: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_554196: /* 554196: mov edx, dword ptr [ebp - 0x270] */
  edx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 55419c: and edx, 0x2000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5541a2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5541a4: je 0x5541f2 */
  if (zf) goto L_5541f2;
L_5541a6: /* 5541a6: call 0x4e2987 */
  esp -= 4; W32(esp, 0x5541abu); SPILL(); f_4e2987(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5541ab: mov dword ptr [ebp - 0x37c], eax */
  W32((uint32_t)(ebp + 0xfffffc84u), eax);
/* 5541b1: push 0x5af674 */
  { uint32_t v = 0x5af674u; esp -= 4; W32(esp, v); }
/* 5541b6: mov eax, dword ptr [ebp - 0x37c] */
  eax = R32((uint32_t)(ebp + 0xfffffc84u));
/* 5541bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5541bd: call 0x4e3387 */
  esp -= 4; W32(esp, 0x5541c2u); SPILL(); f_4e3387(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5541c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5541c5: mov dword ptr [ebp - 0x380], eax */
  W32((uint32_t)(ebp + 0xfffffc80u), eax);
/* 5541cb: cmp dword ptr [ebp - 0x380], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffc80u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5541d2: jne 0x5541f2 */
  if (!zf) goto L_5541f2;
L_5541d4: /* 5541d4: push 0x5af680 */
  { uint32_t v = 0x5af680u; esp -= 4; W32(esp, v); }
/* 5541d9: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 5541df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5541e0: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5541e5u); SPILL(); f_4e35ad(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5541e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5541e8: mov dword ptr [0x5b3188], 1 */
  W32((uint32_t)(0x5b3188u), 0x1u);
L_5541f2: /* 5541f2: lea edx, [ebp - 0x260] */
  edx = (uint32_t)(ebp + 0xfffffda0u);
/* 5541f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5541f9: mov eax, dword ptr [ebp - 0x244] */
  eax = R32((uint32_t)(ebp + 0xfffffdbcu));
/* 5541ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554200: push 0x5af68c */
  { uint32_t v = 0x5af68cu; esp -= 4; W32(esp, v); }
/* 554205: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 55420a: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 554210: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 554211: call 0x4e30df */
  esp -= 4; W32(esp, 0x554216u); SPILL(); f_4e30df(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 554216: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554219: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* 55421f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554220: push 0x5af6b8 */
  { uint32_t v = 0x5af6b8u; esp -= 4; W32(esp, v); }
/* 554225: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 55422a: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 55422f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554230: call 0x4e30df */
  esp -= 4; W32(esp, 0x554235u); SPILL(); f_4e30df(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 554235: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554238: mov ecx, dword ptr [ebp - 0x244] */
  ecx = R32((uint32_t)(ebp + 0xfffffdbcu));
/* 55423e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55423f: lea edx, [ebp - 0x260] */
  edx = (uint32_t)(ebp + 0xfffffda0u);
/* 554245: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554246: push 0x5af6d8 */
  { uint32_t v = 0x5af6d8u; esp -= 4; W32(esp, v); }
/* 55424b: push 0x5a1f58 */
  { uint32_t v = 0x5a1f58u; esp -= 4; W32(esp, v); }
/* 554250: call 0x4e4183 */
  esp -= 4; W32(esp, 0x554255u); SPILL(); f_4e4183(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 554255: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554258: jmp 0x55428a */
  goto L_55428a;
L_55428a: /* 55428a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 554291: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 554295: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 554299: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55429b: call dword ptr [0x6ac7cc] */
  esp -= 4; W32(esp, 0x5542a1u); SPILL(); call_ind(R32(0x6ac7ccu)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } /* WINMM!timeBeginPeriod */ RELOAD();
/* 5542a1: mov dword ptr [0x5a0f28], 0 */
  W32((uint32_t)(0x5a0f28u), 0x0u);
/* 5542ab: mov dword ptr [0x5a0f2c], 0x3ff00000 */
  W32((uint32_t)(0x5a0f2cu), 0x3ff00000u);
/* 5542b5: mov dword ptr [ebp - 0x278], 0 */
  W32((uint32_t)(ebp + 0xfffffd88u), 0x0u);
/* 5542bf: jmp 0x5542d0 */
  goto L_5542d0;
L_5542c1: /* 5542c1: mov ecx, dword ptr [ebp - 0x278] */
  ecx = R32((uint32_t)(ebp + 0xfffffd88u));
/* 5542c7: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5542ca: mov dword ptr [ebp - 0x278], ecx */
  W32((uint32_t)(ebp + 0xfffffd88u), ecx);
L_5542d0: /* 5542d0: cmp dword ptr [ebp - 0x278], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd88u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5542d7: jge 0x55446b */
  if ((sf == of)) goto L_55446b;
L_5542dd: /* 5542dd: mov dword ptr [ebp - 0x280], 0 */
  W32((uint32_t)(ebp + 0xfffffd80u), 0x0u);
/* 5542e7: mov dword ptr [ebp - 0x27c], 0 */
  W32((uint32_t)(ebp + 0xfffffd84u), 0x0u);
/* 5542f1: mov dword ptr [ebp - 0x2a4], 0 */
  W32((uint32_t)(ebp + 0xfffffd5cu), 0x0u);
/* 5542fb: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 5542fd: mov dword ptr [ebp - 0x284], edx */
  W32((uint32_t)(ebp + 0xfffffd7cu), edx);
/* 554303: mov dword ptr [ebp - 0x288], eax */
  W32((uint32_t)(ebp + 0xfffffd78u), eax);
/* 554309: call dword ptr [0x6ac7c8] */
  esp -= 4; W32(esp, 0x55430fu); SPILL(); call_ind(R32(0x6ac7c8u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } /* WINMM!timeGetTime */ RELOAD();
/* 55430f: mov dword ptr [ebp - 0x294], eax */
  W32((uint32_t)(ebp + 0xfffffd6cu), eax);
/* 554315: mov edx, dword ptr [ebp - 0x294] */
  edx = R32((uint32_t)(ebp + 0xfffffd6cu));
/* 55431b: mov dword ptr [ebp - 0x2a8], edx */
  W32((uint32_t)(ebp + 0xfffffd58u), edx);
L_554321: /* 554321: mov eax, dword ptr [ebp - 0x2a8] */
  eax = R32((uint32_t)(ebp + 0xfffffd58u));
/* 554327: sub eax, dword ptr [ebp - 0x294] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd6cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 55432d: cmp eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 554332: jae 0x554397 */
  if (!cf) goto L_554397;
L_554334: /* 554334: mov ecx, dword ptr [ebp - 0x27c] */
  ecx = R32((uint32_t)(ebp + 0xfffffd84u));
/* 55433a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55433b: mov edx, dword ptr [ebp - 0x280] */
  edx = R32((uint32_t)(ebp + 0xfffffd80u));
/* 554341: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554342: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x554347u); SPILL(); f_4e3cd3(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 554347: fstp qword ptr [ebp - 0x388] */
  WF64((uint32_t)(ebp + 0xfffffc78u), ST0); FPOP();
/* 55434d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554350: fld qword ptr [ebp - 0x388] */
  { double v = F64((uint32_t)(ebp + 0xfffffc78u)); FPUSH(v); }
/* 554356: fadd qword ptr [0x5705c8] */
  ST0 = ST0 + (F64((uint32_t)(0x5705c8u)));
/* 55435c: fadd qword ptr [ebp - 0x280] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xfffffd80u)));
/* 554362: fst qword ptr [ebp - 0x280] */
  WF64((uint32_t)(ebp + 0xfffffd80u), ST0);
/* 554368: call 0x554f00 */
  esp -= 4; W32(esp, 0x55436du); SPILL(); f_554f00(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 55436d: add eax, 0x22b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x22bu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 554372: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 554373: mov ecx, 0xd */
  ecx = 0xdu;
/* 554378: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x554378);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 55437a: mov edx, dword ptr [ebp - 0x2a4] */
  edx = R32((uint32_t)(ebp + 0xfffffd5cu));
/* 554380: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 554383: mov dword ptr [ebp - 0x2a4], edx */
  W32((uint32_t)(ebp + 0xfffffd5cu), edx);
/* 554389: call dword ptr [0x6ac7c8] */
  esp -= 4; W32(esp, 0x55438fu); SPILL(); call_ind(R32(0x6ac7c8u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } /* WINMM!timeGetTime */ RELOAD();
/* 55438f: mov dword ptr [ebp - 0x2a8], eax */
  W32((uint32_t)(ebp + 0xfffffd58u), eax);
/* 554395: jmp 0x554321 */
  goto L_554321;
L_554397: /* 554397: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 554399: mov dword ptr [ebp - 0x2ac], edx */
  W32((uint32_t)(ebp + 0xfffffd54u), edx);
/* 55439f: mov dword ptr [ebp - 0x2b0], eax */
  W32((uint32_t)(ebp + 0xfffffd50u), eax);
/* 5543a5: mov eax, dword ptr [ebp - 0x284] */
  eax = R32((uint32_t)(ebp + 0xfffffd7cu));
/* 5543ab: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5543ac: mov cl, 0x20 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x20u) & 0xffu);
/* 5543ae: call 0x554ee0 */
  esp -= 4; W32(esp, 0x5543b3u); SPILL(); f_554ee0(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5543b3: mov ecx, dword ptr [ebp - 0x288] */
  ecx = R32((uint32_t)(ebp + 0xfffffd78u));
/* 5543b9: xor esi, esi */
  esi = 0;
/* 5543bb: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 5543bd: adc esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 5543bf: mov dword ptr [ebp - 0x390], ecx */
  W32((uint32_t)(ebp + 0xfffffc70u), ecx);
/* 5543c5: mov dword ptr [ebp - 0x38c], esi */
  W32((uint32_t)(ebp + 0xfffffc74u), esi);
/* 5543cb: fild qword ptr [ebp - 0x390] */
  { double v = (double)(int64_t)R64((uint32_t)(ebp + 0xfffffc70u)); FPUSH(v); }
/* 5543d1: fstp qword ptr [ebp - 0x2a0] */
  WF64((uint32_t)(ebp + 0xfffffd60u), ST0); FPOP();
/* 5543d7: mov eax, dword ptr [ebp - 0x2ac] */
  eax = R32((uint32_t)(ebp + 0xfffffd54u));
/* 5543dd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5543de: mov cl, 0x20 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x20u) & 0xffu);
/* 5543e0: call 0x554ee0 */
  esp -= 4; W32(esp, 0x5543e5u); SPILL(); f_554ee0(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5543e5: mov ecx, dword ptr [ebp - 0x2b0] */
  ecx = R32((uint32_t)(ebp + 0xfffffd50u));
/* 5543eb: xor esi, esi */
  esi = 0;
/* 5543ed: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 5543ef: adc esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 5543f1: mov dword ptr [ebp - 0x398], ecx */
  W32((uint32_t)(ebp + 0xfffffc68u), ecx);
/* 5543f7: mov dword ptr [ebp - 0x394], esi */
  W32((uint32_t)(ebp + 0xfffffc6cu), esi);
/* 5543fd: fild qword ptr [ebp - 0x398] */
  { double v = (double)(int64_t)R64((uint32_t)(ebp + 0xfffffc68u)); FPUSH(v); }
/* 554403: fstp qword ptr [ebp - 0x290] */
  WF64((uint32_t)(ebp + 0xfffffd70u), ST0); FPOP();
/* 554409: mov edx, dword ptr [ebp - 0x2a8] */
  edx = R32((uint32_t)(ebp + 0xfffffd58u));
/* 55440f: sub edx, dword ptr [ebp - 0x294] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd6cu)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 554415: mov dword ptr [ebp - 0x3a0], edx */
  W32((uint32_t)(ebp + 0xfffffc60u), edx);
/* 55441b: mov dword ptr [ebp - 0x39c], 0 */
  W32((uint32_t)(ebp + 0xfffffc64u), 0x0u);
/* 554425: fild qword ptr [ebp - 0x3a0] */
  { double v = (double)(int64_t)R64((uint32_t)(ebp + 0xfffffc60u)); FPUSH(v); }
/* 55442b: fld qword ptr [ebp - 0x290] */
  { double v = F64((uint32_t)(ebp + 0xfffffd70u)); FPUSH(v); }
/* 554431: fsub qword ptr [ebp - 0x2a0] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xfffffd60u)));
/* 554437: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 55443d: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
/* 55443f: fdivr qword ptr [0x5694a8] */
  ST0 = (F64((uint32_t)(0x5694a8u))) / ST0;
/* 554445: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 554448: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 55444b: mov eax, dword ptr [0x5a0f2c] */
  eax = R32((uint32_t)(0x5a0f2cu));
/* 554450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554451: mov ecx, dword ptr [0x5a0f28] */
  ecx = R32((uint32_t)(0x5a0f28u));
/* 554457: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 554458: call 0x4e2b17 */
  esp -= 4; W32(esp, 0x55445du); SPILL(); f_4e2b17(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 55445d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554460: fstp qword ptr [0x5a0f28] */
  WF64((uint32_t)(0x5a0f28u), ST0); FPOP();
/* 554466: jmp 0x5542c1 */
  goto L_5542c1;
L_55446b: /* 55446b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 55446d: call dword ptr [0x6ac7d0] */
  esp -= 4; W32(esp, 0x554473u); SPILL(); call_ind(R32(0x6ac7d0u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } /* WINMM!timeEndPeriod */ RELOAD();
/* 554473: fld qword ptr [0x5705b8] */
  { double v = F64((uint32_t)(0x5705b8u)); FPUSH(v); }
/* 554479: fdiv qword ptr [0x5a0f28] */
  ST0 = ST0 / (F64((uint32_t)(0x5a0f28u)));
/* 55447f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 554482: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 554485: push 0x5af774 */
  { uint32_t v = 0x5af774u; esp -= 4; W32(esp, v); }
/* 55448a: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 55448f: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 554495: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554496: call 0x4e30df */
  esp -= 4; W32(esp, 0x55449bu); SPILL(); f_4e30df(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 55449b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55449e: fld qword ptr [0x5705b8] */
  { double v = F64((uint32_t)(0x5705b8u)); FPUSH(v); }
/* 5544a4: fdiv qword ptr [0x5a0f28] */
  ST0 = ST0 / (F64((uint32_t)(0x5a0f28u)));
/* 5544aa: fst dword ptr [ebp - 0x3a4] */
  WF32((uint32_t)(ebp + 0xfffffc5cu), ST0);
/* 5544b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5544b1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 5544b4: call 0x4e15aa */
  esp -= 4; W32(esp, 0x5544b9u); SPILL(); f_4e15aa(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5544b9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5544bc: mov dword ptr [ebp - 0x3a8], eax */
  W32((uint32_t)(ebp + 0xfffffc58u), eax);
/* 5544c2: mov eax, dword ptr [ebp - 0x3a8] */
  eax = R32((uint32_t)(ebp + 0xfffffc58u));
/* 5544c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5544c9: push 0x5af798 */
  { uint32_t v = 0x5af798u; esp -= 4; W32(esp, v); }
/* 5544ce: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 5544d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5544d5: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x5544dau); SPILL(); f_4e17e4(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5544da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5544dd: mov dword ptr [ebp - 0x3ac], eax */
  W32((uint32_t)(ebp + 0xfffffc54u), eax);
/* 5544e3: mov edx, dword ptr [ebp - 0x3ac] */
  edx = R32((uint32_t)(ebp + 0xfffffc54u));
/* 5544e9: mov dword ptr [ebp - 0x3b0], edx */
  W32((uint32_t)(ebp + 0xfffffc50u), edx);
/* 5544ef: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 5544f3: mov ecx, dword ptr [ebp - 0x3b0] */
  ecx = R32((uint32_t)(ebp + 0xfffffc50u));
/* 5544f9: call 0x4e1037 */
  esp -= 4; W32(esp, 0x5544feu); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5544fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5544ff: push 0x5a1f58 */
  { uint32_t v = 0x5a1f58u; esp -= 4; W32(esp, v); }
/* 554504: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554509u); SPILL(); f_4e35ad(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 554509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55450c: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 554510: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 554516: call 0x4e1217 */
  esp -= 4; W32(esp, 0x55451bu); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 55451b: jmp 0x554561 */
  goto L_554561;
L_554561: /* 554561: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 554568: call 0x4e2987 */
  esp -= 4; W32(esp, 0x55456du); SPILL(); f_4e2987(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 55456d: mov dword ptr [ebp - 0x3b4], eax */
  W32((uint32_t)(ebp + 0xfffffc4cu), eax);
/* 554573: lea ecx, [ebp - 0x274] */
  ecx = (uint32_t)(ebp + 0xfffffd8cu);
/* 554579: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 55457a: push 0x5af844 */
  { uint32_t v = 0x5af844u; esp -= 4; W32(esp, v); }
/* 55457f: mov edx, dword ptr [ebp - 0x3b4] */
  edx = R32((uint32_t)(ebp + 0xfffffc4cu));
/* 554585: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554586: call 0x4e44a8 */
  esp -= 4; W32(esp, 0x55458bu); SPILL(); f_4e44a8(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 55458b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55458e: mov dword ptr [ebp - 0x3b8], eax */
  W32((uint32_t)(ebp + 0xfffffc48u), eax);
/* 554594: cmp dword ptr [ebp - 0x3b8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffc48u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 55459b: je 0x55465a */
  if (zf) goto L_55465a;
L_5545a1: /* 5545a1: fld dword ptr [ebp - 0x274] */
  { double v = F32((uint32_t)(ebp + 0xfffffd8cu)); FPUSH(v); }
/* 5545a7: fdivr qword ptr [0x5705b8] */
  ST0 = (F64((uint32_t)(0x5705b8u))) / ST0;
/* 5545ad: fstp qword ptr [0x5a0f28] */
  WF64((uint32_t)(0x5a0f28u), ST0); FPOP();
/* 5545b3: fld qword ptr [0x5705b8] */
  { double v = F64((uint32_t)(0x5705b8u)); FPUSH(v); }
/* 5545b9: fdiv qword ptr [0x5a0f28] */
  ST0 = ST0 / (F64((uint32_t)(0x5a0f28u)));
/* 5545bf: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5545c2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5545c5: push 0x5af858 */
  { uint32_t v = 0x5af858u; esp -= 4; W32(esp, v); }
/* 5545ca: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 5545cf: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 5545d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5545d5: call 0x4e30df */
  esp -= 4; W32(esp, 0x5545dau); SPILL(); f_4e30df(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5545da: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5545dd: fld qword ptr [0x5705b8] */
  { double v = F64((uint32_t)(0x5705b8u)); FPUSH(v); }
/* 5545e3: fdiv qword ptr [0x5a0f28] */
  ST0 = ST0 / (F64((uint32_t)(0x5a0f28u)));
/* 5545e9: fst dword ptr [ebp - 0x3bc] */
  WF32((uint32_t)(ebp + 0xfffffc44u), ST0);
/* 5545ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5545f0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 5545f3: call 0x4e15aa */
  esp -= 4; W32(esp, 0x5545f8u); SPILL(); f_4e15aa(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5545f8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5545fb: mov dword ptr [ebp - 0x3c0], eax */
  W32((uint32_t)(ebp + 0xfffffc40u), eax);
/* 554601: mov ecx, dword ptr [ebp - 0x3c0] */
  ecx = R32((uint32_t)(ebp + 0xfffffc40u));
/* 554607: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 554608: push 0x5af890 */
  { uint32_t v = 0x5af890u; esp -= 4; W32(esp, v); }
/* 55460d: lea edx, [ebp - 0x30c] */
  edx = (uint32_t)(ebp + 0xfffffcf4u);
/* 554613: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554614: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x554619u); SPILL(); f_4e17e4(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 554619: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55461c: mov dword ptr [ebp - 0x3c4], eax */
  W32((uint32_t)(ebp + 0xfffffc3cu), eax);
/* 554622: mov eax, dword ptr [ebp - 0x3c4] */
  eax = R32((uint32_t)(ebp + 0xfffffc3cu));
/* 554628: mov dword ptr [ebp - 0x3c8], eax */
  W32((uint32_t)(ebp + 0xfffffc38u), eax);
/* 55462e: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 554632: mov ecx, dword ptr [ebp - 0x3c8] */
  ecx = R32((uint32_t)(ebp + 0xfffffc38u));
/* 554638: call 0x4e1037 */
  esp -= 4; W32(esp, 0x55463du); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 55463d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55463e: push 0x5a1f58 */
  { uint32_t v = 0x5a1f58u; esp -= 4; W32(esp, v); }
/* 554643: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554648u); SPILL(); f_4e35ad(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 554648: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55464b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 55464f: lea ecx, [ebp - 0x30c] */
  ecx = (uint32_t)(ebp + 0xfffffcf4u);
/* 554655: call 0x4e1217 */
  esp -= 4; W32(esp, 0x55465au); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
L_55465a: /* 55465a: jmp 0x554694 */
  goto L_554694;
L_554694: /* 554694: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 55469b: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 55469f: lea eax, [ebp - 0x2d4] */
  eax = (uint32_t)(ebp + 0xfffffd2cu);
/* 5546a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5546a6: call dword ptr [0x6ac590] */
  esp -= 4; W32(esp, 0x5546acu); SPILL(); call_ind(R32(0x6ac590u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } /* KERNEL32!GlobalMemoryStatus */ RELOAD();
/* 5546ac: mov ecx, dword ptr [ebp - 0x2cc] */
  ecx = R32((uint32_t)(ebp + 0xfffffd34u));
/* 5546b2: mov dword ptr [0x5a0f40], ecx */
  W32((uint32_t)(0x5a0f40u), ecx);
/* 5546b8: mov edx, dword ptr [ebp - 0x2bc] */
  edx = R32((uint32_t)(ebp + 0xfffffd44u));
/* 5546be: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 5546c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5546c2: mov eax, dword ptr [ebp - 0x2c4] */
  eax = R32((uint32_t)(ebp + 0xfffffd3cu));
/* 5546c8: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 5546cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5546cc: mov ecx, dword ptr [ebp - 0x2cc] */
  ecx = R32((uint32_t)(ebp + 0xfffffd34u));
/* 5546d2: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 5546d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5546d6: push 0x5af8b0 */
  { uint32_t v = 0x5af8b0u; esp -= 4; W32(esp, v); }
/* 5546db: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 5546e0: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 5546e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5546e7: call 0x4e30df */
  esp -= 4; W32(esp, 0x5546ecu); SPILL(); f_4e30df(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5546ec: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5546ef: mov eax, dword ptr [ebp - 0x2cc] */
  eax = R32((uint32_t)(ebp + 0xfffffd34u));
/* 5546f5: shr eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 5546f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5546f9: push 0x5af904 */
  { uint32_t v = 0x5af904u; esp -= 4; W32(esp, v); }
/* 5546fe: lea ecx, [ebp - 0x31c] */
  ecx = (uint32_t)(ebp + 0xfffffce4u);
/* 554704: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 554705: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x55470au); SPILL(); f_4e17e4(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 55470a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55470d: mov dword ptr [ebp - 0x3cc], eax */
  W32((uint32_t)(ebp + 0xfffffc34u), eax);
/* 554713: mov edx, dword ptr [ebp - 0x3cc] */
  edx = R32((uint32_t)(ebp + 0xfffffc34u));
/* 554719: mov dword ptr [ebp - 0x3d0], edx */
  W32((uint32_t)(ebp + 0xfffffc30u), edx);
/* 55471f: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 554723: mov ecx, dword ptr [ebp - 0x3d0] */
  ecx = R32((uint32_t)(ebp + 0xfffffc30u));
/* 554729: call 0x4e1037 */
  esp -= 4; W32(esp, 0x55472eu); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 55472e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55472f: push 0x5a1f58 */
  { uint32_t v = 0x5a1f58u; esp -= 4; W32(esp, v); }
/* 554734: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554739u); SPILL(); f_4e35ad(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 554739: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55473c: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 554740: lea ecx, [ebp - 0x31c] */
  ecx = (uint32_t)(ebp + 0xfffffce4u);
/* 554746: call 0x4e1217 */
  esp -= 4; W32(esp, 0x55474bu); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 55474b: jmp 0x554785 */
  goto L_554785;
L_554785: /* 554785: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 55478c: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 554790: mov dword ptr [ebp - 0x2dc], 0 */
  W32((uint32_t)(ebp + 0xfffffd24u), 0x0u);
/* 55479a: mov dword ptr [ebp - 0x2e0], 0 */
  W32((uint32_t)(ebp + 0xfffffd20u), 0x0u);
/* 5547a4: lea edx, [ebp - 0x2e0] */
  edx = (uint32_t)(ebp + 0xfffffd20u);
/* 5547aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5547ab: lea eax, [ebp - 0x2dc] */
  eax = (uint32_t)(ebp + 0xfffffd24u);
/* 5547b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5547b2: call dword ptr [0x6ac4e0] */
  esp -= 4; W32(esp, 0x5547b8u); SPILL(); call_ind(R32(0x6ac4e0u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } /* KERNEL32!GetCurrentProcess */ RELOAD();
/* 5547b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5547b9: call dword ptr [0x6ac4e4] */
  esp -= 4; W32(esp, 0x5547bfu); SPILL(); call_ind(R32(0x6ac4e4u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } /* KERNEL32!GetProcessWorkingSetSize */ RELOAD();
/* 5547bf: mov ecx, dword ptr [ebp - 0x2e0] */
  ecx = R32((uint32_t)(ebp + 0xfffffd20u));
/* 5547c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5547c6: mov edx, dword ptr [ebp - 0x2dc] */
  edx = R32((uint32_t)(ebp + 0xfffffd24u));
/* 5547cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5547cd: push 0x5af92c */
  { uint32_t v = 0x5af92cu; esp -= 4; W32(esp, v); }
/* 5547d2: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 5547d7: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 5547dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5547dd: call 0x4e30df */
  esp -= 4; W32(esp, 0x5547e2u); SPILL(); f_4e30df(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 5547e2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5547e5: jmp 0x55481f */
  goto L_55481f;
L_55481f: /* 55481f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 554826: push 0x6a9e64 */
  { uint32_t v = 0x6a9e64u; esp -= 4; W32(esp, v); }
/* 55482b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55482d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55482f: push 0x5520f0 */
  { uint32_t v = 0x5520f0u; esp -= 4; W32(esp, v); }
/* 554834: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 554836: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 554838: call dword ptr [0x6ac550] */
  esp -= 4; W32(esp, 0x55483eu); SPILL(); call_ind(R32(0x6ac550u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } /* KERNEL32!CreateThread */ RELOAD();
/* 55483e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 554841: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 554845: jne 0x55485e */
  if (!zf) goto L_55485e;
L_554847: /* 554847: push 0x66a */
  { uint32_t v = 0x66au; esp -= 4; W32(esp, v); }
/* 55484c: push 0x5af960 */
  { uint32_t v = 0x5af960u; esp -= 4; W32(esp, v); }
/* 554851: push 0x5af970 */
  { uint32_t v = 0x5af970u; esp -= 4; W32(esp, v); }
/* 554856: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55485bu); SPILL(); f_4e33a5(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } RELOAD();
/* 55485b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_55485e: /* 55485e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 554861: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554862: call dword ptr [0x6ac574] */
  esp -= 4; W32(esp, 0x554868u); SPILL(); call_ind(R32(0x6ac574u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x55428au: guest_unwind_done(); RELOAD(); goto L_55428a; case 0x554561u: guest_unwind_done(); RELOAD(); goto L_554561; } return; } /* KERNEL32!CloseHandle */ RELOAD();
/* 554868: jmp 0x5548a2 */
  goto L_5548a2;
L_5548a2: /* 5548a2: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 5548a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5548ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5548b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5548b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5548b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5548b6: mov esp, ebp */
  esp = ebp;
/* 5548b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5548b9: ret  */
  esp += 4; SPILL(); return;
}

void f_55425a(void) {
  LOAD_REGS();
L_55425a: /* 55425a: push 0x5af6e8 */
  { uint32_t v = 0x5af6e8u; esp -= 4; W32(esp, v); }
/* 55425f: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 554264: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 554269: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55426a: call 0x4e30df */
  esp -= 4; W32(esp, 0x55426fu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 55426f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554272: push 0x5af75c */
  { uint32_t v = 0x5af75cu; esp -= 4; W32(esp, v); }
/* 554277: push 0x5a1f58 */
  { uint32_t v = 0x5a1f58u; esp -= 4; W32(esp, v); }
/* 55427c: call 0x4e4183 */
  esp -= 4; W32(esp, 0x554281u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 554281: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554284: mov eax, 0x55428a */
  eax = 0x55428au;
/* 554289: ret  */
  esp += 4; SPILL(); return;
}

void f_55451d(void) {
  LOAD_REGS();
L_55451d: /* 55451d: push 0x5af7b0 */
  { uint32_t v = 0x5af7b0u; esp -= 4; W32(esp, v); }
/* 554522: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 554527: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 55452c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55452d: call 0x4e30df */
  esp -= 4; W32(esp, 0x554532u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 554532: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554535: push 0x5af824 */
  { uint32_t v = 0x5af824u; esp -= 4; W32(esp, v); }
/* 55453a: push 0x5a1f58 */
  { uint32_t v = 0x5a1f58u; esp -= 4; W32(esp, v); }
/* 55453f: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554544u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 554544: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554547: mov dword ptr [0x5a0f28], 0 */
  W32((uint32_t)(0x5a0f28u), 0x0u);
/* 554551: mov dword ptr [0x5a0f2c], 0x3ff00000 */
  W32((uint32_t)(0x5a0f2cu), 0x3ff00000u);
/* 55455b: mov eax, 0x554561 */
  eax = 0x554561u;
/* 554560: ret  */
  esp += 4; SPILL(); return;
}

void f_55465c(void) {
  LOAD_REGS();
L_55465c: /* 55465c: mov ecx, dword ptr [ebp - 0x2b4] */
  ecx = R32((uint32_t)(ebp + 0xfffffd4cu));
/* 554662: mov dword ptr [ebp - 0x310], ecx */
  W32((uint32_t)(ebp + 0xfffffcf0u), ecx);
/* 554668: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 55466d: lea edx, [ebp - 0x310] */
  edx = (uint32_t)(ebp + 0xfffffcf0u);
/* 554673: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554674: call 0x554df6 */
  esp -= 4; W32(esp, 0x554679u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_554679(); return;
}

void f_554679(void) {
  LOAD_REGS();
L_554679: /* 554679: push 0x570594 */
  { uint32_t v = 0x570594u; esp -= 4; W32(esp, v); }
/* 55467e: push 0x5af8a4 */
  { uint32_t v = 0x5af8a4u; esp -= 4; W32(esp, v); }
/* 554683: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x554688u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 554688: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55468b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55468d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55468f: call 0x554df6 */
  esp -= 4; W32(esp, 0x554694u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 554694: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 55469b: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 55469f: lea eax, [ebp - 0x2d4] */
  eax = (uint32_t)(ebp + 0xfffffd2cu);
/* 5546a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5546a6: call dword ptr [0x6ac590] */
  esp -= 4; W32(esp, 0x5546acu); SPILL(); call_ind(R32(0x6ac590u)); if (g_unwind) return; /* KERNEL32!GlobalMemoryStatus */ RELOAD();
/* 5546ac: mov ecx, dword ptr [ebp - 0x2cc] */
  ecx = R32((uint32_t)(ebp + 0xfffffd34u));
/* 5546b2: mov dword ptr [0x5a0f40], ecx */
  W32((uint32_t)(0x5a0f40u), ecx);
/* 5546b8: mov edx, dword ptr [ebp - 0x2bc] */
  edx = R32((uint32_t)(ebp + 0xfffffd44u));
/* 5546be: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 5546c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5546c2: mov eax, dword ptr [ebp - 0x2c4] */
  eax = R32((uint32_t)(ebp + 0xfffffd3cu));
/* 5546c8: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 5546cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5546cc: mov ecx, dword ptr [ebp - 0x2cc] */
  ecx = R32((uint32_t)(ebp + 0xfffffd34u));
/* 5546d2: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 5546d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5546d6: push 0x5af8b0 */
  { uint32_t v = 0x5af8b0u; esp -= 4; W32(esp, v); }
/* 5546db: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 5546e0: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 5546e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5546e7: call 0x4e30df */
  esp -= 4; W32(esp, 0x5546ecu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5546ec: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5546ef: mov eax, dword ptr [ebp - 0x2cc] */
  eax = R32((uint32_t)(ebp + 0xfffffd34u));
/* 5546f5: shr eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 5546f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5546f9: push 0x5af904 */
  { uint32_t v = 0x5af904u; esp -= 4; W32(esp, v); }
/* 5546fe: lea ecx, [ebp - 0x31c] */
  ecx = (uint32_t)(ebp + 0xfffffce4u);
/* 554704: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 554705: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x55470au); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 55470a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55470d: mov dword ptr [ebp - 0x3cc], eax */
  W32((uint32_t)(ebp + 0xfffffc34u), eax);
/* 554713: mov edx, dword ptr [ebp - 0x3cc] */
  edx = R32((uint32_t)(ebp + 0xfffffc34u));
/* 554719: mov dword ptr [ebp - 0x3d0], edx */
  W32((uint32_t)(ebp + 0xfffffc30u), edx);
/* 55471f: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 554723: mov ecx, dword ptr [ebp - 0x3d0] */
  ecx = R32((uint32_t)(ebp + 0xfffffc30u));
/* 554729: call 0x4e1037 */
  esp -= 4; W32(esp, 0x55472eu); SPILL(); f_4e1037(); if (g_unwind) return; RELOAD();
/* 55472e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 55472f: push 0x5a1f58 */
  { uint32_t v = 0x5a1f58u; esp -= 4; W32(esp, v); }
/* 554734: call 0x4e35ad */
  esp -= 4; W32(esp, 0x554739u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 554739: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55473c: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 554740: lea ecx, [ebp - 0x31c] */
  ecx = (uint32_t)(ebp + 0xfffffce4u);
/* 554746: call 0x4e1217 */
  esp -= 4; W32(esp, 0x55474bu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 55474b: jmp 0x554785 */
  goto L_554785;
L_554785: /* 554785: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 55478c: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 554790: mov dword ptr [ebp - 0x2dc], 0 */
  W32((uint32_t)(ebp + 0xfffffd24u), 0x0u);
/* 55479a: mov dword ptr [ebp - 0x2e0], 0 */
  W32((uint32_t)(ebp + 0xfffffd20u), 0x0u);
/* 5547a4: lea edx, [ebp - 0x2e0] */
  edx = (uint32_t)(ebp + 0xfffffd20u);
/* 5547aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5547ab: lea eax, [ebp - 0x2dc] */
  eax = (uint32_t)(ebp + 0xfffffd24u);
/* 5547b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5547b2: call dword ptr [0x6ac4e0] */
  esp -= 4; W32(esp, 0x5547b8u); SPILL(); call_ind(R32(0x6ac4e0u)); if (g_unwind) return; /* KERNEL32!GetCurrentProcess */ RELOAD();
/* 5547b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5547b9: call dword ptr [0x6ac4e4] */
  esp -= 4; W32(esp, 0x5547bfu); SPILL(); call_ind(R32(0x6ac4e4u)); if (g_unwind) return; /* KERNEL32!GetProcessWorkingSetSize */ RELOAD();
/* 5547bf: mov ecx, dword ptr [ebp - 0x2e0] */
  ecx = R32((uint32_t)(ebp + 0xfffffd20u));
/* 5547c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5547c6: mov edx, dword ptr [ebp - 0x2dc] */
  edx = R32((uint32_t)(ebp + 0xfffffd24u));
/* 5547cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5547cd: push 0x5af92c */
  { uint32_t v = 0x5af92cu; esp -= 4; W32(esp, v); }
/* 5547d2: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 5547d7: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 5547dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5547dd: call 0x4e30df */
  esp -= 4; W32(esp, 0x5547e2u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5547e2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5547e5: jmp 0x55481f */
  goto L_55481f;
L_55481f: /* 55481f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 554826: push 0x6a9e64 */
  { uint32_t v = 0x6a9e64u; esp -= 4; W32(esp, v); }
/* 55482b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55482d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55482f: push 0x5520f0 */
  { uint32_t v = 0x5520f0u; esp -= 4; W32(esp, v); }
/* 554834: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 554836: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 554838: call dword ptr [0x6ac550] */
  esp -= 4; W32(esp, 0x55483eu); SPILL(); call_ind(R32(0x6ac550u)); if (g_unwind) return; /* KERNEL32!CreateThread */ RELOAD();
/* 55483e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 554841: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 554845: jne 0x55485e */
  if (!zf) goto L_55485e;
L_554847: /* 554847: push 0x66a */
  { uint32_t v = 0x66au; esp -= 4; W32(esp, v); }
/* 55484c: push 0x5af960 */
  { uint32_t v = 0x5af960u; esp -= 4; W32(esp, v); }
/* 554851: push 0x5af970 */
  { uint32_t v = 0x5af970u; esp -= 4; W32(esp, v); }
/* 554856: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55485bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55485b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_55485e: /* 55485e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 554861: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554862: call dword ptr [0x6ac574] */
  esp -= 4; W32(esp, 0x554868u); SPILL(); call_ind(R32(0x6ac574u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
/* 554868: jmp 0x5548a2 */
  goto L_5548a2;
L_5548a2: /* 5548a2: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 5548a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5548ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5548b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5548b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5548b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5548b6: mov esp, ebp */
  esp = ebp;
/* 5548b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5548b9: ret  */
  esp += 4; SPILL(); return;
}

void f_55474d(void) {
  LOAD_REGS();
L_55474d: /* 55474d: mov eax, dword ptr [ebp - 0x2d8] */
  eax = R32((uint32_t)(ebp + 0xfffffd28u));
/* 554753: mov dword ptr [ebp - 0x320], eax */
  W32((uint32_t)(ebp + 0xfffffce0u), eax);
/* 554759: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 55475e: lea ecx, [ebp - 0x320] */
  ecx = (uint32_t)(ebp + 0xfffffce0u);
/* 554764: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 554765: call 0x554df6 */
  esp -= 4; W32(esp, 0x55476au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_55476a(); return;
}

void f_55476a(void) {
  LOAD_REGS();
L_55476a: /* 55476a: push 0x57057c */
  { uint32_t v = 0x57057cu; esp -= 4; W32(esp, v); }
/* 55476f: push 0x5af924 */
  { uint32_t v = 0x5af924u; esp -= 4; W32(esp, v); }
/* 554774: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x554779u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 554779: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 55477c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55477e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 554780: call 0x554df6 */
  esp -= 4; W32(esp, 0x554785u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 554785: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 55478c: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 554790: mov dword ptr [ebp - 0x2dc], 0 */
  W32((uint32_t)(ebp + 0xfffffd24u), 0x0u);
/* 55479a: mov dword ptr [ebp - 0x2e0], 0 */
  W32((uint32_t)(ebp + 0xfffffd20u), 0x0u);
/* 5547a4: lea edx, [ebp - 0x2e0] */
  edx = (uint32_t)(ebp + 0xfffffd20u);
/* 5547aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5547ab: lea eax, [ebp - 0x2dc] */
  eax = (uint32_t)(ebp + 0xfffffd24u);
/* 5547b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5547b2: call dword ptr [0x6ac4e0] */
  esp -= 4; W32(esp, 0x5547b8u); SPILL(); call_ind(R32(0x6ac4e0u)); if (g_unwind) return; /* KERNEL32!GetCurrentProcess */ RELOAD();
/* 5547b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5547b9: call dword ptr [0x6ac4e4] */
  esp -= 4; W32(esp, 0x5547bfu); SPILL(); call_ind(R32(0x6ac4e4u)); if (g_unwind) return; /* KERNEL32!GetProcessWorkingSetSize */ RELOAD();
/* 5547bf: mov ecx, dword ptr [ebp - 0x2e0] */
  ecx = R32((uint32_t)(ebp + 0xfffffd20u));
/* 5547c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5547c6: mov edx, dword ptr [ebp - 0x2dc] */
  edx = R32((uint32_t)(ebp + 0xfffffd24u));
/* 5547cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5547cd: push 0x5af92c */
  { uint32_t v = 0x5af92cu; esp -= 4; W32(esp, v); }
/* 5547d2: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 5547d7: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 5547dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5547dd: call 0x4e30df */
  esp -= 4; W32(esp, 0x5547e2u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5547e2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5547e5: jmp 0x55481f */
  goto L_55481f;
L_55481f: /* 55481f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 554826: push 0x6a9e64 */
  { uint32_t v = 0x6a9e64u; esp -= 4; W32(esp, v); }
/* 55482b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55482d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55482f: push 0x5520f0 */
  { uint32_t v = 0x5520f0u; esp -= 4; W32(esp, v); }
/* 554834: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 554836: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 554838: call dword ptr [0x6ac550] */
  esp -= 4; W32(esp, 0x55483eu); SPILL(); call_ind(R32(0x6ac550u)); if (g_unwind) return; /* KERNEL32!CreateThread */ RELOAD();
/* 55483e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 554841: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 554845: jne 0x55485e */
  if (!zf) goto L_55485e;
L_554847: /* 554847: push 0x66a */
  { uint32_t v = 0x66au; esp -= 4; W32(esp, v); }
/* 55484c: push 0x5af960 */
  { uint32_t v = 0x5af960u; esp -= 4; W32(esp, v); }
/* 554851: push 0x5af970 */
  { uint32_t v = 0x5af970u; esp -= 4; W32(esp, v); }
/* 554856: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55485bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55485b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_55485e: /* 55485e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 554861: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554862: call dword ptr [0x6ac574] */
  esp -= 4; W32(esp, 0x554868u); SPILL(); call_ind(R32(0x6ac574u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
/* 554868: jmp 0x5548a2 */
  goto L_5548a2;
L_5548a2: /* 5548a2: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 5548a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5548ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5548b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5548b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5548b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5548b6: mov esp, ebp */
  esp = ebp;
/* 5548b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5548b9: ret  */
  esp += 4; SPILL(); return;
}

void f_5547e7(void) {
  LOAD_REGS();
L_5547e7: /* 5547e7: mov ecx, dword ptr [ebp - 0x2e4] */
  ecx = R32((uint32_t)(ebp + 0xfffffd1cu));
/* 5547ed: mov dword ptr [ebp - 0x324], ecx */
  W32((uint32_t)(ebp + 0xfffffcdcu), ecx);
/* 5547f3: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5547f8: lea edx, [ebp - 0x324] */
  edx = (uint32_t)(ebp + 0xfffffcdcu);
/* 5547fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5547ff: call 0x554df6 */
  esp -= 4; W32(esp, 0x554804u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_554804(); return;
}

void f_554804(void) {
  LOAD_REGS();
L_554804: /* 554804: push 0x570558 */
  { uint32_t v = 0x570558u; esp -= 4; W32(esp, v); }
/* 554809: push 0x5af958 */
  { uint32_t v = 0x5af958u; esp -= 4; W32(esp, v); }
/* 55480e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x554813u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 554813: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554816: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 554818: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55481a: call 0x554df6 */
  esp -= 4; W32(esp, 0x55481fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 55481f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 554826: push 0x6a9e64 */
  { uint32_t v = 0x6a9e64u; esp -= 4; W32(esp, v); }
/* 55482b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55482d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55482f: push 0x5520f0 */
  { uint32_t v = 0x5520f0u; esp -= 4; W32(esp, v); }
/* 554834: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 554836: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 554838: call dword ptr [0x6ac550] */
  esp -= 4; W32(esp, 0x55483eu); SPILL(); call_ind(R32(0x6ac550u)); if (g_unwind) return; /* KERNEL32!CreateThread */ RELOAD();
/* 55483e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 554841: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 554845: jne 0x55485e */
  if (!zf) goto L_55485e;
L_554847: /* 554847: push 0x66a */
  { uint32_t v = 0x66au; esp -= 4; W32(esp, v); }
/* 55484c: push 0x5af960 */
  { uint32_t v = 0x5af960u; esp -= 4; W32(esp, v); }
/* 554851: push 0x5af970 */
  { uint32_t v = 0x5af970u; esp -= 4; W32(esp, v); }
/* 554856: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x55485bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 55485b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_55485e: /* 55485e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 554861: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554862: call dword ptr [0x6ac574] */
  esp -= 4; W32(esp, 0x554868u); SPILL(); call_ind(R32(0x6ac574u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
/* 554868: jmp 0x5548a2 */
  goto L_5548a2;
L_5548a2: /* 5548a2: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 5548a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5548ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5548b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5548b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5548b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5548b6: mov esp, ebp */
  esp = ebp;
/* 5548b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5548b9: ret  */
  esp += 4; SPILL(); return;
}

void f_55486a(void) {
  LOAD_REGS();
L_55486a: /* 55486a: mov ecx, dword ptr [ebp - 0x2e8] */
  ecx = R32((uint32_t)(ebp + 0xfffffd18u));
/* 554870: mov dword ptr [ebp - 0x328], ecx */
  W32((uint32_t)(ebp + 0xfffffcd8u), ecx);
/* 554876: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 55487b: lea edx, [ebp - 0x328] */
  edx = (uint32_t)(ebp + 0xfffffcd8u);
/* 554881: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 554882: call 0x554df6 */
  esp -= 4; W32(esp, 0x554887u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_554887(); return;
}

void f_554887(void) {
  LOAD_REGS();
L_554887: /* 554887: push 0x570530 */
  { uint32_t v = 0x570530u; esp -= 4; W32(esp, v); }
/* 55488c: push 0x5af978 */
  { uint32_t v = 0x5af978u; esp -= 4; W32(esp, v); }
/* 554891: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x554896u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 554896: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 554899: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55489b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 55489d: call 0x554df6 */
  esp -= 4; W32(esp, 0x5548a2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 5548a2: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 5548a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5548ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5548b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5548b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5548b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5548b6: mov esp, ebp */
  esp = ebp;
/* 5548b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5548b9: ret  */
  esp += 4; SPILL(); return;
}

void f_554be4(void) {
  LOAD_REGS();
L_554be4: /* 554be4: jmp dword ptr [0x6ac848] */
  SPILL(); f_1012e90(); return; /* vorbisfile!ov_time_seek */
}

void f_554bea(void) {
  LOAD_REGS();
L_554bea: /* 554bea: jmp dword ptr [0x6ac844] */
  SPILL(); f_1013270(); return; /* vorbisfile!ov_read */
}

void f_554bf0(void) {
  LOAD_REGS();
L_554bf0: /* 554bf0: jmp dword ptr [0x6ac840] */
  SPILL(); f_1013820(); return; /* vorbisfile!ov_open */
}

void f_554bf6(void) {
  LOAD_REGS();
L_554bf6: /* 554bf6: jmp dword ptr [0x6ac83c] */
  SPILL(); f_1011d80(); return; /* vorbisfile!ov_clear */
}

void f_554bfc(void) {
  LOAD_REGS();
L_554bfc: /* 554bfc: jmp dword ptr [0x6ac7d0] */
  SPILL(); call_ind(R32(0x6ac7d0u)); return; /* WINMM!timeEndPeriod */
}

void f_554c02(void) {
  LOAD_REGS();
L_554c02: /* 554c02: jmp dword ptr [0x6ac7c8] */
  SPILL(); call_ind(R32(0x6ac7c8u)); return; /* WINMM!timeGetTime */
}

void f_554c08(void) {
  LOAD_REGS();
L_554c08: /* 554c08: jmp dword ptr [0x6ac7cc] */
  SPILL(); call_ind(R32(0x6ac7ccu)); return; /* WINMM!timeBeginPeriod */
}

void f_554c0e(void) {
  LOAD_REGS();
L_554c0e: /* 554c0e: jmp dword ptr [0x6ac4e8] */
  SPILL(); call_ind(R32(0x6ac4e8u)); return; /* KERNEL32!InterlockedExchange */
}

void f_554c14(void) {
  LOAD_REGS();
L_554c14: /* 554c14: jmp dword ptr [0x6ac4ec] */
  SPILL(); call_ind(R32(0x6ac4ecu)); return; /* KERNEL32!GetACP */
}

void f_554c1a(void) {
  LOAD_REGS();
L_554c1a: /* 554c1a: jmp dword ptr [0x6ac4f0] */
  SPILL(); call_ind(R32(0x6ac4f0u)); return; /* KERNEL32!GetLocaleInfoA */
}

void f_554c20(void) {
  LOAD_REGS();
L_554c20: /* 554c20: jmp dword ptr [0x6ac4f4] */
  SPILL(); call_ind(R32(0x6ac4f4u)); return; /* KERNEL32!GetThreadLocale */
}

void f_554c26(void) {
  LOAD_REGS();
L_554c26: /* 554c26: jmp dword ptr [0x6ac4f8] */
  SPILL(); call_ind(R32(0x6ac4f8u)); return; /* KERNEL32!GetVersionExW */
}

void f_554c2c(void) {
  LOAD_REGS();
L_554c2c: /* 554c2c: jmp dword ptr [0x6ac4fc] */
  SPILL(); call_ind(R32(0x6ac4fcu)); return; /* KERNEL32!OutputDebugStringW */
}

void f_554c32(void) {
  LOAD_REGS();
L_554c32: /* 554c32: jmp dword ptr [0x6ac500] */
  SPILL(); call_ind(R32(0x6ac500u)); return; /* KERNEL32!WideCharToMultiByte */
}

void f_554c38(void) {
  LOAD_REGS();
L_554c38: /* 554c38: jmp dword ptr [0x6ac504] */
  SPILL(); call_ind(R32(0x6ac504u)); return; /* KERNEL32!MultiByteToWideChar */
}

void f_554c3e(void) {
  LOAD_REGS();
L_554c3e: /* 554c3e: jmp dword ptr [0x6ac508] */
  SPILL(); call_ind(R32(0x6ac508u)); return; /* KERNEL32!ExitProcess */
}

void f_554c44(void) {
  LOAD_REGS();
L_554c44: /* 554c44: jmp dword ptr [0x6ac50c] */
  SPILL(); call_ind(R32(0x6ac50cu)); return; /* KERNEL32!FormatMessageW */
}

void f_554c4a(void) {
  LOAD_REGS();
L_554c4a: /* 554c4a: jmp dword ptr [0x6ac510] */
  SPILL(); call_ind(R32(0x6ac510u)); return; /* KERNEL32!FormatMessageA */
}

void f_554c50(void) {
  LOAD_REGS();
L_554c50: /* 554c50: jmp dword ptr [0x6ac514] */
  SPILL(); call_ind(R32(0x6ac514u)); return; /* KERNEL32!GetLastError */
}

void f_554c56(void) {
  LOAD_REGS();
L_554c56: /* 554c56: jmp dword ptr [0x6ac518] */
  SPILL(); call_ind(R32(0x6ac518u)); return; /* KERNEL32!GlobalUnlock */
}

void f_554c5c(void) {
  LOAD_REGS();
L_554c5c: /* 554c5c: jmp dword ptr [0x6ac51c] */
  SPILL(); call_ind(R32(0x6ac51cu)); return; /* KERNEL32!GlobalLock */
}

void f_554c62(void) {
  LOAD_REGS();
L_554c62: /* 554c62: jmp dword ptr [0x6ac520] */
  SPILL(); call_ind(R32(0x6ac520u)); return; /* KERNEL32!GlobalAlloc */
}

void f_554c68(void) {
  LOAD_REGS();
L_554c68: /* 554c68: jmp dword ptr [0x6ac524] */
  SPILL(); call_ind(R32(0x6ac524u)); return; /* KERNEL32!LoadLibraryA */
}

void f_554c6e(void) {
  LOAD_REGS();
L_554c6e: /* 554c6e: jmp dword ptr [0x6ac528] */
  SPILL(); call_ind(R32(0x6ac528u)); return; /* KERNEL32!LoadLibraryW */
}

void f_554c74(void) {
  LOAD_REGS();
L_554c74: /* 554c74: jmp dword ptr [0x6ac52c] */
  SPILL(); call_ind(R32(0x6ac52cu)); return; /* KERNEL32!FreeLibrary */
}

void f_554c7a(void) {
  LOAD_REGS();
L_554c7a: /* 554c7a: jmp dword ptr [0x6ac530] */
  SPILL(); call_ind(R32(0x6ac530u)); return; /* KERNEL32!GetProcAddress */
}

void f_554c80(void) {
  LOAD_REGS();
L_554c80: /* 554c80: jmp dword ptr [0x6ac534] */
  SPILL(); call_ind(R32(0x6ac534u)); return; /* KERNEL32!DebugBreak */
}

void f_554c86(void) {
  LOAD_REGS();
L_554c86: /* 554c86: jmp dword ptr [0x6ac538] */
  SPILL(); call_ind(R32(0x6ac538u)); return; /* KERNEL32!LoadLibraryExW */
}

void f_554c8c(void) {
  LOAD_REGS();
L_554c8c: /* 554c8c: jmp dword ptr [0x6ac53c] */
  SPILL(); call_ind(R32(0x6ac53cu)); return; /* KERNEL32!Sleep */
}

void f_554c92(void) {
  LOAD_REGS();
L_554c92: /* 554c92: jmp dword ptr [0x6ac540] */
  SPILL(); call_ind(R32(0x6ac540u)); return; /* KERNEL32!GetLocalTime */
}

void f_554c98(void) {
  LOAD_REGS();
L_554c98: /* 554c98: jmp dword ptr [0x6ac544] */
  SPILL(); call_ind(R32(0x6ac544u)); return; /* KERNEL32!SystemTimeToFileTime */
}

void f_554c9e(void) {
  LOAD_REGS();
L_554c9e: /* 554c9e: jmp dword ptr [0x6ac548] */
  SPILL(); call_ind(R32(0x6ac548u)); return; /* KERNEL32!GetTickCount */
}

void f_554ca4(void) {
  LOAD_REGS();
L_554ca4: /* 554ca4: jmp dword ptr [0x6ac54c] */
  SPILL(); call_ind(R32(0x6ac54cu)); return; /* KERNEL32!CreateProcessW */
}

void f_554caa(void) {
  LOAD_REGS();
L_554caa: /* 554caa: jmp dword ptr [0x6ac554] */
  SPILL(); call_ind(R32(0x6ac554u)); return; /* KERNEL32!CreateProcessA */
}

void f_554cb0(void) {
  LOAD_REGS();
L_554cb0: /* 554cb0: jmp dword ptr [0x6ac4d4] */
  SPILL(); call_ind(R32(0x6ac4d4u)); return; /* KERNEL32!GetExitCodeProcess */
}

void f_554cb6(void) {
  LOAD_REGS();
L_554cb6: /* 554cb6: jmp dword ptr [0x6ac558] */
  SPILL(); call_ind(R32(0x6ac558u)); return; /* KERNEL32!InitializeCriticalSection */
}

void f_554cbc(void) {
  LOAD_REGS();
L_554cbc: /* 554cbc: jmp dword ptr [0x6ac55c] */
  SPILL(); call_ind(R32(0x6ac55cu)); return; /* KERNEL32!DeleteCriticalSection */
}

void f_554cc2(void) {
  LOAD_REGS();
L_554cc2: /* 554cc2: jmp dword ptr [0x6ac560] */
  SPILL(); call_ind(R32(0x6ac560u)); return; /* KERNEL32!EnterCriticalSection */
}

void f_554cc8(void) {
  LOAD_REGS();
L_554cc8: /* 554cc8: jmp dword ptr [0x6ac564] */
  SPILL(); call_ind(R32(0x6ac564u)); return; /* KERNEL32!LeaveCriticalSection */
}

void f_554cce(void) {
  LOAD_REGS();
L_554cce: /* 554cce: jmp dword ptr [0x6ac568] */
  SPILL(); call_ind(R32(0x6ac568u)); return; /* KERNEL32!ReadFile */
}

void f_554cd4(void) {
  LOAD_REGS();
L_554cd4: /* 554cd4: jmp dword ptr [0x6ac56c] */
  SPILL(); call_ind(R32(0x6ac56cu)); return; /* KERNEL32!CreateFileA */
}

void f_554cda(void) {
  LOAD_REGS();
L_554cda: /* 554cda: jmp dword ptr [0x6ac570] */
  SPILL(); call_ind(R32(0x6ac570u)); return; /* KERNEL32!CreateFileW */
}

void f_554ce0(void) {
  LOAD_REGS();
L_554ce0: /* 554ce0: jmp dword ptr [0x6ac574] */
  SPILL(); call_ind(R32(0x6ac574u)); return; /* KERNEL32!CloseHandle */
}

void f_554ce6(void) {
  LOAD_REGS();
L_554ce6: /* 554ce6: jmp dword ptr [0x6ac578] */
  SPILL(); call_ind(R32(0x6ac578u)); return; /* KERNEL32!GetModuleFileNameW */
}

void f_554cec(void) {
  LOAD_REGS();
L_554cec: /* 554cec: jmp dword ptr [0x6ac57c] */
  SPILL(); call_ind(R32(0x6ac57cu)); return; /* KERNEL32!GetModuleFileNameA */
}

void f_554cf2(void) {
  LOAD_REGS();
L_554cf2: /* 554cf2: jmp dword ptr [0x6ac580] */
  SPILL(); call_ind(R32(0x6ac580u)); return; /* KERNEL32!GetComputerNameW */
}

void f_554cf8(void) {
  LOAD_REGS();
L_554cf8: /* 554cf8: jmp dword ptr [0x6ac584] */
  SPILL(); call_ind(R32(0x6ac584u)); return; /* KERNEL32!GetComputerNameA */
}

void f_554cfe(void) {
  LOAD_REGS();
L_554cfe: /* 554cfe: jmp dword ptr [0x6ac588] */
  SPILL(); call_ind(R32(0x6ac588u)); return; /* KERNEL32!GetVersionExA */
}

void f_554d04(void) {
  LOAD_REGS();
L_554d04: /* 554d04: jmp dword ptr [0x6ac58c] */
  SPILL(); call_ind(R32(0x6ac58cu)); return; /* KERNEL32!ExitThread */
}

void f_554d0a(void) {
  LOAD_REGS();
L_554d0a: /* 554d0a: jmp dword ptr [0x6ac590] */
  SPILL(); call_ind(R32(0x6ac590u)); return; /* KERNEL32!GlobalMemoryStatus */
}

void f_554d10(void) {
  LOAD_REGS();
L_554d10: /* 554d10: jmp dword ptr [0x6ac550] */
  SPILL(); call_ind(R32(0x6ac550u)); return; /* KERNEL32!CreateThread */
}

void f_554d16(void) {
  LOAD_REGS();
L_554d16: /* 554d16: jmp dword ptr [0x6ac4e4] */
  SPILL(); call_ind(R32(0x6ac4e4u)); return; /* KERNEL32!GetProcessWorkingSetSize */
}

void f_554d1c(void) {
  LOAD_REGS();
L_554d1c: /* 554d1c: jmp dword ptr [0x6ac4e0] */
  SPILL(); call_ind(R32(0x6ac4e0u)); return; /* KERNEL32!GetCurrentProcess */
}

void f_554d22(void) {
  LOAD_REGS();
L_554d22: /* 554d22: jmp dword ptr [0x6ac4dc] */
  SPILL(); call_ind(R32(0x6ac4dcu)); return; /* KERNEL32!GetSystemInfo */
}

void f_554d28(void) {
  LOAD_REGS();
L_554d28: /* 554d28: jmp dword ptr [0x6ac4d8] */
  SPILL(); call_ind(R32(0x6ac4d8u)); return; /* KERNEL32!SetConsoleCtrlHandler */
}

void f_554d2e(void) {
  LOAD_REGS();
L_554d2e: /* 554d2e: jmp dword ptr [0x6ac780] */
  SPILL(); call_ind(R32(0x6ac780u)); return; /* USER32!PostQuitMessage */
}

void f_554d34(void) {
  LOAD_REGS();
L_554d34: /* 554d34: jmp dword ptr [0x6ac77c] */
  SPILL(); call_ind(R32(0x6ac77cu)); return; /* USER32!CloseClipboard */
}

void f_554d3a(void) {
  LOAD_REGS();
L_554d3a: /* 554d3a: jmp dword ptr [0x6ac784] */
  SPILL(); call_ind(R32(0x6ac784u)); return; /* USER32!SetClipboardData */
}

void f_554d40(void) {
  LOAD_REGS();
L_554d40: /* 554d40: jmp dword ptr [0x6ac788] */
  SPILL(); call_ind(R32(0x6ac788u)); return; /* USER32!EmptyClipboard */
}

void f_554d46(void) {
  LOAD_REGS();
L_554d46: /* 554d46: jmp dword ptr [0x6ac778] */
  SPILL(); call_ind(R32(0x6ac778u)); return; /* USER32!OpenClipboard */
}

void f_554d4c(void) {
  LOAD_REGS();
L_554d4c: /* 554d4c: jmp dword ptr [0x6ac794] */
  SPILL(); call_ind(R32(0x6ac794u)); return; /* USER32!GetActiveWindow */
}

void f_554d52(void) {
  LOAD_REGS();
L_554d52: /* 554d52: jmp dword ptr [0x6ac790] */
  SPILL(); call_ind(R32(0x6ac790u)); return; /* USER32!MessageBoxW */
}

void f_554d58(void) {
  LOAD_REGS();
L_554d58: /* 554d58: jmp dword ptr [0x6ac78c] */
  SPILL(); call_ind(R32(0x6ac78cu)); return; /* USER32!GetClipboardData */
}

void f_554d5e(void) {
  LOAD_REGS();
L_554d5e: /* 554d5e: jmp dword ptr [0x6ac4a4] */
  SPILL(); call_ind(R32(0x6ac4a4u)); return; /* ADVAPI32!GetUserNameW */
}

void f_554d64(void) {
  LOAD_REGS();
L_554d64: /* 554d64: jmp dword ptr [0x6ac4a0] */
  SPILL(); call_ind(R32(0x6ac4a0u)); return; /* ADVAPI32!GetUserNameA */
}

void f_554d6a(void) {
  LOAD_REGS();
L_554d6a: /* 554d6a: jmp dword ptr [0x6ac748] */
  SPILL(); call_ind(R32(0x6ac748u)); return; /* SHELL32!ShellExecuteA */
}

void f_554d70(void) {
  LOAD_REGS();
L_554d70: /* 554d70: jmp dword ptr [0x6ac744] */
  SPILL(); call_ind(R32(0x6ac744u)); return; /* SHELL32!ShellExecuteW */
}

void f_554d76(void) {
  LOAD_REGS();
L_554d76: /* 554d76: jmp dword ptr [0x6ac808] */
  SPILL(); call_ind(R32(0x6ac808u)); return; /* ole32!CoUninitialize */
}

void f_554d7c(void) {
  LOAD_REGS();
L_554d7c: /* 554d7c: jmp dword ptr [0x6ac804] */
  SPILL(); call_ind(R32(0x6ac804u)); return; /* ole32!CoCreateInstance */
}

void f_554d82(void) {
  LOAD_REGS();
L_554d82: /* 554d82: jmp dword ptr [0x6ac800] */
  SPILL(); call_ind(R32(0x6ac800u)); return; /* ole32!CoInitializeEx */
}

void f_554d88(void) {
  LOAD_REGS();
L_554d88: /* 554d88: jmp dword ptr [0x6ac80c] */
  SPILL(); call_ind(R32(0x6ac80cu)); return; /* ole32!CoCreateGuid */
}

void f_554d8e(void) {
  LOAD_REGS();
L_554d8e: /* 554d8e: jmp dword ptr [0x6ac714] */
  SPILL(); call_ind(R32(0x6ac714u)); return; /* OLEAUT32!SysAllocString */
}

void f_554d94(void) {
  LOAD_REGS();
L_554d94: /* 554d94: jmp dword ptr [0x6ac710] */
  SPILL(); call_ind(R32(0x6ac710u)); return; /* OLEAUT32!SysFreeString */
}

void f_554d9a(void) {
  LOAD_REGS();
L_554d9a: /* 554d9a: mov eax, ecx */
  eax = ecx;
/* 554d9c: mov dword ptr [eax], 0x5705f4 */
  W32((uint32_t)(eax), 0x5705f4u);
/* 554da2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_554da5(void) {
  LOAD_REGS();
L_554da5: /* 554da5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 554da6: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 554daa: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 554dad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 554dae: mov esi, ecx */
  esi = ecx;
/* 554db0: je 0x554dd6 */
  if (zf) goto L_554dd6;
L_554db2: /* 554db2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 554db3: push 0x555380 */
  { uint32_t v = 0x555380u; esp -= 4; W32(esp, v); }
/* 554db8: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 554dbb: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 554dbd: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 554dbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 554dc0: call 0x554e72 */
  esp -= 4; W32(esp, 0x554dc5u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 554dc5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 554dc8: je 0x554dd1 */
  if (zf) goto L_554dd1;
L_554dca: /* 554dca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 554dcb: call 0x4e1a82 */
  esp -= 4; W32(esp, 0x554dd0u); SPILL(); f_4e1a82(); if (g_unwind) return; RELOAD();
/* 554dd0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_554dd1: /* 554dd1: mov eax, edi */
  eax = edi;
/* 554dd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 554dd4: jmp 0x554deb */
  goto L_554deb;
L_554dd6: /* 554dd6: mov ecx, esi */
  ecx = esi;
/* 554dd8: call 0x555380 */
  esp -= 4; W32(esp, 0x554dddu); SPILL(); f_555380(); if (g_unwind) return; RELOAD();
/* 554ddd: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 554de0: je 0x554de9 */
  if (zf) goto L_554de9;
L_554de2: /* 554de2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 554de3: call 0x4e1a82 */
  esp -= 4; W32(esp, 0x554de8u); SPILL(); f_4e1a82(); if (g_unwind) return; RELOAD();
/* 554de8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_554de9: /* 554de9: mov eax, esi */
  eax = esi;
L_554deb: /* 554deb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 554dec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 554ded: ret 4 */
  esp += 8; SPILL(); return;
}

void f_554df0(void) {
  LOAD_REGS();
L_554df0: /* 554df0: mov eax, ecx */
  eax = ecx;
/* 554df2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_554df6(void) {
  LOAD_REGS();
L_554df6: /* 554df6: jmp dword ptr [0x6ac654] */
  SPILL(); f_41b9d1(); return; /* MSVCR70!_CxxThrowException */
}

void f_554dfc(void) {
  LOAD_REGS();
L_554dfc: /* 554dfc: jmp dword ptr [0x6ac658] */
  SPILL(); f_4276f0(); return; /* MSVCR70!_purecall */
}

void f_554e02(void) {
  LOAD_REGS();
L_554e02: /* 554e02: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 554e04: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 554e0a: je 0x554e0f */
  if (zf) goto L_554e0f;
L_554e0c: /* 554e0c: xor eax, eax */
  eax = 0;
/* 554e0e: ret  */
  esp += 4; SPILL(); return;
L_554e0f: /* 554e0f: jmp 0x555386 */
  SPILL(); f_555386(); return;
}

void f_554e14(void) {
  LOAD_REGS();
L_554e14: /* 554e14: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 554e16: push 0x5705f8 */
  { uint32_t v = 0x5705f8u; esp -= 4; W32(esp, v); }
/* 554e1b: call 0x55538c */
  esp -= 4; W32(esp, 0x554e20u); SPILL(); f_55538c(); if (g_unwind) return; RELOAD();
/* 554e20: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_554e24: /* 554e24: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 554e27: js 0x554e37 */
  if (sf) goto L_554e37;
L_554e29: /* 554e29: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 554e2c: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 554e2f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 554e32: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0x554e35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 554e35: jmp 0x554e24 */
  goto L_554e24;
L_554e37: /* 554e37: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 554e3b: call 0x5553c7 */
  esp -= 4; W32(esp, 0x554e40u); SPILL(); f_5553c7(); if (g_unwind) return; RELOAD();
/* 554e40: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_554e43(void) {
  LOAD_REGS();
L_554e43: /* 554e43: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 554e46: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 554e49: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 554e4c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 554e4e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 554e51: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 554e54: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 554e5a: je 0x554e6c */
  if (zf) goto L_554e6c;
L_554e5c: /* 554e5c: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 554e63: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 554e66: ret  */
  esp += 4; SPILL(); return;
L_554e6c: /* 554e6c: call 0x555386 */
  esp -= 4; W32(esp, 0x554e71u); SPILL(); f_555386(); if (g_unwind) return; RELOAD();
L_554e71: guest_badaddr(0x554e71); return;
}

void f_554e67(void) {
  LOAD_REGS();
  goto L_554e67;
L_554e37: /* 554e37: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 554e3b: call 0x5553c7 */
  esp -= 4; W32(esp, 0x554e40u); SPILL(); f_5553c7(); if (g_unwind) return; RELOAD();
/* 554e40: ret 0x10 */
  esp += 20; SPILL(); return;
L_554e67: /* 554e67: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 554e6a: jmp 0x554e37 */
  goto L_554e37;
}

void f_554e72(void) {
  LOAD_REGS();
L_554e72: /* 554e72: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 554e74: push 0x570608 */
  { uint32_t v = 0x570608u; esp -= 4; W32(esp, v); }
/* 554e79: call 0x55538c */
  esp -= 4; W32(esp, 0x554e7eu); SPILL(); f_55538c(); if (g_unwind) return; RELOAD();
/* 554e7e: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 554e82: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 554e85: mov eax, esi */
  eax = esi;
/* 554e87: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 554e8b: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 554e8e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_554e92: /* 554e92: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 554e95: js 0x554ea2 */
  if (sf) goto L_554ea2;
L_554e97: /* 554e97: sub dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 554e9a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 554e9d: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0x554ea0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 554ea0: jmp 0x554e92 */
  goto L_554e92;
L_554ea2: /* 554ea2: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 554ea9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 554ead: call 0x554eba */
  esp -= 4; W32(esp, 0x554eb2u); SPILL(); f_554eba(); if (g_unwind) return; RELOAD();
/* 554eb2: call 0x5553c7 */
  esp -= 4; W32(esp, 0x554eb7u); SPILL(); f_5553c7(); if (g_unwind) return; RELOAD();
/* 554eb7: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_554eba(void) {
  LOAD_REGS();
L_554eba: /* 554eba: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 554ebe: jne 0x554ed1 */
  if (!zf) goto L_554ed1;
L_554ec0: /* 554ec0: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 554ec3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 554ec6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 554ec9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 554ecc: call 0x554e14 */
  esp -= 4; W32(esp, 0x554ed1u); SPILL(); f_554e14(); if (g_unwind) return; RELOAD();
L_554ed1: /* 554ed1: ret  */
  esp += 4; SPILL(); return;
}

void f_554ee0(void) {
  LOAD_REGS();
L_554ee0: /* 554ee0: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 554ee3: jae 0x554efa */
  if (!cf) goto L_554efa;
L_554ee5: /* 554ee5: cmp cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 554ee8: jae 0x554ef0 */
  if (!cf) goto L_554ef0;
L_554eea: /* 554eea: shld edx, eax, cl */
  { uint32_t a = edx, b = eax, c = ((ecx & 31)) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  edx = r;
  } }
/* 554eed: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 554eef: ret  */
  esp += 4; SPILL(); return;
L_554ef0: /* 554ef0: mov edx, eax */
  edx = eax;
/* 554ef2: xor eax, eax */
  eax = 0;
/* 554ef4: and cl, 0x1f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 554ef7: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 554ef9: ret  */
  esp += 4; SPILL(); return;
L_554efa: /* 554efa: xor eax, eax */
  eax = 0;
/* 554efc: xor edx, edx */
  edx = 0;
/* 554efe: ret  */
  esp += 4; SPILL(); return;
}

void f_554f00(void) {
  LOAD_REGS();
L_554f00: /* 554f00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 554f01: mov ebp, esp */
  ebp = esp;
/* 554f03: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 554f06: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 554f09: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 554f0b: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 554f0f: fistp qword ptr [esp + 0x10] */
  W64((uint32_t)(esp + 0x10u), (uint64_t)fpu_toint64(ST0)); FPOP();
/* 554f13: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 554f17: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 554f1b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 554f1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 554f21: je 0x554f5f */
  if (zf) goto L_554f5f;
L_554f23: /* 554f23: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 554f25: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 554f27: jns 0x554f47 */
  if (!sf) goto L_554f47;
L_554f29: /* 554f29: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 554f2c: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 554f2f: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 554f35: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 554f3b: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  eax = r;
  }
/* 554f3e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 554f42: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 554f45: jmp 0x554f73 */
  goto L_554f73;
L_554f47: /* 554f47: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 554f4a: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 554f4d: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 554f53: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 554f56: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 554f5a: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 554f5d: jmp 0x554f73 */
  goto L_554f73;
L_554f5f: /* 554f5f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 554f63: test edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 554f69: jne 0x554f23 */
  if (!zf) goto L_554f23;
L_554f6b: /* 554f6b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 554f6f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_554f73: /* 554f73: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 554f74: ret  */
  esp += 4; SPILL(); return;
}

void f_554f80(void) {
  LOAD_REGS();
L_554f80: /* 554f80: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 554f85: jae 0x554f95 */
  if (!cf) goto L_554f95;
L_554f87: /* 554f87: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 554f89: add eax, esp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 554f8b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 554f8e: test dword ptr [eax], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 554f90: xchg esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  esp = b;
  eax = a;
  }
/* 554f91: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 554f93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554f94: ret  */
  esp += 4; SPILL(); return;
L_554f95: /* 554f95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 554f96: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
L_554f9a: /* 554f9a: sub ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 554fa0: sub eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 554fa5: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 554fa7: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 554fac: jae 0x554f9a */
  if (!cf) goto L_554f9a;
L_554fae: /* 554fae: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 554fb0: mov eax, esp */
  eax = esp;
/* 554fb2: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 554fb4: mov esp, ecx */
  esp = ecx;
/* 554fb6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 554fb8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 554fbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 554fbc: ret  */
  esp += 4; SPILL(); return;
}

void f_554fbd(void) {
  LOAD_REGS();
L_554fbd: /* 554fbd: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 554fbf: push 0x570618 */
  { uint32_t v = 0x570618u; esp -= 4; W32(esp, v); }
/* 554fc4: call 0x55538c */
  esp -= 4; W32(esp, 0x554fc9u); SPILL(); f_55538c(); if (g_unwind) return; RELOAD();
/* 554fc9: xor eax, eax */
  eax = 0;
/* 554fcb: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 554fce: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 554fd1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_554fd4: /* 554fd4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 554fd7: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 554fda: jge 0x554ff3 */
  if ((sf == of)) goto L_554ff3;
L_554fdc: /* 554fdc: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 554fdf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 554fe2: call dword ptr [ebp + 0x18] */
  { uint32_t t = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, 0x554fe5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 554fe5: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 554fe8: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 554feb: add dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 554fee: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 554ff1: jmp 0x554fd4 */
  goto L_554fd4;
L_554ff3: /* 554ff3: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 554ffa: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 554ffe: call 0x55500b */
  esp -= 4; W32(esp, 0x555003u); SPILL(); f_55500b(); if (g_unwind) return; RELOAD();
/* 555003: call 0x5553c7 */
  esp -= 4; W32(esp, 0x555008u); SPILL(); f_5553c7(); if (g_unwind) return; RELOAD();
/* 555008: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_55500b(void) {
  LOAD_REGS();
L_55500b: /* 55500b: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 55500f: jne 0x555022 */
  if (!zf) goto L_555022;
L_555011: /* 555011: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 555014: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 555017: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 55501a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 55501d: call 0x554e14 */
  esp -= 4; W32(esp, 0x555022u); SPILL(); f_554e14(); if (g_unwind) return; RELOAD();
L_555022: /* 555022: ret  */
  esp += 4; SPILL(); return;
}

void f_555023(void) {
  LOAD_REGS();
L_555023: /* 555023: cmp dword ptr [0x6ab834], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x6ab834u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 55502a: jne 0x555032 */
  if (!zf) goto L_555032;
L_55502c: /* 55502c: jmp dword ptr [0x6ac5f0] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
L_555032: /* 555032: push 0x6ab824 */
  { uint32_t v = 0x6ab824u; esp -= 4; W32(esp, v); }
/* 555037: push 0x6ab834 */
  { uint32_t v = 0x6ab834u; esp -= 4; W32(esp, v); }
/* 55503c: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 555040: call 0x5553d8 */
  esp -= 4; W32(esp, 0x555045u); SPILL(); f_5553d8(); if (g_unwind) return; RELOAD();
/* 555045: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 555048: ret  */
  esp += 4; SPILL(); return;
}

void f_555049(void) {
  LOAD_REGS();
L_555049: /* 555049: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 55504d: call 0x555023 */
  esp -= 4; W32(esp, 0x555052u); SPILL(); f_555023(); if (g_unwind) return; RELOAD();
/* 555052: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 555054: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 555056: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 555058: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 555059: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 55505a: ret  */
  esp += 4; SPILL(); return;
}

void f_555074(void) {
  LOAD_REGS();
L_555074: /* 555074: jmp dword ptr [0x6ac670] */
  SPILL(); f_432b8a(); return; /* MSVCR70!_isnan */
}

void f_55507a(void) {
  LOAD_REGS();
L_55507a: /* 55507a: jmp dword ptr [0x6ac674] */
  SPILL(); f_42836d(); return; /* MSVCR70!rand */
}

void f_555080(void) {
  LOAD_REGS();
L_555080: /* 555080: jmp dword ptr [0x6ac678] */
  SPILL(); f_428360(); return; /* MSVCR70!srand */
}

void f_555086(void) { hle_floor(); }

void f_55508c(void) { hle_ceil(); }

void f_555092(void) { hle_memcpy(); }

void f_555098(void) {
  LOAD_REGS();
L_555098: /* 555098: jmp dword ptr [0x6ac688] */
  SPILL(); f_401a95(); return; /* MSVCR70!wcsncpy */
}

void f_55509e(void) {
  LOAD_REGS();
L_55509e: /* 55509e: jmp dword ptr [0x6ac68c] */
  SPILL(); f_42baf2(); return; /* MSVCR70!_vsnwprintf */
}

void f_5550a4(void) {
  LOAD_REGS();
L_5550a4: /* 5550a4: jmp dword ptr [0x6ac690] */
  SPILL(); f_42ba9c(); return; /* MSVCR70!_vsnprintf */
}

void f_5550aa(void) {
  LOAD_REGS();
L_5550aa: /* 5550aa: jmp dword ptr [0x6ac694] */
  SPILL(); f_4013b8(); return; /* MSVCR70!wcslen */
}

void f_5550b0(void) {
  LOAD_REGS();
L_5550b0: /* 5550b0: jmp dword ptr [0x6ac698] */
  SPILL(); f_430349(); return; /* MSVCR70!wcsstr */
}

void f_5550b6(void) {
  LOAD_REGS();
L_5550b6: /* 5550b6: jmp dword ptr [0x6ac69c] */
  SPILL(); f_401195(); return; /* MSVCR70!wcschr */
}

void f_5550bc(void) {
  LOAD_REGS();
L_5550bc: /* 5550bc: jmp dword ptr [0x6ac6a0] */
  SPILL(); f_4013ea(); return; /* MSVCR70!wcscat */
}

void f_5550c2(void) {
  LOAD_REGS();
L_5550c2: /* 5550c2: jmp dword ptr [0x6ac6a4] */
  SPILL(); f_40134d(); return; /* MSVCR70!wcscmp */
}

void f_5550c8(void) {
  LOAD_REGS();
L_5550c8: /* 5550c8: jmp dword ptr [0x6ac6a8] */
  SPILL(); f_4019b9(); return; /* MSVCR70!_wcsicmp */
}

void f_5550ce(void) {
  LOAD_REGS();
L_5550ce: /* 5550ce: jmp dword ptr [0x6ac6ac] */
  SPILL(); f_4013ce(); return; /* MSVCR70!wcscpy */
}

void f_5550d4(void) {
  LOAD_REGS();
L_5550d4: /* 5550d4: jmp dword ptr [0x6ac6b0] */
  SPILL(); f_42ff14(); return; /* MSVCR70!_wcsupr */
}

void f_5550da(void) {
  LOAD_REGS();
L_5550da: /* 5550da: jmp dword ptr [0x6ac6b4] */
  SPILL(); f_4173df(); return; /* MSVCR70!_wtoi */
}

void f_5550e0(void) {
  LOAD_REGS();
L_5550e0: /* 5550e0: jmp dword ptr [0x6ac6b8] */
  SPILL(); f_417472(); return; /* MSVCR70!atof */
}

void f_5550e6(void) {
  LOAD_REGS();
L_5550e6: /* 5550e6: jmp dword ptr [0x6ac650] */
  SPILL(); f_417c33(); return; /* MSVCR70!wcstoul */
}

void f_5550ec(void) {
  LOAD_REGS();
L_5550ec: /* 5550ec: jmp dword ptr [0x6ac64c] */
  SPILL(); f_4302ce(); return; /* MSVCR70!wcsncmp */
}

void f_5550f2(void) {
  LOAD_REGS();
L_5550f2: /* 5550f2: jmp dword ptr [0x6ac648] */
  SPILL(); f_401b48(); return; /* MSVCR70!_wcsnicmp */
}

void f_5550f8(void) {
  LOAD_REGS();
L_5550f8: /* 5550f8: jmp dword ptr [0x6ac644] */
  SPILL(); f_4172f1(); return; /* MSVCR70!_wcstoui64 */
}

void f_5550fe(void) {
  LOAD_REGS();
L_5550fe: /* 5550fe: jmp dword ptr [0x6ac640] */
  SPILL(); f_416d18(); return; /* MSVCR70!_ui64tow */
}

void f_555104(void) {
  LOAD_REGS();
L_555104: /* 555104: jmp dword ptr [0x6ac63c] */
  SPILL(); f_40317f(); return; /* MSVCR70!qsort */
}

void f_55510a(void) {
  LOAD_REGS();
L_55510a: /* 55510a: jmp dword ptr [0x6ac638] */
  SPILL(); f_4311c5(); return; /* MSVCR70!_strtime */
}

void f_555110(void) {
  LOAD_REGS();
L_555110: /* 555110: jmp dword ptr [0x6ac634] */
  SPILL(); f_431155(); return; /* MSVCR70!_strdate */
}

void f_555116(void) {
  LOAD_REGS();
L_555116: /* 555116: jmp dword ptr [0x6ac630] */
  SPILL(); f_43140d(); return; /* MSVCR70!_wstrtime */
}

void f_55511c(void) {
  LOAD_REGS();
L_55511c: /* 55511c: jmp dword ptr [0x6ac62c] */
  SPILL(); f_431390(); return; /* MSVCR70!_wstrdate */
}

void f_555122(void) {
  LOAD_REGS();
L_555122: /* 555122: jmp dword ptr [0x6ac628] */
  SPILL(); f_403572(); return; /* MSVCR70!mktime */
}

void f_555128(void) {
  LOAD_REGS();
L_555128: /* 555128: jmp dword ptr [0x6ac61c] */
  SPILL(); f_4037a7(); return; /* MSVCR70!gmtime */
}

void f_55512e(void) {
  LOAD_REGS();
L_55512e: /* 55512e: jmp dword ptr [0x6ac618] */
  SPILL(); f_43166a(); return; /* MSVCR70!time */
}

void f_555140(void) {
  LOAD_REGS();
L_555140: /* 555140: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 555143: jae 0x55515a */
  if (!cf) goto L_55515a;
L_555145: /* 555145: cmp cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 555148: jae 0x555150 */
  if (!cf) goto L_555150;
L_55514a: /* 55514a: shrd eax, edx, cl */
  { uint32_t a = eax, b = edx, c = ((ecx & 31)) & 31;
  if (c) {
  uint32_t r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  eax = r;
  } }
/* 55514d: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 55514f: ret  */
  esp += 4; SPILL(); return;
L_555150: /* 555150: mov eax, edx */
  eax = edx;
/* 555152: xor edx, edx */
  edx = 0;
/* 555154: and cl, 0x1f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 555157: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 555159: ret  */
  esp += 4; SPILL(); return;
L_55515a: /* 55515a: xor eax, eax */
  eax = 0;
/* 55515c: xor edx, edx */
  edx = 0;
/* 55515e: ret  */
  esp += 4; SPILL(); return;
}

void f_555160(void) {
  LOAD_REGS();
L_555160: /* 555160: jmp dword ptr [0x6ac614] */
  SPILL(); f_416c11(); return; /* MSVCR70!_itow */
}

void f_555170(void) {
  LOAD_REGS();
L_555170: /* 555170: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 555174: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 555178: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 55517a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 55517e: jne 0x555189 */
  if (!zf) goto L_555189;
L_555180: /* 555180: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 555184: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 555186: ret 0x10 */
  esp += 20; SPILL(); return;
L_555189: /* 555189: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55518a: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 55518c: mov ebx, eax */
  ebx = eax;
/* 55518e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 555192: mul dword ptr [esp + 0x14] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x14u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 555196: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 555198: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 55519c: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 55519e: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5551a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5551a1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_5551a4(void) {
  LOAD_REGS();
L_5551a4: /* 5551a4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 5551a6: push 0x570628 */
  { uint32_t v = 0x570628u; esp -= 4; W32(esp, v); }
/* 5551ab: call 0x55538c */
  esp -= 4; W32(esp, 0x5551b0u); SPILL(); f_55538c(); if (g_unwind) return; RELOAD();
/* 5551b0: xor eax, eax */
  eax = 0;
/* 5551b2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 5551b5: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 5551b8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_5551bb: /* 5551bb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 5551be: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5551c1: jge 0x5551d6 */
  if ((sf == of)) goto L_5551d6;
L_5551c3: /* 5551c3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 5551c6: mov ecx, esi */
  ecx = esi;
/* 5551c8: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0x5551cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5551cb: add esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 5551ce: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 5551d1: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 5551d4: jmp 0x5551bb */
  goto L_5551bb;
L_5551d6: /* 5551d6: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 5551dd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 5551e1: call 0x5551ee */
  esp -= 4; W32(esp, 0x5551e6u); SPILL(); f_5551ee(); if (g_unwind) return; RELOAD();
/* 5551e6: call 0x5553c7 */
  esp -= 4; W32(esp, 0x5551ebu); SPILL(); f_5553c7(); if (g_unwind) return; RELOAD();
/* 5551eb: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_5551ee(void) {
  LOAD_REGS();
L_5551ee: /* 5551ee: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5551f2: jne 0x555205 */
  if (!zf) goto L_555205;
L_5551f4: /* 5551f4: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 5551f7: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 5551fa: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 5551fd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 555200: call 0x554e14 */
  esp -= 4; W32(esp, 0x555205u); SPILL(); f_554e14(); if (g_unwind) return; RELOAD();
L_555205: /* 555205: ret  */
  esp += 4; SPILL(); return;
}

void f_555206(void) {
  LOAD_REGS();
L_555206: /* 555206: jmp dword ptr [0x6ac610] */
  SPILL(); f_431659(); return; /* MSVCR70!difftime */
}

void f_55520c(void) {
  LOAD_REGS();
L_55520c: /* 55520c: jmp dword ptr [0x6ac60c] */
  SPILL(); f_4191ae(); return; /* MSVCR70!_stat */
}

void f_555212(void) {
  LOAD_REGS();
L_555212: /* 555212: jmp dword ptr [0x6ac608] */
  SPILL(); f_419fb7(); return; /* MSVCR70!_wstat */
}

void f_555218(void) {
  LOAD_REGS();
L_555218: /* 555218: jmp dword ptr [0x6ac604] */
  SPILL(); f_42ae09(); return; /* MSVCR70!fopen */
}

void f_55521e(void) {
  LOAD_REGS();
L_55521e: /* 55521e: jmp dword ptr [0x6ac600] */
  SPILL(); f_42bce4(); return; /* MSVCR70!_wfopen */
}

void f_555224(void) {
  LOAD_REGS();
L_555224: /* 555224: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 555228: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55522a: jne 0x55523a */
  if (!zf) goto L_55523a;
L_55522c: /* 55522c: cmp dword ptr [0x6ab808], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x6ab808u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 555232: jle 0x555262 */
  if ((zf || sf != of)) goto L_555262;
L_555234: /* 555234: dec dword ptr [0x6ab808] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x6ab808u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0x6ab808u), r);
  }
L_55523a: /* 55523a: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 55523d: mov ecx, dword ptr [0x6ac5e4] */
  ecx = R32((uint32_t)(0x6ac5e4u));
/* 555243: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 555245: mov dword ptr [0x6ab80c], ecx */
  W32((uint32_t)(0x6ab80cu), ecx);
/* 55524b: jne 0x55529c */
  if (!zf) goto L_55529c;
L_55524d: /* 55524d: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 555252: call dword ptr [0x6ac624] */
  esp -= 4; W32(esp, 0x555258u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 555258: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55525a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 55525b: mov dword ptr [0x6ab834], eax */
  W32((uint32_t)(0x6ab834u), eax);
/* 555260: jne 0x555266 */
  if (!zf) goto L_555266;
L_555262: /* 555262: xor eax, eax */
  eax = 0;
/* 555264: jmp 0x5552df */
  goto L_5552df;
L_555266: /* 555266: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 555269: mov eax, dword ptr [0x6ab834] */
  eax = R32((uint32_t)(0x6ab834u));
/* 55526e: mov dword ptr [0x6ab824], eax */
  W32((uint32_t)(0x6ab824u), eax);
/* 555273: call 0x5553ea */
  esp -= 4; W32(esp, 0x555278u); SPILL(); f_5553ea(); if (g_unwind) return; RELOAD();
/* 555278: push 0x55542e */
  { uint32_t v = 0x55542eu; esp -= 4; W32(esp, v); }
/* 55527d: call 0x555049 */
  esp -= 4; W32(esp, 0x555282u); SPILL(); f_555049(); if (g_unwind) return; RELOAD();
/* 555282: mov dword ptr [esp], 0x5a0978 */
  W32((uint32_t)(esp), 0x5a0978u);
/* 555289: push 0x5a0000 */
  { uint32_t v = 0x5a0000u; esp -= 4; W32(esp, v); }
/* 55528e: call 0x5553e4 */
  esp -= 4; W32(esp, 0x555293u); SPILL(); f_5553e4(); if (g_unwind) return; RELOAD();
/* 555293: inc dword ptr [0x6ab808] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x6ab808u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x6ab808u), r);
  }
/* 555299: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 55529a: jmp 0x5552db */
  goto L_5552db;
L_55529c: /* 55529c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55529e: jne 0x5552dc */
  if (!zf) goto L_5552dc;
L_5552a0: /* 5552a0: mov eax, dword ptr [0x6ab834] */
  eax = R32((uint32_t)(0x6ab834u));
/* 5552a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5552a7: je 0x5552dc */
  if (zf) goto L_5552dc;
L_5552a9: /* 5552a9: jmp 0x5552be */
  goto L_5552be;
L_5552ab: /* 5552ab: mov ecx, dword ptr [0x6ab824] */
  ecx = R32((uint32_t)(0x6ab824u));
/* 5552b1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 5552b3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5552b5: je 0x5552be */
  if (zf) goto L_5552be;
L_5552b7: /* 5552b7: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0x5552b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5552b9: mov eax, dword ptr [0x6ab834] */
  eax = R32((uint32_t)(0x6ab834u));
L_5552be: /* 5552be: sub dword ptr [0x6ab824], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x6ab824u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0x6ab824u), r);
  }
/* 5552c5: cmp dword ptr [0x6ab824], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x6ab824u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 5552cb: jae 0x5552ab */
  if (!cf) goto L_5552ab;
L_5552cd: /* 5552cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5552ce: call dword ptr [0x6ac5f4] */
  esp -= 4; W32(esp, 0x5552d4u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 5552d4: and dword ptr [0x6ab834], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x6ab834u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x6ab834u), r);
  }
L_5552db: /* 5552db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_5552dc: /* 5552dc: xor eax, eax */
  eax = 0;
/* 5552de: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_5552df: /* 5552df: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5552e2(void) {
  LOAD_REGS();
L_5552e2: /* 5552e2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5552e3: mov ebp, esp */
  ebp = esp;
/* 5552e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5552e6: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 5552e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5552ea: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5552ed: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5552ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5552f0: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 5552f3: jne 0x5552fe */
  if (!zf) goto L_5552fe;
L_5552f5: /* 5552f5: cmp dword ptr [0x6ab808], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x6ab808u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5552fc: jmp 0x555324 */
  goto L_555324;
L_5552fe: /* 5552fe: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 555301: je 0x555308 */
  if (zf) goto L_555308;
L_555303: /* 555303: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 555306: jne 0x55532a */
  if (!zf) goto L_55532a;
L_555308: /* 555308: mov eax, dword ptr [0x6ab818] */
  eax = R32((uint32_t)(0x6ab818u));
/* 55530d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55530f: je 0x55531a */
  if (zf) goto L_55531a;
L_555311: /* 555311: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 555312: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 555313: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 555314: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x555316u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 555316: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 555318: je 0x555326 */
  if (zf) goto L_555326;
L_55531a: /* 55531a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55531b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55531c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55531d: call 0x555224 */
  esp -= 4; W32(esp, 0x555322u); SPILL(); f_555224(); if (g_unwind) return; RELOAD();
/* 555322: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_555324: /* 555324: jne 0x55532a */
  if (!zf) goto L_55532a;
L_555326: /* 555326: xor eax, eax */
  eax = 0;
/* 555328: jmp 0x555378 */
  goto L_555378;
L_55532a: /* 55532a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55532b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55532c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 55532d: call 0x4e4494 */
  esp -= 4; W32(esp, 0x555332u); SPILL(); f_4e4494(); if (g_unwind) return; RELOAD();
/* 555332: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 555335: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 555338: jne 0x555346 */
  if (!zf) goto L_555346;
L_55533a: /* 55533a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55533c: jne 0x555375 */
  if (!zf) goto L_555375;
L_55533e: /* 55533e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55533f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 555340: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 555341: call 0x555224 */
  esp -= 4; W32(esp, 0x555346u); SPILL(); f_555224(); if (g_unwind) return; RELOAD();
L_555346: /* 555346: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 555348: je 0x55534f */
  if (zf) goto L_55534f;
L_55534a: /* 55534a: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 55534d: jne 0x555375 */
  if (!zf) goto L_555375;
L_55534f: /* 55534f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 555350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 555351: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 555352: call 0x555224 */
  esp -= 4; W32(esp, 0x555357u); SPILL(); f_555224(); if (g_unwind) return; RELOAD();
/* 555357: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 555359: jne 0x55535e */
  if (!zf) goto L_55535e;
L_55535b: /* 55535b: and dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_55535e: /* 55535e: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 555362: je 0x555375 */
  if (zf) goto L_555375;
L_555364: /* 555364: mov eax, dword ptr [0x6ab818] */
  eax = R32((uint32_t)(0x6ab818u));
/* 555369: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55536b: je 0x555375 */
  if (zf) goto L_555375;
L_55536d: /* 55536d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 55536e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 55536f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 555370: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x555372u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 555372: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_555375: /* 555375: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_555378: /* 555378: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 555379: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 55537a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 55537b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 55537c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_555380(void) {
  LOAD_REGS();
L_555380: /* 555380: jmp dword ptr [0x6ac5fc] */
  SPILL(); f_41ac82(); return; /* MSVCR70!??1type_info@@UAE@XZ */
}

void f_555386(void) {
  LOAD_REGS();
L_555386: /* 555386: jmp dword ptr [0x6ac5e8] */
  SPILL(); f_41b959(); return; /* MSVCR70!?terminate@@YAXXZ */
}

void f_55538c(void) {
  LOAD_REGS();
L_55538c: /* 55538c: push 0x555478 */
  { uint32_t v = 0x555478u; esp -= 4; W32(esp, v); }
/* 555391: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 555397: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 555398: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 55539c: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 5553a0: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* 5553a4: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5553a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5553a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5553a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5553a9: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 5553ac: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 5553af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5553b0: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 5553b3: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 5553ba: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 5553bd: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 5553c0: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* 5553c6: ret  */
  esp += 4; SPILL(); return;
}

void f_5553c7(void) {
  LOAD_REGS();
L_5553c7: /* 5553c7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5553ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5553d1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5553d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5553d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5553d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5553d5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 5553d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5553d7: ret  */
  esp += 4; SPILL(); return;
}

void f_5553d8(void) {
  LOAD_REGS();
L_5553d8: /* 5553d8: jmp dword ptr [0x6ac5ec] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_5553de(void) {
  LOAD_REGS();
L_5553de: /* 5553de: jmp dword ptr [0x6ac5f4] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
}

void f_5553e4(void) {
  LOAD_REGS();
L_5553e4: /* 5553e4: jmp dword ptr [0x6ac5f8] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_5553ea(void) {
  LOAD_REGS();
L_5553ea: /* 5553ea: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5553ec: push 0x570638 */
  { uint32_t v = 0x570638u; esp -= 4; W32(esp, v); }
/* 5553f1: call 0x55538c */
  esp -= 4; W32(esp, 0x5553f6u); SPILL(); f_55538c(); if (g_unwind) return; RELOAD();
/* 5553f6: mov dword ptr [ebp - 0x1c], 0x570c24 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x570c24u);
L_5553fd: /* 5553fd: cmp dword ptr [ebp - 0x1c], 0x570d24 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x570d24u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 555404: jae 0x555428 */
  if (!cf) goto L_555428;
L_555406: /* 555406: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 55540a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 55540d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 55540f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 555411: je 0x55541e */
  if (zf) goto L_55541e;
L_555413: /* 555413: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x555415u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 555415: jmp 0x55541e */
  goto L_55541e;
L_55541e: /* 55541e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 555422: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 555426: jmp 0x5553fd */
  goto L_5553fd;
L_555428: /* 555428: call 0x5553c7 */
  esp -= 4; W32(esp, 0x55542du); SPILL(); f_5553c7(); if (g_unwind) return; RELOAD();
/* 55542d: ret  */
  esp += 4; SPILL(); return;
}

void f_555417(void) {
  LOAD_REGS();
L_555417: /* 555417: xor eax, eax */
  eax = 0;
/* 555419: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 55541a: ret  */
  esp += 4; SPILL(); return;
}

void f_55541b(void) {
  LOAD_REGS();
  goto L_55541b;
L_5553fd: /* 5553fd: cmp dword ptr [ebp - 0x1c], 0x570d24 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x570d24u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 555404: jae 0x555428 */
  if (!cf) goto L_555428;
L_555406: /* 555406: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 55540a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 55540d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 55540f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 555411: je 0x55541e */
  if (zf) goto L_55541e;
L_555413: /* 555413: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x555415u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 555415: jmp 0x55541e */
  goto L_55541e;
L_55541b: /* 55541b: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_55541e: /* 55541e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 555422: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 555426: jmp 0x5553fd */
  goto L_5553fd;
L_555428: /* 555428: call 0x5553c7 */
  esp -= 4; W32(esp, 0x55542du); SPILL(); f_5553c7(); if (g_unwind) return; RELOAD();
/* 55542d: ret  */
  esp += 4; SPILL(); return;
}

void f_55542e(void) {
  LOAD_REGS();
L_55542e: /* 55542e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 555430: push 0x570648 */
  { uint32_t v = 0x570648u; esp -= 4; W32(esp, v); }
/* 555435: call 0x55538c */
  esp -= 4; W32(esp, 0x55543au); SPILL(); f_55538c(); if (g_unwind) return; RELOAD();
/* 55543a: mov dword ptr [ebp - 0x1c], 0x570e2c */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x570e2cu);
L_555441: /* 555441: cmp dword ptr [ebp - 0x1c], 0x570f2c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x570f2cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 555448: jae 0x55546c */
  if (!cf) goto L_55546c;
L_55544a: /* 55544a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 55544e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 555451: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 555453: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 555455: je 0x555462 */
  if (zf) goto L_555462;
L_555457: /* 555457: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x555459u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 555459: jmp 0x555462 */
  goto L_555462;
L_555462: /* 555462: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 555466: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 55546a: jmp 0x555441 */
  goto L_555441;
L_55546c: /* 55546c: call 0x5553c7 */
  esp -= 4; W32(esp, 0x555471u); SPILL(); f_5553c7(); if (g_unwind) return; RELOAD();
/* 555471: ret  */
  esp += 4; SPILL(); return;
}

void f_55545b(void) {
  LOAD_REGS();
L_55545b: /* 55545b: xor eax, eax */
  eax = 0;
/* 55545d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 55545e: ret  */
  esp += 4; SPILL(); return;
}

void f_55545f(void) {
  LOAD_REGS();
  goto L_55545f;
L_555441: /* 555441: cmp dword ptr [ebp - 0x1c], 0x570f2c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x570f2cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 555448: jae 0x55546c */
  if (!cf) goto L_55546c;
L_55544a: /* 55544a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 55544e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 555451: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 555453: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 555455: je 0x555462 */
  if (zf) goto L_555462;
L_555457: /* 555457: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x555459u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 555459: jmp 0x555462 */
  goto L_555462;
L_55545f: /* 55545f: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_555462: /* 555462: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 555466: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 55546a: jmp 0x555441 */
  goto L_555441;
L_55546c: /* 55546c: call 0x5553c7 */
  esp -= 4; W32(esp, 0x555471u); SPILL(); f_5553c7(); if (g_unwind) return; RELOAD();
/* 555471: ret  */
  esp += 4; SPILL(); return;
}

void f_555472(void) {
  LOAD_REGS();
L_555472: /* 555472: jmp dword ptr [0x6ac624] */
  SPILL(); f_4010eb(); return; /* MSVCR70!malloc */
}

void f_555478(void) {
  LOAD_REGS();
L_555478: /* 555478: jmp dword ptr [0x6ac620] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}

void f_555480(void) {
  LOAD_REGS();
  goto L_555480;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555480: /* 555480: mov eax, 0x5710ec */
  eax = 0x5710ecu;
/* 555485: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555490(void) {
  LOAD_REGS();
L_555490: /* 555490: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555493: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_555498(void) {
  LOAD_REGS();
  goto L_555498;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555498: /* 555498: mov eax, 0x57111c */
  eax = 0x57111cu;
/* 55549d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5554b0(void) {
  LOAD_REGS();
L_5554b0: /* 5554b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5554b3: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_5554b8(void) {
  LOAD_REGS();
  goto L_5554b8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5554b8: /* 5554b8: mov eax, 0x571144 */
  eax = 0x571144u;
/* 5554bd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5554d0(void) {
  LOAD_REGS();
L_5554d0: /* 5554d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5554d3: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_5554d8(void) {
  LOAD_REGS();
  goto L_5554d8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5554d8: /* 5554d8: mov eax, 0x57116c */
  eax = 0x57116cu;
/* 5554dd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5554f0(void) {
  LOAD_REGS();
L_5554f0: /* 5554f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5554f3: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_5554f8(void) {
  LOAD_REGS();
  goto L_5554f8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5554f8: /* 5554f8: mov eax, 0x571194 */
  eax = 0x571194u;
/* 5554fd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555510(void) {
  LOAD_REGS();
L_555510: /* 555510: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555513: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_555518(void) {
  LOAD_REGS();
  goto L_555518;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555518: /* 555518: mov eax, 0x5711bc */
  eax = 0x5711bcu;
/* 55551d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555530(void) {
  LOAD_REGS();
  goto L_555530;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555530: /* 555530: mov eax, 0x571220 */
  eax = 0x571220u;
/* 555535: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555540(void) {
  LOAD_REGS();
L_555540: /* 555540: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 555543: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555548(void) {
  LOAD_REGS();
  goto L_555548;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555548: /* 555548: mov eax, 0x571250 */
  eax = 0x571250u;
/* 55554d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555560(void) {
  LOAD_REGS();
L_555560: /* 555560: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555563: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555568(void) {
  LOAD_REGS();
  goto L_555568;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555568: /* 555568: mov eax, 0x571278 */
  eax = 0x571278u;
/* 55556d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555580(void) {
  LOAD_REGS();
L_555580: /* 555580: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555583: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555588(void) {
  LOAD_REGS();
  goto L_555588;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555588: /* 555588: mov eax, 0x5712a0 */
  eax = 0x5712a0u;
/* 55558d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5555a0(void) {
  LOAD_REGS();
L_5555a0: /* 5555a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5555a3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5555a8(void) {
  LOAD_REGS();
  goto L_5555a8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5555a8: /* 5555a8: mov eax, 0x5712c8 */
  eax = 0x5712c8u;
/* 5555ad: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5555c0(void) {
  LOAD_REGS();
L_5555c0: /* 5555c0: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 5555c3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5555c8(void) {
  LOAD_REGS();
  goto L_5555c8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5555c8: /* 5555c8: mov eax, 0x5712f0 */
  eax = 0x5712f0u;
/* 5555cd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5555e0(void) {
  LOAD_REGS();
L_5555e0: /* 5555e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5555e3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5555e8(void) {
  LOAD_REGS();
  goto L_5555e8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5555e8: /* 5555e8: mov eax, 0x571318 */
  eax = 0x571318u;
/* 5555ed: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555600(void) {
  LOAD_REGS();
L_555600: /* 555600: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 555603: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555608(void) {
  LOAD_REGS();
  goto L_555608;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555608: /* 555608: mov eax, 0x571340 */
  eax = 0x571340u;
/* 55560d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555620(void) {
  LOAD_REGS();
L_555620: /* 555620: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555623: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555628(void) {
  LOAD_REGS();
  goto L_555628;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555628: /* 555628: mov eax, 0x571368 */
  eax = 0x571368u;
/* 55562d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555640(void) {
  LOAD_REGS();
L_555640: /* 555640: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555643: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555648(void) {
  LOAD_REGS();
  goto L_555648;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555648: /* 555648: mov eax, 0x571390 */
  eax = 0x571390u;
/* 55564d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555660(void) {
  LOAD_REGS();
L_555660: /* 555660: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555663: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555668(void) {
  LOAD_REGS();
  goto L_555668;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555668: /* 555668: mov eax, 0x5713b8 */
  eax = 0x5713b8u;
/* 55566d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555680(void) {
  LOAD_REGS();
L_555680: /* 555680: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 555683: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555688(void) {
  LOAD_REGS();
  goto L_555688;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555688: /* 555688: mov eax, 0x5713e0 */
  eax = 0x5713e0u;
/* 55568d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5556a0(void) {
  LOAD_REGS();
L_5556a0: /* 5556a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5556a3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5556a8(void) {
  LOAD_REGS();
  goto L_5556a8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5556a8: /* 5556a8: mov eax, 0x571408 */
  eax = 0x571408u;
/* 5556ad: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5556c0(void) {
  LOAD_REGS();
L_5556c0: /* 5556c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5556c3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5556c8(void) {
  LOAD_REGS();
  goto L_5556c8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5556c8: /* 5556c8: mov eax, 0x571430 */
  eax = 0x571430u;
/* 5556cd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5556e0(void) {
  LOAD_REGS();
L_5556e0: /* 5556e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5556e3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5556e8(void) {
  LOAD_REGS();
  goto L_5556e8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5556e8: /* 5556e8: mov eax, 0x571458 */
  eax = 0x571458u;
/* 5556ed: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555700(void) {
  LOAD_REGS();
L_555700: /* 555700: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555703: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555708(void) {
  LOAD_REGS();
  goto L_555708;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555708: /* 555708: mov eax, 0x571480 */
  eax = 0x571480u;
/* 55570d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555720(void) {
  LOAD_REGS();
L_555720: /* 555720: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555723: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555728(void) {
  LOAD_REGS();
  goto L_555728;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555728: /* 555728: mov eax, 0x5714a8 */
  eax = 0x5714a8u;
/* 55572d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555740(void) {
  LOAD_REGS();
L_555740: /* 555740: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555743: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555748(void) {
  LOAD_REGS();
  goto L_555748;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555748: /* 555748: mov eax, 0x5714d0 */
  eax = 0x5714d0u;
/* 55574d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555760(void) {
  LOAD_REGS();
L_555760: /* 555760: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555763: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555768(void) {
  LOAD_REGS();
  goto L_555768;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555768: /* 555768: mov eax, 0x5714f8 */
  eax = 0x5714f8u;
/* 55576d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555780(void) {
  LOAD_REGS();
L_555780: /* 555780: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555783: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555788(void) {
  LOAD_REGS();
  goto L_555788;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555788: /* 555788: mov eax, 0x571520 */
  eax = 0x571520u;
/* 55578d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5557a0(void) {
  LOAD_REGS();
L_5557a0: /* 5557a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5557a3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5557a8(void) {
  LOAD_REGS();
  goto L_5557a8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5557a8: /* 5557a8: mov eax, 0x571548 */
  eax = 0x571548u;
/* 5557ad: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5557c0(void) {
  LOAD_REGS();
L_5557c0: /* 5557c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5557c3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5557c8(void) {
  LOAD_REGS();
  goto L_5557c8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5557c8: /* 5557c8: mov eax, 0x571570 */
  eax = 0x571570u;
/* 5557cd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5557e0(void) {
  LOAD_REGS();
L_5557e0: /* 5557e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5557e3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5557e8(void) {
  LOAD_REGS();
  goto L_5557e8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5557e8: /* 5557e8: mov eax, 0x571598 */
  eax = 0x571598u;
/* 5557ed: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555800(void) {
  LOAD_REGS();
L_555800: /* 555800: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555803: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555808(void) {
  LOAD_REGS();
  goto L_555808;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555808: /* 555808: mov eax, 0x5715c0 */
  eax = 0x5715c0u;
/* 55580d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555820(void) {
  LOAD_REGS();
L_555820: /* 555820: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555823: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_555828(void) {
  LOAD_REGS();
  goto L_555828;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555828: /* 555828: mov eax, 0x5715e8 */
  eax = 0x5715e8u;
/* 55582d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555840(void) {
  LOAD_REGS();
L_555840: /* 555840: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555843: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_555848(void) {
  LOAD_REGS();
  goto L_555848;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555848: /* 555848: mov eax, 0x571610 */
  eax = 0x571610u;
/* 55584d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555860(void) {
  LOAD_REGS();
L_555860: /* 555860: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555863: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_555868(void) {
  LOAD_REGS();
  goto L_555868;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555868: /* 555868: mov eax, 0x571638 */
  eax = 0x571638u;
/* 55586d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555880(void) {
  LOAD_REGS();
L_555880: /* 555880: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555883: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_555888(void) {
  LOAD_REGS();
  goto L_555888;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555888: /* 555888: mov eax, 0x571660 */
  eax = 0x571660u;
/* 55588d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5558a0(void) {
  LOAD_REGS();
L_5558a0: /* 5558a0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5558a3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5558a8(void) {
  LOAD_REGS();
L_5558a8: /* 5558a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5558ab: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5558ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5558b0: je 0x5558be */
  if (zf) goto L_5558be;
L_5558b6: /* 5558b6: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 5558b9: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
L_5558be: /* 5558be: ret  */
  esp += 4; SPILL(); return;
}

void f_5558bf(void) {
  LOAD_REGS();
L_5558bf: /* 5558bf: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5558c2: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5558c7(void) {
  LOAD_REGS();
  goto L_5558c7;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5558c7: /* 5558c7: mov eax, 0x571698 */
  eax = 0x571698u;
/* 5558cc: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5558e0(void) {
  LOAD_REGS();
L_5558e0: /* 5558e0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5558e3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5558e8(void) {
  LOAD_REGS();
L_5558e8: /* 5558e8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5558eb: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5558ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5558f0: je 0x5558fe */
  if (zf) goto L_5558fe;
L_5558f6: /* 5558f6: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 5558f9: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
L_5558fe: /* 5558fe: ret  */
  esp += 4; SPILL(); return;
}

void f_5558ff(void) {
  LOAD_REGS();
L_5558ff: /* 5558ff: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 555902: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_555907(void) {
  LOAD_REGS();
  goto L_555907;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555907: /* 555907: mov eax, 0x5716d4 */
  eax = 0x5716d4u;
/* 55590c: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555920(void) {
  LOAD_REGS();
L_555920: /* 555920: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 555923: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555928(void) {
  LOAD_REGS();
L_555928: /* 555928: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 55592b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 55592e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 555930: je 0x55593e */
  if (zf) goto L_55593e;
L_555936: /* 555936: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 555939: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
L_55593e: /* 55593e: ret  */
  esp += 4; SPILL(); return;
}

void f_55593f(void) {
  LOAD_REGS();
L_55593f: /* 55593f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 555942: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_555947(void) {
  LOAD_REGS();
  goto L_555947;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555947: /* 555947: mov eax, 0x571710 */
  eax = 0x571710u;
/* 55594c: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555960(void) {
  LOAD_REGS();
L_555960: /* 555960: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 555963: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555968(void) {
  LOAD_REGS();
L_555968: /* 555968: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 55596b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 55596e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 555970: je 0x55597e */
  if (zf) goto L_55597e;
L_555976: /* 555976: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 555979: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
L_55597e: /* 55597e: ret  */
  esp += 4; SPILL(); return;
}

void f_55597f(void) {
  LOAD_REGS();
L_55597f: /* 55597f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 555982: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_555987(void) {
  LOAD_REGS();
  goto L_555987;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555987: /* 555987: mov eax, 0x57174c */
  eax = 0x57174cu;
/* 55598c: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5559a0(void) {
  LOAD_REGS();
L_5559a0: /* 5559a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5559a3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5559a8(void) {
  LOAD_REGS();
  goto L_5559a8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5559a8: /* 5559a8: mov eax, 0x571778 */
  eax = 0x571778u;
/* 5559ad: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5559c0(void) {
  LOAD_REGS();
L_5559c0: /* 5559c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5559c3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5559c8(void) {
  LOAD_REGS();
L_5559c8: /* 5559c8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5559cb: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5559ce: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5559d3(void) {
  LOAD_REGS();
L_5559d3: /* 5559d3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5559d6: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5559d9: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5559de(void) {
  LOAD_REGS();
L_5559de: /* 5559de: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5559e1: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5559e4: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5559e9(void) {
  LOAD_REGS();
  goto L_5559e9;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5559e9: /* 5559e9: mov eax, 0x5717b8 */
  eax = 0x5717b8u;
/* 5559ee: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555a00(void) {
  LOAD_REGS();
L_555a00: /* 555a00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555a03: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555a08(void) {
  LOAD_REGS();
L_555a08: /* 555a08: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555a0b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555a0e: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555a13(void) {
  LOAD_REGS();
L_555a13: /* 555a13: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555a16: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555a19: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555a1e(void) {
  LOAD_REGS();
L_555a1e: /* 555a1e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555a21: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555a24: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555a29(void) {
  LOAD_REGS();
  goto L_555a29;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555a29: /* 555a29: mov eax, 0x5717fc */
  eax = 0x5717fcu;
/* 555a2e: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555a40(void) {
  LOAD_REGS();
L_555a40: /* 555a40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555a43: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555a48(void) {
  LOAD_REGS();
L_555a48: /* 555a48: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555a4b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555a4e: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555a53(void) {
  LOAD_REGS();
  goto L_555a53;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555a53: /* 555a53: mov eax, 0x571830 */
  eax = 0x571830u;
/* 555a58: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555a70(void) {
  LOAD_REGS();
L_555a70: /* 555a70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555a73: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555a78(void) {
  LOAD_REGS();
L_555a78: /* 555a78: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555a7b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555a7e: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555a83(void) {
  LOAD_REGS();
  goto L_555a83;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555a83: /* 555a83: mov eax, 0x571860 */
  eax = 0x571860u;
/* 555a88: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555aa0(void) {
  LOAD_REGS();
L_555aa0: /* 555aa0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555aa3: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_555aa8(void) {
  LOAD_REGS();
L_555aa8: /* 555aa8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555aab: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555aae: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555ab3(void) {
  LOAD_REGS();
L_555ab3: /* 555ab3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555ab6: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555ab9: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555abe(void) {
  LOAD_REGS();
L_555abe: /* 555abe: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555ac1: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555ac4: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555ac9(void) {
  LOAD_REGS();
L_555ac9: /* 555ac9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555acc: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555acf: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555ad4(void) {
  LOAD_REGS();
L_555ad4: /* 555ad4: push 0x4e2397 */
  { uint32_t v = 0x4e2397u; esp -= 4; W32(esp, v); }
/* 555ad9: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 555adb: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 555add: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555ae0: add eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 555ae3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 555ae4: call 0x554e72 */
  esp -= 4; W32(esp, 0x555ae9u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 555ae9: ret  */
  esp += 4; SPILL(); return;
}

void f_555aea(void) {
  LOAD_REGS();
L_555aea: /* 555aea: push 0x4e2397 */
  { uint32_t v = 0x4e2397u; esp -= 4; W32(esp, v); }
/* 555aef: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 555af1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 555af3: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555af6: add eax, 0x118 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 555afb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 555afc: call 0x554e72 */
  esp -= 4; W32(esp, 0x555b01u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 555b01: ret  */
  esp += 4; SPILL(); return;
}

void f_555b02(void) {
  LOAD_REGS();
  goto L_555b02;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555b02: /* 555b02: mov eax, 0x5718b8 */
  eax = 0x5718b8u;
/* 555b07: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555b30(void) {
  LOAD_REGS();
L_555b30: /* 555b30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555b33: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_555b38(void) {
  LOAD_REGS();
L_555b38: /* 555b38: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555b3b: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555b3e: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555b43(void) {
  LOAD_REGS();
L_555b43: /* 555b43: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555b46: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555b49: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555b4e(void) {
  LOAD_REGS();
L_555b4e: /* 555b4e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555b51: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555b54: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555b59(void) {
  LOAD_REGS();
L_555b59: /* 555b59: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555b5c: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555b5f: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555b64(void) {
  LOAD_REGS();
  goto L_555b64;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555b64: /* 555b64: mov eax, 0x571904 */
  eax = 0x571904u;
/* 555b69: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555b80(void) {
  LOAD_REGS();
L_555b80: /* 555b80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555b83: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_555b88(void) {
  LOAD_REGS();
L_555b88: /* 555b88: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555b8b: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555b8e: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555b93(void) {
  LOAD_REGS();
  goto L_555b93;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555b93: /* 555b93: mov eax, 0x571938 */
  eax = 0x571938u;
/* 555b98: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555bb0(void) {
  LOAD_REGS();
L_555bb0: /* 555bb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555bb3: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_555bb8(void) {
  LOAD_REGS();
  goto L_555bb8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555bb8: /* 555bb8: mov eax, 0x571960 */
  eax = 0x571960u;
/* 555bbd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555bd0(void) {
  LOAD_REGS();
L_555bd0: /* 555bd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555bd3: jmp 0x4e3a9e */
  SPILL(); f_4e3a9e(); return;
}

void f_555bd8(void) {
  LOAD_REGS();
L_555bd8: /* 555bd8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555bdb: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555bde: jmp 0x4e33c8 */
  SPILL(); f_4e33c8(); return;
}

void f_555be3(void) {
  LOAD_REGS();
  goto L_555be3;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555be3: /* 555be3: mov eax, 0x571990 */
  eax = 0x571990u;
/* 555be8: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555c00(void) {
  LOAD_REGS();
L_555c00: /* 555c00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555c03: jmp 0x4e3a9e */
  SPILL(); f_4e3a9e(); return;
}

void f_555c08(void) {
  LOAD_REGS();
  goto L_555c08;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555c08: /* 555c08: mov eax, 0x5719b8 */
  eax = 0x5719b8u;
/* 555c0d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555c20(void) {
  LOAD_REGS();
L_555c20: /* 555c20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555c23: jmp 0x4e337d */
  SPILL(); f_4e337d(); return;
}

void f_555c28(void) {
  LOAD_REGS();
  goto L_555c28;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555c28: /* 555c28: mov eax, 0x5719e0 */
  eax = 0x5719e0u;
/* 555c2d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555c40(void) {
  LOAD_REGS();
L_555c40: /* 555c40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555c43: jmp 0x4e337d */
  SPILL(); f_4e337d(); return;
}

void f_555c48(void) {
  LOAD_REGS();
  goto L_555c48;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555c48: /* 555c48: mov eax, 0x571a08 */
  eax = 0x571a08u;
/* 555c4d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555c60(void) {
  LOAD_REGS();
L_555c60: /* 555c60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555c63: jmp 0x4e3a9e */
  SPILL(); f_4e3a9e(); return;
}

void f_555c68(void) {
  LOAD_REGS();
L_555c68: /* 555c68: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555c6b: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555c6e: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_555c73(void) {
  LOAD_REGS();
  goto L_555c73;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555c73: /* 555c73: mov eax, 0x571a38 */
  eax = 0x571a38u;
/* 555c78: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555c90(void) {
  LOAD_REGS();
L_555c90: /* 555c90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555c93: jmp 0x4e3a9e */
  SPILL(); f_4e3a9e(); return;
}

void f_555c98(void) {
  LOAD_REGS();
  goto L_555c98;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555c98: /* 555c98: mov eax, 0x571a60 */
  eax = 0x571a60u;
/* 555c9d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555cb0(void) {
  LOAD_REGS();
L_555cb0: /* 555cb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555cb3: jmp 0x4e3a9e */
  SPILL(); f_4e3a9e(); return;
}

void f_555cb8(void) {
  LOAD_REGS();
L_555cb8: /* 555cb8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555cbb: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555cbe: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555cc3(void) {
  LOAD_REGS();
  goto L_555cc3;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555cc3: /* 555cc3: mov eax, 0x571a90 */
  eax = 0x571a90u;
/* 555cc8: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555ce0(void) {
  LOAD_REGS();
L_555ce0: /* 555ce0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555ce3: jmp 0x4e3a9e */
  SPILL(); f_4e3a9e(); return;
}

void f_555ce8(void) {
  LOAD_REGS();
  goto L_555ce8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555ce8: /* 555ce8: mov eax, 0x571ab8 */
  eax = 0x571ab8u;
/* 555ced: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555d00(void) {
  LOAD_REGS();
L_555d00: /* 555d00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555d03: jmp 0x4e3a9e */
  SPILL(); f_4e3a9e(); return;
}

void f_555d08(void) {
  LOAD_REGS();
L_555d08: /* 555d08: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555d0b: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555d0e: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555d13(void) {
  LOAD_REGS();
  goto L_555d13;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555d13: /* 555d13: mov eax, 0x571ae8 */
  eax = 0x571ae8u;
/* 555d18: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555d30(void) {
  LOAD_REGS();
L_555d30: /* 555d30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555d33: jmp 0x4e3a9e */
  SPILL(); f_4e3a9e(); return;
}

void f_555d38(void) {
  LOAD_REGS();
  goto L_555d38;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555d38: /* 555d38: mov eax, 0x571b10 */
  eax = 0x571b10u;
/* 555d3d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555d50(void) {
  LOAD_REGS();
L_555d50: /* 555d50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555d53: jmp 0x4e1aaf */
  SPILL(); f_4e1aaf(); return;
}

void f_555d58(void) {
  LOAD_REGS();
  goto L_555d58;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555d58: /* 555d58: mov eax, 0x571b38 */
  eax = 0x571b38u;
/* 555d5d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555d70(void) {
  LOAD_REGS();
L_555d70: /* 555d70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555d73: jmp 0x4e1aaf */
  SPILL(); f_4e1aaf(); return;
}

void f_555d78(void) {
  LOAD_REGS();
  goto L_555d78;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555d78: /* 555d78: mov eax, 0x571b60 */
  eax = 0x571b60u;
/* 555d7d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555d90(void) {
  LOAD_REGS();
L_555d90: /* 555d90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555d93: jmp 0x4e1aaf */
  SPILL(); f_4e1aaf(); return;
}

void f_555d98(void) {
  LOAD_REGS();
  goto L_555d98;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555d98: /* 555d98: mov eax, 0x571b88 */
  eax = 0x571b88u;
/* 555d9d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555db0(void) {
  LOAD_REGS();
L_555db0: /* 555db0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555db3: jmp 0x4e1aaf */
  SPILL(); f_4e1aaf(); return;
}

void f_555db8(void) {
  LOAD_REGS();
  goto L_555db8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555db8: /* 555db8: mov eax, 0x571bb0 */
  eax = 0x571bb0u;
/* 555dbd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555dd0(void) {
  LOAD_REGS();
L_555dd0: /* 555dd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555dd3: jmp 0x4e1aaf */
  SPILL(); f_4e1aaf(); return;
}

void f_555dd8(void) {
  LOAD_REGS();
  goto L_555dd8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555dd8: /* 555dd8: mov eax, 0x571bd8 */
  eax = 0x571bd8u;
/* 555ddd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555df0(void) {
  LOAD_REGS();
L_555df0: /* 555df0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555df3: jmp 0x4e286a */
  SPILL(); f_4e286a(); return;
}

void f_555df8(void) {
  LOAD_REGS();
  goto L_555df8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555df8: /* 555df8: mov eax, 0x571c00 */
  eax = 0x571c00u;
/* 555dfd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555e10(void) {
  LOAD_REGS();
L_555e10: /* 555e10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555e13: jmp 0x4e1aaf */
  SPILL(); f_4e1aaf(); return;
}

void f_555e18(void) {
  LOAD_REGS();
  goto L_555e18;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555e18: /* 555e18: mov eax, 0x571c28 */
  eax = 0x571c28u;
/* 555e1d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555e30(void) {
  LOAD_REGS();
L_555e30: /* 555e30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555e33: jmp 0x4e1aaf */
  SPILL(); f_4e1aaf(); return;
}

void f_555e38(void) {
  LOAD_REGS();
  goto L_555e38;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555e38: /* 555e38: mov eax, 0x571c50 */
  eax = 0x571c50u;
/* 555e3d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555e50(void) {
  LOAD_REGS();
L_555e50: /* 555e50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555e53: jmp 0x4e1aaf */
  SPILL(); f_4e1aaf(); return;
}

void f_555e58(void) {
  LOAD_REGS();
  goto L_555e58;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555e58: /* 555e58: mov eax, 0x571c78 */
  eax = 0x571c78u;
/* 555e5d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555e70(void) {
  LOAD_REGS();
L_555e70: /* 555e70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555e73: jmp 0x4e1aaf */
  SPILL(); f_4e1aaf(); return;
}

void f_555e78(void) {
  LOAD_REGS();
  goto L_555e78;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555e78: /* 555e78: mov eax, 0x571ca0 */
  eax = 0x571ca0u;
/* 555e7d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555e90(void) {
  LOAD_REGS();
L_555e90: /* 555e90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555e93: jmp 0x4e1aaf */
  SPILL(); f_4e1aaf(); return;
}

void f_555e98(void) {
  LOAD_REGS();
  goto L_555e98;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555e98: /* 555e98: mov eax, 0x571cc8 */
  eax = 0x571cc8u;
/* 555e9d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555eb0(void) {
  LOAD_REGS();
L_555eb0: /* 555eb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555eb3: jmp 0x4e1aaf */
  SPILL(); f_4e1aaf(); return;
}

void f_555eb8(void) {
  LOAD_REGS();
  goto L_555eb8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555eb8: /* 555eb8: mov eax, 0x571cf0 */
  eax = 0x571cf0u;
/* 555ebd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555ed0(void) {
  LOAD_REGS();
L_555ed0: /* 555ed0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555ed3: jmp 0x4e1aaf */
  SPILL(); f_4e1aaf(); return;
}

void f_555ed8(void) {
  LOAD_REGS();
  goto L_555ed8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555ed8: /* 555ed8: mov eax, 0x571d18 */
  eax = 0x571d18u;
/* 555edd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555ef0(void) {
  LOAD_REGS();
L_555ef0: /* 555ef0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555ef3: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_555ef8(void) {
  LOAD_REGS();
  goto L_555ef8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555ef8: /* 555ef8: mov eax, 0x571d40 */
  eax = 0x571d40u;
/* 555efd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555f10(void) {
  LOAD_REGS();
L_555f10: /* 555f10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555f13: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_555f18(void) {
  LOAD_REGS();
  goto L_555f18;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555f18: /* 555f18: mov eax, 0x571d68 */
  eax = 0x571d68u;
/* 555f1d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555f30(void) {
  LOAD_REGS();
L_555f30: /* 555f30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555f33: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_555f38(void) {
  LOAD_REGS();
  goto L_555f38;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555f38: /* 555f38: mov eax, 0x571d90 */
  eax = 0x571d90u;
/* 555f3d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555f50(void) {
  LOAD_REGS();
L_555f50: /* 555f50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555f53: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_555f58(void) {
  LOAD_REGS();
  goto L_555f58;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555f58: /* 555f58: mov eax, 0x571db8 */
  eax = 0x571db8u;
/* 555f5d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555f70(void) {
  LOAD_REGS();
L_555f70: /* 555f70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555f73: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 555f76: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_555f7b(void) {
  LOAD_REGS();
  goto L_555f7b;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555f7b: /* 555f7b: mov eax, 0x571de0 */
  eax = 0x571de0u;
/* 555f80: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555f90(void) {
  LOAD_REGS();
L_555f90: /* 555f90: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* 555f93: jmp 0x4e1f05 */
  SPILL(); f_4e1f05(); return;
}

void f_555f98(void) {
  LOAD_REGS();
  goto L_555f98;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555f98: /* 555f98: mov eax, 0x571e08 */
  eax = 0x571e08u;
/* 555f9d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555fb0(void) {
  LOAD_REGS();
L_555fb0: /* 555fb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555fb3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555fb8(void) {
  LOAD_REGS();
  goto L_555fb8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555fb8: /* 555fb8: mov eax, 0x571e30 */
  eax = 0x571e30u;
/* 555fbd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555fd0(void) {
  LOAD_REGS();
L_555fd0: /* 555fd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555fd3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555fd8(void) {
  LOAD_REGS();
  goto L_555fd8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555fd8: /* 555fd8: mov eax, 0x571e58 */
  eax = 0x571e58u;
/* 555fdd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_555ff0(void) {
  LOAD_REGS();
L_555ff0: /* 555ff0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 555ff3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_555ff8(void) {
  LOAD_REGS();
  goto L_555ff8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_555ff8: /* 555ff8: mov eax, 0x571e80 */
  eax = 0x571e80u;
/* 555ffd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556010(void) {
  LOAD_REGS();
L_556010: /* 556010: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556013: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556018(void) {
  LOAD_REGS();
  goto L_556018;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556018: /* 556018: mov eax, 0x571ea8 */
  eax = 0x571ea8u;
/* 55601d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556030(void) {
  LOAD_REGS();
L_556030: /* 556030: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556033: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556038(void) {
  LOAD_REGS();
  goto L_556038;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556038: /* 556038: mov eax, 0x571ed0 */
  eax = 0x571ed0u;
/* 55603d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556050(void) {
  LOAD_REGS();
L_556050: /* 556050: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556053: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556058(void) {
  LOAD_REGS();
  goto L_556058;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556058: /* 556058: mov eax, 0x571ef8 */
  eax = 0x571ef8u;
/* 55605d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556070(void) {
  LOAD_REGS();
L_556070: /* 556070: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556073: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556078(void) {
  LOAD_REGS();
  goto L_556078;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556078: /* 556078: mov eax, 0x571f20 */
  eax = 0x571f20u;
/* 55607d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556090(void) {
  LOAD_REGS();
L_556090: /* 556090: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556093: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556098(void) {
  LOAD_REGS();
  goto L_556098;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556098: /* 556098: mov eax, 0x571f48 */
  eax = 0x571f48u;
/* 55609d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5560b0(void) {
  LOAD_REGS();
L_5560b0: /* 5560b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5560b3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5560b8(void) {
  LOAD_REGS();
  goto L_5560b8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5560b8: /* 5560b8: mov eax, 0x571f70 */
  eax = 0x571f70u;
/* 5560bd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5560d0(void) {
  LOAD_REGS();
L_5560d0: /* 5560d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5560d3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5560d8(void) {
  LOAD_REGS();
  goto L_5560d8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5560d8: /* 5560d8: mov eax, 0x571f98 */
  eax = 0x571f98u;
/* 5560dd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5560f0(void) {
  LOAD_REGS();
L_5560f0: /* 5560f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5560f3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5560f8(void) {
  LOAD_REGS();
  goto L_5560f8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5560f8: /* 5560f8: mov eax, 0x571fc0 */
  eax = 0x571fc0u;
/* 5560fd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556110(void) {
  LOAD_REGS();
L_556110: /* 556110: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556113: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556118(void) {
  LOAD_REGS();
  goto L_556118;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556118: /* 556118: mov eax, 0x571fe8 */
  eax = 0x571fe8u;
/* 55611d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556130(void) {
  LOAD_REGS();
L_556130: /* 556130: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556133: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556138(void) {
  LOAD_REGS();
  goto L_556138;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556138: /* 556138: mov eax, 0x572010 */
  eax = 0x572010u;
/* 55613d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556150(void) {
  LOAD_REGS();
L_556150: /* 556150: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556153: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556158(void) {
  LOAD_REGS();
  goto L_556158;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556158: /* 556158: mov eax, 0x572038 */
  eax = 0x572038u;
/* 55615d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556170(void) {
  LOAD_REGS();
L_556170: /* 556170: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556173: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556178(void) {
  LOAD_REGS();
  goto L_556178;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556178: /* 556178: mov eax, 0x572060 */
  eax = 0x572060u;
/* 55617d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556190(void) {
  LOAD_REGS();
L_556190: /* 556190: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 556193: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_556198(void) {
  LOAD_REGS();
L_556198: /* 556198: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55619b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5561a0(void) {
  LOAD_REGS();
  goto L_5561a0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5561a0: /* 5561a0: mov eax, 0x572090 */
  eax = 0x572090u;
/* 5561a5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5561b0(void) {
  LOAD_REGS();
L_5561b0: /* 5561b0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5561b3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5561b8(void) {
  LOAD_REGS();
L_5561b8: /* 5561b8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5561bb: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5561c0(void) {
  LOAD_REGS();
L_5561c0: /* 5561c0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5561c3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5561c8(void) {
  LOAD_REGS();
L_5561c8: /* 5561c8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5561cb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5561d0(void) {
  LOAD_REGS();
  goto L_5561d0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5561d0: /* 5561d0: mov eax, 0x572114 */
  eax = 0x572114u;
/* 5561d5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5561f0(void) {
  LOAD_REGS();
L_5561f0: /* 5561f0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 5561f3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5561f8(void) {
  LOAD_REGS();
L_5561f8: /* 5561f8: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 5561fb: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_556200(void) {
  LOAD_REGS();
L_556200: /* 556200: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 556203: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_556208(void) {
  LOAD_REGS();
L_556208: /* 556208: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 55620b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 55620e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 556210: je 0x55621e */
  if (zf) goto L_55621e;
L_556216: /* 556216: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 556219: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
L_55621e: /* 55621e: ret  */
  esp += 4; SPILL(); return;
}

void f_55621f(void) {
  LOAD_REGS();
L_55621f: /* 55621f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 556222: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_556227(void) {
  LOAD_REGS();
  goto L_556227;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556227: /* 556227: mov eax, 0x5721a8 */
  eax = 0x5721a8u;
/* 55622c: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556250(void) {
  LOAD_REGS();
L_556250: /* 556250: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 556253: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_556258(void) {
  LOAD_REGS();
L_556258: /* 556258: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 55625b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_556260(void) {
  LOAD_REGS();
L_556260: /* 556260: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 556263: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_556268(void) {
  LOAD_REGS();
L_556268: /* 556268: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 55626b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 55626e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 556270: je 0x55627e */
  if (zf) goto L_55627e;
L_556276: /* 556276: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 556279: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
L_55627e: /* 55627e: ret  */
  esp += 4; SPILL(); return;
}

void f_55627f(void) {
  LOAD_REGS();
L_55627f: /* 55627f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 556282: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_556287(void) {
  LOAD_REGS();
  goto L_556287;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556287: /* 556287: mov eax, 0x572240 */
  eax = 0x572240u;
/* 55628c: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5562b0(void) {
  LOAD_REGS();
L_5562b0: /* 5562b0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5562b3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5562b8(void) {
  LOAD_REGS();
L_5562b8: /* 5562b8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5562bb: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5562c0(void) {
  LOAD_REGS();
L_5562c0: /* 5562c0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5562c3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5562c8(void) {
  LOAD_REGS();
L_5562c8: /* 5562c8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5562cb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5562d0(void) {
  LOAD_REGS();
L_5562d0: /* 5562d0: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 5562d3: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5562d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5562d8: je 0x5562e6 */
  if (zf) goto L_5562e6;
L_5562de: /* 5562de: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 5562e1: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
L_5562e6: /* 5562e6: ret  */
  esp += 4; SPILL(); return;
}

void f_5562e7(void) {
  LOAD_REGS();
L_5562e7: /* 5562e7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5562ea: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5562ef(void) {
  LOAD_REGS();
L_5562ef: /* 5562ef: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5562f2: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5562f7(void) {
  LOAD_REGS();
  goto L_5562f7;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5562f7: /* 5562f7: mov eax, 0x5722a4 */
  eax = 0x5722a4u;
/* 5562fc: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556320(void) {
  LOAD_REGS();
L_556320: /* 556320: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 556323: jmp 0x4e1d52 */
  SPILL(); f_4e1d52(); return;
}

void f_556328(void) {
  LOAD_REGS();
L_556328: /* 556328: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 55632b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_556330(void) {
  LOAD_REGS();
  goto L_556330;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556330: /* 556330: mov eax, 0x5722d8 */
  eax = 0x5722d8u;
/* 556335: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556340(void) {
  LOAD_REGS();
L_556340: /* 556340: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556343: jmp 0x4e2cfc */
  SPILL(); f_4e2cfc(); return;
}

void f_556348(void) {
  LOAD_REGS();
L_556348: /* 556348: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55634b: add ecx, 0x4b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556351: jmp 0x4e3fcb */
  SPILL(); f_4e3fcb(); return;
}

void f_556356(void) {
  LOAD_REGS();
L_556356: /* 556356: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556359: add ecx, 0x4c4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4c4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55635f: jmp 0x4e42be */
  SPILL(); f_4e42be(); return;
}

void f_556364(void) {
  LOAD_REGS();
L_556364: /* 556364: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556367: add ecx, 0x4d0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4d0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55636d: jmp 0x4e20a4 */
  SPILL(); f_4e20a4(); return;
}

void f_556372(void) {
  LOAD_REGS();
L_556372: /* 556372: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556375: add ecx, 0x4dc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4dcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55637b: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_556380(void) {
  LOAD_REGS();
L_556380: /* 556380: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556383: add ecx, 0x4e8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4e8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556389: jmp 0x4e33c8 */
  SPILL(); f_4e33c8(); return;
}

void f_55638e(void) {
  LOAD_REGS();
L_55638e: /* 55638e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556391: add ecx, 0x4f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556397: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_55639c(void) {
  LOAD_REGS();
L_55639c: /* 55639c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55639f: add ecx, 0x500 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x500u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5563a5: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_5563aa(void) {
  LOAD_REGS();
L_5563aa: /* 5563aa: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5563ad: add ecx, 0x50c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5563b3: jmp 0x4e1b59 */
  SPILL(); f_4e1b59(); return;
}

void f_5563b8(void) {
  LOAD_REGS();
L_5563b8: /* 5563b8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5563bb: add ecx, 0x520 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x520u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5563c1: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5563c6(void) {
  LOAD_REGS();
  goto L_5563c6;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5563c6: /* 5563c6: mov eax, 0x572348 */
  eax = 0x572348u;
/* 5563cb: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556400(void) {
  LOAD_REGS();
L_556400: /* 556400: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556403: jmp 0x4e2cfc */
  SPILL(); f_4e2cfc(); return;
}

void f_556408(void) {
  LOAD_REGS();
L_556408: /* 556408: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55640b: add ecx, 0x4b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556411: jmp 0x4e3fcb */
  SPILL(); f_4e3fcb(); return;
}

void f_556416(void) {
  LOAD_REGS();
L_556416: /* 556416: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556419: add ecx, 0x4c4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4c4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55641f: jmp 0x4e42be */
  SPILL(); f_4e42be(); return;
}

void f_556424(void) {
  LOAD_REGS();
L_556424: /* 556424: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556427: add ecx, 0x4d0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4d0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55642d: jmp 0x4e20a4 */
  SPILL(); f_4e20a4(); return;
}

void f_556432(void) {
  LOAD_REGS();
L_556432: /* 556432: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556435: add ecx, 0x4dc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4dcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55643b: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_556440(void) {
  LOAD_REGS();
L_556440: /* 556440: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556443: add ecx, 0x4e8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4e8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556449: jmp 0x4e33c8 */
  SPILL(); f_4e33c8(); return;
}

void f_55644e(void) {
  LOAD_REGS();
L_55644e: /* 55644e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556451: add ecx, 0x4f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556457: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_55645c(void) {
  LOAD_REGS();
L_55645c: /* 55645c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55645f: add ecx, 0x500 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x500u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556465: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_55646a(void) {
  LOAD_REGS();
L_55646a: /* 55646a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55646d: add ecx, 0x50c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556473: jmp 0x4e1b59 */
  SPILL(); f_4e1b59(); return;
}

void f_556478(void) {
  LOAD_REGS();
  goto L_556478;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556478: /* 556478: mov eax, 0x5723b8 */
  eax = 0x5723b8u;
/* 55647d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5564b0(void) {
  LOAD_REGS();
L_5564b0: /* 5564b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5564b3: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_5564b8(void) {
  LOAD_REGS();
L_5564b8: /* 5564b8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5564bb: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5564be: jmp 0x4e4476 */
  SPILL(); f_4e4476(); return;
}

void f_5564c3(void) {
  LOAD_REGS();
L_5564c3: /* 5564c3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5564c6: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5564c9: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_5564ce(void) {
  LOAD_REGS();
L_5564ce: /* 5564ce: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5564d1: add ecx, 0x78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5564d4: jmp 0x4e2234 */
  SPILL(); f_4e2234(); return;
}

void f_5564d9(void) {
  LOAD_REGS();
L_5564d9: /* 5564d9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5564dc: add ecx, 0x84 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5564e2: jmp 0x4e322e */
  SPILL(); f_4e322e(); return;
}

void f_5564e7(void) {
  LOAD_REGS();
L_5564e7: /* 5564e7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5564ea: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5564f0: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5564f5(void) {
  LOAD_REGS();
  goto L_5564f5;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5564f5: /* 5564f5: mov eax, 0x572410 */
  eax = 0x572410u;
/* 5564fa: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556520(void) {
  LOAD_REGS();
L_556520: /* 556520: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556523: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_556528(void) {
  LOAD_REGS();
  goto L_556528;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556528: /* 556528: mov eax, 0x57243c */
  eax = 0x57243cu;
/* 55652d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556540(void) {
  LOAD_REGS();
L_556540: /* 556540: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556543: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_556548(void) {
  LOAD_REGS();
L_556548: /* 556548: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55654b: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55654e: jmp 0x4e4476 */
  SPILL(); f_4e4476(); return;
}

void f_556553(void) {
  LOAD_REGS();
L_556553: /* 556553: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556556: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556559: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_55655e(void) {
  LOAD_REGS();
L_55655e: /* 55655e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556561: add ecx, 0x78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556564: jmp 0x4e2234 */
  SPILL(); f_4e2234(); return;
}

void f_556569(void) {
  LOAD_REGS();
L_556569: /* 556569: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55656c: add ecx, 0x84 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556572: jmp 0x4e322e */
  SPILL(); f_4e322e(); return;
}

void f_556577(void) {
  LOAD_REGS();
  goto L_556577;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556577: /* 556577: mov eax, 0x572484 */
  eax = 0x572484u;
/* 55657c: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5565a0(void) {
  LOAD_REGS();
L_5565a0: /* 5565a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5565a3: jmp 0x4e2f4a */
  SPILL(); f_4e2f4a(); return;
}

void f_5565a8(void) {
  LOAD_REGS();
  goto L_5565a8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5565a8: /* 5565a8: mov eax, 0x5724b0 */
  eax = 0x5724b0u;
/* 5565ad: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5565c0(void) {
  LOAD_REGS();
L_5565c0: /* 5565c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5565c3: jmp 0x4e2f4a */
  SPILL(); f_4e2f4a(); return;
}

void f_5565c8(void) {
  LOAD_REGS();
  goto L_5565c8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5565c8: /* 5565c8: mov eax, 0x5724d8 */
  eax = 0x5724d8u;
/* 5565cd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5565e0(void) {
  LOAD_REGS();
L_5565e0: /* 5565e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5565e3: jmp 0x4e1bef */
  SPILL(); f_4e1bef(); return;
}

void f_5565e8(void) {
  LOAD_REGS();
  goto L_5565e8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5565e8: /* 5565e8: mov eax, 0x572500 */
  eax = 0x572500u;
/* 5565ed: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556600(void) {
  LOAD_REGS();
L_556600: /* 556600: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556603: jmp 0x4e1bef */
  SPILL(); f_4e1bef(); return;
}

void f_556608(void) {
  LOAD_REGS();
  goto L_556608;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556608: /* 556608: mov eax, 0x572528 */
  eax = 0x572528u;
/* 55660d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556620(void) {
  LOAD_REGS();
L_556620: /* 556620: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556623: jmp 0x4e1bef */
  SPILL(); f_4e1bef(); return;
}

void f_556628(void) {
  LOAD_REGS();
  goto L_556628;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556628: /* 556628: mov eax, 0x572550 */
  eax = 0x572550u;
/* 55662d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556640(void) {
  LOAD_REGS();
L_556640: /* 556640: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556643: jmp 0x4e245f */
  SPILL(); f_4e245f(); return;
}

void f_556648(void) {
  LOAD_REGS();
  goto L_556648;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556648: /* 556648: mov eax, 0x572578 */
  eax = 0x572578u;
/* 55664d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556660(void) {
  LOAD_REGS();
L_556660: /* 556660: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556663: jmp 0x4e245f */
  SPILL(); f_4e245f(); return;
}

void f_556668(void) {
  LOAD_REGS();
  goto L_556668;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556668: /* 556668: mov eax, 0x5725a0 */
  eax = 0x5725a0u;
/* 55666d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556680(void) {
  LOAD_REGS();
L_556680: /* 556680: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556683: jmp 0x4e245f */
  SPILL(); f_4e245f(); return;
}

void f_556688(void) {
  LOAD_REGS();
  goto L_556688;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556688: /* 556688: mov eax, 0x5725c8 */
  eax = 0x5725c8u;
/* 55668d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5566a0(void) {
  LOAD_REGS();
L_5566a0: /* 5566a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5566a3: jmp 0x4e1bef */
  SPILL(); f_4e1bef(); return;
}

void f_5566a8(void) {
  LOAD_REGS();
  goto L_5566a8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5566a8: /* 5566a8: mov eax, 0x5725f0 */
  eax = 0x5725f0u;
/* 5566ad: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5566c0(void) {
  LOAD_REGS();
L_5566c0: /* 5566c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5566c3: jmp 0x4e245f */
  SPILL(); f_4e245f(); return;
}

void f_5566c8(void) {
  LOAD_REGS();
  goto L_5566c8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5566c8: /* 5566c8: mov eax, 0x572618 */
  eax = 0x572618u;
/* 5566cd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5566e0(void) {
  LOAD_REGS();
L_5566e0: /* 5566e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5566e3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5566e8(void) {
  LOAD_REGS();
  goto L_5566e8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5566e8: /* 5566e8: mov eax, 0x572640 */
  eax = 0x572640u;
/* 5566ed: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556700(void) {
  LOAD_REGS();
L_556700: /* 556700: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556703: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556708(void) {
  LOAD_REGS();
  goto L_556708;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556708: /* 556708: mov eax, 0x572668 */
  eax = 0x572668u;
/* 55670d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556720(void) {
  LOAD_REGS();
L_556720: /* 556720: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556723: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556728(void) {
  LOAD_REGS();
  goto L_556728;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556728: /* 556728: mov eax, 0x572690 */
  eax = 0x572690u;
/* 55672d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556740(void) {
  LOAD_REGS();
L_556740: /* 556740: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556743: jmp 0x4e12c1 */
  SPILL(); f_4e12c1(); return;
}

void f_556748(void) {
  LOAD_REGS();
L_556748: /* 556748: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55674b: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55674e: jmp 0x4e318e */
  SPILL(); f_4e318e(); return;
}

void f_556753(void) {
  LOAD_REGS();
  goto L_556753;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556753: /* 556753: mov eax, 0x5726c0 */
  eax = 0x5726c0u;
/* 556758: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556770(void) {
  LOAD_REGS();
L_556770: /* 556770: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556773: jmp 0x4e12c1 */
  SPILL(); f_4e12c1(); return;
}

void f_556778(void) {
  LOAD_REGS();
L_556778: /* 556778: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55677b: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55677e: jmp 0x4e318e */
  SPILL(); f_4e318e(); return;
}

void f_556783(void) {
  LOAD_REGS();
  goto L_556783;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556783: /* 556783: mov eax, 0x5726f0 */
  eax = 0x5726f0u;
/* 556788: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5567a0(void) {
  LOAD_REGS();
L_5567a0: /* 5567a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5567a3: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_5567a8(void) {
  LOAD_REGS();
L_5567a8: /* 5567a8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5567ab: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5567ae: jmp 0x4e183e */
  SPILL(); f_4e183e(); return;
}

void f_5567b3(void) {
  LOAD_REGS();
L_5567b3: /* 5567b3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5567b6: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5567b9: jmp 0x4e18ca */
  SPILL(); f_4e18ca(); return;
}

void f_5567be(void) {
  LOAD_REGS();
L_5567be: /* 5567be: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5567c1: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5567c4: jmp 0x4e3df5 */
  SPILL(); f_4e3df5(); return;
}

void f_5567c9(void) {
  LOAD_REGS();
L_5567c9: /* 5567c9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5567cc: add ecx, 0x5c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5567cf: jmp 0x4e32fb */
  SPILL(); f_4e32fb(); return;
}

void f_5567d4(void) {
  LOAD_REGS();
  goto L_5567d4;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5567d4: /* 5567d4: mov eax, 0x572738 */
  eax = 0x572738u;
/* 5567d9: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5567f0(void) {
  LOAD_REGS();
L_5567f0: /* 5567f0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5567f3: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_5567f8(void) {
  LOAD_REGS();
L_5567f8: /* 5567f8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5567fb: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5567fe: jmp 0x4e183e */
  SPILL(); f_4e183e(); return;
}

void f_556803(void) {
  LOAD_REGS();
L_556803: /* 556803: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556806: jmp 0x4e1bef */
  SPILL(); f_4e1bef(); return;
}

void f_55680b(void) {
  LOAD_REGS();
L_55680b: /* 55680b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 55680e: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556811: jmp 0x4e18ca */
  SPILL(); f_4e18ca(); return;
}

void f_556816(void) {
  LOAD_REGS();
L_556816: /* 556816: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556819: jmp 0x4e245f */
  SPILL(); f_4e245f(); return;
}

void f_55681e(void) {
  LOAD_REGS();
  goto L_55681e;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_55681e: /* 55681e: mov eax, 0x572784 */
  eax = 0x572784u;
/* 556823: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556840(void) {
  LOAD_REGS();
L_556840: /* 556840: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556843: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_556848(void) {
  LOAD_REGS();
L_556848: /* 556848: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55684b: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55684e: jmp 0x4e183e */
  SPILL(); f_4e183e(); return;
}

void f_556853(void) {
  LOAD_REGS();
L_556853: /* 556853: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556856: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556859: jmp 0x4e18ca */
  SPILL(); f_4e18ca(); return;
}

void f_55685e(void) {
  LOAD_REGS();
L_55685e: /* 55685e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556861: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556864: jmp 0x4e3df5 */
  SPILL(); f_4e3df5(); return;
}

void f_556869(void) {
  LOAD_REGS();
  goto L_556869;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556869: /* 556869: mov eax, 0x5727c8 */
  eax = 0x5727c8u;
/* 55686e: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556880(void) {
  LOAD_REGS();
L_556880: /* 556880: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556883: jmp 0x4e152d */
  SPILL(); f_4e152d(); return;
}

void f_556888(void) {
  LOAD_REGS();
L_556888: /* 556888: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55688b: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55688e: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_556893(void) {
  LOAD_REGS();
L_556893: /* 556893: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556896: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556899: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_55689e(void) {
  LOAD_REGS();
L_55689e: /* 55689e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5568a1: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5568a4: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5568a9(void) {
  LOAD_REGS();
L_5568a9: /* 5568a9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5568ac: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5568af: jmp 0x4e262b */
  SPILL(); f_4e262b(); return;
}

void f_5568b4(void) {
  LOAD_REGS();
L_5568b4: /* 5568b4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5568b7: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5568ba: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_5568bf(void) {
  LOAD_REGS();
  goto L_5568bf;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5568bf: /* 5568bf: mov eax, 0x57281c */
  eax = 0x57281cu;
/* 5568c4: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5568e0(void) {
  LOAD_REGS();
L_5568e0: /* 5568e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5568e3: jmp 0x4e152d */
  SPILL(); f_4e152d(); return;
}

void f_5568e8(void) {
  LOAD_REGS();
L_5568e8: /* 5568e8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5568eb: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5568ee: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5568f3(void) {
  LOAD_REGS();
L_5568f3: /* 5568f3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5568f6: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5568f9: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5568fe(void) {
  LOAD_REGS();
L_5568fe: /* 5568fe: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556901: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556904: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_556909(void) {
  LOAD_REGS();
L_556909: /* 556909: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55690c: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55690f: jmp 0x4e262b */
  SPILL(); f_4e262b(); return;
}

void f_556914(void) {
  LOAD_REGS();
  goto L_556914;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556914: /* 556914: mov eax, 0x572868 */
  eax = 0x572868u;
/* 556919: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556930(void) {
  LOAD_REGS();
L_556930: /* 556930: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556933: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_556938(void) {
  LOAD_REGS();
L_556938: /* 556938: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55693b: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55693e: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_556943(void) {
  LOAD_REGS();
L_556943: /* 556943: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556946: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556949: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_55694e(void) {
  LOAD_REGS();
L_55694e: /* 55694e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556951: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556954: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_556959(void) {
  LOAD_REGS();
L_556959: /* 556959: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55695c: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55695f: jmp 0x4e262b */
  SPILL(); f_4e262b(); return;
}

void f_556964(void) {
  LOAD_REGS();
  goto L_556964;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556964: /* 556964: mov eax, 0x5728b4 */
  eax = 0x5728b4u;
/* 556969: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556980(void) {
  LOAD_REGS();
L_556980: /* 556980: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556983: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_556988(void) {
  LOAD_REGS();
L_556988: /* 556988: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 55698b: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55698e: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_556993(void) {
  LOAD_REGS();
L_556993: /* 556993: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556996: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556999: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_55699e(void) {
  LOAD_REGS();
L_55699e: /* 55699e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5569a1: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5569a4: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5569a9(void) {
  LOAD_REGS();
  goto L_5569a9;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5569a9: /* 5569a9: mov eax, 0x5728f8 */
  eax = 0x5728f8u;
/* 5569ae: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5569c0(void) {
  LOAD_REGS();
L_5569c0: /* 5569c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5569c3: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_5569c8(void) {
  LOAD_REGS();
L_5569c8: /* 5569c8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5569cb: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5569ce: jmp 0x4e262b */
  SPILL(); f_4e262b(); return;
}

void f_5569d3(void) {
  LOAD_REGS();
  goto L_5569d3;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5569d3: /* 5569d3: mov eax, 0x57292c */
  eax = 0x57292cu;
/* 5569d8: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5569f0(void) {
  LOAD_REGS();
L_5569f0: /* 5569f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5569f3: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_5569f8(void) {
  LOAD_REGS();
  goto L_5569f8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5569f8: /* 5569f8: mov eax, 0x572954 */
  eax = 0x572954u;
/* 5569fd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556a10(void) {
  LOAD_REGS();
L_556a10: /* 556a10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556a13: jmp 0x4e36ac */
  SPILL(); f_4e36ac(); return;
}

void f_556a18(void) {
  LOAD_REGS();
  goto L_556a18;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556a18: /* 556a18: mov eax, 0x57297c */
  eax = 0x57297cu;
/* 556a1d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556a30(void) {
  LOAD_REGS();
L_556a30: /* 556a30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556a33: jmp 0x4e28f1 */
  SPILL(); f_4e28f1(); return;
}

void f_556a38(void) {
  LOAD_REGS();
  goto L_556a38;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556a38: /* 556a38: mov eax, 0x5729a4 */
  eax = 0x5729a4u;
/* 556a3d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556a50(void) {
  LOAD_REGS();
L_556a50: /* 556a50: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 556a53: jmp 0x4e3274 */
  SPILL(); f_4e3274(); return;
}

void f_556a58(void) {
  LOAD_REGS();
  goto L_556a58;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556a58: /* 556a58: mov eax, 0x572a08 */
  eax = 0x572a08u;
/* 556a5d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556a70(void) {
  LOAD_REGS();
  goto L_556a70;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556a70: /* 556a70: mov eax, 0x572a6c */
  eax = 0x572a6cu;
/* 556a75: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556a80(void) {
  LOAD_REGS();
L_556a80: /* 556a80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556a83: jmp 0x4e32f1 */
  SPILL(); f_4e32f1(); return;
}

void f_556a88(void) {
  LOAD_REGS();
  goto L_556a88;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556a88: /* 556a88: mov eax, 0x572a9c */
  eax = 0x572a9cu;
/* 556a8d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556aa0(void) {
  LOAD_REGS();
L_556aa0: /* 556aa0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556aa3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556aa8(void) {
  LOAD_REGS();
  goto L_556aa8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556aa8: /* 556aa8: mov eax, 0x572ac4 */
  eax = 0x572ac4u;
/* 556aad: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556ac0(void) {
  LOAD_REGS();
  goto L_556ac0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556ac0: /* 556ac0: mov eax, 0x572b28 */
  eax = 0x572b28u;
/* 556ac5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556ad0(void) {
  LOAD_REGS();
  goto L_556ad0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556ad0: /* 556ad0: mov eax, 0x572b94 */
  eax = 0x572b94u;
/* 556ad5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556ae0(void) {
  LOAD_REGS();
L_556ae0: /* 556ae0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556ae3: jmp 0x4e349a */
  SPILL(); f_4e349a(); return;
}

void f_556ae8(void) {
  LOAD_REGS();
  goto L_556ae8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556ae8: /* 556ae8: mov eax, 0x572bc4 */
  eax = 0x572bc4u;
/* 556aed: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556b00(void) {
  LOAD_REGS();
L_556b00: /* 556b00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556b03: jmp 0x4e349a */
  SPILL(); f_4e349a(); return;
}

void f_556b08(void) {
  LOAD_REGS();
  goto L_556b08;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556b08: /* 556b08: mov eax, 0x572bec */
  eax = 0x572becu;
/* 556b0d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556b20(void) {
  LOAD_REGS();
L_556b20: /* 556b20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556b23: jmp 0x4e349a */
  SPILL(); f_4e349a(); return;
}

void f_556b28(void) {
  LOAD_REGS();
  goto L_556b28;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556b28: /* 556b28: mov eax, 0x572c14 */
  eax = 0x572c14u;
/* 556b2d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556b40(void) {
  LOAD_REGS();
  goto L_556b40;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556b40: /* 556b40: mov eax, 0x572c78 */
  eax = 0x572c78u;
/* 556b45: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556b50(void) {
  LOAD_REGS();
  goto L_556b50;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556b50: /* 556b50: mov eax, 0x572ce4 */
  eax = 0x572ce4u;
/* 556b55: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556b60(void) {
  LOAD_REGS();
L_556b60: /* 556b60: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 556b63: jmp 0x4e349a */
  SPILL(); f_4e349a(); return;
}

void f_556b68(void) {
  LOAD_REGS();
L_556b68: /* 556b68: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 556b6b: jmp 0x4e3832 */
  SPILL(); f_4e3832(); return;
}

void f_556b70(void) {
  LOAD_REGS();
L_556b70: /* 556b70: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 556b73: jmp 0x4e349a */
  SPILL(); f_4e349a(); return;
}

void f_556b78(void) {
  LOAD_REGS();
L_556b78: /* 556b78: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 556b7b: jmp 0x4e349a */
  SPILL(); f_4e349a(); return;
}

void f_556b80(void) {
  LOAD_REGS();
  goto L_556b80;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556b80: /* 556b80: mov eax, 0x572d70 */
  eax = 0x572d70u;
/* 556b85: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556ba0(void) {
  LOAD_REGS();
  goto L_556ba0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556ba0: /* 556ba0: mov eax, 0x572ddc */
  eax = 0x572ddcu;
/* 556ba5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556bb0(void) {
  LOAD_REGS();
  goto L_556bb0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556bb0: /* 556bb0: mov eax, 0x572e48 */
  eax = 0x572e48u;
/* 556bb5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556bc0(void) {
  LOAD_REGS();
L_556bc0: /* 556bc0: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 556bc3: jmp 0x4e178a */
  SPILL(); f_4e178a(); return;
}

void f_556bc8(void) {
  LOAD_REGS();
L_556bc8: /* 556bc8: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 556bcb: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_556bd0(void) {
  LOAD_REGS();
L_556bd0: /* 556bd0: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 556bd6: jmp 0x4e3913 */
  SPILL(); f_4e3913(); return;
}

void f_556bdb(void) {
  LOAD_REGS();
L_556bdb: /* 556bdb: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 556bde: jmp 0x4e33c8 */
  SPILL(); f_4e33c8(); return;
}

void f_556be3(void) {
  LOAD_REGS();
  goto L_556be3;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556be3: /* 556be3: mov eax, 0x572ed4 */
  eax = 0x572ed4u;
/* 556be8: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556c00(void) {
  LOAD_REGS();
  goto L_556c00;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556c00: /* 556c00: mov eax, 0x572f40 */
  eax = 0x572f40u;
/* 556c05: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556c10(void) {
  LOAD_REGS();
  goto L_556c10;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556c10: /* 556c10: mov eax, 0x572fac */
  eax = 0x572facu;
/* 556c15: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556c20(void) {
  LOAD_REGS();
L_556c20: /* 556c20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556c23: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556c28(void) {
  LOAD_REGS();
  goto L_556c28;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556c28: /* 556c28: mov eax, 0x572fdc */
  eax = 0x572fdcu;
/* 556c2d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556c40(void) {
  LOAD_REGS();
  goto L_556c40;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556c40: /* 556c40: mov eax, 0x573040 */
  eax = 0x573040u;
/* 556c45: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556c50(void) {
  LOAD_REGS();
L_556c50: /* 556c50: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 556c53: jmp 0x4e36cf */
  SPILL(); f_4e36cf(); return;
}

void f_556c58(void) {
  LOAD_REGS();
L_556c58: /* 556c58: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 556c5b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_556c60(void) {
  LOAD_REGS();
L_556c60: /* 556c60: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 556c63: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_556c68(void) {
  LOAD_REGS();
L_556c68: /* 556c68: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 556c6b: jmp 0x4e33c8 */
  SPILL(); f_4e33c8(); return;
}

void f_556c70(void) {
  LOAD_REGS();
  goto L_556c70;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556c70: /* 556c70: mov eax, 0x5730cc */
  eax = 0x5730ccu;
/* 556c75: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556c90(void) {
  LOAD_REGS();
  goto L_556c90;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556c90: /* 556c90: mov eax, 0x573138 */
  eax = 0x573138u;
/* 556c95: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556ca0(void) {
  LOAD_REGS();
  goto L_556ca0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556ca0: /* 556ca0: mov eax, 0x5731a4 */
  eax = 0x5731a4u;
/* 556ca5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556cb0(void) {
  LOAD_REGS();
  goto L_556cb0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556cb0: /* 556cb0: mov eax, 0x573210 */
  eax = 0x573210u;
/* 556cb5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556cc0(void) {
  LOAD_REGS();
L_556cc0: /* 556cc0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 556cc3: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_556cc8(void) {
  LOAD_REGS();
L_556cc8: /* 556cc8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 556ccb: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556cce: jmp 0x4e33c8 */
  SPILL(); f_4e33c8(); return;
}

void f_556cd3(void) {
  LOAD_REGS();
  goto L_556cd3;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556cd3: /* 556cd3: mov eax, 0x573258 */
  eax = 0x573258u;
/* 556cd8: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556cf0(void) {
  LOAD_REGS();
L_556cf0: /* 556cf0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 556cf3: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_556cf8(void) {
  LOAD_REGS();
L_556cf8: /* 556cf8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 556cfb: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 556cfe: jmp 0x4e33c8 */
  SPILL(); f_4e33c8(); return;
}

void f_556d03(void) {
  LOAD_REGS();
  goto L_556d03;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556d03: /* 556d03: mov eax, 0x5732d0 */
  eax = 0x5732d0u;
/* 556d08: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556d20(void) {
  LOAD_REGS();
  goto L_556d20;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556d20: /* 556d20: mov eax, 0x57333c */
  eax = 0x57333cu;
/* 556d25: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556d30(void) {
  LOAD_REGS();
  goto L_556d30;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556d30: /* 556d30: mov eax, 0x5733a8 */
  eax = 0x5733a8u;
/* 556d35: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556d40(void) {
  LOAD_REGS();
  goto L_556d40;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556d40: /* 556d40: mov eax, 0x573414 */
  eax = 0x573414u;
/* 556d45: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556d50(void) {
  LOAD_REGS();
  goto L_556d50;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556d50: /* 556d50: mov eax, 0x573480 */
  eax = 0x573480u;
/* 556d55: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556d60(void) {
  LOAD_REGS();
  goto L_556d60;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556d60: /* 556d60: mov eax, 0x573584 */
  eax = 0x573584u;
/* 556d65: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556d70(void) {
  LOAD_REGS();
  goto L_556d70;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556d70: /* 556d70: mov eax, 0x5735fc */
  eax = 0x5735fcu;
/* 556d75: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556d80(void) {
  LOAD_REGS();
  goto L_556d80;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556d80: /* 556d80: mov eax, 0x573668 */
  eax = 0x573668u;
/* 556d85: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556d90(void) {
  LOAD_REGS();
  goto L_556d90;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556d90: /* 556d90: mov eax, 0x5736d4 */
  eax = 0x5736d4u;
/* 556d95: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556da0(void) {
  LOAD_REGS();
  goto L_556da0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556da0: /* 556da0: mov eax, 0x573740 */
  eax = 0x573740u;
/* 556da5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556db0(void) {
  LOAD_REGS();
  goto L_556db0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556db0: /* 556db0: mov eax, 0x5737ac */
  eax = 0x5737acu;
/* 556db5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556dc0(void) {
  LOAD_REGS();
  goto L_556dc0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556dc0: /* 556dc0: mov eax, 0x573818 */
  eax = 0x573818u;
/* 556dc5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556dd0(void) {
  LOAD_REGS();
  goto L_556dd0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556dd0: /* 556dd0: mov eax, 0x573884 */
  eax = 0x573884u;
/* 556dd5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556de0(void) {
  LOAD_REGS();
  goto L_556de0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556de0: /* 556de0: mov eax, 0x5738f0 */
  eax = 0x5738f0u;
/* 556de5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556df0(void) {
  LOAD_REGS();
  goto L_556df0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556df0: /* 556df0: mov eax, 0x57395c */
  eax = 0x57395cu;
/* 556df5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556e00(void) {
  LOAD_REGS();
  goto L_556e00;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556e00: /* 556e00: mov eax, 0x5739c8 */
  eax = 0x5739c8u;
/* 556e05: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556e10(void) {
  LOAD_REGS();
  goto L_556e10;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556e10: /* 556e10: mov eax, 0x573a34 */
  eax = 0x573a34u;
/* 556e15: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556e20(void) {
  LOAD_REGS();
  goto L_556e20;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556e20: /* 556e20: mov eax, 0x573aa0 */
  eax = 0x573aa0u;
/* 556e25: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556e30(void) {
  LOAD_REGS();
  goto L_556e30;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556e30: /* 556e30: mov eax, 0x573b0c */
  eax = 0x573b0cu;
/* 556e35: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556e40(void) {
  LOAD_REGS();
  goto L_556e40;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556e40: /* 556e40: mov eax, 0x573b78 */
  eax = 0x573b78u;
/* 556e45: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556e50(void) {
  LOAD_REGS();
  goto L_556e50;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556e50: /* 556e50: mov eax, 0x573be4 */
  eax = 0x573be4u;
/* 556e55: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556e60(void) {
  LOAD_REGS();
  goto L_556e60;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556e60: /* 556e60: mov eax, 0x573c50 */
  eax = 0x573c50u;
/* 556e65: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556e70(void) {
  LOAD_REGS();
  goto L_556e70;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556e70: /* 556e70: mov eax, 0x573cbc */
  eax = 0x573cbcu;
/* 556e75: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556e80(void) {
  LOAD_REGS();
  goto L_556e80;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556e80: /* 556e80: mov eax, 0x573d28 */
  eax = 0x573d28u;
/* 556e85: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556e90(void) {
  LOAD_REGS();
  goto L_556e90;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556e90: /* 556e90: mov eax, 0x573d94 */
  eax = 0x573d94u;
/* 556e95: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556ea0(void) {
  LOAD_REGS();
  goto L_556ea0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556ea0: /* 556ea0: mov eax, 0x573e00 */
  eax = 0x573e00u;
/* 556ea5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556eb0(void) {
  LOAD_REGS();
  goto L_556eb0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556eb0: /* 556eb0: mov eax, 0x573e6c */
  eax = 0x573e6cu;
/* 556eb5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556ec0(void) {
  LOAD_REGS();
  goto L_556ec0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556ec0: /* 556ec0: mov eax, 0x573ed8 */
  eax = 0x573ed8u;
/* 556ec5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556ed0(void) {
  LOAD_REGS();
  goto L_556ed0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556ed0: /* 556ed0: mov eax, 0x573f44 */
  eax = 0x573f44u;
/* 556ed5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556ee0(void) {
  LOAD_REGS();
L_556ee0: /* 556ee0: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 556ee3: jmp 0x4e3b0c */
  SPILL(); f_4e3b0c(); return;
}

void f_556ee8(void) {
  LOAD_REGS();
  goto L_556ee8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556ee8: /* 556ee8: mov eax, 0x573f74 */
  eax = 0x573f74u;
/* 556eed: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556f00(void) {
  LOAD_REGS();
  goto L_556f00;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556f00: /* 556f00: mov eax, 0x57401c */
  eax = 0x57401cu;
/* 556f05: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556f10(void) {
  LOAD_REGS();
L_556f10: /* 556f10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556f13: jmp 0x4e3a9e */
  SPILL(); f_4e3a9e(); return;
}

void f_556f18(void) {
  LOAD_REGS();
  goto L_556f18;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556f18: /* 556f18: mov eax, 0x574050 */
  eax = 0x574050u;
/* 556f1d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556f30(void) {
  LOAD_REGS();
L_556f30: /* 556f30: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 556f33: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_556f38(void) {
  LOAD_REGS();
  goto L_556f38;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556f38: /* 556f38: mov eax, 0x5740bc */
  eax = 0x5740bcu;
/* 556f3d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556f50(void) {
  LOAD_REGS();
  goto L_556f50;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556f50: /* 556f50: mov eax, 0x574128 */
  eax = 0x574128u;
/* 556f55: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556f60(void) {
  LOAD_REGS();
  goto L_556f60;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556f60: /* 556f60: mov eax, 0x574194 */
  eax = 0x574194u;
/* 556f65: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556f70(void) {
  LOAD_REGS();
  goto L_556f70;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556f70: /* 556f70: mov eax, 0x574200 */
  eax = 0x574200u;
/* 556f75: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556f80(void) {
  LOAD_REGS();
L_556f80: /* 556f80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556f83: jmp 0x4e3a9e */
  SPILL(); f_4e3a9e(); return;
}

void f_556f88(void) {
  LOAD_REGS();
  goto L_556f88;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556f88: /* 556f88: mov eax, 0x574230 */
  eax = 0x574230u;
/* 556f8d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556fa0(void) {
  LOAD_REGS();
  goto L_556fa0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556fa0: /* 556fa0: mov eax, 0x574294 */
  eax = 0x574294u;
/* 556fa5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556fb0(void) {
  LOAD_REGS();
  goto L_556fb0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556fb0: /* 556fb0: mov eax, 0x574300 */
  eax = 0x574300u;
/* 556fb5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556fc0(void) {
  LOAD_REGS();
L_556fc0: /* 556fc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 556fc3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_556fc8(void) {
  LOAD_REGS();
  goto L_556fc8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556fc8: /* 556fc8: mov eax, 0x574330 */
  eax = 0x574330u;
/* 556fcd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556fe0(void) {
  LOAD_REGS();
  goto L_556fe0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556fe0: /* 556fe0: mov eax, 0x574394 */
  eax = 0x574394u;
/* 556fe5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_556ff0(void) {
  LOAD_REGS();
  goto L_556ff0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_556ff0: /* 556ff0: mov eax, 0x574488 */
  eax = 0x574488u;
/* 556ff5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557000(void) {
  LOAD_REGS();
L_557000: /* 557000: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557003: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557008(void) {
  LOAD_REGS();
L_557008: /* 557008: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55700b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557010(void) {
  LOAD_REGS();
L_557010: /* 557010: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557013: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557018(void) {
  LOAD_REGS();
L_557018: /* 557018: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 55701b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 55701e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 557020: je 0x55702e */
  if (zf) goto L_55702e;
L_557026: /* 557026: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 557029: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
L_55702e: /* 55702e: ret  */
  esp += 4; SPILL(); return;
}

void f_55702f(void) {
  LOAD_REGS();
L_55702f: /* 55702f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557032: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557037(void) {
  LOAD_REGS();
  goto L_557037;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557037: /* 557037: mov eax, 0x5744e4 */
  eax = 0x5744e4u;
/* 55703c: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557060(void) {
  LOAD_REGS();
  goto L_557060;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557060: /* 557060: mov eax, 0x57454c */
  eax = 0x57454cu;
/* 557065: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557070(void) {
  LOAD_REGS();
  goto L_557070;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557070: /* 557070: mov eax, 0x5745b8 */
  eax = 0x5745b8u;
/* 557075: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557080(void) {
  LOAD_REGS();
L_557080: /* 557080: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 557083: jmp 0x4e2cfc */
  SPILL(); f_4e2cfc(); return;
}

void f_557088(void) {
  LOAD_REGS();
L_557088: /* 557088: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 55708b: add ecx, 0x4b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 557091: jmp 0x4e3fcb */
  SPILL(); f_4e3fcb(); return;
}

void f_557096(void) {
  LOAD_REGS();
L_557096: /* 557096: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 557099: add ecx, 0x4c4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4c4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55709f: jmp 0x4e42be */
  SPILL(); f_4e42be(); return;
}

void f_5570a4(void) {
  LOAD_REGS();
L_5570a4: /* 5570a4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5570a7: add ecx, 0x4d0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4d0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5570ad: jmp 0x4e20a4 */
  SPILL(); f_4e20a4(); return;
}

void f_5570b2(void) {
  LOAD_REGS();
L_5570b2: /* 5570b2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5570b5: add ecx, 0x4dc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4dcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5570bb: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_5570c0(void) {
  LOAD_REGS();
L_5570c0: /* 5570c0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5570c3: add ecx, 0x4e8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4e8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5570c9: jmp 0x4e33c8 */
  SPILL(); f_4e33c8(); return;
}

void f_5570ce(void) {
  LOAD_REGS();
L_5570ce: /* 5570ce: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5570d1: add ecx, 0x4f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5570d7: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_5570dc(void) {
  LOAD_REGS();
L_5570dc: /* 5570dc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5570df: add ecx, 0x500 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x500u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5570e5: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_5570ea(void) {
  LOAD_REGS();
L_5570ea: /* 5570ea: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5570ed: add ecx, 0x50c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5570f3: jmp 0x4e1b59 */
  SPILL(); f_4e1b59(); return;
}

void f_5570f8(void) {
  LOAD_REGS();
L_5570f8: /* 5570f8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5570fb: add ecx, 0x520 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x520u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 557101: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557106(void) {
  LOAD_REGS();
  goto L_557106;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557106: /* 557106: mov eax, 0x574674 */
  eax = 0x574674u;
/* 55710b: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557140(void) {
  LOAD_REGS();
  goto L_557140;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557140: /* 557140: mov eax, 0x5746e8 */
  eax = 0x5746e8u;
/* 557145: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557150(void) {
  LOAD_REGS();
L_557150: /* 557150: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 557153: jmp 0x4e1cd0 */
  SPILL(); f_4e1cd0(); return;
}

void f_557158(void) {
  LOAD_REGS();
  goto L_557158;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557158: /* 557158: mov eax, 0x574718 */
  eax = 0x574718u;
/* 55715d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557170(void) {
  LOAD_REGS();
L_557170: /* 557170: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 557173: jmp 0x4e1cd0 */
  SPILL(); f_4e1cd0(); return;
}

void f_557178(void) {
  LOAD_REGS();
  goto L_557178;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557178: /* 557178: mov eax, 0x574740 */
  eax = 0x574740u;
/* 55717d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557190(void) {
  LOAD_REGS();
L_557190: /* 557190: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 557193: jmp 0x4e1cd0 */
  SPILL(); f_4e1cd0(); return;
}

void f_557198(void) {
  LOAD_REGS();
  goto L_557198;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557198: /* 557198: mov eax, 0x574768 */
  eax = 0x574768u;
/* 55719d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5571b0(void) {
  LOAD_REGS();
L_5571b0: /* 5571b0: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 5571b3: jmp 0x4e1cd0 */
  SPILL(); f_4e1cd0(); return;
}

void f_5571b8(void) {
  LOAD_REGS();
L_5571b8: /* 5571b8: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 5571bb: jmp 0x4e24aa */
  SPILL(); f_4e24aa(); return;
}

void f_5571c0(void) {
  LOAD_REGS();
L_5571c0: /* 5571c0: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 5571c6: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_5571cb(void) {
  LOAD_REGS();
L_5571cb: /* 5571cb: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 5571ce: jmp 0x4e1cd0 */
  SPILL(); f_4e1cd0(); return;
}

void f_5571d3(void) {
  LOAD_REGS();
  goto L_5571d3;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5571d3: /* 5571d3: mov eax, 0x5748b8 */
  eax = 0x5748b8u;
/* 5571d8: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5571f0(void) {
  LOAD_REGS();
  goto L_5571f0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5571f0: /* 5571f0: mov eax, 0x57493c */
  eax = 0x57493cu;
/* 5571f5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557200(void) {
  LOAD_REGS();
L_557200: /* 557200: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 557203: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 557206: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 557208: je 0x557216 */
  if (zf) goto L_557216;
L_55720e: /* 55720e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 557211: jmp 0x4e3fcb */
  SPILL(); f_4e3fcb(); return;
L_557216: /* 557216: ret  */
  esp += 4; SPILL(); return;
}

void f_557217(void) {
  LOAD_REGS();
  goto L_557217;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557217: /* 557217: mov eax, 0x5749b0 */
  eax = 0x5749b0u;
/* 55721c: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557230(void) {
  LOAD_REGS();
  goto L_557230;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557230: /* 557230: mov eax, 0x574a1c */
  eax = 0x574a1cu;
/* 557235: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557240(void) {
  LOAD_REGS();
  goto L_557240;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557240: /* 557240: mov eax, 0x574a88 */
  eax = 0x574a88u;
/* 557245: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557250(void) {
  LOAD_REGS();
  goto L_557250;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557250: /* 557250: mov eax, 0x574af4 */
  eax = 0x574af4u;
/* 557255: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557260(void) {
  LOAD_REGS();
  goto L_557260;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557260: /* 557260: mov eax, 0x574b60 */
  eax = 0x574b60u;
/* 557265: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557270(void) {
  LOAD_REGS();
  goto L_557270;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557270: /* 557270: mov eax, 0x574bcc */
  eax = 0x574bccu;
/* 557275: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557280(void) {
  LOAD_REGS();
  goto L_557280;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557280: /* 557280: mov eax, 0x574c38 */
  eax = 0x574c38u;
/* 557285: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557290(void) {
  LOAD_REGS();
  goto L_557290;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557290: /* 557290: mov eax, 0x574ca4 */
  eax = 0x574ca4u;
/* 557295: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5572a0(void) {
  LOAD_REGS();
  goto L_5572a0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5572a0: /* 5572a0: mov eax, 0x574d10 */
  eax = 0x574d10u;
/* 5572a5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5572b0(void) {
  LOAD_REGS();
  goto L_5572b0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5572b0: /* 5572b0: mov eax, 0x574d7c */
  eax = 0x574d7cu;
/* 5572b5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5572c0(void) {
  LOAD_REGS();
  goto L_5572c0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5572c0: /* 5572c0: mov eax, 0x574de8 */
  eax = 0x574de8u;
/* 5572c5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5572d0(void) {
  LOAD_REGS();
  goto L_5572d0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5572d0: /* 5572d0: mov eax, 0x574e54 */
  eax = 0x574e54u;
/* 5572d5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5572e0(void) {
  LOAD_REGS();
  goto L_5572e0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5572e0: /* 5572e0: mov eax, 0x574ec0 */
  eax = 0x574ec0u;
/* 5572e5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5572f0(void) {
  LOAD_REGS();
L_5572f0: /* 5572f0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5572f3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5572f8(void) {
  LOAD_REGS();
L_5572f8: /* 5572f8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5572fb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557300(void) {
  LOAD_REGS();
  goto L_557300;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557300: /* 557300: mov eax, 0x574ef8 */
  eax = 0x574ef8u;
/* 557305: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557310(void) {
  LOAD_REGS();
L_557310: /* 557310: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557313: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557318(void) {
  LOAD_REGS();
L_557318: /* 557318: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55731b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557320(void) {
  LOAD_REGS();
  goto L_557320;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557320: /* 557320: mov eax, 0x574f28 */
  eax = 0x574f28u;
/* 557325: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557330(void) {
  LOAD_REGS();
L_557330: /* 557330: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557333: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557338(void) {
  LOAD_REGS();
L_557338: /* 557338: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55733b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557340(void) {
  LOAD_REGS();
  goto L_557340;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557340: /* 557340: mov eax, 0x574f58 */
  eax = 0x574f58u;
/* 557345: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557350(void) {
  LOAD_REGS();
L_557350: /* 557350: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557353: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557358(void) {
  LOAD_REGS();
L_557358: /* 557358: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55735b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557360(void) {
  LOAD_REGS();
  goto L_557360;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557360: /* 557360: mov eax, 0x574f88 */
  eax = 0x574f88u;
/* 557365: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557370(void) {
  LOAD_REGS();
L_557370: /* 557370: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557373: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557378(void) {
  LOAD_REGS();
L_557378: /* 557378: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55737b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557380(void) {
  LOAD_REGS();
  goto L_557380;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557380: /* 557380: mov eax, 0x574fb8 */
  eax = 0x574fb8u;
/* 557385: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557390(void) {
  LOAD_REGS();
L_557390: /* 557390: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557393: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557398(void) {
  LOAD_REGS();
L_557398: /* 557398: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55739b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5573a0(void) {
  LOAD_REGS();
  goto L_5573a0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5573a0: /* 5573a0: mov eax, 0x574fe8 */
  eax = 0x574fe8u;
/* 5573a5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5573b0(void) {
  LOAD_REGS();
L_5573b0: /* 5573b0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5573b3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5573b8(void) {
  LOAD_REGS();
L_5573b8: /* 5573b8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5573bb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5573c0(void) {
  LOAD_REGS();
  goto L_5573c0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5573c0: /* 5573c0: mov eax, 0x575018 */
  eax = 0x575018u;
/* 5573c5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5573d0(void) {
  LOAD_REGS();
L_5573d0: /* 5573d0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5573d3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5573d8(void) {
  LOAD_REGS();
L_5573d8: /* 5573d8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5573db: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5573e0(void) {
  LOAD_REGS();
  goto L_5573e0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5573e0: /* 5573e0: mov eax, 0x575048 */
  eax = 0x575048u;
/* 5573e5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5573f0(void) {
  LOAD_REGS();
L_5573f0: /* 5573f0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5573f3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5573f8(void) {
  LOAD_REGS();
L_5573f8: /* 5573f8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5573fb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557400(void) {
  LOAD_REGS();
  goto L_557400;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557400: /* 557400: mov eax, 0x575078 */
  eax = 0x575078u;
/* 557405: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557410(void) {
  LOAD_REGS();
L_557410: /* 557410: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557413: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557418(void) {
  LOAD_REGS();
L_557418: /* 557418: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 55741b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557420(void) {
  LOAD_REGS();
  goto L_557420;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557420: /* 557420: mov eax, 0x5750a8 */
  eax = 0x5750a8u;
/* 557425: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557430(void) {
  LOAD_REGS();
L_557430: /* 557430: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557433: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557438(void) {
  LOAD_REGS();
L_557438: /* 557438: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 55743b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557440(void) {
  LOAD_REGS();
  goto L_557440;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557440: /* 557440: mov eax, 0x5750d8 */
  eax = 0x5750d8u;
/* 557445: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557450(void) {
  LOAD_REGS();
L_557450: /* 557450: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557453: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557458(void) {
  LOAD_REGS();
L_557458: /* 557458: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55745b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557460(void) {
  LOAD_REGS();
  goto L_557460;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557460: /* 557460: mov eax, 0x575108 */
  eax = 0x575108u;
/* 557465: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557470(void) {
  LOAD_REGS();
L_557470: /* 557470: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557473: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557478(void) {
  LOAD_REGS();
L_557478: /* 557478: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 55747b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557480(void) {
  LOAD_REGS();
L_557480: /* 557480: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557483: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557488(void) {
  LOAD_REGS();
L_557488: /* 557488: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55748b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557490(void) {
  LOAD_REGS();
L_557490: /* 557490: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 557493: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557498(void) {
  LOAD_REGS();
L_557498: /* 557498: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 55749b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5574a0(void) {
  LOAD_REGS();
  goto L_5574a0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5574a0: /* 5574a0: mov eax, 0x575158 */
  eax = 0x575158u;
/* 5574a5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5574c0(void) {
  LOAD_REGS();
L_5574c0: /* 5574c0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5574c3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5574c8(void) {
  LOAD_REGS();
L_5574c8: /* 5574c8: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5574cb: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5574d0(void) {
  LOAD_REGS();
L_5574d0: /* 5574d0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5574d3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5574d8(void) {
  LOAD_REGS();
L_5574d8: /* 5574d8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5574db: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5574e0(void) {
  LOAD_REGS();
L_5574e0: /* 5574e0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5574e3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5574e8(void) {
  LOAD_REGS();
L_5574e8: /* 5574e8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5574eb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5574f0(void) {
  LOAD_REGS();
L_5574f0: /* 5574f0: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5574f3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5574f8(void) {
  LOAD_REGS();
L_5574f8: /* 5574f8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5574fb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557500(void) {
  LOAD_REGS();
  goto L_557500;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557500: /* 557500: mov eax, 0x5751bc */
  eax = 0x5751bcu;
/* 557505: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557520(void) {
  LOAD_REGS();
L_557520: /* 557520: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557523: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557528(void) {
  LOAD_REGS();
L_557528: /* 557528: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 55752b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557530(void) {
  LOAD_REGS();
L_557530: /* 557530: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557533: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557538(void) {
  LOAD_REGS();
L_557538: /* 557538: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55753b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557540(void) {
  LOAD_REGS();
  goto L_557540;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557540: /* 557540: mov eax, 0x575204 */
  eax = 0x575204u;
/* 557545: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557560(void) {
  LOAD_REGS();
L_557560: /* 557560: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557563: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557568(void) {
  LOAD_REGS();
L_557568: /* 557568: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 55756b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557570(void) {
  LOAD_REGS();
L_557570: /* 557570: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557573: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557578(void) {
  LOAD_REGS();
L_557578: /* 557578: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55757b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557580(void) {
  LOAD_REGS();
  goto L_557580;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557580: /* 557580: mov eax, 0x575248 */
  eax = 0x575248u;
/* 557585: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5575a0(void) {
  LOAD_REGS();
L_5575a0: /* 5575a0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5575a3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5575a8(void) {
  LOAD_REGS();
L_5575a8: /* 5575a8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5575ab: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5575b0(void) {
  LOAD_REGS();
L_5575b0: /* 5575b0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5575b3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5575b8(void) {
  LOAD_REGS();
L_5575b8: /* 5575b8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5575bb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5575c0(void) {
  LOAD_REGS();
  goto L_5575c0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5575c0: /* 5575c0: mov eax, 0x57528c */
  eax = 0x57528cu;
/* 5575c5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5575e0(void) {
  LOAD_REGS();
L_5575e0: /* 5575e0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5575e3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5575e8(void) {
  LOAD_REGS();
L_5575e8: /* 5575e8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5575eb: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5575f0(void) {
  LOAD_REGS();
L_5575f0: /* 5575f0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5575f3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5575f8(void) {
  LOAD_REGS();
L_5575f8: /* 5575f8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5575fb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557600(void) {
  LOAD_REGS();
  goto L_557600;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557600: /* 557600: mov eax, 0x5752d0 */
  eax = 0x5752d0u;
/* 557605: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557620(void) {
  LOAD_REGS();
L_557620: /* 557620: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557623: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557628(void) {
  LOAD_REGS();
L_557628: /* 557628: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 55762b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557630(void) {
  LOAD_REGS();
L_557630: /* 557630: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557633: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557638(void) {
  LOAD_REGS();
L_557638: /* 557638: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55763b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557640(void) {
  LOAD_REGS();
  goto L_557640;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557640: /* 557640: mov eax, 0x575314 */
  eax = 0x575314u;
/* 557645: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557660(void) {
  LOAD_REGS();
L_557660: /* 557660: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557663: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557668(void) {
  LOAD_REGS();
L_557668: /* 557668: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 55766b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557670(void) {
  LOAD_REGS();
L_557670: /* 557670: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557673: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557678(void) {
  LOAD_REGS();
L_557678: /* 557678: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55767b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557680(void) {
  LOAD_REGS();
  goto L_557680;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557680: /* 557680: mov eax, 0x575358 */
  eax = 0x575358u;
/* 557685: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5576a0(void) {
  LOAD_REGS();
L_5576a0: /* 5576a0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5576a3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5576a8(void) {
  LOAD_REGS();
L_5576a8: /* 5576a8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5576ab: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5576b0(void) {
  LOAD_REGS();
L_5576b0: /* 5576b0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5576b3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5576b8(void) {
  LOAD_REGS();
L_5576b8: /* 5576b8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5576bb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5576c0(void) {
  LOAD_REGS();
  goto L_5576c0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5576c0: /* 5576c0: mov eax, 0x57539c */
  eax = 0x57539cu;
/* 5576c5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5576e0(void) {
  LOAD_REGS();
L_5576e0: /* 5576e0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5576e3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5576e8(void) {
  LOAD_REGS();
L_5576e8: /* 5576e8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5576eb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5576f0(void) {
  LOAD_REGS();
  goto L_5576f0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5576f0: /* 5576f0: mov eax, 0x5753d0 */
  eax = 0x5753d0u;
/* 5576f5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557700(void) {
  LOAD_REGS();
L_557700: /* 557700: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557703: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557708(void) {
  LOAD_REGS();
L_557708: /* 557708: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 55770b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557710(void) {
  LOAD_REGS();
L_557710: /* 557710: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557713: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557718(void) {
  LOAD_REGS();
L_557718: /* 557718: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55771b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557720(void) {
  LOAD_REGS();
  goto L_557720;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557720: /* 557720: mov eax, 0x575410 */
  eax = 0x575410u;
/* 557725: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557740(void) {
  LOAD_REGS();
L_557740: /* 557740: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557743: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557748(void) {
  LOAD_REGS();
L_557748: /* 557748: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55774b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557750(void) {
  LOAD_REGS();
L_557750: /* 557750: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557753: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557758(void) {
  LOAD_REGS();
L_557758: /* 557758: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 55775b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557760(void) {
  LOAD_REGS();
  goto L_557760;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557760: /* 557760: mov eax, 0x575454 */
  eax = 0x575454u;
/* 557765: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557780(void) {
  LOAD_REGS();
L_557780: /* 557780: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557783: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557788(void) {
  LOAD_REGS();
L_557788: /* 557788: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55778b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557790(void) {
  LOAD_REGS();
L_557790: /* 557790: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557793: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557798(void) {
  LOAD_REGS();
L_557798: /* 557798: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 55779b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5577a0(void) {
  LOAD_REGS();
  goto L_5577a0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5577a0: /* 5577a0: mov eax, 0x575498 */
  eax = 0x575498u;
/* 5577a5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5577c0(void) {
  LOAD_REGS();
L_5577c0: /* 5577c0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5577c3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5577c8(void) {
  LOAD_REGS();
L_5577c8: /* 5577c8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5577cb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5577d0(void) {
  LOAD_REGS();
  goto L_5577d0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5577d0: /* 5577d0: mov eax, 0x5754cc */
  eax = 0x5754ccu;
/* 5577d5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5577e0(void) {
  LOAD_REGS();
L_5577e0: /* 5577e0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5577e3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5577e8(void) {
  LOAD_REGS();
L_5577e8: /* 5577e8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5577eb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5577f0(void) {
  LOAD_REGS();
  goto L_5577f0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5577f0: /* 5577f0: mov eax, 0x5754fc */
  eax = 0x5754fcu;
/* 5577f5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557800(void) {
  LOAD_REGS();
L_557800: /* 557800: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557803: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557808(void) {
  LOAD_REGS();
L_557808: /* 557808: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55780b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557810(void) {
  LOAD_REGS();
  goto L_557810;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557810: /* 557810: mov eax, 0x57552c */
  eax = 0x57552cu;
/* 557815: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557820(void) {
  LOAD_REGS();
L_557820: /* 557820: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557823: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557828(void) {
  LOAD_REGS();
L_557828: /* 557828: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 55782b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557830(void) {
  LOAD_REGS();
L_557830: /* 557830: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 557833: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557838(void) {
  LOAD_REGS();
L_557838: /* 557838: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 55783b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557840(void) {
  LOAD_REGS();
L_557840: /* 557840: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557843: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557848(void) {
  LOAD_REGS();
L_557848: /* 557848: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55784b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557850(void) {
  LOAD_REGS();
  goto L_557850;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557850: /* 557850: mov eax, 0x57557c */
  eax = 0x57557cu;
/* 557855: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557870(void) {
  LOAD_REGS();
L_557870: /* 557870: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557873: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557878(void) {
  LOAD_REGS();
L_557878: /* 557878: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55787b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557880(void) {
  LOAD_REGS();
  goto L_557880;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557880: /* 557880: mov eax, 0x5755b0 */
  eax = 0x5755b0u;
/* 557885: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557890(void) {
  LOAD_REGS();
L_557890: /* 557890: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557893: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557898(void) {
  LOAD_REGS();
L_557898: /* 557898: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55789b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5578a0(void) {
  LOAD_REGS();
  goto L_5578a0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5578a0: /* 5578a0: mov eax, 0x5755e0 */
  eax = 0x5755e0u;
/* 5578a5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5578b0(void) {
  LOAD_REGS();
L_5578b0: /* 5578b0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5578b3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5578b8(void) {
  LOAD_REGS();
L_5578b8: /* 5578b8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5578bb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5578c0(void) {
  LOAD_REGS();
  goto L_5578c0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5578c0: /* 5578c0: mov eax, 0x575610 */
  eax = 0x575610u;
/* 5578c5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5578d0(void) {
  LOAD_REGS();
  goto L_5578d0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5578d0: /* 5578d0: mov eax, 0x575674 */
  eax = 0x575674u;
/* 5578d5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5578e0(void) {
  LOAD_REGS();
L_5578e0: /* 5578e0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5578e3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5578e8(void) {
  LOAD_REGS();
  goto L_5578e8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5578e8: /* 5578e8: mov eax, 0x5756a4 */
  eax = 0x5756a4u;
/* 5578ed: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557900(void) {
  LOAD_REGS();
L_557900: /* 557900: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557903: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557908(void) {
  LOAD_REGS();
L_557908: /* 557908: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55790b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557910(void) {
  LOAD_REGS();
L_557910: /* 557910: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557913: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557918(void) {
  LOAD_REGS();
L_557918: /* 557918: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 55791b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557920(void) {
  LOAD_REGS();
  goto L_557920;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557920: /* 557920: mov eax, 0x5756e4 */
  eax = 0x5756e4u;
/* 557925: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557940(void) {
  LOAD_REGS();
L_557940: /* 557940: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557943: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557948(void) {
  LOAD_REGS();
L_557948: /* 557948: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 55794b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557950(void) {
  LOAD_REGS();
L_557950: /* 557950: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557953: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557958(void) {
  LOAD_REGS();
L_557958: /* 557958: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 55795b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557960(void) {
  LOAD_REGS();
  goto L_557960;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557960: /* 557960: mov eax, 0x575728 */
  eax = 0x575728u;
/* 557965: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557980(void) {
  LOAD_REGS();
L_557980: /* 557980: lea ecx, [ebp - 0x81c] */
  ecx = (uint32_t)(ebp + 0xfffff7e4u);
/* 557986: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_55798b(void) {
  LOAD_REGS();
L_55798b: /* 55798b: lea ecx, [ebp - 0x81c] */
  ecx = (uint32_t)(ebp + 0xfffff7e4u);
/* 557991: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557996(void) {
  LOAD_REGS();
  goto L_557996;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557996: /* 557996: mov eax, 0x57575c */
  eax = 0x57575cu;
/* 55799b: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5579b0(void) {
  LOAD_REGS();
L_5579b0: /* 5579b0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5579b3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5579b8(void) {
  LOAD_REGS();
L_5579b8: /* 5579b8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5579bb: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5579c0(void) {
  LOAD_REGS();
L_5579c0: /* 5579c0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5579c3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5579c8(void) {
  LOAD_REGS();
L_5579c8: /* 5579c8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5579cb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5579d0(void) {
  LOAD_REGS();
  goto L_5579d0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5579d0: /* 5579d0: mov eax, 0x57579c */
  eax = 0x57579cu;
/* 5579d5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5579f0(void) {
  LOAD_REGS();
L_5579f0: /* 5579f0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 5579f3: jmp 0x4e2b5d */
  SPILL(); f_4e2b5d(); return;
}

void f_5579f8(void) {
  LOAD_REGS();
  goto L_5579f8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5579f8: /* 5579f8: mov eax, 0x57580c */
  eax = 0x57580cu;
/* 5579fd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557a10(void) {
  LOAD_REGS();
L_557a10: /* 557a10: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 557a13: jmp 0x4e2b5d */
  SPILL(); f_4e2b5d(); return;
}

void f_557a18(void) {
  LOAD_REGS();
  goto L_557a18;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557a18: /* 557a18: mov eax, 0x575880 */
  eax = 0x575880u;
/* 557a1d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557a30(void) {
  LOAD_REGS();
L_557a30: /* 557a30: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 557a33: jmp 0x4e2b5d */
  SPILL(); f_4e2b5d(); return;
}

void f_557a38(void) {
  LOAD_REGS();
  goto L_557a38;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557a38: /* 557a38: mov eax, 0x5758f4 */
  eax = 0x5758f4u;
/* 557a3d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557a50(void) {
  LOAD_REGS();
  goto L_557a50;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557a50: /* 557a50: mov eax, 0x575960 */
  eax = 0x575960u;
/* 557a55: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557a60(void) {
  LOAD_REGS();
  goto L_557a60;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557a60: /* 557a60: mov eax, 0x5759cc */
  eax = 0x5759ccu;
/* 557a65: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557a70(void) {
  LOAD_REGS();
  goto L_557a70;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557a70: /* 557a70: mov eax, 0x575a38 */
  eax = 0x575a38u;
/* 557a75: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557a80(void) {
  LOAD_REGS();
  goto L_557a80;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557a80: /* 557a80: mov eax, 0x575aa4 */
  eax = 0x575aa4u;
/* 557a85: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557a90(void) {
  LOAD_REGS();
  goto L_557a90;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557a90: /* 557a90: mov eax, 0x575b10 */
  eax = 0x575b10u;
/* 557a95: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557aa0(void) {
  LOAD_REGS();
  goto L_557aa0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557aa0: /* 557aa0: mov eax, 0x575b7c */
  eax = 0x575b7cu;
/* 557aa5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557ab0(void) {
  LOAD_REGS();
  goto L_557ab0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557ab0: /* 557ab0: mov eax, 0x575be8 */
  eax = 0x575be8u;
/* 557ab5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557ac0(void) {
  LOAD_REGS();
  goto L_557ac0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557ac0: /* 557ac0: mov eax, 0x575c54 */
  eax = 0x575c54u;
/* 557ac5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557ad0(void) {
  LOAD_REGS();
  goto L_557ad0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557ad0: /* 557ad0: mov eax, 0x575cc0 */
  eax = 0x575cc0u;
/* 557ad5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557ae0(void) {
  LOAD_REGS();
L_557ae0: /* 557ae0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 557ae3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557ae8(void) {
  LOAD_REGS();
  goto L_557ae8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557ae8: /* 557ae8: mov eax, 0x575d34 */
  eax = 0x575d34u;
/* 557aed: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557b00(void) {
  LOAD_REGS();
  goto L_557b00;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557b00: /* 557b00: mov eax, 0x575da0 */
  eax = 0x575da0u;
/* 557b05: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557b10(void) {
  LOAD_REGS();
  goto L_557b10;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557b10: /* 557b10: mov eax, 0x575e0c */
  eax = 0x575e0cu;
/* 557b15: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557b20(void) {
  LOAD_REGS();
  goto L_557b20;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557b20: /* 557b20: mov eax, 0x575e78 */
  eax = 0x575e78u;
/* 557b25: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557b30(void) {
  LOAD_REGS();
L_557b30: /* 557b30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 557b33: jmp 0x4e2f4a */
  SPILL(); f_4e2f4a(); return;
}

void f_557b38(void) {
  LOAD_REGS();
  goto L_557b38;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557b38: /* 557b38: mov eax, 0x575ea8 */
  eax = 0x575ea8u;
/* 557b3d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557b50(void) {
  LOAD_REGS();
L_557b50: /* 557b50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 557b53: jmp 0x4e2f4a */
  SPILL(); f_4e2f4a(); return;
}

void f_557b58(void) {
  LOAD_REGS();
  goto L_557b58;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557b58: /* 557b58: mov eax, 0x575ed0 */
  eax = 0x575ed0u;
/* 557b5d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557b70(void) {
  LOAD_REGS();
L_557b70: /* 557b70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 557b73: jmp 0x4e12c1 */
  SPILL(); f_4e12c1(); return;
}

void f_557b78(void) {
  LOAD_REGS();
L_557b78: /* 557b78: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 557b7b: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 557b7e: jmp 0x4e318e */
  SPILL(); f_4e318e(); return;
}

void f_557b83(void) {
  LOAD_REGS();
L_557b83: /* 557b83: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 557b86: jmp 0x4e2f4a */
  SPILL(); f_4e2f4a(); return;
}

void f_557b8b(void) {
  LOAD_REGS();
  goto L_557b8b;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557b8b: /* 557b8b: mov eax, 0x575f08 */
  eax = 0x575f08u;
/* 557b90: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557ba0(void) {
  LOAD_REGS();
L_557ba0: /* 557ba0: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 557ba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 557ba4: call 0x4e1a82 */
  esp -= 4; W32(esp, 0x557ba9u); SPILL(); f_4e1a82(); if (g_unwind) return; RELOAD();
/* 557ba9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 557baa: ret  */
  esp += 4; SPILL(); return;
}

void f_557bab(void) {
  LOAD_REGS();
  goto L_557bab;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557bab: /* 557bab: mov eax, 0x575f78 */
  eax = 0x575f78u;
/* 557bb0: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557bc0(void) {
  LOAD_REGS();
  goto L_557bc0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557bc0: /* 557bc0: mov eax, 0x575fe4 */
  eax = 0x575fe4u;
/* 557bc5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557bd0(void) {
  LOAD_REGS();
L_557bd0: /* 557bd0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 557bd3: jmp 0x4e12c1 */
  SPILL(); f_4e12c1(); return;
}

void f_557bd8(void) {
  LOAD_REGS();
L_557bd8: /* 557bd8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 557bdb: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 557bde: jmp 0x4e318e */
  SPILL(); f_4e318e(); return;
}

void f_557be3(void) {
  LOAD_REGS();
L_557be3: /* 557be3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 557be6: jmp 0x4e2f4a */
  SPILL(); f_4e2f4a(); return;
}

void f_557beb(void) {
  LOAD_REGS();
  goto L_557beb;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557beb: /* 557beb: mov eax, 0x576024 */
  eax = 0x576024u;
/* 557bf0: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557c00(void) {
  LOAD_REGS();
  goto L_557c00;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557c00: /* 557c00: mov eax, 0x57608c */
  eax = 0x57608cu;
/* 557c05: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557c10(void) {
  LOAD_REGS();
  goto L_557c10;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557c10: /* 557c10: mov eax, 0x5760f8 */
  eax = 0x5760f8u;
/* 557c15: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557c20(void) {
  LOAD_REGS();
L_557c20: /* 557c20: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 557c23: jmp 0x4e3e7c */
  SPILL(); f_4e3e7c(); return;
}

void f_557c28(void) {
  LOAD_REGS();
L_557c28: /* 557c28: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 557c2b: jmp 0x4e12c1 */
  SPILL(); f_4e12c1(); return;
}

void f_557c30(void) {
  LOAD_REGS();
L_557c30: /* 557c30: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 557c33: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 557c36: jmp 0x4e318e */
  SPILL(); f_4e318e(); return;
}

void f_557c3b(void) {
  LOAD_REGS();
  goto L_557c3b;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557c3b: /* 557c3b: mov eax, 0x57617c */
  eax = 0x57617cu;
/* 557c40: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557c50(void) {
  LOAD_REGS();
  goto L_557c50;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557c50: /* 557c50: mov eax, 0x5761e8 */
  eax = 0x5761e8u;
/* 557c55: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557c60(void) {
  LOAD_REGS();
  goto L_557c60;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557c60: /* 557c60: mov eax, 0x576254 */
  eax = 0x576254u;
/* 557c65: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557c70(void) {
  LOAD_REGS();
  goto L_557c70;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557c70: /* 557c70: mov eax, 0x5762c0 */
  eax = 0x5762c0u;
/* 557c75: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557c80(void) {
  LOAD_REGS();
  goto L_557c80;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557c80: /* 557c80: mov eax, 0x57632c */
  eax = 0x57632cu;
/* 557c85: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557c90(void) {
  LOAD_REGS();
  goto L_557c90;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557c90: /* 557c90: mov eax, 0x576398 */
  eax = 0x576398u;
/* 557c95: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557ca0(void) {
  LOAD_REGS();
  goto L_557ca0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557ca0: /* 557ca0: mov eax, 0x576404 */
  eax = 0x576404u;
/* 557ca5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557cb0(void) {
  LOAD_REGS();
  goto L_557cb0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557cb0: /* 557cb0: mov eax, 0x576470 */
  eax = 0x576470u;
/* 557cb5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557cc0(void) {
  LOAD_REGS();
  goto L_557cc0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557cc0: /* 557cc0: mov eax, 0x5764dc */
  eax = 0x5764dcu;
/* 557cc5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557cd0(void) {
  LOAD_REGS();
  goto L_557cd0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557cd0: /* 557cd0: mov eax, 0x57658c */
  eax = 0x57658cu;
/* 557cd5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557ce0(void) {
  LOAD_REGS();
  goto L_557ce0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557ce0: /* 557ce0: mov eax, 0x5765fc */
  eax = 0x5765fcu;
/* 557ce5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557cf0(void) {
  LOAD_REGS();
  goto L_557cf0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557cf0: /* 557cf0: mov eax, 0x576668 */
  eax = 0x576668u;
/* 557cf5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557d00(void) {
  LOAD_REGS();
  goto L_557d00;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557d00: /* 557d00: mov eax, 0x5766d4 */
  eax = 0x5766d4u;
/* 557d05: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557d10(void) {
  LOAD_REGS();
  goto L_557d10;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557d10: /* 557d10: mov eax, 0x576740 */
  eax = 0x576740u;
/* 557d15: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557d20(void) {
  LOAD_REGS();
  goto L_557d20;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557d20: /* 557d20: mov eax, 0x5767ac */
  eax = 0x5767acu;
/* 557d25: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557d30(void) {
  LOAD_REGS();
L_557d30: /* 557d30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 557d33: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_557d38(void) {
  LOAD_REGS();
  goto L_557d38;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557d38: /* 557d38: mov eax, 0x5767dc */
  eax = 0x5767dcu;
/* 557d3d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557d50(void) {
  LOAD_REGS();
L_557d50: /* 557d50: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 557d53: jmp 0x4e3bd9 */
  SPILL(); f_4e3bd9(); return;
}

void f_557d58(void) {
  LOAD_REGS();
  goto L_557d58;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557d58: /* 557d58: mov eax, 0x576848 */
  eax = 0x576848u;
/* 557d5d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557d70(void) {
  LOAD_REGS();
L_557d70: /* 557d70: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 557d73: jmp 0x4e2e55 */
  SPILL(); f_4e2e55(); return;
}

void f_557d78(void) {
  LOAD_REGS();
L_557d78: /* 557d78: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 557d7b: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 557d7e: jmp 0x4e4476 */
  SPILL(); f_4e4476(); return;
}

void f_557d83(void) {
  LOAD_REGS();
L_557d83: /* 557d83: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 557d86: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 557d89: jmp 0x4e2892 */
  SPILL(); f_4e2892(); return;
}

void f_557d8e(void) {
  LOAD_REGS();
L_557d8e: /* 557d8e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 557d91: add ecx, 0x78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 557d94: jmp 0x4e2234 */
  SPILL(); f_4e2234(); return;
}

void f_557d99(void) {
  LOAD_REGS();
L_557d99: /* 557d99: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 557d9c: add ecx, 0x84 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 557da2: jmp 0x4e322e */
  SPILL(); f_4e322e(); return;
}

void f_557da7(void) {
  LOAD_REGS();
L_557da7: /* 557da7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 557daa: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 557db0: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557db5(void) {
  LOAD_REGS();
  goto L_557db5;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557db5: /* 557db5: mov eax, 0x5768a0 */
  eax = 0x5768a0u;
/* 557dba: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557de0(void) {
  LOAD_REGS();
L_557de0: /* 557de0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 557de3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557de8(void) {
  LOAD_REGS();
L_557de8: /* 557de8: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 557deb: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557df0(void) {
  LOAD_REGS();
L_557df0: /* 557df0: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 557df3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557df8(void) {
  LOAD_REGS();
L_557df8: /* 557df8: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 557dfb: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557e00(void) {
  LOAD_REGS();
L_557e00: /* 557e00: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 557e03: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557e08(void) {
  LOAD_REGS();
L_557e08: /* 557e08: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 557e0b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557e10(void) {
  LOAD_REGS();
L_557e10: /* 557e10: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 557e13: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557e18(void) {
  LOAD_REGS();
L_557e18: /* 557e18: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 557e1b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557e20(void) {
  LOAD_REGS();
L_557e20: /* 557e20: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 557e23: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557e28(void) {
  LOAD_REGS();
L_557e28: /* 557e28: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 557e2b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557e30(void) {
  LOAD_REGS();
L_557e30: /* 557e30: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 557e33: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557e38(void) {
  LOAD_REGS();
L_557e38: /* 557e38: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 557e3b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557e40(void) {
  LOAD_REGS();
L_557e40: /* 557e40: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 557e43: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557e48(void) {
  LOAD_REGS();
L_557e48: /* 557e48: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 557e4b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 557e4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 557e50: je 0x557e5e */
  if (zf) goto L_557e5e;
L_557e56: /* 557e56: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 557e59: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
L_557e5e: /* 557e5e: ret  */
  esp += 4; SPILL(); return;
}

void f_557e5f(void) {
  LOAD_REGS();
L_557e5f: /* 557e5f: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 557e62: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557e67(void) {
  LOAD_REGS();
L_557e67: /* 557e67: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 557e6a: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557e6f(void) {
  LOAD_REGS();
L_557e6f: /* 557e6f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 557e72: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557e77(void) {
  LOAD_REGS();
  goto L_557e77;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557e77: /* 557e77: mov eax, 0x576990 */
  eax = 0x576990u;
/* 557e7c: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557eb0(void) {
  LOAD_REGS();
L_557eb0: /* 557eb0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 557eb3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557eb8(void) {
  LOAD_REGS();
L_557eb8: /* 557eb8: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 557ebb: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557ec0(void) {
  LOAD_REGS();
L_557ec0: /* 557ec0: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 557ec3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557ec8(void) {
  LOAD_REGS();
L_557ec8: /* 557ec8: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 557ecb: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557ed0(void) {
  LOAD_REGS();
L_557ed0: /* 557ed0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 557ed3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557ed8(void) {
  LOAD_REGS();
L_557ed8: /* 557ed8: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 557edb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557ee0(void) {
  LOAD_REGS();
L_557ee0: /* 557ee0: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 557ee3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557ee8(void) {
  LOAD_REGS();
L_557ee8: /* 557ee8: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 557eeb: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557ef0(void) {
  LOAD_REGS();
L_557ef0: /* 557ef0: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 557ef3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557ef8(void) {
  LOAD_REGS();
L_557ef8: /* 557ef8: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 557efb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557f00(void) {
  LOAD_REGS();
L_557f00: /* 557f00: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 557f03: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557f08(void) {
  LOAD_REGS();
L_557f08: /* 557f08: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 557f0b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557f10(void) {
  LOAD_REGS();
L_557f10: /* 557f10: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 557f13: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557f18(void) {
  LOAD_REGS();
L_557f18: /* 557f18: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 557f1b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557f20(void) {
  LOAD_REGS();
L_557f20: /* 557f20: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 557f23: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557f28(void) {
  LOAD_REGS();
L_557f28: /* 557f28: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 557f2b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 557f2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 557f30: je 0x557f3e */
  if (zf) goto L_557f3e;
L_557f36: /* 557f36: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 557f39: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
L_557f3e: /* 557f3e: ret  */
  esp += 4; SPILL(); return;
}

void f_557f3f(void) {
  LOAD_REGS();
L_557f3f: /* 557f3f: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 557f42: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557f47(void) {
  LOAD_REGS();
L_557f47: /* 557f47: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 557f4a: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557f4f(void) {
  LOAD_REGS();
L_557f4f: /* 557f4f: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 557f52: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557f57(void) {
  LOAD_REGS();
L_557f57: /* 557f57: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 557f5a: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557f5f(void) {
  LOAD_REGS();
L_557f5f: /* 557f5f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 557f62: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557f67(void) {
  LOAD_REGS();
  goto L_557f67;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557f67: /* 557f67: mov eax, 0x576ab0 */
  eax = 0x576ab0u;
/* 557f6c: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_557fb0(void) {
  LOAD_REGS();
L_557fb0: /* 557fb0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557fb3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557fb8(void) {
  LOAD_REGS();
L_557fb8: /* 557fb8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557fbb: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_557fc0(void) {
  LOAD_REGS();
L_557fc0: /* 557fc0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 557fc3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557fc8(void) {
  LOAD_REGS();
L_557fc8: /* 557fc8: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 557fcb: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 557fce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 557fd0: je 0x557fde */
  if (zf) goto L_557fde;
L_557fd6: /* 557fd6: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 557fd9: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
L_557fde: /* 557fde: ret  */
  esp += 4; SPILL(); return;
}

void f_557fdf(void) {
  LOAD_REGS();
L_557fdf: /* 557fdf: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 557fe2: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_557fe7(void) {
  LOAD_REGS();
  goto L_557fe7;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_557fe7: /* 557fe7: mov eax, 0x576b10 */
  eax = 0x576b10u;
/* 557fec: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558010(void) {
  LOAD_REGS();
L_558010: /* 558010: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 558013: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558018(void) {
  LOAD_REGS();
L_558018: /* 558018: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 55801b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558020(void) {
  LOAD_REGS();
L_558020: /* 558020: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 558023: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558028(void) {
  LOAD_REGS();
L_558028: /* 558028: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 55802b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558030(void) {
  LOAD_REGS();
L_558030: /* 558030: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 558033: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558038(void) {
  LOAD_REGS();
L_558038: /* 558038: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 55803b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558040(void) {
  LOAD_REGS();
L_558040: /* 558040: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 558043: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558048(void) {
  LOAD_REGS();
  goto L_558048;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558048: /* 558048: mov eax, 0x576be4 */
  eax = 0x576be4u;
/* 55804d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558070(void) {
  LOAD_REGS();
L_558070: /* 558070: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 558073: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558078(void) {
  LOAD_REGS();
  goto L_558078;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558078: /* 558078: mov eax, 0x576c60 */
  eax = 0x576c60u;
/* 55807d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558090(void) {
  LOAD_REGS();
  goto L_558090;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558090: /* 558090: mov eax, 0x576ccc */
  eax = 0x576cccu;
/* 558095: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5580a0(void) {
  LOAD_REGS();
  goto L_5580a0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5580a0: /* 5580a0: mov eax, 0x576d38 */
  eax = 0x576d38u;
/* 5580a5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5580b0(void) {
  LOAD_REGS();
  goto L_5580b0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5580b0: /* 5580b0: mov eax, 0x576da4 */
  eax = 0x576da4u;
/* 5580b5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5580c0(void) {
  LOAD_REGS();
  goto L_5580c0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5580c0: /* 5580c0: mov eax, 0x576e10 */
  eax = 0x576e10u;
/* 5580c5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5580d0(void) {
  LOAD_REGS();
L_5580d0: /* 5580d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5580d3: jmp 0x4e25ea */
  SPILL(); f_4e25ea(); return;
}

void f_5580d8(void) {
  LOAD_REGS();
L_5580d8: /* 5580d8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5580db: add ecx, 0xb4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5580e1: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_5580e6(void) {
  LOAD_REGS();
L_5580e6: /* 5580e6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5580e9: add ecx, 0xf8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5580ef: jmp 0x4e32fb */
  SPILL(); f_4e32fb(); return;
}

void f_5580f4(void) {
  LOAD_REGS();
L_5580f4: /* 5580f4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5580f7: add ecx, 0x104 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5580fd: jmp 0x4e32fb */
  SPILL(); f_4e32fb(); return;
}

void f_558102(void) {
  LOAD_REGS();
  goto L_558102;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558102: /* 558102: mov eax, 0x576e58 */
  eax = 0x576e58u;
/* 558107: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558120(void) {
  LOAD_REGS();
L_558120: /* 558120: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 558123: jmp 0x4e25ea */
  SPILL(); f_4e25ea(); return;
}

void f_558128(void) {
  LOAD_REGS();
L_558128: /* 558128: cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 55812c: je 0x558142 */
  if (zf) goto L_558142;
L_558132: /* 558132: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 558135: add eax, 0xb4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 55813a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 55813d: jmp 0x558149 */
  goto L_558149;
L_558142: /* 558142: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_558149: /* 558149: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 55814c: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_558151(void) {
  LOAD_REGS();
L_558151: /* 558151: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 558154: add ecx, 0xf8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55815a: jmp 0x4e32fb */
  SPILL(); f_4e32fb(); return;
}

void f_55815f(void) {
  LOAD_REGS();
L_55815f: /* 55815f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 558162: add ecx, 0x104 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 558168: jmp 0x4e32fb */
  SPILL(); f_4e32fb(); return;
}

void f_55816d(void) {
  LOAD_REGS();
  goto L_55816d;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_55816d: /* 55816d: mov eax, 0x576e9c */
  eax = 0x576e9cu;
/* 558172: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558190(void) {
  LOAD_REGS();
  goto L_558190;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558190: /* 558190: mov eax, 0x576f7c */
  eax = 0x576f7cu;
/* 558195: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5581a0(void) {
  LOAD_REGS();
  goto L_5581a0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5581a0: /* 5581a0: mov eax, 0x576ff4 */
  eax = 0x576ff4u;
/* 5581a5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5581b0(void) {
  LOAD_REGS();
  goto L_5581b0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5581b0: /* 5581b0: mov eax, 0x577060 */
  eax = 0x577060u;
/* 5581b5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5581c0(void) {
  LOAD_REGS();
  goto L_5581c0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5581c0: /* 5581c0: mov eax, 0x5770cc */
  eax = 0x5770ccu;
/* 5581c5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5581d0(void) {
  LOAD_REGS();
L_5581d0: /* 5581d0: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5581d3: jmp 0x4e25ea */
  SPILL(); f_4e25ea(); return;
}

void f_5581d8(void) {
  LOAD_REGS();
L_5581d8: /* 5581d8: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5581db: add ecx, 0xb4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5581e1: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_5581e6(void) {
  LOAD_REGS();
L_5581e6: /* 5581e6: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5581e9: add ecx, 0x4fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5581ef: jmp 0x4e3067 */
  SPILL(); f_4e3067(); return;
}

void f_5581f4(void) {
  LOAD_REGS();
  goto L_5581f4;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5581f4: /* 5581f4: mov eax, 0x5772f8 */
  eax = 0x5772f8u;
/* 5581f9: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558210(void) {
  LOAD_REGS();
  goto L_558210;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558210: /* 558210: mov eax, 0x577390 */
  eax = 0x577390u;
/* 558215: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558220(void) {
  LOAD_REGS();
L_558220: /* 558220: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 558223: jmp 0x4e25ea */
  SPILL(); f_4e25ea(); return;
}

void f_558228(void) {
  LOAD_REGS();
L_558228: /* 558228: cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 55822c: je 0x558242 */
  if (zf) goto L_558242;
L_558232: /* 558232: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 558235: add eax, 0xb4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 55823a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 55823d: jmp 0x558249 */
  goto L_558249;
L_558242: /* 558242: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_558249: /* 558249: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 55824c: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_558251(void) {
  LOAD_REGS();
L_558251: /* 558251: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 558254: add ecx, 0x4fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 55825a: jmp 0x4e3067 */
  SPILL(); f_4e3067(); return;
}

void f_55825f(void) {
  LOAD_REGS();
  goto L_55825f;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_55825f: /* 55825f: mov eax, 0x5773d0 */
  eax = 0x5773d0u;
/* 558264: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558280(void) {
  LOAD_REGS();
  goto L_558280;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558280: /* 558280: mov eax, 0x577438 */
  eax = 0x577438u;
/* 558285: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558290(void) {
  LOAD_REGS();
  goto L_558290;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558290: /* 558290: mov eax, 0x5774a4 */
  eax = 0x5774a4u;
/* 558295: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5582a0(void) {
  LOAD_REGS();
  goto L_5582a0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5582a0: /* 5582a0: mov eax, 0x577510 */
  eax = 0x577510u;
/* 5582a5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5582b0(void) {
  LOAD_REGS();
  goto L_5582b0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5582b0: /* 5582b0: mov eax, 0x57757c */
  eax = 0x57757cu;
/* 5582b5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5582c0(void) {
  LOAD_REGS();
  goto L_5582c0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5582c0: /* 5582c0: mov eax, 0x5775e8 */
  eax = 0x5775e8u;
/* 5582c5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5582d0(void) {
  LOAD_REGS();
  goto L_5582d0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5582d0: /* 5582d0: mov eax, 0x577654 */
  eax = 0x577654u;
/* 5582d5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5582e0(void) {
  LOAD_REGS();
  goto L_5582e0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5582e0: /* 5582e0: mov eax, 0x5776c0 */
  eax = 0x5776c0u;
/* 5582e5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5582f0(void) {
  LOAD_REGS();
  goto L_5582f0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5582f0: /* 5582f0: mov eax, 0x57772c */
  eax = 0x57772cu;
/* 5582f5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558300(void) {
  LOAD_REGS();
  goto L_558300;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558300: /* 558300: mov eax, 0x577798 */
  eax = 0x577798u;
/* 558305: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558310(void) {
  LOAD_REGS();
L_558310: /* 558310: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 558313: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 558314: call 0x4e1a82 */
  esp -= 4; W32(esp, 0x558319u); SPILL(); f_4e1a82(); if (g_unwind) return; RELOAD();
/* 558319: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 55831a: ret  */
  esp += 4; SPILL(); return;
}

void f_55831b(void) {
  LOAD_REGS();
  goto L_55831b;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_55831b: /* 55831b: mov eax, 0x5777c8 */
  eax = 0x5777c8u;
/* 558320: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558330(void) {
  LOAD_REGS();
L_558330: /* 558330: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 558333: jmp 0x4e21cb */
  SPILL(); f_4e21cb(); return;
}

void f_558338(void) {
  LOAD_REGS();
  goto L_558338;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558338: /* 558338: mov eax, 0x5777f0 */
  eax = 0x5777f0u;
/* 55833d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558350(void) {
  LOAD_REGS();
L_558350: /* 558350: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 558353: jmp 0x4e21cb */
  SPILL(); f_4e21cb(); return;
}

void f_558358(void) {
  LOAD_REGS();
  goto L_558358;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558358: /* 558358: mov eax, 0x577818 */
  eax = 0x577818u;
/* 55835d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558370(void) {
  LOAD_REGS();
  goto L_558370;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558370: /* 558370: mov eax, 0x57787c */
  eax = 0x57787cu;
/* 558375: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558380(void) {
  LOAD_REGS();
  goto L_558380;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558380: /* 558380: mov eax, 0x5778e8 */
  eax = 0x5778e8u;
/* 558385: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558390(void) {
  LOAD_REGS();
  goto L_558390;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558390: /* 558390: mov eax, 0x577954 */
  eax = 0x577954u;
/* 558395: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5583a0(void) {
  LOAD_REGS();
  goto L_5583a0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5583a0: /* 5583a0: mov eax, 0x5779c0 */
  eax = 0x5779c0u;
/* 5583a5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5583b0(void) {
  LOAD_REGS();
  goto L_5583b0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5583b0: /* 5583b0: mov eax, 0x577a2c */
  eax = 0x577a2cu;
/* 5583b5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5583c0(void) {
  LOAD_REGS();
  goto L_5583c0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5583c0: /* 5583c0: mov eax, 0x577a98 */
  eax = 0x577a98u;
/* 5583c5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5583d0(void) {
  LOAD_REGS();
  goto L_5583d0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5583d0: /* 5583d0: mov eax, 0x577b04 */
  eax = 0x577b04u;
/* 5583d5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5583e0(void) {
  LOAD_REGS();
  goto L_5583e0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5583e0: /* 5583e0: mov eax, 0x577b70 */
  eax = 0x577b70u;
/* 5583e5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5583f0(void) {
  LOAD_REGS();
  goto L_5583f0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5583f0: /* 5583f0: mov eax, 0x577bdc */
  eax = 0x577bdcu;
/* 5583f5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558400(void) {
  LOAD_REGS();
  goto L_558400;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558400: /* 558400: mov eax, 0x577c48 */
  eax = 0x577c48u;
/* 558405: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558410(void) {
  LOAD_REGS();
  goto L_558410;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558410: /* 558410: mov eax, 0x577cb4 */
  eax = 0x577cb4u;
/* 558415: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558420(void) {
  LOAD_REGS();
  goto L_558420;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558420: /* 558420: mov eax, 0x577d20 */
  eax = 0x577d20u;
/* 558425: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558430(void) {
  LOAD_REGS();
  goto L_558430;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558430: /* 558430: mov eax, 0x577d8c */
  eax = 0x577d8cu;
/* 558435: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558440(void) {
  LOAD_REGS();
  goto L_558440;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558440: /* 558440: mov eax, 0x577df8 */
  eax = 0x577df8u;
/* 558445: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558450(void) {
  LOAD_REGS();
  goto L_558450;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558450: /* 558450: mov eax, 0x577e64 */
  eax = 0x577e64u;
/* 558455: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558460(void) {
  LOAD_REGS();
  goto L_558460;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558460: /* 558460: mov eax, 0x577ed0 */
  eax = 0x577ed0u;
/* 558465: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558470(void) {
  LOAD_REGS();
  goto L_558470;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558470: /* 558470: mov eax, 0x577f3c */
  eax = 0x577f3cu;
/* 558475: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558480(void) {
  LOAD_REGS();
  goto L_558480;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558480: /* 558480: mov eax, 0x577fa8 */
  eax = 0x577fa8u;
/* 558485: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558490(void) {
  LOAD_REGS();
  goto L_558490;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558490: /* 558490: mov eax, 0x578014 */
  eax = 0x578014u;
/* 558495: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5584a0(void) {
  LOAD_REGS();
  goto L_5584a0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5584a0: /* 5584a0: mov eax, 0x578080 */
  eax = 0x578080u;
/* 5584a5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5584b0(void) {
  LOAD_REGS();
  goto L_5584b0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5584b0: /* 5584b0: mov eax, 0x5780ec */
  eax = 0x5780ecu;
/* 5584b5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5584c0(void) {
  LOAD_REGS();
  goto L_5584c0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5584c0: /* 5584c0: mov eax, 0x578158 */
  eax = 0x578158u;
/* 5584c5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5584d0(void) {
  LOAD_REGS();
  goto L_5584d0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5584d0: /* 5584d0: mov eax, 0x5781c4 */
  eax = 0x5781c4u;
/* 5584d5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5584e0(void) {
  LOAD_REGS();
  goto L_5584e0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5584e0: /* 5584e0: mov eax, 0x578230 */
  eax = 0x578230u;
/* 5584e5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5584f0(void) {
  LOAD_REGS();
  goto L_5584f0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5584f0: /* 5584f0: mov eax, 0x57829c */
  eax = 0x57829cu;
/* 5584f5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558500(void) {
  LOAD_REGS();
  goto L_558500;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558500: /* 558500: mov eax, 0x578308 */
  eax = 0x578308u;
/* 558505: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558510(void) {
  LOAD_REGS();
  goto L_558510;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558510: /* 558510: mov eax, 0x578374 */
  eax = 0x578374u;
/* 558515: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558520(void) {
  LOAD_REGS();
  goto L_558520;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558520: /* 558520: mov eax, 0x5783e0 */
  eax = 0x5783e0u;
/* 558525: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558530(void) {
  LOAD_REGS();
  goto L_558530;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558530: /* 558530: mov eax, 0x57844c */
  eax = 0x57844cu;
/* 558535: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558540(void) {
  LOAD_REGS();
  goto L_558540;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558540: /* 558540: mov eax, 0x5784b8 */
  eax = 0x5784b8u;
/* 558545: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558550(void) {
  LOAD_REGS();
  goto L_558550;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558550: /* 558550: mov eax, 0x578524 */
  eax = 0x578524u;
/* 558555: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558560(void) {
  LOAD_REGS();
L_558560: /* 558560: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 558563: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_558568(void) {
  LOAD_REGS();
  goto L_558568;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558568: /* 558568: mov eax, 0x578554 */
  eax = 0x578554u;
/* 55856d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558580(void) {
  LOAD_REGS();
L_558580: /* 558580: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 558583: jmp 0x4e430e */
  SPILL(); f_4e430e(); return;
}

void f_558588(void) {
  LOAD_REGS();
  goto L_558588;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558588: /* 558588: mov eax, 0x5785c0 */
  eax = 0x5785c0u;
/* 55858d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5585a0(void) {
  LOAD_REGS();
L_5585a0: /* 5585a0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 5585a3: jmp 0x4e430e */
  SPILL(); f_4e430e(); return;
}

void f_5585a8(void) {
  LOAD_REGS();
  goto L_5585a8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5585a8: /* 5585a8: mov eax, 0x578634 */
  eax = 0x578634u;
/* 5585ad: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5585c0(void) {
  LOAD_REGS();
L_5585c0: /* 5585c0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5585c3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5585c8(void) {
  LOAD_REGS();
L_5585c8: /* 5585c8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5585cb: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5585d0(void) {
  LOAD_REGS();
L_5585d0: /* 5585d0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5585d3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5585d8(void) {
  LOAD_REGS();
L_5585d8: /* 5585d8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5585db: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5585e0(void) {
  LOAD_REGS();
L_5585e0: /* 5585e0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5585e3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5585e8(void) {
  LOAD_REGS();
L_5585e8: /* 5585e8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5585eb: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5585f0(void) {
  LOAD_REGS();
L_5585f0: /* 5585f0: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 5585f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5585f4: call 0x4e1a82 */
  esp -= 4; W32(esp, 0x5585f9u); SPILL(); f_4e1a82(); if (g_unwind) return; RELOAD();
/* 5585f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5585fa: ret  */
  esp += 4; SPILL(); return;
}

void f_5585fb(void) {
  LOAD_REGS();
  goto L_5585fb;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5585fb: /* 5585fb: mov eax, 0x5786d8 */
  eax = 0x5786d8u;
/* 558600: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558620(void) {
  LOAD_REGS();
L_558620: /* 558620: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 558623: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558628(void) {
  LOAD_REGS();
L_558628: /* 558628: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 55862b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558630(void) {
  LOAD_REGS();
  goto L_558630;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558630: /* 558630: mov eax, 0x578714 */
  eax = 0x578714u;
/* 558635: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558640(void) {
  LOAD_REGS();
L_558640: /* 558640: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 558643: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558648(void) {
  LOAD_REGS();
L_558648: /* 558648: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 55864b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558650(void) {
  LOAD_REGS();
  goto L_558650;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558650: /* 558650: mov eax, 0x578744 */
  eax = 0x578744u;
/* 558655: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558660(void) {
  LOAD_REGS();
L_558660: /* 558660: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 558663: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558668(void) {
  LOAD_REGS();
L_558668: /* 558668: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 55866b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558670(void) {
  LOAD_REGS();
L_558670: /* 558670: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 558673: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558678(void) {
  LOAD_REGS();
L_558678: /* 558678: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 55867b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558680(void) {
  LOAD_REGS();
L_558680: /* 558680: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 558683: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558688(void) {
  LOAD_REGS();
L_558688: /* 558688: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 55868b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558690(void) {
  LOAD_REGS();
L_558690: /* 558690: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 558693: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558698(void) {
  LOAD_REGS();
L_558698: /* 558698: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 55869b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5586a0(void) {
  LOAD_REGS();
L_5586a0: /* 5586a0: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 5586a3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5586a8(void) {
  LOAD_REGS();
L_5586a8: /* 5586a8: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 5586ab: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5586b0(void) {
  LOAD_REGS();
L_5586b0: /* 5586b0: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 5586b3: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5586b8(void) {
  LOAD_REGS();
L_5586b8: /* 5586b8: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 5586be: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5586c3(void) {
  LOAD_REGS();
L_5586c3: /* 5586c3: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 5586c9: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5586ce(void) {
  LOAD_REGS();
L_5586ce: /* 5586ce: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 5586d1: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5586d6(void) {
  LOAD_REGS();
L_5586d6: /* 5586d6: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 5586d9: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5586de(void) {
  LOAD_REGS();
L_5586de: /* 5586de: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 5586e4: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5586e9(void) {
  LOAD_REGS();
L_5586e9: /* 5586e9: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 5586ef: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_5586f4(void) {
  LOAD_REGS();
L_5586f4: /* 5586f4: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 5586f7: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5586fc(void) {
  LOAD_REGS();
L_5586fc: /* 5586fc: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 5586ff: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558704(void) {
  LOAD_REGS();
L_558704: /* 558704: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 558707: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_55870c(void) {
  LOAD_REGS();
L_55870c: /* 55870c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 55870f: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558714(void) {
  LOAD_REGS();
L_558714: /* 558714: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 558717: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 55871a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 55871c: je 0x55872a */
  if (zf) goto L_55872a;
L_558722: /* 558722: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 558725: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
L_55872a: /* 55872a: ret  */
  esp += 4; SPILL(); return;
}

void f_55872b(void) {
  LOAD_REGS();
L_55872b: /* 55872b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 55872e: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558733(void) {
  LOAD_REGS();
L_558733: /* 558733: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 558736: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_55873b(void) {
  LOAD_REGS();
L_55873b: /* 55873b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 55873e: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558743(void) {
  LOAD_REGS();
  goto L_558743;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558743: /* 558743: mov eax, 0x578870 */
  eax = 0x578870u;
/* 558748: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558790(void) {
  LOAD_REGS();
L_558790: /* 558790: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 558793: jmp 0x4e262b */
  SPILL(); f_4e262b(); return;
}

void f_558798(void) {
  LOAD_REGS();
L_558798: /* 558798: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 55879b: jmp 0x4e262b */
  SPILL(); f_4e262b(); return;
}

void f_5587a0(void) {
  LOAD_REGS();
L_5587a0: /* 5587a0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 5587a3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5587a8(void) {
  LOAD_REGS();
L_5587a8: /* 5587a8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 5587ab: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5587b0(void) {
  LOAD_REGS();
L_5587b0: /* 5587b0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 5587b3: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_5587b8(void) {
  LOAD_REGS();
  goto L_5587b8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5587b8: /* 5587b8: mov eax, 0x578918 */
  eax = 0x578918u;
/* 5587bd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5587d0(void) {
  LOAD_REGS();
  goto L_5587d0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5587d0: /* 5587d0: mov eax, 0x578988 */
  eax = 0x578988u;
/* 5587d5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5587e0(void) {
  LOAD_REGS();
  goto L_5587e0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5587e0: /* 5587e0: mov eax, 0x5789f4 */
  eax = 0x5789f4u;
/* 5587e5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5587f0(void) {
  LOAD_REGS();
  goto L_5587f0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5587f0: /* 5587f0: mov eax, 0x578a60 */
  eax = 0x578a60u;
/* 5587f5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558800(void) {
  LOAD_REGS();
  goto L_558800;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558800: /* 558800: mov eax, 0x578acc */
  eax = 0x578accu;
/* 558805: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558810(void) {
  LOAD_REGS();
  goto L_558810;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558810: /* 558810: mov eax, 0x578b38 */
  eax = 0x578b38u;
/* 558815: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558820(void) {
  LOAD_REGS();
L_558820: /* 558820: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 558823: jmp 0x4e35b7 */
  SPILL(); f_4e35b7(); return;
}

void f_558828(void) {
  LOAD_REGS();
  goto L_558828;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558828: /* 558828: mov eax, 0x578b68 */
  eax = 0x578b68u;
/* 55882d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558840(void) {
  LOAD_REGS();
  goto L_558840;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558840: /* 558840: mov eax, 0x578bcc */
  eax = 0x578bccu;
/* 558845: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558850(void) {
  LOAD_REGS();
  goto L_558850;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558850: /* 558850: mov eax, 0x578c38 */
  eax = 0x578c38u;
/* 558855: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558860(void) {
  LOAD_REGS();
L_558860: /* 558860: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 558863: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558868(void) {
  LOAD_REGS();
L_558868: /* 558868: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 55886b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558870(void) {
  LOAD_REGS();
  goto L_558870;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558870: /* 558870: mov eax, 0x578cb4 */
  eax = 0x578cb4u;
/* 558875: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558880(void) {
  LOAD_REGS();
  goto L_558880;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558880: /* 558880: mov eax, 0x578d20 */
  eax = 0x578d20u;
/* 558885: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558890(void) {
  LOAD_REGS();
L_558890: /* 558890: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 558893: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_558898(void) {
  LOAD_REGS();
  goto L_558898;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558898: /* 558898: mov eax, 0x578d50 */
  eax = 0x578d50u;
/* 55889d: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5588b0(void) {
  LOAD_REGS();
L_5588b0: /* 5588b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 5588b3: jmp 0x4e4552 */
  SPILL(); f_4e4552(); return;
}

void f_5588b8(void) {
  LOAD_REGS();
  goto L_5588b8;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5588b8: /* 5588b8: mov eax, 0x578d78 */
  eax = 0x578d78u;
/* 5588bd: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5588d0(void) {
  LOAD_REGS();
  goto L_5588d0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5588d0: /* 5588d0: mov eax, 0x578ddc */
  eax = 0x578ddcu;
/* 5588d5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5588e0(void) {
  LOAD_REGS();
  goto L_5588e0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5588e0: /* 5588e0: mov eax, 0x578e48 */
  eax = 0x578e48u;
/* 5588e5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5588f0(void) {
  LOAD_REGS();
  goto L_5588f0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5588f0: /* 5588f0: mov eax, 0x578eb4 */
  eax = 0x578eb4u;
/* 5588f5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558900(void) {
  LOAD_REGS();
  goto L_558900;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558900: /* 558900: mov eax, 0x578f20 */
  eax = 0x578f20u;
/* 558905: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558910(void) {
  LOAD_REGS();
  goto L_558910;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558910: /* 558910: mov eax, 0x578f8c */
  eax = 0x578f8cu;
/* 558915: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558920(void) {
  LOAD_REGS();
  goto L_558920;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558920: /* 558920: mov eax, 0x578fe8 */
  eax = 0x578fe8u;
/* 558925: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558930(void) {
  LOAD_REGS();
  goto L_558930;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558930: /* 558930: mov eax, 0x579084 */
  eax = 0x579084u;
/* 558935: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558940(void) {
  LOAD_REGS();
  goto L_558940;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558940: /* 558940: mov eax, 0x5790f4 */
  eax = 0x5790f4u;
/* 558945: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558950(void) {
  LOAD_REGS();
  goto L_558950;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558950: /* 558950: mov eax, 0x579160 */
  eax = 0x579160u;
/* 558955: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558960(void) {
  LOAD_REGS();
  goto L_558960;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558960: /* 558960: mov eax, 0x5791cc */
  eax = 0x5791ccu;
/* 558965: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558970(void) {
  LOAD_REGS();
  goto L_558970;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558970: /* 558970: mov eax, 0x579238 */
  eax = 0x579238u;
/* 558975: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558980(void) {
  LOAD_REGS();
  goto L_558980;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558980: /* 558980: mov eax, 0x5792a4 */
  eax = 0x5792a4u;
/* 558985: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558990(void) {
  LOAD_REGS();
  goto L_558990;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558990: /* 558990: mov eax, 0x579310 */
  eax = 0x579310u;
/* 558995: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5589a0(void) {
  LOAD_REGS();
  goto L_5589a0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5589a0: /* 5589a0: mov eax, 0x57937c */
  eax = 0x57937cu;
/* 5589a5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5589b0(void) {
  LOAD_REGS();
  goto L_5589b0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5589b0: /* 5589b0: mov eax, 0x5793e8 */
  eax = 0x5793e8u;
/* 5589b5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5589c0(void) {
  LOAD_REGS();
  goto L_5589c0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5589c0: /* 5589c0: mov eax, 0x579454 */
  eax = 0x579454u;
/* 5589c5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5589d0(void) {
  LOAD_REGS();
  goto L_5589d0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5589d0: /* 5589d0: mov eax, 0x5794c0 */
  eax = 0x5794c0u;
/* 5589d5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5589e0(void) {
  LOAD_REGS();
  goto L_5589e0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5589e0: /* 5589e0: mov eax, 0x57952c */
  eax = 0x57952cu;
/* 5589e5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_5589f0(void) {
  LOAD_REGS();
  goto L_5589f0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_5589f0: /* 5589f0: mov eax, 0x579598 */
  eax = 0x579598u;
/* 5589f5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558a00(void) {
  LOAD_REGS();
  goto L_558a00;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558a00: /* 558a00: mov eax, 0x579604 */
  eax = 0x579604u;
/* 558a05: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558a10(void) {
  LOAD_REGS();
  goto L_558a10;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558a10: /* 558a10: mov eax, 0x5796b4 */
  eax = 0x5796b4u;
/* 558a15: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558a20(void) {
  LOAD_REGS();
  goto L_558a20;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558a20: /* 558a20: mov eax, 0x579724 */
  eax = 0x579724u;
/* 558a25: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558a30(void) {
  LOAD_REGS();
  goto L_558a30;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558a30: /* 558a30: mov eax, 0x579790 */
  eax = 0x579790u;
/* 558a35: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558a40(void) {
  LOAD_REGS();
  goto L_558a40;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558a40: /* 558a40: mov eax, 0x5797fc */
  eax = 0x5797fcu;
/* 558a45: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558a50(void) {
  LOAD_REGS();
L_558a50: /* 558a50: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 558a53: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558a58(void) {
  LOAD_REGS();
L_558a58: /* 558a58: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 558a5b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558a60(void) {
  LOAD_REGS();
L_558a60: /* 558a60: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 558a63: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558a68(void) {
  LOAD_REGS();
L_558a68: /* 558a68: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 558a6b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558a70(void) {
  LOAD_REGS();
L_558a70: /* 558a70: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 558a73: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558a78(void) {
  LOAD_REGS();
L_558a78: /* 558a78: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 558a7b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558a80(void) {
  LOAD_REGS();
  goto L_558a80;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558a80: /* 558a80: mov eax, 0x579898 */
  eax = 0x579898u;
/* 558a85: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558aa0(void) {
  LOAD_REGS();
  goto L_558aa0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558aa0: /* 558aa0: mov eax, 0x579908 */
  eax = 0x579908u;
/* 558aa5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558ab0(void) {
  LOAD_REGS();
  goto L_558ab0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558ab0: /* 558ab0: mov eax, 0x579974 */
  eax = 0x579974u;
/* 558ab5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558ac0(void) {
  LOAD_REGS();
  goto L_558ac0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558ac0: /* 558ac0: mov eax, 0x5799e0 */
  eax = 0x5799e0u;
/* 558ac5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558ad0(void) {
  LOAD_REGS();
  goto L_558ad0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558ad0: /* 558ad0: mov eax, 0x579a4c */
  eax = 0x579a4cu;
/* 558ad5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558ae0(void) {
  LOAD_REGS();
  goto L_558ae0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558ae0: /* 558ae0: mov eax, 0x579ab8 */
  eax = 0x579ab8u;
/* 558ae5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558af0(void) {
  LOAD_REGS();
  goto L_558af0;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558af0: /* 558af0: mov eax, 0x579b24 */
  eax = 0x579b24u;
/* 558af5: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558b00(void) {
  LOAD_REGS();
  goto L_558b00;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558b00: /* 558b00: mov eax, 0x579b90 */
  eax = 0x579b90u;
/* 558b05: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558b10(void) {
  LOAD_REGS();
  goto L_558b10;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558b10: /* 558b10: mov eax, 0x579bfc */
  eax = 0x579bfcu;
/* 558b15: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558b20(void) {
  LOAD_REGS();
L_558b20: /* 558b20: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* 558b23: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558b28(void) {
  LOAD_REGS();
L_558b28: /* 558b28: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 558b2b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558b30(void) {
  LOAD_REGS();
L_558b30: /* 558b30: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 558b33: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558b38(void) {
  LOAD_REGS();
L_558b38: /* 558b38: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* 558b3b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558b40(void) {
  LOAD_REGS();
L_558b40: /* 558b40: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 558b43: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558b48(void) {
  LOAD_REGS();
L_558b48: /* 558b48: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* 558b4b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558b50(void) {
  LOAD_REGS();
  goto L_558b50;
L_554ed2: /* 554ed2: jmp dword ptr [0x6ac65c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_558b50: /* 558b50: mov eax, 0x579c54 */
  eax = 0x579c54u;
/* 558b55: jmp 0x554ed2 */
  goto L_554ed2;
}

void f_558b70(void) {
  LOAD_REGS();
L_558b70: /* 558b70: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* 558b73: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558b78(void) {
  LOAD_REGS();
L_558b78: /* 558b78: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 558b7b: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_558b80(void) {
  LOAD_REGS();
L_558b80: /* 558b80: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 558b83: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}

void f_558b88(void) {
  LOAD_REGS();
L_558b88: /* 558b88: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* 558b8b: jmp 0x4e2ecd */
  SPILL(); f_4e2ecd(); return;
}
