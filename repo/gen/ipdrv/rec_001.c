#include "recomp.h"
#include "rec_mod.h"

void f_ed72d0(void) {
  LOAD_REGS();
L_ed72d0: /* ed72d0: lea ecx, [esi + 0x4ac] */
  ecx = (uint32_t)(esi + 0x4acu);
/* ed72d6: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xed72dcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ed72dc: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* ed72df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed72e0: mov ecx, eax */
  ecx = eax;
/* ed72e2: call 0xed27a0 */
  esp -= 4; W32(esp, 0xed72e7u); SPILL(); f_ed27a0(); if (g_unwind) return; RELOAD();
/* ed72e7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed72ea: mov ebx, eax */
  ebx = eax;
/* ed72ec: push 0xf029d4 */
  { uint32_t v = 0xf029d4u; esp -= 4; W32(esp, v); }
/* ed72f1: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* ed72f4: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* ed72fb: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
/* ed7302: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xed7308u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ed7308: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed7309: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* ed730f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed7310: mov ecx, eax */
  ecx = eax;
/* ed7312: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* ed7319: mov dword ptr [ebp - 0x14], 0xc */
  W32((uint32_t)(ebp + 0xffffffecu), 0xcu);
/* ed7320: call dword ptr [0xf0daec] */
  esp -= 4; W32(esp, 0xed7326u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* ed7326: mov dword ptr [ebp - 4], 7 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* ed732d: mov ebx, 0x1c */
  ebx = 0x1cu;
/* ed7332: mov ecx, eax */
  ecx = eax;
/* ed7334: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ed7337: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xed733du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ed733d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ed7340: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed7341: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7342: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* ed7345: push 0xf029d8 */
  { uint32_t v = 0xf029d8u; esp -= 4; W32(esp, v); }
/* ed734a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed734b: call dword ptr [0xf0daf0] */
  esp -= 4; W32(esp, 0xed7351u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* ed7351: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed7354: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed7357: mov dword ptr [ebp - 4], 0xd */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* ed735e: je 0xed7372 */
  if (zf) goto L_ed7372;
L_ed7360: /* ed7360: and ebx, 0xffffffef */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* ed7363: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* ed7369: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ed736c: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed7372u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ed7372: /* ed7372: test bl, 8 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed7375: mov dword ptr [ebp - 4], 0xc */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* ed737c: je 0xed738d */
  if (zf) goto L_ed738d;
L_ed737e: /* ed737e: and ebx, 0xfffffff7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* ed7381: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* ed7384: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ed7387: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed738du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ed738d: /* ed738d: test bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed7390: mov dword ptr [ebp - 4], 0xb */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* ed7397: je 0xed73a8 */
  if (zf) goto L_ed73a8;
L_ed7399: /* ed7399: and ebx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* ed739c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* ed739f: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ed73a2: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed73a8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ed73a8: /* ed73a8: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed73ab: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* ed73b2: je 0xed73c6 */
  if (zf) goto L_ed73c6;
L_ed73b4: /* ed73b4: and ebx, 0xfffffffd */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* ed73b7: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* ed73bd: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ed73c0: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed73c6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ed73c6: /* ed73c6: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed73c9: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* ed73d0: je 0xed73de */
  if (zf) goto L_ed73de;
L_ed73d2: /* ed73d2: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* ed73d8: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed73deu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_ed73de: /* ed73de: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* ed73e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed73e3: je 0xed73ea */
  if (zf) goto L_ed73ea;
L_ed73e5: /* ed73e5: lea ebx, [eax - 1] */
  ebx = (uint32_t)(eax + 0xffffffffu);
/* ed73e8: jmp 0xed73ec */
  goto L_ed73ec;
L_ed73ea: /* ed73ea: xor ebx, ebx */
  ebx = 0;
L_ed73ec: /* ed73ec: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* ed73ef: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xed73f5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ed73f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed73f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed73f8: call dword ptr [0xf0db34] */
  esp -= 4; W32(esp, 0xed73feu); SPILL(); f_4e299b(); if (g_unwind) return; /* Core!?appToAnsi@@YAPBDPBGPAD@Z */ RELOAD();
/* ed73fe: mov ecx, dword ptr [esi + 0x488] */
  ecx = R32((uint32_t)(esi + 0x488u));
/* ed7404: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed7407: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7409: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed740a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed740b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed740c: call 0xeebbe2 */
  esp -= 4; W32(esp, 0xed7411u); SPILL(); f_eebbe2(); if (g_unwind) return; RELOAD();
/* ed7411: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* ed7414: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ed7418: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed741eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed741e: mov byte ptr [esi + 0x464], 4 */
  W8((uint32_t)(esi + 0x464u), 0x4u);
/* ed7425: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ed7428: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed742f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed7430: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed7431: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed7432: mov esp, ebp */
  esp = ebp;
/* ed7434: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed7435: ret  */
  esp += 4; SPILL(); return;
}

void f_ed73ea(void) {
  LOAD_REGS();
L_ed73ea: /* ed73ea: xor ebx, ebx */
  ebx = 0;
/* ed73ec: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* ed73ef: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xed73f5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ed73f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed73f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed73f8: call dword ptr [0xf0db34] */
  esp -= 4; W32(esp, 0xed73feu); SPILL(); f_4e299b(); if (g_unwind) return; /* Core!?appToAnsi@@YAPBDPBGPAD@Z */ RELOAD();
/* ed73fe: mov ecx, dword ptr [esi + 0x488] */
  ecx = R32((uint32_t)(esi + 0x488u));
/* ed7404: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed7407: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7409: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed740a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed740b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed740c: call 0xeebbe2 */
  esp -= 4; W32(esp, 0xed7411u); SPILL(); f_eebbe2(); if (g_unwind) return; RELOAD();
/* ed7411: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* ed7414: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ed7418: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed741eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed741e: mov byte ptr [esi + 0x464], 4 */
  W8((uint32_t)(esi + 0x464u), 0x4u);
/* ed7425: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ed7428: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed742f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed7430: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed7431: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed7432: mov esp, ebp */
  esp = ebp;
/* ed7434: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed7435: ret  */
  esp += 4; SPILL(); return;
}

void f_ed7436(void) {
  LOAD_REGS();
  goto L_ed7436;
L_ed6f86: /* ed6f86: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ed6f89: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed6f90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed6f91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed6f92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed6f93: mov esp, ebp */
  esp = ebp;
/* ed6f95: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed6f96: ret  */
  esp += 4; SPILL(); return;
L_ed7097: /* ed7097: call dword ptr [0xf0db00] */
  esp -= 4; W32(esp, 0xed709du); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* ed709d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ed709f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed70a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed70a3: mov ecx, esi */
  ecx = esi;
/* ed70a5: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xed70a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ed70a8: /* ed70a8: mov byte ptr [esi + 0x464], 6 */
  W8((uint32_t)(esi + 0x464u), 0x6u);
/* ed70af: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ed70b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed70b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed70ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed70bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed70bc: mov esp, ebp */
  esp = ebp;
/* ed70be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed70bf: ret  */
  esp += 4; SPILL(); return;
L_ed7436: /* ed7436: mov ecx, esi */
  ecx = esi;
/* ed7438: call 0xed1249 */
  esp -= 4; W32(esp, 0xed743du); SPILL(); f_ed1249(); if (g_unwind) return; RELOAD();
/* ed743d: xor edi, edi */
  edi = 0;
/* ed743f: nop  */
L_ed7440: /* ed7440: cmp edi, dword ptr [esi + 0x4d8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4d8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed7446: jge 0xed6f86 */
  if ((sf == of)) goto L_ed6f86;
L_ed744c: /* ed744c: mov edx, dword ptr [esi + 0x4d4] */
  edx = R32((uint32_t)(esi + 0x4d4u));
/* ed7452: mov cl, byte ptr [edx + edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + edi))) & 0xffu);
/* ed7455: cmp cl, 0xd */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ed7458: lea ebx, [esi + 0x4d4] */
  ebx = (uint32_t)(esi + 0x4d4u);
/* ed745e: lea eax, [edx + edi] */
  eax = (uint32_t)(edx + edi);
/* ed7461: je 0xed746c */
  if (zf) goto L_ed746c;
L_ed7463: /* ed7463: cmp cl, 0xa */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ed7466: jne 0xed76d1 */
  if (!zf) goto L_ed76d1;
L_ed746c: /* ed746c: xor ecx, ecx */
  ecx = 0;
/* ed746e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed7470: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* ed7473: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ed7475: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ed7477: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
/* ed747a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ed747d: lea ecx, [esi + 0x4e0] */
  ecx = (uint32_t)(esi + 0x4e0u);
/* ed7483: call dword ptr [0xf0db1c] */
  esp -= 4; W32(esp, 0xed7489u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* ed7489: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* ed748c: mov eax, dword ptr [esi + 0x4e0] */
  eax = R32((uint32_t)(esi + 0x4e0u));
/* ed7492: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* ed7495: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ed7497: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7499: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed749a: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ed749d: call dword ptr [0xf0dbac] */
  esp -= 4; W32(esp, 0xed74a3u); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* ed74a3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ed74a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed74a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed74aa: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xed74b0u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* ed74b0: mov eax, dword ptr [esi + 0x4d8] */
  eax = R32((uint32_t)(esi + 0x4d8u));
/* ed74b6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ed74b7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed74b9: jge 0xed74ca */
  if ((sf == of)) goto L_ed74ca;
L_ed74bb: /* ed74bb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ed74bd: mov al, byte ptr [eax + edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edi + 0x1u))) & 0xffu);
/* ed74c1: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ed74c3: je 0xed74c9 */
  if (zf) goto L_ed74c9;
L_ed74c5: /* ed74c5: cmp al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ed74c7: jne 0xed74ca */
  if (!zf) goto L_ed74ca;
L_ed74c9: /* ed74c9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_ed74ca: /* ed74ca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ed74cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed74cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed74ce: mov ecx, ebx */
  ecx = ebx;
/* ed74d0: call dword ptr [0xf0df74] */
  esp -= 4; W32(esp, 0xed74d6u); SPILL(); f_6c97cd(); if (g_unwind) return; /* Engine!?Remove@?$TArray@E@@QAEXHH@Z */ RELOAD();
/* ed74d6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ed74d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed74db: je 0xed76c7 */
  if (zf) goto L_ed76c7;
L_ed74e1: /* ed74e1: mov edi, dword ptr [esi + 0x4e0] */
  edi = R32((uint32_t)(esi + 0x4e0u));
/* ed74e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed74e9: push 0xf02a64 */
  { uint32_t v = 0xf02a64u; esp -= 4; W32(esp, v); }
/* ed74ee: mov ecx, edi */
  ecx = edi;
/* ed74f0: call dword ptr [0xf0dc1c] */
  esp -= 4; W32(esp, 0xed74f6u); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* ed74f6: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* ed74f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed74f9: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* ed74fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed74fd: mov ecx, edi */
  ecx = edi;
/* ed74ff: call dword ptr [0xf0dc18] */
  esp -= 4; W32(esp, 0xed7505u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* ed7505: push 0xf02a68 */
  { uint32_t v = 0xf02a68u; esp -= 4; W32(esp, v); }
/* ed750a: mov ecx, eax */
  ecx = eax;
/* ed750c: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* ed7510: call dword ptr [0xf0dc14] */
  esp -= 4; W32(esp, 0xed7516u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* ed7516: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* ed7519: mov edi, eax */
  edi = eax;
/* ed751b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ed751f: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed7525u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed7525: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed7527: je 0xed75a0 */
  if (zf) goto L_ed75a0;
L_ed7529: /* ed7529: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed752b: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* ed752e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed752f: lea ecx, [esi + 0x490] */
  ecx = (uint32_t)(esi + 0x490u);
/* ed7535: call dword ptr [0xf0df78] */
  esp -= 4; W32(esp, 0xed753bu); SPILL(); f_6c7b3f(); if (g_unwind) return; /* Engine!?String@FURL@@QBE?AVFString@@H@Z */ RELOAD();
/* ed753b: mov bl, 0xf */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xfu) & 0xffu);
/* ed753d: mov ecx, eax */
  ecx = eax;
/* ed753f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* ed7542: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xed7548u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ed7548: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed754a: push 0xf02a74 */
  { uint32_t v = 0xf02a74u; esp -= 4; W32(esp, v); }
/* ed754f: push 0xf02a84 */
  { uint32_t v = 0xf02a84u; esp -= 4; W32(esp, v); }
/* ed7554: mov edi, eax */
  edi = eax;
/* ed7556: call dword ptr [0xf0db00] */
  esp -= 4; W32(esp, 0xed755cu); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* ed755c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed755f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed7560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7561: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* ed7564: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7565: call dword ptr [0xf0daf0] */
  esp -= 4; W32(esp, 0xed756bu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* ed756b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed756e: mov ecx, eax */
  ecx = eax;
/* ed7570: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* ed7574: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xed757au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ed757a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ed757c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed757d: mov ecx, esi */
  ecx = esi;
/* ed757f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xed7582u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed7582: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* ed7585: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* ed7588: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed758eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed758e: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* ed7591: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ed7595: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed759bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed759b: jmp 0xed70a8 */
  goto L_ed70a8;
L_ed75a0: /* ed75a0: xor edi, edi */
  edi = 0;
/* ed75a2: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* ed75a5: jmp 0xed75b0 */
  goto L_ed75b0;
L_ed75b0: /* ed75b0: cmp edi, dword ptr [esi + 0x4e4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4e4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed75b6: jge 0xed76af */
  if ((sf == of)) goto L_ed76af;
L_ed75bc: /* ed75bc: mov ecx, dword ptr [esi + 0x4e0] */
  ecx = R32((uint32_t)(esi + 0x4e0u));
/* ed75c2: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* ed75c5: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* ed75cb: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* ed75ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed75cf: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed75d1: call dword ptr [0xf0dc10] */
  esp -= 4; W32(esp, 0xed75d7u); SPILL(); f_4e3c01(); if (g_unwind) return; /* Core!?Caps@FString@@QBE?AV1@XZ */ RELOAD();
/* ed75d7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ed75d9: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* ed75df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed75e0: mov ecx, eax */
  ecx = eax;
/* ed75e2: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* ed75e6: call dword ptr [0xf0dc0c] */
  esp -= 4; W32(esp, 0xed75ecu); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* ed75ec: push 0xf02a9c */
  { uint32_t v = 0xf02a9cu; esp -= 4; W32(esp, v); }
/* ed75f1: mov ecx, eax */
  ecx = eax;
/* ed75f3: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* ed75f7: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xed75fdu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ed75fd: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* ed7603: mov ebx, eax */
  ebx = eax;
/* ed7605: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* ed7609: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed760fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed760f: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* ed7615: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ed7619: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed761fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed761f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed7621: je 0xed76a1 */
  if (zf) goto L_ed76a1;
L_ed7623: /* ed7623: mov ecx, dword ptr [esi + 0x4e0] */
  ecx = R32((uint32_t)(esi + 0x4e0u));
/* ed7629: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* ed762e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ed7630: lea edx, [ebp - 0xc0] */
  edx = (uint32_t)(ebp + 0xffffff40u);
/* ed7636: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed7637: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed7639: call dword ptr [0xf0dc18] */
  esp -= 4; W32(esp, 0xed763fu); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* ed763f: mov ecx, eax */
  ecx = eax;
/* ed7641: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* ed7645: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xed764bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ed764b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed764c: call dword ptr [0xf0dbc4] */
  esp -= 4; W32(esp, 0xed7652u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* ed7652: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* ed7655: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* ed7658: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed765b: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* ed7661: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ed7665: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed766bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed766b: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* ed766e: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* ed7671: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ed7673: jg 0xed767b */
  if ((!zf && sf == of)) goto L_ed767b;
L_ed7675: /* ed7675: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* ed7678: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
L_ed767b: /* ed767b: mov eax, dword ptr [esi + 0x450] */
  eax = R32((uint32_t)(esi + 0x450u));
/* ed7681: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed7683: jne 0xed76a1 */
  if (!zf) goto L_ed76a1;
L_ed7685: /* ed7685: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* ed7688: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* ed768b: cmp ecx, dword ptr [eax + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ed768e: je 0xed76a1 */
  if (zf) goto L_ed76a1;
L_ed7690: /* ed7690: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7692: push 0xf02ac0 */
  { uint32_t v = 0xf02ac0u; esp -= 4; W32(esp, v); }
/* ed7697: push 0xf02ad0 */
  { uint32_t v = 0xf02ad0u; esp -= 4; W32(esp, v); }
/* ed769c: jmp 0xed7097 */
  goto L_ed7097;
L_ed76a1: /* ed76a1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ed76a4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ed76a5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ed76a8: mov edi, eax */
  edi = eax;
/* ed76aa: jmp 0xed75b0 */
  goto L_ed75b0;
L_ed76af: /* ed76af: mov byte ptr [esi + 0x464], 5 */
  W8((uint32_t)(esi + 0x464u), 0x5u);
/* ed76b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ed76b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed76c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed76c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed76c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed76c3: mov esp, ebp */
  esp = ebp;
/* ed76c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed76c6: ret  */
  esp += 4; SPILL(); return;
L_ed76c7: /* ed76c7: mov ecx, esi */
  ecx = esi;
/* ed76c9: call 0xed1249 */
  esp -= 4; W32(esp, 0xed76ceu); SPILL(); f_ed1249(); if (g_unwind) return; RELOAD();
/* ed76ce: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_ed76d1: /* ed76d1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ed76d2: jmp 0xed7440 */
  goto L_ed7440;
}

void f_ed75a0(void) {
  LOAD_REGS();
  goto L_ed75a0;
L_ed7097: /* ed7097: call dword ptr [0xf0db00] */
  esp -= 4; W32(esp, 0xed709du); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* ed709d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ed709f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed70a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed70a3: mov ecx, esi */
  ecx = esi;
/* ed70a5: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xed70a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed70a8: mov byte ptr [esi + 0x464], 6 */
  W8((uint32_t)(esi + 0x464u), 0x6u);
/* ed70af: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ed70b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed70b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed70ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed70bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed70bc: mov esp, ebp */
  esp = ebp;
/* ed70be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed70bf: ret  */
  esp += 4; SPILL(); return;
L_ed75a0: /* ed75a0: xor edi, edi */
  edi = 0;
/* ed75a2: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* ed75a5: jmp 0xed75b0 */
  goto L_ed75b0;
L_ed75b0: /* ed75b0: cmp edi, dword ptr [esi + 0x4e4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4e4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed75b6: jge 0xed76af */
  if ((sf == of)) goto L_ed76af;
L_ed75bc: /* ed75bc: mov ecx, dword ptr [esi + 0x4e0] */
  ecx = R32((uint32_t)(esi + 0x4e0u));
/* ed75c2: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* ed75c5: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* ed75cb: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* ed75ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed75cf: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed75d1: call dword ptr [0xf0dc10] */
  esp -= 4; W32(esp, 0xed75d7u); SPILL(); f_4e3c01(); if (g_unwind) return; /* Core!?Caps@FString@@QBE?AV1@XZ */ RELOAD();
/* ed75d7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ed75d9: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* ed75df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed75e0: mov ecx, eax */
  ecx = eax;
/* ed75e2: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* ed75e6: call dword ptr [0xf0dc0c] */
  esp -= 4; W32(esp, 0xed75ecu); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* ed75ec: push 0xf02a9c */
  { uint32_t v = 0xf02a9cu; esp -= 4; W32(esp, v); }
/* ed75f1: mov ecx, eax */
  ecx = eax;
/* ed75f3: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* ed75f7: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xed75fdu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ed75fd: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* ed7603: mov ebx, eax */
  ebx = eax;
/* ed7605: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* ed7609: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed760fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed760f: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* ed7615: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ed7619: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed761fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed761f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed7621: je 0xed76a1 */
  if (zf) goto L_ed76a1;
L_ed7623: /* ed7623: mov ecx, dword ptr [esi + 0x4e0] */
  ecx = R32((uint32_t)(esi + 0x4e0u));
/* ed7629: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* ed762e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ed7630: lea edx, [ebp - 0xc0] */
  edx = (uint32_t)(ebp + 0xffffff40u);
/* ed7636: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed7637: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed7639: call dword ptr [0xf0dc18] */
  esp -= 4; W32(esp, 0xed763fu); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* ed763f: mov ecx, eax */
  ecx = eax;
/* ed7641: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* ed7645: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xed764bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ed764b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed764c: call dword ptr [0xf0dbc4] */
  esp -= 4; W32(esp, 0xed7652u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* ed7652: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* ed7655: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* ed7658: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed765b: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* ed7661: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ed7665: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed766bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed766b: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* ed766e: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* ed7671: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ed7673: jg 0xed767b */
  if ((!zf && sf == of)) goto L_ed767b;
L_ed7675: /* ed7675: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* ed7678: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
L_ed767b: /* ed767b: mov eax, dword ptr [esi + 0x450] */
  eax = R32((uint32_t)(esi + 0x450u));
/* ed7681: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed7683: jne 0xed76a1 */
  if (!zf) goto L_ed76a1;
L_ed7685: /* ed7685: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* ed7688: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* ed768b: cmp ecx, dword ptr [eax + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ed768e: je 0xed76a1 */
  if (zf) goto L_ed76a1;
L_ed7690: /* ed7690: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7692: push 0xf02ac0 */
  { uint32_t v = 0xf02ac0u; esp -= 4; W32(esp, v); }
/* ed7697: push 0xf02ad0 */
  { uint32_t v = 0xf02ad0u; esp -= 4; W32(esp, v); }
/* ed769c: jmp 0xed7097 */
  goto L_ed7097;
L_ed76a1: /* ed76a1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ed76a4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ed76a5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ed76a8: mov edi, eax */
  edi = eax;
/* ed76aa: jmp 0xed75b0 */
  goto L_ed75b0;
L_ed76af: /* ed76af: mov byte ptr [esi + 0x464], 5 */
  W8((uint32_t)(esi + 0x464u), 0x5u);
/* ed76b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ed76b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed76c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed76c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed76c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed76c3: mov esp, ebp */
  esp = ebp;
/* ed76c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed76c6: ret  */
  esp += 4; SPILL(); return;
}

void f_ed75a7(void) {
  LOAD_REGS();
  goto L_ed75a7;
L_ed7097: /* ed7097: call dword ptr [0xf0db00] */
  esp -= 4; W32(esp, 0xed709du); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* ed709d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ed709f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed70a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed70a3: mov ecx, esi */
  ecx = esi;
/* ed70a5: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xed70a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed70a8: mov byte ptr [esi + 0x464], 6 */
  W8((uint32_t)(esi + 0x464u), 0x6u);
/* ed70af: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ed70b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed70b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed70ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed70bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed70bc: mov esp, ebp */
  esp = ebp;
/* ed70be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed70bf: ret  */
  esp += 4; SPILL(); return;
L_ed75a7: /* ed75a7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* ed75ae: mov edi, edi */
  edi = edi;
L_ed75b0: /* ed75b0: cmp edi, dword ptr [esi + 0x4e4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4e4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed75b6: jge 0xed76af */
  if ((sf == of)) goto L_ed76af;
L_ed75bc: /* ed75bc: mov ecx, dword ptr [esi + 0x4e0] */
  ecx = R32((uint32_t)(esi + 0x4e0u));
/* ed75c2: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* ed75c5: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* ed75cb: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* ed75ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed75cf: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed75d1: call dword ptr [0xf0dc10] */
  esp -= 4; W32(esp, 0xed75d7u); SPILL(); f_4e3c01(); if (g_unwind) return; /* Core!?Caps@FString@@QBE?AV1@XZ */ RELOAD();
/* ed75d7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ed75d9: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* ed75df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed75e0: mov ecx, eax */
  ecx = eax;
/* ed75e2: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* ed75e6: call dword ptr [0xf0dc0c] */
  esp -= 4; W32(esp, 0xed75ecu); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* ed75ec: push 0xf02a9c */
  { uint32_t v = 0xf02a9cu; esp -= 4; W32(esp, v); }
/* ed75f1: mov ecx, eax */
  ecx = eax;
/* ed75f3: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* ed75f7: call dword ptr [0xf0dc08] */
  esp -= 4; W32(esp, 0xed75fdu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* ed75fd: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* ed7603: mov ebx, eax */
  ebx = eax;
/* ed7605: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* ed7609: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed760fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed760f: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* ed7615: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ed7619: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed761fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed761f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed7621: je 0xed76a1 */
  if (zf) goto L_ed76a1;
L_ed7623: /* ed7623: mov ecx, dword ptr [esi + 0x4e0] */
  ecx = R32((uint32_t)(esi + 0x4e0u));
/* ed7629: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* ed762e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ed7630: lea edx, [ebp - 0xc0] */
  edx = (uint32_t)(ebp + 0xffffff40u);
/* ed7636: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed7637: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed7639: call dword ptr [0xf0dc18] */
  esp -= 4; W32(esp, 0xed763fu); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* ed763f: mov ecx, eax */
  ecx = eax;
/* ed7641: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* ed7645: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xed764bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* ed764b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed764c: call dword ptr [0xf0dbc4] */
  esp -= 4; W32(esp, 0xed7652u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* ed7652: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* ed7655: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* ed7658: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed765b: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* ed7661: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ed7665: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed766bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed766b: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* ed766e: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* ed7671: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ed7673: jg 0xed767b */
  if ((!zf && sf == of)) goto L_ed767b;
L_ed7675: /* ed7675: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* ed7678: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
L_ed767b: /* ed767b: mov eax, dword ptr [esi + 0x450] */
  eax = R32((uint32_t)(esi + 0x450u));
/* ed7681: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed7683: jne 0xed76a1 */
  if (!zf) goto L_ed76a1;
L_ed7685: /* ed7685: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* ed7688: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* ed768b: cmp ecx, dword ptr [eax + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ed768e: je 0xed76a1 */
  if (zf) goto L_ed76a1;
L_ed7690: /* ed7690: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7692: push 0xf02ac0 */
  { uint32_t v = 0xf02ac0u; esp -= 4; W32(esp, v); }
/* ed7697: push 0xf02ad0 */
  { uint32_t v = 0xf02ad0u; esp -= 4; W32(esp, v); }
/* ed769c: jmp 0xed7097 */
  goto L_ed7097;
L_ed76a1: /* ed76a1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ed76a4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ed76a5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ed76a8: mov edi, eax */
  edi = eax;
/* ed76aa: jmp 0xed75b0 */
  goto L_ed75b0;
L_ed76af: /* ed76af: mov byte ptr [esi + 0x464], 5 */
  W8((uint32_t)(esi + 0x464u), 0x5u);
/* ed76b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ed76b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed76c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed76c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed76c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed76c3: mov esp, ebp */
  esp = ebp;
/* ed76c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed76c6: ret  */
  esp += 4; SPILL(); return;
}

void f_ed7761(void) {
  LOAD_REGS();
L_ed7761: /* ed7761: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* ed7764: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ed7769: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* ed776c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed776d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* ed7770: call 0xeec520 */
  esp -= 4; W32(esp, 0xed7775u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ed7775(); return;
}

void f_ed7775(void) {
  LOAD_REGS();
L_ed7775: /* ed7775: push 0xef53fc */
  { uint32_t v = 0xef53fcu; esp -= 4; W32(esp, v); }
/* ed777a: push 0xf02ae0 */
  { uint32_t v = 0xf02ae0u; esp -= 4; W32(esp, v); }
/* ed777f: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xed7785u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ed7785: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed7788: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed778a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed778c: call 0xeec520 */
  esp -= 4; W32(esp, 0xed7791u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  goto L_ed7791;
L_ed7790: /* ed7790: add byte ptr [ebp + 0x6eb60049], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x6eb60049u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ebp + 0x6eb60049u), r);
  }
  goto L_ed7796;
L_ed7791: /* ed7791: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ed7794: /* ed7794: mov dh, 0x6e */
  edx = (edx & 0xffff00ffu) | (((uint32_t)(0x6eu) & 0xffu) << 8);
L_ed7796: /* ed7796: in eax, dx */
  guest_unsupported(0xed7796); /* in eax, dx */
/* ed7797: add byte ptr [eax + esi*2], ch */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi*2))); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(eax + esi*2), r);
  }
/* ed779a: in eax, dx */
  guest_unsupported(0xed779a); /* in eax, dx */
/* ed779b: add byte ptr [ebp + 0x3600ed71], ch */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3600ed71u))); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  zf = (r) == 0;
  W8((uint32_t)(ebp + 0x3600ed71u), r);
  }
/* ed77a1: je 0xed7790 */
  if (zf) goto L_ed7790;
L_ed77a3: /* ed77a3: add bh, dl */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  zf = (r) == 0;
  cf = (r) < (a);
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* ed77a5: jbe 0xed7794 */
  if ((cf | zf)) goto L_ed7794;
L_ed77a7: /* ed77a7: add byte ptr [ecx + 0x77], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x77u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ecx + 0x77u), r);
  }
/* ed77aa: in eax, dx */
  guest_unsupported(0xed77aa); /* in eax, dx */
/* ed77ab: add byte ptr [eax - 0x336f6f70], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcc909090u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(eax + 0xcc909090u), r);
  }
L_ed77b1: guest_badaddr(0xed77b1); return;
}

void f_ed7a00(void) {
  LOAD_REGS();
L_ed7a00: /* ed7a00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed7a01: mov ebp, esp */
  ebp = esp;
/* ed7a03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed7a05: push 0xeedf40 */
  { uint32_t v = 0xeedf40u; esp -= 4; W32(esp, v); }
/* ed7a0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed7a10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7a11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed7a18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed7a1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed7a1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7a1d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ed7a20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed7a21: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* ed7a24: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ed7a27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7a28: mov ecx, edi */
  ecx = edi;
/* ed7a2a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ed7a31: call dword ptr [0xf0df7c] */
  esp -= 4; W32(esp, 0xed7a37u); SPILL(); f_6cb43d(); if (g_unwind) return; /* Engine!?CountBytes@?$TArray@E@@QAEXAAVFArchive@@@Z */ RELOAD();
/* ed7a37: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* ed7a3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed7a3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7a3c: call dword ptr [0xf0dc28] */
  esp -= 4; W32(esp, 0xed7a42u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* ed7a42: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* ed7a45: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed7a48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed7a4a: je 0xed7a5b */
  if (zf) goto L_ed7a5b;
L_ed7a4c: /* ed7a4c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ed7a4e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ed7a50: mov ecx, edi */
  ecx = edi;
/* ed7a52: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* ed7a55: call dword ptr [0xf0dc24] */
  esp -= 4; W32(esp, 0xed7a5bu); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
L_ed7a5b: /* ed7a5b: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* ed7a5d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ed7a5f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ed7a61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed7a62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7a63: mov ecx, esi */
  ecx = esi;
/* ed7a65: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xed7a68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed7a68: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ed7a6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed7a6c: mov eax, esi */
  eax = esi;
/* ed7a6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed7a6f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed7a76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed7a77: mov esp, ebp */
  esp = ebp;
/* ed7a79: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed7a7a: ret  */
  esp += 4; SPILL(); return;
}

void f_ed7a7b(void) {
  LOAD_REGS();
L_ed7a7b: /* ed7a7b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ed7a7e: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ed7a83: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* ed7a86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed7a87: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ed7a8a: call 0xeec520 */
  esp -= 4; W32(esp, 0xed7a8fu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ed7a8f(); return;
}

void f_ed7a8f(void) {
  LOAD_REGS();
L_ed7a8f: /* ed7a8f: push 0xef543c */
  { uint32_t v = 0xef543cu; esp -= 4; W32(esp, v); }
/* ed7a94: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ed7a99: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xed7a9fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ed7a9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed7aa2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7aa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7aa6: call 0xeec520 */
  esp -= 4; W32(esp, 0xed7aabu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ed7aab: guest_badaddr(0xed7aab); return;
}

void f_ed7ae0(void) {
  LOAD_REGS();
L_ed7ae0: /* ed7ae0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed7ae2: push 0xeedf59 */
  { uint32_t v = 0xeedf59u; esp -= 4; W32(esp, v); }
/* ed7ae7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed7aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7aee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed7af5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed7af6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed7af7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed7af8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7af9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed7afa: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* ed7afe: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ed7b01: mov esi, ecx */
  esi = ecx;
/* ed7b03: xor ebx, ebx */
  ebx = 0;
/* ed7b05: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ed7b07: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* ed7b0b: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* ed7b0d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* ed7b10: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ed7b13: call dword ptr [0xf0dc24] */
  esp -= 4; W32(esp, 0xed7b19u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* ed7b19: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* ed7b1c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ed7b1f: xor ebp, ebp */
  ebp = 0;
/* ed7b21: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed7b23: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* ed7b27: jle 0xed7b66 */
  if ((zf || sf != of)) goto L_ed7b66;
L_ed7b29: /* ed7b29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ed7b30: /* ed7b30: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ed7b32: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ed7b34: mov ecx, esi */
  ecx = esi;
/* ed7b36: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xed7b3cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* ed7b3c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ed7b3e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ed7b41: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* ed7b43: je 0xed7b5b */
  if (zf) goto L_ed7b5b;
L_ed7b45: /* ed7b45: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ed7b47: mov edx, dword ptr [ecx + ebx] */
  edx = R32((uint32_t)(ecx + ebx));
/* ed7b4a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed7b4c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed7b4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed7b50: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* ed7b53: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* ed7b55: call dword ptr [0xf0ddc4] */
  esp -= 4; W32(esp, 0xed7b5bu); SPILL(); f_6cb258(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@ABV0@@Z */ RELOAD();
L_ed7b5b: /* ed7b5b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ed7b5e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ed7b5f: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ed7b62: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed7b64: jl 0xed7b30 */
  if ((sf != of)) goto L_ed7b30;
L_ed7b66: /* ed7b66: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ed7b6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed7b6b: mov eax, esi */
  eax = esi;
/* ed7b6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed7b6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed7b6f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed7b70: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed7b77: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed7b7a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed7bb0(void) {
  LOAD_REGS();
L_ed7bb0: /* ed7bb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed7bb2: push 0xeedf79 */
  { uint32_t v = 0xeedf79u; esp -= 4; W32(esp, v); }
/* ed7bb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed7bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7bbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed7bc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed7bc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed7bc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7bc8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed7bc9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* ed7bcd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ed7bd0: mov esi, ecx */
  esi = ecx;
/* ed7bd2: xor ebx, ebx */
  ebx = 0;
/* ed7bd4: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* ed7bd6: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* ed7bda: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* ed7bdc: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* ed7bdf: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ed7be2: call dword ptr [0xf0dc24] */
  esp -= 4; W32(esp, 0xed7be8u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* ed7be8: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* ed7beb: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed7bee: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* ed7bf2: jle 0xed7c22 */
  if ((zf || sf != of)) goto L_ed7c22;
L_ed7bf4: /* ed7bf4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed7bf5: xor ebp, ebp */
  ebp = 0;
L_ed7bf7: /* ed7bf7: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* ed7bf9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ed7bfb: mov ecx, esi */
  ecx = esi;
/* ed7bfd: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xed7c03u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* ed7c03: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* ed7c06: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* ed7c08: je 0xed7c16 */
  if (zf) goto L_ed7c16;
L_ed7c0a: /* ed7c0a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ed7c0c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed7c0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed7c0f: mov ecx, eax */
  ecx = eax;
/* ed7c11: call 0xed147e */
  esp -= 4; W32(esp, 0xed7c16u); SPILL(); f_ed147e(); if (g_unwind) return; RELOAD();
L_ed7c16: /* ed7c16: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ed7c19: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ed7c1a: add ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ed7c1d: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed7c1f: jl 0xed7bf7 */
  if ((sf != of)) goto L_ed7bf7;
L_ed7c21: /* ed7c21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_ed7c22: /* ed7c22: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ed7c26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed7c27: mov eax, esi */
  eax = esi;
/* ed7c29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed7c2a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed7c2b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed7c32: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed7c35: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed7c70(void) {
  LOAD_REGS();
L_ed7c70: /* ed7c70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed7c71: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ed7c75: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ed7c77: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed7c78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7c79: mov esi, dword ptr [0xf0dba4] */
  esi = R32((uint32_t)(0xf0dba4u));
/* ed7c7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed7c80: mov ebp, ecx */
  ebp = ecx;
/* ed7c82: jge 0xed7c98 */
  if ((sf == of)) goto L_ed7c98;
L_ed7c84: /* ed7c84: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* ed7c89: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ed7c8e: push 0xf02f80 */
  { uint32_t v = 0xf02f80u; esp -= 4; W32(esp, v); }
/* ed7c93: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xed7c95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed7c95: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ed7c98: /* ed7c98: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed7c9b: jle 0xed7cb1 */
  if ((zf || sf != of)) goto L_ed7cb1;
L_ed7c9d: /* ed7c9d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* ed7ca2: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ed7ca7: push 0xf02f6c */
  { uint32_t v = 0xf02f6cu; esp -= 4; W32(esp, v); }
/* ed7cac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xed7caeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed7cae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ed7cb1: /* ed7cb1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ed7cb5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* ed7cb8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed7cbb: jle 0xed7cd1 */
  if ((zf || sf != of)) goto L_ed7cd1;
L_ed7cbd: /* ed7cbd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* ed7cc2: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ed7cc7: push 0xf02f50 */
  { uint32_t v = 0xf02f50u; esp -= 4; W32(esp, v); }
/* ed7ccc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xed7cceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed7cce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ed7cd1: /* ed7cd1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed7cd3: jge 0xed7cf1 */
  if ((sf == of)) goto L_ed7cf1;
L_ed7cd5: /* ed7cd5: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* ed7cd8: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* ed7cdb: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ed7cdd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ed7ce0: /* ed7ce0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ed7ce3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed7ce5: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed7cebu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed7ceb: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ed7cee: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ed7cef: jne 0xed7ce0 */
  if (!zf) goto L_ed7ce0;
L_ed7cf1: /* ed7cf1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ed7cf5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ed7cf7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed7cf8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed7cf9: mov ecx, ebp */
  ecx = ebp;
/* ed7cfb: call dword ptr [0xf0dc30] */
  esp -= 4; W32(esp, 0xed7d01u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* ed7d01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed7d02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed7d03: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed7d04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed7d05: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ed7d40(void) {
  LOAD_REGS();
L_ed7d40: /* ed7d40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7d41: mov esi, ecx */
  esi = ecx;
/* ed7d43: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ed7d46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed7d47: xor edi, edi */
  edi = 0;
/* ed7d49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ed7d4b: jle 0xed7d66 */
  if ((zf || sf != of)) goto L_ed7d66;
L_ed7d4d: /* ed7d4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed7d4e: xor ebx, ebx */
  ebx = 0;
L_ed7d50: /* ed7d50: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ed7d52: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed7d54: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed7d5au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed7d5a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ed7d5d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ed7d5e: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ed7d61: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed7d63: jl 0xed7d50 */
  if ((sf != of)) goto L_ed7d50;
L_ed7d65: /* ed7d65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ed7d66: /* ed7d66: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ed7d6a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ed7d6c: mov ecx, esi */
  ecx = esi;
/* ed7d6e: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* ed7d75: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ed7d78: call dword ptr [0xf0dc24] */
  esp -= 4; W32(esp, 0xed7d7eu); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* ed7d7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed7d7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed7d80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed7db0(void) {
  LOAD_REGS();
L_ed7db0: /* ed7db0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7db1: mov esi, ecx */
  esi = ecx;
/* ed7db3: call 0xed1451 */
  esp -= 4; W32(esp, 0xed7db8u); SPILL(); f_ed1451(); if (g_unwind) return; RELOAD();
/* ed7db8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed7dbd: je 0xed7dcc */
  if (zf) goto L_ed7dcc;
L_ed7dbf: /* ed7dbf: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ed7dc4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ed7dc6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ed7dc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7dc9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xed7dccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ed7dcc: /* ed7dcc: mov eax, esi */
  eax = esi;
/* ed7dce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed7dcf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed7df0(void) {
  LOAD_REGS();
L_ed7df0: /* ed7df0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7df1: mov esi, ecx */
  esi = ecx;
/* ed7df3: call 0xed16e0 */
  esp -= 4; W32(esp, 0xed7df8u); SPILL(); f_ed16e0(); if (g_unwind) return; RELOAD();
/* ed7df8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed7dfd: je 0xed7e0c */
  if (zf) goto L_ed7e0c;
L_ed7dff: /* ed7dff: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ed7e04: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ed7e06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ed7e08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7e09: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xed7e0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ed7e0c: /* ed7e0c: mov eax, esi */
  eax = esi;
/* ed7e0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed7e0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed7e30(void) {
  LOAD_REGS();
L_ed7e30: /* ed7e30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7e31: mov esi, ecx */
  esi = ecx;
/* ed7e33: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ed7e36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed7e37: xor edi, edi */
  edi = 0;
/* ed7e39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ed7e3b: jle 0xed7e55 */
  if ((zf || sf != of)) goto L_ed7e55;
L_ed7e3d: /* ed7e3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed7e3e: xor ebx, ebx */
  ebx = 0;
L_ed7e40: /* ed7e40: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ed7e42: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed7e44: call 0xed16e0 */
  esp -= 4; W32(esp, 0xed7e49u); SPILL(); f_ed16e0(); if (g_unwind) return; RELOAD();
/* ed7e49: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ed7e4c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ed7e4d: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ed7e50: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed7e52: jl 0xed7e40 */
  if ((sf != of)) goto L_ed7e40;
L_ed7e54: /* ed7e54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ed7e55: /* ed7e55: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ed7e59: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* ed7e5b: mov ecx, esi */
  ecx = esi;
/* ed7e5d: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* ed7e64: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ed7e67: call dword ptr [0xf0dc24] */
  esp -= 4; W32(esp, 0xed7e6du); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* ed7e6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed7e6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed7e6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed7ea0(void) {
  LOAD_REGS();
L_ed7ea0: /* ed7ea0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed7ea3: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ed7ea7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7ea8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed7ea9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7eab: mov esi, ecx */
  esi = ecx;
/* ed7ead: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ed7eb1: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* ed7eb3: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* ed7eb7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed7eb8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ed7ebc: mov eax, dword ptr [0xf07d58] */
  eax = R32((uint32_t)(0xf07d58u));
/* ed7ec1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7ec3: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ed7ec7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7ec8: mov ecx, esi */
  ecx = esi;
/* ed7eca: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xed7ed0u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ed7ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7ed1: mov ecx, esi */
  ecx = esi;
/* ed7ed3: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0xed7ed6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed7ed6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed7ed7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed7ed8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed7edb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ed7ef0(void) {
  LOAD_REGS();
L_ed7ef0: /* ed7ef0: sub esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed7ef6: mov eax, dword ptr [esp + 0x110] */
  eax = R32((uint32_t)(esp + 0x110u));
/* ed7efd: mov edx, dword ptr [esp + 0x118] */
  edx = R32((uint32_t)(esp + 0x118u));
/* ed7f04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7f05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed7f06: mov esi, ecx */
  esi = ecx;
/* ed7f08: mov ecx, dword ptr [esp + 0x11c] */
  ecx = R32((uint32_t)(esp + 0x11cu));
/* ed7f0f: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* ed7f13: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* ed7f18: lea eax, [esp + 0x128] */
  eax = (uint32_t)(esp + 0x128u);
/* ed7f1f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ed7f23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7f24: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* ed7f28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed7f29: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* ed7f2d: call 0xed1a64 */
  esp -= 4; W32(esp, 0xed7f32u); SPILL(); f_ed1a64(); if (g_unwind) return; RELOAD();
/* ed7f32: mov eax, dword ptr [0xf07d40] */
  eax = R32((uint32_t)(0xf07d40u));
/* ed7f37: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* ed7f39: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed7f3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7f3e: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* ed7f42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed7f43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7f45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7f46: mov ecx, esi */
  ecx = esi;
/* ed7f48: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xed7f4eu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ed7f4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7f4f: mov ecx, esi */
  ecx = esi;
/* ed7f51: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0xed7f54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed7f54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed7f55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed7f56: add esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed7f5c: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ed7f80(void) {
  LOAD_REGS();
L_ed7f80: /* ed7f80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed7f82: push 0xeedf98 */
  { uint32_t v = 0xeedf98u; esp -= 4; W32(esp, v); }
/* ed7f87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed7f8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7f8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed7f95: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed7f98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed7f99: mov esi, ecx */
  esi = ecx;
/* ed7f9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed7f9c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ed7fa0: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xed7fa6u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ed7fa6: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* ed7faa: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* ed7fae: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ed7fb2: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* ed7fb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed7fb7: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* ed7fbb: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* ed7fc3: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ed7fc7: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xed7fcdu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ed7fcd: mov ecx, dword ptr [0xf07d78] */
  ecx = R32((uint32_t)(0xf07d78u));
/* ed7fd3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* ed7fd5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7fd7: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* ed7fdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7fdc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed7fde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed7fdf: mov ecx, esi */
  ecx = esi;
/* ed7fe1: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xed7fe7u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ed7fe7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed7fe8: mov ecx, esi */
  ecx = esi;
/* ed7fea: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0xed7fedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed7fed: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ed7ff1: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* ed7ff9: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed7fffu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed7fff: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ed8003: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed8004: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8005: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed800c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed800f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ed8050(void) {
  LOAD_REGS();
L_ed8050: /* ed8050: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed8052: push 0xeedfb8 */
  { uint32_t v = 0xeedfb8u; esp -= 4; W32(esp, v); }
/* ed8057: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed805d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed805e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed8065: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed8068: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8069: mov esi, ecx */
  esi = ecx;
/* ed806b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed806c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ed8070: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xed8076u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ed8076: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* ed807a: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* ed807e: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ed8082: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* ed8086: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed8087: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* ed808b: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* ed8093: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ed8097: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xed809du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ed809d: mov ecx, dword ptr [0xf07d34] */
  ecx = R32((uint32_t)(0xf07d34u));
/* ed80a3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* ed80a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed80a7: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* ed80ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed80ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed80ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed80af: mov ecx, esi */
  ecx = esi;
/* ed80b1: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xed80b7u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ed80b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed80b8: mov ecx, esi */
  ecx = esi;
/* ed80ba: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0xed80bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed80bd: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ed80c1: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* ed80c9: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed80cfu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed80cf: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ed80d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed80d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed80d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed80dc: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed80df: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ed8120(void) {
  LOAD_REGS();
L_ed8120: /* ed8120: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed8122: push 0xeedfd8 */
  { uint32_t v = 0xeedfd8u; esp -= 4; W32(esp, v); }
/* ed8127: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed812d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed812e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed8135: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed8138: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8139: mov esi, ecx */
  esi = ecx;
/* ed813b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed813c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* ed8140: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xed8146u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ed8146: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ed814a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed814b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* ed814f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* ed8157: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xed815du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ed815d: mov edx, dword ptr [0xf07d78] */
  edx = R32((uint32_t)(0xf07d78u));
/* ed8163: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* ed8165: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed8167: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* ed816b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed816c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed816e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed816f: mov ecx, esi */
  ecx = esi;
/* ed8171: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xed8177u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ed8177: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8178: mov ecx, esi */
  ecx = esi;
/* ed817a: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0xed817du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed817d: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* ed8181: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* ed8189: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed818fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed818f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ed8193: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed8194: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8195: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed819c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed819f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed81e0(void) {
  LOAD_REGS();
L_ed81e0: /* ed81e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed81e2: push 0xeedff8 */
  { uint32_t v = 0xeedff8u; esp -= 4; W32(esp, v); }
/* ed81e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed81ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed81ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed81f5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed81f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed81f9: mov esi, ecx */
  esi = ecx;
/* ed81fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed81fc: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* ed8200: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xed8206u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ed8206: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ed820a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed820b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* ed820f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* ed8217: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xed821du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ed821d: mov edx, dword ptr [0xf07d34] */
  edx = R32((uint32_t)(0xf07d34u));
/* ed8223: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* ed8225: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed8227: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* ed822b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed822c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed822e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed822f: mov ecx, esi */
  ecx = esi;
/* ed8231: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xed8237u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ed8237: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8238: mov ecx, esi */
  ecx = esi;
/* ed823a: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0xed823du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed823d: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* ed8241: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* ed8249: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed824fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed824f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ed8253: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed8254: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8255: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed825c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed825f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed82a0(void) {
  LOAD_REGS();
L_ed82a0: /* ed82a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed82a2: push 0xeee018 */
  { uint32_t v = 0xeee018u; esp -= 4; W32(esp, v); }
/* ed82a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed82ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed82ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed82b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed82b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed82b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed82b8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ed82bc: mov esi, ecx */
  esi = ecx;
/* ed82be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed82bf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ed82c3: call 0xed1546 */
  esp -= 4; W32(esp, 0xed82c8u); SPILL(); f_ed1546(); if (g_unwind) return; RELOAD();
/* ed82c8: mov dword ptr [esi], 0xef4a48 */
  W32((uint32_t)(esi), 0xef4a48u);
/* ed82ce: mov al, byte ptr [edi + 0x358] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x358u))) & 0xffu);
/* ed82d4: mov byte ptr [esi + 0x358], al */
  W8((uint32_t)(esi + 0x358u), (eax & 0xffu));
/* ed82da: mov ecx, dword ptr [edi + 0x35c] */
  ecx = R32((uint32_t)(edi + 0x35cu));
/* ed82e0: mov dword ptr [esi + 0x35c], ecx */
  W32((uint32_t)(esi + 0x35cu), ecx);
/* ed82e6: mov edx, dword ptr [edi + 0x360] */
  edx = R32((uint32_t)(edi + 0x360u));
/* ed82ec: mov dword ptr [esi + 0x360], edx */
  W32((uint32_t)(esi + 0x360u), edx);
/* ed82f2: mov eax, dword ptr [edi + 0x364] */
  eax = R32((uint32_t)(edi + 0x364u));
/* ed82f8: add edi, 0x368 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x368u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ed82fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed82ff: lea ecx, [esi + 0x368] */
  ecx = (uint32_t)(esi + 0x368u);
/* ed8305: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ed830d: mov dword ptr [esi + 0x364], eax */
  W32((uint32_t)(esi + 0x364u), eax);
/* ed8313: call dword ptr [0xf0ddc4] */
  esp -= 4; W32(esp, 0xed8319u); SPILL(); f_6cb258(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@ABV0@@Z */ RELOAD();
/* ed8319: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* ed831d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed831e: mov eax, esi */
  eax = esi;
/* ed8320: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8321: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed8328: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed832b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed8360(void) {
  LOAD_REGS();
L_ed8360: /* ed8360: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ed8364: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed8366: je 0xed836d */
  if (zf) goto L_ed836d;
L_ed8368: /* ed8368: jmp 0xed19e7 */
  SPILL(); f_ed19e7(); return;
L_ed836d: /* ed836d: ret  */
  esp += 4; SPILL(); return;
}

void f_ed8380(void) {
  LOAD_REGS();
L_ed8380: /* ed8380: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed8382: push 0xeee038 */
  { uint32_t v = 0xeee038u; esp -= 4; W32(esp, v); }
/* ed8387: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed838d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed838e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed8395: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed8398: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed8399: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed839a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed839b: mov esi, ecx */
  esi = ecx;
/* ed839d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed839e: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ed83a2: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xed83a8u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ed83a8: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* ed83ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed83ad: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* ed83b1: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* ed83b9: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xed83bfu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ed83bf: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* ed83c3: mov edx, dword ptr [0xf07d68] */
  edx = R32((uint32_t)(0xf07d68u));
/* ed83c9: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ed83cb: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* ed83cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed83cf: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* ed83d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed83d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed83d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed83d7: mov ecx, esi */
  ecx = esi;
/* ed83d9: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ed83dd: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xed83e3u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ed83e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed83e4: mov ecx, esi */
  ecx = esi;
/* ed83e6: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0xed83e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed83e9: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* ed83ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed83ee: mov ecx, edi */
  ecx = edi;
/* ed83f0: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xed83f6u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ed83f6: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ed83fa: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* ed83fc: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ed8400: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* ed8408: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed840eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed840e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ed8412: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed8413: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8414: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed8415: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed8416: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed841d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed8420: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ed8460(void) {
  LOAD_REGS();
L_ed8460: /* ed8460: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ed8464: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed8466: je 0xed846d */
  if (zf) goto L_ed846d;
L_ed8468: /* ed8468: jmp 0xed1a05 */
  SPILL(); f_ed1a05(); return;
L_ed846d: /* ed846d: ret  */
  esp += 4; SPILL(); return;
}

void f_ed8480(void) {
  LOAD_REGS();
L_ed8480: /* ed8480: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed8482: push 0xeee058 */
  { uint32_t v = 0xeee058u; esp -= 4; W32(esp, v); }
/* ed8487: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed848d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed848e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed8495: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed8498: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed8499: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed849a: mov esi, ecx */
  esi = ecx;
/* ed849c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* ed84a0: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xed84a6u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ed84a6: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ed84aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed84ab: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* ed84af: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* ed84b7: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ed84bf: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xed84c5u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ed84c5: mov edx, dword ptr [0xf07d38] */
  edx = R32((uint32_t)(0xf07d38u));
/* ed84cb: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* ed84cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed84cf: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* ed84d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed84d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed84d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed84d7: mov ecx, esi */
  ecx = esi;
/* ed84d9: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xed84dfu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* ed84df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed84e0: mov ecx, esi */
  ecx = esi;
/* ed84e2: call dword ptr [ebx + 0x10] */
  { uint32_t t = R32((uint32_t)(ebx + 0x10u)); esp -= 4; W32(esp, 0xed84e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed84e5: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ed84e9: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* ed84ed: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* ed84f5: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed84fbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed84fb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ed84ff: mov eax, esi */
  eax = esi;
/* ed8501: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8502: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed8503: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed850a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed850d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed8540(void) {
  LOAD_REGS();
L_ed8540: /* ed8540: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ed8544: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed8546: je 0xed854d */
  if (zf) goto L_ed854d;
L_ed8548: /* ed8548: jmp 0xed15d7 */
  SPILL(); f_ed15d7(); return;
L_ed854d: /* ed854d: ret  */
  esp += 4; SPILL(); return;
}

void f_ed8560(void) {
  LOAD_REGS();
L_ed8560: /* ed8560: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed8562: push 0xeee081 */
  { uint32_t v = 0xeee081u; esp -= 4; W32(esp, v); }
/* ed8567: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed856d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed856e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed8575: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed8578: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8579: mov esi, ecx */
  esi = ecx;
/* ed857b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* ed857f: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* ed8587: call dword ptr [0xf0df54] */
  esp -= 4; W32(esp, 0xed858du); SPILL(); f_6cb00f(); if (g_unwind) return; /* Engine!??0FServerResponseLine@@QAE@XZ */ RELOAD();
/* ed858d: mov cl, byte ptr [esp + 0x80] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x80u))) & 0xffu);
/* ed8594: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* ed8598: lea edx, [esp + 0x84] */
  edx = (uint32_t)(esp + 0x84u);
/* ed859f: mov byte ptr [esp + 8], cl */
  W8((uint32_t)(esp + 0x8u), (ecx & 0xffu));
/* ed85a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed85a4: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ed85a8: mov byte ptr [esp + 0x78], 1 */
  W8((uint32_t)(esp + 0x78u), 0x1u);
/* ed85ad: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* ed85b1: call dword ptr [0xf0df5c] */
  esp -= 4; W32(esp, 0xed85b7u); SPILL(); f_6c7482(); if (g_unwind) return; /* Engine!??4FServerResponseLine@@QAEAAU0@ABU0@@Z */ RELOAD();
/* ed85b7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ed85b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed85bb: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* ed85bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed85c0: mov ecx, dword ptr [0xf07d88] */
  ecx = R32((uint32_t)(0xf07d88u));
/* ed85c6: lea edx, [esi + 0x3a0] */
  edx = (uint32_t)(esi + 0x3a0u);
/* ed85cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed85cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed85ce: mov ecx, esi */
  ecx = esi;
/* ed85d0: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xed85d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed85d3: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* ed85d7: mov byte ptr [esp + 0x74], 0 */
  W8((uint32_t)(esp + 0x74u), 0x0u);
/* ed85dc: call dword ptr [0xf0df50] */
  esp -= 4; W32(esp, 0xed85e2u); SPILL(); f_6c46a1(); if (g_unwind) return; /* Engine!??1FServerResponseLine@@QAE@XZ */ RELOAD();
/* ed85e2: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* ed85e9: mov dword ptr [esp + 0x74], 0xffffffff */
  W32((uint32_t)(esp + 0x74u), 0xffffffffu);
/* ed85f1: call dword ptr [0xf0df50] */
  esp -= 4; W32(esp, 0xed85f7u); SPILL(); f_6c46a1(); if (g_unwind) return; /* Engine!??1FServerResponseLine@@QAE@XZ */ RELOAD();
/* ed85f7: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* ed85fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed85fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed8603: add esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed8606: ret 0x68 */
  esp += 108; SPILL(); return;
}

void f_ed8640(void) {
  LOAD_REGS();
L_ed8640: /* ed8640: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ed8644: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed8646: je 0xed864d */
  if (zf) goto L_ed864d;
L_ed8648: /* ed8648: jmp 0xed187f */
  SPILL(); f_ed187f(); return;
L_ed864d: /* ed864d: ret  */
  esp += 4; SPILL(); return;
}

void f_ed8660(void) {
  LOAD_REGS();
L_ed8660: /* ed8660: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed8662: push 0xeee0a8 */
  { uint32_t v = 0xeee0a8u; esp -= 4; W32(esp, v); }
/* ed8667: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed866d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed866e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed8675: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed8678: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8679: mov esi, ecx */
  esi = ecx;
/* ed867b: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* ed867f: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xed8685u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ed8685: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ed8689: mov al, byte ptr [esp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x24u))) & 0xffu);
/* ed868d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed868e: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* ed8692: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* ed869a: mov byte ptr [esp + 8], al */
  W8((uint32_t)(esp + 0x8u), (eax & 0xffu));
/* ed869e: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xed86a4u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ed86a4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ed86a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed86a8: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* ed86ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed86ad: mov eax, dword ptr [0xf07d80] */
  eax = R32((uint32_t)(0xf07d80u));
/* ed86b2: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* ed86b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed86b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed86ba: mov ecx, esi */
  ecx = esi;
/* ed86bc: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xed86bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed86bf: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* ed86c3: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* ed86cb: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xed86d1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* ed86d1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ed86d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed86d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed86dd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed86e0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ed8720(void) {
  LOAD_REGS();
L_ed8720: /* ed8720: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed8722: push 0xeee0d1 */
  { uint32_t v = 0xeee0d1u; esp -= 4; W32(esp, v); }
/* ed8727: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed872d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed872e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed8735: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed8738: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8739: mov esi, ecx */
  esi = ecx;
/* ed873b: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* ed873f: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
/* ed8747: call dword ptr [0xf0df54] */
  esp -= 4; W32(esp, 0xed874du); SPILL(); f_6cb00f(); if (g_unwind) return; /* Engine!??0FServerResponseLine@@QAE@XZ */ RELOAD();
/* ed874d: lea eax, [esp + 0x74] */
  eax = (uint32_t)(esp + 0x74u);
/* ed8751: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8752: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* ed8756: mov byte ptr [esp + 0x70], 1 */
  W8((uint32_t)(esp + 0x70u), 0x1u);
/* ed875b: call dword ptr [0xf0df5c] */
  esp -= 4; W32(esp, 0xed8761u); SPILL(); f_6c7482(); if (g_unwind) return; /* Engine!??4FServerResponseLine@@QAEAAU0@ABU0@@Z */ RELOAD();
/* ed8761: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ed8763: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed8765: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* ed8769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed876a: mov eax, dword ptr [0xf07d2c] */
  eax = R32((uint32_t)(0xf07d2cu));
/* ed876f: lea ecx, [esi + 0x3cc] */
  ecx = (uint32_t)(esi + 0x3ccu);
/* ed8775: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed8776: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8777: mov ecx, esi */
  ecx = esi;
/* ed8779: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xed877cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed877c: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* ed8780: mov byte ptr [esp + 0x6c], 0 */
  W8((uint32_t)(esp + 0x6cu), 0x0u);
/* ed8785: call dword ptr [0xf0df50] */
  esp -= 4; W32(esp, 0xed878bu); SPILL(); f_6c46a1(); if (g_unwind) return; /* Engine!??1FServerResponseLine@@QAE@XZ */ RELOAD();
/* ed878b: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* ed878f: mov dword ptr [esp + 0x6c], 0xffffffff */
  W32((uint32_t)(esp + 0x6cu), 0xffffffffu);
/* ed8797: call dword ptr [0xf0df50] */
  esp -= 4; W32(esp, 0xed879du); SPILL(); f_6c46a1(); if (g_unwind) return; /* Engine!??1FServerResponseLine@@QAE@XZ */ RELOAD();
/* ed879d: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* ed87a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed87a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed87a9: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed87ac: ret 0x60 */
  esp += 100; SPILL(); return;
}

void f_ed87e0(void) {
  LOAD_REGS();
L_ed87e0: /* ed87e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed87e2: push 0xeee0f9 */
  { uint32_t v = 0xeee0f9u; esp -= 4; W32(esp, v); }
/* ed87e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed87ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed87ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed87f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed87f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed87f7: mov esi, ecx */
  esi = ecx;
/* ed87f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ed87fd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ed8800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8801: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed8803: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ed880b: call 0xed1636 */
  esp -= 4; W32(esp, 0xed8810u); SPILL(); f_ed1636(); if (g_unwind) return; RELOAD();
/* ed8810: mov ecx, esi */
  ecx = esi;
/* ed8812: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* ed881a: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xed8820u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* ed8820: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ed8824: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8825: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed882c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed882f: ret  */
  esp += 4; SPILL(); return;
}

void f_ed8850(void) {
  LOAD_REGS();
L_ed8850: /* ed8850: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed8851: mov ebp, esp */
  ebp = esp;
/* ed8853: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed8855: push 0xeee110 */
  { uint32_t v = 0xeee110u; esp -= 4; W32(esp, v); }
/* ed885a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed8860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8861: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed8868: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed886b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed886c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed886d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ed8870: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed8871: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* ed8874: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ed8877: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ed8879: xor ebx, ebx */
  ebx = 0;
/* ed887b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed887c: mov ecx, edi */
  ecx = edi;
/* ed887e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ed8881: call dword ptr [0xf0db30] */
  esp -= 4; W32(esp, 0xed8887u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* ed8887: cmp dword ptr [esi + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ed888a: je 0xed88e6 */
  if (zf) goto L_ed88e6;
L_ed888c: /* ed888c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ed888f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8891: call dword ptr [0xf0dc28] */
  esp -= 4; W32(esp, 0xed8897u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* ed8897: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ed889a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed889d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed889e: mov ecx, edi */
  ecx = edi;
/* ed88a0: call 0xed1479 */
  esp -= 4; W32(esp, 0xed88a5u); SPILL(); f_ed1479(); if (g_unwind) return; RELOAD();
L_ed88a5: /* ed88a5: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed88a8: jge 0xed891d */
  if ((sf == of)) goto L_ed891d;
L_ed88aa: /* ed88aa: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ed88ac: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ed88ae: mov ecx, edi */
  ecx = edi;
/* ed88b0: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xed88b6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* ed88b6: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* ed88b9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ed88bb: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* ed88be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed88c0: je 0xed88d6 */
  if (zf) goto L_ed88d6;
L_ed88c2: /* ed88c2: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xed88c8u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* ed88c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed88c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed88ca: call dword ptr [0xf0dbf8] */
  esp -= 4; W32(esp, 0xed88d0u); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* ed88d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed88d3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ed88d4: jmp 0xed88a5 */
  goto L_ed88a5;
L_ed88d6: /* ed88d6: xor eax, eax */
  eax = 0;
/* ed88d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed88d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed88da: call dword ptr [0xf0dbf8] */
  esp -= 4; W32(esp, 0xed88e0u); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* ed88e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed88e3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ed88e4: jmp 0xed88a5 */
  goto L_ed88a5;
L_ed88e6: /* ed88e6: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* ed88e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed88ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed88eb: call dword ptr [0xf0dc28] */
  esp -= 4; W32(esp, 0xed88f1u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* ed88f1: mov ebx, dword ptr [0xf0dbf8] */
  ebx = R32((uint32_t)(0xf0dbf8u));
/* ed88f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed88fa: xor esi, esi */
  esi = 0;
/* ed88fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ed8900: /* ed8900: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed8903: jge 0xed891a */
  if ((sf == of)) goto L_ed891a;
L_ed8905: /* ed8905: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* ed8907: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* ed890a: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* ed890d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ed8910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8911: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed8912: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xed8914u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed8914: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed8917: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ed8918: jmp 0xed8900 */
  goto L_ed8900;
L_ed891a: /* ed891a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_ed891d: /* ed891d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ed8920: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed8921: mov eax, esi */
  eax = esi;
/* ed8923: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8924: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed892b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed892c: mov esp, ebp */
  esp = ebp;
/* ed892e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed892f: ret  */
  esp += 4; SPILL(); return;
}

void f_ed8930(void) {
  LOAD_REGS();
L_ed8930: /* ed8930: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ed8933: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ed8938: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* ed893b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed893c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ed893f: call 0xeec520 */
  esp -= 4; W32(esp, 0xed8944u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ed8944(); return;
}

void f_ed8944(void) {
  LOAD_REGS();
L_ed8944: /* ed8944: push 0xef5454 */
  { uint32_t v = 0xef5454u; esp -= 4; W32(esp, v); }
/* ed8949: push 0xf02d78 */
  { uint32_t v = 0xf02d78u; esp -= 4; W32(esp, v); }
/* ed894e: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xed8954u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ed8954: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed8957: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed8959: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed895b: call 0xeec520 */
  esp -= 4; W32(esp, 0xed8960u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ed8960: guest_badaddr(0xed8960); return;
}

void f_ed89c0(void) {
  LOAD_REGS();
L_ed89c0: /* ed89c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed89c1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ed89c5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ed89c7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed89c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed89c9: mov esi, dword ptr [0xf0dba4] */
  esi = R32((uint32_t)(0xf0dba4u));
/* ed89cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed89d0: mov ebp, ecx */
  ebp = ecx;
/* ed89d2: jge 0xed89e8 */
  if ((sf == of)) goto L_ed89e8;
L_ed89d4: /* ed89d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* ed89d9: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ed89de: push 0xf02f80 */
  { uint32_t v = 0xf02f80u; esp -= 4; W32(esp, v); }
/* ed89e3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xed89e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed89e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ed89e8: /* ed89e8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed89eb: jle 0xed8a01 */
  if ((zf || sf != of)) goto L_ed8a01;
L_ed89ed: /* ed89ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* ed89f2: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ed89f7: push 0xf02f6c */
  { uint32_t v = 0xf02f6cu; esp -= 4; W32(esp, v); }
/* ed89fc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xed89feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed89fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ed8a01: /* ed8a01: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ed8a05: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* ed8a08: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed8a0b: jle 0xed8a21 */
  if ((zf || sf != of)) goto L_ed8a21;
L_ed8a0d: /* ed8a0d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* ed8a12: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ed8a17: push 0xf02f50 */
  { uint32_t v = 0xf02f50u; esp -= 4; W32(esp, v); }
/* ed8a1c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xed8a1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed8a1e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ed8a21: /* ed8a21: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed8a23: jge 0xed8a40 */
  if ((sf == of)) goto L_ed8a40;
L_ed8a25: /* ed8a25: mov esi, ebx */
  esi = ebx;
/* ed8a27: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* ed8a2a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ed8a2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ed8a30: /* ed8a30: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ed8a33: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed8a35: call 0xed1451 */
  esp -= 4; W32(esp, 0xed8a3au); SPILL(); f_ed1451(); if (g_unwind) return; RELOAD();
/* ed8a3a: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ed8a3d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ed8a3e: jne 0xed8a30 */
  if (!zf) goto L_ed8a30;
L_ed8a40: /* ed8a40: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ed8a44: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ed8a46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed8a47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed8a48: mov ecx, ebp */
  ecx = ebp;
/* ed8a4a: call dword ptr [0xf0dc30] */
  esp -= 4; W32(esp, 0xed8a50u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* ed8a50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed8a51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8a52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed8a53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed8a54: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ed8a90(void) {
  LOAD_REGS();
L_ed8a90: /* ed8a90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8a91: mov esi, ecx */
  esi = ecx;
/* ed8a93: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ed8a96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed8a97: xor edi, edi */
  edi = 0;
/* ed8a99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ed8a9b: jle 0xed8ab5 */
  if ((zf || sf != of)) goto L_ed8ab5;
L_ed8a9d: /* ed8a9d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed8a9e: xor ebx, ebx */
  ebx = 0;
L_ed8aa0: /* ed8aa0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ed8aa2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed8aa4: call 0xed1451 */
  esp -= 4; W32(esp, 0xed8aa9u); SPILL(); f_ed1451(); if (g_unwind) return; RELOAD();
/* ed8aa9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ed8aac: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ed8aad: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ed8ab0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed8ab2: jl 0xed8aa0 */
  if ((sf != of)) goto L_ed8aa0;
L_ed8ab4: /* ed8ab4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ed8ab5: /* ed8ab5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ed8ab9: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ed8abb: mov ecx, esi */
  ecx = esi;
/* ed8abd: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* ed8ac4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ed8ac7: call dword ptr [0xf0dc24] */
  esp -= 4; W32(esp, 0xed8acdu); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* ed8acd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed8ace: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8acf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed8b00(void) {
  LOAD_REGS();
L_ed8b00: /* ed8b00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed8b01: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ed8b05: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ed8b07: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed8b08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8b09: mov esi, dword ptr [0xf0dba4] */
  esi = R32((uint32_t)(0xf0dba4u));
/* ed8b0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed8b10: mov ebp, ecx */
  ebp = ecx;
/* ed8b12: jge 0xed8b28 */
  if ((sf == of)) goto L_ed8b28;
L_ed8b14: /* ed8b14: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* ed8b19: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ed8b1e: push 0xf02f80 */
  { uint32_t v = 0xf02f80u; esp -= 4; W32(esp, v); }
/* ed8b23: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xed8b25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed8b25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ed8b28: /* ed8b28: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed8b2b: jle 0xed8b41 */
  if ((zf || sf != of)) goto L_ed8b41;
L_ed8b2d: /* ed8b2d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* ed8b32: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ed8b37: push 0xf02f6c */
  { uint32_t v = 0xf02f6cu; esp -= 4; W32(esp, v); }
/* ed8b3c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xed8b3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed8b3e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ed8b41: /* ed8b41: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ed8b45: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* ed8b48: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed8b4b: jle 0xed8b61 */
  if ((zf || sf != of)) goto L_ed8b61;
L_ed8b4d: /* ed8b4d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* ed8b52: push 0xf02f90 */
  { uint32_t v = 0xf02f90u; esp -= 4; W32(esp, v); }
/* ed8b57: push 0xf02f50 */
  { uint32_t v = 0xf02f50u; esp -= 4; W32(esp, v); }
/* ed8b5c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xed8b5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ed8b5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ed8b61: /* ed8b61: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed8b63: jge 0xed8b80 */
  if ((sf == of)) goto L_ed8b80;
L_ed8b65: /* ed8b65: mov esi, ebx */
  esi = ebx;
/* ed8b67: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* ed8b6a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ed8b6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ed8b70: /* ed8b70: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ed8b73: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed8b75: call 0xed16e0 */
  esp -= 4; W32(esp, 0xed8b7au); SPILL(); f_ed16e0(); if (g_unwind) return; RELOAD();
/* ed8b7a: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ed8b7d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ed8b7e: jne 0xed8b70 */
  if (!zf) goto L_ed8b70;
L_ed8b80: /* ed8b80: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ed8b84: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* ed8b86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed8b87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed8b88: mov ecx, ebp */
  ecx = ebp;
/* ed8b8a: call dword ptr [0xf0dc30] */
  esp -= 4; W32(esp, 0xed8b90u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* ed8b90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed8b91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8b92: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed8b93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed8b94: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ed8bd0(void) {
  LOAD_REGS();
L_ed8bd0: /* ed8bd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed8bd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8bd2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed8bd3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* ed8bd7: mov esi, ecx */
  esi = ecx;
/* ed8bd9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ed8bdb: je 0xed8c1d */
  if (zf) goto L_ed8c1d;
L_ed8bdd: /* ed8bdd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ed8be0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8be1: call 0xed15af */
  esp -= 4; W32(esp, 0xed8be6u); SPILL(); f_ed15af(); if (g_unwind) return; RELOAD();
/* ed8be6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ed8be9: xor ebx, ebx */
  ebx = 0;
/* ed8beb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ed8bed: jle 0xed8c1d */
  if ((zf || sf != of)) goto L_ed8c1d;
L_ed8bef: /* ed8bef: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed8bf0: xor ebp, ebp */
  ebp = 0;
L_ed8bf2: /* ed8bf2: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* ed8bf4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ed8bf6: mov ecx, esi */
  ecx = esi;
/* ed8bf8: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xed8bfeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* ed8bfe: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* ed8c01: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* ed8c03: je 0xed8c11 */
  if (zf) goto L_ed8c11;
L_ed8c05: /* ed8c05: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ed8c07: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed8c09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed8c0a: mov ecx, eax */
  ecx = eax;
/* ed8c0c: call 0xed147e */
  esp -= 4; W32(esp, 0xed8c11u); SPILL(); f_ed147e(); if (g_unwind) return; RELOAD();
L_ed8c11: /* ed8c11: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ed8c14: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ed8c15: add ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ed8c18: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed8c1a: jl 0xed8bf2 */
  if ((sf != of)) goto L_ed8bf2;
L_ed8c1c: /* ed8c1c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_ed8c1d: /* ed8c1d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed8c1e: mov eax, esi */
  eax = esi;
/* ed8c20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8c21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed8c22: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed8c50(void) {
  LOAD_REGS();
L_ed8c50: /* ed8c50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed8c52: push 0xeee164 */
  { uint32_t v = 0xeee164u; esp -= 4; W32(esp, v); }
/* ed8c57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed8c5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8c5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed8c65: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed8c68: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed8c69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8c6a: mov esi, ecx */
  esi = ecx;
/* ed8c6c: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* ed8c70: call dword ptr [0xf0df98] */
  esp -= 4; W32(esp, 0xed8c76u); SPILL(); f_6cc9cd(); if (g_unwind) return; /* Engine!??0UDownload@@IAE@XZ */ RELOAD();
/* ed8c76: xor ebx, ebx */
  ebx = 0;
/* ed8c78: lea ecx, [esi + 0x454] */
  ecx = (uint32_t)(esi + 0x454u);
/* ed8c7e: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* ed8c82: mov dword ptr [esi], 0xef5470 */
  W32((uint32_t)(esi), 0xef5470u);
/* ed8c88: call dword ptr [0xf0dbe8] */
  esp -= 4; W32(esp, 0xed8c8eu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* ed8c8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed8c8f: lea ecx, [esi + 0x490] */
  ecx = (uint32_t)(esi + 0x490u);
/* ed8c95: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* ed8c9a: call dword ptr [0xf0df94] */
  esp -= 4; W32(esp, 0xed8ca0u); SPILL(); f_6c321a(); if (g_unwind) return; /* Engine!??0FURL@@QAE@PBG@Z */ RELOAD();
/* ed8ca0: lea ecx, [esi + 0x4d4] */
  ecx = (uint32_t)(esi + 0x4d4u);
/* ed8ca6: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* ed8cab: call dword ptr [0xf0df90] */
  esp -= 4; W32(esp, 0xed8cb1u); SPILL(); f_6c5d85(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@XZ */ RELOAD();
/* ed8cb1: mov dword ptr [esi + 0x4e0], ebx */
  W32((uint32_t)(esi + 0x4e0u), ebx);
/* ed8cb7: mov dword ptr [esi + 0x4e4], ebx */
  W32((uint32_t)(esi + 0x4e4u), ebx);
/* ed8cbd: mov dword ptr [esi + 0x4e8], ebx */
  W32((uint32_t)(esi + 0x4e8u), ebx);
/* ed8cc3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ed8cc7: mov dword ptr [esi + 0x48c], ebx */
  W32((uint32_t)(esi + 0x48cu), ebx);
/* ed8ccd: mov byte ptr [esi + 0x464], bl */
  W8((uint32_t)(esi + 0x464u), (ebx & 0xffu));
/* ed8cd3: mov dword ptr [esi + 0x488], 0xffffffff */
  W32((uint32_t)(esi + 0x488u), 0xffffffffu);
/* ed8cdd: mov eax, esi */
  eax = esi;
/* ed8cdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8ce0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed8ce1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed8ce8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed8ceb: ret  */
  esp += 4; SPILL(); return;
}

void f_ed8d20(void) {
  LOAD_REGS();
L_ed8d20: /* ed8d20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8d21: mov esi, ecx */
  esi = ecx;
/* ed8d23: call 0xed1361 */
  esp -= 4; W32(esp, 0xed8d28u); SPILL(); f_ed1361(); if (g_unwind) return; RELOAD();
/* ed8d28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed8d2d: je 0xed8d3e */
  if (zf) goto L_ed8d3e;
L_ed8d2f: /* ed8d2f: push 0x4f4 */
  { uint32_t v = 0x4f4u; esp -= 4; W32(esp, v); }
/* ed8d34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8d35: call dword ptr [0xf0db20] */
  esp -= 4; W32(esp, 0xed8d3bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* ed8d3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ed8d3e: /* ed8d3e: mov eax, esi */
  eax = esi;
/* ed8d40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8d41: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed8d60(void) {
  LOAD_REGS();
L_ed8d60: /* ed8d60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed8d62: push 0xeee1d4 */
  { uint32_t v = 0xeee1d4u; esp -= 4; W32(esp, v); }
/* ed8d67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed8d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8d6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed8d75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed8d76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8d77: mov esi, ecx */
  esi = ecx;
/* ed8d79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ed8d7d: mov dword ptr [esi], 0xef5470 */
  W32((uint32_t)(esi), 0xef5470u);
/* ed8d83: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* ed8d8b: call dword ptr [0xf0dbe0] */
  esp -= 4; W32(esp, 0xed8d91u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* ed8d91: lea ecx, [esi + 0x4e0] */
  ecx = (uint32_t)(esi + 0x4e0u);
/* ed8d97: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* ed8d9c: call 0xed1569 */
  esp -= 4; W32(esp, 0xed8da1u); SPILL(); f_ed1569(); if (g_unwind) return; RELOAD();
/* ed8da1: lea ecx, [esi + 0x4d4] */
  ecx = (uint32_t)(esi + 0x4d4u);
/* ed8da7: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* ed8dac: call dword ptr [0xf0ddc8] */
  esp -= 4; W32(esp, 0xed8db2u); SPILL(); f_6c3e13(); if (g_unwind) return; /* Engine!??1?$TArray@E@@QAE@XZ */ RELOAD();
/* ed8db2: lea ecx, [esi + 0x490] */
  ecx = (uint32_t)(esi + 0x490u);
/* ed8db8: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* ed8dbd: call dword ptr [0xf0df60] */
  esp -= 4; W32(esp, 0xed8dc3u); SPILL(); f_6ccd7e(); if (g_unwind) return; /* Engine!??1FURL@@QAE@XZ */ RELOAD();
/* ed8dc3: lea ecx, [esi + 0x454] */
  ecx = (uint32_t)(esi + 0x454u);
/* ed8dc9: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* ed8dce: call dword ptr [0xf0dbe4] */
  esp -= 4; W32(esp, 0xed8dd4u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* ed8dd4: mov ecx, esi */
  ecx = esi;
/* ed8dd6: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* ed8dde: call dword ptr [0xf0df8c] */
  esp -= 4; W32(esp, 0xed8de4u); SPILL(); f_6c907a(); if (g_unwind) return; /* Engine!??1UDownload@@UAE@XZ */ RELOAD();
/* ed8de4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ed8de8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8de9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed8df0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed8df3: ret  */
  esp += 4; SPILL(); return;
}

void f_ed8e30(void) {
  LOAD_REGS();
L_ed8e30: /* ed8e30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed8e31: mov ebp, esp */
  ebp = esp;
/* ed8e33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed8e35: push 0xeee200 */
  { uint32_t v = 0xeee200u; esp -= 4; W32(esp, v); }
/* ed8e3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed8e40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8e41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed8e48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed8e4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed8e4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8e4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed8e4e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ed8e51: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ed8e54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed8e55: mov esi, ecx */
  esi = ecx;
/* ed8e57: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ed8e5e: call dword ptr [0xf0dfa0] */
  esp -= 4; W32(esp, 0xed8e64u); SPILL(); f_6c7130(); if (g_unwind) return; /* Engine!?Serialize@UDownload@@UAEXAAVFArchive@@@Z */ RELOAD();
/* ed8e64: lea eax, [esi + 0x4d4] */
  eax = (uint32_t)(esi + 0x4d4u);
/* ed8e6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8e6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed8e6c: call 0xed1500 */
  esp -= 4; W32(esp, 0xed8e71u); SPILL(); f_ed1500(); if (g_unwind) return; RELOAD();
/* ed8e71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed8e74: lea ecx, [esi + 0x4e0] */
  ecx = (uint32_t)(esi + 0x4e0u);
/* ed8e7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed8e7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8e7c: call 0xed18ac */
  esp -= 4; W32(esp, 0xed8e81u); SPILL(); f_ed18ac(); if (g_unwind) return; RELOAD();
/* ed8e81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed8e84: add esi, 0x490 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x490u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ed8e8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8e8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8e8c: call dword ptr [0xf0df9c] */
  esp -= 4; W32(esp, 0xed8e92u); SPILL(); f_6c2257(); if (g_unwind) return; /* Engine!??6@YAAAVFArchive@@AAV0@AAVFURL@@@Z */ RELOAD();
/* ed8e92: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ed8e95: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed8e98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed8e99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8e9a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed8ea1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed8ea2: mov esp, ebp */
  esp = ebp;
/* ed8ea4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed8ea5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed8ea8(void) {
  LOAD_REGS();
L_ed8ea8: /* ed8ea8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ed8eab: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* ed8eb0: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ed8eb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8eb4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* ed8eb7: call 0xeec520 */
  esp -= 4; W32(esp, 0xed8ebcu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_ed8ebc(); return;
}

void f_ed8ebc(void) {
  LOAD_REGS();
L_ed8ebc: /* ed8ebc: push 0xef550c */
  { uint32_t v = 0xef550cu; esp -= 4; W32(esp, v); }
/* ed8ec1: push 0xf02638 */
  { uint32_t v = 0xf02638u; esp -= 4; W32(esp, v); }
/* ed8ec6: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xed8eccu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* ed8ecc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed8ecf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed8ed1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed8ed3: call 0xeec520 */
  esp -= 4; W32(esp, 0xed8ed8u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_ed8ed8: guest_badaddr(0xed8ed8); return;
}

void f_ed8f10(void) {
  LOAD_REGS();
L_ed8f10: /* ed8f10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed8f12: push 0xeee219 */
  { uint32_t v = 0xeee219u; esp -= 4; W32(esp, v); }
/* ed8f17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed8f1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8f1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed8f25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed8f26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8f27: mov esi, ecx */
  esi = ecx;
/* ed8f29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ed8f2d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ed8f30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8f31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed8f33: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ed8f3b: call 0xed18cf */
  esp -= 4; W32(esp, 0xed8f40u); SPILL(); f_ed18cf(); if (g_unwind) return; RELOAD();
/* ed8f40: mov ecx, esi */
  ecx = esi;
/* ed8f42: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* ed8f4a: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xed8f50u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* ed8f50: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ed8f54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8f55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed8f5c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed8f5f: ret  */
  esp += 4; SPILL(); return;
}

void f_ed8f80(void) {
  LOAD_REGS();
L_ed8f80: /* ed8f80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed8f81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed8f82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed8f83: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* ed8f87: mov esi, ecx */
  esi = ecx;
/* ed8f89: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ed8f8b: je 0xed8fcf */
  if (zf) goto L_ed8fcf;
L_ed8f8d: /* ed8f8d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ed8f90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed8f91: call 0xed1244 */
  esp -= 4; W32(esp, 0xed8f96u); SPILL(); f_ed1244(); if (g_unwind) return; RELOAD();
/* ed8f96: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ed8f99: xor ebx, ebx */
  ebx = 0;
/* ed8f9b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ed8f9d: jle 0xed8fcf */
  if ((zf || sf != of)) goto L_ed8fcf;
L_ed8f9f: /* ed8f9f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed8fa0: xor ebp, ebp */
  ebp = 0;
L_ed8fa2: /* ed8fa2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ed8fa4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ed8fa6: mov ecx, esi */
  ecx = esi;
/* ed8fa8: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xed8faeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* ed8fae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ed8fb0: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ed8fb3: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* ed8fb5: je 0xed8fc3 */
  if (zf) goto L_ed8fc3;
L_ed8fb7: /* ed8fb7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ed8fb9: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed8fbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed8fbc: mov ecx, eax */
  ecx = eax;
/* ed8fbe: call 0xed19a1 */
  esp -= 4; W32(esp, 0xed8fc3u); SPILL(); f_ed19a1(); if (g_unwind) return; RELOAD();
L_ed8fc3: /* ed8fc3: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ed8fc6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ed8fc7: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ed8fca: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed8fcc: jl 0xed8fa2 */
  if ((sf != of)) goto L_ed8fa2;
L_ed8fce: /* ed8fce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_ed8fcf: /* ed8fcf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed8fd0: mov eax, esi */
  eax = esi;
/* ed8fd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed8fd3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed8fd4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed9000(void) {
  LOAD_REGS();
L_ed9000: /* ed9000: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ed9004: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9005: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed9006: mov esi, ecx */
  esi = ecx;
/* ed9008: call 0xed18b6 */
  esp -= 4; W32(esp, 0xed900du); SPILL(); f_ed18b6(); if (g_unwind) return; RELOAD();
/* ed900d: mov eax, esi */
  eax = esi;
/* ed900f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed9010: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed9030(void) {
  LOAD_REGS();
L_ed9030: /* ed9030: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed9032: push 0xeee239 */
  { uint32_t v = 0xeee239u; esp -= 4; W32(esp, v); }
/* ed9037: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed903d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed903e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed9045: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed9046: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9047: mov esi, ecx */
  esi = ecx;
/* ed9049: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ed904d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ed9050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed9051: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ed9053: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ed905b: call 0xed18fc */
  esp -= 4; W32(esp, 0xed9060u); SPILL(); f_ed18fc(); if (g_unwind) return; RELOAD();
/* ed9060: mov ecx, esi */
  ecx = esi;
/* ed9062: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* ed906a: call dword ptr [0xf0dc2c] */
  esp -= 4; W32(esp, 0xed9070u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* ed9070: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ed9074: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed9075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed907c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed907f: ret  */
  esp += 4; SPILL(); return;
}

void f_ed90a0(void) {
  LOAD_REGS();
L_ed90a0: /* ed90a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed90a2: push 0xeee258 */
  { uint32_t v = 0xeee258u; esp -= 4; W32(esp, v); }
/* ed90a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed90ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed90ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed90b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed90b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed90b7: mov esi, ecx */
  esi = ecx;
/* ed90b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ed90bd: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* ed90c0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ed90c8: call 0xed1690 */
  esp -= 4; W32(esp, 0xed90cdu); SPILL(); f_ed1690(); if (g_unwind) return; RELOAD();
/* ed90cd: mov eax, dword ptr [0xf0db94] */
  eax = R32((uint32_t)(0xf0db94u));
/* ed90d2: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ed90d6: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ed90d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed90d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed90e0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed90e3: ret  */
  esp += 4; SPILL(); return;
}

void f_ed9110(void) {
  LOAD_REGS();
L_ed9110: /* ed9110: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed9112: push 0xeee278 */
  { uint32_t v = 0xeee278u; esp -= 4; W32(esp, v); }
/* ed9117: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed911d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed911e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed9125: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed9126: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9127: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed9128: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ed912c: mov esi, ecx */
  esi = ecx;
/* ed912e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed912f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ed9133: call dword ptr [0xf0db98] */
  esp -= 4; W32(esp, 0xed9139u); SPILL(); f_4e2973(); if (g_unwind) return; /* Core!??0FArchive@@QAE@ABV0@@Z */ RELOAD();
/* ed9139: mov dword ptr [esi], 0xef43e0 */
  W32((uint32_t)(esi), 0xef43e0u);
/* ed913f: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* ed9142: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* ed9145: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* ed9148: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed9149: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* ed914c: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ed9154: mov dword ptr [esi], 0xef5548 */
  W32((uint32_t)(esi), 0xef5548u);
/* ed915a: call 0xed1140 */
  esp -= 4; W32(esp, 0xed915fu); SPILL(); f_ed1140(); if (g_unwind) return; RELOAD();
/* ed915f: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* ed9162: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* ed9166: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* ed9169: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed916a: mov eax, esi */
  eax = esi;
/* ed916c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed916d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed9174: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed9177: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed91a0(void) {
  LOAD_REGS();
L_ed91a0: /* ed91a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed91a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed91a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* ed91a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed91a7: mov esi, ecx */
  esi = ecx;
/* ed91a9: call dword ptr [0xf0db9c] */
  esp -= 4; W32(esp, 0xed91afu); SPILL(); f_4e2b71(); if (g_unwind) return; /* Core!??4FArchive@@QAEAAV0@ABV0@@Z */ RELOAD();
/* ed91af: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* ed91b2: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* ed91b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed91b6: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* ed91b9: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* ed91bc: call 0xed169a */
  esp -= 4; W32(esp, 0xed91c1u); SPILL(); f_ed169a(); if (g_unwind) return; RELOAD();
/* ed91c1: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* ed91c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed91c5: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* ed91c8: mov eax, esi */
  eax = esi;
/* ed91ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed91cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed91e0(void) {
  LOAD_REGS();
L_ed91e0: /* ed91e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed91e1: mov esi, ecx */
  esi = ecx;
/* ed91e3: call 0xed15ff */
  esp -= 4; W32(esp, 0xed91e8u); SPILL(); f_ed15ff(); if (g_unwind) return; RELOAD();
/* ed91e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed91ed: je 0xed91fc */
  if (zf) goto L_ed91fc;
L_ed91ef: /* ed91ef: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ed91f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ed91f6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ed91f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed91f9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xed91fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ed91fc: /* ed91fc: mov eax, esi */
  eax = esi;
/* ed91fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed91ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed9220(void) {
  LOAD_REGS();
L_ed9220: /* ed9220: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed9221: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* ed9225: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed9228: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9229: mov esi, ecx */
  esi = ecx;
/* ed922b: je 0xed925d */
  if (zf) goto L_ed925d;
L_ed922d: /* ed922d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* ed9230: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed9231: push 0xed15ff */
  { uint32_t v = 0xed15ffu; esp -= 4; W32(esp, v); }
/* ed9236: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* ed9239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed923a: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* ed923c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed923d: call 0xeec596 */
  esp -= 4; W32(esp, 0xed9242u); SPILL(); f_eec596(); if (g_unwind) return; RELOAD();
/* ed9242: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed9245: je 0xed9255 */
  if (zf) goto L_ed9255;
L_ed9247: /* ed9247: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* ed924d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ed924f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ed9251: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed9252: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xed9255u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ed9255: /* ed9255: mov eax, edi */
  eax = edi;
/* ed9257: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed9258: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed9259: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed925a: ret 4 */
  esp += 8; SPILL(); return;
L_ed925d: /* ed925d: mov ecx, esi */
  ecx = esi;
/* ed925f: call 0xed15ff */
  esp -= 4; W32(esp, 0xed9264u); SPILL(); f_ed15ff(); if (g_unwind) return; RELOAD();
/* ed9264: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed9267: je 0xed9276 */
  if (zf) goto L_ed9276;
L_ed9269: /* ed9269: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* ed926e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ed9270: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ed9272: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9273: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xed9276u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ed9276: /* ed9276: mov eax, esi */
  eax = esi;
/* ed9278: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed9279: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed927a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed92a0(void) {
  LOAD_REGS();
L_ed92a0: /* ed92a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed92a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed92a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* ed92a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed92a7: mov esi, ecx */
  esi = ecx;
/* ed92a9: call 0xed11c7 */
  esp -= 4; W32(esp, 0xed92aeu); SPILL(); f_ed11c7(); if (g_unwind) return; RELOAD();
/* ed92ae: mov eax, dword ptr [edi + 0x3b0] */
  eax = R32((uint32_t)(edi + 0x3b0u));
/* ed92b4: lea ecx, [edi + 0x3b4] */
  ecx = (uint32_t)(edi + 0x3b4u);
/* ed92ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed92bb: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* ed92c1: mov dword ptr [esi + 0x3b0], eax */
  W32((uint32_t)(esi + 0x3b0u), eax);
/* ed92c7: call 0xed18b6 */
  esp -= 4; W32(esp, 0xed92ccu); SPILL(); f_ed18b6(); if (g_unwind) return; RELOAD();
/* ed92cc: mov edx, dword ptr [edi + 0x3c0] */
  edx = R32((uint32_t)(edi + 0x3c0u));
/* ed92d2: mov dword ptr [esi + 0x3c0], edx */
  W32((uint32_t)(esi + 0x3c0u), edx);
/* ed92d8: mov eax, dword ptr [edi + 0x3c4] */
  eax = R32((uint32_t)(edi + 0x3c4u));
/* ed92de: mov dword ptr [esi + 0x3c4], eax */
  W32((uint32_t)(esi + 0x3c4u), eax);
/* ed92e4: mov ecx, dword ptr [edi + 0x3c8] */
  ecx = R32((uint32_t)(edi + 0x3c8u));
/* ed92ea: mov dword ptr [esi + 0x3c8], ecx */
  W32((uint32_t)(esi + 0x3c8u), ecx);
/* ed92f0: mov edx, dword ptr [edi + 0x3cc] */
  edx = R32((uint32_t)(edi + 0x3ccu));
/* ed92f6: mov dword ptr [esi + 0x3cc], edx */
  W32((uint32_t)(esi + 0x3ccu), edx);
/* ed92fc: mov eax, dword ptr [edi + 0x3d0] */
  eax = R32((uint32_t)(edi + 0x3d0u));
/* ed9302: mov dword ptr [esi + 0x3d0], eax */
  W32((uint32_t)(esi + 0x3d0u), eax);
/* ed9308: mov ecx, dword ptr [edi + 0x3d4] */
  ecx = R32((uint32_t)(edi + 0x3d4u));
/* ed930e: mov dword ptr [esi + 0x3d4], ecx */
  W32((uint32_t)(esi + 0x3d4u), ecx);
/* ed9314: mov edx, dword ptr [edi + 0x3d8] */
  edx = R32((uint32_t)(edi + 0x3d8u));
/* ed931a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed931b: mov dword ptr [esi + 0x3d8], edx */
  W32((uint32_t)(esi + 0x3d8u), edx);
/* ed9321: mov eax, esi */
  eax = esi;
/* ed9323: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed9324: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed9360(void) {
  LOAD_REGS();
L_ed9360: /* ed9360: jmp 0xed17a3 */
  SPILL(); f_ed17a3(); return;
}

void f_ed9380(void) {
  LOAD_REGS();
L_ed9380: /* ed9380: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ed9384: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed9386: mov esi, ecx */
  esi = ecx;
/* ed9388: call 0xed141f */
  esp -= 4; W32(esp, 0xed938du); SPILL(); f_ed141f(); if (g_unwind) return; RELOAD();
/* ed938d: mov eax, esi */
  eax = esi;
/* ed938f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed9390: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed93b0(void) {
  LOAD_REGS();
L_ed93b0: /* ed93b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ed93b4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed93b6: je 0xed93bd */
  if (zf) goto L_ed93bd;
L_ed93b8: /* ed93b8: jmp 0xed12a3 */
  SPILL(); f_ed12a3(); return;
L_ed93bd: /* ed93bd: ret  */
  esp += 4; SPILL(); return;
}

void f_ed93d0(void) {
  LOAD_REGS();
L_ed93d0: /* ed93d0: mov eax, ecx */
  eax = ecx;
/* ed93d2: ret  */
  esp += 4; SPILL(); return;
}

void f_ed93f0(void) {
  LOAD_REGS();
L_ed93f0: /* ed93f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed93f2: push 0xeee2a6 */
  { uint32_t v = 0xeee2a6u; esp -= 4; W32(esp, v); }
/* ed93f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed93fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed93fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed9405: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed9406: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9407: mov esi, ecx */
  esi = ecx;
/* ed9409: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ed940d: mov dword ptr [esi], 0xef55c0 */
  W32((uint32_t)(esi), 0xef55c0u);
/* ed9413: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* ed941b: call dword ptr [0xf0dbe0] */
  esp -= 4; W32(esp, 0xed9421u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* ed9421: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* ed9427: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* ed942c: call 0xed17a3 */
  esp -= 4; W32(esp, 0xed9431u); SPILL(); f_ed17a3(); if (g_unwind) return; RELOAD();
/* ed9431: mov ecx, esi */
  ecx = esi;
/* ed9433: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* ed943b: call 0xed1302 */
  esp -= 4; W32(esp, 0xed9440u); SPILL(); f_ed1302(); if (g_unwind) return; RELOAD();
/* ed9440: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ed9444: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed9445: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed944c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed944f: ret  */
  esp += 4; SPILL(); return;
}

void f_ed9470(void) {
  LOAD_REGS();
L_ed9470: /* ed9470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9471: mov esi, ecx */
  esi = ecx;
/* ed9473: call 0xed1a05 */
  esp -= 4; W32(esp, 0xed9478u); SPILL(); f_ed1a05(); if (g_unwind) return; RELOAD();
/* ed9478: mov dword ptr [esi], 0xef55c0 */
  W32((uint32_t)(esi), 0xef55c0u);
/* ed947e: mov eax, esi */
  eax = esi;
/* ed9480: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed9481: ret  */
  esp += 4; SPILL(); return;
}

void f_ed94a0(void) {
  LOAD_REGS();
L_ed94a0: /* ed94a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* ed94a2: push 0xeee2c8 */
  { uint32_t v = 0xeee2c8u; esp -= 4; W32(esp, v); }
/* ed94a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* ed94ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed94ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* ed94b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed94b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed94b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed94b8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ed94bc: mov esi, ecx */
  esi = ecx;
/* ed94be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed94bf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ed94c3: call 0xed128f */
  esp -= 4; W32(esp, 0xed94c8u); SPILL(); f_ed128f(); if (g_unwind) return; RELOAD();
/* ed94c8: lea ecx, [edi + 0x3b4] */
  ecx = (uint32_t)(edi + 0x3b4u);
/* ed94ce: mov dword ptr [esi], 0xef55c0 */
  W32((uint32_t)(esi), 0xef55c0u);
/* ed94d4: mov eax, dword ptr [edi + 0x3b0] */
  eax = R32((uint32_t)(edi + 0x3b0u));
/* ed94da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed94db: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* ed94e1: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ed94e9: mov dword ptr [esi + 0x3b0], eax */
  W32((uint32_t)(esi + 0x3b0u), eax);
/* ed94ef: call 0xed141f */
  esp -= 4; W32(esp, 0xed94f4u); SPILL(); f_ed141f(); if (g_unwind) return; RELOAD();
/* ed94f4: mov edx, dword ptr [edi + 0x3c0] */
  edx = R32((uint32_t)(edi + 0x3c0u));
/* ed94fa: mov dword ptr [esi + 0x3c0], edx */
  W32((uint32_t)(esi + 0x3c0u), edx);
/* ed9500: mov eax, dword ptr [edi + 0x3c4] */
  eax = R32((uint32_t)(edi + 0x3c4u));
/* ed9506: mov dword ptr [esi + 0x3c4], eax */
  W32((uint32_t)(esi + 0x3c4u), eax);
/* ed950c: mov ecx, dword ptr [edi + 0x3c8] */
  ecx = R32((uint32_t)(edi + 0x3c8u));
/* ed9512: mov dword ptr [esi + 0x3c8], ecx */
  W32((uint32_t)(esi + 0x3c8u), ecx);
/* ed9518: mov edx, dword ptr [edi + 0x3cc] */
  edx = R32((uint32_t)(edi + 0x3ccu));
/* ed951e: mov dword ptr [esi + 0x3cc], edx */
  W32((uint32_t)(esi + 0x3ccu), edx);
/* ed9524: mov eax, dword ptr [edi + 0x3d0] */
  eax = R32((uint32_t)(edi + 0x3d0u));
/* ed952a: mov dword ptr [esi + 0x3d0], eax */
  W32((uint32_t)(esi + 0x3d0u), eax);
/* ed9530: mov ecx, dword ptr [edi + 0x3d4] */
  ecx = R32((uint32_t)(edi + 0x3d4u));
/* ed9536: mov dword ptr [esi + 0x3d4], ecx */
  W32((uint32_t)(esi + 0x3d4u), ecx);
/* ed953c: mov edx, dword ptr [edi + 0x3d8] */
  edx = R32((uint32_t)(edi + 0x3d8u));
/* ed9542: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* ed9546: mov dword ptr [esi + 0x3d8], edx */
  W32((uint32_t)(esi + 0x3d8u), edx);
/* ed954c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed954d: mov eax, esi */
  eax = esi;
/* ed954f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed9550: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ed9557: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed955a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed9590(void) {
  LOAD_REGS();
L_ed9590: /* ed9590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9591: mov esi, ecx */
  esi = ecx;
/* ed9593: call 0xed1758 */
  esp -= 4; W32(esp, 0xed9598u); SPILL(); f_ed1758(); if (g_unwind) return; RELOAD();
/* ed9598: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed959d: je 0xed95ae */
  if (zf) goto L_ed95ae;
L_ed959f: /* ed959f: push 0x3dc */
  { uint32_t v = 0x3dcu; esp -= 4; W32(esp, v); }
/* ed95a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed95a5: call dword ptr [0xf0db20] */
  esp -= 4; W32(esp, 0xed95abu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* ed95ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ed95ae: /* ed95ae: mov eax, esi */
  eax = esi;
/* ed95b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed95b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed95d0(void) {
  LOAD_REGS();
L_ed95d0: /* ed95d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed95d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* ed95d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed95d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed95d9: mov esi, ecx */
  esi = ecx;
/* ed95db: je 0xed9610 */
  if (zf) goto L_ed9610;
L_ed95dd: /* ed95dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* ed95e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed95e1: push 0xed1758 */
  { uint32_t v = 0xed1758u; esp -= 4; W32(esp, v); }
/* ed95e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* ed95e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed95ea: push 0x3dc */
  { uint32_t v = 0x3dcu; esp -= 4; W32(esp, v); }
/* ed95ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed95f0: call 0xeec596 */
  esp -= 4; W32(esp, 0xed95f5u); SPILL(); f_eec596(); if (g_unwind) return; RELOAD();
/* ed95f5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed95f8: je 0xed9608 */
  if (zf) goto L_ed9608;
L_ed95fa: /* ed95fa: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* ed9600: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ed9602: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ed9604: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed9605: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xed9608u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ed9608: /* ed9608: mov eax, edi */
  eax = edi;
/* ed960a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed960b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed960c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed960d: ret 4 */
  esp += 8; SPILL(); return;
L_ed9610: /* ed9610: mov ecx, esi */
  ecx = esi;
/* ed9612: call 0xed1758 */
  esp -= 4; W32(esp, 0xed9617u); SPILL(); f_ed1758(); if (g_unwind) return; RELOAD();
/* ed9617: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed961a: je 0xed962b */
  if (zf) goto L_ed962b;
L_ed961c: /* ed961c: push 0x3dc */
  { uint32_t v = 0x3dcu; esp -= 4; W32(esp, v); }
/* ed9621: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9622: call dword ptr [0xf0db20] */
  esp -= 4; W32(esp, 0xed9628u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* ed9628: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ed962b: /* ed962b: mov eax, esi */
  eax = esi;
/* ed962d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed962e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed962f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ed9660(void) {
  LOAD_REGS();
L_ed9660: /* ed9660: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ed9664: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ed9666: je 0xed966d */
  if (zf) goto L_ed966d;
L_ed9668: /* ed9668: jmp 0xed1929 */
  SPILL(); f_ed1929(); return;
L_ed966d: /* ed966d: ret  */
  esp += 4; SPILL(); return;
}

void f_ed9680(void) {
  LOAD_REGS();
L_ed9680: /* ed9680: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed9681: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9682: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* ed9686: push 0xf02fe8 */
  { uint32_t v = 0xf02fe8u; esp -= 4; W32(esp, v); }
/* ed968b: mov ecx, esi */
  ecx = esi;
/* ed968d: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* ed9695: call dword ptr [0xf0dc04] */
  esp -= 4; W32(esp, 0xed969bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* ed969b: mov eax, esi */
  eax = esi;
/* ed969d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed969e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ed969f: ret  */
  esp += 4; SPILL(); return;
}

void f_ed96b0(void) {
  LOAD_REGS();
L_ed96b0: /* ed96b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ed96b4: mov byte ptr [eax], 0x4c */
  W8((uint32_t)(eax), 0x4cu);
/* ed96b7: mov byte ptr [eax + 1], 0x77 */
  W8((uint32_t)(eax + 0x1u), 0x77u);
/* ed96bb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ed96bc: mov byte ptr [eax + 1], 0x37 */
  W8((uint32_t)(eax + 0x1u), 0x37u);
/* ed96c0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ed96c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ed96c2: mov byte ptr [eax], 0x78 */
  W8((uint32_t)(eax), 0x78u);
/* ed96c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ed96c6: mov byte ptr [eax], 0x30 */
  W8((uint32_t)(eax), 0x30u);
/* ed96c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ed96ca: mov byte ptr [eax], 0x52 */
  W8((uint32_t)(eax), 0x52u);
/* ed96cd: mov byte ptr [eax + 1], 0 */
  W8((uint32_t)(eax + 0x1u), 0x0u);
/* ed96d1: ret  */
  esp += 4; SPILL(); return;
}

void f_ed96f0(void) {
  LOAD_REGS();
L_ed96f0: /* ed96f0: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* ed96f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed96f3: mov bl, byte ptr [eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ed96f5: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* ed96f7: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* ed96f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed96fa: ret  */
  esp += 4; SPILL(); return;
}

void f_ed9710(void) {
  LOAD_REGS();
L_ed9710: /* ed9710: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed9711: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed9712: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9713: xor ecx, ecx */
  ecx = 0;
/* ed9715: xor eax, eax */
  eax = 0;
/* ed9717: mov esi, edi */
  esi = edi;
/* ed9719: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ed9720: /* ed9720: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* ed9722: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ed9723: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ed9724: cmp ax, 0x100 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* ed9728: jl 0xed9720 */
  if ((sf != of)) goto L_ed9720;
L_ed972a: /* ed972a: mov byte ptr [edi + 0x100], cl */
  W8((uint32_t)(edi + 0x100u), (ecx & 0xffu));
/* ed9730: mov byte ptr [edi + 0x101], cl */
  W8((uint32_t)(edi + 0x101u), (ecx & 0xffu));
/* ed9736: xor dl, dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* ed9738: mov esi, edi */
  esi = edi;
/* ed973a: mov ebp, 0x100 */
  ebp = 0x100u;
/* ed973f: nop  */
L_ed9740: /* ed9740: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ed9744: movzx ebx, byte ptr [esi] */
  ebx = (uint32_t)(R8((uint32_t)(esi)));
/* ed9747: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* ed974a: movzx eax, byte ptr [edx + eax] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax)));
/* ed974e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ed9750: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ed9752: mov eax, ebx */
  eax = ebx;
/* ed9754: and eax, 0x800000ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000ffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* ed9759: jns 0xed9762 */
  if (!sf) goto L_ed9762;
L_ed975b: /* ed975b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ed975c: or eax, 0xffffff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff00u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ed9761: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_ed9762: /* ed9762: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* ed9765: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* ed9767: mov bl, byte ptr [ecx + edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edi))) & 0xffu);
/* ed976a: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* ed976c: mov byte ptr [ecx + edi], al */
  W8((uint32_t)(ecx + edi), (eax & 0xffu));
/* ed976f: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* ed9772: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ed9773: idiv dword ptr [esp + 0x14] */
  { int32_t d = (int32_t)R32((uint32_t)(esp + 0x14u)); if (!d) d = (int32_t)guest_divzero(0xed9773);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ed9777: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ed9778: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* ed9779: jne 0xed9740 */
  if (!zf) goto L_ed9740;
L_ed977b: /* ed977b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed977c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed977d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed977e: ret  */
  esp += 4; SPILL(); return;
}

void f_ed97a0(void) {
  LOAD_REGS();
L_ed97a0: /* ed97a0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed97a3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ed97a7: mov cl, byte ptr [eax + 0x100] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x100u))) & 0xffu);
/* ed97ad: mov dl, byte ptr [eax + 0x101] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x101u))) & 0xffu);
/* ed97b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed97b4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ed97b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed97b9: xor edi, edi */
  edi = 0;
/* ed97bb: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed97bd: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* ed97c1: jle 0xed9876 */
  if ((zf || sf != of)) goto L_ed9876;
L_ed97c7: /* ed97c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed97c8: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* ed97cb: movzx esi, dl */
  esi = (uint32_t)((edx & 0xffu));
/* ed97ce: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed97cf: nop  */
L_ed97d0: /* ed97d0: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ed97d4: movzx edx, byte ptr [edi + edx] */
  edx = (uint32_t)(R8((uint32_t)(edi + edx)));
/* ed97d8: lea edx, [edx + ecx + 1] */
  edx = (uint32_t)(edx + ecx + 0x1u);
/* ed97dc: and edx, 0x800000ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000ffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* ed97e2: jns 0xed97ec */
  if (!sf) goto L_ed97ec;
L_ed97e4: /* ed97e4: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ed97e5: or edx, 0xffffff00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffff00u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* ed97eb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_ed97ec: /* ed97ec: movzx ecx, dl */
  ecx = (uint32_t)((edx & 0xffu));
/* ed97ef: movzx ebx, byte ptr [ecx + eax] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + eax)));
/* ed97f3: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ed97f5: and ebx, 0x800000ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x800000ffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* ed97fb: jns 0xed9805 */
  if (!sf) goto L_ed9805;
L_ed97fd: /* ed97fd: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* ed97fe: or ebx, 0xffffff00 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffff00u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* ed9804: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_ed9805: /* ed9805: movzx esi, bl */
  esi = (uint32_t)((ebx & 0xffu));
/* ed9808: mov byte ptr [esp + 0x13], bl */
  W8((uint32_t)(esp + 0x13u), (ebx & 0xffu));
/* ed980c: mov bl, byte ptr [ecx + eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax))) & 0xffu);
/* ed980f: mov byte ptr [esp + 0x24], bl */
  W8((uint32_t)(esp + 0x24u), (ebx & 0xffu));
/* ed9813: mov bl, byte ptr [esi + eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + eax))) & 0xffu);
/* ed9816: mov byte ptr [ecx + eax], bl */
  W8((uint32_t)(ecx + eax), (ebx & 0xffu));
/* ed9819: mov bl, byte ptr [esp + 0x24] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x24u))) & 0xffu);
/* ed981d: mov byte ptr [esi + eax], bl */
  W8((uint32_t)(esi + eax), (ebx & 0xffu));
/* ed9820: movzx ebp, byte ptr [ecx + eax] */
  ebp = (uint32_t)(R8((uint32_t)(ecx + eax)));
/* ed9824: movzx ebx, bl */
  ebx = (uint32_t)((ebx & 0xffu));
/* ed9827: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ed9829: and ebx, 0x800000ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x800000ffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* ed982f: jns 0xed9839 */
  if (!sf) goto L_ed9839;
L_ed9831: /* ed9831: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* ed9832: or ebx, 0xffffff00 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffff00u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* ed9838: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_ed9839: /* ed9839: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* ed983d: movzx ebx, bl */
  ebx = (uint32_t)((ebx & 0xffu));
/* ed9840: mov bl, byte ptr [ebx + eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + eax))) & 0xffu);
/* ed9843: xor byte ptr [edi + ebp], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + ebp))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  W8((uint32_t)(edi + ebp), r);
  }
/* ed9846: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ed984a: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* ed984e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ed984f: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* ed9853: movsx edi, di */
  edi = (uint32_t)(int32_t)(int16_t)((edi & 0xffffu));
/* ed9856: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed9858: jl 0xed97d0 */
  if ((sf != of)) goto L_ed97d0;
L_ed985e: /* ed985e: mov cl, byte ptr [esp + 0x13] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* ed9862: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed9863: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed9864: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed9865: mov byte ptr [eax + 0x100], dl */
  W8((uint32_t)(eax + 0x100u), (edx & 0xffu));
/* ed986b: mov byte ptr [eax + 0x101], cl */
  W8((uint32_t)(eax + 0x101u), (ecx & 0xffu));
/* ed9871: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed9872: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed9875: ret  */
  esp += 4; SPILL(); return;
L_ed9876: /* ed9876: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed9877: mov byte ptr [eax + 0x100], cl */
  W8((uint32_t)(eax + 0x100u), (ecx & 0xffu));
/* ed987d: mov byte ptr [eax + 0x101], dl */
  W8((uint32_t)(eax + 0x101u), (edx & 0xffu));
/* ed9883: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed9884: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed9887: ret  */
  esp += 4; SPILL(); return;
}

void f_ed98d0(void) {
  LOAD_REGS();
L_ed98d0: /* ed98d0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ed98d4: sub esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ed98da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed98db: mov bl, byte ptr [edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* ed98dd: xor ecx, ecx */
  ecx = 0;
/* ed98df: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed98e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed98e2: mov eax, edx */
  eax = edx;
/* ed98e4: je 0xed98ef */
  if (zf) goto L_ed98ef;
L_ed98e6: /* ed98e6: mov bl, byte ptr [eax + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* ed98e9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ed98ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ed98eb: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ed98ed: jne 0xed98e6 */
  if (!zf) goto L_ed98e6;
L_ed98ef: /* ed98ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed98f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed98f1: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* ed98f5: call 0xed9710 */
  esp -= 4; W32(esp, 0xed98fau); SPILL(); f_ed9710(); if (g_unwind) return; RELOAD();
/* ed98fa: mov ecx, dword ptr [esp + 0x11c] */
  ecx = R32((uint32_t)(esp + 0x11cu));
/* ed9901: mov edx, dword ptr [esp + 0x118] */
  edx = R32((uint32_t)(esp + 0x118u));
/* ed9908: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* ed990c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ed990d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed990e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ed990f: call 0xed101e */
  esp -= 4; W32(esp, 0xed9914u); SPILL(); f_ed101e(); if (g_unwind) return; RELOAD();
/* ed9914: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed9917: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed9918: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed9919: add esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ed991f: ret  */
  esp += 4; SPILL(); return;
}

void f_ed9990(void) {
  LOAD_REGS();
L_ed9990: /* ed9990: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* ed9993: cmp eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ed9996: ja 0xed9a63 */
  if ((!cf && !zf)) goto L_ed9a63;
L_ed999c: /* ed999c: jmp dword ptr [eax*4 + 0xed9a68] */
  switch (R32((uint32_t)(eax*4 + 0xed9a68u))) {
    case 0xed99a3u: goto L_ed99a3;
    case 0xed99a6u: goto L_ed99a6;
    case 0xed99a9u: goto L_ed99a9;
    case 0xed99acu: goto L_ed99ac;
    case 0xed99afu: goto L_ed99af;
    case 0xed99b2u: goto L_ed99b2;
    case 0xed99b5u: goto L_ed99b5;
    case 0xed99b8u: goto L_ed99b8;
    case 0xed99bbu: goto L_ed99bb;
    case 0xed99beu: goto L_ed99be;
    case 0xed99c1u: goto L_ed99c1;
    case 0xed99c4u: goto L_ed99c4;
    case 0xed99c7u: goto L_ed99c7;
    case 0xed99cau: goto L_ed99ca;
    case 0xed99cdu: goto L_ed99cd;
    case 0xed99d0u: goto L_ed99d0;
    case 0xed99d3u: goto L_ed99d3;
    case 0xed99d6u: goto L_ed99d6;
    case 0xed99d9u: goto L_ed99d9;
    case 0xed99dcu: goto L_ed99dc;
    case 0xed99dfu: goto L_ed99df;
    case 0xed99e2u: goto L_ed99e2;
    case 0xed99e5u: goto L_ed99e5;
    case 0xed99e8u: goto L_ed99e8;
    case 0xed99ebu: goto L_ed99eb;
    case 0xed99eeu: goto L_ed99ee;
    case 0xed99f1u: goto L_ed99f1;
    case 0xed99f4u: goto L_ed99f4;
    case 0xed99f7u: goto L_ed99f7;
    case 0xed99fau: goto L_ed99fa;
    case 0xed99fdu: goto L_ed99fd;
    case 0xed9a00u: goto L_ed9a00;
    case 0xed9a03u: goto L_ed9a03;
    case 0xed9a06u: goto L_ed9a06;
    case 0xed9a09u: goto L_ed9a09;
    case 0xed9a0cu: goto L_ed9a0c;
    case 0xed9a0fu: goto L_ed9a0f;
    case 0xed9a12u: goto L_ed9a12;
    case 0xed9a15u: goto L_ed9a15;
    case 0xed9a18u: goto L_ed9a18;
    case 0xed9a1bu: goto L_ed9a1b;
    case 0xed9a1eu: goto L_ed9a1e;
    case 0xed9a21u: goto L_ed9a21;
    case 0xed9a24u: goto L_ed9a24;
    case 0xed9a27u: goto L_ed9a27;
    case 0xed9a2au: goto L_ed9a2a;
    case 0xed9a2du: goto L_ed9a2d;
    case 0xed9a30u: goto L_ed9a30;
    case 0xed9a33u: goto L_ed9a33;
    case 0xed9a36u: goto L_ed9a36;
    case 0xed9a39u: goto L_ed9a39;
    case 0xed9a3cu: goto L_ed9a3c;
    case 0xed9a3fu: goto L_ed9a3f;
    case 0xed9a42u: goto L_ed9a42;
    case 0xed9a45u: goto L_ed9a45;
    case 0xed9a48u: goto L_ed9a48;
    case 0xed9a4bu: goto L_ed9a4b;
    case 0xed9a4eu: goto L_ed9a4e;
    case 0xed9a51u: goto L_ed9a51;
    case 0xed9a54u: goto L_ed9a54;
    case 0xed9a57u: goto L_ed9a57;
    case 0xed9a5au: goto L_ed9a5a;
    case 0xed9a5du: goto L_ed9a5d;
    case 0xed9a60u: goto L_ed9a60;
    default: guest_badjump(0xed999c, R32((uint32_t)(eax*4 + 0xed9a68u))); return;
  }
L_ed99a3: /* ed99a3: mov al, 0x41 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x41u) & 0xffu);
/* ed99a5: ret  */
  esp += 4; SPILL(); return;
L_ed99a6: /* ed99a6: mov al, 0x42 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x42u) & 0xffu);
/* ed99a8: ret  */
  esp += 4; SPILL(); return;
L_ed99a9: /* ed99a9: mov al, 0x43 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x43u) & 0xffu);
/* ed99ab: ret  */
  esp += 4; SPILL(); return;
L_ed99ac: /* ed99ac: mov al, 0x44 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x44u) & 0xffu);
/* ed99ae: ret  */
  esp += 4; SPILL(); return;
L_ed99af: /* ed99af: mov al, 0x45 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x45u) & 0xffu);
/* ed99b1: ret  */
  esp += 4; SPILL(); return;
L_ed99b2: /* ed99b2: mov al, 0x46 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x46u) & 0xffu);
/* ed99b4: ret  */
  esp += 4; SPILL(); return;
L_ed99b5: /* ed99b5: mov al, 0x47 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x47u) & 0xffu);
/* ed99b7: ret  */
  esp += 4; SPILL(); return;
L_ed99b8: /* ed99b8: mov al, 0x48 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x48u) & 0xffu);
/* ed99ba: ret  */
  esp += 4; SPILL(); return;
L_ed99bb: /* ed99bb: mov al, 0x49 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x49u) & 0xffu);
/* ed99bd: ret  */
  esp += 4; SPILL(); return;
L_ed99be: /* ed99be: mov al, 0x4a */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x4au) & 0xffu);
/* ed99c0: ret  */
  esp += 4; SPILL(); return;
L_ed99c1: /* ed99c1: mov al, 0x4b */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x4bu) & 0xffu);
/* ed99c3: ret  */
  esp += 4; SPILL(); return;
L_ed99c4: /* ed99c4: mov al, 0x4c */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x4cu) & 0xffu);
/* ed99c6: ret  */
  esp += 4; SPILL(); return;
L_ed99c7: /* ed99c7: mov al, 0x4d */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x4du) & 0xffu);
/* ed99c9: ret  */
  esp += 4; SPILL(); return;
L_ed99ca: /* ed99ca: mov al, 0x4e */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x4eu) & 0xffu);
/* ed99cc: ret  */
  esp += 4; SPILL(); return;
L_ed99cd: /* ed99cd: mov al, 0x4f */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x4fu) & 0xffu);
/* ed99cf: ret  */
  esp += 4; SPILL(); return;
L_ed99d0: /* ed99d0: mov al, 0x50 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x50u) & 0xffu);
/* ed99d2: ret  */
  esp += 4; SPILL(); return;
L_ed99d3: /* ed99d3: mov al, 0x51 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x51u) & 0xffu);
/* ed99d5: ret  */
  esp += 4; SPILL(); return;
L_ed99d6: /* ed99d6: mov al, 0x52 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x52u) & 0xffu);
/* ed99d8: ret  */
  esp += 4; SPILL(); return;
L_ed99d9: /* ed99d9: mov al, 0x53 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x53u) & 0xffu);
/* ed99db: ret  */
  esp += 4; SPILL(); return;
L_ed99dc: /* ed99dc: mov al, 0x54 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x54u) & 0xffu);
/* ed99de: ret  */
  esp += 4; SPILL(); return;
L_ed99df: /* ed99df: mov al, 0x55 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x55u) & 0xffu);
/* ed99e1: ret  */
  esp += 4; SPILL(); return;
L_ed99e2: /* ed99e2: mov al, 0x56 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x56u) & 0xffu);
/* ed99e4: ret  */
  esp += 4; SPILL(); return;
L_ed99e5: /* ed99e5: mov al, 0x57 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x57u) & 0xffu);
/* ed99e7: ret  */
  esp += 4; SPILL(); return;
L_ed99e8: /* ed99e8: mov al, 0x58 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x58u) & 0xffu);
/* ed99ea: ret  */
  esp += 4; SPILL(); return;
L_ed99eb: /* ed99eb: mov al, 0x59 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x59u) & 0xffu);
/* ed99ed: ret  */
  esp += 4; SPILL(); return;
L_ed99ee: /* ed99ee: mov al, 0x5a */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x5au) & 0xffu);
/* ed99f0: ret  */
  esp += 4; SPILL(); return;
L_ed99f1: /* ed99f1: mov al, 0x61 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x61u) & 0xffu);
/* ed99f3: ret  */
  esp += 4; SPILL(); return;
L_ed99f4: /* ed99f4: mov al, 0x62 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x62u) & 0xffu);
/* ed99f6: ret  */
  esp += 4; SPILL(); return;
L_ed99f7: /* ed99f7: mov al, 0x63 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x63u) & 0xffu);
/* ed99f9: ret  */
  esp += 4; SPILL(); return;
L_ed99fa: /* ed99fa: mov al, 0x64 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x64u) & 0xffu);
/* ed99fc: ret  */
  esp += 4; SPILL(); return;
L_ed99fd: /* ed99fd: mov al, 0x65 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x65u) & 0xffu);
/* ed99ff: ret  */
  esp += 4; SPILL(); return;
L_ed9a00: /* ed9a00: mov al, 0x66 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x66u) & 0xffu);
/* ed9a02: ret  */
  esp += 4; SPILL(); return;
L_ed9a03: /* ed9a03: mov al, 0x67 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x67u) & 0xffu);
/* ed9a05: ret  */
  esp += 4; SPILL(); return;
L_ed9a06: /* ed9a06: mov al, 0x68 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x68u) & 0xffu);
/* ed9a08: ret  */
  esp += 4; SPILL(); return;
L_ed9a09: /* ed9a09: mov al, 0x69 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x69u) & 0xffu);
/* ed9a0b: ret  */
  esp += 4; SPILL(); return;
L_ed9a0c: /* ed9a0c: mov al, 0x6a */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x6au) & 0xffu);
/* ed9a0e: ret  */
  esp += 4; SPILL(); return;
L_ed9a0f: /* ed9a0f: mov al, 0x6b */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x6bu) & 0xffu);
/* ed9a11: ret  */
  esp += 4; SPILL(); return;
L_ed9a12: /* ed9a12: mov al, 0x6c */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x6cu) & 0xffu);
/* ed9a14: ret  */
  esp += 4; SPILL(); return;
L_ed9a15: /* ed9a15: mov al, 0x6d */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x6du) & 0xffu);
/* ed9a17: ret  */
  esp += 4; SPILL(); return;
L_ed9a18: /* ed9a18: mov al, 0x6e */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x6eu) & 0xffu);
/* ed9a1a: ret  */
  esp += 4; SPILL(); return;
L_ed9a1b: /* ed9a1b: mov al, 0x6f */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x6fu) & 0xffu);
/* ed9a1d: ret  */
  esp += 4; SPILL(); return;
L_ed9a1e: /* ed9a1e: mov al, 0x70 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x70u) & 0xffu);
/* ed9a20: ret  */
  esp += 4; SPILL(); return;
L_ed9a21: /* ed9a21: mov al, 0x71 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x71u) & 0xffu);
/* ed9a23: ret  */
  esp += 4; SPILL(); return;
L_ed9a24: /* ed9a24: mov al, 0x72 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x72u) & 0xffu);
/* ed9a26: ret  */
  esp += 4; SPILL(); return;
L_ed9a27: /* ed9a27: mov al, 0x73 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x73u) & 0xffu);
/* ed9a29: ret  */
  esp += 4; SPILL(); return;
L_ed9a2a: /* ed9a2a: mov al, 0x74 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x74u) & 0xffu);
/* ed9a2c: ret  */
  esp += 4; SPILL(); return;
L_ed9a2d: /* ed9a2d: mov al, 0x75 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x75u) & 0xffu);
/* ed9a2f: ret  */
  esp += 4; SPILL(); return;
L_ed9a30: /* ed9a30: mov al, 0x76 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x76u) & 0xffu);
/* ed9a32: ret  */
  esp += 4; SPILL(); return;
L_ed9a33: /* ed9a33: mov al, 0x77 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x77u) & 0xffu);
/* ed9a35: ret  */
  esp += 4; SPILL(); return;
L_ed9a36: /* ed9a36: mov al, 0x78 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x78u) & 0xffu);
/* ed9a38: ret  */
  esp += 4; SPILL(); return;
L_ed9a39: /* ed9a39: mov al, 0x79 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x79u) & 0xffu);
/* ed9a3b: ret  */
  esp += 4; SPILL(); return;
L_ed9a3c: /* ed9a3c: mov al, 0x7a */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x7au) & 0xffu);
/* ed9a3e: ret  */
  esp += 4; SPILL(); return;
L_ed9a3f: /* ed9a3f: mov al, 0x30 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x30u) & 0xffu);
/* ed9a41: ret  */
  esp += 4; SPILL(); return;
L_ed9a42: /* ed9a42: mov al, 0x31 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x31u) & 0xffu);
/* ed9a44: ret  */
  esp += 4; SPILL(); return;
L_ed9a45: /* ed9a45: mov al, 0x32 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x32u) & 0xffu);
/* ed9a47: ret  */
  esp += 4; SPILL(); return;
L_ed9a48: /* ed9a48: mov al, 0x33 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x33u) & 0xffu);
/* ed9a4a: ret  */
  esp += 4; SPILL(); return;
L_ed9a4b: /* ed9a4b: mov al, 0x34 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x34u) & 0xffu);
/* ed9a4d: ret  */
  esp += 4; SPILL(); return;
L_ed9a4e: /* ed9a4e: mov al, 0x35 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x35u) & 0xffu);
/* ed9a50: ret  */
  esp += 4; SPILL(); return;
L_ed9a51: /* ed9a51: mov al, 0x36 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x36u) & 0xffu);
/* ed9a53: ret  */
  esp += 4; SPILL(); return;
L_ed9a54: /* ed9a54: mov al, 0x37 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x37u) & 0xffu);
/* ed9a56: ret  */
  esp += 4; SPILL(); return;
L_ed9a57: /* ed9a57: mov al, 0x38 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x38u) & 0xffu);
/* ed9a59: ret  */
  esp += 4; SPILL(); return;
L_ed9a5a: /* ed9a5a: mov al, 0x39 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x39u) & 0xffu);
/* ed9a5c: ret  */
  esp += 4; SPILL(); return;
L_ed9a5d: /* ed9a5d: mov al, 0x2b */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x2bu) & 0xffu);
/* ed9a5f: ret  */
  esp += 4; SPILL(); return;
L_ed9a60: /* ed9a60: mov al, 0x2f */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x2fu) & 0xffu);
/* ed9a62: ret  */
  esp += 4; SPILL(); return;
L_ed9a63: /* ed9a63: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* ed9a65: ret  */
  esp += 4; SPILL(); return;
}

void f_ed9bf0(void) {
  LOAD_REGS();
L_ed9bf0: /* ed9bf0: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* ed9bf3: add eax, -0x2b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffd5u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ed9bf6: cmp eax, 0x4f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ed9bf9: ja 0xed9cc3 */
  if ((!cf && !zf)) goto L_ed9cc3;
L_ed9bff: /* ed9bff: jmp dword ptr [eax*4 + 0xed9cc8] */
  switch (R32((uint32_t)(eax*4 + 0xed9cc8u))) {
    case 0xed9c06u: goto L_ed9c06;
    case 0xed9c09u: goto L_ed9c09;
    case 0xed9c0cu: goto L_ed9c0c;
    case 0xed9c0fu: goto L_ed9c0f;
    case 0xed9c12u: goto L_ed9c12;
    case 0xed9c15u: goto L_ed9c15;
    case 0xed9c18u: goto L_ed9c18;
    case 0xed9c1bu: goto L_ed9c1b;
    case 0xed9c1eu: goto L_ed9c1e;
    case 0xed9c21u: goto L_ed9c21;
    case 0xed9c24u: goto L_ed9c24;
    case 0xed9c27u: goto L_ed9c27;
    case 0xed9c2au: goto L_ed9c2a;
    case 0xed9c2du: goto L_ed9c2d;
    case 0xed9c30u: goto L_ed9c30;
    case 0xed9c33u: goto L_ed9c33;
    case 0xed9c36u: goto L_ed9c36;
    case 0xed9c39u: goto L_ed9c39;
    case 0xed9c3cu: goto L_ed9c3c;
    case 0xed9c3fu: goto L_ed9c3f;
    case 0xed9c42u: goto L_ed9c42;
    case 0xed9c45u: goto L_ed9c45;
    case 0xed9c48u: goto L_ed9c48;
    case 0xed9c4bu: goto L_ed9c4b;
    case 0xed9c4eu: goto L_ed9c4e;
    case 0xed9c51u: goto L_ed9c51;
    case 0xed9c54u: goto L_ed9c54;
    case 0xed9c57u: goto L_ed9c57;
    case 0xed9c5au: goto L_ed9c5a;
    case 0xed9c5du: goto L_ed9c5d;
    case 0xed9c60u: goto L_ed9c60;
    case 0xed9c63u: goto L_ed9c63;
    case 0xed9c66u: goto L_ed9c66;
    case 0xed9c69u: goto L_ed9c69;
    case 0xed9c6cu: goto L_ed9c6c;
    case 0xed9c6fu: goto L_ed9c6f;
    case 0xed9c72u: goto L_ed9c72;
    case 0xed9c75u: goto L_ed9c75;
    case 0xed9c78u: goto L_ed9c78;
    case 0xed9c7bu: goto L_ed9c7b;
    case 0xed9c7eu: goto L_ed9c7e;
    case 0xed9c81u: goto L_ed9c81;
    case 0xed9c84u: goto L_ed9c84;
    case 0xed9c87u: goto L_ed9c87;
    case 0xed9c8au: goto L_ed9c8a;
    case 0xed9c8du: goto L_ed9c8d;
    case 0xed9c90u: goto L_ed9c90;
    case 0xed9c93u: goto L_ed9c93;
    case 0xed9c96u: goto L_ed9c96;
    case 0xed9c99u: goto L_ed9c99;
    case 0xed9c9cu: goto L_ed9c9c;
    case 0xed9c9fu: goto L_ed9c9f;
    case 0xed9ca2u: goto L_ed9ca2;
    case 0xed9ca5u: goto L_ed9ca5;
    case 0xed9ca8u: goto L_ed9ca8;
    case 0xed9cabu: goto L_ed9cab;
    case 0xed9caeu: goto L_ed9cae;
    case 0xed9cb1u: goto L_ed9cb1;
    case 0xed9cb4u: goto L_ed9cb4;
    case 0xed9cb7u: goto L_ed9cb7;
    case 0xed9cbau: goto L_ed9cba;
    case 0xed9cbdu: goto L_ed9cbd;
    case 0xed9cc0u: goto L_ed9cc0;
    case 0xed9cc3u: goto L_ed9cc3;
    default: guest_badjump(0xed9bff, R32((uint32_t)(eax*4 + 0xed9cc8u))); return;
  }
L_ed9c06: /* ed9c06: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* ed9c08: ret  */
  esp += 4; SPILL(); return;
L_ed9c09: /* ed9c09: mov al, 2 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* ed9c0b: ret  */
  esp += 4; SPILL(); return;
L_ed9c0c: /* ed9c0c: mov al, 3 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* ed9c0e: ret  */
  esp += 4; SPILL(); return;
L_ed9c0f: /* ed9c0f: mov al, 4 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
/* ed9c11: ret  */
  esp += 4; SPILL(); return;
L_ed9c12: /* ed9c12: mov al, 5 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x5u) & 0xffu);
/* ed9c14: ret  */
  esp += 4; SPILL(); return;
L_ed9c15: /* ed9c15: mov al, 6 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x6u) & 0xffu);
/* ed9c17: ret  */
  esp += 4; SPILL(); return;
L_ed9c18: /* ed9c18: mov al, 7 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x7u) & 0xffu);
/* ed9c1a: ret  */
  esp += 4; SPILL(); return;
L_ed9c1b: /* ed9c1b: mov al, 8 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* ed9c1d: ret  */
  esp += 4; SPILL(); return;
L_ed9c1e: /* ed9c1e: mov al, 9 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x9u) & 0xffu);
/* ed9c20: ret  */
  esp += 4; SPILL(); return;
L_ed9c21: /* ed9c21: mov al, 0xa */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xau) & 0xffu);
/* ed9c23: ret  */
  esp += 4; SPILL(); return;
L_ed9c24: /* ed9c24: mov al, 0xb */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xbu) & 0xffu);
/* ed9c26: ret  */
  esp += 4; SPILL(); return;
L_ed9c27: /* ed9c27: mov al, 0xc */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xcu) & 0xffu);
/* ed9c29: ret  */
  esp += 4; SPILL(); return;
L_ed9c2a: /* ed9c2a: mov al, 0xd */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xdu) & 0xffu);
/* ed9c2c: ret  */
  esp += 4; SPILL(); return;
L_ed9c2d: /* ed9c2d: mov al, 0xe */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xeu) & 0xffu);
/* ed9c2f: ret  */
  esp += 4; SPILL(); return;
L_ed9c30: /* ed9c30: mov al, 0xf */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xfu) & 0xffu);
/* ed9c32: ret  */
  esp += 4; SPILL(); return;
L_ed9c33: /* ed9c33: mov al, 0x10 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* ed9c35: ret  */
  esp += 4; SPILL(); return;
L_ed9c36: /* ed9c36: mov al, 0x11 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x11u) & 0xffu);
/* ed9c38: ret  */
  esp += 4; SPILL(); return;
L_ed9c39: /* ed9c39: mov al, 0x12 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x12u) & 0xffu);
/* ed9c3b: ret  */
  esp += 4; SPILL(); return;
L_ed9c3c: /* ed9c3c: mov al, 0x13 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x13u) & 0xffu);
/* ed9c3e: ret  */
  esp += 4; SPILL(); return;
L_ed9c3f: /* ed9c3f: mov al, 0x14 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x14u) & 0xffu);
/* ed9c41: ret  */
  esp += 4; SPILL(); return;
L_ed9c42: /* ed9c42: mov al, 0x15 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x15u) & 0xffu);
/* ed9c44: ret  */
  esp += 4; SPILL(); return;
L_ed9c45: /* ed9c45: mov al, 0x16 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x16u) & 0xffu);
/* ed9c47: ret  */
  esp += 4; SPILL(); return;
L_ed9c48: /* ed9c48: mov al, 0x17 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x17u) & 0xffu);
/* ed9c4a: ret  */
  esp += 4; SPILL(); return;
L_ed9c4b: /* ed9c4b: mov al, 0x18 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x18u) & 0xffu);
/* ed9c4d: ret  */
  esp += 4; SPILL(); return;
L_ed9c4e: /* ed9c4e: mov al, 0x19 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x19u) & 0xffu);
/* ed9c50: ret  */
  esp += 4; SPILL(); return;
L_ed9c51: /* ed9c51: mov al, 0x1a */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1au) & 0xffu);
/* ed9c53: ret  */
  esp += 4; SPILL(); return;
L_ed9c54: /* ed9c54: mov al, 0x1b */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1bu) & 0xffu);
/* ed9c56: ret  */
  esp += 4; SPILL(); return;
L_ed9c57: /* ed9c57: mov al, 0x1c */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1cu) & 0xffu);
/* ed9c59: ret  */
  esp += 4; SPILL(); return;
L_ed9c5a: /* ed9c5a: mov al, 0x1d */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1du) & 0xffu);
/* ed9c5c: ret  */
  esp += 4; SPILL(); return;
L_ed9c5d: /* ed9c5d: mov al, 0x1e */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1eu) & 0xffu);
/* ed9c5f: ret  */
  esp += 4; SPILL(); return;
L_ed9c60: /* ed9c60: mov al, 0x1f */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1fu) & 0xffu);
/* ed9c62: ret  */
  esp += 4; SPILL(); return;
L_ed9c63: /* ed9c63: mov al, 0x20 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x20u) & 0xffu);
/* ed9c65: ret  */
  esp += 4; SPILL(); return;
L_ed9c66: /* ed9c66: mov al, 0x21 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x21u) & 0xffu);
/* ed9c68: ret  */
  esp += 4; SPILL(); return;
L_ed9c69: /* ed9c69: mov al, 0x22 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x22u) & 0xffu);
/* ed9c6b: ret  */
  esp += 4; SPILL(); return;
L_ed9c6c: /* ed9c6c: mov al, 0x23 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x23u) & 0xffu);
/* ed9c6e: ret  */
  esp += 4; SPILL(); return;
L_ed9c6f: /* ed9c6f: mov al, 0x24 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x24u) & 0xffu);
/* ed9c71: ret  */
  esp += 4; SPILL(); return;
L_ed9c72: /* ed9c72: mov al, 0x25 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x25u) & 0xffu);
/* ed9c74: ret  */
  esp += 4; SPILL(); return;
L_ed9c75: /* ed9c75: mov al, 0x26 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x26u) & 0xffu);
/* ed9c77: ret  */
  esp += 4; SPILL(); return;
L_ed9c78: /* ed9c78: mov al, 0x27 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x27u) & 0xffu);
/* ed9c7a: ret  */
  esp += 4; SPILL(); return;
L_ed9c7b: /* ed9c7b: mov al, 0x28 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x28u) & 0xffu);
/* ed9c7d: ret  */
  esp += 4; SPILL(); return;
L_ed9c7e: /* ed9c7e: mov al, 0x29 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x29u) & 0xffu);
/* ed9c80: ret  */
  esp += 4; SPILL(); return;
L_ed9c81: /* ed9c81: mov al, 0x2a */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x2au) & 0xffu);
/* ed9c83: ret  */
  esp += 4; SPILL(); return;
L_ed9c84: /* ed9c84: mov al, 0x2b */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x2bu) & 0xffu);
/* ed9c86: ret  */
  esp += 4; SPILL(); return;
L_ed9c87: /* ed9c87: mov al, 0x2c */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x2cu) & 0xffu);
/* ed9c89: ret  */
  esp += 4; SPILL(); return;
L_ed9c8a: /* ed9c8a: mov al, 0x2d */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x2du) & 0xffu);
/* ed9c8c: ret  */
  esp += 4; SPILL(); return;
L_ed9c8d: /* ed9c8d: mov al, 0x2e */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x2eu) & 0xffu);
/* ed9c8f: ret  */
  esp += 4; SPILL(); return;
L_ed9c90: /* ed9c90: mov al, 0x2f */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x2fu) & 0xffu);
/* ed9c92: ret  */
  esp += 4; SPILL(); return;
L_ed9c93: /* ed9c93: mov al, 0x30 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x30u) & 0xffu);
/* ed9c95: ret  */
  esp += 4; SPILL(); return;
L_ed9c96: /* ed9c96: mov al, 0x31 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x31u) & 0xffu);
/* ed9c98: ret  */
  esp += 4; SPILL(); return;
L_ed9c99: /* ed9c99: mov al, 0x32 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x32u) & 0xffu);
/* ed9c9b: ret  */
  esp += 4; SPILL(); return;
L_ed9c9c: /* ed9c9c: mov al, 0x33 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x33u) & 0xffu);
/* ed9c9e: ret  */
  esp += 4; SPILL(); return;
L_ed9c9f: /* ed9c9f: mov al, 0x34 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x34u) & 0xffu);
/* ed9ca1: ret  */
  esp += 4; SPILL(); return;
L_ed9ca2: /* ed9ca2: mov al, 0x35 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x35u) & 0xffu);
/* ed9ca4: ret  */
  esp += 4; SPILL(); return;
L_ed9ca5: /* ed9ca5: mov al, 0x36 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x36u) & 0xffu);
/* ed9ca7: ret  */
  esp += 4; SPILL(); return;
L_ed9ca8: /* ed9ca8: mov al, 0x37 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x37u) & 0xffu);
/* ed9caa: ret  */
  esp += 4; SPILL(); return;
L_ed9cab: /* ed9cab: mov al, 0x38 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x38u) & 0xffu);
/* ed9cad: ret  */
  esp += 4; SPILL(); return;
L_ed9cae: /* ed9cae: mov al, 0x39 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x39u) & 0xffu);
/* ed9cb0: ret  */
  esp += 4; SPILL(); return;
L_ed9cb1: /* ed9cb1: mov al, 0x3a */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x3au) & 0xffu);
/* ed9cb3: ret  */
  esp += 4; SPILL(); return;
L_ed9cb4: /* ed9cb4: mov al, 0x3b */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x3bu) & 0xffu);
/* ed9cb6: ret  */
  esp += 4; SPILL(); return;
L_ed9cb7: /* ed9cb7: mov al, 0x3c */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x3cu) & 0xffu);
/* ed9cb9: ret  */
  esp += 4; SPILL(); return;
L_ed9cba: /* ed9cba: mov al, 0x3d */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x3du) & 0xffu);
/* ed9cbc: ret  */
  esp += 4; SPILL(); return;
L_ed9cbd: /* ed9cbd: mov al, 0x3e */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x3eu) & 0xffu);
/* ed9cbf: ret  */
  esp += 4; SPILL(); return;
L_ed9cc0: /* ed9cc0: mov al, 0x3f */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x3fu) & 0xffu);
/* ed9cc2: ret  */
  esp += 4; SPILL(); return;
L_ed9cc3: /* ed9cc3: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* ed9cc5: ret  */
  esp += 4; SPILL(); return;
}

void f_ed9ea0(void) {
  LOAD_REGS();
L_ed9ea0: /* ed9ea0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* ed9ea4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ed9ea5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9ea6: xor ebx, ebx */
  ebx = 0;
/* ed9ea8: xor esi, esi */
  esi = 0;
/* ed9eaa: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed9eac: jle 0xed9f3d */
  if ((zf || sf != of)) goto L_ed9f3d;
L_ed9eb2: /* ed9eb2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ed9eb3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* ed9eb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ed9eb8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ed9ebc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ed9ec0: /* ed9ec0: xor eax, eax */
  eax = 0;
L_ed9ec2: /* ed9ec2: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed9ec4: jge 0xed9ed0 */
  if ((sf == of)) goto L_ed9ed0;
L_ed9ec6: /* ed9ec6: mov cl, byte ptr [ebp] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* ed9ec9: mov byte ptr [esp + eax + 0x1c], cl */
  W8((uint32_t)(esp + eax + 0x1cu), (ecx & 0xffu));
/* ed9ecd: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ed9ece: jmp 0xed9ed4 */
  goto L_ed9ed4;
L_ed9ed0: /* ed9ed0: mov byte ptr [esp + eax + 0x1c], bl */
  W8((uint32_t)(esp + eax + 0x1cu), (ebx & 0xffu));
L_ed9ed4: /* ed9ed4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ed9ed5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ed9ed6: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed9ed9: jle 0xed9ec2 */
  if ((zf || sf != of)) goto L_ed9ec2;
L_ed9edb: /* ed9edb: mov al, byte ptr [esp + 0x1c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x1cu))) & 0xffu);
/* ed9edf: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* ed9ee1: shr cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9ee4: mov byte ptr [esp + 0x18], cl */
  W8((uint32_t)(esp + 0x18u), (ecx & 0xffu));
/* ed9ee8: mov cx, word ptr [esp + 0x1d] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x1du))) & 0xffffu);
/* ed9eed: and al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9eef: mov bl, cl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* ed9ef1: shl al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9ef4: shr bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9ef7: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9ef9: mov byte ptr [esp + 0x19], al */
  W8((uint32_t)(esp + 0x19u), (eax & 0xffu));
/* ed9efd: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* ed9eff: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9f01: mov bl, ch */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(((ecx >> 8) & 0xffu)) & 0xffu);
/* ed9f03: shr bl, 6 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 6;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9f06: mov cl, ch */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((ecx >> 8) & 0xffu)) & 0xffu);
/* ed9f08: shl al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9f0b: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9f0d: and cl, 0x3f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9f10: mov byte ptr [esp + 0x1b], cl */
  W8((uint32_t)(esp + 0x1bu), (ecx & 0xffu));
/* ed9f14: xor ebx, ebx */
  ebx = 0;
/* ed9f16: mov byte ptr [esp + 0x1a], al */
  W8((uint32_t)(esp + 0x1au), (eax & 0xffu));
/* ed9f1a: xor ecx, ecx */
  ecx = 0;
/* ed9f1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ed9f20: /* ed9f20: mov al, byte ptr [esp + ecx + 0x18] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + ecx + 0x18u))) & 0xffu);
/* ed9f24: call 0xed9990 */
  esp -= 4; W32(esp, 0xed9f29u); SPILL(); f_ed9990(); if (g_unwind) return; RELOAD();
/* ed9f29: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* ed9f2b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ed9f2c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ed9f2d: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed9f30: jle 0xed9f20 */
  if ((zf || sf != of)) goto L_ed9f20;
L_ed9f32: /* ed9f32: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed9f34: jl 0xed9ec0 */
  if ((sf != of)) goto L_ed9ec0;
L_ed9f36: /* ed9f36: mov byte ptr [edi], bl */
  W8((uint32_t)(edi), (ebx & 0xffu));
/* ed9f38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ed9f39: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ed9f3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed9f3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed9f3c: ret  */
  esp += 4; SPILL(); return;
L_ed9f3d: /* ed9f3d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ed9f41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ed9f42: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* ed9f44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ed9f45: ret  */
  esp += 4; SPILL(); return;
}

void f_ed9fc0(void) {
  LOAD_REGS();
L_ed9fc0: /* ed9fc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ed9fc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ed9fc2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* ed9fc6: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ed9fc9: je 0xeda027 */
  if (zf) goto L_eda027;
L_ed9fcb: /* ed9fcb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ed9fcf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_ed9fd0: /* ed9fd0: xor edx, edx */
  edx = 0;
L_ed9fd2: /* ed9fd2: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* ed9fd4: call 0xed9bf0 */
  esp -= 4; W32(esp, 0xed9fd9u); SPILL(); f_ed9bf0(); if (g_unwind) return; RELOAD();
/* ed9fd9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ed9fda: mov byte ptr [esp + edx + 8], al */
  W8((uint32_t)(esp + edx + 0x8u), (eax & 0xffu));
/* ed9fde: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ed9fdf: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ed9fe2: jle 0xed9fd2 */
  if ((zf || sf != of)) goto L_ed9fd2;
L_ed9fe4: /* ed9fe4: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ed9fe8: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* ed9fea: shl al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9fed: mov dl, bh */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((ebx >> 8) & 0xffu)) & 0xffu);
/* ed9fef: shr dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9ff2: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9ff4: mov dl, byte ptr [esp + 0xa] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xau))) & 0xffu);
/* ed9ff8: shr dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ed9ffb: mov bl, bh */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(((ebx >> 8) & 0xffu)) & 0xffu);
/* ed9ffd: shl bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* eda000: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* eda002: mov bl, byte ptr [esp + 0xb] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xbu))) & 0xffu);
/* eda006: mov byte ptr [esp + 0x11], dl */
  W8((uint32_t)(esp + 0x11u), (edx & 0xffu));
/* eda00a: mov dl, byte ptr [esp + 0xa] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xau))) & 0xffu);
/* eda00e: shl dl, 6 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 6;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* eda011: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* eda013: mov al, byte ptr [esp + 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x11u))) & 0xffu);
/* eda017: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* eda019: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* eda01a: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* eda01c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* eda01d: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* eda01f: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* eda021: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* eda022: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* eda024: jne 0xed9fd0 */
  if (!zf) goto L_ed9fd0;
L_eda026: /* eda026: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_eda027: /* eda027: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eda028: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eda029: ret  */
  esp += 4; SPILL(); return;
}

void f_eda050(void) {
  LOAD_REGS();
L_eda050: /* eda050: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eda051: mov ebp, esp */
  ebp = esp;
/* eda053: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eda055: push 0xeee2f2 */
  { uint32_t v = 0xeee2f2u; esp -= 4; W32(esp, v); }
/* eda05a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eda060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda061: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eda068: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eda06b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eda06c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda06d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eda06e: mov esi, ecx */
  esi = ecx;
/* eda070: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eda073: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* eda076: call dword ptr [0xf0dfa8] */
  esp -= 4; W32(esp, 0xeda07cu); SPILL(); f_6c52ae(); if (g_unwind) return; /* Engine!??0AInternetInfo@@IAE@XZ */ RELOAD();
/* eda07c: xor ebx, ebx */
  ebx = 0;
/* eda07e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* eda081: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eda084: mov dword ptr [esi], 0xef4688 */
  W32((uint32_t)(esi), 0xef4688u);
/* eda08a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* eda08e: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xeda094u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* eda094: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* eda097: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda098: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* eda09c: call 0xed16d6 */
  esp -= 4; W32(esp, 0xeda0a1u); SPILL(); f_ed16d6(); if (g_unwind) return; RELOAD();
/* eda0a1: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* eda0a4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eda0a7: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* eda0aa: mov byte ptr [esi + 0x33c], bl */
  W8((uint32_t)(esi + 0x33cu), (ebx & 0xffu));
/* eda0b0: mov byte ptr [esi + 0x354], 1 */
  W8((uint32_t)(esi + 0x354u), 0x1u);
/* eda0b7: mov dword ptr [esi + 0x350], ebx */
  W32((uint32_t)(esi + 0x350u), ebx);
/* eda0bd: mov dword ptr [esi + 0x344], ebx */
  W32((uint32_t)(esi + 0x344u), ebx);
/* eda0c3: mov dword ptr [esi + 0x340], eax */
  W32((uint32_t)(esi + 0x340u), eax);
/* eda0c9: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* eda0cf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* eda0d3: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeda0d9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* eda0d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eda0dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eda0dd: mov eax, esi */
  eax = esi;
/* eda0df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eda0e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eda0e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eda0e8: mov esp, ebp */
  esp = ebp;
/* eda0ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eda0eb: ret  */
  esp += 4; SPILL(); return;
}

void f_eda0ec(void) {
  LOAD_REGS();
L_eda0ec: /* eda0ec: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* eda0ef: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eda0f4: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* eda0f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eda0f8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* eda0fb: call 0xeec520 */
  esp -= 4; W32(esp, 0xeda100u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eda100(); return;
}

void f_eda100(void) {
  LOAD_REGS();
L_eda100: /* eda100: push 0xef57a4 */
  { uint32_t v = 0xef57a4u; esp -= 4; W32(esp, v); }
/* eda105: push 0xf0300c */
  { uint32_t v = 0xf0300cu; esp -= 4; W32(esp, v); }
/* eda10a: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xeda110u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* eda110: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eda113: xor ebx, ebx */
  ebx = 0;
/* eda115: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eda116: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eda117: call 0xeec520 */
  esp -= 4; W32(esp, 0xeda11cu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eda11c: guest_badaddr(0xeda11c); return;
}

void f_eda160(void) {
  LOAD_REGS();
L_eda160: /* eda160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eda161: mov ebp, esp */
  ebp = esp;
/* eda163: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eda165: push 0xeee310 */
  { uint32_t v = 0xeee310u; esp -= 4; W32(esp, v); }
/* eda16a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eda170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda171: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eda178: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eda17b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* eda17e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* eda181: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eda182: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* eda183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda184: mov esi, ecx */
  esi = ecx;
/* eda186: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* eda189: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* eda18c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eda18d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eda190: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eda197: jne 0xeda1ae */
  if (!zf) goto L_eda1ae;
L_eda199: /* eda199: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* eda19c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* eda19d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda19f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* eda1a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda1a3: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eda1a8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xeda1aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eda1ae: /* eda1ae: mov eax, dword ptr [esi + 0x350] */
  eax = R32((uint32_t)(esi + 0x350u));
/* eda1b4: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* eda1b7: xor ecx, ecx */
  ecx = 0;
/* eda1b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eda1bb: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* eda1be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eda1bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eda1c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eda1c1: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* eda1c3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eda1c6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eda1cd: mov esp, ebp */
  esp = ebp;
/* eda1cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eda1d0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eda1d3(void) {
  LOAD_REGS();
L_eda1d3: /* eda1d3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eda1d6: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eda1db: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* eda1de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eda1df: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* eda1e2: call 0xeec520 */
  esp -= 4; W32(esp, 0xeda1e7u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eda1e7(); return;
}

void f_eda1e7(void) {
  LOAD_REGS();
L_eda1e7: /* eda1e7: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* eda1ed: push 0xef57f0 */
  { uint32_t v = 0xef57f0u; esp -= 4; W32(esp, v); }
/* eda1f2: push 0xf03090 */
  { uint32_t v = 0xf03090u; esp -= 4; W32(esp, v); }
/* eda1f7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xeda1f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda1f9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eda1fc: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* eda1ff: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eda202: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* eda205: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* eda20b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eda20e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* eda210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda211: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda213: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xeda215u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda215: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eda218: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda219: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda21b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xeda21du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda21d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda21e: push 0xf03098 */
  { uint32_t v = 0xf03098u; esp -= 4; W32(esp, v); }
/* eda223: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xeda225u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda225: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eda228: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda22a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda22c: call 0xeec520 */
  esp -= 4; W32(esp, 0xeda231u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eda231: guest_badaddr(0xeda231); return;
}

void f_eda280(void) {
  LOAD_REGS();
L_eda280: /* eda280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eda281: mov ebp, esp */
  ebp = esp;
/* eda283: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eda285: push 0xeee350 */
  { uint32_t v = 0xeee350u; esp -= 4; W32(esp, v); }
/* eda28a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eda290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda291: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eda298: sub esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eda29e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eda29f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda2a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eda2a1: xor edi, edi */
  edi = 0;
/* eda2a3: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* eda2a6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eda2a9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* eda2ac: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xeda2b2u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* eda2b2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eda2b5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eda2b8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eda2bb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eda2be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eda2bf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eda2c2: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* eda2c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda2c6: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eda2cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda2cc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* eda2d0: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeda2d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda2d3: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* eda2d6: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xeda2dcu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* eda2dc: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* eda2e2: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* eda2e4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eda2e7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eda2ea: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eda2ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eda2ee: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eda2f1: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* eda2f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda2f5: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eda2fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda2fb: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* eda2ff: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeda302u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda302: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* eda308: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eda30a: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eda30c: je 0xeda31b */
  if (zf) goto L_eda31b;
L_eda30e: /* eda30e: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* eda313: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eda315: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eda317: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda318: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xeda31bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eda31b: /* eda31b: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* eda321: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eda323: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eda325: je 0xeda32c */
  if (zf) goto L_eda32c;
L_eda327: /* eda327: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* eda32a: jmp 0xeda332 */
  goto L_eda332;
L_eda32c: /* eda32c: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* eda32f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_eda332: /* eda332: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* eda335: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* eda337: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eda33a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eda33d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eda340: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eda341: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eda344: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* eda347: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda348: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eda34d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda34e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeda351u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda351: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* eda357: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eda359: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eda35b: je 0xeda36a */
  if (zf) goto L_eda36a;
L_eda35d: /* eda35d: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* eda362: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eda364: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eda366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda367: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xeda36au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eda36a: /* eda36a: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* eda370: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eda372: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eda374: je 0xeda37b */
  if (zf) goto L_eda37b;
L_eda376: /* eda376: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* eda379: jmp 0xeda381 */
  goto L_eda381;
L_eda37b: /* eda37b: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* eda37e: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
L_eda381: /* eda381: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eda384: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xeda38au); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* eda38a: mov eax, dword ptr [0xf0dc58] */
  eax = R32((uint32_t)(0xf0dc58u));
/* eda38f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* eda391: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eda394: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eda397: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eda39a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eda39b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eda39e: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* eda3a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda3a2: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eda3a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda3a8: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* eda3ac: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeda3afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda3af: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* eda3b5: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eda3b7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eda3b9: je 0xeda3c8 */
  if (zf) goto L_eda3c8;
L_eda3bb: /* eda3bb: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* eda3c0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eda3c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eda3c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda3c5: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xeda3c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eda3c8: /* eda3c8: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* eda3ce: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eda3d0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eda3d2: je 0xeda3d9 */
  if (zf) goto L_eda3d9;
L_eda3d4: /* eda3d4: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* eda3d7: jmp 0xeda3df */
  goto L_eda3df;
L_eda3d9: /* eda3d9: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* eda3dc: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
L_eda3df: /* eda3df: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eda3e2: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xeda3e8u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* eda3e8: mov eax, dword ptr [0xf0dc58] */
  eax = R32((uint32_t)(0xf0dc58u));
/* eda3ed: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* eda3ef: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eda3f2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eda3f5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eda3f8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eda3f9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eda3fc: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* eda3ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda400: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eda405: mov bl, 4 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
/* eda407: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda408: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* eda40b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeda40eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda40e: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* eda414: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eda416: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eda418: je 0xeda427 */
  if (zf) goto L_eda427;
L_eda41a: /* eda41a: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* eda41f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eda421: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eda423: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda424: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xeda427u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eda427: /* eda427: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* eda42d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* eda42f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eda431: mov edi, eax */
  edi = eax;
/* eda433: jne 0xeda438 */
  if (!zf) goto L_eda438;
L_eda435: /* eda435: lea edi, [ebp - 0x30] */
  edi = (uint32_t)(ebp + 0xffffffd0u);
L_eda438: /* eda438: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* eda43b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* eda43c: mov eax, edx */
  eax = edx;
/* eda43e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* eda441: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* eda444: jne 0xeda45c */
  if (!zf) goto L_eda45c;
L_eda446: /* eda446: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eda449: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eda44a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda44c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eda44f: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* eda455: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda456: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xeda45cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eda45c: /* eda45c: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* eda45f: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xeda465u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* eda465: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda467: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda468: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda46a: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* eda470: call dword ptr [0xf0df68] */
  esp -= 4; W32(esp, 0xeda476u); SPILL(); f_6c440d(); if (g_unwind) return; /* Engine!??0FURL@@QAE@PAV0@PBGW4ETravelType@@@Z */ RELOAD();
/* eda476: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eda479: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* eda47f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda480: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* eda484: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xeda48au); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* eda48a: mov ecx, dword ptr [ebp - 0x84] */
  ecx = R32((uint32_t)(ebp + 0xffffff7cu));
/* eda490: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eda493: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* eda496: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* eda498: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* eda49b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda49c: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xeda4a2u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* eda4a2: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* eda4a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eda4a6: mov ecx, edi */
  ecx = edi;
/* eda4a8: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xeda4aeu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* eda4ae: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* eda4b1: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* eda4b7: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* eda4bd: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* eda4c0: call dword ptr [0xf0df60] */
  esp -= 4; W32(esp, 0xeda4c6u); SPILL(); f_6ccd7e(); if (g_unwind) return; /* Engine!??1FURL@@QAE@XZ */ RELOAD();
/* eda4c6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eda4c9: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* eda4cd: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeda4d3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* eda4d3: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eda4d6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* eda4da: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeda4e0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* eda4e0: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* eda4e3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* eda4e7: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeda4edu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* eda4ed: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* eda4f0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eda4f4: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeda4fau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* eda4fa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eda4fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eda4fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eda4ff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eda506: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eda507: mov esp, ebp */
  esp = ebp;
/* eda509: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eda50a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eda50d(void) {
  LOAD_REGS();
L_eda50d: /* eda50d: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* eda510: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eda515: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eda518: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eda519: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* eda51c: call 0xeec520 */
  esp -= 4; W32(esp, 0xeda521u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eda521(); return;
}

void f_eda521(void) {
  LOAD_REGS();
L_eda521: /* eda521: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* eda527: push 0xef5840 */
  { uint32_t v = 0xef5840u; esp -= 4; W32(esp, v); }
/* eda52c: push 0xf030bc */
  { uint32_t v = 0xf030bcu; esp -= 4; W32(esp, v); }
/* eda531: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xeda533u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda533: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eda536: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* eda539: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* eda53c: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* eda53f: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* eda545: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eda548: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* eda54a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eda54b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda54d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xeda54fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda54f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eda552: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda553: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda555: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xeda557u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda557: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda558: push 0xf030c4 */
  { uint32_t v = 0xf030c4u; esp -= 4; W32(esp, v); }
/* eda55d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xeda55fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda55f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eda562: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda564: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda566: call 0xeec520 */
  esp -= 4; W32(esp, 0xeda56bu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eda56b: guest_badaddr(0xeda56b); return;
}

void f_eda630(void) {
  LOAD_REGS();
L_eda630: /* eda630: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* eda635: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* eda637: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eda63b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eda63d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda63e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eda642: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda643: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xeda645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda645: ret  */
  esp += 4; SPILL(); return;
}

void f_eda660(void) {
  LOAD_REGS();
L_eda660: /* eda660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eda661: mov ebp, esp */
  ebp = esp;
/* eda663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eda665: push 0xeee370 */
  { uint32_t v = 0xeee370u; esp -= 4; W32(esp, v); }
/* eda66a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eda670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eda678: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eda67b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* eda67e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* eda681: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* eda682: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eda683: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda684: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* eda687: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* eda68a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eda68b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eda68e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eda695: jne 0xeda6ac */
  if (!zf) goto L_eda6ac;
L_eda697: /* eda697: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* eda69a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* eda69b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda69d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* eda6a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda6a1: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eda6a6: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xeda6acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eda6ac: /* eda6ac: call 0xeebba0 */
  esp -= 4; W32(esp, 0xeda6b1u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* eda6b1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* eda6b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eda6b5: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* eda6b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eda6ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eda6bb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eda6c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eda6c3: mov esp, ebp */
  esp = ebp;
/* eda6c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eda6c6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eda6c9(void) {
  LOAD_REGS();
L_eda6c9: /* eda6c9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eda6cc: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eda6d1: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* eda6d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eda6d5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* eda6d8: call 0xeec520 */
  esp -= 4; W32(esp, 0xeda6ddu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eda6dd(); return;
}

void f_eda6dd(void) {
  LOAD_REGS();
L_eda6dd: /* eda6dd: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* eda6e3: push 0xef5888 */
  { uint32_t v = 0xef5888u; esp -= 4; W32(esp, v); }
/* eda6e8: push 0xf031d4 */
  { uint32_t v = 0xf031d4u; esp -= 4; W32(esp, v); }
/* eda6ed: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xeda6efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda6ef: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eda6f2: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* eda6f5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eda6f8: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* eda6fb: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* eda701: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eda704: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* eda706: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda707: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda709: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xeda70bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda70b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eda70e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda70f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda711: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xeda713u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda714: push 0xf031dc */
  { uint32_t v = 0xf031dcu; esp -= 4; W32(esp, v); }
/* eda719: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xeda71bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda71b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eda71e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda720: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda722: call 0xeec520 */
  esp -= 4; W32(esp, 0xeda727u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eda727: guest_badaddr(0xeda727); return;
}

void f_eda770(void) {
  LOAD_REGS();
L_eda770: /* eda770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eda771: mov ebp, esp */
  ebp = esp;
/* eda773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eda775: push 0xeee389 */
  { uint32_t v = 0xeee389u; esp -= 4; W32(esp, v); }
/* eda77a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eda780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eda788: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eda78b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* eda78e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* eda791: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* eda792: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eda793: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda794: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* eda797: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* eda79a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eda79b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eda79e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eda7a5: jne 0xeda7bc */
  if (!zf) goto L_eda7bc;
L_eda7a7: /* eda7a7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* eda7aa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* eda7ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda7ad: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* eda7b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda7b1: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eda7b6: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xeda7bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eda7bc: /* eda7bc: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eda7bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eda7c0: call 0xed1113 */
  esp -= 4; W32(esp, 0xeda7c5u); SPILL(); f_ed1113(); if (g_unwind) return; RELOAD();
/* eda7c5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eda7c8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* eda7cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda7cc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* eda7d0: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xeda7d6u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* eda7d6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eda7d9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eda7dd: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeda7e3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* eda7e3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eda7e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eda7e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eda7e8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eda7ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eda7f0: mov esp, ebp */
  esp = ebp;
/* eda7f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eda7f3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eda7f6(void) {
  LOAD_REGS();
L_eda7f6: /* eda7f6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* eda7f9: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eda7fe: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* eda801: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda802: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* eda805: call 0xeec520 */
  esp -= 4; W32(esp, 0xeda80au); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eda80a(); return;
}

void f_eda80a(void) {
  LOAD_REGS();
L_eda80a: /* eda80a: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* eda810: push 0xef58d8 */
  { uint32_t v = 0xef58d8u; esp -= 4; W32(esp, v); }
/* eda815: push 0xf03200 */
  { uint32_t v = 0xf03200u; esp -= 4; W32(esp, v); }
/* eda81a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xeda81cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda81c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eda81f: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* eda822: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* eda825: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* eda828: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* eda82e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eda831: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* eda833: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eda834: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda836: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xeda838u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda838: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eda83b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda83c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda83e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xeda840u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda841: push 0xf03208 */
  { uint32_t v = 0xf03208u; esp -= 4; W32(esp, v); }
/* eda846: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xeda848u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda848: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eda84b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda84d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda84f: call 0xeec520 */
  esp -= 4; W32(esp, 0xeda854u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_eda854: guest_badaddr(0xeda854); return;
}

void f_eda8a0(void) {
  LOAD_REGS();
L_eda8a0: /* eda8a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eda8a1: mov ebp, esp */
  ebp = esp;
/* eda8a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eda8a5: push 0xeee3a9 */
  { uint32_t v = 0xeee3a9u; esp -= 4; W32(esp, v); }
/* eda8aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eda8b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda8b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eda8b8: sub esp, 0x138 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x138u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eda8be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eda8bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda8c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eda8c1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eda8c4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* eda8c7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eda8ce: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xeda8d4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* eda8d4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eda8d7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* eda8da: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* eda8dd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eda8e0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eda8e1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eda8e4: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* eda8e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda8e8: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* eda8ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda8ee: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* eda8f2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xeda8f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda8f5: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* eda8f8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* eda8f9: mov eax, edx */
  eax = edx;
/* eda8fb: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* eda8fe: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* eda901: jne 0xeda919 */
  if (!zf) goto L_eda919;
L_eda903: /* eda903: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* eda906: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eda907: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda909: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* eda90c: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* eda912: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eda913: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xeda919u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_eda919: /* eda919: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eda91c: mov byte ptr [ebp - 0x18], 0x4c */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x4cu);
/* eda920: mov byte ptr [ebp - 0x17], 0x77 */
  W8((uint32_t)(ebp + 0xffffffe9u), 0x77u);
/* eda924: mov byte ptr [ebp - 0x16], 0x37 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x37u);
/* eda928: mov byte ptr [ebp - 0x15], 0x78 */
  W8((uint32_t)(ebp + 0xffffffebu), 0x78u);
/* eda92c: mov byte ptr [ebp - 0x14], 0x30 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x30u);
/* eda930: mov byte ptr [ebp - 0x13], 0x52 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x52u);
/* eda934: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* eda938: lea esi, [ebp - 0x24] */
  esi = (uint32_t)(ebp + 0xffffffdcu);
/* eda93b: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xeda941u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
L_eda941: /* eda941: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* eda945: je 0xeda951 */
  if (zf) goto L_eda951;
L_eda947: /* eda947: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* eda949: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* eda94b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* eda94c: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eda94f: jmp 0xeda941 */
  goto L_eda941;
L_eda951: /* eda951: xor eax, eax */
  eax = 0;
/* eda953: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
L_eda956: /* eda956: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* eda958: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* eda959: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* eda95b: je 0xeda960 */
  if (zf) goto L_eda960;
L_eda95d: /* eda95d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eda95e: jmp 0xeda956 */
  goto L_eda956;
L_eda960: /* eda960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda961: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* eda964: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda965: lea edi, [ebp - 0x144] */
  edi = (uint32_t)(ebp + 0xfffffebcu);
/* eda96b: call 0xed9710 */
  esp -= 4; W32(esp, 0xeda970u); SPILL(); f_ed9710(); if (g_unwind) return; RELOAD();
/* eda970: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* eda976: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eda977: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* eda97a: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* eda97c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eda97d: call 0xed101e */
  esp -= 4; W32(esp, 0xeda982u); SPILL(); f_ed101e(); if (g_unwind) return; RELOAD();
/* eda982: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eda985: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda986: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eda989: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* eda98b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eda98c: call 0xed137a */
  esp -= 4; W32(esp, 0xeda991u); SPILL(); f_ed137a(); if (g_unwind) return; RELOAD();
/* eda991: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* eda994: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* eda996: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* eda997: call dword ptr [0xf0dbac] */
  esp -= 4; W32(esp, 0xeda99du); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* eda99d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* eda9a0: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eda9a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eda9a4: call dword ptr [0xf0dc20] */
  esp -= 4; W32(esp, 0xeda9aau); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* eda9aa: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eda9ad: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* eda9b1: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xeda9b7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* eda9b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* eda9ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eda9bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eda9bc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eda9c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eda9c4: mov esp, ebp */
  esp = ebp;
/* eda9c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eda9c7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eda9ca(void) {
  LOAD_REGS();
L_eda9ca: /* eda9ca: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* eda9cd: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* eda9d2: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* eda9d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eda9d6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* eda9d9: call 0xeec520 */
  esp -= 4; W32(esp, 0xeda9deu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_eda9de(); return;
}

void f_eda9de(void) {
  LOAD_REGS();
L_eda9de: /* eda9de: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* eda9e4: push 0xef592c */
  { uint32_t v = 0xef592cu; esp -= 4; W32(esp, v); }
/* eda9e9: push 0xf0322c */
  { uint32_t v = 0xf0322cu; esp -= 4; W32(esp, v); }
/* eda9ee: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xeda9f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eda9f0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eda9f3: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* eda9f6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* eda9f9: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* eda9fc: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* edaa02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edaa05: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* edaa07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edaa08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edaa0a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xedaa0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edaa0c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edaa0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edaa10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edaa12: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xedaa14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edaa14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edaa15: push 0xf03234 */
  { uint32_t v = 0xf03234u; esp -= 4; W32(esp, v); }
/* edaa1a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xedaa1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edaa1c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edaa1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edaa21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edaa23: call 0xeec520 */
  esp -= 4; W32(esp, 0xedaa28u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edaa28: guest_badaddr(0xedaa28); return;
}

void f_edaaa0(void) {
  LOAD_REGS();
L_edaaa0: /* edaaa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edaaa1: mov ebp, esp */
  ebp = esp;
/* edaaa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edaaa5: push 0xeee3d8 */
  { uint32_t v = 0xeee3d8u; esp -= 4; W32(esp, v); }
/* edaaaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edaab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edaab1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edaab8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edaabb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edaabc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edaabd: mov esi, ecx */
  esi = ecx;
/* edaabf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edaac0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edaac3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* edaac6: mov dword ptr [esi], 0xef45c0 */
  W32((uint32_t)(esi), 0xef45c0u);
/* edaacc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edaad3: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* edaad6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edaad8: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* edaadc: je 0xedaaee */
  if (zf) goto L_edaaee;
L_edaade: /* edaade: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* edaae1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edaae2: call 0xeebbac */
  esp -= 4; W32(esp, 0xedaae7u); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
/* edaae7: mov dword ptr [esi + 0x18], 0xffffffff */
  W32((uint32_t)(esi + 0x18u), 0xffffffffu);
L_edaaee: /* edaaee: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* edaaf1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edaaf3: je 0xedaafb */
  if (zf) goto L_edaafb;
L_edaaf5: /* edaaf5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edaaf7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edaaf9: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xedaafbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edaafb: /* edaafb: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* edaafe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edab00: je 0xedab08 */
  if (zf) goto L_edab08;
L_edab02: /* edab02: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* edab04: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edab06: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xedab08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edab08: /* edab08: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* edab0b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edab12: call dword ptr [0xf0ddc8] */
  esp -= 4; W32(esp, 0xedab18u); SPILL(); f_6c3e13(); if (g_unwind) return; /* Engine!??1?$TArray@E@@QAE@XZ */ RELOAD();
/* edab18: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* edab1b: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* edab22: call dword ptr [0xf0ddc8] */
  esp -= 4; W32(esp, 0xedab28u); SPILL(); f_6c3e13(); if (g_unwind) return; /* Engine!??1?$TArray@E@@QAE@XZ */ RELOAD();
/* edab28: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edab2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edab2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edab2d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edab34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edab35: mov esp, ebp */
  esp = ebp;
/* edab37: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edab38: ret  */
  esp += 4; SPILL(); return;
}

void f_edab39(void) {
  LOAD_REGS();
L_edab39: /* edab39: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* edab3c: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edab41: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* edab44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edab45: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* edab48: call 0xeec520 */
  esp -= 4; W32(esp, 0xedab4du); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edab4d(); return;
}

void f_edab4d(void) {
  LOAD_REGS();
L_edab4d: /* edab4d: push 0xef5974 */
  { uint32_t v = 0xef5974u; esp -= 4; W32(esp, v); }
/* edab52: push 0xf03270 */
  { uint32_t v = 0xf03270u; esp -= 4; W32(esp, v); }
/* edab57: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedab5du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edab5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edab60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edab62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edab64: call 0xeec520 */
  esp -= 4; W32(esp, 0xedab69u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edab69: guest_badaddr(0xedab69); return;
}

void f_edabb0(void) {
  LOAD_REGS();
L_edabb0: /* edabb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edabb1: mov ebp, esp */
  ebp = esp;
/* edabb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edabb5: push 0xeee3f0 */
  { uint32_t v = 0xeee3f0u; esp -= 4; W32(esp, v); }
/* edabba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edabc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edabc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edabc8: sub esp, 0x130 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x130u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edabce: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* edabd1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edabd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edabd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edabd4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edabd7: mov ebx, ecx */
  ebx = ecx;
/* edabd9: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* edabdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edabdd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edabdf: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* edabe2: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* edabe5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edabe7: lea edx, [ebp - 0x13c] */
  edx = (uint32_t)(ebp + 0xfffffec4u);
/* edabed: mov dword ptr [ebp - 0x138], eax */
  W32((uint32_t)(ebp + 0xfffffec8u), eax);
/* edabf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edabf4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edabf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edabf6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edabfd: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* edac04: mov dword ptr [ebp - 0x13c], 1 */
  W32((uint32_t)(ebp + 0xfffffec4u), 0x1u);
/* edac0e: call 0xeebbe8 */
  esp -= 4; W32(esp, 0xedac13u); SPILL(); f_eebbe8(); if (g_unwind) return; RELOAD();
/* edac13: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edac16: jne 0xedac47 */
  if (!zf) goto L_edac47;
L_edac18: /* edac18: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedac1du); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edac1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edac1e: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* edac23: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* edac25: push 0xf03380 */
  { uint32_t v = 0xf03380u; esp -= 4; W32(esp, v); }
/* edac2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_edac2b: /* edac2b: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedac31u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edac31: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edac34: /* edac34: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edac37: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edac3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edac3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edac40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edac41: mov esp, ebp */
  esp = ebp;
/* edac43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edac44: ret 4 */
  esp += 8; SPILL(); return;
L_edac47: /* edac47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edac49: je 0xedac34 */
  if (zf) goto L_edac34;
L_edac4b: /* edac4b: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* edac4e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* edac51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edac52: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* edac55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edac56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edac57: mov dword ptr [ebp + 8], 0x10 */
  W32((uint32_t)(ebp + 0x8u), 0x10u);
/* edac5e: call 0xeebbfa */
  esp -= 4; W32(esp, 0xedac63u); SPILL(); f_eebbfa(); if (g_unwind) return; RELOAD();
/* edac63: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edac66: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* edac69: jne 0xedac81 */
  if (!zf) goto L_edac81;
L_edac6b: /* edac6b: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedac70u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edac70: mov edx, dword ptr [0xf0dc5c] */
  edx = R32((uint32_t)(0xf0dc5cu));
/* edac76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edac77: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* edac79: push 0xf033c8 */
  { uint32_t v = 0xf033c8u; esp -= 4; W32(esp, v); }
/* edac7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edac7f: jmp 0xedac2b */
  goto L_edac2b;
L_edac81: /* edac81: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* edac83: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edac86: mov edi, esp */
  edi = esp;
/* edac88: mov ecx, 6 */
  ecx = 0x6u;
/* edac8d: lea esi, [ebp - 0x38] */
  esi = (uint32_t)(ebp + 0xffffffc8u);
/* edac90: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* edac92: mov ecx, ebx */
  ecx = ebx;
/* edac94: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0xedac97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edac97: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edac9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edac9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edac9c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edaca3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edaca4: mov esp, ebp */
  esp = ebp;
/* edaca6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edaca7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_edacaa(void) {
  LOAD_REGS();
L_edacaa: /* edacaa: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* edacad: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edacb2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* edacb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edacb6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* edacb9: call 0xeec520 */
  esp -= 4; W32(esp, 0xedacbeu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edacbe(); return;
}

void f_edacbe(void) {
  LOAD_REGS();
L_edacbe: /* edacbe: push 0xef59a4 */
  { uint32_t v = 0xef59a4u; esp -= 4; W32(esp, v); }
/* edacc3: push 0xf0341c */
  { uint32_t v = 0xf0341cu; esp -= 4; W32(esp, v); }
/* edacc8: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedacceu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edacce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edacd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edacd3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edacd5: call 0xeec520 */
  esp -= 4; W32(esp, 0xedacdau); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edacda: guest_badaddr(0xedacda); return;
}

void f_edad30(void) {
  LOAD_REGS();
L_edad30: /* edad30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edad31: mov ebp, esp */
  ebp = esp;
/* edad33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edad35: push 0xeee400 */
  { uint32_t v = 0xeee400u; esp -= 4; W32(esp, v); }
/* edad3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edad40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edad41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edad48: sub esp, 0x40c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edad4e: mov eax, dword ptr [0xf076d4] */
  eax = R32((uint32_t)(0xf076d4u));
/* edad53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edad54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edad55: xor ebx, ebx */
  ebx = 0;
/* edad57: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edad59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edad5a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edad5d: mov esi, ecx */
  esi = ecx;
/* edad5f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* edad62: je 0xedad72 */
  if (zf) goto L_edad72;
L_edad64: /* edad64: cmp dword ptr [0xf076dc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf076dcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edad6a: jg 0xedad72 */
  if ((!zf && sf == of)) goto L_edad72;
L_edad6c: /* edad6c: cmp dword ptr [esi + 0x44], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edad70: jne 0xedada8 */
  if (!zf) goto L_edada8;
L_edad72: /* edad72: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* edad75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edad76: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* edad7b: lea eax, [ebp - 0x418] */
  eax = (uint32_t)(ebp + 0xfffffbe8u);
/* edad81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edad82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edad83: call 0xeebba6 */
  esp -= 4; W32(esp, 0xedad88u); SPILL(); f_eebba6(); if (g_unwind) return; RELOAD();
/* edad88: mov edi, eax */
  edi = eax;
/* edad8a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edad8c: jg 0xedadb9 */
  if ((!zf && sf == of)) goto L_edadb9;
L_edad8e: /* edad8e: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* edad91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edad92: call 0xeebbac */
  esp -= 4; W32(esp, 0xedad97u); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
/* edad97: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* edad99: mov ecx, esi */
  ecx = esi;
/* edad9b: mov dword ptr [esi + 0x18], 0xffffffff */
  W32((uint32_t)(esi + 0x18u), 0xffffffffu);
/* edada2: mov dword ptr [esi + 0x44], ebx */
  W32((uint32_t)(esi + 0x44u), ebx);
/* edada5: call dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); esp -= 4; W32(esp, 0xedada8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edada8: /* edada8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edadab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edadb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edadb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edadb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edadb5: mov esp, ebp */
  esp = ebp;
/* edadb7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edadb8: ret  */
  esp += 4; SPILL(); return;
L_edadb9: /* edadb9: add dword ptr [esi + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* edadbc: call 0xed19ab */
  esp -= 4; W32(esp, 0xedadc1u); SPILL(); f_ed19ab(); if (g_unwind) return; RELOAD();
/* edadc1: call 0xeec6fc */
  esp -= 4; W32(esp, 0xedadc6u); SPILL(); f_eec6fc(); if (g_unwind) return; RELOAD();
/* edadc6: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* edadc9: cmp dword ptr [0xf076d4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf076d4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edadcf: je 0xedadd7 */
  if (zf) goto L_edadd7;
L_edadd1: /* edadd1: sub dword ptr [0xf076dc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf076dcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xf076dcu), r);
  }
L_edadd7: /* edadd7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edadd9: lea ebx, [esi + 0x1c] */
  ebx = (uint32_t)(esi + 0x1cu);
/* edaddc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edaddd: mov ecx, ebx */
  ecx = ebx;
/* edaddf: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xedade5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* edade5: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* edade7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edade8: lea ecx, [ebp - 0x418] */
  ecx = (uint32_t)(ebp + 0xfffffbe8u);
/* edadee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edadef: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* edadf1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edadf2: call 0xed1a64 */
  esp -= 4; W32(esp, 0xedadf7u); SPILL(); f_ed1a64(); if (g_unwind) return; RELOAD();
/* edadf7: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* edadfa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edadfd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edadff: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* edae04: lea eax, [ebp - 0x418] */
  eax = (uint32_t)(ebp + 0xfffffbe8u);
/* edae0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edae0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edae0c: call 0xeebba6 */
  esp -= 4; W32(esp, 0xedae11u); SPILL(); f_eebba6(); if (g_unwind) return; RELOAD();
/* edae11: mov edi, eax */
  edi = eax;
/* edae13: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edae15: jle 0xedae33 */
  if ((zf || sf != of)) goto L_edae33;
L_edae17: /* edae17: add dword ptr [esi + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* edae1a: mov eax, dword ptr [0xf076d4] */
  eax = R32((uint32_t)(0xf076d4u));
/* edae1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edae21: je 0xedadd7 */
  if (zf) goto L_edadd7;
L_edae23: /* edae23: mov eax, dword ptr [0xf076dc] */
  eax = R32((uint32_t)(0xf076dcu));
/* edae28: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* edae2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edae2c: mov dword ptr [0xf076dc], eax */
  W32((uint32_t)(0xf076dcu), eax);
/* edae31: jg 0xedadd7 */
  if ((!zf && sf == of)) goto L_edadd7;
L_edae33: /* edae33: cmp dword ptr [esi + 0x44], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edae37: je 0xedada8 */
  if (zf) goto L_edada8;
L_edae3d: /* edae3d: cmp dword ptr [esi + 0x48], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edae41: jne 0xedae73 */
  if (!zf) goto L_edae73;
L_edae43: /* edae43: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* edae46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edae48: call dword ptr [edx + 0x58] */
  { uint32_t t = R32((uint32_t)(edx + 0x58u)); esp -= 4; W32(esp, 0xedae4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edae4b: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* edae4e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* edae50: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0xedae53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edae53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edae55: je 0xedada8 */
  if (zf) goto L_edada8;
L_edae5b: /* edae5b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* edae5d: mov ecx, esi */
  ecx = esi;
/* edae5f: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0xedae62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edae62: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edae65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edae6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edae6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edae6e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edae6f: mov esp, ebp */
  esp = ebp;
/* edae71: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edae72: ret  */
  esp += 4; SPILL(); return;
L_edae73: /* edae73: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* edae75: mov ecx, esi */
  ecx = esi;
/* edae77: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0xedae7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edae7a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edae7d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edae7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edae7f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edae86: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edae87: mov esp, ebp */
  esp = ebp;
/* edae89: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edae8a: ret  */
  esp += 4; SPILL(); return;
}

void f_edae8b(void) {
  LOAD_REGS();
L_edae8b: /* edae8b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* edae8e: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edae93: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* edae96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edae97: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* edae9a: call 0xeec520 */
  esp -= 4; W32(esp, 0xedae9fu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edae9f(); return;
}

void f_edae9f(void) {
  LOAD_REGS();
L_edae9f: /* edae9f: push 0xef59ec */
  { uint32_t v = 0xef59ecu; esp -= 4; W32(esp, v); }
/* edaea4: push 0xf034c0 */
  { uint32_t v = 0xf034c0u; esp -= 4; W32(esp, v); }
/* edaea9: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedaeafu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edaeaf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edaeb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edaeb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edaeb6: call 0xeec520 */
  esp -= 4; W32(esp, 0xedaebbu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edaebb: guest_badaddr(0xedaebb); return;
}

void f_edaf30(void) {
  LOAD_REGS();
L_edaf30: /* edaf30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* edaf34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edaf36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edaf37: mov esi, ecx */
  esi = ecx;
/* edaf39: jne 0xedaf46 */
  if (!zf) goto L_edaf46;
L_edaf3b: /* edaf3b: mov dword ptr [esi + 0x44], 5 */
  W32((uint32_t)(esi + 0x44u), 0x5u);
/* edaf42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edaf43: ret 4 */
  esp += 8; SPILL(); return;
L_edaf46: /* edaf46: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* edaf49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edaf4a: call 0xeebbac */
  esp -= 4; W32(esp, 0xedaf4fu); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
/* edaf4f: mov dword ptr [esi + 0x18], 0xffffffff */
  W32((uint32_t)(esi + 0x18u), 0xffffffffu);
/* edaf56: mov dword ptr [esi + 0x44], 0 */
  W32((uint32_t)(esi + 0x44u), 0x0u);
/* edaf5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edaf5e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_edaf80(void) {
  LOAD_REGS();
L_edaf80: /* edaf80: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* edaf83: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* edaf87: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* edaf89: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* edaf8c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* edaf90: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* edaf92: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edafb0(void) {
  LOAD_REGS();
L_edafb0: /* edafb0: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* edafb3: ret  */
  esp += 4; SPILL(); return;
}

void f_edafd0(void) {
  LOAD_REGS();
L_edafd0: /* edafd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edafd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edafd2: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* edafd6: lea esi, [ecx + 0x44] */
  esi = (uint32_t)(ecx + 0x44u);
/* edafd9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edafdb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edafdc: mov ecx, esi */
  ecx = esi;
/* edafde: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xedafe4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* edafe4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* edafe8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* edafea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edafeb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edafec: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* edafee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edafef: call 0xed1a64 */
  esp -= 4; W32(esp, 0xedaff4u); SPILL(); f_ed1a64(); if (g_unwind) return; RELOAD();
/* edaff4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edaff7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edaff8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edaff9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edb010(void) {
  LOAD_REGS();
L_edb010: /* edb010: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb011: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edb012: mov edi, ecx */
  edi = ecx;
/* edb014: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* edb017: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* edb01a: jbe 0xedb060 */
  if ((cf | zf)) goto L_edb060;
L_edb01c: /* edb01c: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* edb01f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb020: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* edb023: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* edb027: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* edb029: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* edb02d: lea esi, [edi + 0x44] */
  esi = (uint32_t)(edi + 0x44u);
/* edb030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb031: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb032: call 0xed1a64 */
  esp -= 4; W32(esp, 0xedb037u); SPILL(); f_ed1a64(); if (g_unwind) return; RELOAD();
/* edb037: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* edb03a: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* edb03d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edb03f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb042: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb043: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* edb045: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb046: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xedb049u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edb049: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb04b: mov ecx, esi */
  ecx = esi;
/* edb04d: call dword ptr [0xf0df70] */
  esp -= 4; W32(esp, 0xedb053u); SPILL(); f_6c2685(); if (g_unwind) return; /* Engine!?Empty@?$TArray@E@@QAEXH@Z */ RELOAD();
/* edb053: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edb055: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* edb057: mov ecx, esi */
  ecx = esi;
/* edb059: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xedb05fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* edb05f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_edb060: /* edb060: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edb061: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* edb062: ret  */
  esp += 4; SPILL(); return;
}

void f_edb090(void) {
  LOAD_REGS();
L_edb090: /* edb090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb091: mov esi, ecx */
  esi = ecx;
/* edb093: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* edb096: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edb098: mov dword ptr [esi], 0xef45a0 */
  W32((uint32_t)(esi), 0xef45a0u);
/* edb09e: jne 0xedb0b0 */
  if (!zf) goto L_edb0b0;
L_edb0a0: /* edb0a0: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* edb0a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb0a4: call 0xeebbac */
  esp -= 4; W32(esp, 0xedb0a9u); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
/* edb0a9: mov dword ptr [esi + 0x18], 0xffffffff */
  W32((uint32_t)(esi + 0x18u), 0xffffffffu);
L_edb0b0: /* edb0b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edb0b1: ret  */
  esp += 4; SPILL(); return;
}

void f_edb0d0(void) {
  LOAD_REGS();
L_edb0d0: /* edb0d0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edb0d6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edb0d8: push 0xeee419 */
  { uint32_t v = 0xeee419u; esp -= 4; W32(esp, v); }
/* edb0dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb0de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edb0e5: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edb0e8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edb0e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb0ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edb0eb: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* edb0ef: mov edi, ecx */
  edi = ecx;
/* edb0f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb0f2: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* edb0f6: call 0xed1a73 */
  esp -= 4; W32(esp, 0xedb0fbu); SPILL(); f_ed1a73(); if (g_unwind) return; RELOAD();
/* edb0fb: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* edb0ff: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* edb103: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* edb106: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* edb108: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* edb10c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb10d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb10f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edb110: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edb111: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb112: call 0xeebc00 */
  esp -= 4; W32(esp, 0xedb117u); SPILL(); f_eebc00(); if (g_unwind) return; RELOAD();
/* edb117: mov esi, eax */
  esi = eax;
/* edb119: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edb11b: jge 0xedb172 */
  if ((sf == of)) goto L_edb172;
L_edb11d: /* edb11d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edb11e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edb120: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* edb124: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb125: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* edb129: call 0xed1861 */
  esp -= 4; W32(esp, 0xedb12eu); SPILL(); f_ed1861(); if (g_unwind) return; RELOAD();
/* edb12e: mov ebx, eax */
  ebx = eax;
/* edb130: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* edb138: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedb13du); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edb13d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb13e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb13f: mov ecx, ebx */
  ecx = ebx;
/* edb141: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xedb147u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* edb147: mov edx, dword ptr [0xf0dc5c] */
  edx = R32((uint32_t)(0xf0dc5cu));
/* edb14d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb14e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* edb150: push 0xf0372c */
  { uint32_t v = 0xf0372cu; esp -= 4; W32(esp, v); }
/* edb155: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb156: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedb15cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edb15c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb15f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* edb163: mov dword ptr [esp + 0x34], 0xffffffff */
  W32((uint32_t)(esp + 0x34u), 0xffffffffu);
/* edb16b: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedb171u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* edb171: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_edb172: /* edb172: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* edb175: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* edb179: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* edb17b: mov dword ptr [edi + 0x20], eax */
  W32((uint32_t)(edi + 0x20u), eax);
/* edb17e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edb17f: mov eax, esi */
  eax = esi;
/* edb181: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edb182: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edb183: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edb18a: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb18d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_edb1c0(void) {
  LOAD_REGS();
L_edb1c0: /* edb1c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edb1c1: mov ebp, esp */
  ebp = esp;
/* edb1c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edb1c5: push 0xeee430 */
  { uint32_t v = 0xeee430u; esp -= 4; W32(esp, v); }
/* edb1ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edb1d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb1d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edb1d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb1d9: mov eax, 0x1024 */
  eax = 0x1024u;
/* edb1de: call 0xeec780 */
  esp -= 4; W32(esp, 0xedb1e3u); SPILL(); f_eec780(); if (g_unwind) return; RELOAD();
/* edb1e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edb1e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb1e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edb1e6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edb1e9: mov edi, ecx */
  edi = ecx;
/* edb1eb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edb1f2: mov dword ptr [ebp - 0x18], 0x10 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x10u);
/* edb1f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_edb200: /* edb200: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* edb203: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb204: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* edb207: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* edb20a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb20b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb20d: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* edb212: lea edx, [ebp - 0x1034] */
  edx = (uint32_t)(ebp + 0xffffefccu);
/* edb218: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edb219: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb21a: call 0xeebc06 */
  esp -= 4; W32(esp, 0xedb21fu); SPILL(); f_eebc06(); if (g_unwind) return; RELOAD();
/* edb21f: mov esi, eax */
  esi = eax;
/* edb221: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edb224: jne 0xedb26c */
  if (!zf) goto L_edb26c;
L_edb226: /* edb226: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedb22bu); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edb22b: cmp eax, 0x2733 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2733u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edb230: je 0xedb25b */
  if (zf) goto L_edb25b;
L_edb232: /* edb232: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedb237u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edb237: cmp eax, 0x2746 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2746u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edb23c: je 0xedb200 */
  if (zf) goto L_edb200;
L_edb23e: /* edb23e: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedb243u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edb243: mov ecx, dword ptr [0xf0dc5c] */
  ecx = R32((uint32_t)(0xf0dc5cu));
/* edb249: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edb24b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb24c: push 0xf03768 */
  { uint32_t v = 0xf03768u; esp -= 4; W32(esp, v); }
/* edb251: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edb252: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedb258u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edb258: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edb25b: /* edb25b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edb25e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edb25f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edb260: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edb267: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edb268: mov esp, ebp */
  esp = ebp;
/* edb26a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edb26b: ret  */
  esp += 4; SPILL(); return;
L_edb26c: /* edb26c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edb26e: jle 0xedb25b */
  if ((zf || sf != of)) goto L_edb25b;
L_edb270: /* edb270: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* edb273: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* edb276: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edb278: mov dword ptr [edi + 0x24], ecx */
  W32((uint32_t)(edi + 0x24u), ecx);
/* edb27b: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* edb27e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edb281: mov eax, esp */
  eax = esp;
/* edb283: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* edb285: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* edb288: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* edb28b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* edb28e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* edb291: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* edb294: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* edb297: call 0xed133e */
  esp -= 4; W32(esp, 0xedb29cu); SPILL(); f_ed133e(); if (g_unwind) return; RELOAD();
/* edb29c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* edb29e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb29f: lea ecx, [ebp - 0x1034] */
  ecx = (uint32_t)(ebp + 0xffffefccu);
/* edb2a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb2a6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* edb2a9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* edb2ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb2ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb2ad: mov ecx, edi */
  ecx = edi;
/* edb2af: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xedb2b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edb2b2: jmp 0xedb200 */
  goto L_edb200;
}

void f_edb2b7(void) {
  LOAD_REGS();
L_edb2b7: /* edb2b7: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* edb2ba: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edb2bf: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* edb2c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edb2c3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* edb2c6: call 0xeec520 */
  esp -= 4; W32(esp, 0xedb2cbu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edb2cb(); return;
}

void f_edb2cb(void) {
  LOAD_REGS();
L_edb2cb: /* edb2cb: push 0xef5a34 */
  { uint32_t v = 0xef5a34u; esp -= 4; W32(esp, v); }
/* edb2d0: push 0xf037ac */
  { uint32_t v = 0xf037acu; esp -= 4; W32(esp, v); }
/* edb2d5: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedb2dbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edb2db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb2de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb2e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb2e2: call 0xeec520 */
  esp -= 4; W32(esp, 0xedb2e7u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edb2e7: guest_badaddr(0xedb2e7); return;
}

void f_edb340(void) {
  LOAD_REGS();
L_edb340: /* edb340: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edb342: push 0xeee449 */
  { uint32_t v = 0xeee449u; esp -= 4; W32(esp, v); }
/* edb347: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edb34d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb34e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edb355: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edb358: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb359: mov esi, ecx */
  esi = ecx;
/* edb35b: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* edb35f: call dword ptr [0xf0db90] */
  esp -= 4; W32(esp, 0xedb365u); SPILL(); f_4e2306(); if (g_unwind) return; /* Core!??0FArchive@@QAE@XZ */ RELOAD();
/* edb365: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* edb369: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* edb36d: xor edx, edx */
  edx = 0;
/* edb36f: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* edb372: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* edb376: mov dword ptr [esi], 0xef44c0 */
  W32((uint32_t)(esi), 0xef44c0u);
/* edb37c: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* edb37f: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* edb382: mov dword ptr [esi + 0x10], 1 */
  W32((uint32_t)(esi + 0x10u), 0x1u);
/* edb389: mov dword ptr [esi + 0x38], 0x2710 */
  W32((uint32_t)(esi + 0x38u), 0x2710u);
/* edb390: jae 0xedb39e */
  if (!cf) goto L_edb39e;
L_edb392: /* edb392: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* edb395: mov dword ptr [esi + 8], 0x80000000 */
  W32((uint32_t)(esi + 0x8u), 0x80000000u);
/* edb39c: jmp 0xedb3cc */
  goto L_edb3cc;
L_edb39e: /* edb39e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* edb3a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb3a1: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* edb3a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb3a6: call 0xed1a64 */
  esp -= 4; W32(esp, 0xedb3abu); SPILL(); f_ed1a64(); if (g_unwind) return; RELOAD();
/* edb3ab: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* edb3ae: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* edb3b1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* edb3b4: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* edb3b7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* edb3bb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb3be: add edx, -4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* edb3c1: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* edb3c4: or eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* edb3c9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_edb3cc: /* edb3cc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* edb3d0: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* edb3d3: mov eax, esi */
  eax = esi;
/* edb3d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edb3d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edb3dd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb3e0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edb420(void) {
  LOAD_REGS();
L_edb420: /* edb420: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edb421: mov ebp, esp */
  ebp = esp;
/* edb423: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edb425: push 0xeee460 */
  { uint32_t v = 0xeee460u; esp -= 4; W32(esp, v); }
/* edb42a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edb430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb431: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edb438: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edb43b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edb43c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb43d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edb43e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* edb441: mov esi, ecx */
  esi = ecx;
/* edb443: cmp edi, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edb446: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edb449: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edb450: jg 0xedb4b6 */
  if ((!zf && sf == of)) goto L_edb4b6;
L_edb452: /* edb452: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* edb455: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* edb458: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edb459: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb45a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb45b: call 0xed1a64 */
  esp -= 4; W32(esp, 0xedb460u); SPILL(); f_ed1a64(); if (g_unwind) return; RELOAD();
/* edb460: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* edb463: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* edb466: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edb468: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb46b: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* edb46d: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* edb470: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* edb473: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edb476: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edb47d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edb47e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edb47f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edb480: mov esp, ebp */
  esp = ebp;
/* edb482: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edb483: ret 8 */
  esp += 12; SPILL(); return;
L_edb4b6: /* edb4b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edb4b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edb4ba: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* edb4c1: mov dword ptr [esi + 0x44], 0 */
  W32((uint32_t)(esi + 0x44u), 0x0u);
/* edb4c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edb4c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edb4d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edb4d1: mov esp, ebp */
  esp = ebp;
/* edb4d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edb4d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edb486(void) {
  LOAD_REGS();
L_edb486: /* edb486: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* edb489: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edb48e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* edb491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb492: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* edb495: call 0xeec520 */
  esp -= 4; W32(esp, 0xedb49au); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edb49a(); return;
}

void f_edb49a(void) {
  LOAD_REGS();
L_edb49a: /* edb49a: push 0xef5a58 */
  { uint32_t v = 0xef5a58u; esp -= 4; W32(esp, v); }
/* edb49f: push 0xf037b4 */
  { uint32_t v = 0xf037b4u; esp -= 4; W32(esp, v); }
/* edb4a4: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedb4aau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edb4aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb4ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb4af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb4b1: call 0xeec520 */
  esp -= 4; W32(esp, 0xedb4b6u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* edb4b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edb4b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edb4ba: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* edb4c1: mov dword ptr [esi + 0x44], 0 */
  W32((uint32_t)(esi + 0x44u), 0x0u);
/* edb4c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edb4c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edb4d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edb4d1: mov esp, ebp */
  esp = ebp;
/* edb4d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edb4d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edb510(void) {
  LOAD_REGS();
L_edb510: /* edb510: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* edb513: xor eax, eax */
  eax = 0;
/* edb515: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edb517: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* edb51a: ret  */
  esp += 4; SPILL(); return;
}

void f_edb530(void) {
  LOAD_REGS();
L_edb530: /* edb530: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edb532: push 0xeee485 */
  { uint32_t v = 0xeee485u; esp -= 4; W32(esp, v); }
/* edb537: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edb53d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb53e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edb545: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edb548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb549: mov esi, ecx */
  esi = ecx;
/* edb54b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edb54c: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* edb550: call dword ptr [0xf0db90] */
  esp -= 4; W32(esp, 0xedb556u); SPILL(); f_4e2306(); if (g_unwind) return; /* Core!??0FArchive@@QAE@XZ */ RELOAD();
/* edb556: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* edb55a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* edb55e: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* edb562: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* edb565: lea edi, [esi + 0x4c] */
  edi = (uint32_t)(esi + 0x4cu);
/* edb568: mov ecx, edi */
  ecx = edi;
/* edb56a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* edb572: mov dword ptr [esi], 0xef4530 */
  W32((uint32_t)(esi), 0xef4530u);
/* edb578: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* edb57b: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* edb57e: call dword ptr [0xf0df90] */
  esp -= 4; W32(esp, 0xedb584u); SPILL(); f_6c5d85(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@XZ */ RELOAD();
/* edb584: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* edb587: mov eax, 1 */
  eax = 0x1u;
/* edb58c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb58d: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* edb591: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* edb593: mov ecx, edi */
  ecx = edi;
/* edb595: mov byte ptr [esp + 0x20], al */
  W8((uint32_t)(esp + 0x20u), (eax & 0xffu));
/* edb599: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* edb59c: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xedb5a2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* edb5a2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* edb5a4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* edb5a6: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* edb5aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edb5ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb5ac: call 0xed1a64 */
  esp -= 4; W32(esp, 0xedb5b1u); SPILL(); f_ed1a64(); if (g_unwind) return; RELOAD();
/* edb5b1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* edb5b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb5b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edb5b9: mov eax, esi */
  eax = esi;
/* edb5bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edb5bc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edb5c3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb5c6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_edb600(void) {
  LOAD_REGS();
L_edb600: /* edb600: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb601: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edb602: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* edb606: lea esi, [ecx + 0x4c] */
  esi = (uint32_t)(ecx + 0x4cu);
/* edb609: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edb60b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edb60c: mov ecx, esi */
  ecx = esi;
/* edb60e: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xedb614u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* edb614: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* edb618: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* edb61a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edb61b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb61c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* edb61e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edb61f: call 0xed1a64 */
  esp -= 4; W32(esp, 0xedb624u); SPILL(); f_ed1a64(); if (g_unwind) return; RELOAD();
/* edb624: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb627: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edb628: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edb629: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edb640(void) {
  LOAD_REGS();
L_edb640: /* edb640: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb641: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb642: mov esi, ecx */
  esi = ecx;
/* edb644: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* edb647: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edb649: je 0xedb66f */
  if (zf) goto L_edb66f;
L_edb64b: /* edb64b: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* edb64e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edb650: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edb651: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb652: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* edb655: lea edi, [esi + 0x4c] */
  edi = (uint32_t)(esi + 0x4cu);
/* edb658: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb659: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* edb65c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb65d: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* edb660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb661: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xedb664u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edb664: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb666: mov ecx, edi */
  ecx = edi;
/* edb668: call dword ptr [0xf0df70] */
  esp -= 4; W32(esp, 0xedb66eu); SPILL(); f_6c2685(); if (g_unwind) return; /* Engine!?Empty@?$TArray@E@@QAEXH@Z */ RELOAD();
/* edb66e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_edb66f: /* edb66f: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* edb672: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edb674: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* edb678: add esi, 0x4c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* edb67b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* edb67d: mov ecx, esi */
  ecx = esi;
/* edb67f: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xedb685u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* edb685: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* edb687: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* edb689: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* edb68d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edb68e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb68f: call 0xed1a64 */
  esp -= 4; W32(esp, 0xedb694u); SPILL(); f_ed1a64(); if (g_unwind) return; RELOAD();
/* edb694: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb697: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edb698: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* edb699: ret  */
  esp += 4; SPILL(); return;
}

void f_edb6c0(void) {
  LOAD_REGS();
L_edb6c0: /* edb6c0: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* edb6c3: ret  */
  esp += 4; SPILL(); return;
}

void f_edb6e0(void) {
  LOAD_REGS();
L_edb6e0: /* edb6e0: mov eax, ecx */
  eax = ecx;
/* edb6e2: xor ecx, ecx */
  ecx = 0;
/* edb6e4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* edb6e6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* edb6e9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* edb6ec: ret  */
  esp += 4; SPILL(); return;
}

void f_edb700(void) {
  LOAD_REGS();
L_edb700: /* edb700: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* edb704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb705: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* edb707: call dword ptr [0xf0db1c] */
  esp -= 4; W32(esp, 0xedb70du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* edb70d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_edb720(void) {
  LOAD_REGS();
L_edb720: /* edb720: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* edb724: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edb728: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edb72a: jge 0xedb72e */
  if ((sf == of)) goto L_edb72e;
L_edb72c: /* edb72c: mov eax, ecx */
  eax = ecx;
L_edb72e: /* edb72e: ret  */
  esp += 4; SPILL(); return;
}

void f_edb740(void) {
  LOAD_REGS();
L_edb740: /* edb740: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* edb744: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edb748: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edb74a: jle 0xedb74e */
  if ((zf || sf != of)) goto L_edb74e;
L_edb74c: /* edb74c: mov eax, ecx */
  eax = ecx;
L_edb74e: /* edb74e: ret  */
  esp += 4; SPILL(); return;
}

void f_edb760(void) {
  LOAD_REGS();
L_edb760: /* edb760: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edb761: mov ebp, esp */
  ebp = esp;
/* edb763: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edb765: push 0xeee4a0 */
  { uint32_t v = 0xeee4a0u; esp -= 4; W32(esp, v); }
/* edb76a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edb770: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb771: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edb778: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edb77b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edb77c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb77d: mov esi, ecx */
  esi = ecx;
/* edb77f: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* edb785: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edb788: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edb789: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edb78c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edb793: je 0xedb7a5 */
  if (zf) goto L_edb7a5;
L_edb795: /* edb795: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb796: call 0xeebbac */
  esp -= 4; W32(esp, 0xedb79bu); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
/* edb79b: mov dword ptr [esi + 0x340], 0xffffffff */
  W32((uint32_t)(esi + 0x340u), 0xffffffffu);
L_edb7a5: /* edb7a5: mov ecx, esi */
  ecx = esi;
/* edb7a7: call dword ptr [0xf0df2c] */
  esp -= 4; W32(esp, 0xedb7adu); SPILL(); f_6c1ee7(); if (g_unwind) return; /* Engine!?Destroy@AActor@@UAEXXZ */ RELOAD();
/* edb7ad: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edb7b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edb7b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edb7b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edb7b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edb7ba: mov esp, ebp */
  esp = ebp;
/* edb7bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edb7bd: ret  */
  esp += 4; SPILL(); return;
}

void f_edb7be(void) {
  LOAD_REGS();
L_edb7be: /* edb7be: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* edb7c1: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edb7c6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* edb7c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb7ca: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* edb7cd: call 0xeec520 */
  esp -= 4; W32(esp, 0xedb7d2u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edb7d2(); return;
}

void f_edb7d2(void) {
  LOAD_REGS();
L_edb7d2: /* edb7d2: push 0xef5aa0 */
  { uint32_t v = 0xef5aa0u; esp -= 4; W32(esp, v); }
/* edb7d7: push 0xf03014 */
  { uint32_t v = 0xf03014u; esp -= 4; W32(esp, v); }
/* edb7dc: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedb7e2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edb7e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb7e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb7e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb7e9: call 0xeec520 */
  esp -= 4; W32(esp, 0xedb7eeu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edb7ee: guest_badaddr(0xedb7ee); return;
}

void f_edb820(void) {
  LOAD_REGS();
L_edb820: /* edb820: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edb821: mov ebp, esp */
  ebp = esp;
/* edb823: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edb825: push 0xeee4b9 */
  { uint32_t v = 0xeee4b9u; esp -= 4; W32(esp, v); }
/* edb82a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edb830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb831: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edb838: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edb83b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edb83c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb83d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* edb840: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* edb843: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* edb846: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edb849: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edb84a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edb84b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edb84e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edb851: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* edb854: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb855: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* edb85a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb85b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edb862: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xedb865u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edb865: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* edb868: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* edb869: mov eax, edx */
  eax = edx;
/* edb86b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* edb86e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* edb871: jne 0xedb889 */
  if (!zf) goto L_edb889;
L_edb873: /* edb873: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edb876: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edb877: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb879: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edb87c: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* edb882: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb883: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xedb889u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edb889: /* edb889: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* edb88c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb88d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* edb890: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* edb893: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb894: mov edx, eax */
  edx = eax;
/* edb896: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* edb899: movzx ecx, dl */
  ecx = (uint32_t)((edx & 0xffu));
/* edb89c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb89d: mov edx, eax */
  edx = eax;
/* edb89f: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* edb8a2: movzx ecx, dl */
  ecx = (uint32_t)((edx & 0xffu));
/* edb8a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb8a6: shr eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* edb8a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb8aa: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* edb8ad: push 0xf0315c */
  { uint32_t v = 0xf0315cu; esp -= 4; W32(esp, v); }
/* edb8b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edb8b3: call dword ptr [0xf0daf0] */
  esp -= 4; W32(esp, 0xedb8b9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* edb8b9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb8bc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* edb8bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb8c0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* edb8c4: call dword ptr [0xf0dae8] */
  esp -= 4; W32(esp, 0xedb8cau); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* edb8ca: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edb8cd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edb8d1: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedb8d7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* edb8d7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edb8da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edb8db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edb8dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edb8e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edb8e4: mov esp, ebp */
  esp = ebp;
/* edb8e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edb8e7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edb8ea(void) {
  LOAD_REGS();
L_edb8ea: /* edb8ea: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* edb8ed: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edb8f2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* edb8f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edb8f6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* edb8f9: call 0xeec520 */
  esp -= 4; W32(esp, 0xedb8feu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edb8fe(); return;
}

void f_edb8fe(void) {
  LOAD_REGS();
L_edb8fe: /* edb8fe: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* edb904: push 0xef5ad8 */
  { uint32_t v = 0xef5ad8u; esp -= 4; W32(esp, v); }
/* edb909: push 0xf0317c */
  { uint32_t v = 0xf0317cu; esp -= 4; W32(esp, v); }
/* edb90e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xedb910u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edb910: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* edb913: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* edb916: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* edb919: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* edb91c: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* edb922: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb925: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* edb927: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edb928: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb92a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xedb92cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edb92c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edb92f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb930: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb932: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xedb934u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edb934: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb935: push 0xf03184 */
  { uint32_t v = 0xf03184u; esp -= 4; W32(esp, v); }
/* edb93a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xedb93cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edb93c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edb93f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb941: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edb943: call 0xeec520 */
  esp -= 4; W32(esp, 0xedb948u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edb948: guest_badaddr(0xedb948); return;
}

void f_edb9a0(void) {
  LOAD_REGS();
L_edb9a0: /* edb9a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edb9a1: mov ebp, esp */
  ebp = esp;
/* edb9a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edb9a5: push 0xeee4d9 */
  { uint32_t v = 0xeee4d9u; esp -= 4; W32(esp, v); }
/* edb9aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edb9b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb9b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edb9b8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edb9bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edb9bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb9bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edb9be: xor ebx, ebx */
  ebx = 0;
/* edb9c0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edb9c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edb9c6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* edb9c9: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xedb9cfu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* edb9cf: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* edb9d2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* edb9d5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* edb9d8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edb9db: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edb9dc: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edb9df: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* edb9e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edb9e3: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* edb9e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edb9e9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* edb9ed: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xedb9f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edb9f0: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* edb9f6: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* edb9f8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* edb9fb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* edb9fe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edba01: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edba02: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edba05: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* edba08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edba09: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* edba0e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edba0f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xedba12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edba12: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* edba18: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* edba1a: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edba1c: je 0xedba2b */
  if (zf) goto L_edba2b;
L_edba1e: /* edba1e: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* edba23: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* edba25: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edba27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edba28: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xedba2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edba2b: /* edba2b: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* edba31: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* edba33: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edba35: mov edi, eax */
  edi = eax;
/* edba37: jne 0xedba3c */
  if (!zf) goto L_edba3c;
L_edba39: /* edba39: lea edi, [ebp - 0x20] */
  edi = (uint32_t)(ebp + 0xffffffe0u);
L_edba3c: /* edba3c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* edba3f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* edba40: mov eax, edx */
  eax = edx;
/* edba42: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* edba45: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* edba48: jne 0xedba5f */
  if (!zf) goto L_edba5f;
L_edba4a: /* edba4a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edba4d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edba4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edba4f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edba52: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* edba58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edba59: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xedba5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edba5f: /* edba5f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edba62: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xedba68u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* edba68: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edba69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edba6a: call dword ptr [0xf0db34] */
  esp -= 4; W32(esp, 0xedba70u); SPILL(); f_4e299b(); if (g_unwind) return; /* Core!?appToAnsi@@YAPBDPBGPAD@Z */ RELOAD();
/* edba70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edba73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edba74: call 0xeebbb8 */
  esp -= 4; W32(esp, 0xedba79u); SPILL(); f_eebbb8(); if (g_unwind) return; RELOAD();
/* edba79: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edba7c: je 0xedbab2 */
  if (zf) goto L_edbab2;
L_edba7e: /* edba7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edba7f: call 0xeebc0c */
  esp -= 4; W32(esp, 0xedba84u); SPILL(); f_eebc0c(); if (g_unwind) return; RELOAD();
/* edba84: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* edba86: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* edba89: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* edba8c: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
L_edba92: /* edba92: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edba95: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edba99: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedba9fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* edba9f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edbaa2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edbaa3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edbaa4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edbaab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edbaac: mov esp, ebp */
  esp = ebp;
/* edbaae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edbaaf: ret 8 */
  esp += 12; SPILL(); return;
L_edbab2: /* edbab2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* edbab5: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* edbab7: jmp 0xedba92 */
  goto L_edba92;
}

void f_edbab9(void) {
  LOAD_REGS();
L_edbab9: /* edbab9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* edbabc: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edbac1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* edbac4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edbac5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* edbac8: call 0xeec520 */
  esp -= 4; W32(esp, 0xedbacdu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edbacd(); return;
}

void f_edbacd(void) {
  LOAD_REGS();
L_edbacd: /* edbacd: mov edi, dword ptr [0xf0dab8] */
  edi = R32((uint32_t)(0xf0dab8u));
/* edbad3: push 0xef5b30 */
  { uint32_t v = 0xef5b30u; esp -= 4; W32(esp, v); }
/* edbad8: push 0xf031a8 */
  { uint32_t v = 0xf031a8u; esp -= 4; W32(esp, v); }
/* edbadd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xedbadfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edbadf: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* edbae2: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* edbae5: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* edbae8: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* edbaeb: mov ebx, dword ptr [0xf0dc48] */
  ebx = R32((uint32_t)(0xf0dc48u));
/* edbaf1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edbaf4: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* edbaf6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edbaf7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edbaf9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xedbafbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edbafb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edbafe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edbaff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edbb01: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xedbb03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edbb03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edbb04: push 0xf031b0 */
  { uint32_t v = 0xf031b0u; esp -= 4; W32(esp, v); }
/* edbb09: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xedbb0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edbb0b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edbb0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edbb10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edbb12: call 0xeec520 */
  esp -= 4; W32(esp, 0xedbb17u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edbb17: guest_badaddr(0xedbb17); return;
}

void f_edbb80(void) {
  LOAD_REGS();
L_edbb80: /* edbb80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edbb81: mov ebp, esp */
  ebp = esp;
/* edbb83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edbb85: push 0xeee4f0 */
  { uint32_t v = 0xeee4f0u; esp -= 4; W32(esp, v); }
/* edbb8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edbb90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edbb91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edbb98: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edbb9b: mov eax, dword ptr [0xf0dc58] */
  eax = R32((uint32_t)(0xf0dc58u));
/* edbba0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edbba1: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* edbba7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edbba8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* edbbab: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* edbbae: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* edbbb1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edbbb4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edbbb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edbbb6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edbbb9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edbbbc: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* edbbbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edbbc0: mov eax, dword ptr [0xf0dc4c] */
  eax = R32((uint32_t)(0xf0dc4cu));
/* edbbc5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edbbc6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edbbcd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xedbbd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edbbd0: mov ecx, dword ptr [0xf0dc54] */
  ecx = R32((uint32_t)(0xf0dc54u));
/* edbbd6: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* edbbd8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edbbda: je 0xedbbe9 */
  if (zf) goto L_edbbe9;
L_edbbdc: /* edbbdc: mov eax, dword ptr [0xf0dc50] */
  eax = R32((uint32_t)(0xf0dc50u));
/* edbbe1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* edbbe3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edbbe5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edbbe6: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0xedbbe9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edbbe9: /* edbbe9: mov ecx, dword ptr [0xf0dc58] */
  ecx = R32((uint32_t)(0xf0dc58u));
/* edbbef: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* edbbf1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edbbf3: jne 0xedbbf8 */
  if (!zf) goto L_edbbf8;
L_edbbf5: /* edbbf5: lea edi, [ebp - 0x24] */
  edi = (uint32_t)(ebp + 0xffffffdcu);
L_edbbf8: /* edbbf8: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* edbbfb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* edbbfc: mov eax, edx */
  eax = edx;
/* edbbfe: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* edbc01: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* edbc04: jne 0xedbc1c */
  if (!zf) goto L_edbc1c;
L_edbc06: /* edbc06: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* edbc09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edbc0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edbc0c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* edbc0f: mov edx, dword ptr [0xf0dc4c] */
  edx = R32((uint32_t)(0xf0dc4cu));
/* edbc15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edbc16: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xedbc1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edbc1c: /* edbc1c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* edbc1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edbc20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edbc21: call 0xed1393 */
  esp -= 4; W32(esp, 0xedbc26u); SPILL(); f_ed1393(); if (g_unwind) return; RELOAD();
/* edbc26: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* edbc29: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edbc2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edbc2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edbc2e: call 0xed1442 */
  esp -= 4; W32(esp, 0xedbc33u); SPILL(); f_ed1442(); if (g_unwind) return; RELOAD();
/* edbc33: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* edbc35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edbc38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edbc39: call 0xeebc0c */
  esp -= 4; W32(esp, 0xedbc3eu); SPILL(); f_eebc0c(); if (g_unwind) return; RELOAD();
/* edbc3e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edbc41: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* edbc43: mov dword ptr [edi + 4], 0 */
  W32((uint32_t)(edi + 0x4u), 0x0u);
/* edbc4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edbc4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edbc4c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edbc53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edbc54: mov esp, ebp */
  esp = ebp;
/* edbc56: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edbc57: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edbc5a(void) {
  LOAD_REGS();
L_edbc5a: /* edbc5a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* edbc5d: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edbc62: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* edbc65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edbc66: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* edbc69: call 0xeec520 */
  esp -= 4; W32(esp, 0xedbc6eu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edbc6e(); return;
}

void f_edbc6e(void) {
  LOAD_REGS();
L_edbc6e: /* edbc6e: push 0xef5b84 */
  { uint32_t v = 0xef5b84u; esp -= 4; W32(esp, v); }
/* edbc73: push 0xf03258 */
  { uint32_t v = 0xf03258u; esp -= 4; W32(esp, v); }
/* edbc78: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedbc7eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edbc7e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edbc81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edbc83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edbc85: call 0xeec520 */
  esp -= 4; W32(esp, 0xedbc8au); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edbc8a: guest_badaddr(0xedbc8a); return;
}

void f_edbce0(void) {
  LOAD_REGS();
L_edbce0: /* edbce0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* edbce4: xor eax, eax */
  eax = 0;
/* edbce6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edbce8: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* edbceb: xor edx, edx */
  edx = 0;
/* edbced: mov dword ptr [0xf076d8], ecx */
  W32((uint32_t)(0xf076d8u), ecx);
/* edbcf3: mov ecx, dword ptr [0xf076dc] */
  ecx = R32((uint32_t)(0xf076dcu));
/* edbcf9: mov dword ptr [0xf076d0], eax */
  W32((uint32_t)(0xf076d0u), eax);
/* edbcfe: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* edbd02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edbd04: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* edbd07: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edbd09: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edbd0b: mov dword ptr [0xf076dc], ecx */
  W32((uint32_t)(0xf076dcu), ecx);
/* edbd11: mov dword ptr [0xf076d4], edx */
  W32((uint32_t)(0xf076d4u), edx);
/* edbd17: jle 0xedbd1e */
  if ((zf || sf != of)) goto L_edbd1e;
L_edbd19: /* edbd19: mov dword ptr [0xf076dc], eax */
  W32((uint32_t)(0xf076dcu), eax);
L_edbd1e: /* edbd1e: ret  */
  esp += 4; SPILL(); return;
}

void f_edbd30(void) {
  LOAD_REGS();
L_edbd30: /* edbd30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edbd31: mov ebp, esp */
  ebp = esp;
/* edbd33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edbd35: push 0xeee521 */
  { uint32_t v = 0xeee521u; esp -= 4; W32(esp, v); }
/* edbd3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edbd40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edbd41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edbd48: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edbd4b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* edbd4e: mov dword ptr [ecx], 0xef459c */
  W32((uint32_t)(ecx), 0xef459cu);
/* edbd54: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* edbd57: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edbd58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edbd59: mov dword ptr [eax], 0xef45c0 */
  W32((uint32_t)(eax), 0xef45c0u);
/* edbd5f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* edbd62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edbd63: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edbd66: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edbd69: call dword ptr [0xf0df90] */
  esp -= 4; W32(esp, 0xedbd6fu); SPILL(); f_6c5d85(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@XZ */ RELOAD();
/* edbd6f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* edbd72: xor esi, esi */
  esi = 0;
/* edbd74: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edbd77: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* edbd7a: call dword ptr [0xf0df90] */
  esp -= 4; W32(esp, 0xedbd80u); SPILL(); f_6c5d85(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@XZ */ RELOAD();
/* edbd80: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* edbd83: mov dword ptr [ecx + 0x34], esi */
  W32((uint32_t)(ecx + 0x34u), esi);
/* edbd86: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* edbd89: mov dword ptr [edx + 0x38], esi */
  W32((uint32_t)(edx + 0x38u), esi);
/* edbd8c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* edbd8f: mov dword ptr [eax + 0x3c], esi */
  W32((uint32_t)(eax + 0x3cu), esi);
/* edbd92: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* edbd95: mov dword ptr [ecx + 0x44], esi */
  W32((uint32_t)(ecx + 0x44u), esi);
/* edbd98: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* edbd9b: mov dword ptr [edx + 0x48], esi */
  W32((uint32_t)(edx + 0x48u), esi);
/* edbd9e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* edbda1: mov dword ptr [eax + 0x4c], esi */
  W32((uint32_t)(eax + 0x4cu), esi);
/* edbda4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* edbda7: mov dword ptr [ecx + 0x50], esi */
  W32((uint32_t)(ecx + 0x50u), esi);
/* edbdaa: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* edbdac: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* edbdaf: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* edbdb2: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xedbdb8u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* edbdb8: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* edbdbb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edbdbc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* edbdc0: call 0xed16d6 */
  esp -= 4; W32(esp, 0xedbdc5u); SPILL(); f_ed16d6(); if (g_unwind) return; RELOAD();
/* edbdc5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* edbdc8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edbdcb: mov dword ptr [eax + 0x18], 0xffffffff */
  W32((uint32_t)(eax + 0x18u), 0xffffffffu);
/* edbdd2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* edbdd4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* edbdd7: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* edbdda: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* edbddd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* edbde0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edbde2: jge 0xedbdea */
  if ((sf == of)) goto L_edbdea;
L_edbde4: /* edbde4: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edbdea: /* edbdea: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* edbded: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* edbdf3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edbdf5: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* edbdf8: jge 0xedbe00 */
  if ((sf == of)) goto L_edbe00;
L_edbdfa: /* edbdfa: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edbe00: /* edbe00: mov eax, dword ptr [0xf0daf8] */
  eax = R32((uint32_t)(0xf0daf8u));
/* edbe05: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* edbe07: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* edbe09: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* edbe0f: call 0xeec6fc */
  esp -= 4; W32(esp, 0xedbe14u); SPILL(); f_eec6fc(); if (g_unwind) return; RELOAD();
/* edbe14: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* edbe17: mov dword ptr [ecx + 0x40], eax */
  W32((uint32_t)(ecx + 0x40u), eax);
/* edbe1a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* edbe1d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* edbe20: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedbe26u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* edbe26: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edbe29: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* edbe2c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edbe2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edbe2e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edbe35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edbe36: mov esp, ebp */
  esp = ebp;
/* edbe38: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edbe39: ret  */
  esp += 4; SPILL(); return;
}

void f_edbe3a(void) {
  LOAD_REGS();
L_edbe3a: /* edbe3a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* edbe3d: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edbe42: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* edbe45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edbe46: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* edbe49: call 0xeec520 */
  esp -= 4; W32(esp, 0xedbe4eu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edbe4e(); return;
}

void f_edbe4e(void) {
  LOAD_REGS();
L_edbe4e: /* edbe4e: push 0xef5bcc */
  { uint32_t v = 0xef5bccu; esp -= 4; W32(esp, v); }
/* edbe53: push 0xf03260 */
  { uint32_t v = 0xf03260u; esp -= 4; W32(esp, v); }
/* edbe58: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedbe5eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edbe5e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edbe61: xor esi, esi */
  esi = 0;
/* edbe63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edbe64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edbe65: call 0xeec520 */
  esp -= 4; W32(esp, 0xedbe6au); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edbe6a: guest_badaddr(0xedbe6a); return;
}

void f_edbec0(void) {
  LOAD_REGS();
L_edbec0: /* edbec0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edbec2: push 0xeee558 */
  { uint32_t v = 0xeee558u; esp -= 4; W32(esp, v); }
/* edbec7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edbecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edbece: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edbed5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edbed8: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* edbedc: mov dword ptr [ecx], 0xef459c */
  W32((uint32_t)(ecx), 0xef459cu);
/* edbee2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edbee3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edbee4: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* edbee8: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* edbeeb: mov ecx, 6 */
  ecx = 0x6u;
/* edbef0: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* edbef4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* edbef6: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* edbefa: mov dword ptr [eax], 0xef45c0 */
  W32((uint32_t)(eax), 0xef45c0u);
/* edbf00: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edbf04: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edbf07: call dword ptr [0xf0df90] */
  esp -= 4; W32(esp, 0xedbf0du); SPILL(); f_6c5d85(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@XZ */ RELOAD();
/* edbf0d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edbf11: xor esi, esi */
  esi = 0;
/* edbf13: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edbf16: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* edbf1a: call dword ptr [0xf0df90] */
  esp -= 4; W32(esp, 0xedbf20u); SPILL(); f_6c5d85(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@XZ */ RELOAD();
/* edbf20: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edbf24: mov dword ptr [ecx + 0x34], esi */
  W32((uint32_t)(ecx + 0x34u), esi);
/* edbf27: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* edbf2b: mov dword ptr [edx + 0x38], esi */
  W32((uint32_t)(edx + 0x38u), esi);
/* edbf2e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* edbf32: mov dword ptr [eax + 0x3c], esi */
  W32((uint32_t)(eax + 0x3cu), esi);
/* edbf35: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edbf39: mov dword ptr [ecx + 0x44], 3 */
  W32((uint32_t)(ecx + 0x44u), 0x3u);
/* edbf40: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* edbf44: mov dword ptr [edx + 0x48], esi */
  W32((uint32_t)(edx + 0x48u), esi);
/* edbf47: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* edbf4b: mov dword ptr [eax + 0x4c], esi */
  W32((uint32_t)(eax + 0x4cu), esi);
/* edbf4e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edbf52: mov dword ptr [ecx + 0x50], esi */
  W32((uint32_t)(ecx + 0x50u), esi);
/* edbf55: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* edbf57: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* edbf5b: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* edbf5f: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* edbf63: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* edbf67: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edbf69: jge 0xedbf71 */
  if ((sf == of)) goto L_edbf71;
L_edbf6b: /* edbf6b: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edbf71: /* edbf71: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* edbf75: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* edbf7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edbf7d: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* edbf81: jge 0xedbf89 */
  if ((sf == of)) goto L_edbf89;
L_edbf83: /* edbf83: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edbf89: /* edbf89: mov ecx, dword ptr [0xf0daf8] */
  ecx = R32((uint32_t)(0xf0daf8u));
/* edbf8f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* edbf91: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* edbf93: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* edbf99: call 0xeec6fc */
  esp -= 4; W32(esp, 0xedbf9eu); SPILL(); f_eec6fc(); if (g_unwind) return; RELOAD();
/* edbf9e: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* edbfa2: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* edbfa6: mov dword ptr [edx + 0x40], eax */
  W32((uint32_t)(edx + 0x40u), eax);
/* edbfa9: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* edbfad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edbfae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edbfaf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edbfb6: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edbfb9: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_edc000(void) {
  LOAD_REGS();
L_edc000: /* edc000: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edc001: mov ebp, esp */
  ebp = esp;
/* edc003: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edc005: push 0xeee570 */
  { uint32_t v = 0xeee570u; esp -= 4; W32(esp, v); }
/* edc00a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edc010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc011: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edc018: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edc01b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edc01c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edc01d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edc01e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edc021: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* edc023: mov esi, ecx */
  esi = ecx;
/* edc025: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edc027: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* edc02a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* edc02c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edc033: mov word ptr [edi], 2 */
  W16((uint32_t)(edi), 0x2u);
/* edc038: call 0xeebbf4 */
  esp -= 4; W32(esp, 0xedc03du); SPILL(); f_eebbf4(); if (g_unwind) return; RELOAD();
/* edc03d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc040: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* edc043: jne 0xedc05d */
  if (!zf) goto L_edc05d;
L_edc045: /* edc045: push 0x189 */
  { uint32_t v = 0x189u; esp -= 4; W32(esp, v); }
/* edc04a: push 0xf03278 */
  { uint32_t v = 0xf03278u; esp -= 4; W32(esp, v); }
/* edc04f: push 0xf0328c */
  { uint32_t v = 0xf0328cu; esp -= 4; W32(esp, v); }
/* edc054: call dword ptr [0xf0dba4] */
  esp -= 4; W32(esp, 0xedc05au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* edc05a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edc05d: /* edc05d: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* edc060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc061: call 0xed17ee */
  esp -= 4; W32(esp, 0xedc066u); SPILL(); f_ed17ee(); if (g_unwind) return; RELOAD();
/* edc066: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* edc069: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc06c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edc06e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc06f: call 0xed128a */
  esp -= 4; W32(esp, 0xedc074u); SPILL(); f_ed128a(); if (g_unwind) return; RELOAD();
/* edc074: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* edc077: xor eax, eax */
  eax = 0;
/* edc079: mov ax, dx */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edx & 0xffffu)) & 0xffffu);
/* edc07c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc07f: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* edc082: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc083: call 0xeebbca */
  esp -= 4; W32(esp, 0xedc088u); SPILL(); f_eebbca(); if (g_unwind) return; RELOAD();
/* edc088: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* edc08c: mov ecx, dword ptr [0xf0dc5c] */
  ecx = R32((uint32_t)(0xf0dc5cu));
/* edc092: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edc094: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc095: call 0xed15a5 */
  esp -= 4; W32(esp, 0xedc09au); SPILL(); f_ed15a5(); if (g_unwind) return; RELOAD();
/* edc09a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc09d: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* edc09f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* edc0a2: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* edc0a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edc0a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc0a7: call 0xeebbd0 */
  esp -= 4; W32(esp, 0xedc0acu); SPILL(); f_eebbd0(); if (g_unwind) return; RELOAD();
/* edc0ac: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc0af: mov edi, dword ptr [0xf0db14] */
  edi = R32((uint32_t)(0xf0db14u));
/* edc0b5: jne 0xedc0ca */
  if (!zf) goto L_edc0ca;
L_edc0b7: /* edc0b7: mov ecx, dword ptr [0xf0dad8] */
  ecx = R32((uint32_t)(0xf0dad8u));
/* edc0bd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edc0bf: push 0xf032b0 */
  { uint32_t v = 0xf032b0u; esp -= 4; W32(esp, v); }
/* edc0c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc0c5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xedc0c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edc0c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edc0ca: /* edc0ca: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* edc0cd: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* edc0d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc0d3: call 0xeebc12 */
  esp -= 4; W32(esp, 0xedc0d8u); SPILL(); f_eebc12(); if (g_unwind) return; RELOAD();
/* edc0d8: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc0db: jne 0xedc0f0 */
  if (!zf) goto L_edc0f0;
L_edc0dd: /* edc0dd: mov ecx, dword ptr [0xf0dad8] */
  ecx = R32((uint32_t)(0xf0dad8u));
/* edc0e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edc0e5: push 0xf032ec */
  { uint32_t v = 0xf032ecu; esp -= 4; W32(esp, v); }
/* edc0ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc0eb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xedc0edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edc0ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edc0f0: /* edc0f0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* edc0f3: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* edc0f6: mov edx, dword ptr [0xf0dc5c] */
  edx = R32((uint32_t)(0xf0dc5cu));
/* edc0fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc0fd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* edc0ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc100: push 0xf03330 */
  { uint32_t v = 0xf03330u; esp -= 4; W32(esp, v); }
/* edc105: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc106: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xedc108u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edc108: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edc10b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc10e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edc10f: mov dword ptr [esi + 0x44], 1 */
  W32((uint32_t)(esi + 0x44u), 0x1u);
/* edc116: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edc117: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edc11e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edc11f: mov esp, ebp */
  esp = ebp;
/* edc121: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edc122: ret 4 */
  esp += 8; SPILL(); return;
}

void f_edc125(void) {
  LOAD_REGS();
L_edc125: /* edc125: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* edc128: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edc12d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* edc130: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc131: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* edc134: call 0xeec520 */
  esp -= 4; W32(esp, 0xedc139u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edc139(); return;
}

void f_edc139(void) {
  LOAD_REGS();
L_edc139: /* edc139: push 0xef5bfc */
  { uint32_t v = 0xef5bfcu; esp -= 4; W32(esp, v); }
/* edc13e: push 0xf03378 */
  { uint32_t v = 0xf03378u; esp -= 4; W32(esp, v); }
/* edc143: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedc149u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edc149: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc14c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edc14e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edc150: call 0xeec520 */
  esp -= 4; W32(esp, 0xedc155u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edc155: guest_badaddr(0xedc155); return;
}

void f_edc1c0(void) {
  LOAD_REGS();
L_edc1c0: /* edc1c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edc1c1: mov ebp, esp */
  ebp = esp;
/* edc1c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edc1c5: push 0xeee580 */
  { uint32_t v = 0xeee580u; esp -= 4; W32(esp, v); }
/* edc1ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edc1d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc1d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edc1d8: sub esp, 0x22c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x22cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edc1de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edc1df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edc1e0: mov esi, ecx */
  esi = ecx;
/* edc1e2: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* edc1e5: xor ebx, ebx */
  ebx = 0;
/* edc1e7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc1e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edc1ea: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edc1ed: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* edc1f0: je 0xedc277 */
  if (zf) goto L_edc277;
L_edc1f6: /* edc1f6: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc1f9: jne 0xedc277 */
  if (!zf) goto L_edc277;
L_edc1fb: /* edc1fb: cmp word ptr [eax + 0x108], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x108u))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* edc202: lea ecx, [eax + 0x108] */
  ecx = (uint32_t)(eax + 0x108u);
/* edc208: je 0xedc228 */
  if (zf) goto L_edc228;
L_edc20a: /* edc20a: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc20c: je 0xedc228 */
  if (zf) goto L_edc228;
L_edc20e: /* edc20e: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* edc214: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* edc216: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edc218: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc219: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xedc21cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edc21c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* edc21e: mov ecx, esi */
  ecx = esi;
/* edc220: mov dword ptr [esi + 0x34], ebx */
  W32((uint32_t)(esi + 0x34u), ebx);
/* edc223: call dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); esp -= 4; W32(esp, 0xedc226u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edc226: jmp 0xedc277 */
  goto L_edc277;
L_edc228: /* edc228: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* edc22a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edc22b: call 0xeebbca */
  esp -= 4; W32(esp, 0xedc230u); SPILL(); f_eebbca(); if (g_unwind) return; RELOAD();
/* edc230: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* edc236: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* edc238: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edc23a: mov word ptr [ebp - 0x2a], ax */
  W16((uint32_t)(ebp + 0xffffffd6u), (eax & 0xffffu));
/* edc23e: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* edc241: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc242: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xedc245u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edc245: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* edc248: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* edc24b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edc24e: mov eax, esp */
  eax = esp;
/* edc250: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* edc252: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* edc255: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* edc258: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* edc25b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* edc25e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* edc261: mov dword ptr [esi + 0x34], ebx */
  W32((uint32_t)(esi + 0x34u), ebx);
/* edc264: call 0xed133e */
  esp -= 4; W32(esp, 0xedc269u); SPILL(); f_ed133e(); if (g_unwind) return; RELOAD();
/* edc269: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* edc26c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* edc26e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* edc270: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc272: mov ecx, esi */
  ecx = esi;
/* edc274: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0xedc277u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edc277: /* edc277: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* edc27a: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* edc27d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* edc280: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* edc283: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* edc286: je 0xedc42d */
  if (zf) goto L_edc42d;
L_edc28c: /* edc28c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* edc28d: jne 0xedc489 */
  if (!zf) goto L_edc489;
L_edc293: /* edc293: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* edc295: mov ecx, esi */
  ecx = esi;
/* edc297: mov dword ptr [ebp - 0x238], ebx */
  W32((uint32_t)(ebp + 0xfffffdc8u), ebx);
/* edc29d: mov dword ptr [ebp - 0x134], ebx */
  W32((uint32_t)(ebp + 0xfffffeccu), ebx);
/* edc2a3: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xedc2a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edc2a5: mov ebx, eax */
  ebx = eax;
/* edc2a7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* edc2a9: mov ecx, esi */
  ecx = esi;
/* edc2ab: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xedc2aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edc2ae: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc2b0: mov edi, eax */
  edi = eax;
/* edc2b2: je 0xedc2cf */
  if (zf) goto L_edc2cf;
L_edc2b4: /* edc2b4: mov eax, dword ptr [ebp - 0x238] */
  eax = R32((uint32_t)(ebp + 0xfffffdc8u));
/* edc2ba: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* edc2bd: jae 0xedc2cf */
  if (!cf) goto L_edc2cf;
L_edc2bf: /* edc2bf: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* edc2c2: mov dword ptr [ebp + eax*4 - 0x234], ecx */
  W32((uint32_t)(ebp + eax*4 + 0xfffffdccu), ecx);
/* edc2c9: inc dword ptr [ebp - 0x238] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffdc8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffdc8u), r);
  }
L_edc2cf: /* edc2cf: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc2d1: je 0xedc2ee */
  if (zf) goto L_edc2ee;
L_edc2d3: /* edc2d3: mov eax, dword ptr [ebp - 0x134] */
  eax = R32((uint32_t)(ebp + 0xfffffeccu));
/* edc2d9: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* edc2dc: jae 0xedc2ee */
  if (!cf) goto L_edc2ee;
L_edc2de: /* edc2de: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* edc2e1: mov dword ptr [ebp + eax*4 - 0x130], edx */
  W32((uint32_t)(ebp + eax*4 + 0xfffffed0u), edx);
/* edc2e8: inc dword ptr [ebp - 0x134] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffeccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffeccu), r);
  }
L_edc2ee: /* edc2ee: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc2f0: jne 0xedc329 */
  if (!zf) goto L_edc329;
L_edc2f2: /* edc2f2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc2f4: jne 0xedc329 */
  if (!zf) goto L_edc329;
L_edc2f6: /* edc2f6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* edc2f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc2fb: je 0xedc415 */
  if (zf) goto L_edc415;
L_edc301: /* edc301: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* edc304: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc305: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* edc308: call dword ptr [0xf0dc60] */
  esp -= 4; W32(esp, 0xedc30eu); SPILL(); f_4e3e22(); if (g_unwind) return; /* Core!?appSleep@@YAXM@Z */ RELOAD();
/* edc30e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc311: mov eax, 1 */
  eax = 0x1u;
/* edc316: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edc319: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edc320: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edc321: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edc322: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edc323: mov esp, ebp */
  esp = ebp;
/* edc325: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edc326: ret 4 */
  esp += 8; SPILL(); return;
L_edc329: /* edc329: mov ecx, edi */
  ecx = edi;
/* edc32b: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* edc32d: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* edc32f: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* edc332: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc333: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edc335: lea edx, [ebp - 0x134] */
  edx = (uint32_t)(ebp + 0xfffffeccu);
/* edc33b: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* edc33d: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* edc340: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc341: mov eax, ebx */
  eax = ebx;
/* edc343: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* edc345: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* edc347: lea ecx, [ebp - 0x238] */
  ecx = (uint32_t)(ebp + 0xfffffdc8u);
/* edc34d: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* edc34f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc350: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* edc351: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc352: call 0xeebbe8 */
  esp -= 4; W32(esp, 0xedc357u); SPILL(); f_eebbe8(); if (g_unwind) return; RELOAD();
/* edc357: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc35a: jne 0xedc38d */
  if (!zf) goto L_edc38d;
L_edc35c: /* edc35c: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedc361u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edc361: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc362: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* edc367: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* edc369: push 0xf03470 */
  { uint32_t v = 0xf03470u; esp -= 4; W32(esp, v); }
/* edc36e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc36f: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedc375u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edc375: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc378: xor eax, eax */
  eax = 0;
/* edc37a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edc37d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edc384: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edc385: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edc386: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edc387: mov esp, ebp */
  esp = ebp;
/* edc389: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edc38a: ret 4 */
  esp += 8; SPILL(); return;
L_edc38d: /* edc38d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc38f: je 0xedc415 */
  if (zf) goto L_edc415;
L_edc395: /* edc395: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc397: je 0xedc3bc */
  if (zf) goto L_edc3bc;
L_edc399: /* edc399: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc39b: jne 0xedc3df */
  if (!zf) goto L_edc3df;
L_edc39d: /* edc39d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* edc39f: mov ecx, esi */
  ecx = esi;
/* edc3a1: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xedc3a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edc3a4: mov eax, 1 */
  eax = 0x1u;
/* edc3a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edc3ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edc3b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edc3b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edc3b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edc3b6: mov esp, ebp */
  esp = ebp;
/* edc3b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edc3b9: ret 4 */
  esp += 8; SPILL(); return;
L_edc3bc: /* edc3bc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc3be: je 0xedc3df */
  if (zf) goto L_edc3df;
L_edc3c0: /* edc3c0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* edc3c2: mov ecx, esi */
  ecx = esi;
/* edc3c4: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0xedc3c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edc3c7: mov eax, 1 */
  eax = 0x1u;
/* edc3cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edc3cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edc3d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edc3d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edc3d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edc3d9: mov esp, ebp */
  esp = ebp;
/* edc3db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edc3dc: ret 4 */
  esp += 8; SPILL(); return;
L_edc3df: /* edc3df: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* edc3e2: lea ecx, [ebp - 0x134] */
  ecx = (uint32_t)(ebp + 0xfffffeccu);
/* edc3e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc3e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc3ea: call 0xeebc18 */
  esp -= 4; W32(esp, 0xedc3efu); SPILL(); f_eebc18(); if (g_unwind) return; RELOAD();
/* edc3ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc3f1: je 0xedc3fa */
  if (zf) goto L_edc3fa;
L_edc3f3: /* edc3f3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* edc3f5: mov ecx, esi */
  ecx = esi;
/* edc3f7: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0xedc3fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edc3fa: /* edc3fa: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* edc3fd: lea ecx, [ebp - 0x238] */
  ecx = (uint32_t)(ebp + 0xfffffdc8u);
/* edc403: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc404: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc405: call 0xeebc18 */
  esp -= 4; W32(esp, 0xedc40au); SPILL(); f_eebc18(); if (g_unwind) return; RELOAD();
/* edc40a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc40c: je 0xedc415 */
  if (zf) goto L_edc415;
L_edc40e: /* edc40e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* edc410: mov ecx, esi */
  ecx = esi;
/* edc412: call dword ptr [eax + 0x34] */
  { uint32_t t = R32((uint32_t)(eax + 0x34u)); esp -= 4; W32(esp, 0xedc415u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edc415: /* edc415: mov eax, 1 */
  eax = 0x1u;
/* edc41a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edc41d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edc424: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edc425: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edc426: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edc427: mov esp, ebp */
  esp = ebp;
/* edc429: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edc42a: ret 4 */
  esp += 8; SPILL(); return;
L_edc42d: /* edc42d: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* edc430: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* edc433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc434: lea edx, [ebp - 0x134] */
  edx = (uint32_t)(ebp + 0xfffffeccu);
/* edc43a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc43b: lea ecx, [ebp - 0x238] */
  ecx = (uint32_t)(ebp + 0xfffffdc8u);
/* edc441: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc442: mov dword ptr [ebp - 0x234], eax */
  W32((uint32_t)(ebp + 0xfffffdccu), eax);
/* edc448: mov dword ptr [ebp - 0x130], eax */
  W32((uint32_t)(ebp + 0xfffffed0u), eax);
/* edc44e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edc44f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* edc450: mov edi, 1 */
  edi = 0x1u;
/* edc455: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc456: mov dword ptr [ebp - 0x238], edi */
  W32((uint32_t)(ebp + 0xfffffdc8u), edi);
/* edc45c: mov dword ptr [ebp - 0x134], edi */
  W32((uint32_t)(ebp + 0xfffffeccu), edi);
/* edc462: call 0xeebbe8 */
  esp -= 4; W32(esp, 0xedc467u); SPILL(); f_eebbe8(); if (g_unwind) return; RELOAD();
/* edc467: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc46a: jne 0xedc49e */
  if (!zf) goto L_edc49e;
L_edc46c: /* edc46c: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedc471u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edc471: mov edx, dword ptr [0xf0dc5c] */
  edx = R32((uint32_t)(0xf0dc5cu));
/* edc477: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc478: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* edc47a: push 0xf03428 */
  { uint32_t v = 0xf03428u; esp -= 4; W32(esp, v); }
/* edc47f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc480: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedc486u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edc486: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edc489: /* edc489: xor eax, eax */
  eax = 0;
/* edc48b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edc48e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edc495: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edc496: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edc497: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edc498: mov esp, ebp */
  esp = ebp;
/* edc49a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edc49b: ret 4 */
  esp += 8; SPILL(); return;
L_edc49e: /* edc49e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc4a0: je 0xedc4c4 */
  if (zf) goto L_edc4c4;
L_edc4a2: /* edc4a2: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* edc4a5: lea ecx, [ebp - 0x238] */
  ecx = (uint32_t)(ebp + 0xfffffdc8u);
/* edc4ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc4ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc4ad: call 0xeebc18 */
  esp -= 4; W32(esp, 0xedc4b2u); SPILL(); f_eebc18(); if (g_unwind) return; RELOAD();
/* edc4b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc4b4: je 0xedc4d9 */
  if (zf) goto L_edc4d9;
L_edc4b6: /* edc4b6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* edc4b8: mov ecx, esi */
  ecx = esi;
/* edc4ba: mov dword ptr [esi + 0x44], 3 */
  W32((uint32_t)(esi + 0x44u), 0x3u);
/* edc4c1: call dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); esp -= 4; W32(esp, 0xedc4c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_edc4c4: /* edc4c4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edc4c7: mov eax, edi */
  eax = edi;
/* edc4c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edc4ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edc4cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edc4d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edc4d3: mov esp, ebp */
  esp = ebp;
/* edc4d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edc4d6: ret 4 */
  esp += 8; SPILL(); return;
L_edc4d9: /* edc4d9: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* edc4dc: lea ecx, [ebp - 0x134] */
  ecx = (uint32_t)(ebp + 0xfffffeccu);
/* edc4e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc4e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc4e4: call 0xeebc18 */
  esp -= 4; W32(esp, 0xedc4e9u); SPILL(); f_eebc18(); if (g_unwind) return; RELOAD();
/* edc4e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc4eb: je 0xedc4c4 */
  if (zf) goto L_edc4c4;
L_edc4ed: /* edc4ed: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* edc4ef: mov ecx, esi */
  ecx = esi;
/* edc4f1: mov dword ptr [esi + 0x44], ebx */
  W32((uint32_t)(esi + 0x44u), ebx);
/* edc4f4: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0xedc4f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edc4f7: jmp 0xedc4c4 */
  goto L_edc4c4;
}

void f_edc4f9(void) {
  LOAD_REGS();
L_edc4f9: /* edc4f9: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* edc4fc: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edc501: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* edc504: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc505: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* edc508: call 0xeec520 */
  esp -= 4; W32(esp, 0xedc50du); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edc50d(); return;
}

void f_edc50d(void) {
  LOAD_REGS();
L_edc50d: /* edc50d: push 0xef5c24 */
  { uint32_t v = 0xef5c24u; esp -= 4; W32(esp, v); }
/* edc512: push 0xf034b8 */
  { uint32_t v = 0xf034b8u; esp -= 4; W32(esp, v); }
/* edc517: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedc51du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edc51d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc520: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edc522: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edc524: call 0xeec520 */
  esp -= 4; W32(esp, 0xedc529u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edc529: guest_badaddr(0xedc529); return;
}

void f_edc610(void) {
  LOAD_REGS();
L_edc610: /* edc610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edc611: mov ebp, esp */
  ebp = esp;
/* edc613: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edc615: push 0xeee59b */
  { uint32_t v = 0xeee59bu; esp -= 4; W32(esp, v); }
/* edc61a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edc620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc621: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edc628: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edc62b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edc62c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edc62d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edc62e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* edc631: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edc634: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edc636: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edc637: mov esi, ecx */
  esi = ecx;
/* edc639: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edc640: call dword ptr [0xf0db34] */
  esp -= 4; W32(esp, 0xedc646u); SPILL(); f_4e299b(); if (g_unwind) return; /* Core!?appToAnsi@@YAPBDPBGPAD@Z */ RELOAD();
/* edc646: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc649: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc64a: call 0xeebbb8 */
  esp -= 4; W32(esp, 0xedc64fu); SPILL(); f_eebbb8(); if (g_unwind) return; RELOAD();
/* edc64f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc650: call 0xeebbb2 */
  esp -= 4; W32(esp, 0xedc655u); SPILL(); f_eebbb2(); if (g_unwind) return; RELOAD();
/* edc655: xor ecx, ecx */
  ecx = 0;
/* edc657: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc65a: jne 0xedc69e */
  if (!zf) goto L_edc69e;
L_edc65c: /* edc65c: mov eax, dword ptr [0xf0db10] */
  eax = R32((uint32_t)(0xf0db10u));
/* edc661: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* edc663: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edc665: push 0xf02d24 */
  { uint32_t v = 0xf02d24u; esp -= 4; W32(esp, v); }
/* edc66a: push 0x308 */
  { uint32_t v = 0x308u; esp -= 4; W32(esp, v); }
/* edc66f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xedc671u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edc671: mov ecx, eax */
  ecx = eax;
/* edc673: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* edc676: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc678: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* edc67c: je 0xedc686 */
  if (zf) goto L_edc686;
L_edc67e: /* edc67e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edc67f: call 0xed1429 */
  esp -= 4; W32(esp, 0xedc684u); SPILL(); f_ed1429(); if (g_unwind) return; RELOAD();
/* edc684: jmp 0xedc688 */
  goto L_edc688;
L_edc686: /* edc686: xor eax, eax */
  eax = 0;
L_edc688: /* edc688: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* edc68b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edc68e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edc695: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edc696: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edc697: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edc698: mov esp, ebp */
  esp = ebp;
/* edc69a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edc69b: ret 4 */
  esp += 8; SPILL(); return;
L_edc69e: /* edc69e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* edc6a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc6a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc6a2: mov ecx, esi */
  ecx = esi;
/* edc6a4: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0xedc6a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edc6a7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edc6aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edc6ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edc6ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edc6b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edc6b4: mov esp, ebp */
  esp = ebp;
/* edc6b6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edc6b7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_edc6ba(void) {
  LOAD_REGS();
L_edc6ba: /* edc6ba: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* edc6bd: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edc6c2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* edc6c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc6c6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* edc6c9: call 0xeec520 */
  esp -= 4; W32(esp, 0xedc6ceu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edc6ce(); return;
}

void f_edc6ce(void) {
  LOAD_REGS();
L_edc6ce: /* edc6ce: push 0xef5c48 */
  { uint32_t v = 0xef5c48u; esp -= 4; W32(esp, v); }
/* edc6d3: push 0xf034d0 */
  { uint32_t v = 0xf034d0u; esp -= 4; W32(esp, v); }
/* edc6d8: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedc6deu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edc6de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc6e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edc6e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edc6e5: call 0xeec520 */
  esp -= 4; W32(esp, 0xedc6eau); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edc6ea: guest_badaddr(0xedc6ea); return;
}

void f_edc730(void) {
  LOAD_REGS();
L_edc730: /* edc730: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edc731: mov ebp, esp */
  ebp = esp;
/* edc733: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edc735: push 0xeee5b0 */
  { uint32_t v = 0xeee5b0u; esp -= 4; W32(esp, v); }
/* edc73a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edc740: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc741: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edc748: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edc74b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edc74c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edc74d: mov esi, ecx */
  esi = ecx;
/* edc74f: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* edc752: xor ebx, ebx */
  ebx = 0;
/* edc754: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc756: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edc757: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edc75a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* edc75d: je 0xedc772 */
  if (zf) goto L_edc772;
L_edc75f: /* edc75f: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* edc762: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc763: call 0xeebbac */
  esp -= 4; W32(esp, 0xedc768u); SPILL(); f_eebbac(); if (g_unwind) return; RELOAD();
/* edc768: mov dword ptr [esi + 0x18], 0xffffffff */
  W32((uint32_t)(esi + 0x18u), 0xffffffffu);
/* edc76f: mov dword ptr [esi + 0x44], ebx */
  W32((uint32_t)(esi + 0x44u), ebx);
L_edc772: /* edc772: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* edc774: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edc776: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* edc779: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* edc77b: mov word ptr [edi], 2 */
  W16((uint32_t)(edi), 0x2u);
/* edc780: call 0xeebbf4 */
  esp -= 4; W32(esp, 0xedc785u); SPILL(); f_eebbf4(); if (g_unwind) return; RELOAD();
/* edc785: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc788: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* edc78b: jne 0xedc7a5 */
  if (!zf) goto L_edc7a5;
L_edc78d: /* edc78d: push 0x2a6 */
  { uint32_t v = 0x2a6u; esp -= 4; W32(esp, v); }
/* edc792: push 0xf034d8 */
  { uint32_t v = 0xf034d8u; esp -= 4; W32(esp, v); }
/* edc797: push 0xf034ec */
  { uint32_t v = 0xf034ecu; esp -= 4; W32(esp, v); }
/* edc79c: call dword ptr [0xf0dba4] */
  esp -= 4; W32(esp, 0xedc7a2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* edc7a2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edc7a5: /* edc7a5: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* edc7a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc7a9: call 0xed17ee */
  esp -= 4; W32(esp, 0xedc7aeu); SPILL(); f_ed17ee(); if (g_unwind) return; RELOAD();
/* edc7ae: mov word ptr [edi], 2 */
  W16((uint32_t)(edi), 0x2u);
/* edc7b3: mov edx, dword ptr [0xf0dc5c] */
  edx = R32((uint32_t)(0xf0dc5cu));
/* edc7b9: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* edc7bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc7be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc7bf: call 0xed15a5 */
  esp -= 4; W32(esp, 0xedc7c4u); SPILL(); f_ed15a5(); if (g_unwind) return; RELOAD();
/* edc7c4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc7c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edc7c8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* edc7cb: call 0xeebbca */
  esp -= 4; W32(esp, 0xedc7d0u); SPILL(); f_eebbca(); if (g_unwind) return; RELOAD();
/* edc7d0: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* edc7d3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edc7d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc7d6: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* edc7da: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* edc7dd: call 0xed128a */
  esp -= 4; W32(esp, 0xedc7e2u); SPILL(); f_ed128a(); if (g_unwind) return; RELOAD();
/* edc7e2: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* edc7e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc7e8: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* edc7ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edc7eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc7ec: call 0xeebbd0 */
  esp -= 4; W32(esp, 0xedc7f1u); SPILL(); f_eebbd0(); if (g_unwind) return; RELOAD();
/* edc7f1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc7f4: jne 0xedc80c */
  if (!zf) goto L_edc80c;
L_edc7f6: /* edc7f6: mov eax, dword ptr [0xf0dad8] */
  eax = R32((uint32_t)(0xf0dad8u));
/* edc7fb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* edc7fd: push 0xf03510 */
  { uint32_t v = 0xf03510u; esp -= 4; W32(esp, v); }
/* edc802: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc803: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedc809u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edc809: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edc80c: /* edc80c: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* edc80f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* edc812: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc813: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edc814: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc815: mov dword ptr [ebp - 0x14], 0x10 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x10u);
/* edc81c: call 0xeebbc4 */
  esp -= 4; W32(esp, 0xedc821u); SPILL(); f_eebbc4(); if (g_unwind) return; RELOAD();
/* edc821: xor ecx, ecx */
  ecx = 0;
/* edc823: mov cx, word ptr [edi + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x2u))) & 0xffffu);
/* edc827: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc828: call 0xeebbbe */
  esp -= 4; W32(esp, 0xedc82du); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* edc82d: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
/* edc830: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* edc833: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* edc836: mov edi, 2 */
  edi = 0x2u;
/* edc83b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc83c: mov word ptr [ebp - 0x2c], di */
  W16((uint32_t)(ebp + 0xffffffd4u), (edi & 0xffffu));
/* edc840: call 0xeebbca */
  esp -= 4; W32(esp, 0xedc845u); SPILL(); f_eebbca(); if (g_unwind) return; RELOAD();
/* edc845: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* edc848: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc849: mov word ptr [ebp - 0x2a], ax */
  W16((uint32_t)(ebp + 0xffffffd6u), (eax & 0xffffu));
/* edc84d: call 0xeebc0c */
  esp -= 4; W32(esp, 0xedc852u); SPILL(); f_eebc0c(); if (g_unwind) return; RELOAD();
/* edc852: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* edc854: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* edc857: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* edc85a: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* edc85d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc85e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc85f: call 0xeebbee */
  esp -= 4; W32(esp, 0xedc864u); SPILL(); f_eebbee(); if (g_unwind) return; RELOAD();
/* edc864: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc867: jne 0xedc892 */
  if (!zf) goto L_edc892;
L_edc869: /* edc869: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedc86eu); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edc86e: cmp eax, 0x2733 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2733u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc873: je 0xedc892 */
  if (zf) goto L_edc892;
L_edc875: /* edc875: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedc87au); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edc87a: mov ecx, dword ptr [0xf0dc5c] */
  ecx = R32((uint32_t)(0xf0dc5cu));
/* edc880: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edc882: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc883: push 0xf03550 */
  { uint32_t v = 0xf03550u; esp -= 4; W32(esp, v); }
/* edc888: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edc889: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedc88fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edc88f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edc892: /* edc892: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edc895: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* edc898: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edc899: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edc89a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edc8a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edc8a2: mov esp, ebp */
  esp = ebp;
/* edc8a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edc8a5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edc8a8(void) {
  LOAD_REGS();
L_edc8a8: /* edc8a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* edc8ab: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edc8b0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* edc8b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc8b4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* edc8b7: call 0xeec520 */
  esp -= 4; W32(esp, 0xedc8bcu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edc8bc(); return;
}

void f_edc8bc(void) {
  LOAD_REGS();
L_edc8bc: /* edc8bc: push 0xef5c74 */
  { uint32_t v = 0xef5c74u; esp -= 4; W32(esp, v); }
/* edc8c1: push 0xf03598 */
  { uint32_t v = 0xf03598u; esp -= 4; W32(esp, v); }
/* edc8c6: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedc8ccu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edc8cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edc8cf: xor ebx, ebx */
  ebx = 0;
/* edc8d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edc8d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edc8d3: call 0xeec520 */
  esp -= 4; W32(esp, 0xedc8d8u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edc8d8: guest_badaddr(0xedc8d8); return;
}

void f_edc950(void) {
  LOAD_REGS();
L_edc950: /* edc950: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edc951: mov ebp, esp */
  ebp = esp;
/* edc953: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* edc956: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edc959: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* edc95d: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* edc960: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc963: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edc964: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edc965: je 0xedc970 */
  if (zf) goto L_edc970;
L_edc967: /* edc967: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc96a: jne 0xedcb33 */
  if (!zf) goto L_edcb33;
L_edc970: /* edc970: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* edc973: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc975: je 0xedcb10 */
  if (zf) goto L_edcb10;
L_edc97b: /* edc97b: mov edi, dword ptr [0xf0db14] */
  edi = R32((uint32_t)(0xf0db14u));
L_edc981: /* edc981: mov esi, dword ptr [0xf076d0] */
  esi = R32((uint32_t)(0xf076d0u));
/* edc987: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc989: mov edx, dword ptr [0xf076d8] */
  edx = R32((uint32_t)(0xf076d8u));
/* edc98f: je 0xedc999 */
  if (zf) goto L_edc999;
L_edc991: /* edc991: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edc993: jle 0xedcb10 */
  if ((zf || sf != of)) goto L_edcb10;
L_edc999: /* edc999: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edc99e: jle 0xedc9a5 */
  if ((zf || sf != of)) goto L_edc9a5;
L_edc9a0: /* edc9a0: mov eax, 0x1000 */
  eax = 0x1000u;
L_edc9a5: /* edc9a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edc9a7: je 0xedc9af */
  if (zf) goto L_edc9af;
L_edc9a9: /* edc9a9: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edc9ab: jle 0xedc9af */
  if ((zf || sf != of)) goto L_edc9af;
L_edc9ad: /* edc9ad: mov eax, edx */
  eax = edx;
L_edc9af: /* edc9af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edc9b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc9b2: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* edc9b5: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* edc9b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edc9b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edc9ba: call 0xeebbe2 */
  esp -= 4; W32(esp, 0xedc9bfu); SPILL(); f_eebbe2(); if (g_unwind) return; RELOAD();
/* edc9bf: mov esi, eax */
  esi = eax;
/* edc9c1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* edc9c5: cmp esi, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edc9c8: jne 0xedca40 */
  if (!zf) goto L_edca40;
L_edc9ca: /* edc9ca: add dword ptr [eax + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x38u), r);
  }
/* edc9cd: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* edc9cf: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* edc9d3: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* edc9d7: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* edc9db: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* edc9df: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edc9e1: jge 0xedc9e9 */
  if ((sf == of)) goto L_edc9e9;
L_edc9e3: /* edc9e3: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edc9e9: /* edc9e9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* edc9ed: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* edc9f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edc9f5: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* edc9f9: jge 0xedca01 */
  if ((sf == of)) goto L_edca01;
L_edc9fb: /* edc9fb: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edca01: /* edca01: mov ecx, dword ptr [0xf0daf8] */
  ecx = R32((uint32_t)(0xf0daf8u));
/* edca07: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* edca09: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* edca0b: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* edca11: call 0xeec6fc */
  esp -= 4; W32(esp, 0xedca16u); SPILL(); f_eec6fc(); if (g_unwind) return; RELOAD();
/* edca16: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* edca1a: mov dword ptr [edx + 0x40], eax */
  W32((uint32_t)(edx + 0x40u), eax);
/* edca1d: mov eax, dword ptr [0xf076d0] */
  eax = R32((uint32_t)(0xf076d0u));
/* edca22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edca24: je 0xedca2c */
  if (zf) goto L_edca2c;
L_edca26: /* edca26: sub dword ptr [0xf076d8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf076d8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xf076d8u), r);
  }
L_edca2c: /* edca2c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edca30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edca32: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edca35: call dword ptr [0xf0df70] */
  esp -= 4; W32(esp, 0xedca3bu); SPILL(); f_6c2685(); if (g_unwind) return; /* Engine!?Empty@?$TArray@E@@QAEXH@Z */ RELOAD();
/* edca3b: jmp 0xedcafb */
  goto L_edcafb;
L_edca40: /* edca40: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edca43: jne 0xedca89 */
  if (!zf) goto L_edca89;
L_edca45: /* edca45: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedca4au); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edca4a: cmp eax, 0x2733 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2733u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edca4f: je 0xedcb0c */
  if (zf) goto L_edcb0c;
L_edca55: /* edca55: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedca5au); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edca5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edca5b: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* edca60: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* edca62: push 0xf035a0 */
  { uint32_t v = 0xf035a0u; esp -= 4; W32(esp, v); }
/* edca67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edca68: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xedca6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edca6a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* edca6e: mov dword ptr [edx + 0x44], 5 */
  W32((uint32_t)(edx + 0x44u), 0x5u);
/* edca75: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* edca79: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edca7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edca7e: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edca81: call dword ptr [0xf0df70] */
  esp -= 4; W32(esp, 0xedca87u); SPILL(); f_6c2685(); if (g_unwind) return; /* Engine!?Empty@?$TArray@E@@QAEXH@Z */ RELOAD();
/* edca87: jmp 0xedcafb */
  goto L_edcafb;
L_edca89: /* edca89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edca8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edca8c: lea ecx, [eax + 0x28] */
  ecx = (uint32_t)(eax + 0x28u);
/* edca8f: call dword ptr [0xf0df74] */
  esp -= 4; W32(esp, 0xedca95u); SPILL(); f_6c97cd(); if (g_unwind) return; /* Engine!?Remove@?$TArray@E@@QAEXHH@Z */ RELOAD();
/* edca95: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* edca99: add dword ptr [eax + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x38u), r);
  }
/* edca9c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* edca9e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* edcaa2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* edcaa6: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* edcaaa: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* edcaae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edcab0: jge 0xedcab8 */
  if ((sf == of)) goto L_edcab8;
L_edcab2: /* edcab2: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edcab8: /* edcab8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* edcabc: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* edcac2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edcac4: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* edcac8: jge 0xedcad0 */
  if ((sf == of)) goto L_edcad0;
L_edcaca: /* edcaca: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edcad0: /* edcad0: mov edx, dword ptr [0xf0daf8] */
  edx = R32((uint32_t)(0xf0daf8u));
/* edcad6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* edcad8: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* edcada: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* edcae0: call 0xeec6fc */
  esp -= 4; W32(esp, 0xedcae5u); SPILL(); f_eec6fc(); if (g_unwind) return; RELOAD();
/* edcae5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edcae9: mov dword ptr [ecx + 0x40], eax */
  W32((uint32_t)(ecx + 0x40u), eax);
/* edcaec: mov eax, dword ptr [0xf076d0] */
  eax = R32((uint32_t)(0xf076d0u));
/* edcaf1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edcaf3: je 0xedcafb */
  if (zf) goto L_edcafb;
L_edcaf5: /* edcaf5: sub dword ptr [0xf076d8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf076d8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xf076d8u), r);
  }
L_edcafb: /* edcafb: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edcaff: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* edcb02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edcb04: jne 0xedc981 */
  if (!zf) goto L_edc981;
L_edcb0a: /* edcb0a: jmp 0xedcb10 */
  goto L_edcb10;
L_edcb0c: /* edcb0c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
L_edcb10: /* edcb10: cmp dword ptr [ecx + 0x44], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x44u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edcb14: jne 0xedcb33 */
  if (!zf) goto L_edcb33;
L_edcb16: /* edcb16: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* edcb19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edcb1b: jne 0xedcb33 */
  if (!zf) goto L_edcb33;
L_edcb1d: /* edcb1d: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* edcb20: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edcb22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edcb23: call 0xeebc1e */
  esp -= 4; W32(esp, 0xedcb28u); SPILL(); f_eebc1e(); if (g_unwind) return; RELOAD();
/* edcb28: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* edcb2c: mov dword ptr [eax + 0x44], 4 */
  W32((uint32_t)(eax + 0x44u), 0x4u);
L_edcb33: /* edcb33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edcb34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edcb35: mov esp, ebp */
  esp = ebp;
/* edcb37: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edcb38: ret  */
  esp += 4; SPILL(); return;
}

void f_edcbc0(void) {
  LOAD_REGS();
L_edcbc0: /* edcbc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edcbc2: push 0xeee5c9 */
  { uint32_t v = 0xeee5c9u; esp -= 4; W32(esp, v); }
/* edcbc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edcbcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edcbce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edcbd5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edcbd8: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* edcbdc: cmp dword ptr [ecx + 0x44], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x44u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edcbe0: je 0xedcbf5 */
  if (zf) goto L_edcbf5;
L_edcbe2: /* edcbe2: xor eax, eax */
  eax = 0;
/* edcbe4: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* edcbe8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edcbef: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edcbf2: ret 8 */
  esp += 12; SPILL(); return;
L_edcbf5: /* edcbf5: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* edcbf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edcbf9: xor esi, esi */
  esi = 0;
/* edcbfb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edcbfd: jne 0xedcca1 */
  if (!zf) goto L_edcca1;
L_edcc03: /* edcc03: mov eax, dword ptr [0xf076d0] */
  eax = R32((uint32_t)(0xf076d0u));
/* edcc08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edcc0a: je 0xedcc25 */
  if (zf) goto L_edcc25;
L_edcc0c: /* edcc0c: mov eax, dword ptr [0xf076d8] */
  eax = R32((uint32_t)(0xf076d8u));
/* edcc11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edcc13: jle 0xedcca1 */
  if ((zf || sf != of)) goto L_edcca1;
L_edcc19: /* edcc19: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* edcc1d: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edcc1f: jg 0xedcc29 */
  if ((!zf && sf == of)) goto L_edcc29;
L_edcc21: /* edcc21: mov eax, edx */
  eax = edx;
/* edcc23: jmp 0xedcc29 */
  goto L_edcc29;
L_edcc25: /* edcc25: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
L_edcc29: /* edcc29: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* edcc2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edcc2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edcc2f: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* edcc33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edcc34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edcc35: call 0xeebbe2 */
  esp -= 4; W32(esp, 0xedcc3au); SPILL(); f_eebbe2(); if (g_unwind) return; RELOAD();
/* edcc3a: mov esi, eax */
  esi = eax;
/* edcc3c: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edcc3f: jne 0xedcc9d */
  if (!zf) goto L_edcc9d;
L_edcc41: /* edcc41: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedcc46u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edcc46: cmp eax, 0x2733 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2733u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edcc4b: je 0xedcc9b */
  if (zf) goto L_edcc9b;
L_edcc4d: /* edcc4d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* edcc51: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edcc53: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* edcc57: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edcc58: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edcc5b: call 0xed1154 */
  esp -= 4; W32(esp, 0xedcc60u); SPILL(); f_ed1154(); if (g_unwind) return; RELOAD();
/* edcc60: mov ecx, eax */
  ecx = eax;
/* edcc62: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* edcc6a: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xedcc70u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* edcc70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edcc71: call 0xeebba0 */
  esp -= 4; W32(esp, 0xedcc76u); SPILL(); f_eebba0(); if (g_unwind) return; RELOAD();
/* edcc76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edcc77: mov eax, dword ptr [0xf0dc5c] */
  eax = R32((uint32_t)(0xf0dc5cu));
/* edcc7c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* edcc7e: push 0xf035f8 */
  { uint32_t v = 0xf035f8u; esp -= 4; W32(esp, v); }
/* edcc83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edcc84: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedcc8au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edcc8a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edcc8d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* edcc91: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* edcc95: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedcc9bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_edcc9b: /* edcc9b: xor esi, esi */
  esi = 0;
L_edcc9d: /* edcc9d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
L_edcca1: /* edcca1: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* edcca5: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edcca7: je 0xedccdc */
  if (zf) goto L_edccdc;
L_edcca9: /* edcca9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edccab: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* edccad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edccae: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edccb1: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xedccb7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* edccb7: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* edccbb: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* edccbf: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* edccc1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edccc2: lea edx, [esi + ecx] */
  edx = (uint32_t)(esi + ecx);
/* edccc5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edccc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edccca: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* edcccd: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* edcccf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edccd0: call 0xed1a64 */
  esp -= 4; W32(esp, 0xedccd5u); SPILL(); f_ed1a64(); if (g_unwind) return; RELOAD();
/* edccd5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* edccd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edccdc: /* edccdc: add dword ptr [ecx + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + 0x38u), r);
  }
/* edccdf: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* edcce1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* edcce5: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* edcce9: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* edcced: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* edccf1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edccf3: jge 0xedccfb */
  if ((sf == of)) goto L_edccfb;
L_edccf5: /* edccf5: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edccfb: /* edccfb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* edccff: fmul qword ptr [0xef4320] */
  ST0 = ST0 * (F64((uint32_t)(0xef4320u)));
/* edcd05: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edcd07: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* edcd0b: jge 0xedcd13 */
  if ((sf == of)) goto L_edcd13;
L_edcd0d: /* edcd0d: fadd qword ptr [0xef4320] */
  ST0 = ST0 + (F64((uint32_t)(0xef4320u)));
L_edcd13: /* edcd13: mov edx, dword ptr [0xf0daf8] */
  edx = R32((uint32_t)(0xf0daf8u));
/* edcd19: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* edcd1b: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* edcd1d: fadd qword ptr [0xef4310] */
  ST0 = ST0 + (F64((uint32_t)(0xef4310u)));
/* edcd23: call 0xeec6fc */
  esp -= 4; W32(esp, 0xedcd28u); SPILL(); f_eec6fc(); if (g_unwind) return; RELOAD();
/* edcd28: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* edcd2c: mov dword ptr [ecx + 0x40], eax */
  W32((uint32_t)(ecx + 0x40u), eax);
/* edcd2f: mov eax, dword ptr [0xf076d0] */
  eax = R32((uint32_t)(0xf076d0u));
/* edcd34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edcd36: je 0xedcd3e */
  if (zf) goto L_edcd3e;
L_edcd38: /* edcd38: sub dword ptr [0xf076d8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf076d8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xf076d8u), r);
  }
L_edcd3e: /* edcd3e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* edcd42: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* edcd46: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edcd47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edcd4e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edcd51: ret 8 */
  esp += 12; SPILL(); return;
}

void f_edcdd0(void) {
  LOAD_REGS();
L_edcdd0: /* edcdd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edcdd1: mov ebp, esp */
  ebp = esp;
/* edcdd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edcdd5: push 0xeee5e0 */
  { uint32_t v = 0xeee5e0u; esp -= 4; W32(esp, v); }
/* edcdda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edcde0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edcde1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edcde8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edcdeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edcdec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edcded: mov esi, ecx */
  esi = ecx;
/* edcdef: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* edcdf2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* edcdf5: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edcdf7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edcdf8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edcdfb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edce02: jg 0xedce06 */
  if ((!zf && sf == of)) goto L_edce06;
L_edce04: /* edce04: mov eax, ecx */
  eax = ecx;
L_edce06: /* edce06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edce08: jl 0xedce42 */
  if ((sf != of)) goto L_edce42;
L_edce0a: /* edce0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edce0c: mov edi, eax */
  edi = eax;
/* edce0e: je 0xedce21 */
  if (zf) goto L_edce21;
L_edce10: /* edce10: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* edce13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edce14: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* edce17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edce18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edce19: call 0xed1a64 */
  esp -= 4; W32(esp, 0xedce1eu); SPILL(); f_ed1a64(); if (g_unwind) return; RELOAD();
/* edce1e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edce21: /* edce21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edce22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edce24: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* edce27: call dword ptr [0xf0df74] */
  esp -= 4; W32(esp, 0xedce2du); SPILL(); f_6c97cd(); if (g_unwind) return; /* Engine!?Remove@?$TArray@E@@QAEXHH@Z */ RELOAD();
/* edce2d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edce30: mov eax, edi */
  eax = edi;
/* edce32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edce33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edce34: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edce3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edce3c: mov esp, ebp */
  esp = ebp;
/* edce3e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edce3f: ret 8 */
  esp += 12; SPILL(); return;
L_edce42: /* edce42: xor edi, edi */
  edi = 0;
/* edce44: jmp 0xedce21 */
  goto L_edce21;
}

void f_edce46(void) {
  LOAD_REGS();
L_edce46: /* edce46: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* edce49: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edce4e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* edce51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edce52: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* edce55: call 0xeec520 */
  esp -= 4; W32(esp, 0xedce5au); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edce5a(); return;
}

void f_edce5a(void) {
  LOAD_REGS();
L_edce5a: /* edce5a: push 0xef5ca0 */
  { uint32_t v = 0xef5ca0u; esp -= 4; W32(esp, v); }
/* edce5f: push 0xf03640 */
  { uint32_t v = 0xf03640u; esp -= 4; W32(esp, v); }
/* edce64: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedce6au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edce6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edce6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edce6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edce71: call 0xeec520 */
  esp -= 4; W32(esp, 0xedce76u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edce76: guest_badaddr(0xedce76); return;
}

void f_edceb0(void) {
  LOAD_REGS();
L_edceb0: /* edceb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edceb1: mov ebp, esp */
  ebp = esp;
/* edceb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edceb5: push 0xeee5f0 */
  { uint32_t v = 0xeee5f0u; esp -= 4; W32(esp, v); }
/* edceba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edcec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edcec1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edcec8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edcecb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edcecc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edcecd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edcece: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edced1: mov esi, ecx */
  esi = ecx;
/* edced3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edceda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_edcee0: /* edcee0: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* edcee3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* edcee5: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xedcee8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edcee8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edceea: jle 0xedcf8f */
  if ((zf || sf != of)) goto L_edcf8f;
L_edcef0: /* edcef0: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* edcef3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edcef5: je 0xedcf37 */
  if (zf) goto L_edcf37;
L_edcef7: /* edcef7: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* edcefa: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* edcefd: mov edi, dword ptr [ecx + edx - 0x10] */
  edi = R32((uint32_t)(ecx + edx + 0xfffffff0u));
/* edcf01: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edcf03: mov edx, dword ptr [ecx - 8] */
  edx = R32((uint32_t)(ecx + 0xfffffff8u));
/* edcf06: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edcf08: jge 0xedcf37 */
  if ((sf == of)) goto L_edcf37;
L_edcf0a: /* edcf0a: mov edi, edx */
  edi = edx;
/* edcf0c: mov edx, dword ptr [ecx - 0x10] */
  edx = R32((uint32_t)(ecx + 0xfffffff0u));
/* edcf0f: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* edcf11: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* edcf13: mov ebx, eax */
  ebx = eax;
/* edcf15: jle 0xedcf19 */
  if ((zf || sf != of)) goto L_edcf19;
L_edcf17: /* edcf17: mov ebx, edx */
  ebx = edx;
L_edcf19: /* edcf19: lea edi, [ecx - 0xc] */
  edi = (uint32_t)(ecx + 0xfffffff4u);
/* edcf1c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edcf1e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edcf1f: mov ecx, edi */
  ecx = edi;
/* edcf21: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xedcf27u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* edcf27: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* edcf29: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* edcf2c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edcf2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edcf2f: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* edcf31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edcf32: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xedcf35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edcf35: jmp 0xedcee0 */
  goto L_edcee0;
L_edcf37: /* edcf37: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* edcf3a: jb 0xedcf8f */
  if (cf) goto L_edcf8f;
L_edcf3c: /* edcf3c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edcf3e: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* edcf41: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* edcf43: mov ecx, edi */
  ecx = edi;
/* edcf45: call dword ptr [0xf0db1c] */
  esp -= 4; W32(esp, 0xedcf4bu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* edcf4b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* edcf4d: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* edcf50: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* edcf52: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* edcf55: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edcf57: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* edcf59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edcf5a: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xedcf5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edcf5d: jmp 0xedcee0 */
  goto L_edcee0;
L_edcf8f: /* edcf8f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edcf92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edcf93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edcf94: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edcf9b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edcf9c: mov esp, ebp */
  esp = ebp;
/* edcf9e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edcf9f: ret  */
  esp += 4; SPILL(); return;
}

void f_edcf5f(void) {
  LOAD_REGS();
L_edcf5f: /* edcf5f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* edcf62: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edcf67: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* edcf6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edcf6b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* edcf6e: call 0xeec520 */
  esp -= 4; W32(esp, 0xedcf73u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edcf73(); return;
}

void f_edcf73(void) {
  LOAD_REGS();
L_edcf73: /* edcf73: push 0xef5cc8 */
  { uint32_t v = 0xef5cc8u; esp -= 4; W32(esp, v); }
/* edcf78: push 0xf03658 */
  { uint32_t v = 0xf03658u; esp -= 4; W32(esp, v); }
/* edcf7d: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedcf83u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edcf83: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edcf86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edcf88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edcf8a: call 0xeec520 */
  esp -= 4; W32(esp, 0xedcf8fu); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
/* edcf8f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edcf92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edcf93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edcf94: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edcf9b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edcf9c: mov esp, ebp */
  esp = ebp;
/* edcf9e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edcf9f: ret  */
  esp += 4; SPILL(); return;
}

void f_edcfe0(void) {
  LOAD_REGS();
L_edcfe0: /* edcfe0: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* edcfe3: xor eax, eax */
  eax = 0;
/* edcfe5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* edcfe7: jle 0xedcfff */
  if ((zf || sf != of)) goto L_edcfff;
L_edcfe9: /* edcfe9: mov ecx, dword ptr [ecx + 0x44] */
  ecx = R32((uint32_t)(ecx + 0x44u));
/* edcfec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edcfed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_edcff0: /* edcff0: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* edcff2: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edcff5: jne 0xedcff8 */
  if (!zf) goto L_edcff8;
L_edcff7: /* edcff7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_edcff8: /* edcff8: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* edcffb: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* edcffc: jne 0xedcff0 */
  if (!zf) goto L_edcff0;
L_edcffe: /* edcffe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_edcfff: /* edcfff: ret  */
  esp += 4; SPILL(); return;
}

void f_edd010(void) {
  LOAD_REGS();
L_edd010: /* edd010: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edd012: push 0xeee614 */
  { uint32_t v = 0xeee614u; esp -= 4; W32(esp, v); }
/* edd017: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edd01d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd01e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edd025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd026: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edd027: mov esi, ecx */
  esi = ecx;
/* edd029: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edd02a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* edd02e: call dword ptr [0xf0db90] */
  esp -= 4; W32(esp, 0xedd034u); SPILL(); f_4e2306(); if (g_unwind) return; /* Core!??0FArchive@@QAE@XZ */ RELOAD();
/* edd034: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* edd038: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* edd03b: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* edd03e: mov ecx, edi */
  ecx = edi;
/* edd040: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* edd048: mov dword ptr [esi], 0xef4450 */
  W32((uint32_t)(esi), 0xef4450u);
/* edd04e: call dword ptr [0xf0df90] */
  esp -= 4; W32(esp, 0xedd054u); SPILL(); f_6c5d85(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@XZ */ RELOAD();
/* edd054: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edd056: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* edd058: mov ecx, edi */
  ecx = edi;
/* edd05a: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* edd05f: call dword ptr [0xf0db0c] */
  esp -= 4; W32(esp, 0xedd065u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* edd065: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* edd069: mov dword ptr [esi + 0x14], 1 */
  W32((uint32_t)(esi + 0x14u), 0x1u);
/* edd070: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edd071: mov eax, esi */
  eax = esi;
/* edd073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edd074: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edd07b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd07e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_edd0b0(void) {
  LOAD_REGS();
L_edd0b0: /* edd0b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edd0b2: push 0xeee644 */
  { uint32_t v = 0xeee644u; esp -= 4; W32(esp, v); }
/* edd0b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edd0bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd0be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edd0c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd0c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edd0c7: mov esi, ecx */
  esi = ecx;
/* edd0c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* edd0cd: mov dword ptr [esi], 0xef4450 */
  W32((uint32_t)(esi), 0xef4450u);
/* edd0d3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* edd0db: call 0xed18ca */
  esp -= 4; W32(esp, 0xedd0e0u); SPILL(); f_ed18ca(); if (g_unwind) return; RELOAD();
/* edd0e0: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* edd0e3: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* edd0e8: call dword ptr [0xf0ddc8] */
  esp -= 4; W32(esp, 0xedd0eeu); SPILL(); f_6c3e13(); if (g_unwind) return; /* Engine!??1?$TArray@E@@QAE@XZ */ RELOAD();
/* edd0ee: mov eax, dword ptr [0xf0db94] */
  eax = R32((uint32_t)(0xf0db94u));
/* edd0f3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* edd0f7: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* edd0f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edd0fa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edd101: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd104: ret  */
  esp += 4; SPILL(); return;
}

void f_edd130(void) {
  LOAD_REGS();
L_edd130: /* edd130: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edd131: mov ebp, esp */
  ebp = esp;
/* edd133: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edd135: push 0xeee669 */
  { uint32_t v = 0xeee669u; esp -= 4; W32(esp, v); }
/* edd13a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edd140: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd141: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edd148: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edd14b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edd14c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edd14d: mov esi, ecx */
  esi = ecx;
/* edd14f: xor ebx, ebx */
  ebx = 0;
/* edd151: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edd152: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* edd155: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edd158: mov dword ptr [esi], 0xef45a0 */
  W32((uint32_t)(esi), 0xef45a0u);
/* edd15e: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* edd161: mov dword ptr [esi + 0x20], ebx */
  W32((uint32_t)(esi + 0x20u), ebx);
/* edd164: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
/* edd167: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* edd16a: call dword ptr [0xf0daf4] */
  esp -= 4; W32(esp, 0xedd170u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* edd170: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* edd173: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd174: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* edd178: call 0xed16d6 */
  esp -= 4; W32(esp, 0xedd17du); SPILL(); f_ed16d6(); if (g_unwind) return; RELOAD();
/* edd17d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd180: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* edd182: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* edd184: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* edd186: mov word ptr [esi + 4], 2 */
  W16((uint32_t)(esi + 0x4u), 0x2u);
/* edd18c: call 0xeebbf4 */
  esp -= 4; W32(esp, 0xedd191u); SPILL(); f_eebbf4(); if (g_unwind) return; RELOAD();
/* edd191: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* edd193: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd194: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* edd197: call 0xed128a */
  esp -= 4; W32(esp, 0xedd19cu); SPILL(); f_ed128a(); if (g_unwind) return; RELOAD();
/* edd19c: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* edd19f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd1a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd1a3: call 0xed17ee */
  esp -= 4; W32(esp, 0xedd1a8u); SPILL(); f_ed17ee(); if (g_unwind) return; RELOAD();
/* edd1a8: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* edd1ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd1ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edd1af: call 0xed1294 */
  esp -= 4; W32(esp, 0xedd1b4u); SPILL(); f_ed1294(); if (g_unwind) return; RELOAD();
/* edd1b4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd1b7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* edd1ba: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* edd1bd: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedd1c3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* edd1c3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edd1c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edd1c7: mov eax, esi */
  eax = esi;
/* edd1c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edd1ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edd1d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edd1d2: mov esp, ebp */
  esp = ebp;
/* edd1d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edd1d5: ret  */
  esp += 4; SPILL(); return;
}

void f_edd1d6(void) {
  LOAD_REGS();
L_edd1d6: /* edd1d6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* edd1d9: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edd1de: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* edd1e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd1e2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* edd1e5: call 0xeec520 */
  esp -= 4; W32(esp, 0xedd1eau); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edd1ea(); return;
}

void f_edd1ea(void) {
  LOAD_REGS();
L_edd1ea: /* edd1ea: push 0xef5d28 */
  { uint32_t v = 0xef5d28u; esp -= 4; W32(esp, v); }
/* edd1ef: push 0xf03660 */
  { uint32_t v = 0xf03660u; esp -= 4; W32(esp, v); }
/* edd1f4: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedd1fau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edd1fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd1fd: xor ebx, ebx */
  ebx = 0;
/* edd1ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edd200: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edd201: call 0xeec520 */
  esp -= 4; W32(esp, 0xedd206u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edd206: guest_badaddr(0xedd206); return;
}

void f_edd250(void) {
  LOAD_REGS();
L_edd250: /* edd250: mov eax, ecx */
  eax = ecx;
/* edd252: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edd253: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edd254: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* edd257: mov ecx, 6 */
  ecx = 0x6u;
/* edd25c: lea esi, [esp + 0xc] */
  esi = (uint32_t)(esp + 0xcu);
/* edd260: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* edd262: xor ecx, ecx */
  ecx = 0;
/* edd264: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edd265: mov dword ptr [eax], 0xef45a0 */
  W32((uint32_t)(eax), 0xef45a0u);
/* edd26b: mov dword ptr [eax + 0x1c], 1 */
  W32((uint32_t)(eax + 0x1cu), 0x1u);
/* edd272: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* edd275: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* edd278: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edd279: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_edd290(void) {
  LOAD_REGS();
L_edd290: /* edd290: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edd291: mov ebp, esp */
  ebp = esp;
/* edd293: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edd295: push 0xeee680 */
  { uint32_t v = 0xeee680u; esp -= 4; W32(esp, v); }
/* edd29a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edd2a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd2a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edd2a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edd2ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edd2ac: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* edd2af: xor eax, eax */
  eax = 0;
/* edd2b1: mov ax, bx */
  eax = (eax & 0xffff0000u) | ((uint32_t)((ebx & 0xffffu)) & 0xffffu);
/* edd2b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edd2b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edd2b6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edd2b9: mov esi, ecx */
  esi = ecx;
/* edd2bb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edd2c2: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* edd2c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd2c6: call 0xeebbca */
  esp -= 4; W32(esp, 0xedd2cbu); SPILL(); f_eebbca(); if (g_unwind) return; RELOAD();
/* edd2cb: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* edd2cf: mov ecx, dword ptr [0xf0dc5c] */
  ecx = R32((uint32_t)(0xf0dc5cu));
/* edd2d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edd2d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edd2d8: call 0xed15a5 */
  esp -= 4; W32(esp, 0xedd2ddu); SPILL(); f_ed15a5(); if (g_unwind) return; RELOAD();
/* edd2dd: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* edd2e0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd2e3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* edd2e5: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* edd2e8: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* edd2eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd2ec: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* edd2ee: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* edd2f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd2f4: mov dword ptr [ebp + 8], 1 */
  W32((uint32_t)(ebp + 0x8u), 0x1u);
/* edd2fb: call 0xeebc24 */
  esp -= 4; W32(esp, 0xedd300u); SPILL(); f_eebc24(); if (g_unwind) return; RELOAD();
/* edd300: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edd302: je 0xedd31b */
  if (zf) goto L_edd31b;
L_edd304: /* edd304: mov edx, dword ptr [0xf0dad8] */
  edx = R32((uint32_t)(0xf0dad8u));
/* edd30a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* edd30c: push 0xf03668 */
  { uint32_t v = 0xf03668u; esp -= 4; W32(esp, v); }
/* edd311: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd312: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedd318u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edd318: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edd31b: /* edd31b: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* edd31e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* edd320: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* edd323: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edd324: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd325: call 0xeebbd0 */
  esp -= 4; W32(esp, 0xedd32au); SPILL(); f_eebbd0(); if (g_unwind) return; RELOAD();
/* edd32a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* edd32d: jne 0xedd346 */
  if (!zf) goto L_edd346;
L_edd32f: /* edd32f: mov edx, dword ptr [0xf0dad8] */
  edx = R32((uint32_t)(0xf0dad8u));
/* edd335: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* edd337: push 0xf036b8 */
  { uint32_t v = 0xf036b8u; esp -= 4; W32(esp, v); }
/* edd33c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd33d: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedd343u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edd343: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_edd346: /* edd346: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edd348: jne 0xedd371 */
  if (!zf) goto L_edd371;
L_edd34a: /* edd34a: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* edd34d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* edd350: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd351: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edd352: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edd353: mov dword ptr [ebp - 0x14], 0x10 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x10u);
/* edd35a: call 0xeebbc4 */
  esp -= 4; W32(esp, 0xedd35fu); SPILL(); f_eebbc4(); if (g_unwind) return; RELOAD();
/* edd35f: xor eax, eax */
  eax = 0;
/* edd361: mov ax, word ptr [edi + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x2u))) & 0xffffu);
/* edd365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd366: call 0xeebbbe */
  esp -= 4; W32(esp, 0xedd36bu); SPILL(); f_eebbbe(); if (g_unwind) return; RELOAD();
/* edd36b: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* edd36e: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
L_edd371: /* edd371: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edd374: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edd375: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edd376: mov eax, 1 */
  eax = 0x1u;
/* edd37b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edd382: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edd383: mov esp, ebp */
  esp = ebp;
/* edd385: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edd386: ret 4 */
  esp += 8; SPILL(); return;
}

void f_edd389(void) {
  LOAD_REGS();
L_edd389: /* edd389: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* edd38c: push 0xef7d70 */
  { uint32_t v = 0xef7d70u; esp -= 4; W32(esp, v); }
/* edd391: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* edd394: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd395: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* edd398: call 0xeec520 */
  esp -= 4; W32(esp, 0xedd39du); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
  SPILL(); f_edd39d(); return;
}

void f_edd39d(void) {
  LOAD_REGS();
L_edd39d: /* edd39d: push 0xef5d58 */
  { uint32_t v = 0xef5d58u; esp -= 4; W32(esp, v); }
/* edd3a2: push 0xf03724 */
  { uint32_t v = 0xf03724u; esp -= 4; W32(esp, v); }
/* edd3a7: call dword ptr [0xf0dab8] */
  esp -= 4; W32(esp, 0xedd3adu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* edd3ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd3b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd3b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd3b4: call 0xeec520 */
  esp -= 4; W32(esp, 0xedd3b9u); SPILL(); f_eec520(); if (g_unwind) return; RELOAD();
L_edd3b9: guest_badaddr(0xedd3b9); return;
}

void f_edd410(void) {
  LOAD_REGS();
L_edd410: /* edd410: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* edd411: mov ebp, esp */
  ebp = esp;
/* edd413: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* edd415: push 0xeee699 */
  { uint32_t v = 0xeee699u; esp -= 4; W32(esp, v); }
/* edd41a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* edd420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd421: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* edd428: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* edd42b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* edd42e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* edd42f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* edd430: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edd431: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* edd434: mov esi, ecx */
  esi = ecx;
/* edd436: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* edd439: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd43a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd43b: mov ecx, esi */
  ecx = esi;
/* edd43d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edd444: call dword ptr [0xf0df28] */
  esp -= 4; W32(esp, 0xedd44au); SPILL(); f_6c9aa7(); if (g_unwind) return; /* Engine!?Tick@AActor@@UAEHMW4ELevelTick@@@Z */ RELOAD();
/* edd44a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* edd44d: mov eax, dword ptr [esi + 0x34c] */
  eax = R32((uint32_t)(esi + 0x34cu));
/* edd453: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edd455: je 0xedd572 */
  if (zf) goto L_edd572;
L_edd45b: /* edd45b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* edd45e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edd460: jne 0xedd572 */
  if (!zf) goto L_edd572;
L_edd466: /* edd466: cmp word ptr [eax + 0x108], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x108u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* edd46e: lea ecx, [eax + 0x108] */
  ecx = (uint32_t)(eax + 0x108u);
/* edd474: je 0xedd4c9 */
  if (zf) goto L_edd4c9;
L_edd476: /* edd476: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* edd478: je 0xedd4c9 */
  if (zf) goto L_edd4c9;
L_edd47a: /* edd47a: mov edx, dword ptr [0xf0db08] */
  edx = R32((uint32_t)(0xf0db08u));
/* edd480: lea ecx, [eax + 0x108] */
  ecx = (uint32_t)(eax + 0x108u);
/* edd486: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* edd489: neg ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* edd48c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* edd48e: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* edd490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd491: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* edd493: push 0xf03020 */
  { uint32_t v = 0xf03020u; esp -= 4; W32(esp, v); }
/* edd498: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* edd49d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd49e: call dword ptr [0xf0db04] */
  esp -= 4; W32(esp, 0xedd4a4u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* edd4a4: mov ecx, dword ptr [0xf07d24] */
  ecx = R32((uint32_t)(0xf07d24u));
/* edd4aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd4ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd4af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd4b0: mov ecx, esi */
  ecx = esi;
/* edd4b2: call dword ptr [0xf0dbd8] */
  esp -= 4; W32(esp, 0xedd4b8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* edd4b8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* edd4ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd4bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd4be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd4bf: mov ecx, esi */
  ecx = esi;
/* edd4c1: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xedd4c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edd4c4: jmp 0xedd554 */
  goto L_edd554;
L_edd4c9: /* edd4c9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* edd4cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd4cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd4ce: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* edd4d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd4d2: call 0xed16db */
  esp -= 4; W32(esp, 0xedd4d7u); SPILL(); f_ed16db(); if (g_unwind) return; RELOAD();
/* edd4d7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd4da: mov ebx, eax */
  ebx = eax;
/* edd4dc: mov eax, dword ptr [esi + 0x34c] */
  eax = R32((uint32_t)(esi + 0x34cu));
/* edd4e2: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* edd4e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* edd4e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd4e8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* edd4ec: call dword ptr [0xf0dbac] */
  esp -= 4; W32(esp, 0xedd4f2u); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* edd4f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd4f5: mov ecx, ebx */
  ecx = ebx;
/* edd4f7: mov edi, eax */
  edi = eax;
/* edd4f9: call dword ptr [0xf0dbb4] */
  esp -= 4; W32(esp, 0xedd4ffu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* edd4ff: mov ecx, dword ptr [0xf0db08] */
  ecx = R32((uint32_t)(0xf0db08u));
/* edd505: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edd507: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd508: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* edd509: push 0xf03064 */
  { uint32_t v = 0xf03064u; esp -= 4; W32(esp, v); }
/* edd50e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edd50f: call dword ptr [0xf0db14] */
  esp -= 4; W32(esp, 0xedd515u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* edd515: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd518: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* edd51b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* edd51f: call dword ptr [0xf0dae4] */
  esp -= 4; W32(esp, 0xedd525u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* edd525: mov eax, dword ptr [esi + 0x34c] */
  eax = R32((uint32_t)(esi + 0x34cu));
/* edd52b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* edd52d: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* edd530: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd532: call 0xed1442 */
  esp -= 4; W32(esp, 0xedd537u); SPILL(); f_ed1442(); if (g_unwind) return; RELOAD();
/* edd537: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* edd53a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* edd53d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* edd53e: call 0xeebc0c */
  esp -= 4; W32(esp, 0xedd543u); SPILL(); f_eebc0c(); if (g_unwind) return; RELOAD();
/* edd543: xor ecx, ecx */
  ecx = 0;
/* edd545: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* edd546: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* edd549: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd54a: mov ecx, esi */
  ecx = esi;
/* edd54c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* edd54f: call 0xed19e2 */
  esp -= 4; W32(esp, 0xedd554u); SPILL(); f_ed19e2(); if (g_unwind) return; RELOAD();
L_edd554: /* edd554: mov ecx, dword ptr [0xf0db10] */
  ecx = R32((uint32_t)(0xf0db10u));
/* edd55a: mov eax, dword ptr [esi + 0x34c] */
  eax = R32((uint32_t)(esi + 0x34cu));
/* edd560: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* edd562: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* edd564: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* edd565: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xedd568u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* edd568: mov dword ptr [esi + 0x34c], 0 */
  W32((uint32_t)(esi + 0x34cu), 0x0u);
L_edd572: /* edd572: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* edd575: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* edd578: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* edd579: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* edd57a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* edd581: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* edd582: mov esp, ebp */
  esp = ebp;
/* edd584: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* edd585: ret 8 */
  esp += 12; SPILL(); return;
}
