#include "recomp.h"
#include "rec_mod.h"

void f_6ea240(void) {
  LOAD_REGS();
L_6ea240: /* 6ea240: mov eax, 0xb8be60 */
  eax = 0xb8be60u;
/* 6ea245: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea260(void) {
  LOAD_REGS();
L_6ea260: /* 6ea260: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ea265: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ea267: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ea26b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ea26f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ea271: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ea273: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ea274: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ea278: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ea27a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ea27b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ea27c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ea27d: push 0xb8be60 */
  { uint32_t v = 0xb8be60u; esp -= 4; W32(esp, v); }
/* 6ea282: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ea288u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ea288: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ea28b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea2a0(void) {
  LOAD_REGS();
L_6ea2a0: /* 6ea2a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ea2a4: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea2c0(void) {
  LOAD_REGS();
L_6ea2c0: /* 6ea2c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ea2c2: push 0x9c06d4 */
  { uint32_t v = 0x9c06d4u; esp -= 4; W32(esp, v); }
/* 6ea2c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ea2cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ea2ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ea2d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ea2d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea2d7: mov esi, ecx */
  esi = ecx;
/* 6ea2d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ea2dd: mov dword ptr [esi], 0x9f5518 */
  W32((uint32_t)(esi), 0x9f5518u);
/* 6ea2e3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6ea2eb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ea2f1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ea2f1: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* 6ea2f4: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6ea2f9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x6ea2ffu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 6ea2ff: mov ecx, esi */
  ecx = esi;
/* 6ea301: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ea309: call 0x6ccf5e */
  esp -= 4; W32(esp, 0x6ea30eu); SPILL(); f_6ccf5e(); if (g_unwind) return; RELOAD();
/* 6ea30e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ea312: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea313: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ea31a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ea31d: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea340(void) {
  LOAD_REGS();
L_6ea340: /* 6ea340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea341: mov esi, ecx */
  esi = ecx;
/* 6ea343: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6ea348u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6ea348: mov dword ptr [esi], 0x9f5518 */
  W32((uint32_t)(esi), 0x9f5518u);
/* 6ea34e: mov eax, esi */
  eax = esi;
/* 6ea350: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea351: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea370(void) {
  LOAD_REGS();
L_6ea370: /* 6ea370: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ea371: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6ea372: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6ea376: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea377: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea378: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6ea379: mov ebx, ecx */
  ebx = ecx;
/* 6ea37b: call 0x6c88dc */
  esp -= 4; W32(esp, 0x6ea380u); SPILL(); f_6c88dc(); if (g_unwind) return; RELOAD();
/* 6ea380: mov esi, dword ptr [ebx + 0x40] */
  esi = R32((uint32_t)(ebx + 0x40u));
/* 6ea383: mov dword ptr [ebx], 0x9f5218 */
  W32((uint32_t)(ebx), 0x9f5218u);
/* 6ea389: mov al, byte ptr [ebp + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* 6ea38c: mov byte ptr [ebx + 0x3c], al */
  W8((uint32_t)(ebx + 0x3cu), (eax & 0xffu));
/* 6ea38f: mov cl, byte ptr [ebp + 0x3d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* 6ea392: mov byte ptr [ebx + 0x3d], cl */
  W8((uint32_t)(ebx + 0x3du), (ecx & 0xffu));
/* 6ea395: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* 6ea398: mov dword ptr [ebx], 0x9f5518 */
  W32((uint32_t)(ebx), 0x9f5518u);
/* 6ea39e: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6ea3a0: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6ea3a3: mov eax, esi */
  eax = esi;
/* 6ea3a5: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ea3a7: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 6ea3aa: mov eax, dword ptr [ebp + 0x44] */
  eax = R32((uint32_t)(ebp + 0x44u));
/* 6ea3ad: mov dword ptr [ebx + 0x44], eax */
  W32((uint32_t)(ebx + 0x44u), eax);
/* 6ea3b0: mov ecx, dword ptr [ebp + 0x48] */
  ecx = R32((uint32_t)(ebp + 0x48u));
/* 6ea3b3: mov dword ptr [ebx + 0x48], ecx */
  W32((uint32_t)(ebx + 0x48u), ecx);
/* 6ea3b6: mov edx, dword ptr [ebp + 0x4c] */
  edx = R32((uint32_t)(ebp + 0x4cu));
/* 6ea3b9: mov dword ptr [ebx + 0x4c], edx */
  W32((uint32_t)(ebx + 0x4cu), edx);
/* 6ea3bc: mov eax, dword ptr [ebp + 0x50] */
  eax = R32((uint32_t)(ebp + 0x50u));
/* 6ea3bf: mov dword ptr [ebx + 0x50], eax */
  W32((uint32_t)(ebx + 0x50u), eax);
/* 6ea3c2: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 6ea3c5: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 6ea3c8: mov edx, dword ptr [ebp + 0x58] */
  edx = R32((uint32_t)(ebp + 0x58u));
/* 6ea3cb: mov dword ptr [ebx + 0x58], edx */
  W32((uint32_t)(ebx + 0x58u), edx);
/* 6ea3ce: mov al, byte ptr [ebp + 0x5c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x5cu))) & 0xffu);
/* 6ea3d1: mov byte ptr [ebx + 0x5c], al */
  W8((uint32_t)(ebx + 0x5cu), (eax & 0xffu));
/* 6ea3d4: mov cl, byte ptr [ebp + 0x5d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x5du))) & 0xffu);
/* 6ea3d7: mov byte ptr [ebx + 0x5d], cl */
  W8((uint32_t)(ebx + 0x5du), (ecx & 0xffu));
/* 6ea3da: mov edx, dword ptr [ebp + 0x60] */
  edx = R32((uint32_t)(ebp + 0x60u));
/* 6ea3dd: mov dword ptr [ebx + 0x60], edx */
  W32((uint32_t)(ebx + 0x60u), edx);
/* 6ea3e0: mov eax, dword ptr [ebp + 0x64] */
  eax = R32((uint32_t)(ebp + 0x64u));
/* 6ea3e3: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* 6ea3e6: lea esi, [ebp + 0x68] */
  esi = (uint32_t)(ebp + 0x68u);
/* 6ea3e9: lea edi, [ebx + 0x68] */
  edi = (uint32_t)(ebx + 0x68u);
/* 6ea3ec: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6ea3f1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6ea3f3: mov ecx, dword ptr [ebp + 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xa8u));
/* 6ea3f9: mov dword ptr [ebx + 0xa8], ecx */
  W32((uint32_t)(ebx + 0xa8u), ecx);
/* 6ea3ff: mov edx, dword ptr [ebp + 0xac] */
  edx = R32((uint32_t)(ebp + 0xacu));
/* 6ea405: mov dword ptr [ebx + 0xac], edx */
  W32((uint32_t)(ebx + 0xacu), edx);
/* 6ea40b: mov eax, dword ptr [ebp + 0xb0] */
  eax = R32((uint32_t)(ebp + 0xb0u));
/* 6ea411: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ea412: mov dword ptr [ebx + 0xb0], eax */
  W32((uint32_t)(ebx + 0xb0u), eax);
/* 6ea418: mov ecx, dword ptr [ebp + 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xb4u));
/* 6ea41e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea41f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6ea420: mov dword ptr [ebx + 0xb4], ecx */
  W32((uint32_t)(ebx + 0xb4u), ecx);
/* 6ea426: mov eax, ebx */
  eax = ebx;
/* 6ea428: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ea429: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ea460(void) {
  LOAD_REGS();
L_6ea460: /* 6ea460: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ea461: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6ea462: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6ea466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea467: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea468: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6ea469: mov ebx, ecx */
  ebx = ecx;
/* 6ea46b: call 0x6c4b51 */
  esp -= 4; W32(esp, 0x6ea470u); SPILL(); f_6c4b51(); if (g_unwind) return; RELOAD();
/* 6ea470: mov eax, dword ptr [ebp + 0x44] */
  eax = R32((uint32_t)(ebp + 0x44u));
/* 6ea473: mov dword ptr [ebx + 0x44], eax */
  W32((uint32_t)(ebx + 0x44u), eax);
/* 6ea476: mov ecx, dword ptr [ebp + 0x48] */
  ecx = R32((uint32_t)(ebp + 0x48u));
/* 6ea479: mov dword ptr [ebx + 0x48], ecx */
  W32((uint32_t)(ebx + 0x48u), ecx);
/* 6ea47c: mov edx, dword ptr [ebp + 0x4c] */
  edx = R32((uint32_t)(ebp + 0x4cu));
/* 6ea47f: mov dword ptr [ebx + 0x4c], edx */
  W32((uint32_t)(ebx + 0x4cu), edx);
/* 6ea482: mov eax, dword ptr [ebp + 0x50] */
  eax = R32((uint32_t)(ebp + 0x50u));
/* 6ea485: mov dword ptr [ebx + 0x50], eax */
  W32((uint32_t)(ebx + 0x50u), eax);
/* 6ea488: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 6ea48b: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 6ea48e: mov edx, dword ptr [ebp + 0x58] */
  edx = R32((uint32_t)(ebp + 0x58u));
/* 6ea491: mov dword ptr [ebx + 0x58], edx */
  W32((uint32_t)(ebx + 0x58u), edx);
/* 6ea494: mov al, byte ptr [ebp + 0x5c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x5cu))) & 0xffu);
/* 6ea497: mov byte ptr [ebx + 0x5c], al */
  W8((uint32_t)(ebx + 0x5cu), (eax & 0xffu));
/* 6ea49a: mov cl, byte ptr [ebp + 0x5d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x5du))) & 0xffu);
/* 6ea49d: mov byte ptr [ebx + 0x5d], cl */
  W8((uint32_t)(ebx + 0x5du), (ecx & 0xffu));
/* 6ea4a0: mov edx, dword ptr [ebp + 0x60] */
  edx = R32((uint32_t)(ebp + 0x60u));
/* 6ea4a3: mov dword ptr [ebx + 0x60], edx */
  W32((uint32_t)(ebx + 0x60u), edx);
/* 6ea4a6: mov eax, dword ptr [ebp + 0x64] */
  eax = R32((uint32_t)(ebp + 0x64u));
/* 6ea4a9: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* 6ea4ac: lea esi, [ebp + 0x68] */
  esi = (uint32_t)(ebp + 0x68u);
/* 6ea4af: lea edi, [ebx + 0x68] */
  edi = (uint32_t)(ebx + 0x68u);
/* 6ea4b2: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6ea4b7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6ea4b9: mov ecx, dword ptr [ebp + 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xa8u));
/* 6ea4bf: mov dword ptr [ebx + 0xa8], ecx */
  W32((uint32_t)(ebx + 0xa8u), ecx);
/* 6ea4c5: mov edx, dword ptr [ebp + 0xac] */
  edx = R32((uint32_t)(ebp + 0xacu));
/* 6ea4cb: mov dword ptr [ebx + 0xac], edx */
  W32((uint32_t)(ebx + 0xacu), edx);
/* 6ea4d1: mov eax, dword ptr [ebp + 0xb0] */
  eax = R32((uint32_t)(ebp + 0xb0u));
/* 6ea4d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ea4d8: mov dword ptr [ebx + 0xb0], eax */
  W32((uint32_t)(ebx + 0xb0u), eax);
/* 6ea4de: mov ecx, dword ptr [ebp + 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xb4u));
/* 6ea4e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea4e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6ea4e6: mov dword ptr [ebx + 0xb4], ecx */
  W32((uint32_t)(ebx + 0xb4u), ecx);
/* 6ea4ec: mov eax, ebx */
  eax = ebx;
/* 6ea4ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ea4ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ea530(void) {
  LOAD_REGS();
L_6ea530: /* 6ea530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea531: mov esi, ecx */
  esi = ecx;
/* 6ea533: call 0x6c5894 */
  esp -= 4; W32(esp, 0x6ea538u); SPILL(); f_6c5894(); if (g_unwind) return; RELOAD();
/* 6ea538: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ea53d: je 0x6ea54e */
  if (zf) goto L_6ea54e;
L_6ea53f: /* 6ea53f: push 0xb8 */
  { uint32_t v = 0xb8u; esp -= 4; W32(esp, v); }
/* 6ea544: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea545: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ea54bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ea54b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ea54e: /* 6ea54e: mov eax, esi */
  eax = esi;
/* 6ea550: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea551: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ea570(void) {
  LOAD_REGS();
L_6ea570: /* 6ea570: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ea571: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ea575: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ea578: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea579: mov esi, ecx */
  esi = ecx;
/* 6ea57b: je 0x6ea5b0 */
  if (zf) goto L_6ea5b0;
L_6ea57d: /* 6ea57d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ea580: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea581: push 0x6c5894 */
  { uint32_t v = 0x6c5894u; esp -= 4; W32(esp, v); }
/* 6ea586: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ea589: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ea58a: push 0xb8 */
  { uint32_t v = 0xb8u; esp -= 4; W32(esp, v); }
/* 6ea58f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea590: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ea595u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ea595: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ea598: je 0x6ea5a8 */
  if (zf) goto L_6ea5a8;
L_6ea59a: /* 6ea59a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ea5a0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ea5a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ea5a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea5a5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ea5a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ea5a8: /* 6ea5a8: mov eax, edi */
  eax = edi;
/* 6ea5aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ea5ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea5ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ea5ad: ret 4 */
  esp += 8; SPILL(); return;
L_6ea5b0: /* 6ea5b0: mov ecx, esi */
  ecx = esi;
/* 6ea5b2: call 0x6c5894 */
  esp -= 4; W32(esp, 0x6ea5b7u); SPILL(); f_6c5894(); if (g_unwind) return; RELOAD();
/* 6ea5b7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ea5ba: je 0x6ea5cb */
  if (zf) goto L_6ea5cb;
L_6ea5bc: /* 6ea5bc: push 0xb8 */
  { uint32_t v = 0xb8u; esp -= 4; W32(esp, v); }
/* 6ea5c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea5c2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ea5c8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ea5c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ea5cb: /* 6ea5cb: mov eax, esi */
  eax = esi;
/* 6ea5cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea5ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ea5cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ea600(void) {
  LOAD_REGS();
L_6ea600: /* 6ea600: mov eax, 0xb8b930 */
  eax = 0xb8b930u;
/* 6ea605: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea620(void) {
  LOAD_REGS();
L_6ea620: /* 6ea620: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ea625: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ea627: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ea62b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ea62f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ea631: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ea633: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ea634: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ea638: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ea63a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ea63b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ea63c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ea63d: push 0xb8b930 */
  { uint32_t v = 0xb8b930u; esp -= 4; W32(esp, v); }
/* 6ea642: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ea648u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ea648: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ea64b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea660(void) {
  LOAD_REGS();
L_6ea660: /* 6ea660: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ea664: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea680(void) {
  LOAD_REGS();
L_6ea680: /* 6ea680: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ea682: push 0x9c06f8 */
  { uint32_t v = 0x9c06f8u; esp -= 4; W32(esp, v); }
/* 6ea687: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ea68d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ea68e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ea695: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ea696: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea697: mov esi, ecx */
  esi = ecx;
/* 6ea699: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ea69d: mov dword ptr [esi], 0x9f55d8 */
  W32((uint32_t)(esi), 0x9f55d8u);
/* 6ea6a3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ea6ab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ea6b1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ea6b1: mov ecx, esi */
  ecx = esi;
/* 6ea6b3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ea6bb: call 0x6c5894 */
  esp -= 4; W32(esp, 0x6ea6c0u); SPILL(); f_6c5894(); if (g_unwind) return; RELOAD();
/* 6ea6c0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ea6c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea6c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ea6cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ea6cf: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea6f0(void) {
  LOAD_REGS();
L_6ea6f0: /* 6ea6f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea6f1: mov esi, ecx */
  esi = ecx;
/* 6ea6f3: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6ea6f8u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6ea6f8: mov dword ptr [esi], 0x9f55d8 */
  W32((uint32_t)(esi), 0x9f55d8u);
/* 6ea6fe: mov eax, esi */
  eax = esi;
/* 6ea700: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea701: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea720(void) {
  LOAD_REGS();
L_6ea720: /* 6ea720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea721: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea722: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ea726: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea727: mov esi, ecx */
  esi = ecx;
/* 6ea729: call 0x6c92b9 */
  esp -= 4; W32(esp, 0x6ea72eu); SPILL(); f_6c92b9(); if (g_unwind) return; RELOAD();
/* 6ea72e: mov dword ptr [esi], 0x9f55d8 */
  W32((uint32_t)(esi), 0x9f55d8u);
/* 6ea734: mov al, byte ptr [edi + 0xb8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xb8u))) & 0xffu);
/* 6ea73a: mov byte ptr [esi + 0xb8], al */
  W8((uint32_t)(esi + 0xb8u), (eax & 0xffu));
/* 6ea740: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 6ea746: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* 6ea74c: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 6ea752: mov edx, dword ptr [edi + 0xc0] */
  edx = R32((uint32_t)(edi + 0xc0u));
/* 6ea758: mov dword ptr [esi + 0xc0], edx */
  W32((uint32_t)(esi + 0xc0u), edx);
/* 6ea75e: xor eax, dword ptr [edi + 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xc4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ea764: mov ecx, dword ptr [esi + 0xc4] */
  ecx = R32((uint32_t)(esi + 0xc4u));
/* 6ea76a: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6ea76d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ea76f: mov dword ptr [esi + 0xc4], ecx */
  W32((uint32_t)(esi + 0xc4u), ecx);
/* 6ea775: mov eax, ecx */
  eax = ecx;
/* 6ea777: mov ecx, dword ptr [edi + 0xc4] */
  ecx = R32((uint32_t)(edi + 0xc4u));
/* 6ea77d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ea77f: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6ea782: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ea784: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ea785: mov dword ptr [esi + 0xc4], ecx */
  W32((uint32_t)(esi + 0xc4u), ecx);
/* 6ea78b: mov eax, esi */
  eax = esi;
/* 6ea78d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea78e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ea7c0(void) {
  LOAD_REGS();
L_6ea7c0: /* 6ea7c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea7c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea7c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ea7c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea7c7: mov esi, ecx */
  esi = ecx;
/* 6ea7c9: call 0x6cabbe */
  esp -= 4; W32(esp, 0x6ea7ceu); SPILL(); f_6cabbe(); if (g_unwind) return; RELOAD();
/* 6ea7ce: mov al, byte ptr [edi + 0xb8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xb8u))) & 0xffu);
/* 6ea7d4: mov byte ptr [esi + 0xb8], al */
  W8((uint32_t)(esi + 0xb8u), (eax & 0xffu));
/* 6ea7da: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 6ea7e0: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* 6ea7e6: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 6ea7ec: mov edx, dword ptr [edi + 0xc0] */
  edx = R32((uint32_t)(edi + 0xc0u));
/* 6ea7f2: mov dword ptr [esi + 0xc0], edx */
  W32((uint32_t)(esi + 0xc0u), edx);
/* 6ea7f8: xor eax, dword ptr [edi + 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xc4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ea7fe: mov ecx, dword ptr [esi + 0xc4] */
  ecx = R32((uint32_t)(esi + 0xc4u));
/* 6ea804: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6ea807: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ea809: mov dword ptr [esi + 0xc4], ecx */
  W32((uint32_t)(esi + 0xc4u), ecx);
/* 6ea80f: mov eax, ecx */
  eax = ecx;
/* 6ea811: mov ecx, dword ptr [edi + 0xc4] */
  ecx = R32((uint32_t)(edi + 0xc4u));
/* 6ea817: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ea819: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6ea81c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ea81e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ea81f: mov dword ptr [esi + 0xc4], ecx */
  W32((uint32_t)(esi + 0xc4u), ecx);
/* 6ea825: mov eax, esi */
  eax = esi;
/* 6ea827: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea828: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ea850(void) {
  LOAD_REGS();
L_6ea850: /* 6ea850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea851: mov esi, ecx */
  esi = ecx;
/* 6ea853: call 0x6c329c */
  esp -= 4; W32(esp, 0x6ea858u); SPILL(); f_6c329c(); if (g_unwind) return; RELOAD();
/* 6ea858: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ea85d: je 0x6ea86e */
  if (zf) goto L_6ea86e;
L_6ea85f: /* 6ea85f: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 6ea864: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea865: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ea86bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ea86b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ea86e: /* 6ea86e: mov eax, esi */
  eax = esi;
/* 6ea870: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea871: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ea890(void) {
  LOAD_REGS();
L_6ea890: /* 6ea890: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ea891: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ea895: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ea898: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea899: mov esi, ecx */
  esi = ecx;
/* 6ea89b: je 0x6ea8d0 */
  if (zf) goto L_6ea8d0;
L_6ea89d: /* 6ea89d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ea8a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea8a1: push 0x6c329c */
  { uint32_t v = 0x6c329cu; esp -= 4; W32(esp, v); }
/* 6ea8a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ea8a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ea8aa: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 6ea8af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea8b0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ea8b5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ea8b5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ea8b8: je 0x6ea8c8 */
  if (zf) goto L_6ea8c8;
L_6ea8ba: /* 6ea8ba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ea8c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ea8c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ea8c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea8c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ea8c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ea8c8: /* 6ea8c8: mov eax, edi */
  eax = edi;
/* 6ea8ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ea8cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea8cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ea8cd: ret 4 */
  esp += 8; SPILL(); return;
L_6ea8d0: /* 6ea8d0: mov ecx, esi */
  ecx = esi;
/* 6ea8d2: call 0x6c329c */
  esp -= 4; W32(esp, 0x6ea8d7u); SPILL(); f_6c329c(); if (g_unwind) return; RELOAD();
/* 6ea8d7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ea8da: je 0x6ea8eb */
  if (zf) goto L_6ea8eb;
L_6ea8dc: /* 6ea8dc: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 6ea8e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea8e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ea8e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ea8e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ea8eb: /* 6ea8eb: mov eax, esi */
  eax = esi;
/* 6ea8ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea8ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ea8ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ea920(void) {
  LOAD_REGS();
L_6ea920: /* 6ea920: mov eax, 0xb8b400 */
  eax = 0xb8b400u;
/* 6ea925: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea940(void) {
  LOAD_REGS();
L_6ea940: /* 6ea940: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ea945: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ea947: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ea94b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ea94f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ea951: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ea953: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ea954: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ea958: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ea95a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ea95b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ea95c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ea95d: push 0xb8b400 */
  { uint32_t v = 0xb8b400u; esp -= 4; W32(esp, v); }
/* 6ea962: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ea968u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ea968: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ea96b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea980(void) {
  LOAD_REGS();
L_6ea980: /* 6ea980: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ea984: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea9a0(void) {
  LOAD_REGS();
L_6ea9a0: /* 6ea9a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ea9a2: push 0x9c0724 */
  { uint32_t v = 0x9c0724u; esp -= 4; W32(esp, v); }
/* 6ea9a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ea9ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ea9ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ea9b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ea9b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea9b7: mov esi, ecx */
  esi = ecx;
/* 6ea9b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ea9bd: mov dword ptr [esi], 0x9f5698 */
  W32((uint32_t)(esi), 0x9f5698u);
/* 6ea9c3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6ea9cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ea9d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ea9d1: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6ea9d4: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6ea9d9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x6ea9dfu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 6ea9df: mov ecx, esi */
  ecx = esi;
/* 6ea9e1: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ea9e9: call 0x6ccf5e */
  esp -= 4; W32(esp, 0x6ea9eeu); SPILL(); f_6ccf5e(); if (g_unwind) return; RELOAD();
/* 6ea9ee: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ea9f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea9f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ea9fa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ea9fd: ret  */
  esp += 4; SPILL(); return;
}

void f_6eaa20(void) {
  LOAD_REGS();
L_6eaa20: /* 6eaa20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eaa21: mov esi, ecx */
  esi = ecx;
/* 6eaa23: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x6eaa29u); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 6eaa29: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* 6eaa2f: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eaa31: je 0x6eaa43 */
  if (zf) goto L_6eaa43;
L_6eaa33: /* 6eaa33: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6eaa36: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* 6eaa3c: mov byte ptr [esi + 0x84], 1 */
  W8((uint32_t)(esi + 0x84u), 0x1u);
L_6eaa43: /* 6eaa43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eaa44: ret  */
  esp += 4; SPILL(); return;
}

void f_6eaa60(void) {
  LOAD_REGS();
L_6eaa60: /* 6eaa60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6eaa62: push 0x9c0754 */
  { uint32_t v = 0x9c0754u; esp -= 4; W32(esp, v); }
/* 6eaa67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6eaa6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eaa6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6eaa75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eaa76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eaa77: mov esi, ecx */
  esi = ecx;
/* 6eaa79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6eaa7d: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6eaa82u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6eaa82: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6eaa8a: mov dword ptr [esi], 0x9f5698 */
  W32((uint32_t)(esi), 0x9f5698u);
/* 6eaa90: lea ecx, [esi + 0x88] */
  ecx = (uint32_t)(esi + 0x88u);
/* 6eaa96: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6eaa9b: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x6eaaa1u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 6eaaa1: lea ecx, [esi + 0xa0] */
  ecx = (uint32_t)(esi + 0xa0u);
/* 6eaaa7: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x6eaaadu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 6eaaad: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 6eaab3: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x6eaab9u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 6eaab9: lea ecx, [esi + 0xb8] */
  ecx = (uint32_t)(esi + 0xb8u);
/* 6eaabf: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x6eaac5u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 6eaac5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6eaac9: mov eax, esi */
  eax = esi;
/* 6eaacb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eaacc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6eaad3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eaad6: ret  */
  esp += 4; SPILL(); return;
}

void f_6eab00(void) {
  LOAD_REGS();
L_6eab00: /* 6eab00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eab01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6eab02: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6eab06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eab07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eab08: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6eab09: mov ebx, ecx */
  ebx = ecx;
/* 6eab0b: call 0x6c88dc */
  esp -= 4; W32(esp, 0x6eab10u); SPILL(); f_6c88dc(); if (g_unwind) return; RELOAD();
/* 6eab10: mov dword ptr [ebx], 0x9f5218 */
  W32((uint32_t)(ebx), 0x9f5218u);
/* 6eab16: mov al, byte ptr [ebp + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* 6eab19: mov byte ptr [ebx + 0x3c], al */
  W8((uint32_t)(ebx + 0x3cu), (eax & 0xffu));
/* 6eab1c: mov cl, byte ptr [ebp + 0x3d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* 6eab1f: mov byte ptr [ebx + 0x3d], cl */
  W8((uint32_t)(ebx + 0x3du), (ecx & 0xffu));
/* 6eab22: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* 6eab25: mov ecx, dword ptr [ebx + 0x40] */
  ecx = R32((uint32_t)(ebx + 0x40u));
/* 6eab28: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6eab2a: mov edi, ecx */
  edi = ecx;
/* 6eab2c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6eab2f: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 6eab31: mov dword ptr [ebx + 0x40], edi */
  W32((uint32_t)(ebx + 0x40u), edi);
/* 6eab34: mov dword ptr [ebx], 0x9f5698 */
  W32((uint32_t)(ebx), 0x9f5698u);
/* 6eab3a: lea esi, [ebp + 0x44] */
  esi = (uint32_t)(ebp + 0x44u);
/* 6eab3d: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* 6eab40: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6eab45: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6eab47: mov al, byte ptr [ebp + 0x84] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x84u))) & 0xffu);
/* 6eab4d: mov esi, dword ptr [ebx + 0x94] */
  esi = R32((uint32_t)(ebx + 0x94u));
/* 6eab53: mov byte ptr [ebx + 0x84], al */
  W8((uint32_t)(ebx + 0x84u), (eax & 0xffu));
/* 6eab59: lea ecx, [ebp + 0x88] */
  ecx = (uint32_t)(ebp + 0x88u);
/* 6eab5f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6eab61: lea edx, [ebx + 0x88] */
  edx = (uint32_t)(ebx + 0x88u);
/* 6eab67: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6eab69: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6eab6c: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6eab6f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6eab72: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6eab75: mov edx, dword ptr [ebp + 0x94] */
  edx = R32((uint32_t)(ebp + 0x94u));
/* 6eab7b: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6eab7d: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6eab80: mov eax, esi */
  eax = esi;
/* 6eab82: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6eab84: mov dword ptr [ebx + 0x94], eax */
  W32((uint32_t)(ebx + 0x94u), eax);
/* 6eab8a: mov eax, dword ptr [ebp + 0x98] */
  eax = R32((uint32_t)(ebp + 0x98u));
/* 6eab90: mov dword ptr [ebx + 0x98], eax */
  W32((uint32_t)(ebx + 0x98u), eax);
/* 6eab96: mov ecx, dword ptr [ebp + 0x9c] */
  ecx = R32((uint32_t)(ebp + 0x9cu));
/* 6eab9c: mov dword ptr [ebx + 0x9c], ecx */
  W32((uint32_t)(ebx + 0x9cu), ecx);
/* 6eaba2: lea edx, [ebp + 0xa0] */
  edx = (uint32_t)(ebp + 0xa0u);
/* 6eaba8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 6eabaa: lea eax, [ebx + 0xa0] */
  eax = (uint32_t)(ebx + 0xa0u);
/* 6eabb0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6eabb2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 6eabb5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6eabb8: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6eabbb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6eabbe: lea eax, [ebp + 0xac] */
  eax = (uint32_t)(ebp + 0xacu);
/* 6eabc4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6eabc6: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 6eabcc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6eabce: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6eabd1: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6eabd4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6eabd7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6eabda: add ebp, 0xb8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xb8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 6eabe0: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 6eabe3: lea ecx, [ebx + 0xb8] */
  ecx = (uint32_t)(ebx + 0xb8u);
/* 6eabe9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6eabeb: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 6eabee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eabef: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 6eabf2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 6eabf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eabf6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6eabf7: mov eax, ebx */
  eax = ebx;
/* 6eabf9: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6eabfc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eabfd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eac40(void) {
  LOAD_REGS();
L_6eac40: /* 6eac40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eac41: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6eac42: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6eac46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eac47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eac48: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6eac49: mov ebx, ecx */
  ebx = ecx;
/* 6eac4b: call 0x6c4b51 */
  esp -= 4; W32(esp, 0x6eac50u); SPILL(); f_6c4b51(); if (g_unwind) return; RELOAD();
/* 6eac50: lea esi, [ebp + 0x44] */
  esi = (uint32_t)(ebp + 0x44u);
/* 6eac53: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* 6eac56: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6eac5b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6eac5d: mov al, byte ptr [ebp + 0x84] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x84u))) & 0xffu);
/* 6eac63: mov esi, dword ptr [ebx + 0x94] */
  esi = R32((uint32_t)(ebx + 0x94u));
/* 6eac69: mov byte ptr [ebx + 0x84], al */
  W8((uint32_t)(ebx + 0x84u), (eax & 0xffu));
/* 6eac6f: lea ecx, [ebp + 0x88] */
  ecx = (uint32_t)(ebp + 0x88u);
/* 6eac75: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6eac77: lea edx, [ebx + 0x88] */
  edx = (uint32_t)(ebx + 0x88u);
/* 6eac7d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6eac7f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6eac82: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6eac85: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6eac88: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6eac8b: mov edx, dword ptr [ebp + 0x94] */
  edx = R32((uint32_t)(ebp + 0x94u));
/* 6eac91: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6eac93: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6eac96: mov eax, esi */
  eax = esi;
/* 6eac98: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6eac9a: mov dword ptr [ebx + 0x94], eax */
  W32((uint32_t)(ebx + 0x94u), eax);
/* 6eaca0: mov eax, dword ptr [ebp + 0x98] */
  eax = R32((uint32_t)(ebp + 0x98u));
/* 6eaca6: mov dword ptr [ebx + 0x98], eax */
  W32((uint32_t)(ebx + 0x98u), eax);
/* 6eacac: mov ecx, dword ptr [ebp + 0x9c] */
  ecx = R32((uint32_t)(ebp + 0x9cu));
/* 6eacb2: mov dword ptr [ebx + 0x9c], ecx */
  W32((uint32_t)(ebx + 0x9cu), ecx);
/* 6eacb8: lea edx, [ebp + 0xa0] */
  edx = (uint32_t)(ebp + 0xa0u);
/* 6eacbe: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 6eacc0: lea eax, [ebx + 0xa0] */
  eax = (uint32_t)(ebx + 0xa0u);
/* 6eacc6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6eacc8: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 6eaccb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6eacce: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6eacd1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6eacd4: lea eax, [ebp + 0xac] */
  eax = (uint32_t)(ebp + 0xacu);
/* 6eacda: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6eacdc: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 6eace2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6eace4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6eace7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6eacea: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6eaced: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6eacf0: add ebp, 0xb8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xb8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 6eacf6: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 6eacf9: lea ecx, [ebx + 0xb8] */
  ecx = (uint32_t)(ebx + 0xb8u);
/* 6eacff: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6ead01: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 6ead04: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ead05: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 6ead08: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 6ead0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ead0c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6ead0d: mov eax, ebx */
  eax = ebx;
/* 6ead0f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6ead12: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ead13: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ead60(void) {
  LOAD_REGS();
L_6ead60: /* 6ead60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ead61: mov esi, ecx */
  esi = ecx;
/* 6ead63: call 0x6cb1f9 */
  esp -= 4; W32(esp, 0x6ead68u); SPILL(); f_6cb1f9(); if (g_unwind) return; RELOAD();
/* 6ead68: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ead6d: je 0x6ead7e */
  if (zf) goto L_6ead7e;
L_6ead6f: /* 6ead6f: push 0xc4 */
  { uint32_t v = 0xc4u; esp -= 4; W32(esp, v); }
/* 6ead74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ead75: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ead7bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ead7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ead7e: /* 6ead7e: mov eax, esi */
  eax = esi;
/* 6ead80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ead81: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eada0(void) {
  LOAD_REGS();
L_6eada0: /* 6eada0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eada1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6eada5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eada8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eada9: mov esi, ecx */
  esi = ecx;
/* 6eadab: je 0x6eade0 */
  if (zf) goto L_6eade0;
L_6eadad: /* 6eadad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6eadb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eadb1: push 0x6cb1f9 */
  { uint32_t v = 0x6cb1f9u; esp -= 4; W32(esp, v); }
/* 6eadb6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6eadb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eadba: push 0xc4 */
  { uint32_t v = 0xc4u; esp -= 4; W32(esp, v); }
/* 6eadbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eadc0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6eadc5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6eadc5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eadc8: je 0x6eadd8 */
  if (zf) goto L_6eadd8;
L_6eadca: /* 6eadca: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6eadd0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6eadd2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6eadd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eadd5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6eadd8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6eadd8: /* 6eadd8: mov eax, edi */
  eax = edi;
/* 6eadda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eaddb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eaddc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eaddd: ret 4 */
  esp += 8; SPILL(); return;
L_6eade0: /* 6eade0: mov ecx, esi */
  ecx = esi;
/* 6eade2: call 0x6cb1f9 */
  esp -= 4; W32(esp, 0x6eade7u); SPILL(); f_6cb1f9(); if (g_unwind) return; RELOAD();
/* 6eade7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eadea: je 0x6eadfb */
  if (zf) goto L_6eadfb;
L_6eadec: /* 6eadec: push 0xc4 */
  { uint32_t v = 0xc4u; esp -= 4; W32(esp, v); }
/* 6eadf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eadf2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6eadf8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6eadf8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6eadfb: /* 6eadfb: mov eax, esi */
  eax = esi;
/* 6eadfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eadfe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eadff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eae30(void) {
  LOAD_REGS();
L_6eae30: /* 6eae30: mov eax, 0xb8aed0 */
  eax = 0xb8aed0u;
/* 6eae35: ret  */
  esp += 4; SPILL(); return;
}

void f_6eae50(void) {
  LOAD_REGS();
L_6eae50: /* 6eae50: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6eae55: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6eae57: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6eae5b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6eae5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eae61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eae63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eae64: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6eae68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eae6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6eae6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eae6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eae6d: push 0xb8aed0 */
  { uint32_t v = 0xb8aed0u; esp -= 4; W32(esp, v); }
/* 6eae72: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6eae78u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6eae78: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eae7b: ret  */
  esp += 4; SPILL(); return;
}

void f_6eae90(void) {
  LOAD_REGS();
L_6eae90: /* 6eae90: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6eae94: ret  */
  esp += 4; SPILL(); return;
}

void f_6eaeb0(void) {
  LOAD_REGS();
L_6eaeb0: /* 6eaeb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6eaeb2: push 0x9c0784 */
  { uint32_t v = 0x9c0784u; esp -= 4; W32(esp, v); }
/* 6eaeb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6eaebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eaebe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6eaec5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eaec6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eaec7: mov esi, ecx */
  esi = ecx;
/* 6eaec9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6eaecd: mov dword ptr [esi], 0x9f5758 */
  W32((uint32_t)(esi), 0x9f5758u);
/* 6eaed3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6eaedb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6eaee1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6eaee1: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6eaee4: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6eaee9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x6eaeefu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 6eaeef: mov ecx, esi */
  ecx = esi;
/* 6eaef1: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6eaef9: call 0x6ccf5e */
  esp -= 4; W32(esp, 0x6eaefeu); SPILL(); f_6ccf5e(); if (g_unwind) return; RELOAD();
/* 6eaefe: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6eaf02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eaf03: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6eaf0a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eaf0d: ret  */
  esp += 4; SPILL(); return;
}

void f_6eaf30(void) {
  LOAD_REGS();
L_6eaf30: /* 6eaf30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eaf31: mov esi, ecx */
  esi = ecx;
/* 6eaf33: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6eaf38u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6eaf38: mov dword ptr [esi], 0x9f5758 */
  W32((uint32_t)(esi), 0x9f5758u);
/* 6eaf3e: mov eax, esi */
  eax = esi;
/* 6eaf40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eaf41: ret  */
  esp += 4; SPILL(); return;
}

void f_6eaf60(void) {
  LOAD_REGS();
L_6eaf60: /* 6eaf60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eaf61: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6eaf62: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6eaf66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eaf67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eaf68: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6eaf69: mov ebx, ecx */
  ebx = ecx;
/* 6eaf6b: call 0x6c88dc */
  esp -= 4; W32(esp, 0x6eaf70u); SPILL(); f_6c88dc(); if (g_unwind) return; RELOAD();
/* 6eaf70: mov esi, dword ptr [ebx + 0x40] */
  esi = R32((uint32_t)(ebx + 0x40u));
/* 6eaf73: mov dword ptr [ebx], 0x9f5218 */
  W32((uint32_t)(ebx), 0x9f5218u);
/* 6eaf79: mov al, byte ptr [ebp + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* 6eaf7c: mov byte ptr [ebx + 0x3c], al */
  W8((uint32_t)(ebx + 0x3cu), (eax & 0xffu));
/* 6eaf7f: mov cl, byte ptr [ebp + 0x3d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* 6eaf82: mov byte ptr [ebx + 0x3d], cl */
  W8((uint32_t)(ebx + 0x3du), (ecx & 0xffu));
/* 6eaf85: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* 6eaf88: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6eaf8a: mov eax, esi */
  eax = esi;
/* 6eaf8c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6eaf8f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6eaf91: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 6eaf94: mov dword ptr [ebx], 0x9f5758 */
  W32((uint32_t)(ebx), 0x9f5758u);
/* 6eaf9a: lea esi, [ebp + 0x44] */
  esi = (uint32_t)(ebp + 0x44u);
/* 6eaf9d: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* 6eafa0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6eafa5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6eafa7: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 6eafad: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 6eafb3: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 6eafb9: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 6eafbf: mov edx, dword ptr [ebp + 0x8c] */
  edx = R32((uint32_t)(ebp + 0x8cu));
/* 6eafc5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eafc6: mov dword ptr [ebx + 0x8c], edx */
  W32((uint32_t)(ebx + 0x8cu), edx);
/* 6eafcc: mov eax, dword ptr [ebp + 0x90] */
  eax = R32((uint32_t)(ebp + 0x90u));
/* 6eafd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eafd3: mov dword ptr [ebx + 0x90], eax */
  W32((uint32_t)(ebx + 0x90u), eax);
/* 6eafd9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6eafda: mov eax, ebx */
  eax = ebx;
/* 6eafdc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eafdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eb000(void) {
  LOAD_REGS();
L_6eb000: /* 6eb000: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eb001: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6eb002: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6eb006: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb007: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb008: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6eb009: mov ebx, ecx */
  ebx = ecx;
/* 6eb00b: call 0x6c4b51 */
  esp -= 4; W32(esp, 0x6eb010u); SPILL(); f_6c4b51(); if (g_unwind) return; RELOAD();
/* 6eb010: lea esi, [ebp + 0x44] */
  esi = (uint32_t)(ebp + 0x44u);
/* 6eb013: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* 6eb016: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6eb01b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6eb01d: mov eax, dword ptr [ebp + 0x84] */
  eax = R32((uint32_t)(ebp + 0x84u));
/* 6eb023: mov dword ptr [ebx + 0x84], eax */
  W32((uint32_t)(ebx + 0x84u), eax);
/* 6eb029: mov ecx, dword ptr [ebp + 0x88] */
  ecx = R32((uint32_t)(ebp + 0x88u));
/* 6eb02f: mov dword ptr [ebx + 0x88], ecx */
  W32((uint32_t)(ebx + 0x88u), ecx);
/* 6eb035: mov edx, dword ptr [ebp + 0x8c] */
  edx = R32((uint32_t)(ebp + 0x8cu));
/* 6eb03b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eb03c: mov dword ptr [ebx + 0x8c], edx */
  W32((uint32_t)(ebx + 0x8cu), edx);
/* 6eb042: mov eax, dword ptr [ebp + 0x90] */
  eax = R32((uint32_t)(ebp + 0x90u));
/* 6eb048: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb049: mov dword ptr [ebx + 0x90], eax */
  W32((uint32_t)(ebx + 0x90u), eax);
/* 6eb04f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6eb050: mov eax, ebx */
  eax = ebx;
/* 6eb052: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eb053: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eb080(void) {
  LOAD_REGS();
L_6eb080: /* 6eb080: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb081: mov esi, ecx */
  esi = ecx;
/* 6eb083: call 0x6c9e67 */
  esp -= 4; W32(esp, 0x6eb088u); SPILL(); f_6c9e67(); if (g_unwind) return; RELOAD();
/* 6eb088: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eb08d: je 0x6eb09e */
  if (zf) goto L_6eb09e;
L_6eb08f: /* 6eb08f: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 6eb094: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb095: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6eb09bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6eb09b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6eb09e: /* 6eb09e: mov eax, esi */
  eax = esi;
/* 6eb0a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb0a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eb0c0(void) {
  LOAD_REGS();
L_6eb0c0: /* 6eb0c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eb0c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6eb0c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eb0c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb0c9: mov esi, ecx */
  esi = ecx;
/* 6eb0cb: je 0x6eb100 */
  if (zf) goto L_6eb100;
L_6eb0cd: /* 6eb0cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6eb0d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb0d1: push 0x6c9e67 */
  { uint32_t v = 0x6c9e67u; esp -= 4; W32(esp, v); }
/* 6eb0d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6eb0d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eb0da: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 6eb0df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb0e0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6eb0e5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6eb0e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eb0e8: je 0x6eb0f8 */
  if (zf) goto L_6eb0f8;
L_6eb0ea: /* 6eb0ea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6eb0f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6eb0f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6eb0f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb0f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6eb0f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6eb0f8: /* 6eb0f8: mov eax, edi */
  eax = edi;
/* 6eb0fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eb0fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb0fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eb0fd: ret 4 */
  esp += 8; SPILL(); return;
L_6eb100: /* 6eb100: mov ecx, esi */
  ecx = esi;
/* 6eb102: call 0x6c9e67 */
  esp -= 4; W32(esp, 0x6eb107u); SPILL(); f_6c9e67(); if (g_unwind) return; RELOAD();
/* 6eb107: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eb10a: je 0x6eb11b */
  if (zf) goto L_6eb11b;
L_6eb10c: /* 6eb10c: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 6eb111: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb112: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6eb118u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6eb118: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6eb11b: /* 6eb11b: mov eax, esi */
  eax = esi;
/* 6eb11d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb11e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eb11f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eb150(void) {
  LOAD_REGS();
L_6eb150: /* 6eb150: mov eax, 0xb8a9a0 */
  eax = 0xb8a9a0u;
/* 6eb155: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb170(void) {
  LOAD_REGS();
L_6eb170: /* 6eb170: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6eb175: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6eb177: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6eb17b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6eb17f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eb181: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eb183: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eb184: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6eb188: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eb18a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6eb18b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eb18c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eb18d: push 0xb8a9a0 */
  { uint32_t v = 0xb8a9a0u; esp -= 4; W32(esp, v); }
/* 6eb192: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6eb198u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6eb198: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eb19b: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb1b0(void) {
  LOAD_REGS();
L_6eb1b0: /* 6eb1b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6eb1b4: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb1d0(void) {
  LOAD_REGS();
L_6eb1d0: /* 6eb1d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6eb1d2: push 0x9c07b4 */
  { uint32_t v = 0x9c07b4u; esp -= 4; W32(esp, v); }
/* 6eb1d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6eb1dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eb1de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6eb1e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eb1e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb1e7: mov esi, ecx */
  esi = ecx;
/* 6eb1e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6eb1ed: mov dword ptr [esi], 0x9f5818 */
  W32((uint32_t)(esi), 0x9f5818u);
/* 6eb1f3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6eb1fb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6eb201u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6eb201: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 6eb204: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6eb209: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x6eb20fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 6eb20f: mov ecx, esi */
  ecx = esi;
/* 6eb211: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6eb219: call 0x6ccf5e */
  esp -= 4; W32(esp, 0x6eb21eu); SPILL(); f_6ccf5e(); if (g_unwind) return; RELOAD();
/* 6eb21e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6eb222: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb223: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6eb22a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eb22d: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb250(void) {
  LOAD_REGS();
L_6eb250: /* 6eb250: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6eb252: push 0x9c07d8 */
  { uint32_t v = 0x9c07d8u; esp -= 4; W32(esp, v); }
/* 6eb257: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6eb25d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eb25e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6eb265: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eb266: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb267: mov esi, ecx */
  esi = ecx;
/* 6eb269: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6eb26d: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6eb272u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6eb272: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6eb275: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6eb27d: mov dword ptr [esi], 0x9f5818 */
  W32((uint32_t)(esi), 0x9f5818u);
/* 6eb283: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x6eb289u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 6eb289: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6eb28d: mov eax, esi */
  eax = esi;
/* 6eb28f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb290: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6eb297: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eb29a: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb2c0(void) {
  LOAD_REGS();
L_6eb2c0: /* 6eb2c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eb2c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb2c2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6eb2c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb2c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb2c8: mov ebx, ecx */
  ebx = ecx;
/* 6eb2ca: call 0x6c88dc */
  esp -= 4; W32(esp, 0x6eb2cfu); SPILL(); f_6c88dc(); if (g_unwind) return; RELOAD();
/* 6eb2cf: mov edi, dword ptr [ebx + 0x40] */
  edi = R32((uint32_t)(ebx + 0x40u));
/* 6eb2d2: mov dword ptr [ebx], 0x9f5218 */
  W32((uint32_t)(ebx), 0x9f5218u);
/* 6eb2d8: mov al, byte ptr [esi + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3cu))) & 0xffu);
/* 6eb2db: mov byte ptr [ebx + 0x3c], al */
  W8((uint32_t)(ebx + 0x3cu), (eax & 0xffu));
/* 6eb2de: mov cl, byte ptr [esi + 0x3d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3du))) & 0xffu);
/* 6eb2e1: mov byte ptr [ebx + 0x3d], cl */
  W8((uint32_t)(ebx + 0x3du), (ecx & 0xffu));
/* 6eb2e4: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 6eb2e7: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6eb2e9: mov eax, edi */
  eax = edi;
/* 6eb2eb: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6eb2ee: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6eb2f0: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 6eb2f3: mov dword ptr [ebx], 0x9f5818 */
  W32((uint32_t)(ebx), 0x9f5818u);
/* 6eb2f9: lea eax, [esi + 0x44] */
  eax = (uint32_t)(esi + 0x44u);
/* 6eb2fc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6eb2fe: lea ecx, [ebx + 0x44] */
  ecx = (uint32_t)(ebx + 0x44u);
/* 6eb301: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6eb303: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6eb306: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6eb309: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6eb30c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6eb30f: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 6eb312: mov dword ptr [ebx + 0x50], ecx */
  W32((uint32_t)(ebx + 0x50u), ecx);
/* 6eb315: add esi, 0x54 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6eb318: lea edi, [ebx + 0x54] */
  edi = (uint32_t)(ebx + 0x54u);
/* 6eb31b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6eb320: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6eb322: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eb323: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb324: mov eax, ebx */
  eax = ebx;
/* 6eb326: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eb327: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eb350(void) {
  LOAD_REGS();
L_6eb350: /* 6eb350: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eb351: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb352: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6eb356: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb357: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb358: mov ebx, ecx */
  ebx = ecx;
/* 6eb35a: call 0x6c4b51 */
  esp -= 4; W32(esp, 0x6eb35fu); SPILL(); f_6c4b51(); if (g_unwind) return; RELOAD();
/* 6eb35f: lea eax, [esi + 0x44] */
  eax = (uint32_t)(esi + 0x44u);
/* 6eb362: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6eb364: lea ecx, [ebx + 0x44] */
  ecx = (uint32_t)(ebx + 0x44u);
/* 6eb367: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6eb369: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6eb36c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6eb36f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6eb372: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6eb375: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 6eb378: mov dword ptr [ebx + 0x50], ecx */
  W32((uint32_t)(ebx + 0x50u), ecx);
/* 6eb37b: add esi, 0x54 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6eb37e: lea edi, [ebx + 0x54] */
  edi = (uint32_t)(ebx + 0x54u);
/* 6eb381: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6eb386: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6eb388: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eb389: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb38a: mov eax, ebx */
  eax = ebx;
/* 6eb38c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eb38d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eb3a0(void) {
  LOAD_REGS();
L_6eb3a0: /* 6eb3a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb3a1: mov esi, ecx */
  esi = ecx;
/* 6eb3a3: call 0x6c9b47 */
  esp -= 4; W32(esp, 0x6eb3a8u); SPILL(); f_6c9b47(); if (g_unwind) return; RELOAD();
/* 6eb3a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eb3ad: je 0x6eb3be */
  if (zf) goto L_6eb3be;
L_6eb3af: /* 6eb3af: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 6eb3b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb3b5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6eb3bbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6eb3bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6eb3be: /* 6eb3be: mov eax, esi */
  eax = esi;
/* 6eb3c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb3c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eb3e0(void) {
  LOAD_REGS();
L_6eb3e0: /* 6eb3e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eb3e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6eb3e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eb3e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb3e9: mov esi, ecx */
  esi = ecx;
/* 6eb3eb: je 0x6eb420 */
  if (zf) goto L_6eb420;
L_6eb3ed: /* 6eb3ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6eb3f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb3f1: push 0x6c9b47 */
  { uint32_t v = 0x6c9b47u; esp -= 4; W32(esp, v); }
/* 6eb3f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6eb3f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eb3fa: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 6eb3ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb400: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6eb405u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6eb405: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eb408: je 0x6eb418 */
  if (zf) goto L_6eb418;
L_6eb40a: /* 6eb40a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6eb410: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6eb412: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6eb414: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb415: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6eb418u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6eb418: /* 6eb418: mov eax, edi */
  eax = edi;
/* 6eb41a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eb41b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb41c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eb41d: ret 4 */
  esp += 8; SPILL(); return;
L_6eb420: /* 6eb420: mov ecx, esi */
  ecx = esi;
/* 6eb422: call 0x6c9b47 */
  esp -= 4; W32(esp, 0x6eb427u); SPILL(); f_6c9b47(); if (g_unwind) return; RELOAD();
/* 6eb427: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eb42a: je 0x6eb43b */
  if (zf) goto L_6eb43b;
L_6eb42c: /* 6eb42c: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 6eb431: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb432: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6eb438u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6eb438: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6eb43b: /* 6eb43b: mov eax, esi */
  eax = esi;
/* 6eb43d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb43e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eb43f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eb470(void) {
  LOAD_REGS();
L_6eb470: /* 6eb470: mov eax, 0xb8a470 */
  eax = 0xb8a470u;
/* 6eb475: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb490(void) {
  LOAD_REGS();
L_6eb490: /* 6eb490: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6eb495: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6eb497: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6eb49b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6eb49f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eb4a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eb4a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eb4a4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6eb4a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eb4aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6eb4ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eb4ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eb4ad: push 0xb8a470 */
  { uint32_t v = 0xb8a470u; esp -= 4; W32(esp, v); }
/* 6eb4b2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6eb4b8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6eb4b8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eb4bb: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb4d0(void) {
  LOAD_REGS();
L_6eb4d0: /* 6eb4d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6eb4d4: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb4f0(void) {
  LOAD_REGS();
L_6eb4f0: /* 6eb4f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6eb4f2: push 0x9c07f8 */
  { uint32_t v = 0x9c07f8u; esp -= 4; W32(esp, v); }
/* 6eb4f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6eb4fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eb4fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6eb505: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eb506: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb507: mov esi, ecx */
  esi = ecx;
/* 6eb509: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6eb50d: mov dword ptr [esi], 0x9f58d8 */
  W32((uint32_t)(esi), 0x9f58d8u);
/* 6eb513: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6eb51b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6eb521u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6eb521: mov ecx, esi */
  ecx = esi;
/* 6eb523: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6eb52b: call 0x6c9b47 */
  esp -= 4; W32(esp, 0x6eb530u); SPILL(); f_6c9b47(); if (g_unwind) return; RELOAD();
/* 6eb530: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6eb534: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb535: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6eb53c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eb53f: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb560(void) {
  LOAD_REGS();
L_6eb560: /* 6eb560: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6eb562: push 0x9c0818 */
  { uint32_t v = 0x9c0818u; esp -= 4; W32(esp, v); }
/* 6eb567: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6eb56d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eb56e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6eb575: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eb576: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb577: mov esi, ecx */
  esi = ecx;
/* 6eb579: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6eb57d: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6eb582u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6eb582: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6eb585: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6eb58d: mov dword ptr [esi], 0x9f5818 */
  W32((uint32_t)(esi), 0x9f5818u);
/* 6eb593: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x6eb599u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 6eb599: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6eb59d: mov dword ptr [esi], 0x9f58d8 */
  W32((uint32_t)(esi), 0x9f58d8u);
/* 6eb5a3: mov eax, esi */
  eax = esi;
/* 6eb5a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb5a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6eb5ad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eb5b0: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb5e0(void) {
  LOAD_REGS();
L_6eb5e0: /* 6eb5e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb5e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb5e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6eb5e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb5e7: mov esi, ecx */
  esi = ecx;
/* 6eb5e9: call 0x6c9f43 */
  esp -= 4; W32(esp, 0x6eb5eeu); SPILL(); f_6c9f43(); if (g_unwind) return; RELOAD();
/* 6eb5ee: mov dword ptr [esi], 0x9f58d8 */
  W32((uint32_t)(esi), 0x9f58d8u);
/* 6eb5f4: mov al, byte ptr [edi + 0x94] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x94u))) & 0xffu);
/* 6eb5fa: mov byte ptr [esi + 0x94], al */
  W8((uint32_t)(esi + 0x94u), (eax & 0xffu));
/* 6eb600: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* 6eb606: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 6eb60c: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* 6eb612: mov edx, dword ptr [edi + 0x9c] */
  edx = R32((uint32_t)(edi + 0x9cu));
/* 6eb618: mov dword ptr [esi + 0x9c], edx */
  W32((uint32_t)(esi + 0x9cu), edx);
/* 6eb61e: xor eax, dword ptr [edi + 0xa0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xa0u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6eb624: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* 6eb62a: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6eb62d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6eb62f: mov dword ptr [esi + 0xa0], ecx */
  W32((uint32_t)(esi + 0xa0u), ecx);
/* 6eb635: mov eax, ecx */
  eax = ecx;
/* 6eb637: mov ecx, dword ptr [edi + 0xa0] */
  ecx = R32((uint32_t)(edi + 0xa0u));
/* 6eb63d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6eb63f: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6eb642: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6eb644: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eb645: mov dword ptr [esi + 0xa0], ecx */
  W32((uint32_t)(esi + 0xa0u), ecx);
/* 6eb64b: mov eax, esi */
  eax = esi;
/* 6eb64d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb64e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eb680(void) {
  LOAD_REGS();
L_6eb680: /* 6eb680: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eb681: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6eb682: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6eb686: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb687: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb688: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6eb689: mov ebx, ecx */
  ebx = ecx;
/* 6eb68b: call 0x6c4b51 */
  esp -= 4; W32(esp, 0x6eb690u); SPILL(); f_6c4b51(); if (g_unwind) return; RELOAD();
/* 6eb690: lea eax, [ebp + 0x44] */
  eax = (uint32_t)(ebp + 0x44u);
/* 6eb693: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6eb695: lea ecx, [ebx + 0x44] */
  ecx = (uint32_t)(ebx + 0x44u);
/* 6eb698: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6eb69a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6eb69d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6eb6a0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6eb6a3: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6eb6a6: mov ecx, dword ptr [ebp + 0x50] */
  ecx = R32((uint32_t)(ebp + 0x50u));
/* 6eb6a9: mov dword ptr [ebx + 0x50], ecx */
  W32((uint32_t)(ebx + 0x50u), ecx);
/* 6eb6ac: lea esi, [ebp + 0x54] */
  esi = (uint32_t)(ebp + 0x54u);
/* 6eb6af: lea edi, [ebx + 0x54] */
  edi = (uint32_t)(ebx + 0x54u);
/* 6eb6b2: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6eb6b7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6eb6b9: mov dl, byte ptr [ebp + 0x94] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x94u))) & 0xffu);
/* 6eb6bf: mov byte ptr [ebx + 0x94], dl */
  W8((uint32_t)(ebx + 0x94u), (edx & 0xffu));
/* 6eb6c5: mov eax, dword ptr [ebp + 0x98] */
  eax = R32((uint32_t)(ebp + 0x98u));
/* 6eb6cb: mov edx, dword ptr [ebx + 0xa0] */
  edx = R32((uint32_t)(ebx + 0xa0u));
/* 6eb6d1: mov dword ptr [ebx + 0x98], eax */
  W32((uint32_t)(ebx + 0x98u), eax);
/* 6eb6d7: mov ecx, dword ptr [ebp + 0x9c] */
  ecx = R32((uint32_t)(ebp + 0x9cu));
/* 6eb6dd: mov eax, dword ptr [ebx + 0xa0] */
  eax = R32((uint32_t)(ebx + 0xa0u));
/* 6eb6e3: mov dword ptr [ebx + 0x9c], ecx */
  W32((uint32_t)(ebx + 0x9cu), ecx);
/* 6eb6e9: xor edx, dword ptr [ebp + 0xa0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xa0u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6eb6ef: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6eb6f2: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6eb6f4: mov dword ptr [ebx + 0xa0], eax */
  W32((uint32_t)(ebx + 0xa0u), eax);
/* 6eb6fa: mov ecx, dword ptr [ebp + 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xa0u));
/* 6eb700: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6eb702: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eb703: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6eb706: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb707: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6eb709: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6eb70a: mov dword ptr [ebx + 0xa0], ecx */
  W32((uint32_t)(ebx + 0xa0u), ecx);
/* 6eb710: mov eax, ebx */
  eax = ebx;
/* 6eb712: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eb713: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eb750(void) {
  LOAD_REGS();
L_6eb750: /* 6eb750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb751: mov esi, ecx */
  esi = ecx;
/* 6eb753: call 0x6cabc3 */
  esp -= 4; W32(esp, 0x6eb758u); SPILL(); f_6cabc3(); if (g_unwind) return; RELOAD();
/* 6eb758: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eb75d: je 0x6eb76e */
  if (zf) goto L_6eb76e;
L_6eb75f: /* 6eb75f: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 6eb764: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb765: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6eb76bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6eb76b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6eb76e: /* 6eb76e: mov eax, esi */
  eax = esi;
/* 6eb770: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb771: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eb790(void) {
  LOAD_REGS();
L_6eb790: /* 6eb790: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eb791: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6eb795: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eb798: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb799: mov esi, ecx */
  esi = ecx;
/* 6eb79b: je 0x6eb7d0 */
  if (zf) goto L_6eb7d0;
L_6eb79d: /* 6eb79d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6eb7a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb7a1: push 0x6cabc3 */
  { uint32_t v = 0x6cabc3u; esp -= 4; W32(esp, v); }
/* 6eb7a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6eb7a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eb7aa: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 6eb7af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb7b0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6eb7b5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6eb7b5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eb7b8: je 0x6eb7c8 */
  if (zf) goto L_6eb7c8;
L_6eb7ba: /* 6eb7ba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6eb7c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6eb7c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6eb7c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb7c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6eb7c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6eb7c8: /* 6eb7c8: mov eax, edi */
  eax = edi;
/* 6eb7ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eb7cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb7cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eb7cd: ret 4 */
  esp += 8; SPILL(); return;
L_6eb7d0: /* 6eb7d0: mov ecx, esi */
  ecx = esi;
/* 6eb7d2: call 0x6cabc3 */
  esp -= 4; W32(esp, 0x6eb7d7u); SPILL(); f_6cabc3(); if (g_unwind) return; RELOAD();
/* 6eb7d7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eb7da: je 0x6eb7eb */
  if (zf) goto L_6eb7eb;
L_6eb7dc: /* 6eb7dc: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 6eb7e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb7e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6eb7e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6eb7e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6eb7eb: /* 6eb7eb: mov eax, esi */
  eax = esi;
/* 6eb7ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb7ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eb7ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eb820(void) {
  LOAD_REGS();
L_6eb820: /* 6eb820: mov eax, 0xb87af0 */
  eax = 0xb87af0u;
/* 6eb825: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb840(void) {
  LOAD_REGS();
L_6eb840: /* 6eb840: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6eb845: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6eb847: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6eb84b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6eb84f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eb851: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eb853: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eb854: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6eb858: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eb85a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6eb85b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eb85c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eb85d: push 0xb87af0 */
  { uint32_t v = 0xb87af0u; esp -= 4; W32(esp, v); }
/* 6eb862: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6eb868u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6eb868: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eb86b: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb880(void) {
  LOAD_REGS();
L_6eb880: /* 6eb880: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6eb884: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb8a0(void) {
  LOAD_REGS();
L_6eb8a0: /* 6eb8a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6eb8a2: push 0x9c0838 */
  { uint32_t v = 0x9c0838u; esp -= 4; W32(esp, v); }
/* 6eb8a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6eb8ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eb8ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6eb8b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eb8b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb8b7: mov esi, ecx */
  esi = ecx;
/* 6eb8b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6eb8bd: mov dword ptr [esi], 0x9f5998 */
  W32((uint32_t)(esi), 0x9f5998u);
/* 6eb8c3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6eb8cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6eb8d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6eb8d1: mov ecx, esi */
  ecx = esi;
/* 6eb8d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6eb8db: call 0x6c1cc6 */
  esp -= 4; W32(esp, 0x6eb8e0u); SPILL(); f_6c1cc6(); if (g_unwind) return; RELOAD();
/* 6eb8e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6eb8e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb8e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6eb8ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eb8ef: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb910(void) {
  LOAD_REGS();
L_6eb910: /* 6eb910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb911: mov esi, ecx */
  esi = ecx;
/* 6eb913: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6eb918u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6eb918: mov dword ptr [esi], 0x9f5998 */
  W32((uint32_t)(esi), 0x9f5998u);
/* 6eb91e: mov eax, esi */
  eax = esi;
/* 6eb920: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb921: ret  */
  esp += 4; SPILL(); return;
}

void f_6eb940(void) {
  LOAD_REGS();
L_6eb940: /* 6eb940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb941: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb942: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6eb946: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb947: mov esi, ecx */
  esi = ecx;
/* 6eb949: call 0x6c88dc */
  esp -= 4; W32(esp, 0x6eb94eu); SPILL(); f_6c88dc(); if (g_unwind) return; RELOAD();
/* 6eb94e: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 6eb951: mov dword ptr [esi], 0x9f5998 */
  W32((uint32_t)(esi), 0x9f5998u);
/* 6eb957: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 6eb95a: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 6eb95d: xor ecx, dword ptr [edi + 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x40u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6eb960: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 6eb963: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6eb966: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6eb968: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6eb96b: mov eax, edx */
  eax = edx;
/* 6eb96d: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6eb970: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6eb972: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6eb975: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6eb977: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eb978: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6eb97b: mov eax, esi */
  eax = esi;
/* 6eb97d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eb97e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eb9b0(void) {
  LOAD_REGS();
L_6eb9b0: /* 6eb9b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eb9b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb9b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6eb9b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eb9b7: mov esi, ecx */
  esi = ecx;
/* 6eb9b9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6eb9bfu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6eb9bf: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6eb9c2: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6eb9c5: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6eb9c8: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6eb9cb: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6eb9ce: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6eb9d1: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6eb9d4: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6eb9d7: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6eb9d9: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6eb9dc: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6eb9df: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6eb9e1: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6eb9e4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6eb9e6: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6eb9e9: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6eb9ec: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6eb9ef: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6eb9f2: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 6eb9f5: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6eb9f8: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 6eb9fb: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 6eb9fe: xor edx, dword ptr [edi + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x40u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6eba01: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 6eba04: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6eba07: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6eba09: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6eba0c: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 6eba0f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6eba11: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6eba14: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6eba16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eba17: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 6eba1a: mov eax, esi */
  eax = esi;
/* 6eba1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eba1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eba40(void) {
  LOAD_REGS();
L_6eba40: /* 6eba40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eba41: mov esi, ecx */
  esi = ecx;
/* 6eba43: call 0x6c5ffb */
  esp -= 4; W32(esp, 0x6eba48u); SPILL(); f_6c5ffb(); if (g_unwind) return; RELOAD();
/* 6eba48: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eba4d: je 0x6eba5b */
  if (zf) goto L_6eba5b;
L_6eba4f: /* 6eba4f: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 6eba51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eba52: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6eba58u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6eba58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6eba5b: /* 6eba5b: mov eax, esi */
  eax = esi;
/* 6eba5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eba5e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eba80(void) {
  LOAD_REGS();
L_6eba80: /* 6eba80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eba81: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6eba85: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eba88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eba89: mov esi, ecx */
  esi = ecx;
/* 6eba8b: je 0x6ebabd */
  if (zf) goto L_6ebabd;
L_6eba8d: /* 6eba8d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6eba90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eba91: push 0x6c5ffb */
  { uint32_t v = 0x6c5ffbu; esp -= 4; W32(esp, v); }
/* 6eba96: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6eba99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eba9a: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 6eba9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eba9d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ebaa2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ebaa2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ebaa5: je 0x6ebab5 */
  if (zf) goto L_6ebab5;
L_6ebaa7: /* 6ebaa7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ebaad: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ebaaf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ebab1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ebab2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ebab5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ebab5: /* 6ebab5: mov eax, edi */
  eax = edi;
/* 6ebab7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ebab8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ebab9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ebaba: ret 4 */
  esp += 8; SPILL(); return;
L_6ebabd: /* 6ebabd: mov ecx, esi */
  ecx = esi;
/* 6ebabf: call 0x6c5ffb */
  esp -= 4; W32(esp, 0x6ebac4u); SPILL(); f_6c5ffb(); if (g_unwind) return; RELOAD();
/* 6ebac4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ebac7: je 0x6ebad5 */
  if (zf) goto L_6ebad5;
L_6ebac9: /* 6ebac9: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 6ebacb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ebacc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ebad2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ebad2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ebad5: /* 6ebad5: mov eax, esi */
  eax = esi;
/* 6ebad7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ebad8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ebad9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ebb00(void) {
  LOAD_REGS();
L_6ebb00: /* 6ebb00: mov eax, 0xb88550 */
  eax = 0xb88550u;
/* 6ebb05: ret  */
  esp += 4; SPILL(); return;
}

void f_6ebb20(void) {
  LOAD_REGS();
L_6ebb20: /* 6ebb20: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ebb25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ebb27: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ebb2b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ebb2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ebb31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ebb33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ebb34: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ebb38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ebb3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ebb3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ebb3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ebb3d: push 0xb88550 */
  { uint32_t v = 0xb88550u; esp -= 4; W32(esp, v); }
/* 6ebb42: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ebb48u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ebb48: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ebb4b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ebb60(void) {
  LOAD_REGS();
L_6ebb60: /* 6ebb60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ebb64: ret  */
  esp += 4; SPILL(); return;
}

void f_6ebb80(void) {
  LOAD_REGS();
L_6ebb80: /* 6ebb80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ebb82: push 0x9c0858 */
  { uint32_t v = 0x9c0858u; esp -= 4; W32(esp, v); }
/* 6ebb87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ebb8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ebb8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ebb95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ebb96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ebb97: mov esi, ecx */
  esi = ecx;
/* 6ebb99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ebb9d: mov dword ptr [esi], 0x9f5a50 */
  W32((uint32_t)(esi), 0x9f5a50u);
/* 6ebba3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ebbab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ebbb1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ebbb1: mov ecx, esi */
  ecx = esi;
/* 6ebbb3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ebbbb: call 0x6c9f16 */
  esp -= 4; W32(esp, 0x6ebbc0u); SPILL(); f_6c9f16(); if (g_unwind) return; RELOAD();
/* 6ebbc0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ebbc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ebbc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ebbcc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ebbcf: ret  */
  esp += 4; SPILL(); return;
}

void f_6ebbf0(void) {
  LOAD_REGS();
L_6ebbf0: /* 6ebbf0: xor eax, eax */
  eax = 0;
/* 6ebbf2: ret  */
  esp += 4; SPILL(); return;
}

void f_6ebc10(void) {
  LOAD_REGS();
L_6ebc10: /* 6ebc10: xor eax, eax */
  eax = 0;
/* 6ebc12: ret  */
  esp += 4; SPILL(); return;
}

void f_6ebc30(void) {
  LOAD_REGS();
L_6ebc30: /* 6ebc30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ebc31: mov esi, ecx */
  esi = ecx;
/* 6ebc33: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 6ebc36: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6ebc38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ebc39: je 0x6ebc48 */
  if (zf) goto L_6ebc48;
L_6ebc3b: /* 6ebc3b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ebc3d: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x6ebc43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6ebc43: movzx edi, al */
  edi = (uint32_t)((eax & 0xffu));
/* 6ebc46: jmp 0x6ebc4d */
  goto L_6ebc4d;
L_6ebc48: /* 6ebc48: mov edi, 1 */
  edi = 0x1u;
L_6ebc4d: /* 6ebc4d: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 6ebc50: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6ebc52: je 0x6ebc64 */
  if (zf) goto L_6ebc64;
L_6ebc54: /* 6ebc54: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ebc56: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x6ebc5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6ebc5c: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 6ebc5f: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 6ebc61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ebc62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ebc63: ret  */
  esp += 4; SPILL(); return;
L_6ebc64: /* 6ebc64: mov eax, 1 */
  eax = 0x1u;
/* 6ebc69: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 6ebc6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ebc6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ebc6d: ret  */
  esp += 4; SPILL(); return;
}

void f_6ebc80(void) {
  LOAD_REGS();
L_6ebc80: /* 6ebc80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ebc81: mov esi, ecx */
  esi = ecx;
/* 6ebc83: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6ebc88u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6ebc88: mov dword ptr [esi], 0x9f5a50 */
  W32((uint32_t)(esi), 0x9f5a50u);
/* 6ebc8e: mov eax, esi */
  eax = esi;
/* 6ebc90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ebc91: ret  */
  esp += 4; SPILL(); return;
}

void f_6ebcb0(void) {
  LOAD_REGS();
L_6ebcb0: /* 6ebcb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ebcb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ebcb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ebcb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ebcb7: mov esi, ecx */
  esi = ecx;
/* 6ebcb9: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6ebcbfu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6ebcbf: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6ebcc2: mov dword ptr [esi], 0x9f4450 */
  W32((uint32_t)(esi), 0x9f4450u);
/* 6ebcc8: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ebccb: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ebcce: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ebcd1: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ebcd4: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6ebcd7: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6ebcda: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6ebcdd: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ebcdf: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6ebce2: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6ebce5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ebce7: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6ebcea: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ebcec: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6ebcef: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6ebcf2: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6ebcf5: mov dword ptr [esi], 0x9f5a50 */
  W32((uint32_t)(esi), 0x9f5a50u);
/* 6ebcfb: mov al, byte ptr [edi + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x38u))) & 0xffu);
/* 6ebcfe: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* 6ebd01: mov cl, byte ptr [edi + 0x39] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x39u))) & 0xffu);
/* 6ebd04: mov byte ptr [esi + 0x39], cl */
  W8((uint32_t)(esi + 0x39u), (ecx & 0xffu));
/* 6ebd07: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6ebd0a: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6ebd0d: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6ebd10: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 6ebd13: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6ebd16: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 6ebd19: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 6ebd1c: xor edx, dword ptr [edi + 0x48] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x48u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6ebd1f: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 6ebd22: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6ebd25: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ebd27: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6ebd2a: mov ecx, eax */
  ecx = eax;
/* 6ebd2c: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6ebd2f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ebd31: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6ebd34: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ebd36: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6ebd39: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 6ebd3c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ebd3e: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6ebd41: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ebd43: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ebd44: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6ebd47: mov eax, esi */
  eax = esi;
/* 6ebd49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ebd4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ebd80(void) {
  LOAD_REGS();
L_6ebd80: /* 6ebd80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ebd81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ebd82: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ebd86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ebd87: mov esi, ecx */
  esi = ecx;
/* 6ebd89: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ebd8fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ebd8f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ebd92: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6ebd95: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ebd98: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ebd9b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ebd9e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6ebda1: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6ebda4: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6ebda7: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ebda9: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6ebdac: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6ebdaf: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ebdb1: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6ebdb4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ebdb6: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6ebdb9: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6ebdbc: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6ebdbf: mov al, byte ptr [edi + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x38u))) & 0xffu);
/* 6ebdc2: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* 6ebdc5: mov cl, byte ptr [edi + 0x39] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x39u))) & 0xffu);
/* 6ebdc8: mov byte ptr [esi + 0x39], cl */
  W8((uint32_t)(esi + 0x39u), (ecx & 0xffu));
/* 6ebdcb: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6ebdce: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6ebdd1: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6ebdd4: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 6ebdd7: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6ebdda: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 6ebddd: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 6ebde0: xor edx, dword ptr [edi + 0x48] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x48u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6ebde3: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 6ebde6: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6ebde9: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ebdeb: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6ebdee: mov ecx, eax */
  ecx = eax;
/* 6ebdf0: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6ebdf3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ebdf5: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6ebdf8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ebdfa: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6ebdfd: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 6ebe00: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ebe02: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6ebe05: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ebe07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ebe08: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6ebe0b: mov eax, esi */
  eax = esi;
/* 6ebe0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ebe0e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ebe50(void) {
  LOAD_REGS();
L_6ebe50: /* 6ebe50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ebe51: mov esi, ecx */
  esi = ecx;
/* 6ebe53: call 0x6ca06f */
  esp -= 4; W32(esp, 0x6ebe58u); SPILL(); f_6ca06f(); if (g_unwind) return; RELOAD();
/* 6ebe58: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ebe5d: je 0x6ebe6b */
  if (zf) goto L_6ebe6b;
L_6ebe5f: /* 6ebe5f: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6ebe61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ebe62: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ebe68u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ebe68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ebe6b: /* 6ebe6b: mov eax, esi */
  eax = esi;
/* 6ebe6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ebe6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ebe90(void) {
  LOAD_REGS();
L_6ebe90: /* 6ebe90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ebe91: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ebe95: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ebe98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ebe99: mov esi, ecx */
  esi = ecx;
/* 6ebe9b: je 0x6ebecd */
  if (zf) goto L_6ebecd;
L_6ebe9d: /* 6ebe9d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ebea0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ebea1: push 0x6ca06f */
  { uint32_t v = 0x6ca06fu; esp -= 4; W32(esp, v); }
/* 6ebea6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ebea9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ebeaa: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6ebeac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ebead: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ebeb2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ebeb2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ebeb5: je 0x6ebec5 */
  if (zf) goto L_6ebec5;
L_6ebeb7: /* 6ebeb7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ebebd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ebebf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ebec1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ebec2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ebec5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ebec5: /* 6ebec5: mov eax, edi */
  eax = edi;
/* 6ebec7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ebec8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ebec9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ebeca: ret 4 */
  esp += 8; SPILL(); return;
L_6ebecd: /* 6ebecd: mov ecx, esi */
  ecx = esi;
/* 6ebecf: call 0x6ca06f */
  esp -= 4; W32(esp, 0x6ebed4u); SPILL(); f_6ca06f(); if (g_unwind) return; RELOAD();
/* 6ebed4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ebed7: je 0x6ebee5 */
  if (zf) goto L_6ebee5;
L_6ebed9: /* 6ebed9: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6ebedb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ebedc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ebee2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ebee2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ebee5: /* 6ebee5: mov eax, esi */
  eax = esi;
/* 6ebee7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ebee8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ebee9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ebf10(void) {
  LOAD_REGS();
L_6ebf10: /* 6ebf10: mov eax, 0xce31f8 */
  eax = 0xce31f8u;
/* 6ebf15: ret  */
  esp += 4; SPILL(); return;
}

void f_6ebf30(void) {
  LOAD_REGS();
L_6ebf30: /* 6ebf30: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ebf35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ebf37: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ebf3b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ebf3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ebf41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ebf43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ebf44: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ebf48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ebf4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ebf4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ebf4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ebf4d: push 0xce31f8 */
  { uint32_t v = 0xce31f8u; esp -= 4; W32(esp, v); }
/* 6ebf52: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ebf58u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ebf58: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ebf5b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ebf70(void) {
  LOAD_REGS();
L_6ebf70: /* 6ebf70: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ebf74: ret  */
  esp += 4; SPILL(); return;
}

void f_6ebf90(void) {
  LOAD_REGS();
L_6ebf90: /* 6ebf90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ebf92: push 0x9c0879 */
  { uint32_t v = 0x9c0879u; esp -= 4; W32(esp, v); }
/* 6ebf97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ebf9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ebf9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ebfa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ebfa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ebfa7: mov esi, ecx */
  esi = ecx;
/* 6ebfa9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ebfad: mov dword ptr [esi], 0x9f5b08 */
  W32((uint32_t)(esi), 0x9f5b08u);
/* 6ebfb3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ebfbb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ebfc1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ebfc1: mov ecx, esi */
  ecx = esi;
/* 6ebfc3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ebfcb: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6ebfd1u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6ebfd1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ebfd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ebfd6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ebfdd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ebfe0: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec010(void) {
  LOAD_REGS();
L_6ec010: /* 6ec010: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6ec030(void) {
  LOAD_REGS();
L_6ec030: /* 6ec030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec031: mov esi, ecx */
  esi = ecx;
/* 6ec033: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6ec039u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6ec039: mov dword ptr [esi], 0x9f5b08 */
  W32((uint32_t)(esi), 0x9f5b08u);
/* 6ec03f: mov eax, esi */
  eax = esi;
/* 6ec041: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec042: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec060(void) {
  LOAD_REGS();
L_6ec060: /* 6ec060: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec061: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec062: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ec066: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec067: mov esi, ecx */
  esi = ecx;
/* 6ec069: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6ec06fu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6ec06f: mov dword ptr [esi], 0x9f5b08 */
  W32((uint32_t)(esi), 0x9f5b08u);
/* 6ec075: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ec078: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ec07b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ec07c: mov eax, esi */
  eax = esi;
/* 6ec07e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec07f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec0a0(void) {
  LOAD_REGS();
L_6ec0a0: /* 6ec0a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec0a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec0a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ec0a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec0a7: mov esi, ecx */
  esi = ecx;
/* 6ec0a9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ec0afu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ec0af: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ec0b2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ec0b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ec0b6: mov eax, esi */
  eax = esi;
/* 6ec0b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec0b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec0d0(void) {
  LOAD_REGS();
L_6ec0d0: /* 6ec0d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec0d1: mov esi, ecx */
  esi = ecx;
/* 6ec0d3: call 0x6c205e */
  esp -= 4; W32(esp, 0x6ec0d8u); SPILL(); f_6c205e(); if (g_unwind) return; RELOAD();
/* 6ec0d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec0dd: je 0x6ec0eb */
  if (zf) goto L_6ec0eb;
L_6ec0df: /* 6ec0df: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6ec0e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec0e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ec0e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ec0e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ec0eb: /* 6ec0eb: mov eax, esi */
  eax = esi;
/* 6ec0ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec0ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec110(void) {
  LOAD_REGS();
L_6ec110: /* 6ec110: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ec111: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ec115: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec118: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec119: mov esi, ecx */
  esi = ecx;
/* 6ec11b: je 0x6ec14d */
  if (zf) goto L_6ec14d;
L_6ec11d: /* 6ec11d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ec120: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec121: push 0x6c205e */
  { uint32_t v = 0x6c205eu; esp -= 4; W32(esp, v); }
/* 6ec126: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ec129: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec12a: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6ec12c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec12d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ec132u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ec132: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec135: je 0x6ec145 */
  if (zf) goto L_6ec145;
L_6ec137: /* 6ec137: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ec13d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ec13f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ec141: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec142: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ec145u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ec145: /* 6ec145: mov eax, edi */
  eax = edi;
/* 6ec147: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ec148: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec149: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ec14a: ret 4 */
  esp += 8; SPILL(); return;
L_6ec14d: /* 6ec14d: mov ecx, esi */
  ecx = esi;
/* 6ec14f: call 0x6c205e */
  esp -= 4; W32(esp, 0x6ec154u); SPILL(); f_6c205e(); if (g_unwind) return; RELOAD();
/* 6ec154: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec157: je 0x6ec165 */
  if (zf) goto L_6ec165;
L_6ec159: /* 6ec159: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6ec15b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec15c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ec162u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ec162: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ec165: /* 6ec165: mov eax, esi */
  eax = esi;
/* 6ec167: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec168: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ec169: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec190(void) {
  LOAD_REGS();
L_6ec190: /* 6ec190: mov eax, 0xce5118 */
  eax = 0xce5118u;
/* 6ec195: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec1b0(void) {
  LOAD_REGS();
L_6ec1b0: /* 6ec1b0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ec1b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ec1b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ec1bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ec1bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec1c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec1c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec1c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ec1c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec1ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ec1cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec1cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec1cd: push 0xce5118 */
  { uint32_t v = 0xce5118u; esp -= 4; W32(esp, v); }
/* 6ec1d2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ec1d8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ec1d8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ec1db: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec1f0(void) {
  LOAD_REGS();
L_6ec1f0: /* 6ec1f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ec1f4: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec210(void) {
  LOAD_REGS();
L_6ec210: /* 6ec210: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ec212: push 0x9c0898 */
  { uint32_t v = 0x9c0898u; esp -= 4; W32(esp, v); }
/* 6ec217: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ec21d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec21e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ec225: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec226: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec227: mov esi, ecx */
  esi = ecx;
/* 6ec229: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ec22d: mov dword ptr [esi], 0x9f5b90 */
  W32((uint32_t)(esi), 0x9f5b90u);
/* 6ec233: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ec23b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ec241u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ec241: mov ecx, esi */
  ecx = esi;
/* 6ec243: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ec24b: call 0x6c205e */
  esp -= 4; W32(esp, 0x6ec250u); SPILL(); f_6c205e(); if (g_unwind) return; RELOAD();
/* 6ec250: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ec254: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec255: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ec25c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ec25f: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec280(void) {
  LOAD_REGS();
L_6ec280: /* 6ec280: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec281: mov esi, ecx */
  esi = ecx;
/* 6ec283: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6ec289u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6ec289: mov dword ptr [esi], 0x9f5b90 */
  W32((uint32_t)(esi), 0x9f5b90u);
/* 6ec28f: mov eax, esi */
  eax = esi;
/* 6ec291: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec292: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec2b0(void) {
  LOAD_REGS();
L_6ec2b0: /* 6ec2b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec2b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec2b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ec2b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec2b7: mov esi, ecx */
  esi = ecx;
/* 6ec2b9: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6ec2bfu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6ec2bf: mov dword ptr [esi], 0x9f5b08 */
  W32((uint32_t)(esi), 0x9f5b08u);
/* 6ec2c5: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ec2c8: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ec2cb: mov dword ptr [esi], 0x9f5b90 */
  W32((uint32_t)(esi), 0x9f5b90u);
/* 6ec2d1: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ec2d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ec2d5: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ec2d8: mov eax, esi */
  eax = esi;
/* 6ec2da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec2db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec2f0(void) {
  LOAD_REGS();
L_6ec2f0: /* 6ec2f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec2f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec2f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ec2f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec2f7: mov esi, ecx */
  esi = ecx;
/* 6ec2f9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ec2ffu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ec2ff: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ec302: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ec305: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ec308: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ec309: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ec30c: mov eax, esi */
  eax = esi;
/* 6ec30e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec30f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec330(void) {
  LOAD_REGS();
L_6ec330: /* 6ec330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec331: mov esi, ecx */
  esi = ecx;
/* 6ec333: call 0x6c51d2 */
  esp -= 4; W32(esp, 0x6ec338u); SPILL(); f_6c51d2(); if (g_unwind) return; RELOAD();
/* 6ec338: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec33d: je 0x6ec34b */
  if (zf) goto L_6ec34b;
L_6ec33f: /* 6ec33f: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 6ec341: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec342: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ec348u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ec348: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ec34b: /* 6ec34b: mov eax, esi */
  eax = esi;
/* 6ec34d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec34e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec370(void) {
  LOAD_REGS();
L_6ec370: /* 6ec370: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ec371: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ec375: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec378: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec379: mov esi, ecx */
  esi = ecx;
/* 6ec37b: je 0x6ec3ad */
  if (zf) goto L_6ec3ad;
L_6ec37d: /* 6ec37d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ec380: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec381: push 0x6c51d2 */
  { uint32_t v = 0x6c51d2u; esp -= 4; W32(esp, v); }
/* 6ec386: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ec389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec38a: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 6ec38c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec38d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ec392u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ec392: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec395: je 0x6ec3a5 */
  if (zf) goto L_6ec3a5;
L_6ec397: /* 6ec397: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ec39d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ec39f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ec3a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec3a2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ec3a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ec3a5: /* 6ec3a5: mov eax, edi */
  eax = edi;
/* 6ec3a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ec3a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec3a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ec3aa: ret 4 */
  esp += 8; SPILL(); return;
L_6ec3ad: /* 6ec3ad: mov ecx, esi */
  ecx = esi;
/* 6ec3af: call 0x6c51d2 */
  esp -= 4; W32(esp, 0x6ec3b4u); SPILL(); f_6c51d2(); if (g_unwind) return; RELOAD();
/* 6ec3b4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec3b7: je 0x6ec3c5 */
  if (zf) goto L_6ec3c5;
L_6ec3b9: /* 6ec3b9: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 6ec3bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec3bc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ec3c2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ec3c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ec3c5: /* 6ec3c5: mov eax, esi */
  eax = esi;
/* 6ec3c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec3c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ec3c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec3f0(void) {
  LOAD_REGS();
L_6ec3f0: /* 6ec3f0: mov edx, dword ptr [0xb7e4a8] */
  edx = R32((uint32_t)(0xb7e4a8u));
/* 6ec3f6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ec3fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec3fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec3fc: mov esi, ecx */
  esi = ecx;
/* 6ec3fe: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6ec400: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec402: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6ec406: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec407: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec409: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ec40a: mov ecx, esi */
  ecx = esi;
/* 6ec40c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6ec410: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6ec416u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6ec416: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec417: mov ecx, esi */
  ecx = esi;
/* 6ec419: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6ec41cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6ec41c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ec41d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec41e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec440(void) {
  LOAD_REGS();
L_6ec440: /* 6ec440: mov eax, 0xce4be8 */
  eax = 0xce4be8u;
/* 6ec445: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec460(void) {
  LOAD_REGS();
L_6ec460: /* 6ec460: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ec465: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ec467: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ec46b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ec46f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec471: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec473: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec474: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ec478: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec47a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ec47b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec47c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec47d: push 0xce4be8 */
  { uint32_t v = 0xce4be8u; esp -= 4; W32(esp, v); }
/* 6ec482: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ec488u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ec488: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ec48b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec4a0(void) {
  LOAD_REGS();
L_6ec4a0: /* 6ec4a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ec4a4: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec4c0(void) {
  LOAD_REGS();
L_6ec4c0: /* 6ec4c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ec4c2: push 0x9c08b8 */
  { uint32_t v = 0x9c08b8u; esp -= 4; W32(esp, v); }
/* 6ec4c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ec4cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec4ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ec4d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec4d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec4d7: mov esi, ecx */
  esi = ecx;
/* 6ec4d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ec4dd: mov dword ptr [esi], 0x9f5c18 */
  W32((uint32_t)(esi), 0x9f5c18u);
/* 6ec4e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ec4eb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ec4f1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ec4f1: mov ecx, esi */
  ecx = esi;
/* 6ec4f3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ec4fb: call 0x6c205e */
  esp -= 4; W32(esp, 0x6ec500u); SPILL(); f_6c205e(); if (g_unwind) return; RELOAD();
/* 6ec500: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ec504: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec505: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ec50c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ec50f: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec530(void) {
  LOAD_REGS();
L_6ec530: /* 6ec530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec531: mov esi, ecx */
  esi = ecx;
/* 6ec533: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6ec539u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6ec539: mov dword ptr [esi], 0x9f5c18 */
  W32((uint32_t)(esi), 0x9f5c18u);
/* 6ec53f: mov eax, esi */
  eax = esi;
/* 6ec541: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec542: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec560(void) {
  LOAD_REGS();
L_6ec560: /* 6ec560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec561: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec562: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ec566: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec567: mov esi, ecx */
  esi = ecx;
/* 6ec569: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6ec56fu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6ec56f: mov dword ptr [esi], 0x9f5b08 */
  W32((uint32_t)(esi), 0x9f5b08u);
/* 6ec575: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ec578: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ec57b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ec57c: mov dword ptr [esi], 0x9f5c18 */
  W32((uint32_t)(esi), 0x9f5c18u);
/* 6ec582: mov eax, esi */
  eax = esi;
/* 6ec584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec585: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec5a0(void) {
  LOAD_REGS();
L_6ec5a0: /* 6ec5a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec5a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec5a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ec5a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec5a7: mov esi, ecx */
  esi = ecx;
/* 6ec5a9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ec5afu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ec5af: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ec5b2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ec5b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ec5b6: mov eax, esi */
  eax = esi;
/* 6ec5b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec5b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec5d0(void) {
  LOAD_REGS();
L_6ec5d0: /* 6ec5d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec5d1: mov esi, ecx */
  esi = ecx;
/* 6ec5d3: call 0x6c421e */
  esp -= 4; W32(esp, 0x6ec5d8u); SPILL(); f_6c421e(); if (g_unwind) return; RELOAD();
/* 6ec5d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec5dd: je 0x6ec5eb */
  if (zf) goto L_6ec5eb;
L_6ec5df: /* 6ec5df: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6ec5e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec5e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ec5e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ec5e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ec5eb: /* 6ec5eb: mov eax, esi */
  eax = esi;
/* 6ec5ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec5ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec610(void) {
  LOAD_REGS();
L_6ec610: /* 6ec610: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ec611: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ec615: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec618: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec619: mov esi, ecx */
  esi = ecx;
/* 6ec61b: je 0x6ec64d */
  if (zf) goto L_6ec64d;
L_6ec61d: /* 6ec61d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ec620: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec621: push 0x6c421e */
  { uint32_t v = 0x6c421eu; esp -= 4; W32(esp, v); }
/* 6ec626: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ec629: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec62a: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6ec62c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec62d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ec632u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ec632: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec635: je 0x6ec645 */
  if (zf) goto L_6ec645;
L_6ec637: /* 6ec637: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ec63d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ec63f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ec641: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec642: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ec645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ec645: /* 6ec645: mov eax, edi */
  eax = edi;
/* 6ec647: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ec648: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec649: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ec64a: ret 4 */
  esp += 8; SPILL(); return;
L_6ec64d: /* 6ec64d: mov ecx, esi */
  ecx = esi;
/* 6ec64f: call 0x6c421e */
  esp -= 4; W32(esp, 0x6ec654u); SPILL(); f_6c421e(); if (g_unwind) return; RELOAD();
/* 6ec654: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec657: je 0x6ec665 */
  if (zf) goto L_6ec665;
L_6ec659: /* 6ec659: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6ec65b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec65c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ec662u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ec662: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ec665: /* 6ec665: mov eax, esi */
  eax = esi;
/* 6ec667: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec668: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ec669: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec690(void) {
  LOAD_REGS();
L_6ec690: /* 6ec690: mov eax, 0xce46b8 */
  eax = 0xce46b8u;
/* 6ec695: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec6b0(void) {
  LOAD_REGS();
L_6ec6b0: /* 6ec6b0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ec6b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ec6b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ec6bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ec6bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec6c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec6c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec6c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ec6c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec6ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ec6cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec6cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec6cd: push 0xce46b8 */
  { uint32_t v = 0xce46b8u; esp -= 4; W32(esp, v); }
/* 6ec6d2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ec6d8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ec6d8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ec6db: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec6f0(void) {
  LOAD_REGS();
L_6ec6f0: /* 6ec6f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ec6f4: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec710(void) {
  LOAD_REGS();
L_6ec710: /* 6ec710: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ec712: push 0x9c08d8 */
  { uint32_t v = 0x9c08d8u; esp -= 4; W32(esp, v); }
/* 6ec717: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ec71d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec71e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ec725: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec726: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec727: mov esi, ecx */
  esi = ecx;
/* 6ec729: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ec72d: mov dword ptr [esi], 0x9f5ca0 */
  W32((uint32_t)(esi), 0x9f5ca0u);
/* 6ec733: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ec73b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ec741u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ec741: mov ecx, esi */
  ecx = esi;
/* 6ec743: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ec74b: call 0x6c205e */
  esp -= 4; W32(esp, 0x6ec750u); SPILL(); f_6c205e(); if (g_unwind) return; RELOAD();
/* 6ec750: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ec754: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec755: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ec75c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ec75f: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec780(void) {
  LOAD_REGS();
L_6ec780: /* 6ec780: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ec782: push 0x9c08f8 */
  { uint32_t v = 0x9c08f8u; esp -= 4; W32(esp, v); }
/* 6ec787: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ec78d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec78e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ec795: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec796: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec797: mov esi, ecx */
  esi = ecx;
/* 6ec799: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ec79d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6ec7a3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6ec7a3: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 6ec7a6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ec7ae: mov dword ptr [esi], 0x9f5ca0 */
  W32((uint32_t)(esi), 0x9f5ca0u);
/* 6ec7b4: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6ec7bau); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6ec7ba: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ec7be: mov eax, esi */
  eax = esi;
/* 6ec7c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec7c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ec7c8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ec7cb: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec7f0(void) {
  LOAD_REGS();
L_6ec7f0: /* 6ec7f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec7f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec7f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ec7f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec7f7: mov esi, ecx */
  esi = ecx;
/* 6ec7f9: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6ec7ffu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6ec7ff: mov dword ptr [esi], 0x9f5b08 */
  W32((uint32_t)(esi), 0x9f5b08u);
/* 6ec805: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ec808: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ec80b: mov dword ptr [esi], 0x9f5ca0 */
  W32((uint32_t)(esi), 0x9f5ca0u);
/* 6ec811: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ec814: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ec815: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ec818: mov eax, esi */
  eax = esi;
/* 6ec81a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec81b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec830(void) {
  LOAD_REGS();
L_6ec830: /* 6ec830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec831: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec832: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ec836: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec837: mov esi, ecx */
  esi = ecx;
/* 6ec839: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ec83fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ec83f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ec842: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ec845: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ec848: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ec849: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ec84c: mov eax, esi */
  eax = esi;
/* 6ec84e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec84f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec870(void) {
  LOAD_REGS();
L_6ec870: /* 6ec870: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec871: mov esi, ecx */
  esi = ecx;
/* 6ec873: call 0x6cbd98 */
  esp -= 4; W32(esp, 0x6ec878u); SPILL(); f_6cbd98(); if (g_unwind) return; RELOAD();
/* 6ec878: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec87d: je 0x6ec88b */
  if (zf) goto L_6ec88b;
L_6ec87f: /* 6ec87f: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 6ec881: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec882: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ec888u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ec888: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ec88b: /* 6ec88b: mov eax, esi */
  eax = esi;
/* 6ec88d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec88e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec8b0(void) {
  LOAD_REGS();
L_6ec8b0: /* 6ec8b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ec8b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ec8b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec8b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec8b9: mov esi, ecx */
  esi = ecx;
/* 6ec8bb: je 0x6ec8ed */
  if (zf) goto L_6ec8ed;
L_6ec8bd: /* 6ec8bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ec8c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec8c1: push 0x6cbd98 */
  { uint32_t v = 0x6cbd98u; esp -= 4; W32(esp, v); }
/* 6ec8c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ec8c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec8ca: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 6ec8cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec8cd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ec8d2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ec8d2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec8d5: je 0x6ec8e5 */
  if (zf) goto L_6ec8e5;
L_6ec8d7: /* 6ec8d7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ec8dd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ec8df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ec8e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ec8e2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ec8e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ec8e5: /* 6ec8e5: mov eax, edi */
  eax = edi;
/* 6ec8e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ec8e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec8e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ec8ea: ret 4 */
  esp += 8; SPILL(); return;
L_6ec8ed: /* 6ec8ed: mov ecx, esi */
  ecx = esi;
/* 6ec8ef: call 0x6cbd98 */
  esp -= 4; W32(esp, 0x6ec8f4u); SPILL(); f_6cbd98(); if (g_unwind) return; RELOAD();
/* 6ec8f4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ec8f7: je 0x6ec905 */
  if (zf) goto L_6ec905;
L_6ec8f9: /* 6ec8f9: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 6ec8fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec8fc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ec902u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ec902: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ec905: /* 6ec905: mov eax, esi */
  eax = esi;
/* 6ec907: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec908: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ec909: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ec930(void) {
  LOAD_REGS();
L_6ec930: /* 6ec930: mov eax, 0xce4188 */
  eax = 0xce4188u;
/* 6ec935: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec950(void) {
  LOAD_REGS();
L_6ec950: /* 6ec950: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ec955: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ec957: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ec95b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ec95f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec961: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec963: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec964: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ec968: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ec96a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ec96b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec96c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec96d: push 0xce4188 */
  { uint32_t v = 0xce4188u; esp -= 4; W32(esp, v); }
/* 6ec972: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ec978u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ec978: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ec97b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec990(void) {
  LOAD_REGS();
L_6ec990: /* 6ec990: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ec994: ret  */
  esp += 4; SPILL(); return;
}

void f_6ec9b0(void) {
  LOAD_REGS();
L_6ec9b0: /* 6ec9b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ec9b2: push 0x9c0918 */
  { uint32_t v = 0x9c0918u; esp -= 4; W32(esp, v); }
/* 6ec9b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ec9bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ec9be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ec9c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ec9c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ec9c7: mov esi, ecx */
  esi = ecx;
/* 6ec9c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ec9cd: mov dword ptr [esi], 0x9f5d28 */
  W32((uint32_t)(esi), 0x9f5d28u);
/* 6ec9d3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ec9db: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ec9e1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ec9e1: mov ecx, esi */
  ecx = esi;
/* 6ec9e3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ec9eb: call 0x6c205e */
  esp -= 4; W32(esp, 0x6ec9f0u); SPILL(); f_6c205e(); if (g_unwind) return; RELOAD();
/* 6ec9f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ec9f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ec9f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ec9fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ec9ff: ret  */
  esp += 4; SPILL(); return;
}

void f_6eca20(void) {
  LOAD_REGS();
L_6eca20: /* 6eca20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eca21: mov esi, ecx */
  esi = ecx;
/* 6eca23: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6eca29u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6eca29: mov dword ptr [esi], 0x9f5d28 */
  W32((uint32_t)(esi), 0x9f5d28u);
/* 6eca2f: mov eax, esi */
  eax = esi;
/* 6eca31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eca32: ret  */
  esp += 4; SPILL(); return;
}

void f_6eca50(void) {
  LOAD_REGS();
L_6eca50: /* 6eca50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eca51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eca52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6eca56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eca57: mov esi, ecx */
  esi = ecx;
/* 6eca59: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6eca5fu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6eca5f: mov dword ptr [esi], 0x9f5b08 */
  W32((uint32_t)(esi), 0x9f5b08u);
/* 6eca65: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6eca68: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6eca6b: mov dword ptr [esi], 0x9f5d28 */
  W32((uint32_t)(esi), 0x9f5d28u);
/* 6eca71: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6eca74: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6eca77: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6eca7a: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6eca7d: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6eca80: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6eca83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eca84: mov eax, esi */
  eax = esi;
/* 6eca86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eca87: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ecaa0(void) {
  LOAD_REGS();
L_6ecaa0: /* 6ecaa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecaa1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ecaa2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ecaa6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ecaa7: mov esi, ecx */
  esi = ecx;
/* 6ecaa9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ecaafu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ecaaf: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ecab2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ecab5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ecab8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ecabb: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6ecabe: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6ecac1: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6ecac4: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6ecac7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ecac8: mov eax, esi */
  eax = esi;
/* 6ecaca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ecacb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ecae0(void) {
  LOAD_REGS();
L_6ecae0: /* 6ecae0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecae1: mov esi, ecx */
  esi = ecx;
/* 6ecae3: call 0x6c8eb8 */
  esp -= 4; W32(esp, 0x6ecae8u); SPILL(); f_6c8eb8(); if (g_unwind) return; RELOAD();
/* 6ecae8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ecaed: je 0x6ecafb */
  if (zf) goto L_6ecafb;
L_6ecaef: /* 6ecaef: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6ecaf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecaf2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ecaf8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ecaf8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ecafb: /* 6ecafb: mov eax, esi */
  eax = esi;
/* 6ecafd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ecafe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ecb20(void) {
  LOAD_REGS();
L_6ecb20: /* 6ecb20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ecb21: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ecb25: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ecb28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecb29: mov esi, ecx */
  esi = ecx;
/* 6ecb2b: je 0x6ecb5d */
  if (zf) goto L_6ecb5d;
L_6ecb2d: /* 6ecb2d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ecb30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ecb31: push 0x6c8eb8 */
  { uint32_t v = 0x6c8eb8u; esp -= 4; W32(esp, v); }
/* 6ecb36: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ecb39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ecb3a: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6ecb3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecb3d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ecb42u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ecb42: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ecb45: je 0x6ecb55 */
  if (zf) goto L_6ecb55;
L_6ecb47: /* 6ecb47: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ecb4d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ecb4f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ecb51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ecb52: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ecb55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ecb55: /* 6ecb55: mov eax, edi */
  eax = edi;
/* 6ecb57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ecb58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ecb59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ecb5a: ret 4 */
  esp += 8; SPILL(); return;
L_6ecb5d: /* 6ecb5d: mov ecx, esi */
  ecx = esi;
/* 6ecb5f: call 0x6c8eb8 */
  esp -= 4; W32(esp, 0x6ecb64u); SPILL(); f_6c8eb8(); if (g_unwind) return; RELOAD();
/* 6ecb64: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ecb67: je 0x6ecb75 */
  if (zf) goto L_6ecb75;
L_6ecb69: /* 6ecb69: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6ecb6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecb6c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ecb72u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ecb72: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ecb75: /* 6ecb75: mov eax, esi */
  eax = esi;
/* 6ecb77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ecb78: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ecb79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ecba0(void) {
  LOAD_REGS();
L_6ecba0: /* 6ecba0: mov eax, 0xce3c58 */
  eax = 0xce3c58u;
/* 6ecba5: ret  */
  esp += 4; SPILL(); return;
}

void f_6ecbc0(void) {
  LOAD_REGS();
L_6ecbc0: /* 6ecbc0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ecbc5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ecbc7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ecbcb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ecbcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ecbd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ecbd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ecbd4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ecbd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ecbda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ecbdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ecbdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ecbdd: push 0xce3c58 */
  { uint32_t v = 0xce3c58u; esp -= 4; W32(esp, v); }
/* 6ecbe2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ecbe8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ecbe8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ecbeb: ret  */
  esp += 4; SPILL(); return;
}

void f_6ecc00(void) {
  LOAD_REGS();
L_6ecc00: /* 6ecc00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ecc04: ret  */
  esp += 4; SPILL(); return;
}

void f_6ecc20(void) {
  LOAD_REGS();
L_6ecc20: /* 6ecc20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ecc22: push 0x9c0938 */
  { uint32_t v = 0x9c0938u; esp -= 4; W32(esp, v); }
/* 6ecc27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ecc2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ecc2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ecc35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ecc36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecc37: mov esi, ecx */
  esi = ecx;
/* 6ecc39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ecc3d: mov dword ptr [esi], 0x9f5db0 */
  W32((uint32_t)(esi), 0x9f5db0u);
/* 6ecc43: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ecc4b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ecc51u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ecc51: mov ecx, esi */
  ecx = esi;
/* 6ecc53: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ecc5b: call 0x6c205e */
  esp -= 4; W32(esp, 0x6ecc60u); SPILL(); f_6c205e(); if (g_unwind) return; RELOAD();
/* 6ecc60: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ecc64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ecc65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ecc6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ecc6f: ret  */
  esp += 4; SPILL(); return;
}

void f_6ecc90(void) {
  LOAD_REGS();
L_6ecc90: /* 6ecc90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ecc92: push 0x9c0958 */
  { uint32_t v = 0x9c0958u; esp -= 4; W32(esp, v); }
/* 6ecc97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ecc9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ecc9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ecca5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ecca6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecca7: mov esi, ecx */
  esi = ecx;
/* 6ecca9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6eccad: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6eccb3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6eccb3: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 6eccb6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6eccbe: mov dword ptr [esi], 0x9f5db0 */
  W32((uint32_t)(esi), 0x9f5db0u);
/* 6eccc4: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6ecccau); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6eccca: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6eccce: mov eax, esi */
  eax = esi;
/* 6eccd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eccd1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6eccd8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eccdb: ret  */
  esp += 4; SPILL(); return;
}

void f_6ecd00(void) {
  LOAD_REGS();
L_6ecd00: /* 6ecd00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecd01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ecd02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ecd06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ecd07: mov esi, ecx */
  esi = ecx;
/* 6ecd09: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6ecd0fu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6ecd0f: mov dword ptr [esi], 0x9f5b08 */
  W32((uint32_t)(esi), 0x9f5b08u);
/* 6ecd15: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ecd18: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ecd1b: mov dword ptr [esi], 0x9f5db0 */
  W32((uint32_t)(esi), 0x9f5db0u);
/* 6ecd21: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ecd24: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ecd27: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6ecd2a: mov edi, dword ptr [esi + 0x30] */
  edi = R32((uint32_t)(esi + 0x30u));
/* 6ecd2d: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6ecd2f: mov eax, edi */
  eax = edi;
/* 6ecd31: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6ecd34: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ecd36: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6ecd39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ecd3a: mov eax, esi */
  eax = esi;
/* 6ecd3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ecd3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ecd50(void) {
  LOAD_REGS();
L_6ecd50: /* 6ecd50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecd51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ecd52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ecd56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ecd57: mov esi, ecx */
  esi = ecx;
/* 6ecd59: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ecd5fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ecd5f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ecd62: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ecd65: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ecd68: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ecd6b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6ecd6e: mov edi, dword ptr [esi + 0x30] */
  edi = R32((uint32_t)(esi + 0x30u));
/* 6ecd71: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6ecd73: mov eax, edi */
  eax = edi;
/* 6ecd75: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6ecd78: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ecd7a: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6ecd7d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ecd7e: mov eax, esi */
  eax = esi;
/* 6ecd80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ecd81: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ecda0(void) {
  LOAD_REGS();
L_6ecda0: /* 6ecda0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecda1: mov esi, ecx */
  esi = ecx;
/* 6ecda3: call 0x6c5e48 */
  esp -= 4; W32(esp, 0x6ecda8u); SPILL(); f_6c5e48(); if (g_unwind) return; RELOAD();
/* 6ecda8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ecdad: je 0x6ecdbb */
  if (zf) goto L_6ecdbb;
L_6ecdaf: /* 6ecdaf: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 6ecdb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecdb2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ecdb8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ecdb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ecdbb: /* 6ecdbb: mov eax, esi */
  eax = esi;
/* 6ecdbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ecdbe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ecde0(void) {
  LOAD_REGS();
L_6ecde0: /* 6ecde0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ecde1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ecde5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ecde8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecde9: mov esi, ecx */
  esi = ecx;
/* 6ecdeb: je 0x6ece1d */
  if (zf) goto L_6ece1d;
L_6ecded: /* 6ecded: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ecdf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ecdf1: push 0x6c5e48 */
  { uint32_t v = 0x6c5e48u; esp -= 4; W32(esp, v); }
/* 6ecdf6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ecdf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ecdfa: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 6ecdfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecdfd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ece02u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ece02: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ece05: je 0x6ece15 */
  if (zf) goto L_6ece15;
L_6ece07: /* 6ece07: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ece0d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ece0f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ece11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ece12: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ece15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ece15: /* 6ece15: mov eax, edi */
  eax = edi;
/* 6ece17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ece18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ece19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ece1a: ret 4 */
  esp += 8; SPILL(); return;
L_6ece1d: /* 6ece1d: mov ecx, esi */
  ecx = esi;
/* 6ece1f: call 0x6c5e48 */
  esp -= 4; W32(esp, 0x6ece24u); SPILL(); f_6c5e48(); if (g_unwind) return; RELOAD();
/* 6ece24: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ece27: je 0x6ece35 */
  if (zf) goto L_6ece35;
L_6ece29: /* 6ece29: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 6ece2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ece2c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ece32u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ece32: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ece35: /* 6ece35: mov eax, esi */
  eax = esi;
/* 6ece37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ece38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ece39: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ece60(void) {
  LOAD_REGS();
L_6ece60: /* 6ece60: mov eax, 0xce3728 */
  eax = 0xce3728u;
/* 6ece65: ret  */
  esp += 4; SPILL(); return;
}

void f_6ece80(void) {
  LOAD_REGS();
L_6ece80: /* 6ece80: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ece85: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ece87: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ece8b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ece8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ece91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ece93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ece94: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ece98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ece9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ece9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ece9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ece9d: push 0xce3728 */
  { uint32_t v = 0xce3728u; esp -= 4; W32(esp, v); }
/* 6ecea2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ecea8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ecea8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eceab: ret  */
  esp += 4; SPILL(); return;
}

void f_6ecec0(void) {
  LOAD_REGS();
L_6ecec0: /* 6ecec0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ecec4: ret  */
  esp += 4; SPILL(); return;
}

void f_6ecee0(void) {
  LOAD_REGS();
L_6ecee0: /* 6ecee0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ecee2: push 0x9c0978 */
  { uint32_t v = 0x9c0978u; esp -= 4; W32(esp, v); }
/* 6ecee7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6eceed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eceee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ecef5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ecef6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecef7: mov esi, ecx */
  esi = ecx;
/* 6ecef9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ecefd: mov dword ptr [esi], 0x9f5e38 */
  W32((uint32_t)(esi), 0x9f5e38u);
/* 6ecf03: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ecf0b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ecf11u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ecf11: mov ecx, esi */
  ecx = esi;
/* 6ecf13: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ecf1b: call 0x6c205e */
  esp -= 4; W32(esp, 0x6ecf20u); SPILL(); f_6c205e(); if (g_unwind) return; RELOAD();
/* 6ecf20: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ecf24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ecf25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ecf2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ecf2f: ret  */
  esp += 4; SPILL(); return;
}

void f_6ecf50(void) {
  LOAD_REGS();
L_6ecf50: /* 6ecf50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ecf52: push 0x9c0998 */
  { uint32_t v = 0x9c0998u; esp -= 4; W32(esp, v); }
/* 6ecf57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ecf5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ecf5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ecf65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ecf66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecf67: mov esi, ecx */
  esi = ecx;
/* 6ecf69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ecf6d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6ecf73u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6ecf73: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 6ecf76: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ecf7e: mov dword ptr [esi], 0x9f5e38 */
  W32((uint32_t)(esi), 0x9f5e38u);
/* 6ecf84: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6ecf8au); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6ecf8a: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 6ecf8d: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x6ecf93u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 6ecf93: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 6ecf96: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6ecf9cu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6ecf9c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ecfa0: mov eax, esi */
  eax = esi;
/* 6ecfa2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ecfa3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ecfaa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ecfad: ret  */
  esp += 4; SPILL(); return;
}

void f_6ecfd0(void) {
  LOAD_REGS();
L_6ecfd0: /* 6ecfd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ecfd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ecfd2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ecfd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ecfd7: mov esi, ecx */
  esi = ecx;
/* 6ecfd9: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6ecfdfu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6ecfdf: mov dword ptr [esi], 0x9f5b08 */
  W32((uint32_t)(esi), 0x9f5b08u);
/* 6ecfe5: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ecfe8: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ecfeb: mov dword ptr [esi], 0x9f5e38 */
  W32((uint32_t)(esi), 0x9f5e38u);
/* 6ecff1: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ecff4: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ecff7: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6ecffa: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6ecffd: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 6ed000: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6ed002: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 6ed005: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6ed007: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6ed00a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6ed00d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6ed010: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6ed013: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* 6ed016: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ed018: lea edx, [esi + 0x40] */
  edx = (uint32_t)(esi + 0x40u);
/* 6ed01b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6ed01d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6ed020: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6ed023: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6ed026: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 6ed029: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6ed02c: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 6ed02f: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6ed031: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6ed034: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ed036: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 6ed039: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6ed03c: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6ed03f: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6ed042: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6ed045: lea edx, [edi + 0x58] */
  edx = (uint32_t)(edi + 0x58u);
/* 6ed048: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 6ed04a: lea eax, [esi + 0x58] */
  eax = (uint32_t)(esi + 0x58u);
/* 6ed04d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6ed04f: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 6ed052: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6ed055: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6ed058: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6ed05b: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 6ed05e: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 6ed061: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ed062: mov eax, esi */
  eax = esi;
/* 6ed064: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed065: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ed0a0(void) {
  LOAD_REGS();
L_6ed0a0: /* 6ed0a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed0a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed0a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ed0a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed0a7: mov esi, ecx */
  esi = ecx;
/* 6ed0a9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ed0afu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ed0af: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ed0b2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ed0b5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ed0b8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ed0bb: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6ed0be: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6ed0c1: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 6ed0c4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6ed0c6: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 6ed0c9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6ed0cb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6ed0ce: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6ed0d1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6ed0d4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6ed0d7: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* 6ed0da: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ed0dc: lea edx, [esi + 0x40] */
  edx = (uint32_t)(esi + 0x40u);
/* 6ed0df: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6ed0e1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6ed0e4: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6ed0e7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6ed0ea: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 6ed0ed: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6ed0f0: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 6ed0f3: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6ed0f5: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6ed0f8: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ed0fa: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 6ed0fd: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6ed100: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6ed103: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6ed106: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6ed109: lea edx, [edi + 0x58] */
  edx = (uint32_t)(edi + 0x58u);
/* 6ed10c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 6ed10e: lea eax, [esi + 0x58] */
  eax = (uint32_t)(esi + 0x58u);
/* 6ed111: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6ed113: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 6ed116: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6ed119: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6ed11c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6ed11f: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 6ed122: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 6ed125: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ed126: mov eax, esi */
  eax = esi;
/* 6ed128: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed129: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ed160(void) {
  LOAD_REGS();
L_6ed160: /* 6ed160: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed161: mov esi, ecx */
  esi = ecx;
/* 6ed163: call 0x6c2590 */
  esp -= 4; W32(esp, 0x6ed168u); SPILL(); f_6c2590(); if (g_unwind) return; RELOAD();
/* 6ed168: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ed16d: je 0x6ed17b */
  if (zf) goto L_6ed17b;
L_6ed16f: /* 6ed16f: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6ed171: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed172: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ed178u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ed178: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ed17b: /* 6ed17b: mov eax, esi */
  eax = esi;
/* 6ed17d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed17e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ed1a0(void) {
  LOAD_REGS();
L_6ed1a0: /* 6ed1a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ed1a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ed1a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ed1a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed1a9: mov esi, ecx */
  esi = ecx;
/* 6ed1ab: je 0x6ed1dd */
  if (zf) goto L_6ed1dd;
L_6ed1ad: /* 6ed1ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ed1b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed1b1: push 0x6c2590 */
  { uint32_t v = 0x6c2590u; esp -= 4; W32(esp, v); }
/* 6ed1b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ed1b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed1ba: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6ed1bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed1bd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ed1c2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ed1c2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ed1c5: je 0x6ed1d5 */
  if (zf) goto L_6ed1d5;
L_6ed1c7: /* 6ed1c7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ed1cd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ed1cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ed1d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed1d2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ed1d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ed1d5: /* 6ed1d5: mov eax, edi */
  eax = edi;
/* 6ed1d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ed1d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed1d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ed1da: ret 4 */
  esp += 8; SPILL(); return;
L_6ed1dd: /* 6ed1dd: mov ecx, esi */
  ecx = esi;
/* 6ed1df: call 0x6c2590 */
  esp -= 4; W32(esp, 0x6ed1e4u); SPILL(); f_6c2590(); if (g_unwind) return; RELOAD();
/* 6ed1e4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ed1e7: je 0x6ed1f5 */
  if (zf) goto L_6ed1f5;
L_6ed1e9: /* 6ed1e9: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6ed1eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed1ec: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ed1f2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ed1f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ed1f5: /* 6ed1f5: mov eax, esi */
  eax = esi;
/* 6ed1f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed1f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ed1f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ed220(void) {
  LOAD_REGS();
L_6ed220: /* 6ed220: mov eax, 0xcda558 */
  eax = 0xcda558u;
/* 6ed225: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed240(void) {
  LOAD_REGS();
L_6ed240: /* 6ed240: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ed245: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ed247: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ed24b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ed24f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ed251: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ed253: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed254: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ed258: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ed25a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ed25b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed25c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed25d: push 0xcda558 */
  { uint32_t v = 0xcda558u; esp -= 4; W32(esp, v); }
/* 6ed262: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ed268u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ed268: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ed26b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed280(void) {
  LOAD_REGS();
L_6ed280: /* 6ed280: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ed284: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed2a0(void) {
  LOAD_REGS();
L_6ed2a0: /* 6ed2a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ed2a2: push 0x9c09b9 */
  { uint32_t v = 0x9c09b9u; esp -= 4; W32(esp, v); }
/* 6ed2a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ed2ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed2ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ed2b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed2b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed2b7: mov esi, ecx */
  esi = ecx;
/* 6ed2b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ed2bd: mov dword ptr [esi], 0x9f5ec0 */
  W32((uint32_t)(esi), 0x9f5ec0u);
/* 6ed2c3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ed2cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ed2d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ed2d1: mov ecx, esi */
  ecx = esi;
/* 6ed2d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ed2db: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6ed2e1u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6ed2e1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ed2e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed2e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ed2ed: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ed2f0: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed320(void) {
  LOAD_REGS();
L_6ed320: /* 6ed320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed321: mov esi, ecx */
  esi = ecx;
/* 6ed323: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6ed329u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6ed329: mov dword ptr [esi], 0x9f5ec0 */
  W32((uint32_t)(esi), 0x9f5ec0u);
/* 6ed32f: mov eax, esi */
  eax = esi;
/* 6ed331: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed332: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed350(void) {
  LOAD_REGS();
L_6ed350: /* 6ed350: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ed354: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed356: mov esi, ecx */
  esi = ecx;
/* 6ed358: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6ed35eu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6ed35e: mov dword ptr [esi], 0x9f5ec0 */
  W32((uint32_t)(esi), 0x9f5ec0u);
/* 6ed364: mov eax, esi */
  eax = esi;
/* 6ed366: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed367: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ed380(void) {
  LOAD_REGS();
L_6ed380: /* 6ed380: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ed384: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed386: mov esi, ecx */
  esi = ecx;
/* 6ed388: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ed38eu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ed38e: mov eax, esi */
  eax = esi;
/* 6ed390: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed391: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ed3b0(void) {
  LOAD_REGS();
L_6ed3b0: /* 6ed3b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed3b1: mov esi, ecx */
  esi = ecx;
/* 6ed3b3: call 0x6c8f8f */
  esp -= 4; W32(esp, 0x6ed3b8u); SPILL(); f_6c8f8f(); if (g_unwind) return; RELOAD();
/* 6ed3b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ed3bd: je 0x6ed3cb */
  if (zf) goto L_6ed3cb;
L_6ed3bf: /* 6ed3bf: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6ed3c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed3c2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ed3c8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ed3c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ed3cb: /* 6ed3cb: mov eax, esi */
  eax = esi;
/* 6ed3cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed3ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ed3f0(void) {
  LOAD_REGS();
L_6ed3f0: /* 6ed3f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ed3f1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ed3f5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ed3f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed3f9: mov esi, ecx */
  esi = ecx;
/* 6ed3fb: je 0x6ed42d */
  if (zf) goto L_6ed42d;
L_6ed3fd: /* 6ed3fd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ed400: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed401: push 0x6c8f8f */
  { uint32_t v = 0x6c8f8fu; esp -= 4; W32(esp, v); }
/* 6ed406: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ed409: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed40a: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6ed40c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed40d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ed412u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ed412: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ed415: je 0x6ed425 */
  if (zf) goto L_6ed425;
L_6ed417: /* 6ed417: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ed41d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ed41f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ed421: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed422: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ed425u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ed425: /* 6ed425: mov eax, edi */
  eax = edi;
/* 6ed427: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ed428: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed429: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ed42a: ret 4 */
  esp += 8; SPILL(); return;
L_6ed42d: /* 6ed42d: mov ecx, esi */
  ecx = esi;
/* 6ed42f: call 0x6c8f8f */
  esp -= 4; W32(esp, 0x6ed434u); SPILL(); f_6c8f8f(); if (g_unwind) return; RELOAD();
/* 6ed434: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ed437: je 0x6ed445 */
  if (zf) goto L_6ed445;
L_6ed439: /* 6ed439: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6ed43b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed43c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ed442u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ed442: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ed445: /* 6ed445: mov eax, esi */
  eax = esi;
/* 6ed447: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed448: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ed449: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ed470(void) {
  LOAD_REGS();
L_6ed470: /* 6ed470: mov eax, 0xcdc478 */
  eax = 0xcdc478u;
/* 6ed475: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed490(void) {
  LOAD_REGS();
L_6ed490: /* 6ed490: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ed495: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ed497: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ed49b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ed49f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ed4a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ed4a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed4a4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ed4a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ed4aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ed4ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed4ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed4ad: push 0xcdc478 */
  { uint32_t v = 0xcdc478u; esp -= 4; W32(esp, v); }
/* 6ed4b2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ed4b8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ed4b8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ed4bb: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed4d0(void) {
  LOAD_REGS();
L_6ed4d0: /* 6ed4d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ed4d4: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed4f0(void) {
  LOAD_REGS();
L_6ed4f0: /* 6ed4f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ed4f2: push 0x9c09e4 */
  { uint32_t v = 0x9c09e4u; esp -= 4; W32(esp, v); }
/* 6ed4f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ed4fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed4fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ed505: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed506: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed507: mov esi, ecx */
  esi = ecx;
/* 6ed509: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ed50d: mov dword ptr [esi], 0x9f5f40 */
  W32((uint32_t)(esi), 0x9f5f40u);
/* 6ed513: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6ed51b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ed521u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ed521: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6ed524: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6ed529: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x6ed52fu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 6ed52f: mov ecx, esi */
  ecx = esi;
/* 6ed531: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ed539: call 0x6c8f8f */
  esp -= 4; W32(esp, 0x6ed53eu); SPILL(); f_6c8f8f(); if (g_unwind) return; RELOAD();
/* 6ed53e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ed542: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed543: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ed54a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ed54d: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed570(void) {
  LOAD_REGS();
L_6ed570: /* 6ed570: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ed572: push 0x9c0a08 */
  { uint32_t v = 0x9c0a08u; esp -= 4; W32(esp, v); }
/* 6ed577: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ed57d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed57e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ed585: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed586: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed587: mov esi, ecx */
  esi = ecx;
/* 6ed589: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ed58d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6ed593u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6ed593: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6ed596: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ed59e: mov dword ptr [esi], 0x9f5f40 */
  W32((uint32_t)(esi), 0x9f5f40u);
/* 6ed5a4: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6ed5aau); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6ed5aa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ed5ae: mov eax, esi */
  eax = esi;
/* 6ed5b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed5b1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ed5b8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ed5bb: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed5e0(void) {
  LOAD_REGS();
L_6ed5e0: /* 6ed5e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ed5e2: push 0x9c0a28 */
  { uint32_t v = 0x9c0a28u; esp -= 4; W32(esp, v); }
/* 6ed5e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ed5ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed5ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ed5f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed5f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed5f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed5f8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 6ed5fc: mov esi, ecx */
  esi = ecx;
/* 6ed5fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed5ff: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 6ed603: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6ed609u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6ed609: mov dword ptr [esi], 0x9f5f40 */
  W32((uint32_t)(esi), 0x9f5f40u);
/* 6ed60f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ed612: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ed615: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ed618: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ed61b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6ed61e: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 6ed621: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6ed624: mov al, byte ptr [edi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6ed627: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed628: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6ed62b: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 6ed633: mov byte ptr [esi + 0x34], al */
  W8((uint32_t)(esi + 0x34u), (eax & 0xffu));
/* 6ed636: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x6ed63cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 6ed63c: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 6ed63f: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 6ed642: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6ed645: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6ed648: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 6ed64b: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 6ed64e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6ed652: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ed653: mov eax, esi */
  eax = esi;
/* 6ed655: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed656: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ed65d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ed660: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ed6a0(void) {
  LOAD_REGS();
L_6ed6a0: /* 6ed6a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed6a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed6a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ed6a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed6a7: mov esi, ecx */
  esi = ecx;
/* 6ed6a9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ed6afu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ed6af: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ed6b2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ed6b5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ed6b8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ed6bb: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6ed6be: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 6ed6c1: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6ed6c4: mov al, byte ptr [edi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6ed6c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed6c8: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6ed6cb: mov byte ptr [esi + 0x34], al */
  W8((uint32_t)(esi + 0x34u), (eax & 0xffu));
/* 6ed6ce: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6ed6d4u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6ed6d4: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 6ed6d7: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 6ed6da: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6ed6dd: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6ed6e0: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 6ed6e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ed6e4: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 6ed6e7: mov eax, esi */
  eax = esi;
/* 6ed6e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed6ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ed710(void) {
  LOAD_REGS();
L_6ed710: /* 6ed710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed711: mov esi, ecx */
  esi = ecx;
/* 6ed713: call 0x6c349f */
  esp -= 4; W32(esp, 0x6ed718u); SPILL(); f_6c349f(); if (g_unwind) return; RELOAD();
/* 6ed718: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ed71d: je 0x6ed72b */
  if (zf) goto L_6ed72b;
L_6ed71f: /* 6ed71f: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 6ed721: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed722: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ed728u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ed728: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ed72b: /* 6ed72b: mov eax, esi */
  eax = esi;
/* 6ed72d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed72e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ed750(void) {
  LOAD_REGS();
L_6ed750: /* 6ed750: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ed751: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ed755: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ed758: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed759: mov esi, ecx */
  esi = ecx;
/* 6ed75b: je 0x6ed78d */
  if (zf) goto L_6ed78d;
L_6ed75d: /* 6ed75d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ed760: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed761: push 0x6c349f */
  { uint32_t v = 0x6c349fu; esp -= 4; W32(esp, v); }
/* 6ed766: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ed769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed76a: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 6ed76c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed76d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ed772u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ed772: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ed775: je 0x6ed785 */
  if (zf) goto L_6ed785;
L_6ed777: /* 6ed777: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ed77d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ed77f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ed781: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed782: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ed785u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ed785: /* 6ed785: mov eax, edi */
  eax = edi;
/* 6ed787: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ed788: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed789: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ed78a: ret 4 */
  esp += 8; SPILL(); return;
L_6ed78d: /* 6ed78d: mov ecx, esi */
  ecx = esi;
/* 6ed78f: call 0x6c349f */
  esp -= 4; W32(esp, 0x6ed794u); SPILL(); f_6c349f(); if (g_unwind) return; RELOAD();
/* 6ed794: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ed797: je 0x6ed7a5 */
  if (zf) goto L_6ed7a5;
L_6ed799: /* 6ed799: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 6ed79b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed79c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ed7a2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ed7a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ed7a5: /* 6ed7a5: mov eax, esi */
  eax = esi;
/* 6ed7a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed7a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ed7a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ed7d0(void) {
  LOAD_REGS();
L_6ed7d0: /* 6ed7d0: mov eax, 0xcdedf8 */
  eax = 0xcdedf8u;
/* 6ed7d5: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed7f0(void) {
  LOAD_REGS();
L_6ed7f0: /* 6ed7f0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ed7f5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ed7f7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ed7fb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ed7ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ed801: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ed803: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed804: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ed808: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ed80a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ed80b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed80c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed80d: push 0xcdedf8 */
  { uint32_t v = 0xcdedf8u; esp -= 4; W32(esp, v); }
/* 6ed812: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ed818u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ed818: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ed81b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed830(void) {
  LOAD_REGS();
L_6ed830: /* 6ed830: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ed834: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed850(void) {
  LOAD_REGS();
L_6ed850: /* 6ed850: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ed852: push 0x9c0a48 */
  { uint32_t v = 0x9c0a48u; esp -= 4; W32(esp, v); }
/* 6ed857: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ed85d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed85e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ed865: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed866: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed867: mov esi, ecx */
  esi = ecx;
/* 6ed869: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ed86d: mov dword ptr [esi], 0x9f5fd0 */
  W32((uint32_t)(esi), 0x9f5fd0u);
/* 6ed873: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ed87b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ed881u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ed881: mov ecx, esi */
  ecx = esi;
/* 6ed883: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ed88b: call 0x6c349f */
  esp -= 4; W32(esp, 0x6ed890u); SPILL(); f_6c349f(); if (g_unwind) return; RELOAD();
/* 6ed890: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ed894: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed895: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ed89c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ed89f: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed8c0(void) {
  LOAD_REGS();
L_6ed8c0: /* 6ed8c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ed8c2: push 0x9c0a70 */
  { uint32_t v = 0x9c0a70u; esp -= 4; W32(esp, v); }
/* 6ed8c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ed8cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ed8ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ed8d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed8d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed8d7: mov esi, ecx */
  esi = ecx;
/* 6ed8d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ed8dd: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6ed8e3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6ed8e3: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6ed8e6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ed8ee: mov dword ptr [esi], 0x9f5f40 */
  W32((uint32_t)(esi), 0x9f5f40u);
/* 6ed8f4: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6ed8fau); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6ed8fa: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 6ed8fd: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6ed905: mov dword ptr [esi], 0x9f5fd0 */
  W32((uint32_t)(esi), 0x9f5fd0u);
/* 6ed90b: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x6ed911u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 6ed911: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ed915: mov eax, esi */
  eax = esi;
/* 6ed917: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed918: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ed91f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ed922: ret  */
  esp += 4; SPILL(); return;
}

void f_6ed950(void) {
  LOAD_REGS();
L_6ed950: /* 6ed950: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed951: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed952: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ed956: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed957: mov esi, ecx */
  esi = ecx;
/* 6ed959: call 0x6c9f2a */
  esp -= 4; W32(esp, 0x6ed95eu); SPILL(); f_6c9f2a(); if (g_unwind) return; RELOAD();
/* 6ed95e: mov dword ptr [esi], 0x9f5fd0 */
  W32((uint32_t)(esi), 0x9f5fd0u);
/* 6ed964: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6ed967: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6ed96a: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6ed96d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ed96e: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6ed971: mov eax, esi */
  eax = esi;
/* 6ed973: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed974: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ed990(void) {
  LOAD_REGS();
L_6ed990: /* 6ed990: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ed991: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed992: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ed996: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ed997: mov esi, ecx */
  esi = ecx;
/* 6ed999: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ed99fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ed99f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ed9a2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ed9a5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ed9a8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ed9ab: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6ed9ae: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 6ed9b1: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6ed9b4: mov al, byte ptr [edi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6ed9b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ed9b8: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6ed9bb: mov byte ptr [esi + 0x34], al */
  W8((uint32_t)(esi + 0x34u), (eax & 0xffu));
/* 6ed9be: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6ed9c4u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6ed9c4: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 6ed9c7: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 6ed9ca: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6ed9cd: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6ed9d0: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 6ed9d3: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 6ed9d6: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 6ed9d9: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 6ed9dc: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 6ed9df: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 6ed9e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ed9e3: mov eax, esi */
  eax = esi;
/* 6ed9e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ed9e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eda10(void) {
  LOAD_REGS();
L_6eda10: /* 6eda10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eda11: mov esi, ecx */
  esi = ecx;
/* 6eda13: call 0x6c754f */
  esp -= 4; W32(esp, 0x6eda18u); SPILL(); f_6c754f(); if (g_unwind) return; RELOAD();
/* 6eda18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eda1d: je 0x6eda2b */
  if (zf) goto L_6eda2b;
L_6eda1f: /* 6eda1f: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6eda21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eda22: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6eda28u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6eda28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6eda2b: /* 6eda2b: mov eax, esi */
  eax = esi;
/* 6eda2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eda2e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eda50(void) {
  LOAD_REGS();
L_6eda50: /* 6eda50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eda51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6eda55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eda58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eda59: mov esi, ecx */
  esi = ecx;
/* 6eda5b: je 0x6eda8d */
  if (zf) goto L_6eda8d;
L_6eda5d: /* 6eda5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6eda60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eda61: push 0x6c754f */
  { uint32_t v = 0x6c754fu; esp -= 4; W32(esp, v); }
/* 6eda66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6eda69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eda6a: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6eda6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eda6d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6eda72u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6eda72: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eda75: je 0x6eda85 */
  if (zf) goto L_6eda85;
L_6eda77: /* 6eda77: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6eda7d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6eda7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6eda81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eda82: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6eda85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6eda85: /* 6eda85: mov eax, edi */
  eax = edi;
/* 6eda87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eda88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eda89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eda8a: ret 4 */
  esp += 8; SPILL(); return;
L_6eda8d: /* 6eda8d: mov ecx, esi */
  ecx = esi;
/* 6eda8f: call 0x6c754f */
  esp -= 4; W32(esp, 0x6eda94u); SPILL(); f_6c754f(); if (g_unwind) return; RELOAD();
/* 6eda94: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eda97: je 0x6edaa5 */
  if (zf) goto L_6edaa5;
L_6eda99: /* 6eda99: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6eda9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eda9c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6edaa2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6edaa2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6edaa5: /* 6edaa5: mov eax, esi */
  eax = esi;
/* 6edaa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6edaa8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6edaa9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6edad0(void) {
  LOAD_REGS();
L_6edad0: /* 6edad0: mov eax, 0xcde8c8 */
  eax = 0xcde8c8u;
/* 6edad5: ret  */
  esp += 4; SPILL(); return;
}

void f_6edaf0(void) {
  LOAD_REGS();
L_6edaf0: /* 6edaf0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6edaf5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6edaf7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6edafb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6edaff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6edb01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6edb03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6edb04: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6edb08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6edb0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6edb0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6edb0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6edb0d: push 0xcde8c8 */
  { uint32_t v = 0xcde8c8u; esp -= 4; W32(esp, v); }
/* 6edb12: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6edb18u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6edb18: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6edb1b: ret  */
  esp += 4; SPILL(); return;
}

void f_6edb30(void) {
  LOAD_REGS();
L_6edb30: /* 6edb30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6edb34: ret  */
  esp += 4; SPILL(); return;
}

void f_6edb50(void) {
  LOAD_REGS();
L_6edb50: /* 6edb50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6edb52: push 0x9c0a88 */
  { uint32_t v = 0x9c0a88u; esp -= 4; W32(esp, v); }
/* 6edb57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6edb5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6edb5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6edb65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6edb66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6edb67: mov esi, ecx */
  esi = ecx;
/* 6edb69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6edb6d: mov dword ptr [esi], 0x9f6060 */
  W32((uint32_t)(esi), 0x9f6060u);
/* 6edb73: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6edb7b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6edb81u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6edb81: mov ecx, esi */
  ecx = esi;
/* 6edb83: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6edb8b: call 0x6c349f */
  esp -= 4; W32(esp, 0x6edb90u); SPILL(); f_6c349f(); if (g_unwind) return; RELOAD();
/* 6edb90: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6edb94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6edb95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6edb9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6edb9f: ret  */
  esp += 4; SPILL(); return;
}

void f_6edbc0(void) {
  LOAD_REGS();
L_6edbc0: /* 6edbc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6edbc2: push 0x9c0ab0 */
  { uint32_t v = 0x9c0ab0u; esp -= 4; W32(esp, v); }
/* 6edbc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6edbcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6edbce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6edbd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6edbd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6edbd7: mov esi, ecx */
  esi = ecx;
/* 6edbd9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6edbdd: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6edbe3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6edbe3: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6edbe6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6edbee: mov dword ptr [esi], 0x9f5f40 */
  W32((uint32_t)(esi), 0x9f5f40u);
/* 6edbf4: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6edbfau); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6edbfa: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 6edbfd: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6edc05: mov dword ptr [esi], 0x9f6060 */
  W32((uint32_t)(esi), 0x9f6060u);
/* 6edc0b: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x6edc11u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 6edc11: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6edc15: mov eax, esi */
  eax = esi;
/* 6edc17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6edc18: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6edc1f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6edc22: ret  */
  esp += 4; SPILL(); return;
}

void f_6edc50(void) {
  LOAD_REGS();
L_6edc50: /* 6edc50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6edc51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6edc52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6edc56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6edc57: mov esi, ecx */
  esi = ecx;
/* 6edc59: call 0x6c9f2a */
  esp -= 4; W32(esp, 0x6edc5eu); SPILL(); f_6c9f2a(); if (g_unwind) return; RELOAD();
/* 6edc5e: mov dword ptr [esi], 0x9f6060 */
  W32((uint32_t)(esi), 0x9f6060u);
/* 6edc64: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6edc67: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6edc6a: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6edc6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6edc6e: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6edc71: mov eax, esi */
  eax = esi;
/* 6edc73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6edc74: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6edc90(void) {
  LOAD_REGS();
L_6edc90: /* 6edc90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6edc91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6edc92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6edc96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6edc97: mov esi, ecx */
  esi = ecx;
/* 6edc99: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6edc9fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6edc9f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6edca2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6edca5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6edca8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6edcab: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6edcae: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 6edcb1: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6edcb4: mov al, byte ptr [edi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6edcb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6edcb8: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6edcbb: mov byte ptr [esi + 0x34], al */
  W8((uint32_t)(esi + 0x34u), (eax & 0xffu));
/* 6edcbe: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6edcc4u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6edcc4: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 6edcc7: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 6edcca: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6edccd: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6edcd0: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 6edcd3: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 6edcd6: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 6edcd9: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 6edcdc: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 6edcdf: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 6edce2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6edce3: mov eax, esi */
  eax = esi;
/* 6edce5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6edce6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6edd10(void) {
  LOAD_REGS();
L_6edd10: /* 6edd10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6edd11: mov esi, ecx */
  esi = ecx;
/* 6edd13: call 0x6c6ad2 */
  esp -= 4; W32(esp, 0x6edd18u); SPILL(); f_6c6ad2(); if (g_unwind) return; RELOAD();
/* 6edd18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6edd1d: je 0x6edd2b */
  if (zf) goto L_6edd2b;
L_6edd1f: /* 6edd1f: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6edd21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6edd22: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6edd28u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6edd28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6edd2b: /* 6edd2b: mov eax, esi */
  eax = esi;
/* 6edd2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6edd2e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6edd50(void) {
  LOAD_REGS();
L_6edd50: /* 6edd50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6edd51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6edd55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6edd58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6edd59: mov esi, ecx */
  esi = ecx;
/* 6edd5b: je 0x6edd8d */
  if (zf) goto L_6edd8d;
L_6edd5d: /* 6edd5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6edd60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6edd61: push 0x6c6ad2 */
  { uint32_t v = 0x6c6ad2u; esp -= 4; W32(esp, v); }
/* 6edd66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6edd69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6edd6a: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6edd6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6edd6d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6edd72u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6edd72: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6edd75: je 0x6edd85 */
  if (zf) goto L_6edd85;
L_6edd77: /* 6edd77: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6edd7d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6edd7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6edd81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6edd82: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6edd85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6edd85: /* 6edd85: mov eax, edi */
  eax = edi;
/* 6edd87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6edd88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6edd89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6edd8a: ret 4 */
  esp += 8; SPILL(); return;
L_6edd8d: /* 6edd8d: mov ecx, esi */
  ecx = esi;
/* 6edd8f: call 0x6c6ad2 */
  esp -= 4; W32(esp, 0x6edd94u); SPILL(); f_6c6ad2(); if (g_unwind) return; RELOAD();
/* 6edd94: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6edd97: je 0x6edda5 */
  if (zf) goto L_6edda5;
L_6edd99: /* 6edd99: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6edd9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6edd9c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6edda2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6edda2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6edda5: /* 6edda5: mov eax, esi */
  eax = esi;
/* 6edda7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6edda8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6edda9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eddd0(void) {
  LOAD_REGS();
L_6eddd0: /* 6eddd0: mov eax, 0xcde398 */
  eax = 0xcde398u;
/* 6eddd5: ret  */
  esp += 4; SPILL(); return;
}

void f_6eddf0(void) {
  LOAD_REGS();
L_6eddf0: /* 6eddf0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6eddf5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6eddf7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6eddfb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6eddff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ede01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ede03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ede04: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ede08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ede0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ede0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ede0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ede0d: push 0xcde398 */
  { uint32_t v = 0xcde398u; esp -= 4; W32(esp, v); }
/* 6ede12: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ede18u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ede18: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ede1b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ede30(void) {
  LOAD_REGS();
L_6ede30: /* 6ede30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ede34: ret  */
  esp += 4; SPILL(); return;
}

void f_6ede50(void) {
  LOAD_REGS();
L_6ede50: /* 6ede50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ede52: push 0x9c0ac8 */
  { uint32_t v = 0x9c0ac8u; esp -= 4; W32(esp, v); }
/* 6ede57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ede5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ede5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ede65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ede66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ede67: mov esi, ecx */
  esi = ecx;
/* 6ede69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ede6d: mov dword ptr [esi], 0x9f60f0 */
  W32((uint32_t)(esi), 0x9f60f0u);
/* 6ede73: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ede7b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ede81u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ede81: mov ecx, esi */
  ecx = esi;
/* 6ede83: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ede8b: call 0x6c349f */
  esp -= 4; W32(esp, 0x6ede90u); SPILL(); f_6c349f(); if (g_unwind) return; RELOAD();
/* 6ede90: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ede94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ede95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ede9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ede9f: ret  */
  esp += 4; SPILL(); return;
}

void f_6edec0(void) {
  LOAD_REGS();
L_6edec0: /* 6edec0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6edec2: push 0x9c0af0 */
  { uint32_t v = 0x9c0af0u; esp -= 4; W32(esp, v); }
/* 6edec7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6edecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6edece: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6eded5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eded6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eded7: mov esi, ecx */
  esi = ecx;
/* 6eded9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ededa: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 6edede: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6edee4u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6edee4: xor edi, edi */
  edi = 0;
/* 6edee6: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6edee9: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 6edeed: mov dword ptr [esi], 0x9f5f40 */
  W32((uint32_t)(esi), 0x9f5f40u);
/* 6edef3: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6edef9u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6edef9: mov dword ptr [esi], 0x9f60f0 */
  W32((uint32_t)(esi), 0x9f60f0u);
/* 6edeff: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* 6edf02: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* 6edf0a: mov dword ptr [esi + 0x50], 2 */
  W32((uint32_t)(esi + 0x50u), 0x2u);
/* 6edf11: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* 6edf14: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
/* 6edf17: mov dword ptr [esi + 0x5c], edi */
  W32((uint32_t)(esi + 0x5cu), edi);
/* 6edf1a: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* 6edf1d: mov dword ptr [esi + 0x64], edi */
  W32((uint32_t)(esi + 0x64u), edi);
/* 6edf20: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* 6edf23: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x6edf29u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 6edf29: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6edf2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6edf2e: mov eax, esi */
  eax = esi;
/* 6edf30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6edf31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6edf38: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6edf3b: ret  */
  esp += 4; SPILL(); return;
}

void f_6edf60(void) {
  LOAD_REGS();
L_6edf60: /* 6edf60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6edf61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6edf62: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6edf66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6edf67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6edf68: mov ebx, ecx */
  ebx = ecx;
/* 6edf6a: call 0x6c9f2a */
  esp -= 4; W32(esp, 0x6edf6fu); SPILL(); f_6c9f2a(); if (g_unwind) return; RELOAD();
/* 6edf6f: add esi, 0x50 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6edf72: lea edi, [ebx + 0x50] */
  edi = (uint32_t)(ebx + 0x50u);
/* 6edf75: mov dword ptr [ebx], 0x9f60f0 */
  W32((uint32_t)(ebx), 0x9f60f0u);
/* 6edf7b: mov ecx, 0xd */
  ecx = 0xdu;
/* 6edf80: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6edf82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6edf83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6edf84: mov eax, ebx */
  eax = ebx;
/* 6edf86: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6edf87: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6edfa0(void) {
  LOAD_REGS();
L_6edfa0: /* 6edfa0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6edfa1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6edfa2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6edfa6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6edfa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6edfa8: mov ebx, ecx */
  ebx = ecx;
/* 6edfaa: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6edfb0u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6edfb0: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 6edfb3: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 6edfb6: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 6edfb9: mov dword ptr [ebx + 0x2c], ecx */
  W32((uint32_t)(ebx + 0x2cu), ecx);
/* 6edfbc: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6edfbf: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6edfc2: mov dword ptr [ebx + 0x30], edx */
  W32((uint32_t)(ebx + 0x30u), edx);
/* 6edfc5: mov al, byte ptr [esi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x34u))) & 0xffu);
/* 6edfc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6edfc9: lea ecx, [ebx + 0x38] */
  ecx = (uint32_t)(ebx + 0x38u);
/* 6edfcc: mov byte ptr [ebx + 0x34], al */
  W8((uint32_t)(ebx + 0x34u), (eax & 0xffu));
/* 6edfcf: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6edfd5u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6edfd5: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 6edfd8: mov dword ptr [ebx + 0x44], edx */
  W32((uint32_t)(ebx + 0x44u), edx);
/* 6edfdb: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 6edfde: mov dword ptr [ebx + 0x48], eax */
  W32((uint32_t)(ebx + 0x48u), eax);
/* 6edfe1: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 6edfe4: mov dword ptr [ebx + 0x4c], ecx */
  W32((uint32_t)(ebx + 0x4cu), ecx);
/* 6edfe7: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6edfea: mov edi, esp */
  edi = esp;
/* 6edfec: add esi, 0x50 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6edfef: mov ecx, 0xd */
  ecx = 0xdu;
/* 6edff4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6edff6: lea ecx, [ebx + 0x50] */
  ecx = (uint32_t)(ebx + 0x50u);
/* 6edff9: call 0x6c7c66 */
  esp -= 4; W32(esp, 0x6edffeu); SPILL(); f_6c7c66(); if (g_unwind) return; RELOAD();
/* 6edffe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6edfff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee000: mov eax, ebx */
  eax = ebx;
/* 6ee002: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ee003: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee030(void) {
  LOAD_REGS();
L_6ee030: /* 6ee030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee031: mov esi, ecx */
  esi = ecx;
/* 6ee033: call 0x6c33b4 */
  esp -= 4; W32(esp, 0x6ee038u); SPILL(); f_6c33b4(); if (g_unwind) return; RELOAD();
/* 6ee038: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee03d: je 0x6ee04e */
  if (zf) goto L_6ee04e;
L_6ee03f: /* 6ee03f: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 6ee044: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee045: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ee04bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ee04b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ee04e: /* 6ee04e: mov eax, esi */
  eax = esi;
/* 6ee050: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee051: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee070(void) {
  LOAD_REGS();
L_6ee070: /* 6ee070: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ee071: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ee075: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee079: mov esi, ecx */
  esi = ecx;
/* 6ee07b: je 0x6ee0b0 */
  if (zf) goto L_6ee0b0;
L_6ee07d: /* 6ee07d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ee080: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee081: push 0x6c33b4 */
  { uint32_t v = 0x6c33b4u; esp -= 4; W32(esp, v); }
/* 6ee086: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ee089: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ee08a: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 6ee08f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee090: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ee095u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ee095: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee098: je 0x6ee0a8 */
  if (zf) goto L_6ee0a8;
L_6ee09a: /* 6ee09a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ee0a0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ee0a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ee0a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee0a5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ee0a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ee0a8: /* 6ee0a8: mov eax, edi */
  eax = edi;
/* 6ee0aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ee0ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee0ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ee0ad: ret 4 */
  esp += 8; SPILL(); return;
L_6ee0b0: /* 6ee0b0: mov ecx, esi */
  ecx = esi;
/* 6ee0b2: call 0x6c33b4 */
  esp -= 4; W32(esp, 0x6ee0b7u); SPILL(); f_6c33b4(); if (g_unwind) return; RELOAD();
/* 6ee0b7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee0ba: je 0x6ee0cb */
  if (zf) goto L_6ee0cb;
L_6ee0bc: /* 6ee0bc: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 6ee0c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee0c2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ee0c8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ee0c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ee0cb: /* 6ee0cb: mov eax, esi */
  eax = esi;
/* 6ee0cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee0ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ee0cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee100(void) {
  LOAD_REGS();
L_6ee100: /* 6ee100: mov eax, 0xcdde68 */
  eax = 0xcdde68u;
/* 6ee105: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee120(void) {
  LOAD_REGS();
L_6ee120: /* 6ee120: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ee125: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ee127: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ee12b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ee12f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ee131: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ee133: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee134: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ee138: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ee13a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ee13b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ee13c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee13d: push 0xcdde68 */
  { uint32_t v = 0xcdde68u; esp -= 4; W32(esp, v); }
/* 6ee142: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ee148u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ee148: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ee14b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee160(void) {
  LOAD_REGS();
L_6ee160: /* 6ee160: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ee164: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee180(void) {
  LOAD_REGS();
L_6ee180: /* 6ee180: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ee182: push 0x9c0b08 */
  { uint32_t v = 0x9c0b08u; esp -= 4; W32(esp, v); }
/* 6ee187: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ee18d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ee18e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ee195: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee196: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee197: mov esi, ecx */
  esi = ecx;
/* 6ee199: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ee19d: mov dword ptr [esi], 0x9f6180 */
  W32((uint32_t)(esi), 0x9f6180u);
/* 6ee1a3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ee1ab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ee1b1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ee1b1: mov ecx, esi */
  ecx = esi;
/* 6ee1b3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ee1bb: call 0x6c349f */
  esp -= 4; W32(esp, 0x6ee1c0u); SPILL(); f_6c349f(); if (g_unwind) return; RELOAD();
/* 6ee1c0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ee1c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee1c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ee1cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ee1cf: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee1f0(void) {
  LOAD_REGS();
L_6ee1f0: /* 6ee1f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ee1f2: push 0x9c0b30 */
  { uint32_t v = 0x9c0b30u; esp -= 4; W32(esp, v); }
/* 6ee1f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ee1fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ee1fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ee205: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee206: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee207: mov esi, ecx */
  esi = ecx;
/* 6ee209: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ee20d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6ee213u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6ee213: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6ee216: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ee21e: mov dword ptr [esi], 0x9f5f40 */
  W32((uint32_t)(esi), 0x9f5f40u);
/* 6ee224: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6ee22au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6ee22a: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 6ee22d: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6ee235: mov dword ptr [esi], 0x9f6180 */
  W32((uint32_t)(esi), 0x9f6180u);
/* 6ee23b: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x6ee241u); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 6ee241: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ee245: mov eax, esi */
  eax = esi;
/* 6ee247: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee248: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ee24f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ee252: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee280(void) {
  LOAD_REGS();
L_6ee280: /* 6ee280: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ee281: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6ee282: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6ee286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee287: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee288: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6ee289: mov ebx, ecx */
  ebx = ecx;
/* 6ee28b: call 0x6c9f2a */
  esp -= 4; W32(esp, 0x6ee290u); SPILL(); f_6c9f2a(); if (g_unwind) return; RELOAD();
/* 6ee290: mov dword ptr [ebx], 0x9f6180 */
  W32((uint32_t)(ebx), 0x9f6180u);
/* 6ee296: lea esi, [ebp + 0x50] */
  esi = (uint32_t)(ebp + 0x50u);
/* 6ee299: lea edi, [ebx + 0x50] */
  edi = (uint32_t)(ebx + 0x50u);
/* 6ee29c: mov ecx, 6 */
  ecx = 0x6u;
/* 6ee2a1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6ee2a3: mov eax, dword ptr [ebp + 0x68] */
  eax = R32((uint32_t)(ebp + 0x68u));
/* 6ee2a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ee2a7: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* 6ee2aa: mov ecx, dword ptr [ebp + 0x6c] */
  ecx = R32((uint32_t)(ebp + 0x6cu));
/* 6ee2ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee2ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6ee2af: mov dword ptr [ebx + 0x6c], ecx */
  W32((uint32_t)(ebx + 0x6cu), ecx);
/* 6ee2b2: mov eax, ebx */
  eax = ebx;
/* 6ee2b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ee2b5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee2d0(void) {
  LOAD_REGS();
L_6ee2d0: /* 6ee2d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ee2d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6ee2d2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6ee2d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee2d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee2d8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6ee2d9: mov ebx, ecx */
  ebx = ecx;
/* 6ee2db: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ee2e1u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ee2e1: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 6ee2e4: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 6ee2e7: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 6ee2ea: mov dword ptr [ebx + 0x2c], ecx */
  W32((uint32_t)(ebx + 0x2cu), ecx);
/* 6ee2ed: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 6ee2f0: lea ecx, [ebp + 0x38] */
  ecx = (uint32_t)(ebp + 0x38u);
/* 6ee2f3: mov dword ptr [ebx + 0x30], edx */
  W32((uint32_t)(ebx + 0x30u), edx);
/* 6ee2f6: mov al, byte ptr [ebp + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x34u))) & 0xffu);
/* 6ee2f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee2fa: lea ecx, [ebx + 0x38] */
  ecx = (uint32_t)(ebx + 0x38u);
/* 6ee2fd: mov byte ptr [ebx + 0x34], al */
  W8((uint32_t)(ebx + 0x34u), (eax & 0xffu));
/* 6ee300: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6ee306u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6ee306: mov edx, dword ptr [ebp + 0x44] */
  edx = R32((uint32_t)(ebp + 0x44u));
/* 6ee309: mov dword ptr [ebx + 0x44], edx */
  W32((uint32_t)(ebx + 0x44u), edx);
/* 6ee30c: mov eax, dword ptr [ebp + 0x48] */
  eax = R32((uint32_t)(ebp + 0x48u));
/* 6ee30f: mov dword ptr [ebx + 0x48], eax */
  W32((uint32_t)(ebx + 0x48u), eax);
/* 6ee312: mov ecx, dword ptr [ebp + 0x4c] */
  ecx = R32((uint32_t)(ebp + 0x4cu));
/* 6ee315: mov dword ptr [ebx + 0x4c], ecx */
  W32((uint32_t)(ebx + 0x4cu), ecx);
/* 6ee318: lea esi, [ebp + 0x50] */
  esi = (uint32_t)(ebp + 0x50u);
/* 6ee31b: lea edi, [ebx + 0x50] */
  edi = (uint32_t)(ebx + 0x50u);
/* 6ee31e: mov ecx, 6 */
  ecx = 0x6u;
/* 6ee323: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6ee325: mov edx, dword ptr [ebp + 0x68] */
  edx = R32((uint32_t)(ebp + 0x68u));
/* 6ee328: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ee329: mov dword ptr [ebx + 0x68], edx */
  W32((uint32_t)(ebx + 0x68u), edx);
/* 6ee32c: mov eax, dword ptr [ebp + 0x6c] */
  eax = R32((uint32_t)(ebp + 0x6cu));
/* 6ee32f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee330: mov dword ptr [ebx + 0x6c], eax */
  W32((uint32_t)(ebx + 0x6cu), eax);
/* 6ee333: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6ee334: mov eax, ebx */
  eax = ebx;
/* 6ee336: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ee337: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee360(void) {
  LOAD_REGS();
L_6ee360: /* 6ee360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee361: mov esi, ecx */
  esi = ecx;
/* 6ee363: call 0x6c3427 */
  esp -= 4; W32(esp, 0x6ee368u); SPILL(); f_6c3427(); if (g_unwind) return; RELOAD();
/* 6ee368: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee36d: je 0x6ee37b */
  if (zf) goto L_6ee37b;
L_6ee36f: /* 6ee36f: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 6ee371: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee372: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ee378u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ee378: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ee37b: /* 6ee37b: mov eax, esi */
  eax = esi;
/* 6ee37d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee37e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee3a0(void) {
  LOAD_REGS();
L_6ee3a0: /* 6ee3a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ee3a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ee3a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee3a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee3a9: mov esi, ecx */
  esi = ecx;
/* 6ee3ab: je 0x6ee3dd */
  if (zf) goto L_6ee3dd;
L_6ee3ad: /* 6ee3ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ee3b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee3b1: push 0x6c3427 */
  { uint32_t v = 0x6c3427u; esp -= 4; W32(esp, v); }
/* 6ee3b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ee3b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ee3ba: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 6ee3bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee3bd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ee3c2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ee3c2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee3c5: je 0x6ee3d5 */
  if (zf) goto L_6ee3d5;
L_6ee3c7: /* 6ee3c7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ee3cd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ee3cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ee3d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee3d2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ee3d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ee3d5: /* 6ee3d5: mov eax, edi */
  eax = edi;
/* 6ee3d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ee3d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee3d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ee3da: ret 4 */
  esp += 8; SPILL(); return;
L_6ee3dd: /* 6ee3dd: mov ecx, esi */
  ecx = esi;
/* 6ee3df: call 0x6c3427 */
  esp -= 4; W32(esp, 0x6ee3e4u); SPILL(); f_6c3427(); if (g_unwind) return; RELOAD();
/* 6ee3e4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee3e7: je 0x6ee3f5 */
  if (zf) goto L_6ee3f5;
L_6ee3e9: /* 6ee3e9: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 6ee3eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee3ec: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ee3f2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ee3f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ee3f5: /* 6ee3f5: mov eax, esi */
  eax = esi;
/* 6ee3f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee3f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ee3f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee420(void) {
  LOAD_REGS();
L_6ee420: /* 6ee420: mov eax, 0xcdd938 */
  eax = 0xcdd938u;
/* 6ee425: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee440(void) {
  LOAD_REGS();
L_6ee440: /* 6ee440: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ee445: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ee447: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ee44b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ee44f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ee451: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ee453: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee454: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ee458: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ee45a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ee45b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ee45c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee45d: push 0xcdd938 */
  { uint32_t v = 0xcdd938u; esp -= 4; W32(esp, v); }
/* 6ee462: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ee468u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ee468: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ee46b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee480(void) {
  LOAD_REGS();
L_6ee480: /* 6ee480: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ee484: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee4a0(void) {
  LOAD_REGS();
L_6ee4a0: /* 6ee4a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ee4a2: push 0x9c0b48 */
  { uint32_t v = 0x9c0b48u; esp -= 4; W32(esp, v); }
/* 6ee4a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ee4ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ee4ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ee4b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee4b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee4b7: mov esi, ecx */
  esi = ecx;
/* 6ee4b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ee4bd: mov dword ptr [esi], 0x9f6210 */
  W32((uint32_t)(esi), 0x9f6210u);
/* 6ee4c3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ee4cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ee4d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ee4d1: mov ecx, esi */
  ecx = esi;
/* 6ee4d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ee4db: call 0x6c349f */
  esp -= 4; W32(esp, 0x6ee4e0u); SPILL(); f_6c349f(); if (g_unwind) return; RELOAD();
/* 6ee4e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ee4e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee4e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ee4ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ee4ef: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee510(void) {
  LOAD_REGS();
L_6ee510: /* 6ee510: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ee512: push 0x9c0b70 */
  { uint32_t v = 0x9c0b70u; esp -= 4; W32(esp, v); }
/* 6ee517: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ee51d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ee51e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ee525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee526: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee527: mov esi, ecx */
  esi = ecx;
/* 6ee529: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ee52d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6ee533u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6ee533: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6ee536: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ee53e: mov dword ptr [esi], 0x9f5f40 */
  W32((uint32_t)(esi), 0x9f5f40u);
/* 6ee544: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6ee54au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6ee54a: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 6ee54d: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6ee555: mov dword ptr [esi], 0x9f6210 */
  W32((uint32_t)(esi), 0x9f6210u);
/* 6ee55b: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x6ee561u); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 6ee561: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ee565: mov eax, esi */
  eax = esi;
/* 6ee567: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee568: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ee56f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ee572: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee5a0(void) {
  LOAD_REGS();
L_6ee5a0: /* 6ee5a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ee5a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee5a2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6ee5a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee5a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee5a8: mov ebx, ecx */
  ebx = ecx;
/* 6ee5aa: call 0x6c9f2a */
  esp -= 4; W32(esp, 0x6ee5afu); SPILL(); f_6c9f2a(); if (g_unwind) return; RELOAD();
/* 6ee5af: add esi, 0x50 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6ee5b2: lea edi, [ebx + 0x50] */
  edi = (uint32_t)(ebx + 0x50u);
/* 6ee5b5: mov dword ptr [ebx], 0x9f6210 */
  W32((uint32_t)(ebx), 0x9f6210u);
/* 6ee5bb: mov ecx, 6 */
  ecx = 0x6u;
/* 6ee5c0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6ee5c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ee5c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee5c4: mov eax, ebx */
  eax = ebx;
/* 6ee5c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ee5c7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee5e0(void) {
  LOAD_REGS();
L_6ee5e0: /* 6ee5e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ee5e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee5e2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6ee5e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee5e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee5e8: mov ebx, ecx */
  ebx = ecx;
/* 6ee5ea: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ee5f0u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ee5f0: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 6ee5f3: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 6ee5f6: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 6ee5f9: mov dword ptr [ebx + 0x2c], ecx */
  W32((uint32_t)(ebx + 0x2cu), ecx);
/* 6ee5fc: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6ee5ff: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6ee602: mov dword ptr [ebx + 0x30], edx */
  W32((uint32_t)(ebx + 0x30u), edx);
/* 6ee605: mov al, byte ptr [esi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x34u))) & 0xffu);
/* 6ee608: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee609: lea ecx, [ebx + 0x38] */
  ecx = (uint32_t)(ebx + 0x38u);
/* 6ee60c: mov byte ptr [ebx + 0x34], al */
  W8((uint32_t)(ebx + 0x34u), (eax & 0xffu));
/* 6ee60f: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6ee615u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6ee615: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 6ee618: mov dword ptr [ebx + 0x44], edx */
  W32((uint32_t)(ebx + 0x44u), edx);
/* 6ee61b: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 6ee61e: mov dword ptr [ebx + 0x48], eax */
  W32((uint32_t)(ebx + 0x48u), eax);
/* 6ee621: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 6ee624: mov dword ptr [ebx + 0x4c], ecx */
  W32((uint32_t)(ebx + 0x4cu), ecx);
/* 6ee627: add esi, 0x50 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6ee62a: lea edi, [ebx + 0x50] */
  edi = (uint32_t)(ebx + 0x50u);
/* 6ee62d: mov ecx, 6 */
  ecx = 0x6u;
/* 6ee632: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6ee634: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ee635: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee636: mov eax, ebx */
  eax = ebx;
/* 6ee638: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ee639: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee660(void) {
  LOAD_REGS();
L_6ee660: /* 6ee660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee661: mov esi, ecx */
  esi = ecx;
/* 6ee663: call 0x6caa5b */
  esp -= 4; W32(esp, 0x6ee668u); SPILL(); f_6caa5b(); if (g_unwind) return; RELOAD();
/* 6ee668: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee66d: je 0x6ee67b */
  if (zf) goto L_6ee67b;
L_6ee66f: /* 6ee66f: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6ee671: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee672: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ee678u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ee678: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ee67b: /* 6ee67b: mov eax, esi */
  eax = esi;
/* 6ee67d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee67e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee6a0(void) {
  LOAD_REGS();
L_6ee6a0: /* 6ee6a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ee6a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ee6a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee6a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee6a9: mov esi, ecx */
  esi = ecx;
/* 6ee6ab: je 0x6ee6dd */
  if (zf) goto L_6ee6dd;
L_6ee6ad: /* 6ee6ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ee6b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee6b1: push 0x6caa5b */
  { uint32_t v = 0x6caa5bu; esp -= 4; W32(esp, v); }
/* 6ee6b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ee6b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ee6ba: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6ee6bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee6bd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ee6c2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ee6c2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee6c5: je 0x6ee6d5 */
  if (zf) goto L_6ee6d5;
L_6ee6c7: /* 6ee6c7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ee6cd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ee6cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ee6d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee6d2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ee6d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ee6d5: /* 6ee6d5: mov eax, edi */
  eax = edi;
/* 6ee6d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ee6d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee6d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ee6da: ret 4 */
  esp += 8; SPILL(); return;
L_6ee6dd: /* 6ee6dd: mov ecx, esi */
  ecx = esi;
/* 6ee6df: call 0x6caa5b */
  esp -= 4; W32(esp, 0x6ee6e4u); SPILL(); f_6caa5b(); if (g_unwind) return; RELOAD();
/* 6ee6e4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee6e7: je 0x6ee6f5 */
  if (zf) goto L_6ee6f5;
L_6ee6e9: /* 6ee6e9: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6ee6eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee6ec: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ee6f2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ee6f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ee6f5: /* 6ee6f5: mov eax, esi */
  eax = esi;
/* 6ee6f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee6f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ee6f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee720(void) {
  LOAD_REGS();
L_6ee720: /* 6ee720: mov eax, 0xcdd408 */
  eax = 0xcdd408u;
/* 6ee725: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee740(void) {
  LOAD_REGS();
L_6ee740: /* 6ee740: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ee745: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ee747: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ee74b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ee74f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ee751: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ee753: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee754: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ee758: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ee75a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ee75b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ee75c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee75d: push 0xcdd408 */
  { uint32_t v = 0xcdd408u; esp -= 4; W32(esp, v); }
/* 6ee762: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ee768u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ee768: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ee76b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee780(void) {
  LOAD_REGS();
L_6ee780: /* 6ee780: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ee784: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee7a0(void) {
  LOAD_REGS();
L_6ee7a0: /* 6ee7a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ee7a2: push 0x9c0b88 */
  { uint32_t v = 0x9c0b88u; esp -= 4; W32(esp, v); }
/* 6ee7a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ee7ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ee7ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ee7b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee7b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee7b7: mov esi, ecx */
  esi = ecx;
/* 6ee7b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ee7bd: mov dword ptr [esi], 0x9f62a0 */
  W32((uint32_t)(esi), 0x9f62a0u);
/* 6ee7c3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ee7cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ee7d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ee7d1: mov ecx, esi */
  ecx = esi;
/* 6ee7d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ee7db: call 0x6c349f */
  esp -= 4; W32(esp, 0x6ee7e0u); SPILL(); f_6c349f(); if (g_unwind) return; RELOAD();
/* 6ee7e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ee7e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee7e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ee7ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ee7ef: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee810(void) {
  LOAD_REGS();
L_6ee810: /* 6ee810: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ee812: push 0x9c0bb0 */
  { uint32_t v = 0x9c0bb0u; esp -= 4; W32(esp, v); }
/* 6ee817: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ee81d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ee81e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ee825: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee826: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee827: mov esi, ecx */
  esi = ecx;
/* 6ee829: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ee82d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6ee833u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6ee833: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6ee836: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ee83e: mov dword ptr [esi], 0x9f5f40 */
  W32((uint32_t)(esi), 0x9f5f40u);
/* 6ee844: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6ee84au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6ee84a: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 6ee84d: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6ee855: mov dword ptr [esi], 0x9f62a0 */
  W32((uint32_t)(esi), 0x9f62a0u);
/* 6ee85b: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x6ee861u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 6ee861: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ee865: mov eax, esi */
  eax = esi;
/* 6ee867: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee868: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ee86f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ee872: ret  */
  esp += 4; SPILL(); return;
}

void f_6ee8a0(void) {
  LOAD_REGS();
L_6ee8a0: /* 6ee8a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee8a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee8a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ee8a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee8a7: mov esi, ecx */
  esi = ecx;
/* 6ee8a9: call 0x6c9f2a */
  esp -= 4; W32(esp, 0x6ee8aeu); SPILL(); f_6c9f2a(); if (g_unwind) return; RELOAD();
/* 6ee8ae: mov dword ptr [esi], 0x9f62a0 */
  W32((uint32_t)(esi), 0x9f62a0u);
/* 6ee8b4: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6ee8b7: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6ee8ba: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6ee8bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ee8be: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6ee8c1: mov eax, esi */
  eax = esi;
/* 6ee8c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee8c4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee8e0(void) {
  LOAD_REGS();
L_6ee8e0: /* 6ee8e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee8e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee8e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ee8e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee8e7: mov esi, ecx */
  esi = ecx;
/* 6ee8e9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ee8efu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ee8ef: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ee8f2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ee8f5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ee8f8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ee8fb: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6ee8fe: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 6ee901: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6ee904: mov al, byte ptr [edi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6ee907: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ee908: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6ee90b: mov byte ptr [esi + 0x34], al */
  W8((uint32_t)(esi + 0x34u), (eax & 0xffu));
/* 6ee90e: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6ee914u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6ee914: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 6ee917: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 6ee91a: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6ee91d: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6ee920: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 6ee923: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 6ee926: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 6ee929: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 6ee92c: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 6ee92f: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 6ee932: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ee933: mov eax, esi */
  eax = esi;
/* 6ee935: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee936: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee960(void) {
  LOAD_REGS();
L_6ee960: /* 6ee960: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee961: mov esi, ecx */
  esi = ecx;
/* 6ee963: call 0x6c2879 */
  esp -= 4; W32(esp, 0x6ee968u); SPILL(); f_6c2879(); if (g_unwind) return; RELOAD();
/* 6ee968: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee96d: je 0x6ee97b */
  if (zf) goto L_6ee97b;
L_6ee96f: /* 6ee96f: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6ee971: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee972: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ee978u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ee978: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ee97b: /* 6ee97b: mov eax, esi */
  eax = esi;
/* 6ee97d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee97e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ee9a0(void) {
  LOAD_REGS();
L_6ee9a0: /* 6ee9a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ee9a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ee9a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee9a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee9a9: mov esi, ecx */
  esi = ecx;
/* 6ee9ab: je 0x6ee9dd */
  if (zf) goto L_6ee9dd;
L_6ee9ad: /* 6ee9ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ee9b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee9b1: push 0x6c2879 */
  { uint32_t v = 0x6c2879u; esp -= 4; W32(esp, v); }
/* 6ee9b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ee9b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ee9ba: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6ee9bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee9bd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ee9c2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ee9c2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee9c5: je 0x6ee9d5 */
  if (zf) goto L_6ee9d5;
L_6ee9c7: /* 6ee9c7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ee9cd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ee9cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ee9d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ee9d2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ee9d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ee9d5: /* 6ee9d5: mov eax, edi */
  eax = edi;
/* 6ee9d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ee9d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee9d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ee9da: ret 4 */
  esp += 8; SPILL(); return;
L_6ee9dd: /* 6ee9dd: mov ecx, esi */
  ecx = esi;
/* 6ee9df: call 0x6c2879 */
  esp -= 4; W32(esp, 0x6ee9e4u); SPILL(); f_6c2879(); if (g_unwind) return; RELOAD();
/* 6ee9e4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ee9e7: je 0x6ee9f5 */
  if (zf) goto L_6ee9f5;
L_6ee9e9: /* 6ee9e9: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6ee9eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ee9ec: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ee9f2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ee9f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ee9f5: /* 6ee9f5: mov eax, esi */
  eax = esi;
/* 6ee9f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ee9f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ee9f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eea20(void) {
  LOAD_REGS();
L_6eea20: /* 6eea20: mov eax, 0xcdced8 */
  eax = 0xcdced8u;
/* 6eea25: ret  */
  esp += 4; SPILL(); return;
}

void f_6eea40(void) {
  LOAD_REGS();
L_6eea40: /* 6eea40: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6eea45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6eea47: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6eea4b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6eea4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eea51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eea53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eea54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6eea58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eea5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6eea5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eea5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eea5d: push 0xcdced8 */
  { uint32_t v = 0xcdced8u; esp -= 4; W32(esp, v); }
/* 6eea62: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6eea68u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6eea68: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eea6b: ret  */
  esp += 4; SPILL(); return;
}

void f_6eea80(void) {
  LOAD_REGS();
L_6eea80: /* 6eea80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6eea84: ret  */
  esp += 4; SPILL(); return;
}

void f_6eeaa0(void) {
  LOAD_REGS();
L_6eeaa0: /* 6eeaa0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6eeaa2: push 0x9c0bc8 */
  { uint32_t v = 0x9c0bc8u; esp -= 4; W32(esp, v); }
/* 6eeaa7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6eeaad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eeaae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6eeab5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eeab6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eeab7: mov esi, ecx */
  esi = ecx;
/* 6eeab9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6eeabd: mov dword ptr [esi], 0x9f6330 */
  W32((uint32_t)(esi), 0x9f6330u);
/* 6eeac3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6eeacb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6eead1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6eead1: mov ecx, esi */
  ecx = esi;
/* 6eead3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6eeadb: call 0x6c349f */
  esp -= 4; W32(esp, 0x6eeae0u); SPILL(); f_6c349f(); if (g_unwind) return; RELOAD();
/* 6eeae0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6eeae4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eeae5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6eeaec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eeaef: ret  */
  esp += 4; SPILL(); return;
}

void f_6eeb10(void) {
  LOAD_REGS();
L_6eeb10: /* 6eeb10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6eeb12: push 0x9c0bf0 */
  { uint32_t v = 0x9c0bf0u; esp -= 4; W32(esp, v); }
/* 6eeb17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6eeb1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eeb1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6eeb25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eeb26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eeb27: mov esi, ecx */
  esi = ecx;
/* 6eeb29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6eeb2d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6eeb33u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6eeb33: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6eeb36: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6eeb3e: mov dword ptr [esi], 0x9f5f40 */
  W32((uint32_t)(esi), 0x9f5f40u);
/* 6eeb44: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6eeb4au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6eeb4a: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 6eeb4d: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6eeb55: mov dword ptr [esi], 0x9f6330 */
  W32((uint32_t)(esi), 0x9f6330u);
/* 6eeb5b: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6eeb61u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6eeb61: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6eeb65: mov eax, esi */
  eax = esi;
/* 6eeb67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eeb68: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6eeb6f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eeb72: ret  */
  esp += 4; SPILL(); return;
}

void f_6eeba0(void) {
  LOAD_REGS();
L_6eeba0: /* 6eeba0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eeba1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eeba2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6eeba6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eeba7: mov esi, ecx */
  esi = ecx;
/* 6eeba9: call 0x6c9f2a */
  esp -= 4; W32(esp, 0x6eebaeu); SPILL(); f_6c9f2a(); if (g_unwind) return; RELOAD();
/* 6eebae: mov dword ptr [esi], 0x9f6330 */
  W32((uint32_t)(esi), 0x9f6330u);
/* 6eebb4: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6eebb7: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6eebba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eebbb: mov eax, esi */
  eax = esi;
/* 6eebbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eebbe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eebe0(void) {
  LOAD_REGS();
L_6eebe0: /* 6eebe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eebe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eebe2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6eebe6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eebe7: mov esi, ecx */
  esi = ecx;
/* 6eebe9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6eebefu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6eebef: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6eebf2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6eebf5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6eebf8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6eebfb: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6eebfe: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 6eec01: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6eec04: mov al, byte ptr [edi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6eec07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eec08: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6eec0b: mov byte ptr [esi + 0x34], al */
  W8((uint32_t)(esi + 0x34u), (eax & 0xffu));
/* 6eec0e: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6eec14u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6eec14: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 6eec17: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 6eec1a: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6eec1d: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6eec20: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 6eec23: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 6eec26: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 6eec29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eec2a: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 6eec2d: mov eax, esi */
  eax = esi;
/* 6eec2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eec30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eec60(void) {
  LOAD_REGS();
L_6eec60: /* 6eec60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eec61: mov esi, ecx */
  esi = ecx;
/* 6eec63: call 0x6c12cb */
  esp -= 4; W32(esp, 0x6eec68u); SPILL(); f_6c12cb(); if (g_unwind) return; RELOAD();
/* 6eec68: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eec6d: je 0x6eec7b */
  if (zf) goto L_6eec7b;
L_6eec6f: /* 6eec6f: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 6eec71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eec72: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6eec78u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6eec78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6eec7b: /* 6eec7b: mov eax, esi */
  eax = esi;
/* 6eec7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eec7e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eeca0(void) {
  LOAD_REGS();
L_6eeca0: /* 6eeca0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eeca1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6eeca5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eeca8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eeca9: mov esi, ecx */
  esi = ecx;
/* 6eecab: je 0x6eecdd */
  if (zf) goto L_6eecdd;
L_6eecad: /* 6eecad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6eecb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eecb1: push 0x6c12cb */
  { uint32_t v = 0x6c12cbu; esp -= 4; W32(esp, v); }
/* 6eecb6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6eecb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eecba: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 6eecbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eecbd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6eecc2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6eecc2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eecc5: je 0x6eecd5 */
  if (zf) goto L_6eecd5;
L_6eecc7: /* 6eecc7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6eeccd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6eeccf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6eecd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eecd2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6eecd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6eecd5: /* 6eecd5: mov eax, edi */
  eax = edi;
/* 6eecd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eecd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eecd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eecda: ret 4 */
  esp += 8; SPILL(); return;
L_6eecdd: /* 6eecdd: mov ecx, esi */
  ecx = esi;
/* 6eecdf: call 0x6c12cb */
  esp -= 4; W32(esp, 0x6eece4u); SPILL(); f_6c12cb(); if (g_unwind) return; RELOAD();
/* 6eece4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eece7: je 0x6eecf5 */
  if (zf) goto L_6eecf5;
L_6eece9: /* 6eece9: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 6eeceb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eecec: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6eecf2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6eecf2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6eecf5: /* 6eecf5: mov eax, esi */
  eax = esi;
/* 6eecf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eecf8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eecf9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eed20(void) {
  LOAD_REGS();
L_6eed20: /* 6eed20: mov eax, 0xcdc9a8 */
  eax = 0xcdc9a8u;
/* 6eed25: ret  */
  esp += 4; SPILL(); return;
}

void f_6eed40(void) {
  LOAD_REGS();
L_6eed40: /* 6eed40: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6eed45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6eed47: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6eed4b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6eed4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eed51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eed53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eed54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6eed58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eed5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6eed5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eed5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eed5d: push 0xcdc9a8 */
  { uint32_t v = 0xcdc9a8u; esp -= 4; W32(esp, v); }
/* 6eed62: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6eed68u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6eed68: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eed6b: ret  */
  esp += 4; SPILL(); return;
}

void f_6eed80(void) {
  LOAD_REGS();
L_6eed80: /* 6eed80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6eed84: ret  */
  esp += 4; SPILL(); return;
}

void f_6eeda0(void) {
  LOAD_REGS();
L_6eeda0: /* 6eeda0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6eeda2: push 0x9c0c08 */
  { uint32_t v = 0x9c0c08u; esp -= 4; W32(esp, v); }
/* 6eeda7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6eedad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eedae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6eedb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eedb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eedb7: mov esi, ecx */
  esi = ecx;
/* 6eedb9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6eedbd: mov dword ptr [esi], 0x9f63c0 */
  W32((uint32_t)(esi), 0x9f63c0u);
/* 6eedc3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6eedcb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6eedd1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6eedd1: mov ecx, esi */
  ecx = esi;
/* 6eedd3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6eeddb: call 0x6c349f */
  esp -= 4; W32(esp, 0x6eede0u); SPILL(); f_6c349f(); if (g_unwind) return; RELOAD();
/* 6eede0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6eede4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eede5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6eedec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eedef: ret  */
  esp += 4; SPILL(); return;
}

void f_6eee10(void) {
  LOAD_REGS();
L_6eee10: /* 6eee10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6eee12: push 0x9c0c28 */
  { uint32_t v = 0x9c0c28u; esp -= 4; W32(esp, v); }
/* 6eee17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6eee1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eee1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6eee25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eee26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eee27: mov esi, ecx */
  esi = ecx;
/* 6eee29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6eee2d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6eee33u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6eee33: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6eee36: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6eee3e: mov dword ptr [esi], 0x9f5f40 */
  W32((uint32_t)(esi), 0x9f5f40u);
/* 6eee44: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6eee4au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6eee4a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6eee4e: mov dword ptr [esi], 0x9f63c0 */
  W32((uint32_t)(esi), 0x9f63c0u);
/* 6eee54: mov eax, esi */
  eax = esi;
/* 6eee56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eee57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6eee5e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6eee61: ret  */
  esp += 4; SPILL(); return;
}

void f_6eee90(void) {
  LOAD_REGS();
L_6eee90: /* 6eee90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eee91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eee92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6eee96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eee97: mov esi, ecx */
  esi = ecx;
/* 6eee99: call 0x6c9f2a */
  esp -= 4; W32(esp, 0x6eee9eu); SPILL(); f_6c9f2a(); if (g_unwind) return; RELOAD();
/* 6eee9e: mov dword ptr [esi], 0x9f63c0 */
  W32((uint32_t)(esi), 0x9f63c0u);
/* 6eeea4: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6eeea7: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6eeeaa: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6eeead: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 6eeeb0: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6eeeb2: mov eax, edi */
  eax = edi;
/* 6eeeb4: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6eeeb7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6eeeb9: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 6eeebc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eeebd: mov eax, esi */
  eax = esi;
/* 6eeebf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eeec0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eeee0(void) {
  LOAD_REGS();
L_6eeee0: /* 6eeee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eeee1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eeee2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6eeee6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eeee7: mov esi, ecx */
  esi = ecx;
/* 6eeee9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6eeeefu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6eeeef: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6eeef2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6eeef5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6eeef8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6eeefb: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6eeefe: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 6eef01: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6eef04: mov al, byte ptr [edi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6eef07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6eef08: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6eef0b: mov byte ptr [esi + 0x34], al */
  W8((uint32_t)(esi + 0x34u), (eax & 0xffu));
/* 6eef0e: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6eef14u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6eef14: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 6eef17: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 6eef1a: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6eef1d: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6eef20: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 6eef23: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 6eef26: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 6eef29: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 6eef2c: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 6eef2f: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 6eef32: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6eef34: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6eef37: mov ecx, edi */
  ecx = edi;
/* 6eef39: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6eef3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eef3c: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6eef3f: mov eax, esi */
  eax = esi;
/* 6eef41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eef42: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eef70(void) {
  LOAD_REGS();
L_6eef70: /* 6eef70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eef71: mov esi, ecx */
  esi = ecx;
/* 6eef73: call 0x6c56ff */
  esp -= 4; W32(esp, 0x6eef78u); SPILL(); f_6c56ff(); if (g_unwind) return; RELOAD();
/* 6eef78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eef7d: je 0x6eef8b */
  if (zf) goto L_6eef8b;
L_6eef7f: /* 6eef7f: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6eef81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eef82: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6eef88u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6eef88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6eef8b: /* 6eef8b: mov eax, esi */
  eax = esi;
/* 6eef8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eef8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6eefb0(void) {
  LOAD_REGS();
L_6eefb0: /* 6eefb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6eefb1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6eefb5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eefb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eefb9: mov esi, ecx */
  esi = ecx;
/* 6eefbb: je 0x6eefed */
  if (zf) goto L_6eefed;
L_6eefbd: /* 6eefbd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6eefc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eefc1: push 0x6c56ff */
  { uint32_t v = 0x6c56ffu; esp -= 4; W32(esp, v); }
/* 6eefc6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6eefc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eefca: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6eefcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eefcd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6eefd2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6eefd2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eefd5: je 0x6eefe5 */
  if (zf) goto L_6eefe5;
L_6eefd7: /* 6eefd7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6eefdd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6eefdf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6eefe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eefe2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6eefe5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6eefe5: /* 6eefe5: mov eax, edi */
  eax = edi;
/* 6eefe7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eefe8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eefe9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6eefea: ret 4 */
  esp += 8; SPILL(); return;
L_6eefed: /* 6eefed: mov ecx, esi */
  ecx = esi;
/* 6eefef: call 0x6c56ff */
  esp -= 4; W32(esp, 0x6eeff4u); SPILL(); f_6c56ff(); if (g_unwind) return; RELOAD();
/* 6eeff4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6eeff7: je 0x6ef005 */
  if (zf) goto L_6ef005;
L_6eeff9: /* 6eeff9: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6eeffb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eeffc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ef002u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ef002: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ef005: /* 6ef005: mov eax, esi */
  eax = esi;
/* 6ef007: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ef008: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ef009: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ef030(void) {
  LOAD_REGS();
L_6ef030: /* 6ef030: mov eax, 0xcdafb8 */
  eax = 0xcdafb8u;
/* 6ef035: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef050(void) {
  LOAD_REGS();
L_6ef050: /* 6ef050: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ef055: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ef057: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ef05b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ef05f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef061: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef063: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef064: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ef068: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef06a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ef06b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef06c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef06d: push 0xcdafb8 */
  { uint32_t v = 0xcdafb8u; esp -= 4; W32(esp, v); }
/* 6ef072: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ef078u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ef078: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ef07b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef090(void) {
  LOAD_REGS();
L_6ef090: /* 6ef090: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ef094: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef0b0(void) {
  LOAD_REGS();
L_6ef0b0: /* 6ef0b0: mov eax, 0xcdba18 */
  eax = 0xcdba18u;
/* 6ef0b5: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef0d0(void) {
  LOAD_REGS();
L_6ef0d0: /* 6ef0d0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ef0d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ef0d7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ef0db: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ef0df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef0e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef0e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef0e4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ef0e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef0ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ef0eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef0ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef0ed: push 0xcdba18 */
  { uint32_t v = 0xcdba18u; esp -= 4; W32(esp, v); }
/* 6ef0f2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ef0f8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ef0f8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ef0fb: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef110(void) {
  LOAD_REGS();
L_6ef110: /* 6ef110: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ef114: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef130(void) {
  LOAD_REGS();
L_6ef130: /* 6ef130: mov eax, 0xcdb4e8 */
  eax = 0xcdb4e8u;
/* 6ef135: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef150(void) {
  LOAD_REGS();
L_6ef150: /* 6ef150: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ef155: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ef157: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ef15b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ef15f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef161: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef163: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef164: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ef168: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef16a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ef16b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef16c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef16d: push 0xcdb4e8 */
  { uint32_t v = 0xcdb4e8u; esp -= 4; W32(esp, v); }
/* 6ef172: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ef178u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ef178: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ef17b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef190(void) {
  LOAD_REGS();
L_6ef190: /* 6ef190: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ef194: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef1b0(void) {
  LOAD_REGS();
L_6ef1b0: /* 6ef1b0: mov eax, 0xcdaa88 */
  eax = 0xcdaa88u;
/* 6ef1b5: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef1d0(void) {
  LOAD_REGS();
L_6ef1d0: /* 6ef1d0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ef1d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ef1d7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ef1db: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ef1df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef1e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef1e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef1e4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ef1e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef1ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ef1eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef1ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef1ed: push 0xcdaa88 */
  { uint32_t v = 0xcdaa88u; esp -= 4; W32(esp, v); }
/* 6ef1f2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ef1f8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ef1f8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ef1fb: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef210(void) {
  LOAD_REGS();
L_6ef210: /* 6ef210: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ef214: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef230(void) {
  LOAD_REGS();
L_6ef230: /* 6ef230: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ef232: push 0x9c0c49 */
  { uint32_t v = 0x9c0c49u; esp -= 4; W32(esp, v); }
/* 6ef237: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ef23d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef23e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ef245: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef246: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ef247: mov esi, ecx */
  esi = ecx;
/* 6ef249: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ef24d: mov dword ptr [esi], 0x9f6450 */
  W32((uint32_t)(esi), 0x9f6450u);
/* 6ef253: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ef25b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ef261u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ef261: mov ecx, esi */
  ecx = esi;
/* 6ef263: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ef26b: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6ef271u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6ef271: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ef275: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ef276: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ef27d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ef280: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef2b0(void) {
  LOAD_REGS();
L_6ef2b0: /* 6ef2b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ef2b1: mov esi, ecx */
  esi = ecx;
/* 6ef2b3: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6ef2b9u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6ef2b9: mov dword ptr [esi], 0x9f6450 */
  W32((uint32_t)(esi), 0x9f6450u);
/* 6ef2bf: mov eax, esi */
  eax = esi;
/* 6ef2c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ef2c2: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef2e0(void) {
  LOAD_REGS();
L_6ef2e0: /* 6ef2e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ef2e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ef2e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef2e6: mov esi, ecx */
  esi = ecx;
/* 6ef2e8: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6ef2eeu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6ef2ee: mov dword ptr [esi], 0x9f6450 */
  W32((uint32_t)(esi), 0x9f6450u);
/* 6ef2f4: mov eax, esi */
  eax = esi;
/* 6ef2f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ef2f7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ef310(void) {
  LOAD_REGS();
L_6ef310: /* 6ef310: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ef314: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ef315: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef316: mov esi, ecx */
  esi = ecx;
/* 6ef318: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ef31eu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ef31e: mov eax, esi */
  eax = esi;
/* 6ef320: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ef321: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ef340(void) {
  LOAD_REGS();
L_6ef340: /* 6ef340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ef341: mov esi, ecx */
  esi = ecx;
/* 6ef343: call 0x6c4598 */
  esp -= 4; W32(esp, 0x6ef348u); SPILL(); f_6c4598(); if (g_unwind) return; RELOAD();
/* 6ef348: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ef34d: je 0x6ef35b */
  if (zf) goto L_6ef35b;
L_6ef34f: /* 6ef34f: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6ef351: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ef352: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ef358u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ef358: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ef35b: /* 6ef35b: mov eax, esi */
  eax = esi;
/* 6ef35d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ef35e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ef380(void) {
  LOAD_REGS();
L_6ef380: /* 6ef380: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ef381: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ef385: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ef388: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ef389: mov esi, ecx */
  esi = ecx;
/* 6ef38b: je 0x6ef3bd */
  if (zf) goto L_6ef3bd;
L_6ef38d: /* 6ef38d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ef390: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ef391: push 0x6c4598 */
  { uint32_t v = 0x6c4598u; esp -= 4; W32(esp, v); }
/* 6ef396: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ef399: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef39a: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6ef39c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ef39d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ef3a2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ef3a2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ef3a5: je 0x6ef3b5 */
  if (zf) goto L_6ef3b5;
L_6ef3a7: /* 6ef3a7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ef3ad: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ef3af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ef3b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ef3b2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ef3b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ef3b5: /* 6ef3b5: mov eax, edi */
  eax = edi;
/* 6ef3b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ef3b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ef3b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ef3ba: ret 4 */
  esp += 8; SPILL(); return;
L_6ef3bd: /* 6ef3bd: mov ecx, esi */
  ecx = esi;
/* 6ef3bf: call 0x6c4598 */
  esp -= 4; W32(esp, 0x6ef3c4u); SPILL(); f_6c4598(); if (g_unwind) return; RELOAD();
/* 6ef3c4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ef3c7: je 0x6ef3d5 */
  if (zf) goto L_6ef3d5;
L_6ef3c9: /* 6ef3c9: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6ef3cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ef3cc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ef3d2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ef3d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ef3d5: /* 6ef3d5: mov eax, esi */
  eax = esi;
/* 6ef3d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ef3d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ef3d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ef400(void) {
  LOAD_REGS();
L_6ef400: /* 6ef400: mov eax, 0xcd98d0 */
  eax = 0xcd98d0u;
/* 6ef405: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef420(void) {
  LOAD_REGS();
L_6ef420: /* 6ef420: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ef425: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ef427: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ef42b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ef42f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef431: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef434: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ef438: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ef43a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ef43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef43c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef43d: push 0xcd98d0 */
  { uint32_t v = 0xcd98d0u; esp -= 4; W32(esp, v); }
/* 6ef442: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ef448u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ef448: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ef44b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef460(void) {
  LOAD_REGS();
L_6ef460: /* 6ef460: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ef464: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef480(void) {
  LOAD_REGS();
L_6ef480: /* 6ef480: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ef482: push 0x9c0c87 */
  { uint32_t v = 0x9c0c87u; esp -= 4; W32(esp, v); }
/* 6ef487: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ef48d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef48e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ef495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef496: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ef497: mov esi, ecx */
  esi = ecx;
/* 6ef499: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ef49d: mov dword ptr [esi], 0x9f64d0 */
  W32((uint32_t)(esi), 0x9f64d0u);
/* 6ef4a3: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 6ef4ab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ef4b1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ef4b1: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 6ef4b7: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6ef4bc: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x6ef4c2u); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 6ef4c2: lea ecx, [esi + 0x90] */
  ecx = (uint32_t)(esi + 0x90u);
/* 6ef4c8: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6ef4cd: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x6ef4d3u); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 6ef4d3: mov ecx, esi */
  ecx = esi;
/* 6ef4d5: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ef4dd: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6ef4e3u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6ef4e3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ef4e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ef4e8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ef4ef: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ef4f2: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef520(void) {
  LOAD_REGS();
L_6ef520: /* 6ef520: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ef522: push 0x9c0cb8 */
  { uint32_t v = 0x9c0cb8u; esp -= 4; W32(esp, v); }
/* 6ef527: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ef52d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef52e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ef535: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef536: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ef537: mov esi, ecx */
  esi = ecx;
/* 6ef539: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ef53d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6ef543u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6ef543: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 6ef546: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ef54e: mov dword ptr [esi], 0x9f64d0 */
  W32((uint32_t)(esi), 0x9f64d0u);
/* 6ef554: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6ef55au); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6ef55a: lea ecx, [esi + 0x88] */
  ecx = (uint32_t)(esi + 0x88u);
/* 6ef560: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6ef566u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6ef566: lea ecx, [esi + 0x90] */
  ecx = (uint32_t)(esi + 0x90u);
/* 6ef56c: call dword ptr [0xcfa31c] */
  esp -= 4; W32(esp, 0x6ef572u); SPILL(); f_4e3adf(); if (g_unwind) return; /* Core!??0FInterpCurve@@QAE@XZ */ RELOAD();
/* 6ef572: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 6ef578: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6ef57d: call dword ptr [0xcfa31c] */
  esp -= 4; W32(esp, 0x6ef583u); SPILL(); f_4e3adf(); if (g_unwind) return; /* Core!??0FInterpCurve@@QAE@XZ */ RELOAD();
/* 6ef583: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ef587: mov eax, esi */
  eax = esi;
/* 6ef589: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ef58a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ef591: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ef594: ret  */
  esp += 4; SPILL(); return;
}

void f_6ef5c0(void) {
  LOAD_REGS();
L_6ef5c0: /* 6ef5c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ef5c2: push 0x9c0ce8 */
  { uint32_t v = 0x9c0ce8u; esp -= 4; W32(esp, v); }
/* 6ef5c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ef5cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef5ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ef5d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ef5d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ef5d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ef5d8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 6ef5dc: mov esi, ecx */
  esi = ecx;
/* 6ef5de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ef5df: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 6ef5e3: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6ef5e9u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6ef5e9: mov dword ptr [esi], 0x9f64d0 */
  W32((uint32_t)(esi), 0x9f64d0u);
/* 6ef5ef: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ef5f2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ef5f5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ef5f8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ef5fb: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6ef5fe: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6ef601: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6ef604: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6ef607: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 6ef60a: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 6ef60d: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6ef610: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6ef613: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6ef616: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 6ef619: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6ef61c: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 6ef61f: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 6ef622: xor edx, dword ptr [edi + 0x48] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x48u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6ef625: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 6ef628: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6ef62b: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ef62d: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6ef630: mov ecx, eax */
  ecx = eax;
/* 6ef632: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6ef635: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ef637: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6ef63a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ef63c: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6ef63f: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 6ef642: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ef644: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6ef647: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ef649: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6ef64c: mov dl, byte ptr [edi + 0x4c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4cu))) & 0xffu);
/* 6ef64f: mov byte ptr [esi + 0x4c], dl */
  W8((uint32_t)(esi + 0x4cu), (edx & 0xffu));
/* 6ef652: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6ef655: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6ef658: lea ecx, [edi + 0x54] */
  ecx = (uint32_t)(edi + 0x54u);
/* 6ef65b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ef65d: lea edx, [esi + 0x54] */
  edx = (uint32_t)(esi + 0x54u);
/* 6ef660: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6ef662: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6ef665: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6ef668: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6ef66b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6ef66e: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* 6ef671: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* 6ef674: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 6ef677: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 6ef67a: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 6ef67d: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 6ef680: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 6ef683: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 6ef686: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 6ef689: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 6ef68c: mov ecx, dword ptr [edi + 0x74] */
  ecx = R32((uint32_t)(edi + 0x74u));
/* 6ef68f: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* 6ef692: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 6ef695: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 6ef698: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 6ef69b: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 6ef69e: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 6ef6a4: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 6ef6aa: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 6ef6b0: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 6ef6b6: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 6ef6bc: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 6ef6c2: mov cl, byte ptr [edi + 0x8c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x8cu))) & 0xffu);
/* 6ef6c8: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 6ef6d0: mov byte ptr [esi + 0x8c], cl */
  W8((uint32_t)(esi + 0x8cu), (ecx & 0xffu));
/* 6ef6d6: lea edx, [edi + 0x90] */
  edx = (uint32_t)(edi + 0x90u);
/* 6ef6dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ef6dd: lea ecx, [esi + 0x90] */
  ecx = (uint32_t)(esi + 0x90u);
/* 6ef6e3: call dword ptr [0xcfa320] */
  esp -= 4; W32(esp, 0x6ef6e9u); SPILL(); f_4e3945(); if (g_unwind) return; /* Core!??0FInterpCurve@@QAE@ABV0@@Z */ RELOAD();
/* 6ef6e9: lea eax, [edi + 0x9c] */
  eax = (uint32_t)(edi + 0x9cu);
/* 6ef6ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef6f0: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 6ef6f6: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 6ef6fb: call dword ptr [0xcfa320] */
  esp -= 4; W32(esp, 0x6ef701u); SPILL(); f_4e3945(); if (g_unwind) return; /* Core!??0FInterpCurve@@QAE@ABV0@@Z */ RELOAD();
/* 6ef701: lea ecx, [edi + 0xa8] */
  ecx = (uint32_t)(edi + 0xa8u);
/* 6ef707: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ef709: lea edx, [esi + 0xa8] */
  edx = (uint32_t)(esi + 0xa8u);
/* 6ef70f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6ef711: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6ef714: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6ef717: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6ef71a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6ef71d: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 6ef723: mov ecx, dword ptr [esi + 0xb8] */
  ecx = R32((uint32_t)(esi + 0xb8u));
/* 6ef729: mov dword ptr [esi + 0xb4], edx */
  W32((uint32_t)(esi + 0xb4u), edx);
/* 6ef72f: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 6ef735: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ef737: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6ef73a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ef73c: mov dword ptr [esi + 0xb8], ecx */
  W32((uint32_t)(esi + 0xb8u), ecx);
/* 6ef742: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 6ef748: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 6ef74e: lea edx, [edi + 0xc0] */
  edx = (uint32_t)(edi + 0xc0u);
/* 6ef754: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 6ef756: lea eax, [esi + 0xc0] */
  eax = (uint32_t)(esi + 0xc0u);
/* 6ef75c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6ef75e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 6ef761: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6ef764: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6ef767: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6ef76a: lea eax, [edi + 0xcc] */
  eax = (uint32_t)(edi + 0xccu);
/* 6ef770: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6ef772: lea ecx, [esi + 0xcc] */
  ecx = (uint32_t)(esi + 0xccu);
/* 6ef778: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6ef77a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6ef77d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6ef780: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6ef783: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6ef786: mov ecx, dword ptr [edi + 0xd8] */
  ecx = R32((uint32_t)(edi + 0xd8u));
/* 6ef78c: mov dword ptr [esi + 0xd8], ecx */
  W32((uint32_t)(esi + 0xd8u), ecx);
/* 6ef792: mov edx, dword ptr [edi + 0xdc] */
  edx = R32((uint32_t)(edi + 0xdcu));
/* 6ef798: mov dword ptr [esi + 0xdc], edx */
  W32((uint32_t)(esi + 0xdcu), edx);
/* 6ef79e: mov eax, dword ptr [edi + 0xe0] */
  eax = R32((uint32_t)(edi + 0xe0u));
/* 6ef7a4: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* 6ef7aa: mov ecx, dword ptr [edi + 0xe4] */
  ecx = R32((uint32_t)(edi + 0xe4u));
/* 6ef7b0: mov dword ptr [esi + 0xe4], ecx */
  W32((uint32_t)(esi + 0xe4u), ecx);
/* 6ef7b6: mov edx, dword ptr [edi + 0xe8] */
  edx = R32((uint32_t)(edi + 0xe8u));
/* 6ef7bc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6ef7c0: mov dword ptr [esi + 0xe8], edx */
  W32((uint32_t)(esi + 0xe8u), edx);
/* 6ef7c6: mov eax, dword ptr [edi + 0xec] */
  eax = R32((uint32_t)(edi + 0xecu));
/* 6ef7cc: mov dword ptr [esi + 0xec], eax */
  W32((uint32_t)(esi + 0xecu), eax);
/* 6ef7d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ef7d3: mov eax, esi */
  eax = esi;
/* 6ef7d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ef7d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ef7dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ef7e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ef880(void) {
  LOAD_REGS();
L_6ef880: /* 6ef880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ef881: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ef882: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ef886: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ef887: mov esi, ecx */
  esi = ecx;
/* 6ef889: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ef88fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ef88f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ef892: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ef895: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ef898: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ef89b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6ef89e: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6ef8a1: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6ef8a4: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6ef8a7: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 6ef8aa: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 6ef8ad: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6ef8b0: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6ef8b3: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6ef8b6: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 6ef8b9: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6ef8bc: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 6ef8bf: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 6ef8c2: xor edx, dword ptr [edi + 0x48] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x48u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6ef8c5: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 6ef8c8: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6ef8cb: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ef8cd: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6ef8d0: mov ecx, eax */
  ecx = eax;
/* 6ef8d2: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6ef8d5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ef8d7: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6ef8da: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ef8dc: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6ef8df: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 6ef8e2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ef8e4: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6ef8e7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ef8e9: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6ef8ec: mov dl, byte ptr [edi + 0x4c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4cu))) & 0xffu);
/* 6ef8ef: mov byte ptr [esi + 0x4c], dl */
  W8((uint32_t)(esi + 0x4cu), (edx & 0xffu));
/* 6ef8f2: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6ef8f5: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6ef8f8: lea ecx, [edi + 0x54] */
  ecx = (uint32_t)(edi + 0x54u);
/* 6ef8fb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ef8fd: lea edx, [esi + 0x54] */
  edx = (uint32_t)(esi + 0x54u);
/* 6ef900: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6ef902: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6ef905: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6ef908: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6ef90b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6ef90e: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* 6ef911: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* 6ef914: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 6ef917: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 6ef91a: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 6ef91d: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 6ef920: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 6ef923: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 6ef926: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 6ef929: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 6ef92c: mov ecx, dword ptr [edi + 0x74] */
  ecx = R32((uint32_t)(edi + 0x74u));
/* 6ef92f: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* 6ef932: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 6ef935: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 6ef938: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 6ef93b: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 6ef93e: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 6ef944: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 6ef94a: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 6ef950: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 6ef956: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 6ef95c: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 6ef962: mov cl, byte ptr [edi + 0x8c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x8cu))) & 0xffu);
/* 6ef968: lea edx, [edi + 0x90] */
  edx = (uint32_t)(edi + 0x90u);
/* 6ef96e: mov byte ptr [esi + 0x8c], cl */
  W8((uint32_t)(esi + 0x8cu), (ecx & 0xffu));
/* 6ef974: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ef975: lea ecx, [esi + 0x90] */
  ecx = (uint32_t)(esi + 0x90u);
/* 6ef97b: call dword ptr [0xcfa324] */
  esp -= 4; W32(esp, 0x6ef981u); SPILL(); f_4e3ca1(); if (g_unwind) return; /* Core!??4FInterpCurve@@QAEXABV0@@Z */ RELOAD();
/* 6ef981: lea eax, [edi + 0x9c] */
  eax = (uint32_t)(edi + 0x9cu);
/* 6ef987: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ef988: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 6ef98e: call dword ptr [0xcfa324] */
  esp -= 4; W32(esp, 0x6ef994u); SPILL(); f_4e3ca1(); if (g_unwind) return; /* Core!??4FInterpCurve@@QAEXABV0@@Z */ RELOAD();
/* 6ef994: lea ecx, [edi + 0xa8] */
  ecx = (uint32_t)(edi + 0xa8u);
/* 6ef99a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ef99c: lea edx, [esi + 0xa8] */
  edx = (uint32_t)(esi + 0xa8u);
/* 6ef9a2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6ef9a4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6ef9a7: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6ef9aa: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6ef9ad: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6ef9b0: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 6ef9b6: mov ecx, dword ptr [esi + 0xb8] */
  ecx = R32((uint32_t)(esi + 0xb8u));
/* 6ef9bc: mov dword ptr [esi + 0xb4], edx */
  W32((uint32_t)(esi + 0xb4u), edx);
/* 6ef9c2: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 6ef9c8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ef9ca: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6ef9cd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ef9cf: mov dword ptr [esi + 0xb8], ecx */
  W32((uint32_t)(esi + 0xb8u), ecx);
/* 6ef9d5: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 6ef9db: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 6ef9e1: lea edx, [edi + 0xc0] */
  edx = (uint32_t)(edi + 0xc0u);
/* 6ef9e7: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 6ef9e9: lea eax, [esi + 0xc0] */
  eax = (uint32_t)(esi + 0xc0u);
/* 6ef9ef: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6ef9f1: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 6ef9f4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6ef9f7: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6ef9fa: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6ef9fd: lea eax, [edi + 0xcc] */
  eax = (uint32_t)(edi + 0xccu);
/* 6efa03: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6efa05: lea ecx, [esi + 0xcc] */
  ecx = (uint32_t)(esi + 0xccu);
/* 6efa0b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6efa0d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6efa10: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6efa13: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6efa16: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6efa19: mov ecx, dword ptr [edi + 0xd8] */
  ecx = R32((uint32_t)(edi + 0xd8u));
/* 6efa1f: mov dword ptr [esi + 0xd8], ecx */
  W32((uint32_t)(esi + 0xd8u), ecx);
/* 6efa25: mov edx, dword ptr [edi + 0xdc] */
  edx = R32((uint32_t)(edi + 0xdcu));
/* 6efa2b: mov dword ptr [esi + 0xdc], edx */
  W32((uint32_t)(esi + 0xdcu), edx);
/* 6efa31: mov eax, dword ptr [edi + 0xe0] */
  eax = R32((uint32_t)(edi + 0xe0u));
/* 6efa37: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* 6efa3d: mov ecx, dword ptr [edi + 0xe4] */
  ecx = R32((uint32_t)(edi + 0xe4u));
/* 6efa43: mov dword ptr [esi + 0xe4], ecx */
  W32((uint32_t)(esi + 0xe4u), ecx);
/* 6efa49: mov edx, dword ptr [edi + 0xe8] */
  edx = R32((uint32_t)(edi + 0xe8u));
/* 6efa4f: mov dword ptr [esi + 0xe8], edx */
  W32((uint32_t)(esi + 0xe8u), edx);
/* 6efa55: mov eax, dword ptr [edi + 0xec] */
  eax = R32((uint32_t)(edi + 0xecu));
/* 6efa5b: mov dword ptr [esi + 0xec], eax */
  W32((uint32_t)(esi + 0xecu), eax);
/* 6efa61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6efa62: mov eax, esi */
  eax = esi;
/* 6efa64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6efa65: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6efaf0(void) {
  LOAD_REGS();
L_6efaf0: /* 6efaf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efaf1: mov esi, ecx */
  esi = ecx;
/* 6efaf3: call 0x6c741e */
  esp -= 4; W32(esp, 0x6efaf8u); SPILL(); f_6c741e(); if (g_unwind) return; RELOAD();
/* 6efaf8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6efafd: je 0x6efb0e */
  if (zf) goto L_6efb0e;
L_6efaff: /* 6efaff: push 0xf0 */
  { uint32_t v = 0xf0u; esp -= 4; W32(esp, v); }
/* 6efb04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efb05: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6efb0bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6efb0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6efb0e: /* 6efb0e: mov eax, esi */
  eax = esi;
/* 6efb10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6efb11: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6efb30(void) {
  LOAD_REGS();
L_6efb30: /* 6efb30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6efb31: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6efb35: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6efb38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efb39: mov esi, ecx */
  esi = ecx;
/* 6efb3b: je 0x6efb70 */
  if (zf) goto L_6efb70;
L_6efb3d: /* 6efb3d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6efb40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6efb41: push 0x6c741e */
  { uint32_t v = 0x6c741eu; esp -= 4; W32(esp, v); }
/* 6efb46: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6efb49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6efb4a: push 0xf0 */
  { uint32_t v = 0xf0u; esp -= 4; W32(esp, v); }
/* 6efb4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efb50: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6efb55u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6efb55: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6efb58: je 0x6efb68 */
  if (zf) goto L_6efb68;
L_6efb5a: /* 6efb5a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6efb60: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6efb62: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6efb64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6efb65: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6efb68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6efb68: /* 6efb68: mov eax, edi */
  eax = edi;
/* 6efb6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6efb6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6efb6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6efb6d: ret 4 */
  esp += 8; SPILL(); return;
L_6efb70: /* 6efb70: mov ecx, esi */
  ecx = esi;
/* 6efb72: call 0x6c741e */
  esp -= 4; W32(esp, 0x6efb77u); SPILL(); f_6c741e(); if (g_unwind) return; RELOAD();
/* 6efb77: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6efb7a: je 0x6efb8b */
  if (zf) goto L_6efb8b;
L_6efb7c: /* 6efb7c: push 0xf0 */
  { uint32_t v = 0xf0u; esp -= 4; W32(esp, v); }
/* 6efb81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efb82: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6efb88u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6efb88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6efb8b: /* 6efb8b: mov eax, esi */
  eax = esi;
/* 6efb8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6efb8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6efb8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6efbc0(void) {
  LOAD_REGS();
L_6efbc0: /* 6efbc0: mov eax, 0xb83b30 */
  eax = 0xb83b30u;
/* 6efbc5: ret  */
  esp += 4; SPILL(); return;
}

void f_6efbe0(void) {
  LOAD_REGS();
L_6efbe0: /* 6efbe0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6efbe5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6efbe7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6efbeb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6efbef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6efbf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6efbf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6efbf4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6efbf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6efbfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6efbfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6efbfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6efbfd: push 0xb83b30 */
  { uint32_t v = 0xb83b30u; esp -= 4; W32(esp, v); }
/* 6efc02: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6efc08u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6efc08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6efc0b: ret  */
  esp += 4; SPILL(); return;
}

void f_6efc20(void) {
  LOAD_REGS();
L_6efc20: /* 6efc20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6efc24: ret  */
  esp += 4; SPILL(); return;
}

void f_6efc40(void) {
  LOAD_REGS();
L_6efc40: /* 6efc40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6efc42: push 0x9c0d09 */
  { uint32_t v = 0x9c0d09u; esp -= 4; W32(esp, v); }
/* 6efc47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6efc4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6efc4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6efc55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6efc56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efc57: mov esi, ecx */
  esi = ecx;
/* 6efc59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6efc5d: mov dword ptr [esi], 0x9f6550 */
  W32((uint32_t)(esi), 0x9f6550u);
/* 6efc63: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6efc6b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6efc71u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6efc71: mov ecx, esi */
  ecx = esi;
/* 6efc73: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6efc7b: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6efc81u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6efc81: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6efc85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6efc86: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6efc8d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6efc90: ret  */
  esp += 4; SPILL(); return;
}

void f_6efcc0(void) {
  LOAD_REGS();
L_6efcc0: /* 6efcc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efcc1: mov esi, ecx */
  esi = ecx;
/* 6efcc3: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6efcc9u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6efcc9: mov dword ptr [esi], 0x9f6550 */
  W32((uint32_t)(esi), 0x9f6550u);
/* 6efccf: mov eax, esi */
  eax = esi;
/* 6efcd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6efcd2: ret  */
  esp += 4; SPILL(); return;
}

void f_6efcf0(void) {
  LOAD_REGS();
L_6efcf0: /* 6efcf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6efcf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efcf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6efcf6: mov esi, ecx */
  esi = ecx;
/* 6efcf8: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6efcfeu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6efcfe: mov dword ptr [esi], 0x9f6550 */
  W32((uint32_t)(esi), 0x9f6550u);
/* 6efd04: mov eax, esi */
  eax = esi;
/* 6efd06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6efd07: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6efd20(void) {
  LOAD_REGS();
L_6efd20: /* 6efd20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6efd24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efd25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6efd26: mov esi, ecx */
  esi = ecx;
/* 6efd28: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6efd2eu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6efd2e: mov eax, esi */
  eax = esi;
/* 6efd30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6efd31: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6efd50(void) {
  LOAD_REGS();
L_6efd50: /* 6efd50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efd51: mov esi, ecx */
  esi = ecx;
/* 6efd53: call 0x6c5fab */
  esp -= 4; W32(esp, 0x6efd58u); SPILL(); f_6c5fab(); if (g_unwind) return; RELOAD();
/* 6efd58: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6efd5d: je 0x6efd6b */
  if (zf) goto L_6efd6b;
L_6efd5f: /* 6efd5f: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6efd61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efd62: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6efd68u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6efd68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6efd6b: /* 6efd6b: mov eax, esi */
  eax = esi;
/* 6efd6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6efd6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6efd90(void) {
  LOAD_REGS();
L_6efd90: /* 6efd90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6efd91: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6efd95: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6efd98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efd99: mov esi, ecx */
  esi = ecx;
/* 6efd9b: je 0x6efdcd */
  if (zf) goto L_6efdcd;
L_6efd9d: /* 6efd9d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6efda0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6efda1: push 0x6c5fab */
  { uint32_t v = 0x6c5fabu; esp -= 4; W32(esp, v); }
/* 6efda6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6efda9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6efdaa: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6efdac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efdad: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6efdb2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6efdb2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6efdb5: je 0x6efdc5 */
  if (zf) goto L_6efdc5;
L_6efdb7: /* 6efdb7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6efdbd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6efdbf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6efdc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6efdc2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6efdc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6efdc5: /* 6efdc5: mov eax, edi */
  eax = edi;
/* 6efdc7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6efdc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6efdc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6efdca: ret 4 */
  esp += 8; SPILL(); return;
L_6efdcd: /* 6efdcd: mov ecx, esi */
  ecx = esi;
/* 6efdcf: call 0x6c5fab */
  esp -= 4; W32(esp, 0x6efdd4u); SPILL(); f_6c5fab(); if (g_unwind) return; RELOAD();
/* 6efdd4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6efdd7: je 0x6efde5 */
  if (zf) goto L_6efde5;
L_6efdd9: /* 6efdd9: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6efddb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efddc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6efde2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6efde2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6efde5: /* 6efde5: mov eax, esi */
  eax = esi;
/* 6efde7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6efde8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6efde9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6efe10(void) {
  LOAD_REGS();
L_6efe10: /* 6efe10: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6efe13: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6efe17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efe18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6efe19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6efe1b: mov esi, ecx */
  esi = ecx;
/* 6efe1d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 6efe21: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6efe23: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6efe27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6efe28: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 6efe2c: mov eax, dword ptr [0xb7e474] */
  eax = R32((uint32_t)(0xb7e474u));
/* 6efe31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6efe33: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 6efe37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6efe38: mov ecx, esi */
  ecx = esi;
/* 6efe3a: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6efe40u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6efe40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6efe41: mov ecx, esi */
  ecx = esi;
/* 6efe43: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6efe46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6efe46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6efe47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6efe48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6efe4b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6efe60(void) {
  LOAD_REGS();
L_6efe60: /* 6efe60: mov edx, dword ptr [0xb7e470] */
  edx = R32((uint32_t)(0xb7e470u));
/* 6efe66: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6efe6a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6efe6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6efe6c: mov esi, ecx */
  esi = ecx;
/* 6efe6e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6efe70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6efe72: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6efe76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6efe77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6efe79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6efe7a: mov ecx, esi */
  ecx = esi;
/* 6efe7c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6efe80: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6efe86u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6efe86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6efe87: mov ecx, esi */
  ecx = esi;
/* 6efe89: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6efe8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6efe8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6efe8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6efe8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6efeb0(void) {
  LOAD_REGS();
L_6efeb0: /* 6efeb0: mov eax, 0xb84060 */
  eax = 0xb84060u;
/* 6efeb5: ret  */
  esp += 4; SPILL(); return;
}

void f_6efed0(void) {
  LOAD_REGS();
L_6efed0: /* 6efed0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6efed5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6efed7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6efedb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6efedf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6efee1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6efee3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6efee4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6efee8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6efeea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6efeeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6efeec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6efeed: push 0xb84060 */
  { uint32_t v = 0xb84060u; esp -= 4; W32(esp, v); }
/* 6efef2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6efef8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6efef8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6efefb: ret  */
  esp += 4; SPILL(); return;
}

void f_6eff10(void) {
  LOAD_REGS();
L_6eff10: /* 6eff10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6eff14: ret  */
  esp += 4; SPILL(); return;
}

void f_6eff30(void) {
  LOAD_REGS();
L_6eff30: /* 6eff30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eff31: mov esi, ecx */
  esi = ecx;
/* 6eff33: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6eff39u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6eff39: mov eax, esi */
  eax = esi;
/* 6eff3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eff3c: ret  */
  esp += 4; SPILL(); return;
}

void f_6eff50(void) {
  LOAD_REGS();
L_6eff50: /* 6eff50: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6eff70(void) {
  LOAD_REGS();
L_6eff70: /* 6eff70: mov eax, dword ptr [0xb7e468] */
  eax = R32((uint32_t)(0xb7e468u));
/* 6eff75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6eff76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6eff77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eff79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eff7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6eff7d: mov esi, ecx */
  esi = ecx;
/* 6eff7f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6eff81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eff82: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6eff88u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6eff88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6eff89: mov ecx, esi */
  ecx = esi;
/* 6eff8b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6eff8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6eff8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6eff8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6eff90: ret  */
  esp += 4; SPILL(); return;
}

void f_6effb0(void) {
  LOAD_REGS();
L_6effb0: /* 6effb0: mov eax, 0xb82880 */
  eax = 0xb82880u;
/* 6effb5: ret  */
  esp += 4; SPILL(); return;
}

void f_6effd0(void) {
  LOAD_REGS();
L_6effd0: /* 6effd0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6effd5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6effd7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6effdb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6effdf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6effe1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6effe3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6effe4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6effe8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6effea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6effeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6effec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6effed: push 0xb82880 */
  { uint32_t v = 0xb82880u; esp -= 4; W32(esp, v); }
/* 6efff2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6efff8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6efff8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6efffb: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0010(void) {
  LOAD_REGS();
L_6f0010: /* 6f0010: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f0014: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0030(void) {
  LOAD_REGS();
L_6f0030: /* 6f0030: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f0032: push 0x9c0d28 */
  { uint32_t v = 0x9c0d28u; esp -= 4; W32(esp, v); }
/* 6f0037: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f003d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f003e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f0045: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0046: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0047: mov esi, ecx */
  esi = ecx;
/* 6f0049: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f004d: mov dword ptr [esi], 0x9f65d0 */
  W32((uint32_t)(esi), 0x9f65d0u);
/* 6f0053: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f005b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f0061u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f0061: mov ecx, esi */
  ecx = esi;
/* 6f0063: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f006b: call 0x6c5fab */
  esp -= 4; W32(esp, 0x6f0070u); SPILL(); f_6c5fab(); if (g_unwind) return; RELOAD();
/* 6f0070: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f0074: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f007f: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0046(void) {
  LOAD_REGS();
L_6f0046: /* 6f0046: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0047: mov esi, ecx */
  esi = ecx;
/* 6f0049: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f004d: mov dword ptr [esi], 0x9f65d0 */
  W32((uint32_t)(esi), 0x9f65d0u);
/* 6f0053: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f005b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f0061u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f0061: mov ecx, esi */
  ecx = esi;
/* 6f0063: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f006b: call 0x6c5fab */
  esp -= 4; W32(esp, 0x6f0070u); SPILL(); f_6c5fab(); if (g_unwind) return; RELOAD();
/* 6f0070: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f0074: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f007f: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0047(void) {
  LOAD_REGS();
L_6f0047: /* 6f0047: mov esi, ecx */
  esi = ecx;
/* 6f0049: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f004d: mov dword ptr [esi], 0x9f65d0 */
  W32((uint32_t)(esi), 0x9f65d0u);
/* 6f0053: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f005b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f0061u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f0061: mov ecx, esi */
  ecx = esi;
/* 6f0063: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f006b: call 0x6c5fab */
  esp -= 4; W32(esp, 0x6f0070u); SPILL(); f_6c5fab(); if (g_unwind) return; RELOAD();
/* 6f0070: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f0074: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f007f: ret  */
  esp += 4; SPILL(); return;
}

void f_6f004d(void) {
  LOAD_REGS();
L_6f004d: /* 6f004d: mov dword ptr [esi], 0x9f65d0 */
  W32((uint32_t)(esi), 0x9f65d0u);
/* 6f0053: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f005b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f0061u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f0061: mov ecx, esi */
  ecx = esi;
/* 6f0063: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f006b: call 0x6c5fab */
  esp -= 4; W32(esp, 0x6f0070u); SPILL(); f_6c5fab(); if (g_unwind) return; RELOAD();
/* 6f0070: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f0074: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f007f: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0053(void) {
  LOAD_REGS();
L_6f0053: /* 6f0053: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f005b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f0061u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f0061: mov ecx, esi */
  ecx = esi;
/* 6f0063: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f006b: call 0x6c5fab */
  esp -= 4; W32(esp, 0x6f0070u); SPILL(); f_6c5fab(); if (g_unwind) return; RELOAD();
/* 6f0070: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f0074: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f007f: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0063(void) {
  LOAD_REGS();
L_6f0063: /* 6f0063: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f006b: call 0x6c5fab */
  esp -= 4; W32(esp, 0x6f0070u); SPILL(); f_6c5fab(); if (g_unwind) return; RELOAD();
/* 6f0070: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f0074: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f007f: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0070(void) {
  LOAD_REGS();
L_6f0070: /* 6f0070: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f0074: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f007f: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0074(void) {
  LOAD_REGS();
L_6f0074: /* 6f0074: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f007c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f007f: ret  */
  esp += 4; SPILL(); return;
}

void f_6f00a0(void) {
  LOAD_REGS();
L_6f00a0: /* 6f00a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f00a1: mov esi, ecx */
  esi = ecx;
/* 6f00a3: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f00a9u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f00a9: mov dword ptr [esi], 0x9f65d0 */
  W32((uint32_t)(esi), 0x9f65d0u);
/* 6f00af: mov eax, esi */
  eax = esi;
/* 6f00b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f00b2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f00d0(void) {
  LOAD_REGS();
L_6f00d0: /* 6f00d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f00d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f00d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f00d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f00d7: mov esi, ecx */
  esi = ecx;
/* 6f00d9: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6f00dfu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6f00df: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 6f00e2: mov dword ptr [esi], 0x9f65d0 */
  W32((uint32_t)(esi), 0x9f65d0u);
/* 6f00e8: xor eax, dword ptr [edi + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x28u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f00eb: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 6f00ee: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f00f1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f00f3: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 6f00f6: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f00f9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f00fb: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f00fe: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f0100: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f0103: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 6f0106: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f0108: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f010b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f010d: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 6f0110: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 6f0113: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f0115: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f0118: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f011a: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 6f011d: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 6f0120: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 6f0123: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6f0126: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f0127: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6f012a: mov eax, esi */
  eax = esi;
/* 6f012c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f012d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f0150(void) {
  LOAD_REGS();
L_6f0150: /* 6f0150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0151: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0152: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f0156: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0157: mov esi, ecx */
  esi = ecx;
/* 6f0159: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f015fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f015f: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 6f0162: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 6f0165: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f0167: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 6f016a: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f016d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f016f: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 6f0172: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f0175: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f0177: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f017a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f017c: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f017f: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 6f0182: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f0184: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f0187: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f0189: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 6f018c: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 6f018f: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f0191: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f0194: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f0196: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 6f0199: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 6f019c: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 6f019f: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6f01a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f01a3: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6f01a6: mov eax, esi */
  eax = esi;
/* 6f01a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f01a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f01d0(void) {
  LOAD_REGS();
L_6f01d0: /* 6f01d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f01d1: mov esi, ecx */
  esi = ecx;
/* 6f01d3: call 0x6cc9eb */
  esp -= 4; W32(esp, 0x6f01d8u); SPILL(); f_6cc9eb(); if (g_unwind) return; RELOAD();
/* 6f01d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f01dd: je 0x6f01eb */
  if (zf) goto L_6f01eb;
L_6f01df: /* 6f01df: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 6f01e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f01e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f01e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f01e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f01eb: /* 6f01eb: mov eax, esi */
  eax = esi;
/* 6f01ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f01ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f0210(void) {
  LOAD_REGS();
L_6f0210: /* 6f0210: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f0211: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f0215: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f0218: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0219: mov esi, ecx */
  esi = ecx;
/* 6f021b: je 0x6f024d */
  if (zf) goto L_6f024d;
L_6f021d: /* 6f021d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f0220: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0221: push 0x6cc9eb */
  { uint32_t v = 0x6cc9ebu; esp -= 4; W32(esp, v); }
/* 6f0226: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f0229: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f022a: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 6f022c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f022d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f0232u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f0232: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f0235: je 0x6f0245 */
  if (zf) goto L_6f0245;
L_6f0237: /* 6f0237: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f023d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f023f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f0241: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0242: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f0245u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f0245: /* 6f0245: mov eax, edi */
  eax = edi;
/* 6f0247: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f0248: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0249: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f024a: ret 4 */
  esp += 8; SPILL(); return;
L_6f024d: /* 6f024d: mov ecx, esi */
  ecx = esi;
/* 6f024f: call 0x6cc9eb */
  esp -= 4; W32(esp, 0x6f0254u); SPILL(); f_6cc9eb(); if (g_unwind) return; RELOAD();
/* 6f0254: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f0257: je 0x6f0265 */
  if (zf) goto L_6f0265;
L_6f0259: /* 6f0259: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 6f025b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f025c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f0262u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f0262: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f0265: /* 6f0265: mov eax, esi */
  eax = esi;
/* 6f0267: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0268: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f0269: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f0290(void) {
  LOAD_REGS();
L_6f0290: /* 6f0290: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0291: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0292: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0293: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0295: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 6f0299: mov esi, ecx */
  esi = ecx;
/* 6f029b: mov ecx, dword ptr [0xb7e528] */
  ecx = R32((uint32_t)(0xb7e528u));
/* 6f02a1: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6f02a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f02a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f02a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f02a7: mov ecx, esi */
  ecx = esi;
/* 6f02a9: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 6f02b1: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6f02b7u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6f02b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f02b8: mov ecx, esi */
  ecx = esi;
/* 6f02ba: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6f02bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f02bd: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f02c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f02c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f02c3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6f02c4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f02e0(void) {
  LOAD_REGS();
L_6f02e0: /* 6f02e0: mov eax, dword ptr [0xb7e524] */
  eax = R32((uint32_t)(0xb7e524u));
/* 6f02e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f02e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f02e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f02e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f02eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f02ed: mov esi, ecx */
  esi = ecx;
/* 6f02ef: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6f02f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f02f2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6f02f8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6f02f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f02f9: mov ecx, esi */
  ecx = esi;
/* 6f02fb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6f02feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f02fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f02ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0300: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0320(void) {
  LOAD_REGS();
L_6f0320: /* 6f0320: mov edx, dword ptr [0xb7e520] */
  edx = R32((uint32_t)(0xb7e520u));
/* 6f0326: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f032a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f032b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f032c: mov esi, ecx */
  esi = ecx;
/* 6f032e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6f0330: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0332: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6f0336: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0337: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0339: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f033a: mov ecx, esi */
  ecx = esi;
/* 6f033c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6f0340: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6f0346u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6f0346: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f0347: mov ecx, esi */
  ecx = esi;
/* 6f0349: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6f034cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f034c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f034d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f034e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f0370(void) {
  LOAD_REGS();
L_6f0370: /* 6f0370: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f0373: mov edx, dword ptr [0xb7e51c] */
  edx = R32((uint32_t)(0xb7e51cu));
/* 6f0379: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f037d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f037e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f037f: mov esi, ecx */
  esi = ecx;
/* 6f0381: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6f0383: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0385: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6f0389: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f038a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f038c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f038d: mov ecx, esi */
  ecx = esi;
/* 6f038f: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 6f0397: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6f039b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6f03a1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6f03a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f03a2: mov ecx, esi */
  ecx = esi;
/* 6f03a4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6f03a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f03a7: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f03ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f03ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f03ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f03b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f03e0(void) {
  LOAD_REGS();
L_6f03e0: /* 6f03e0: mov eax, dword ptr [0xb7e540] */
  eax = R32((uint32_t)(0xb7e540u));
/* 6f03e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f03e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f03e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f03e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f03eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f03ed: mov esi, ecx */
  esi = ecx;
/* 6f03ef: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6f03f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f03f2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6f03f8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6f03f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f03f9: mov ecx, esi */
  ecx = esi;
/* 6f03fb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6f03feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f03fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f03ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0400: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0420(void) {
  LOAD_REGS();
L_6f0420: /* 6f0420: mov eax, 0xb832e0 */
  eax = 0xb832e0u;
/* 6f0425: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0440(void) {
  LOAD_REGS();
L_6f0440: /* 6f0440: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f0445: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f0447: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f044b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f044f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0451: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0453: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0454: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f0458: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f045a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f045b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f045c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f045d: push 0xb832e0 */
  { uint32_t v = 0xb832e0u; esp -= 4; W32(esp, v); }
/* 6f0462: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f0468u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f0468: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f046b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0480(void) {
  LOAD_REGS();
L_6f0480: /* 6f0480: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f0484: ret  */
  esp += 4; SPILL(); return;
}

void f_6f04a0(void) {
  LOAD_REGS();
L_6f04a0: /* 6f04a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f04a2: push 0x9c0d48 */
  { uint32_t v = 0x9c0d48u; esp -= 4; W32(esp, v); }
/* 6f04a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f04ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f04ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f04b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f04b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f04b7: mov esi, ecx */
  esi = ecx;
/* 6f04b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f04bd: mov dword ptr [esi], 0x9f6670 */
  W32((uint32_t)(esi), 0x9f6670u);
/* 6f04c3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f04cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f04d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f04d1: mov ecx, esi */
  ecx = esi;
/* 6f04d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f04db: call 0x6cc9eb */
  esp -= 4; W32(esp, 0x6f04e0u); SPILL(); f_6cc9eb(); if (g_unwind) return; RELOAD();
/* 6f04e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f04e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f04e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f04ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f04ef: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0510(void) {
  LOAD_REGS();
L_6f0510: /* 6f0510: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f0512: push 0x9c0d68 */
  { uint32_t v = 0x9c0d68u; esp -= 4; W32(esp, v); }
/* 6f0517: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f051d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f051e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f0525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0526: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0527: mov esi, ecx */
  esi = ecx;
/* 6f0529: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f052d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f0533u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f0533: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6f0536: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f053e: mov dword ptr [esi], 0x9f6670 */
  W32((uint32_t)(esi), 0x9f6670u);
/* 6f0544: call dword ptr [0xcfa328] */
  esp -= 4; W32(esp, 0x6f054au); SPILL(); f_4e32ba(); if (g_unwind) return; /* Core!??0FScriptDelegate@@QAE@XZ */ RELOAD();
/* 6f054a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f054e: mov eax, esi */
  eax = esi;
/* 6f0550: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0551: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f0558: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f055b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0580(void) {
  LOAD_REGS();
L_6f0580: /* 6f0580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0581: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0582: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f0586: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0587: mov esi, ecx */
  esi = ecx;
/* 6f0589: call 0x6ca45c */
  esp -= 4; W32(esp, 0x6f058eu); SPILL(); f_6ca45c(); if (g_unwind) return; RELOAD();
/* 6f058e: mov dword ptr [esi], 0x9f6670 */
  W32((uint32_t)(esi), 0x9f6670u);
/* 6f0594: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 6f0597: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f0599: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 6f059c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f059e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6f05a1: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6f05a4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6f05a7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6f05aa: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 6f05ad: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 6f05b0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f05b2: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f05b5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f05b7: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6f05ba: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 6f05bd: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 6f05c0: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6f05c3: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6f05c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f05c7: mov eax, esi */
  eax = esi;
/* 6f05c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f05ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f05f0(void) {
  LOAD_REGS();
L_6f05f0: /* 6f05f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f05f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f05f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f05f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f05f7: mov esi, ecx */
  esi = ecx;
/* 6f05f9: call 0x6c78d8 */
  esp -= 4; W32(esp, 0x6f05feu); SPILL(); f_6c78d8(); if (g_unwind) return; RELOAD();
/* 6f05fe: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6f0601: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6f0604: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 6f0607: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 6f060a: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6f060d: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6f0610: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6f0613: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 6f0616: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f0618: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f061b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f061d: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 6f0620: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 6f0623: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 6f0626: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 6f0629: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f062a: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 6f062d: mov eax, esi */
  eax = esi;
/* 6f062f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0630: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f0660(void) {
  LOAD_REGS();
L_6f0660: /* 6f0660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0661: mov esi, ecx */
  esi = ecx;
/* 6f0663: call 0x6c5d99 */
  esp -= 4; W32(esp, 0x6f0668u); SPILL(); f_6c5d99(); if (g_unwind) return; RELOAD();
/* 6f0668: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f066d: je 0x6f067b */
  if (zf) goto L_6f067b;
L_6f066f: /* 6f066f: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6f0671: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0672: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f0678u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f0678: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f067b: /* 6f067b: mov eax, esi */
  eax = esi;
/* 6f067d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f067e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f06a0(void) {
  LOAD_REGS();
L_6f06a0: /* 6f06a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f06a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f06a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f06a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f06a9: mov esi, ecx */
  esi = ecx;
/* 6f06ab: je 0x6f06dd */
  if (zf) goto L_6f06dd;
L_6f06ad: /* 6f06ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f06b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f06b1: push 0x6c5d99 */
  { uint32_t v = 0x6c5d99u; esp -= 4; W32(esp, v); }
/* 6f06b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f06b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f06ba: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6f06bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f06bd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f06c2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f06c2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f06c5: je 0x6f06d5 */
  if (zf) goto L_6f06d5;
L_6f06c7: /* 6f06c7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f06cd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f06cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f06d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f06d2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f06d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f06d5: /* 6f06d5: mov eax, edi */
  eax = edi;
/* 6f06d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f06d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f06d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f06da: ret 4 */
  esp += 8; SPILL(); return;
L_6f06dd: /* 6f06dd: mov ecx, esi */
  ecx = esi;
/* 6f06df: call 0x6c5d99 */
  esp -= 4; W32(esp, 0x6f06e4u); SPILL(); f_6c5d99(); if (g_unwind) return; RELOAD();
/* 6f06e4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f06e7: je 0x6f06f5 */
  if (zf) goto L_6f06f5;
L_6f06e9: /* 6f06e9: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6f06eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f06ec: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f06f2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f06f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f06f5: /* 6f06f5: mov eax, esi */
  eax = esi;
/* 6f06f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f06f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f06f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f0720(void) {
  LOAD_REGS();
L_6f0720: /* 6f0720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0721: mov esi, ecx */
  esi = ecx;
/* 6f0723: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6f0729u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6f0729: mov eax, esi */
  eax = esi;
/* 6f072b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f072c: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0740(void) {
  LOAD_REGS();
L_6f0740: /* 6f0740: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6f0760(void) {
  LOAD_REGS();
L_6f0760: /* 6f0760: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f0762: push 0x9c0d95 */
  { uint32_t v = 0x9c0d95u; esp -= 4; W32(esp, v); }
/* 6f0767: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f076d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f076e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f0775: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0776: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0777: mov esi, ecx */
  esi = ecx;
/* 6f0779: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f077d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6f0783u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6f0783: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6f0786: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f078e: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6f0794u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6f0794: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 6f0797: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6f079c: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6f07a2u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6f07a2: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f07a6: mov eax, esi */
  eax = esi;
/* 6f07a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f07a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f07b0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f07b3: ret  */
  esp += 4; SPILL(); return;
}

void f_6f07e0(void) {
  LOAD_REGS();
L_6f07e0: /* 6f07e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f07e2: push 0x9c0dc5 */
  { uint32_t v = 0x9c0dc5u; esp -= 4; W32(esp, v); }
/* 6f07e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f07ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f07ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f07f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f07f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f07f7: mov esi, ecx */
  esi = ecx;
/* 6f07f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f07fd: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 6f0800: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6f0808: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6f080eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6f080e: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6f0811: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6f0816: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6f081cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6f081c: mov ecx, esi */
  ecx = esi;
/* 6f081e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f0826: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6f082cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6f082c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f0830: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0831: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f0838: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f083b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0860(void) {
  LOAD_REGS();
L_6f0860: /* 6f0860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f0862: push 0x9c0df5 */
  { uint32_t v = 0x9c0df5u; esp -= 4; W32(esp, v); }
/* 6f0867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f086d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f086e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f0875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0876: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0877: mov esi, ecx */
  esi = ecx;
/* 6f0879: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f087d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6f0883u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6f0883: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6f0886: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f088e: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6f0894u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6f0894: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 6f0897: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6f089c: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6f08a2u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6f08a2: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f08a6: mov eax, esi */
  eax = esi;
/* 6f08a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f08a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f08b0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f08b3: ret  */
  esp += 4; SPILL(); return;
}

void f_6f08e0(void) {
  LOAD_REGS();
L_6f08e0: /* 6f08e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f08e2: push 0x9c0e25 */
  { uint32_t v = 0x9c0e25u; esp -= 4; W32(esp, v); }
/* 6f08e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f08ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f08ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f08f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f08f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f08f7: mov esi, ecx */
  esi = ecx;
/* 6f08f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f08fd: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 6f0900: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6f0908: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6f090eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6f090e: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6f0911: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6f0916: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6f091cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6f091c: mov ecx, esi */
  ecx = esi;
/* 6f091e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f0926: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6f092cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6f092c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f0930: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0931: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f0938: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f093b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0960(void) {
  LOAD_REGS();
L_6f0960: /* 6f0960: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0961: mov esi, ecx */
  esi = ecx;
/* 6f0963: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6f0969u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6f0969: mov eax, esi */
  eax = esi;
/* 6f096b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f096c: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0980(void) {
  LOAD_REGS();
L_6f0980: /* 6f0980: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6f09a0(void) {
  LOAD_REGS();
L_6f09a0: /* 6f09a0: mov eax, dword ptr [0xb7e360] */
  eax = R32((uint32_t)(0xb7e360u));
/* 6f09a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f09a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f09a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f09a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f09ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f09ad: mov esi, ecx */
  esi = ecx;
/* 6f09af: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6f09b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f09b2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6f09b8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6f09b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f09b9: mov ecx, esi */
  ecx = esi;
/* 6f09bb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6f09beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f09be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f09bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f09c0: ret  */
  esp += 4; SPILL(); return;
}

void f_6f09e0(void) {
  LOAD_REGS();
L_6f09e0: /* 6f09e0: mov eax, dword ptr [0xb7e544] */
  eax = R32((uint32_t)(0xb7e544u));
/* 6f09e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f09e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f09e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f09e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f09eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f09ed: mov esi, ecx */
  esi = ecx;
/* 6f09ef: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6f09f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f09f2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6f09f8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6f09f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f09f9: mov ecx, esi */
  ecx = esi;
/* 6f09fb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6f09feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f09fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f09ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0a00: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0a20(void) {
  LOAD_REGS();
L_6f0a20: /* 6f0a20: mov eax, 0xb82db0 */
  eax = 0xb82db0u;
/* 6f0a25: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0a40(void) {
  LOAD_REGS();
L_6f0a40: /* 6f0a40: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f0a45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f0a47: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f0a4b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f0a4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0a51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0a53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0a54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f0a58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0a5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f0a5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f0a5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0a5d: push 0xb82db0 */
  { uint32_t v = 0xb82db0u; esp -= 4; W32(esp, v); }
/* 6f0a62: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f0a68u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f0a68: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f0a6b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0a80(void) {
  LOAD_REGS();
L_6f0a80: /* 6f0a80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f0a84: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0aa0(void) {
  LOAD_REGS();
L_6f0aa0: /* 6f0aa0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f0aa2: push 0x9c0e6b */
  { uint32_t v = 0x9c0e6bu; esp -= 4; W32(esp, v); }
/* 6f0aa7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f0aad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f0aae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f0ab5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0ab6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0ab7: mov esi, ecx */
  esi = ecx;
/* 6f0ab9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f0abd: mov dword ptr [esi], 0x9f6710 */
  W32((uint32_t)(esi), 0x9f6710u);
/* 6f0ac3: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 6f0acb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f0ad1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f0ad1: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 6f0ad6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f0ad7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 6f0ad9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 6f0adb: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 6f0ade: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0adf: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 6f0ae4: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f0ae9u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f0ae9: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6f0aec: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6f0af1: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x6f0af7u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f0af7: mov ecx, esi */
  ecx = esi;
/* 6f0af9: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f0b01: call 0x6cc9eb */
  esp -= 4; W32(esp, 0x6f0b06u); SPILL(); f_6cc9eb(); if (g_unwind) return; RELOAD();
/* 6f0b06: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f0b0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0b0b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f0b12: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f0b15: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0b40(void) {
  LOAD_REGS();
L_6f0b40: /* 6f0b40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f0b42: push 0x9c0ea4 */
  { uint32_t v = 0x9c0ea4u; esp -= 4; W32(esp, v); }
/* 6f0b47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f0b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f0b4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f0b55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0b56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0b57: mov esi, ecx */
  esi = ecx;
/* 6f0b59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f0b5d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f0b63u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f0b63: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6f0b66: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f0b6e: mov dword ptr [esi], 0x9f6710 */
  W32((uint32_t)(esi), 0x9f6710u);
/* 6f0b74: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6f0b7au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f0b7a: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 6f0b7f: mov ecx, dword ptr [0xcfa300] */
  ecx = R32((uint32_t)(0xcfa300u));
/* 6f0b85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f0b86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0b87: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 6f0b89: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 6f0b8b: lea edx, [esi + 0x50] */
  edx = (uint32_t)(esi + 0x50u);
/* 6f0b8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f0b8f: mov byte ptr [esp + 0x24], 1 */
  W8((uint32_t)(esp + 0x24u), 0x1u);
/* 6f0b94: call 0x99cafe */
  esp -= 4; W32(esp, 0x6f0b99u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 6f0b99: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f0b9d: mov eax, esi */
  eax = esi;
/* 6f0b9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0ba0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f0ba7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f0baa: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0bd0(void) {
  LOAD_REGS();
L_6f0bd0: /* 6f0bd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f0bd2: push 0x9c0ed4 */
  { uint32_t v = 0x9c0ed4u; esp -= 4; W32(esp, v); }
/* 6f0bd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f0bdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f0bde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f0be5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0be6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0be7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0be8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 6f0bec: mov esi, ecx */
  esi = ecx;
/* 6f0bee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0bef: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 6f0bf3: call 0x6ca45c */
  esp -= 4; W32(esp, 0x6f0bf8u); SPILL(); f_6ca45c(); if (g_unwind) return; RELOAD();
/* 6f0bf8: mov dword ptr [esi], 0x9f6710 */
  W32((uint32_t)(esi), 0x9f6710u);
/* 6f0bfe: mov al, byte ptr [edi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6f0c01: mov byte ptr [esi + 0x34], al */
  W8((uint32_t)(esi + 0x34u), (eax & 0xffu));
/* 6f0c04: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 6f0c07: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 6f0c0a: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6f0c0d: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* 6f0c10: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6f0c13: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6f0c16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0c17: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6f0c1a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 6f0c22: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6f0c25: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x6f0c2bu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 6f0c2b: mov edx, dword ptr [0xcfa304] */
  edx = R32((uint32_t)(0xcfa304u));
/* 6f0c31: mov eax, dword ptr [0xcfa308] */
  eax = R32((uint32_t)(0xcfa308u));
/* 6f0c36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f0c37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f0c38: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 6f0c3a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 6f0c3c: lea ecx, [edi + 0x50] */
  ecx = (uint32_t)(edi + 0x50u);
/* 6f0c3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0c40: lea edx, [esi + 0x50] */
  edx = (uint32_t)(esi + 0x50u);
/* 6f0c43: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f0c44: mov byte ptr [esp + 0x2c], 1 */
  W8((uint32_t)(esp + 0x2cu), 0x1u);
/* 6f0c49: call 0x99cb60 */
  esp -= 4; W32(esp, 0x6f0c4eu); SPILL(); f_99cb60(); if (g_unwind) return; RELOAD();
/* 6f0c4e: mov ecx, dword ptr [edi + 0x110] */
  ecx = R32((uint32_t)(edi + 0x110u));
/* 6f0c54: mov eax, dword ptr [esi + 0x110] */
  eax = R32((uint32_t)(esi + 0x110u));
/* 6f0c5a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f0c5c: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* 6f0c62: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f0c65: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f0c67: mov dword ptr [esi + 0x110], ecx */
  W32((uint32_t)(esi + 0x110u), ecx);
/* 6f0c6d: mov eax, ecx */
  eax = ecx;
/* 6f0c6f: mov ecx, dword ptr [edi + 0x110] */
  ecx = R32((uint32_t)(edi + 0x110u));
/* 6f0c75: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f0c77: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f0c7a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f0c7c: mov dword ptr [esi + 0x110], ecx */
  W32((uint32_t)(esi + 0x110u), ecx);
/* 6f0c82: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6f0c86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f0c87: mov eax, esi */
  eax = esi;
/* 6f0c89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0c8a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f0c91: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f0c94: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f0ce0(void) {
  LOAD_REGS();
L_6f0ce0: /* 6f0ce0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f0ce1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f0ce2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0ce3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0ce4: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 6f0ce8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0ce9: mov esi, ecx */
  esi = ecx;
/* 6f0ceb: call 0x6c78d8 */
  esp -= 4; W32(esp, 0x6f0cf0u); SPILL(); f_6c78d8(); if (g_unwind) return; RELOAD();
/* 6f0cf0: mov al, byte ptr [edi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6f0cf3: mov byte ptr [esi + 0x34], al */
  W8((uint32_t)(esi + 0x34u), (eax & 0xffu));
/* 6f0cf6: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 6f0cf9: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 6f0cfc: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6f0cff: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* 6f0d02: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6f0d05: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6f0d08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0d09: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6f0d0c: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6f0d0f: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6f0d15u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6f0d15: mov ebp, edi */
  ebp = edi;
/* 6f0d17: lea ebx, [esi + 0x50] */
  ebx = (uint32_t)(esi + 0x50u);
/* 6f0d1a: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 6f0d1c: mov dword ptr [esp + 0x14], 0x10 */
  W32((uint32_t)(esp + 0x14u), 0x10u);
L_6f0d24: /* 6f0d24: lea edx, [ebx + ebp] */
  edx = (uint32_t)(ebx + ebp);
/* 6f0d27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f0d28: mov ecx, ebx */
  ecx = ebx;
/* 6f0d2a: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6f0d30u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6f0d30: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 6f0d34: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 6f0d37: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 6f0d38: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 6f0d3c: jne 0x6f0d24 */
  if (!zf) goto L_6f0d24;
L_6f0d3e: /* 6f0d3e: mov eax, dword ptr [esi + 0x110] */
  eax = R32((uint32_t)(esi + 0x110u));
/* 6f0d44: mov edx, dword ptr [edi + 0x110] */
  edx = R32((uint32_t)(edi + 0x110u));
/* 6f0d4a: mov ebp, dword ptr [esi + 0x110] */
  ebp = R32((uint32_t)(esi + 0x110u));
/* 6f0d50: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f0d52: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f0d55: xor ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 6f0d57: mov dword ptr [esi + 0x110], ebp */
  W32((uint32_t)(esi + 0x110u), ebp);
/* 6f0d5d: mov ecx, dword ptr [edi + 0x110] */
  ecx = R32((uint32_t)(edi + 0x110u));
/* 6f0d63: mov eax, ebp */
  eax = ebp;
/* 6f0d65: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f0d67: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f0d6a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f0d6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f0d6d: mov dword ptr [esi + 0x110], ecx */
  W32((uint32_t)(esi + 0x110u), ecx);
/* 6f0d73: mov eax, esi */
  eax = esi;
/* 6f0d75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0d76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6f0d77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f0d78: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f0db0(void) {
  LOAD_REGS();
L_6f0db0: /* 6f0db0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0db1: mov esi, ecx */
  esi = ecx;
/* 6f0db3: call 0x6cc4dc */
  esp -= 4; W32(esp, 0x6f0db8u); SPILL(); f_6cc4dc(); if (g_unwind) return; RELOAD();
/* 6f0db8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f0dbd: je 0x6f0dce */
  if (zf) goto L_6f0dce;
L_6f0dbf: /* 6f0dbf: push 0x114 */
  { uint32_t v = 0x114u; esp -= 4; W32(esp, v); }
/* 6f0dc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0dc5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f0dcbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f0dcb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f0dce: /* 6f0dce: mov eax, esi */
  eax = esi;
/* 6f0dd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0dd1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f0df0(void) {
  LOAD_REGS();
L_6f0df0: /* 6f0df0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f0df1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f0df5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f0df8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0df9: mov esi, ecx */
  esi = ecx;
/* 6f0dfb: je 0x6f0e30 */
  if (zf) goto L_6f0e30;
L_6f0dfd: /* 6f0dfd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f0e00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0e01: push 0x6cc4dc */
  { uint32_t v = 0x6cc4dcu; esp -= 4; W32(esp, v); }
/* 6f0e06: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f0e09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f0e0a: push 0x114 */
  { uint32_t v = 0x114u; esp -= 4; W32(esp, v); }
/* 6f0e0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0e10: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f0e15u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f0e15: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f0e18: je 0x6f0e28 */
  if (zf) goto L_6f0e28;
L_6f0e1a: /* 6f0e1a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f0e20: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f0e22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f0e24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0e25: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f0e28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f0e28: /* 6f0e28: mov eax, edi */
  eax = edi;
/* 6f0e2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f0e2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0e2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f0e2d: ret 4 */
  esp += 8; SPILL(); return;
L_6f0e30: /* 6f0e30: mov ecx, esi */
  ecx = esi;
/* 6f0e32: call 0x6cc4dc */
  esp -= 4; W32(esp, 0x6f0e37u); SPILL(); f_6cc4dc(); if (g_unwind) return; RELOAD();
/* 6f0e37: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f0e3a: je 0x6f0e4b */
  if (zf) goto L_6f0e4b;
L_6f0e3c: /* 6f0e3c: push 0x114 */
  { uint32_t v = 0x114u; esp -= 4; W32(esp, v); }
/* 6f0e41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0e42: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f0e48u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f0e48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f0e4b: /* 6f0e4b: mov eax, esi */
  eax = esi;
/* 6f0e4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0e4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f0e4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f0e80(void) {
  LOAD_REGS();
L_6f0e80: /* 6f0e80: mov edx, dword ptr [0xb7e288] */
  edx = R32((uint32_t)(0xb7e288u));
/* 6f0e86: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f0e8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0e8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f0e8c: mov esi, ecx */
  esi = ecx;
/* 6f0e8e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6f0e90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0e92: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6f0e96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0e97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0e99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f0e9a: mov ecx, esi */
  ecx = esi;
/* 6f0e9c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6f0ea0: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6f0ea6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6f0ea6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f0ea7: mov ecx, esi */
  ecx = esi;
/* 6f0ea9: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6f0eacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f0eac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f0ead: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0eae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f0ed0(void) {
  LOAD_REGS();
L_6f0ed0: /* 6f0ed0: mov eax, 0xb7ca70 */
  eax = 0xb7ca70u;
/* 6f0ed5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0ef0(void) {
  LOAD_REGS();
L_6f0ef0: /* 6f0ef0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f0ef5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f0ef7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f0efb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f0eff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0f01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0f03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0f04: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f0f08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f0f0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f0f0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f0f0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0f0d: push 0xb7ca70 */
  { uint32_t v = 0xb7ca70u; esp -= 4; W32(esp, v); }
/* 6f0f12: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f0f18u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f0f18: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f0f1b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0f30(void) {
  LOAD_REGS();
L_6f0f30: /* 6f0f30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f0f34: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0f50(void) {
  LOAD_REGS();
L_6f0f50: /* 6f0f50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f0f52: push 0x9c0ef9 */
  { uint32_t v = 0x9c0ef9u; esp -= 4; W32(esp, v); }
/* 6f0f57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f0f5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f0f5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f0f65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f0f66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0f67: mov esi, ecx */
  esi = ecx;
/* 6f0f69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f0f6d: mov dword ptr [esi], 0x9f67b0 */
  W32((uint32_t)(esi), 0x9f67b0u);
/* 6f0f73: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f0f7b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f0f81u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f0f81: mov ecx, esi */
  ecx = esi;
/* 6f0f83: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f0f8b: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6f0f91u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6f0f91: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f0f95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0f96: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f0f9d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f0fa0: ret  */
  esp += 4; SPILL(); return;
}

void f_6f0fd0(void) {
  LOAD_REGS();
L_6f0fd0: /* 6f0fd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f0fd1: mov esi, ecx */
  esi = ecx;
/* 6f0fd3: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f0fd9u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f0fd9: mov dword ptr [esi], 0x9f67b0 */
  W32((uint32_t)(esi), 0x9f67b0u);
/* 6f0fdf: mov eax, esi */
  eax = esi;
/* 6f0fe1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f0fe2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f1000(void) {
  LOAD_REGS();
L_6f1000: /* 6f1000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1001: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1002: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f1006: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1007: mov esi, ecx */
  esi = ecx;
/* 6f1009: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6f100fu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6f100f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 6f1012: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6f1015: mov dword ptr [esi], 0x9f67b0 */
  W32((uint32_t)(esi), 0x9f67b0u);
/* 6f101b: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f101e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1020: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f1023: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1025: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 6f1028: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f102b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6f102e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f1031: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6f1034: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f1037: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1039: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6f103c: mov ecx, eax */
  ecx = eax;
/* 6f103e: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 6f1041: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1043: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f1046: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1048: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6f104b: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6f104e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1050: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f1053: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1055: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6f1058: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 6f105b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f105d: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f1060: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1062: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6f1065: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6f1068: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f106a: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f106d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f106f: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6f1072: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 6f1075: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1077: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f107a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f107c: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6f107f: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6f1082: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1084: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f1087: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1089: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6f108c: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 6f108f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1091: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f1096: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1098: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6f109b: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6f109e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f10a0: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f10a6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f10a8: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6f10ab: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6f10ae: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6f10b1: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6f10b4: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6f10b7: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 6f10ba: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 6f10bd: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6f10c0: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6f10c3: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 6f10c6: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6f10c9: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 6f10cc: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6f10cf: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 6f10d2: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 6f10d5: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6f10d8: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6f10db: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6f10de: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6f10e1: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 6f10e4: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 6f10e7: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 6f10ea: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 6f10ed: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 6f10f0: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 6f10f3: mov edx, dword ptr [edi + 0x64] */
  edx = R32((uint32_t)(edi + 0x64u));
/* 6f10f6: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 6f10f9: lea eax, [edi + 0x68] */
  eax = (uint32_t)(edi + 0x68u);
/* 6f10fc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f10fe: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* 6f1101: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f1103: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6f1106: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6f1109: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 6f110c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6f110f: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 6f1112: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 6f1115: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* 6f1118: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* 6f111b: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* 6f111e: mov dword ptr [esi + 0x7c], edx */
  W32((uint32_t)(esi + 0x7cu), edx);
/* 6f1121: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 6f1127: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 6f112d: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 6f1133: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f1134: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 6f113a: mov eax, esi */
  eax = esi;
/* 6f113c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f113d: ret 4 */
  esp += 8; SPILL(); return;
}
