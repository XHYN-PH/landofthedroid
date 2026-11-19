#include "recomp.h"
#include "rec_mod.h"

void f_7e898c(void) {
  LOAD_REGS();
L_7e898c: /* 7e898c: mov ecx, dword ptr [ebp - 0x1e8] */
  ecx = R32((uint32_t)(ebp + 0xfffffe18u));
/* 7e8992: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e8997: lea edx, [ebp - 0xfc] */
  edx = (uint32_t)(ebp + 0xffffff04u);
/* 7e899d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e899e: mov dword ptr [ebp - 0xfc], ecx */
  W32((uint32_t)(ebp + 0xffffff04u), ecx);
/* 7e89a4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e89a9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e89a9(); return;
}

void f_7e89a9(void) {
  LOAD_REGS();
L_7e89a9: /* 7e89a9: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7e89af: push 0xa10ce4 */
  { uint32_t v = 0xa10ce4u; esp -= 4; W32(esp, v); }
/* 7e89b4: push 0xade3d8 */
  { uint32_t v = 0xade3d8u; esp -= 4; W32(esp, v); }
/* 7e89b9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7e89bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e89bb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e89be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e89c1: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7e89c7u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7e89c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e89c8: push 0xade3e0 */
  { uint32_t v = 0xade3e0u; esp -= 4; W32(esp, v); }
/* 7e89cd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7e89cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e89cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e89d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e89d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e89d6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e89dbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e89db: guest_badaddr(0x7e89db); return;
}

void f_7e8ef0(void) {
  LOAD_REGS();
L_7e8ef0: /* 7e8ef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e8ef1: mov ebp, esp */
  ebp = esp;
/* 7e8ef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e8ef5: push 0x9d1078 */
  { uint32_t v = 0x9d1078u; esp -= 4; W32(esp, v); }
/* 7e8efa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e8f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8f01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e8f08: sub esp, 0x178 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x178u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8f0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e8f0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8f10: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7e8f13: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8f16: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8f18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8f19: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e8f1c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e8f23: jne 0x7e8f40 */
  if (!zf) goto L_7e8f40;
L_7e8f25: /* 7e8f25: push 0x56c */
  { uint32_t v = 0x56cu; esp -= 4; W32(esp, v); }
/* 7e8f2a: push 0xade3e8 */
  { uint32_t v = 0xade3e8u; esp -= 4; W32(esp, v); }
/* 7e8f2f: push 0xade3f8 */
  { uint32_t v = 0xade3f8u; esp -= 4; W32(esp, v); }
/* 7e8f34: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e8f3au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e8f3a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8f3d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e8f40: /* 7e8f40: test byte ptr [ecx + 0x88], 0x1a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x1au);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8f47: jne 0x7e8f59 */
  if (!zf) goto L_7e8f59;
L_7e8f49: /* 7e8f49: call 0x6c4773 */
  esp -= 4; W32(esp, 0x7e8f4eu); SPILL(); f_6c4773(); if (g_unwind) return; RELOAD();
/* 7e8f4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8f50: je 0x7e9743 */
  if (zf) goto L_7e9743;
L_7e8f56: /* 7e8f56: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e8f59: /* 7e8f59: mov dl, byte ptr [ecx + 0x88] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x88u))) & 0xffu);
/* 7e8f5f: mov al, 2 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 7e8f61: test al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8f63: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 7e8f66: je 0x7e9089 */
  if (zf) goto L_7e9089;
L_7e8f6c: /* 7e8f6c: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 7e8f6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8f71: je 0x7e8f82 */
  if (zf) goto L_7e8f82;
L_7e8f73: /* 7e8f73: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e8f75: call dword ptr [eax + 0x178] */
  { uint32_t t = R32((uint32_t)(eax + 0x178u)); esp -= 4; W32(esp, 0x7e8f7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8f7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8f7d: jne 0x7e8fa4 */
  if (!zf) goto L_7e8fa4;
L_7e8f7f: /* 7e8f7f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e8f82: /* 7e8f82: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7e8f85: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8f87: je 0x7e8fa7 */
  if (zf) goto L_7e8fa7;
L_7e8f89: /* 7e8f89: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8f8b: jne 0x7e9089 */
  if (!zf) goto L_7e9089;
L_7e8f91: /* 7e8f91: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 7e8f96: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e8f9cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e8f9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8f9e: jne 0x7e9089 */
  if (!zf) goto L_7e9089;
L_7e8fa4: /* 7e8fa4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e8fa7: /* 7e8fa7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8fa9: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* 7e8faf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8fb0: call dword ptr [edx + 0xbc] */
  { uint32_t t = R32((uint32_t)(edx + 0xbcu)); esp -= 4; W32(esp, 0x7e8fb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8fb6: mov esi, eax */
  esi = eax;
/* 7e8fb8: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e8fbd: lea edi, [ebp - 0x184] */
  edi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e8fc3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e8fc5: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 7e8fcb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e8fd1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e8fd1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8fd4: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e8fda: mov edx, eax */
  edx = eax;
/* 7e8fdc: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7e8fde: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 7e8fe1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e8fe4: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8fea: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 7e8fed: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8fef: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7e8ff2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e8ff5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e8ff8: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e8ffb: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e8ffe: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7e9000: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7e9003: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e9006: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e9009: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7e900c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7e900f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e9012: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7e9015: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e901a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e901c: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 7e901f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e9022: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 7e9025: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e9028: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e902b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e902d: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* 7e9033: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e9034: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 7e9037: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x7e903du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e903d: mov esi, eax */
  esi = eax;
/* 7e903f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e9044: lea edi, [ebp - 0x144] */
  edi = (uint32_t)(ebp + 0xfffffebcu);
/* 7e904a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e904c: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 7e9052: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e9058u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e9058: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e905b: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7e905e: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e9061: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e9067: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7e9069: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e906c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e906f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e9072: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e9075: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e9078: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e907e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e9080: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e9083: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e9086: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7e9089: /* 7e9089: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7e908e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e908f: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7e9092: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7e9098u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7e9098: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e909b: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 7e90a1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e90a3: je 0x7e90ec */
  if (zf) goto L_7e90ec;
L_7e90a5: /* 7e90a5: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 7e90a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e90aa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e90ac: push 0x9f */
  { uint32_t v = 0x9fu; esp -= 4; W32(esp, v); }
/* 7e90b1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e90b4: mov eax, esp */
  eax = esp;
/* 7e90b6: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e90b8: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7e90bb: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e90be: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7e90c1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e90c4: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7e90c7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e90ca: mov eax, esp */
  eax = esp;
/* 7e90cc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e90ce: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7e90d1: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e90d4: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7e90d7: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e90da: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e90dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e90de: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7e90e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e90e4: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x7e90e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e90e7: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7e90ea: jmp 0x7e90f3 */
  goto L_7e90f3;
L_7e90ec: /* 7e90ec: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
L_7e90f3: /* 7e90f3: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e90f6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e90f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e9100: /* 7e9100: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9102: je 0x7e9626 */
  if (zf) goto L_7e9626;
L_7e9108: /* 7e9108: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7e910b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e910d: je 0x7e95ce */
  if (zf) goto L_7e95ce;
L_7e9113: /* 7e9113: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e9116: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 7e9119: cmp ecx, dword ptr [edx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e911b: je 0x7e95ce */
  if (zf) goto L_7e95ce;
L_7e9121: /* 7e9121: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e9122: call 0x6c2626 */
  esp -= 4; W32(esp, 0x7e9127u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 7e9127: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9129: jne 0x7e95cb */
  if (!zf) goto L_7e95cb;
L_7e912f: /* 7e912f: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7e9132: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e9135: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e9136: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e913bu); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e913b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e913d: je 0x7e95cb */
  if (zf) goto L_7e95cb;
L_7e9143: /* 7e9143: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e9146: call 0x6c4773 */
  esp -= 4; W32(esp, 0x7e914bu); SPILL(); f_6c4773(); if (g_unwind) return; RELOAD();
/* 7e914b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e914d: je 0x7e95d5 */
  if (zf) goto L_7e95d5;
L_7e9153: /* 7e9153: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7e9156: call 0x6c4773 */
  esp -= 4; W32(esp, 0x7e915bu); SPILL(); f_6c4773(); if (g_unwind) return; RELOAD();
/* 7e915b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e915d: jne 0x7e95d5 */
  if (!zf) goto L_7e95d5;
L_7e9163: /* 7e9163: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e9166: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e9169: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7e916f: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e9174: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e9175: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 7e9178: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 7e917b: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7e917e: fsub dword ptr [eax - 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff8u)));
/* 7e9181: fst dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0);
/* 7e9184: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7e9187: fsub dword ptr [eax - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff4u)));
/* 7e918a: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e918d: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e9190: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e9193: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e9199u); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e9199: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e919b: je 0x7e93a5 */
  if (zf) goto L_7e93a5;
L_7e91a1: /* 7e91a1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7e91a4: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 7e91aa: mov ecx, dword ptr [eax + 0x170] */
  ecx = R32((uint32_t)(eax + 0x170u));
/* 7e91b0: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7e91b6: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e91bb: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7e91be: lea edx, [ebp - 0x84] */
  edx = (uint32_t)(ebp + 0xffffff7cu);
/* 7e91c4: lea eax, [ebp - 0x184] */
  eax = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e91ca: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7e91cd: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 7e91d3: mov dword ptr [ebp - 0x78], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x3f800000u);
/* 7e91da: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7e91dd: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e91e0: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e91e3: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e91e6: lea edi, [ebp - 0xa4] */
  edi = (uint32_t)(ebp + 0xffffff5cu);
/* 7e91ec: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e91ee: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7e91f0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e91f2: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7e91f5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e91f7: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7e91fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e91fc: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7e91ff: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e9202: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7e9205: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e9208: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7e920b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e920e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7e9211: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e9214: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7e9217: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e9219: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7e921b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e921d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e921f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e9221: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e9224: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7e9227: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e922a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7e922d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e9230: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7e9233: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e9236: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7e9239: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e923b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7e923d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e923f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e9241: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e9243: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e9246: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7e9249: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e924c: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7e924f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e9252: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7e9255: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e9258: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7e925b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e925d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7e925f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e9261: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e9263: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e9265: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e9267: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e9269: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e926b: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7e926e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7e9271: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7e9274: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 7e927a: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 7e9280: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 7e9286: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7e928c: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 7e9292: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 7e9298: lea edx, [ebp - 0x144] */
  edx = (uint32_t)(ebp + 0xfffffebcu);
/* 7e929e: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 7e92a4: mov dword ptr [ebp - 0x88], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x3f800000u);
/* 7e92ae: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7e92b1: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7e92b4: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e92b7: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e92ba: lea edi, [ebp - 0xb4] */
  edi = (uint32_t)(ebp + 0xffffff4cu);
/* 7e92c0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e92c2: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7e92c4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e92c6: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7e92c9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e92cb: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7e92ce: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e92d0: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7e92d3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e92d6: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7e92d9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e92dc: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7e92df: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e92e2: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7e92e5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e92e8: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7e92eb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e92ed: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7e92ef: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e92f1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e92f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e92f5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e92f8: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7e92fb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e92fe: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7e9301: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e9304: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7e9307: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e930a: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7e930d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e930f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7e9311: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e9313: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e9315: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e9317: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e931a: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7e931d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e9320: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7e9323: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e9326: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7e9329: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7e932c: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7e932f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e9331: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7e9333: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e9335: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7e9337: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e9339: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7e933b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e933d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e933f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7e9342: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7e9345: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7e9348: fld dword ptr [ebp - 0xac] */
  { double v = F32((uint32_t)(ebp + 0xffffff54u)); FPUSH(v); }
/* 7e934e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7e9351: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7e9357: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e935c: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 7e9362: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7e9365: fld dword ptr [ebp - 0xb4] */
  { double v = F32((uint32_t)(ebp + 0xffffff4cu)); FPUSH(v); }
/* 7e936b: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7e936d: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 7e9373: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e9375: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 7e937b: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7e937e: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 7e9384: fld dword ptr [ebp - 0x104] */
  { double v = F32((uint32_t)(ebp + 0xfffffefcu)); FPUSH(v); }
/* 7e938a: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 7e9390: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7e9393: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e9396: fadd dword ptr [ebp - 0x74] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 7e9399: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e939c: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7e939f: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e93a2: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_7e93a5: /* 7e93a5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e93a8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e93ab: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e93ae: mov eax, esp */
  eax = esp;
/* 7e93b0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e93b2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e93b5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e93b8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e93bb: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7e93be: call 0x6c5321 */
  esp -= 4; W32(esp, 0x7e93c3u); SPILL(); f_6c5321(); if (g_unwind) return; RELOAD();
/* 7e93c3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e93c6: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e93cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e93cd: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7e93d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e93d1: call 0x6c3adf */
  esp -= 4; W32(esp, 0x7e93d6u); SPILL(); f_6c3adf(); if (g_unwind) return; RELOAD();
/* 7e93d6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e93d9: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e93df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e93e0: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 7e93e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e93e4: call 0x6c53c1 */
  esp -= 4; W32(esp, 0x7e93e9u); SPILL(); f_6c53c1(); if (g_unwind) return; RELOAD();
/* 7e93e9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e93ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e93ee: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7e93f3: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7e93f9: call 0x6c6a46 */
  esp -= 4; W32(esp, 0x7e93feu); SPILL(); f_6c6a46(); if (g_unwind) return; RELOAD();
/* 7e93fe: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7e9401: call 0x6c4a0c */
  esp -= 4; W32(esp, 0x7e9406u); SPILL(); f_6c4a0c(); if (g_unwind) return; RELOAD();
/* 7e9406: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9408: je 0x7e946b */
  if (zf) goto L_7e946b;
L_7e940a: /* 7e940a: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7e940d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e940f: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e9415u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e9415: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e9418: mov ecx, dword ptr [edx + 0x2d4] */
  ecx = R32((uint32_t)(edx + 0x2d4u));
/* 7e941e: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 7e9424: fld dword ptr [edx + 0x2d4] */
  { double v = F32((uint32_t)(edx + 0x2d4u)); FPUSH(v); }
/* 7e942a: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 7e942d: mov edi, dword ptr [ebp - 0x54] */
  edi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e9430: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 7e9433: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9435: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9438: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7e943b: mov ecx, esp */
  ecx = esp;
/* 7e943d: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e943f: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7e9442: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e9445: mov edi, dword ptr [ebp - 0x4c] */
  edi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7e9448: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e944b: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e9451: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e9453: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9456: mov ecx, esp */
  ecx = esp;
/* 7e9458: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e945a: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7e945d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e9460: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e9463: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e9466: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7e9469: jmp 0x7e94ca */
  goto L_7e94ca;
L_7e946b: /* 7e946b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e946e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e9470: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x7e9476u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e9476: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 7e9479: mov ecx, dword ptr [edx + 0x2d4] */
  ecx = R32((uint32_t)(edx + 0x2d4u));
/* 7e947f: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 7e9485: fld dword ptr [edx + 0x2d4] */
  { double v = F32((uint32_t)(edx + 0x2d4u)); FPUSH(v); }
/* 7e948b: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 7e948e: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e9491: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e9494: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9496: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9499: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e949c: mov ecx, esp */
  ecx = esp;
/* 7e949e: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e94a0: mov edi, dword ptr [ebp - 0x5c] */
  edi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7e94a3: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e94a6: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7e94a9: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e94ac: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e94b2: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e94b4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e94b7: mov ecx, esp */
  ecx = esp;
/* 7e94b9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e94bb: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7e94be: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e94c1: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e94c4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e94c7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e94ca: /* 7e94ca: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e94cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e94cd: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 7e94d3: mov ecx, eax */
  ecx = eax;
/* 7e94d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e94d6: call dword ptr [esi + 0x68] */
  { uint32_t t = R32((uint32_t)(esi + 0x68u)); esp -= 4; W32(esp, 0x7e94d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e94d9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e94dc: xor ecx, ecx */
  ecx = 0;
/* 7e94de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e94e0: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e94e3: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e94e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e94ea: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7e94ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e94ee: mov esi, ecx */
  esi = ecx;
/* 7e94f0: call 0x6c3adf */
  esp -= 4; W32(esp, 0x7e94f5u); SPILL(); f_6c3adf(); if (g_unwind) return; RELOAD();
/* 7e94f5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e94f8: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e94fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e94ff: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 7e9502: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e9503: call 0x6c53c1 */
  esp -= 4; W32(esp, 0x7e9508u); SPILL(); f_6c53c1(); if (g_unwind) return; RELOAD();
/* 7e9508: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e950b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e950d: jne 0x7e95d5 */
  if (!zf) goto L_7e95d5;
L_7e9513: /* 7e9513: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e9516: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e9519: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e951f: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e9524: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7e9527: mov ecx, eax */
  ecx = eax;
/* 7e9529: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e952b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e9531: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7e9534: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7e9537: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e953a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e9540: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e9543: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7e9546: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e9547: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7e954a: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 7e954d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e9550: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e9553: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7e9555: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e9558: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e955b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e955e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7e9561: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e9562: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e9563: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7e9566: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e9569: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e956b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7e956e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e956f: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7e9575: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e9576: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9579: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e957f: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e9581: mov esi, esp */
  esi = esp;
/* 7e9583: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e9585: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e9588: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e958b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e958e: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7e9591: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 7e9594: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9597: mov ecx, esp */
  ecx = esp;
/* 7e9599: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e959b: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e959e: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e95a1: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e95a4: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e95a7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e95aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e95ab: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e95b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e95b1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e95b4: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e95b7: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7e95ba: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e95c0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e95c2: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e95c5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7e95c8: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_7e95cb: /* 7e95cb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e95ce: /* 7e95ce: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 7e95d0: jmp 0x7e9100 */
  goto L_7e9100;
L_7e95d5: /* 7e95d5: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7e95d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e95d9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e95dc: call 0x6ccb53 */
  esp -= 4; W32(esp, 0x7e95e1u); SPILL(); f_6ccb53(); if (g_unwind) return; RELOAD();
/* 7e95e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e95e3: je 0x7e95cb */
  if (zf) goto L_7e95cb;
L_7e95e5: /* 7e95e5: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7e95e8: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e95eeu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e95ee: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 7e95f4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e95f8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e95feu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e95fe: lea ecx, [ebp - 0x184] */
  ecx = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e9604: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e9608: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e960eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e960e: mov eax, 1 */
  eax = 0x1u;
/* 7e9613: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e9616: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e961d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e961e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e961f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e9620: mov esp, ebp */
  esp = ebp;
/* 7e9622: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e9623: ret 0x20 */
  esp += 36; SPILL(); return;
L_7e9626: /* 7e9626: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7e9629: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e962b: je 0x7e9671 */
  if (zf) goto L_7e9671;
L_7e962d: /* 7e962d: xor esi, esi */
  esi = 0;
/* 7e962f: nop  */
L_7e9630: /* 7e9630: cmp esi, dword ptr [eax + 0x114] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e9636: jge 0x7e9671 */
  if ((sf == of)) goto L_7e9671;
L_7e9638: /* 7e9638: mov edx, dword ptr [eax + 0x110] */
  edx = R32((uint32_t)(eax + 0x110u));
/* 7e963e: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7e9641: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9643: je 0x7e966e */
  if (zf) goto L_7e966e;
L_7e9645: /* 7e9645: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9647: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e9648: mov ecx, eax */
  ecx = eax;
/* 7e964a: call 0x6c2540 */
  esp -= 4; W32(esp, 0x7e964fu); SPILL(); f_6c2540(); if (g_unwind) return; RELOAD();
/* 7e964f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9651: jne 0x7e966b */
  if (!zf) goto L_7e966b;
L_7e9653: /* 7e9653: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e9656: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e9657: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7e965d: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7e9660: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e9661: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7e9666u); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7e9666: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e9669: jmp 0x7e9630 */
  goto L_7e9630;
L_7e966b: /* 7e966b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e966e: /* 7e966e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e966f: jmp 0x7e9630 */
  goto L_7e9630;
L_7e9671: /* 7e9671: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e9674: mov ebx, dword ptr [0xcfa2c0] */
  ebx = R32((uint32_t)(0xcfa2c0u));
/* 7e967a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7e9680: /* 7e9680: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9682: je 0x7e971a */
  if (zf) goto L_7e971a;
L_7e9688: /* 7e9688: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7e968b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e968d: je 0x7e9713 */
  if (zf) goto L_7e9713;
L_7e9693: /* 7e9693: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e9694: call 0x6c2626 */
  esp -= 4; W32(esp, 0x7e9699u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 7e9699: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e969b: jne 0x7e9710 */
  if (!zf) goto L_7e9710;
L_7e969d: /* 7e969d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e96a0: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7e96a3: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7e96a5: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7e96a8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e96aa: je 0x7e9710 */
  if (zf) goto L_7e9710;
L_7e96ac: /* 7e96ac: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e96af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e96b0: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e96b5u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e96b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e96b7: je 0x7e96fd */
  if (zf) goto L_7e96fd;
L_7e96b9: /* 7e96b9: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 7e96bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e96bd: mov ecx, esp */
  ecx = esp;
/* 7e96bf: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 7e96c4: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e96cau); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e96ca: mov ecx, esi */
  ecx = esi;
/* 7e96cc: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7e96d2u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7e96d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e96d4: je 0x7e9710 */
  if (zf) goto L_7e9710;
L_7e96d6: /* 7e96d6: mov eax, dword ptr [0xb7e2e4] */
  eax = R32((uint32_t)(0xb7e2e4u));
/* 7e96db: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e96de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e96e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e96e1: mov ecx, esi */
  ecx = esi;
/* 7e96e3: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7e96e6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7e96e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e96e8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e96ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e96ec: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7e96ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e96f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e96f1: mov ecx, esi */
  ecx = esi;
/* 7e96f3: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7e96f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e96f6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e96f9: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7e96fb: jmp 0x7e9680 */
  goto L_7e9680;
L_7e96fd: /* 7e96fd: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e9700: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9702: je 0x7e9710 */
  if (zf) goto L_7e9710;
L_7e9704: /* 7e9704: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 7e9707: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e970a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e970b: call 0x6c57c7 */
  esp -= 4; W32(esp, 0x7e9710u); SPILL(); f_6c57c7(); if (g_unwind) return; RELOAD();
L_7e9710: /* 7e9710: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e9713: /* 7e9713: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7e9715: jmp 0x7e9680 */
  goto L_7e9680;
L_7e971a: /* 7e971a: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7e971d: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e9723u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e9723: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 7e9729: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7e972d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e9733u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e9733: lea ecx, [ebp - 0x184] */
  ecx = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e9739: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e973d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e9743u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_7e9743: /* 7e9743: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e9746: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e9747: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e9748: xor eax, eax */
  eax = 0;
/* 7e974a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e9751: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e9752: mov esp, ebp */
  esp = ebp;
/* 7e9754: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e9755: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_7e9758(void) {
  LOAD_REGS();
L_7e9758: /* 7e9758: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 7e975e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e9763: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7e9766: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e9767: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 7e976a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e976fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e976f(); return;
}

void f_7e976f(void) {
  LOAD_REGS();
L_7e976f: /* 7e976f: push 0xa10d10 */
  { uint32_t v = 0xa10d10u; esp -= 4; W32(esp, v); }
/* 7e9774: push 0xade400 */
  { uint32_t v = 0xade400u; esp -= 4; W32(esp, v); }
/* 7e9779: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e977fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e977f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e9782: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9784: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9786: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e978bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e978b: guest_badaddr(0x7e978b); return;
}

void f_7e99c0(void) {
  LOAD_REGS();
L_7e99c0: /* 7e99c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e99c1: mov ebp, esp */
  ebp = esp;
/* 7e99c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e99c5: push 0x9d1090 */
  { uint32_t v = 0x9d1090u; esp -= 4; W32(esp, v); }
/* 7e99ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e99d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e99d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e99d8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e99db: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7e99e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e99e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e99e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e99e3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e99e6: mov esi, ecx */
  esi = ecx;
/* 7e99e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e99e9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7e99ec: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e99f3: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7e99f9u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7e99f9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7e99fc: or ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7e9a02: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9a05: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* 7e9a08: je 0x7e9a11 */
  if (zf) goto L_7e9a11;
L_7e9a0a: /* 7e9a0a: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 7e9a0d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e9a0f: jmp 0x7e9a13 */
  goto L_7e9a13;
L_7e9a11: /* 7e9a11: xor eax, eax */
  eax = 0;
L_7e9a13: /* 7e9a13: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7e9a16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e9a17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e9a18: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e9a1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e9a1c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9a1f: mov eax, esp */
  eax = esp;
/* 7e9a21: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e9a23: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 7e9a26: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e9a29: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7e9a2c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e9a2f: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7e9a32: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7e9a34: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e9a36: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9a39: mov ecx, esp */
  ecx = esp;
/* 7e9a3b: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e9a3d: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7e9a40: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e9a43: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e9a46: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e9a49: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e9a4c: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e9a4e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9a51: mov eax, esp */
  eax = esp;
/* 7e9a53: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7e9a55: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e9a58: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e9a5b: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 7e9a5e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e9a61: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7e9a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e9a67: mov ecx, esi */
  ecx = esi;
/* 7e9a69: call dword ptr [edx + 0xd8] */
  { uint32_t t = R32((uint32_t)(edx + 0xd8u)); esp -= 4; W32(esp, 0x7e9a6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e9a6f: mov ebx, eax */
  ebx = eax;
/* 7e9a71: mov cl, 0x80 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
L_7e9a73: /* 7e9a73: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9a75: je 0x7e9abd */
  if (zf) goto L_7e9abd;
L_7e9a77: /* 7e9a77: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 7e9a7a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7e9a7c: cmp dword ptr [ebx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e9a7f: jne 0x7e9aaf */
  if (!zf) goto L_7e9aaf;
L_7e9a81: /* 7e9a81: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7e9a84: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9a87: je 0x7e9aaf */
  if (zf) goto L_7e9aaf;
L_7e9a89: /* 7e9a89: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* 7e9a8c: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 7e9a92: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 7e9a95: mov edi, dword ptr [eax + 0x58] */
  edi = R32((uint32_t)(eax + 0x58u));
/* 7e9a98: mov edx, dword ptr [edx + edi + 0x1c] */
  edx = R32((uint32_t)(edx + edi + 0x1cu));
/* 7e9a9c: mov eax, dword ptr [eax + 0x98] */
  eax = R32((uint32_t)(eax + 0x98u));
/* 7e9aa2: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7e9aa5: test byte ptr [edx + eax + 4], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax + 0x4u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9aa9: je 0x7e9aaf */
  if (zf) goto L_7e9aaf;
L_7e9aab: /* 7e9aab: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 7e9aad: jmp 0x7e9a73 */
  goto L_7e9a73;
L_7e9aaf: /* 7e9aaf: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7e9ab2: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e9ab7: mov esi, ebx */
  esi = ebx;
/* 7e9ab9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e9abb: jmp 0x7e9ace */
  goto L_7e9ace;
L_7e9abd: /* 7e9abd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e9ac0: mov dword ptr [eax + 0x24], 0x3f800000 */
  W32((uint32_t)(eax + 0x24u), 0x3f800000u);
/* 7e9ac7: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
L_7e9ace: /* 7e9ace: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7e9ad1: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e9ad7u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e9ad7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e9ada: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e9adb: xor eax, eax */
  eax = 0;
/* 7e9add: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9adf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e9ae0: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e9ae3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e9aea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e9aeb: mov esp, ebp */
  esp = ebp;
/* 7e9aed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e9aee: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_7e9af1(void) {
  LOAD_REGS();
L_7e9af1: /* 7e9af1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e9af4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e9af9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7e9afc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e9afd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7e9b00: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e9b05u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e9b05(); return;
}

void f_7e9b05(void) {
  LOAD_REGS();
L_7e9b05: /* 7e9b05: push 0xa10d50 */
  { uint32_t v = 0xa10d50u; esp -= 4; W32(esp, v); }
/* 7e9b0a: push 0xade428 */
  { uint32_t v = 0xade428u; esp -= 4; W32(esp, v); }
/* 7e9b0f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e9b15u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e9b15: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e9b18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9b1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9b1c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e9b21u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e9b21: guest_badaddr(0x7e9b21); return;
}

void f_7e9b90(void) {
  LOAD_REGS();
L_7e9b90: /* 7e9b90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e9b91: mov ebp, esp */
  ebp = esp;
/* 7e9b93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e9b95: push 0x9d10a0 */
  { uint32_t v = 0x9d10a0u; esp -= 4; W32(esp, v); }
/* 7e9b9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e9ba0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e9ba1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e9ba8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9bab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e9bac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e9bad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e9bae: xor ebx, ebx */
  ebx = 0;
/* 7e9bb0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e9bb3: mov edi, ecx */
  edi = ecx;
/* 7e9bb5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
L_7e9bb8: /* 7e9bb8: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7e9bbe: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e9bc1: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7e9bc4: jge 0x7e9cb7 */
  if ((sf == of)) goto L_7e9cb7;
L_7e9bca: /* 7e9bca: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7e9bcd: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 7e9bd0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9bd2: je 0x7e9c81 */
  if (zf) goto L_7e9c81;
L_7e9bd8: /* 7e9bd8: push 0xb6dcb8 */
  { uint32_t v = 0xb6dcb8u; esp -= 4; W32(esp, v); }
/* 7e9bdd: mov ecx, esi */
  ecx = esi;
/* 7e9bdf: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e9be5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e9be5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9be7: je 0x7e9c81 */
  if (zf) goto L_7e9c81;
L_7e9bed: /* 7e9bed: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 7e9bf3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e9bf5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9bf8: mov edx, esp */
  edx = esp;
/* 7e9bfa: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e9bfc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7e9bff: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e9c02: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7e9c05: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7e9c08: mov ecx, esi */
  ecx = esi;
/* 7e9c0a: call 0x6c81ed */
  esp -= 4; W32(esp, 0x7e9c0fu); SPILL(); f_6c81ed(); if (g_unwind) return; RELOAD();
/* 7e9c0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9c11: je 0x7e9c81 */
  if (zf) goto L_7e9c81;
L_7e9c13: /* 7e9c13: test byte ptr [edi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9c1a: je 0x7e9c56 */
  if (zf) goto L_7e9c56;
L_7e9c1c: /* 7e9c1c: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9c23: je 0x7e9c56 */
  if (zf) goto L_7e9c56;
L_7e9c25: /* 7e9c25: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7e9c27: lea ebx, [esi + 0x110] */
  ebx = (uint32_t)(esi + 0x110u);
/* 7e9c2d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e9c2f: mov ecx, ebx */
  ecx = ebx;
/* 7e9c31: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7e9c37u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7e9c37: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e9c39: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7e9c3b: lea ebx, [edi + 0x110] */
  ebx = (uint32_t)(edi + 0x110u);
/* 7e9c41: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e9c43: mov ecx, ebx */
  ecx = ebx;
/* 7e9c45: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7e9c48: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7e9c4eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7e9c4e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7e9c50: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e9c53: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
L_7e9c56: /* 7e9c56: push 0xb6e1e8 */
  { uint32_t v = 0xb6e1e8u; esp -= 4; W32(esp, v); }
/* 7e9c5b: mov ecx, esi */
  ecx = esi;
/* 7e9c5d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e9c63u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e9c63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9c65: je 0x7e9c81 */
  if (zf) goto L_7e9c81;
L_7e9c67: /* 7e9c67: mov edx, dword ptr [edi + 0x16c] */
  edx = R32((uint32_t)(edi + 0x16cu));
/* 7e9c6d: mov eax, dword ptr [esi + 0x3e0] */
  eax = R32((uint32_t)(esi + 0x3e0u));
/* 7e9c73: cmp eax, dword ptr [edx + 0x3e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3e0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e9c79: jle 0x7e9c81 */
  if ((zf || sf != of)) goto L_7e9c81;
L_7e9c7b: /* 7e9c7b: mov dword ptr [edi + 0x16c], esi */
  W32((uint32_t)(edi + 0x16cu), esi);
L_7e9c81: /* 7e9c81: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e9c82: jmp 0x7e9bb8 */
  goto L_7e9bb8;
L_7e9cb7: /* 7e9cb7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e9cba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e9cbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e9cbc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e9cc3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e9cc4: mov esp, ebp */
  esp = ebp;
/* 7e9cc6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e9cc7: ret  */
  esp += 4; SPILL(); return;
}

void f_7e9c87(void) {
  LOAD_REGS();
L_7e9c87: /* 7e9c87: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e9c8a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e9c8f: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e9c92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e9c93: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7e9c96: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e9c9bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e9c9b(); return;
}

void f_7e9c9b(void) {
  LOAD_REGS();
L_7e9c9b: /* 7e9c9b: push 0xa10d8c */
  { uint32_t v = 0xa10d8cu; esp -= 4; W32(esp, v); }
/* 7e9ca0: push 0xade470 */
  { uint32_t v = 0xade470u; esp -= 4; W32(esp, v); }
/* 7e9ca5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e9cabu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e9cab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e9cae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9cb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9cb2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e9cb7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7e9cb7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e9cba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e9cbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e9cbc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e9cc3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e9cc4: mov esp, ebp */
  esp = ebp;
/* 7e9cc6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e9cc7: ret  */
  esp += 4; SPILL(); return;
}

void f_7e9d20(void) {
  LOAD_REGS();
L_7e9d20: /* 7e9d20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e9d21: mov ebp, esp */
  ebp = esp;
/* 7e9d23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e9d25: push 0x9d10b0 */
  { uint32_t v = 0x9d10b0u; esp -= 4; W32(esp, v); }
/* 7e9d2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e9d30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e9d31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e9d38: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9d3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e9d3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e9d3d: mov esi, ecx */
  esi = ecx;
/* 7e9d3f: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 7e9d45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9d47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e9d48: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e9d4b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e9d52: jne 0x7e9e33 */
  if (!zf) goto L_7e9e33;
L_7e9d58: /* 7e9d58: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 7e9d5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9d60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9d62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9d64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9d68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9d6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9d6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9d6e: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e9d71: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7e9d78: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e9d7f: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7e9d86: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e9d8cu); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e9d8c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e9d8e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9d91: mov ecx, esp */
  ecx = esp;
/* 7e9d93: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e9d95: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e9d98: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e9d9b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e9d9e: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e9da1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e9da4: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e9da7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9daa: mov ecx, esp */
  ecx = esp;
/* 7e9dac: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e9dae: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e9db1: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e9db4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e9db5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e9db8: mov ecx, esp */
  ecx = esp;
/* 7e9dba: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7e9dbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9dbf: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e9dc5u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e9dc5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7e9dc7: push 0xb6e718 */
  { uint32_t v = 0xb6e718u; esp -= 4; W32(esp, v); }
/* 7e9dcc: mov ecx, edi */
  ecx = edi;
/* 7e9dce: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7e9dd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e9dd4: mov edi, eax */
  edi = eax;
/* 7e9dd6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9dd8: je 0x7e9def */
  if (zf) goto L_7e9def;
L_7e9dda: /* 7e9dda: push 0xb6e1e8 */
  { uint32_t v = 0xb6e1e8u; esp -= 4; W32(esp, v); }
/* 7e9ddf: mov ecx, edi */
  ecx = edi;
/* 7e9de1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e9de7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e9de7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9de9: je 0x7e9def */
  if (zf) goto L_7e9def;
L_7e9deb: /* 7e9deb: mov eax, edi */
  eax = edi;
/* 7e9ded: jmp 0x7e9df1 */
  goto L_7e9df1;
L_7e9def: /* 7e9def: xor eax, eax */
  eax = 0;
L_7e9df1: /* 7e9df1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9df3: mov dword ptr [esi + 0x16c], eax */
  W32((uint32_t)(esi + 0x16cu), eax);
/* 7e9df9: jne 0x7e9e13 */
  if (!zf) goto L_7e9e13;
L_7e9dfb: /* 7e9dfb: push 0x7ff */
  { uint32_t v = 0x7ffu; esp -= 4; W32(esp, v); }
/* 7e9e00: push 0xade490 */
  { uint32_t v = 0xade490u; esp -= 4; W32(esp, v); }
/* 7e9e05: push 0xade4a0 */
  { uint32_t v = 0xade4a0u; esp -= 4; W32(esp, v); }
/* 7e9e0a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e9e10u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e9e10: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e9e13: /* 7e9e13: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 7e9e19: mov dword ptr [ecx + 0x3e0], 0xfff0bdc0 */
  W32((uint32_t)(ecx + 0x3e0u), 0xfff0bdc0u);
/* 7e9e23: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 7e9e29: or dword ptr [eax + 0x80], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x80u), r);
  }
L_7e9e33: /* 7e9e33: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 7e9e39: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e9e3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e9e3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e9e3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e9e45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e9e46: mov esp, ebp */
  esp = ebp;
/* 7e9e48: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e9e49: ret  */
  esp += 4; SPILL(); return;
}

void f_7e9e4a(void) {
  LOAD_REGS();
L_7e9e4a: /* 7e9e4a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e9e4d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e9e52: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7e9e55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e9e56: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7e9e59: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e9e5eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e9e5e(); return;
}

void f_7e9e5e(void) {
  LOAD_REGS();
L_7e9e5e: /* 7e9e5e: push 0xa10dc0 */
  { uint32_t v = 0xa10dc0u; esp -= 4; W32(esp, v); }
/* 7e9e63: push 0xade4b0 */
  { uint32_t v = 0xade4b0u; esp -= 4; W32(esp, v); }
/* 7e9e68: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e9e6eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e9e6e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e9e71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9e73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e9e75: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e9e7au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e9e7a: guest_badaddr(0x7e9e7a); return;
}

void f_7e9ee0(void) {
  LOAD_REGS();
L_7e9ee0: /* 7e9ee0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e9ee1: mov ebp, esp */
  ebp = esp;
/* 7e9ee3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e9ee5: push 0x9d10c0 */
  { uint32_t v = 0x9d10c0u; esp -= 4; W32(esp, v); }
/* 7e9eea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e9ef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e9ef1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e9ef8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9efb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e9efc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e9efd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e9efe: mov esi, ecx */
  esi = ecx;
/* 7e9f00: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7e9f06: xor edi, edi */
  edi = 0;
/* 7e9f08: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e9f0b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7e9f0e: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7e9f13u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7e9f13: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 7e9f16: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7e9f19: cmp dword ptr [ebx + 0x5c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x5cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e9f1c: je 0x7e9f7b */
  if (zf) goto L_7e9f7b;
L_7e9f1e: /* 7e9f1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e9f1f: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 7e9f22: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e9f28u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e9f28: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 7e9f2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e9f2c: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 7e9f32: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7e9f38u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7e9f38: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e9f3a: je 0x7e9f7b */
  if (zf) goto L_7e9f7b;
L_7e9f3c: /* 7e9f3c: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 7e9f3f: mov ecx, dword ptr [ecx + 0xd0] */
  ecx = R32((uint32_t)(ecx + 0xd0u));
/* 7e9f45: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e9f47: je 0x7e9f7b */
  if (zf) goto L_7e9f7b;
L_7e9f49: /* 7e9f49: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 7e9f4e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e9f54u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e9f54: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e9f56: je 0x7e9f7b */
  if (zf) goto L_7e9f7b;
L_7e9f58: /* 7e9f58: mov edx, dword ptr [ebx + 0x5c] */
  edx = R32((uint32_t)(ebx + 0x5cu));
/* 7e9f5b: mov eax, dword ptr [edx + 0x16c] */
  eax = R32((uint32_t)(edx + 0x16cu));
/* 7e9f61: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e9f63: jne 0x7e9f68 */
  if (!zf) goto L_7e9f68;
L_7e9f65: /* 7e9f65: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7e9f68: /* 7e9f68: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e9f6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e9f6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e9f6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e9f74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e9f75: mov esp, ebp */
  esp = ebp;
/* 7e9f77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e9f78: ret 0x14 */
  esp += 24; SPILL(); return;
L_7e9f7b: /* 7e9f7b: cmp dword ptr [ebp + 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e9f7e: je 0x7e9fde */
  if (zf) goto L_7e9fde;
L_7e9f80: /* 7e9f80: cmp edi, dword ptr [ebx + 0x114] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e9f86: jge 0x7e9f65 */
  if ((sf == of)) goto L_7e9f65;
L_7e9f88: /* 7e9f88: mov eax, dword ptr [ebx + 0x110] */
  eax = R32((uint32_t)(ebx + 0x110u));
/* 7e9f8e: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7e9f91: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9f93: je 0x7e9fdb */
  if (zf) goto L_7e9fdb;
L_7e9f95: /* 7e9f95: push 0xb6e1e8 */
  { uint32_t v = 0xb6e1e8u; esp -= 4; W32(esp, v); }
/* 7e9f9a: mov ecx, esi */
  ecx = esi;
/* 7e9f9c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e9fa2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e9fa2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9fa4: je 0x7e9fdb */
  if (zf) goto L_7e9fdb;
L_7e9fa6: /* 7e9fa6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e9fa9: mov ecx, dword ptr [esi + 0x3e0] */
  ecx = R32((uint32_t)(esi + 0x3e0u));
/* 7e9faf: cmp ecx, dword ptr [edx + 0x3e0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3e0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e9fb5: jle 0x7e9fdb */
  if ((zf || sf != of)) goto L_7e9fdb;
L_7e9fb7: /* 7e9fb7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e9fba: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e9fbd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e9fc0: mov eax, esp */
  eax = esp;
/* 7e9fc2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e9fc4: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e9fc7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e9fca: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e9fcd: mov ecx, esi */
  ecx = esi;
/* 7e9fcf: call 0x6c81ed */
  esp -= 4; W32(esp, 0x7e9fd4u); SPILL(); f_6c81ed(); if (g_unwind) return; RELOAD();
/* 7e9fd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e9fd6: je 0x7e9fdb */
  if (zf) goto L_7e9fdb;
L_7e9fd8: /* 7e9fd8: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_7e9fdb: /* 7e9fdb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7e9fdc: jmp 0x7e9f80 */
  goto L_7e9f80;
L_7e9fde: /* 7e9fde: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7e9fe4: cmp dword ptr [eax + 0xec], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e9fea: je 0x7e9f65 */
  if (zf) goto L_7e9f65;
L_7e9ff0: /* 7e9ff0: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 7e9ff6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e9ff7: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e9ffa: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7ea000u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7ea000: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7ea006: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7ea00c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ea00d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ea00f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ea010: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ea012: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea015: mov edx, esp */
  edx = esp;
/* 7ea017: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7ea01e: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ea021: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 7ea023: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7ea02a: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ea02d: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 7ea030: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7ea037: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ea03a: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 7ea03d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7ea040: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea043: mov edx, esp */
  edx = esp;
/* 7ea045: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 7ea047: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ea04a: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 7ea04d: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7ea050: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 7ea053: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 7ea059: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ea05a: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x7ea05du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ea05d: mov edi, eax */
  edi = eax;
/* 7ea05f: nop  */
L_7ea060: /* 7ea060: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea062: je 0x7ea094 */
  if (zf) goto L_7ea094;
L_7ea064: /* 7ea064: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 7ea067: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea069: je 0x7ea090 */
  if (zf) goto L_7ea090;
L_7ea06b: /* 7ea06b: push 0xb6e1e8 */
  { uint32_t v = 0xb6e1e8u; esp -= 4; W32(esp, v); }
/* 7ea070: mov ecx, esi */
  ecx = esi;
/* 7ea072: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7ea078u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7ea078: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea07a: je 0x7ea090 */
  if (zf) goto L_7ea090;
L_7ea07c: /* 7ea07c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ea07f: mov eax, dword ptr [esi + 0x3e0] */
  eax = R32((uint32_t)(esi + 0x3e0u));
/* 7ea085: cmp eax, dword ptr [ecx + 0x3e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3e0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ea08b: jle 0x7ea090 */
  if ((zf || sf != of)) goto L_7ea090;
L_7ea08d: /* 7ea08d: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_7ea090: /* 7ea090: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7ea092: jmp 0x7ea060 */
  goto L_7ea060;
L_7ea094: /* 7ea094: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7ea097: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7ea09du); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7ea09d: jmp 0x7e9f65 */
  goto L_7e9f65;
}

void f_7ea0a2(void) {
  LOAD_REGS();
L_7ea0a2: /* 7ea0a2: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ea0a5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ea0aa: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7ea0ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea0ae: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7ea0b1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ea0b6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ea0b6(); return;
}

void f_7ea0b6(void) {
  LOAD_REGS();
L_7ea0b6: /* 7ea0b6: push 0xa10e18 */
  { uint32_t v = 0xa10e18u; esp -= 4; W32(esp, v); }
/* 7ea0bb: push 0xade4b8 */
  { uint32_t v = 0xade4b8u; esp -= 4; W32(esp, v); }
/* 7ea0c0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ea0c6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ea0c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ea0c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ea0cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ea0cd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ea0d2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ea0d2: guest_badaddr(0x7ea0d2); return;
}

void f_7ea160(void) {
  LOAD_REGS();
L_7ea160: /* 7ea160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ea161: mov ebp, esp */
  ebp = esp;
/* 7ea163: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ea165: push 0x9d10d0 */
  { uint32_t v = 0x9d10d0u; esp -= 4; W32(esp, v); }
/* 7ea16a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ea170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea171: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ea178: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea17b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ea17c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ea17d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ea17e: mov edi, ecx */
  edi = ecx;
/* 7ea180: xor ecx, ecx */
  ecx = 0;
/* 7ea182: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ea185: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 7ea188: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7ea18b: jmp 0x7ea190 */
  goto L_7ea190;
L_7ea190: /* 7ea190: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7ea196: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ea199: jge 0x7ea2c5 */
  if ((sf == of)) goto L_7ea2c5;
L_7ea19f: /* 7ea19f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7ea1a2: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 7ea1a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1a7: je 0x7ea1d2 */
  if (zf) goto L_7ea1d2;
L_7ea1a9: /* 7ea1a9: push 0xb6dcb8 */
  { uint32_t v = 0xb6dcb8u; esp -= 4; W32(esp, v); }
/* 7ea1ae: mov ecx, esi */
  ecx = esi;
/* 7ea1b0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7ea1b6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7ea1b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1b8: je 0x7ea1d2 */
  if (zf) goto L_7ea1d2;
L_7ea1ba: /* 7ea1ba: push 0xb6e1e8 */
  { uint32_t v = 0xb6e1e8u; esp -= 4; W32(esp, v); }
/* 7ea1bf: mov ecx, esi */
  ecx = esi;
/* 7ea1c1: mov ebx, esi */
  ebx = esi;
/* 7ea1c3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7ea1c9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7ea1c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1cb: je 0x7ea1d4 */
  if (zf) goto L_7ea1d4;
L_7ea1cd: /* 7ea1cd: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 7ea1d0: jmp 0x7ea1de */
  goto L_7ea1de;
L_7ea1d2: /* 7ea1d2: xor ebx, ebx */
  ebx = 0;
L_7ea1d4: /* 7ea1d4: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7ea1db: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7ea1de: /* 7ea1de: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1e0: je 0x7ea287 */
  if (zf) goto L_7ea287;
L_7ea1e6: /* 7ea1e6: test byte ptr [edi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1ed: je 0x7ea1f8 */
  if (zf) goto L_7ea1f8;
L_7ea1ef: /* 7ea1ef: test byte ptr [ebx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1f6: jne 0x7ea200 */
  if (!zf) goto L_7ea200;
L_7ea1f8: /* 7ea1f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1fa: je 0x7ea287 */
  if (zf) goto L_7ea287;
L_7ea200: /* 7ea200: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 7ea206: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ea208: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea20b: mov edx, esp */
  edx = esp;
/* 7ea20d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7ea20f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7ea212: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7ea215: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7ea218: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7ea21b: mov ecx, ebx */
  ecx = ebx;
/* 7ea21d: call 0x6c81ed */
  esp -= 4; W32(esp, 0x7ea222u); SPILL(); f_6c81ed(); if (g_unwind) return; RELOAD();
/* 7ea222: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea224: je 0x7ea287 */
  if (zf) goto L_7ea287;
L_7ea226: /* 7ea226: test byte ptr [edi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea22d: je 0x7ea269 */
  if (zf) goto L_7ea269;
L_7ea22f: /* 7ea22f: test byte ptr [ebx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea236: je 0x7ea269 */
  if (zf) goto L_7ea269;
L_7ea238: /* 7ea238: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ea23a: lea esi, [ebx + 0x110] */
  esi = (uint32_t)(ebx + 0x110u);
/* 7ea240: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ea242: mov ecx, esi */
  ecx = esi;
/* 7ea244: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ea24au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ea24a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ea24c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ea24e: lea esi, [edi + 0x110] */
  esi = (uint32_t)(edi + 0x110u);
/* 7ea254: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ea256: mov ecx, esi */
  ecx = esi;
/* 7ea258: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7ea25b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ea261u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ea261: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ea263: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ea266: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
L_7ea269: /* 7ea269: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea26b: je 0x7ea287 */
  if (zf) goto L_7ea287;
L_7ea26d: /* 7ea26d: mov edx, dword ptr [edi + 0x16c] */
  edx = R32((uint32_t)(edi + 0x16cu));
/* 7ea273: mov eax, dword ptr [esi + 0x3e0] */
  eax = R32((uint32_t)(esi + 0x3e0u));
/* 7ea279: cmp eax, dword ptr [edx + 0x3e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3e0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ea27f: jle 0x7ea287 */
  if ((zf || sf != of)) goto L_7ea287;
L_7ea281: /* 7ea281: mov dword ptr [edi + 0x16c], esi */
  W32((uint32_t)(edi + 0x16cu), esi);
L_7ea287: /* 7ea287: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ea28a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ea28b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7ea28e: mov ecx, eax */
  ecx = eax;
/* 7ea290: jmp 0x7ea190 */
  goto L_7ea190;
L_7ea2c5: /* 7ea2c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ea2c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ea2c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ea2ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ea2d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ea2d2: mov esp, ebp */
  esp = ebp;
/* 7ea2d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ea2d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ea18d(void) {
  LOAD_REGS();
L_7ea18d: /* 7ea18d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7ea190: /* 7ea190: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7ea196: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ea199: jge 0x7ea2c5 */
  if ((sf == of)) goto L_7ea2c5;
L_7ea19f: /* 7ea19f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7ea1a2: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 7ea1a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1a7: je 0x7ea1d2 */
  if (zf) goto L_7ea1d2;
L_7ea1a9: /* 7ea1a9: push 0xb6dcb8 */
  { uint32_t v = 0xb6dcb8u; esp -= 4; W32(esp, v); }
/* 7ea1ae: mov ecx, esi */
  ecx = esi;
/* 7ea1b0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7ea1b6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7ea1b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1b8: je 0x7ea1d2 */
  if (zf) goto L_7ea1d2;
L_7ea1ba: /* 7ea1ba: push 0xb6e1e8 */
  { uint32_t v = 0xb6e1e8u; esp -= 4; W32(esp, v); }
/* 7ea1bf: mov ecx, esi */
  ecx = esi;
/* 7ea1c1: mov ebx, esi */
  ebx = esi;
/* 7ea1c3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7ea1c9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7ea1c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1cb: je 0x7ea1d4 */
  if (zf) goto L_7ea1d4;
L_7ea1cd: /* 7ea1cd: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 7ea1d0: jmp 0x7ea1de */
  goto L_7ea1de;
L_7ea1d2: /* 7ea1d2: xor ebx, ebx */
  ebx = 0;
L_7ea1d4: /* 7ea1d4: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7ea1db: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7ea1de: /* 7ea1de: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1e0: je 0x7ea287 */
  if (zf) goto L_7ea287;
L_7ea1e6: /* 7ea1e6: test byte ptr [edi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1ed: je 0x7ea1f8 */
  if (zf) goto L_7ea1f8;
L_7ea1ef: /* 7ea1ef: test byte ptr [ebx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1f6: jne 0x7ea200 */
  if (!zf) goto L_7ea200;
L_7ea1f8: /* 7ea1f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea1fa: je 0x7ea287 */
  if (zf) goto L_7ea287;
L_7ea200: /* 7ea200: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 7ea206: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ea208: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea20b: mov edx, esp */
  edx = esp;
/* 7ea20d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7ea20f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7ea212: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7ea215: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7ea218: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7ea21b: mov ecx, ebx */
  ecx = ebx;
/* 7ea21d: call 0x6c81ed */
  esp -= 4; W32(esp, 0x7ea222u); SPILL(); f_6c81ed(); if (g_unwind) return; RELOAD();
/* 7ea222: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea224: je 0x7ea287 */
  if (zf) goto L_7ea287;
L_7ea226: /* 7ea226: test byte ptr [edi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea22d: je 0x7ea269 */
  if (zf) goto L_7ea269;
L_7ea22f: /* 7ea22f: test byte ptr [ebx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea236: je 0x7ea269 */
  if (zf) goto L_7ea269;
L_7ea238: /* 7ea238: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ea23a: lea esi, [ebx + 0x110] */
  esi = (uint32_t)(ebx + 0x110u);
/* 7ea240: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ea242: mov ecx, esi */
  ecx = esi;
/* 7ea244: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ea24au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ea24a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ea24c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ea24e: lea esi, [edi + 0x110] */
  esi = (uint32_t)(edi + 0x110u);
/* 7ea254: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ea256: mov ecx, esi */
  ecx = esi;
/* 7ea258: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7ea25b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ea261u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ea261: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ea263: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ea266: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
L_7ea269: /* 7ea269: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea26b: je 0x7ea287 */
  if (zf) goto L_7ea287;
L_7ea26d: /* 7ea26d: mov edx, dword ptr [edi + 0x16c] */
  edx = R32((uint32_t)(edi + 0x16cu));
/* 7ea273: mov eax, dword ptr [esi + 0x3e0] */
  eax = R32((uint32_t)(esi + 0x3e0u));
/* 7ea279: cmp eax, dword ptr [edx + 0x3e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3e0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ea27f: jle 0x7ea287 */
  if ((zf || sf != of)) goto L_7ea287;
L_7ea281: /* 7ea281: mov dword ptr [edi + 0x16c], esi */
  W32((uint32_t)(edi + 0x16cu), esi);
L_7ea287: /* 7ea287: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ea28a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ea28b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7ea28e: mov ecx, eax */
  ecx = eax;
/* 7ea290: jmp 0x7ea190 */
  goto L_7ea190;
L_7ea2c5: /* 7ea2c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ea2c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ea2c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ea2ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ea2d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ea2d2: mov esp, ebp */
  esp = ebp;
/* 7ea2d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ea2d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ea295(void) {
  LOAD_REGS();
L_7ea295: /* 7ea295: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ea298: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ea29d: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7ea2a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ea2a1: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7ea2a4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ea2a9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ea2a9(); return;
}

void f_7ea2a9(void) {
  LOAD_REGS();
L_7ea2a9: /* 7ea2a9: push 0xa10e60 */
  { uint32_t v = 0xa10e60u; esp -= 4; W32(esp, v); }
/* 7ea2ae: push 0xade4c0 */
  { uint32_t v = 0xade4c0u; esp -= 4; W32(esp, v); }
/* 7ea2b3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ea2b9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ea2b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ea2bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ea2be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ea2c0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ea2c5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7ea2c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ea2c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ea2c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ea2ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ea2d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ea2d2: mov esp, ebp */
  esp = ebp;
/* 7ea2d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ea2d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ea340(void) {
  LOAD_REGS();
L_7ea340: /* 7ea340: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7ea345: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ea346: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7ea34a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ea34b: mov esi, ecx */
  esi = ecx;
/* 7ea34d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ea34f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea351: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ea352: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7ea356: je 0x7ea372 */
  if (zf) goto L_7ea372;
L_7ea358: /* 7ea358: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ea35b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ea35d: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7ea362: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7ea367: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ea369: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ea36b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ea36c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ea36d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ea36e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea36f: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7ea372u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ea372: /* 7ea372: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ea373: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ea374: mov ecx, esi */
  ecx = esi;
/* 7ea376: call 0x6c7dfb */
  esp -= 4; W32(esp, 0x7ea37bu); SPILL(); f_6c7dfb(); if (g_unwind) return; RELOAD();
/* 7ea37b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ea37c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ea37d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ea37e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ea3b0(void) {
  LOAD_REGS();
L_7ea3b0: /* 7ea3b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ea3b1: mov ebp, esp */
  ebp = esp;
/* 7ea3b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ea3b5: push 0x9d10e0 */
  { uint32_t v = 0x9d10e0u; esp -= 4; W32(esp, v); }
/* 7ea3ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ea3c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea3c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ea3c8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea3cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ea3cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ea3cd: mov ebx, ecx */
  ebx = ecx;
/* 7ea3cf: mov esi, dword ptr [ebx + 0x104] */
  esi = R32((uint32_t)(ebx + 0x104u));
/* 7ea3d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ea3d6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ea3d9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ea3e0: mov eax, esi */
  eax = esi;
L_7ea3e2: /* 7ea3e2: cmp eax, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ea3e5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ea3e8: jge 0x7ea462 */
  if ((sf == of)) goto L_7ea462;
L_7ea3ea: /* 7ea3ea: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 7ea3ed: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7ea3f0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea3f2: lea edi, [ebx + 0x2c] */
  edi = (uint32_t)(ebx + 0x2cu);
/* 7ea3f5: je 0x7ea45f */
  if (zf) goto L_7ea45f;
L_7ea3f7: /* 7ea3f7: mov edx, dword ptr [ecx + 0x80] */
  edx = R32((uint32_t)(ecx + 0x80u));
/* 7ea3fd: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea400: jne 0x7ea43c */
  if (!zf) goto L_7ea43c;
L_7ea402: /* 7ea402: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea404: je 0x7ea430 */
  if (zf) goto L_7ea430;
L_7ea406: /* 7ea406: mov edx, dword ptr [0xcfa3d4] */
  edx = R32((uint32_t)(0xcfa3d4u));
/* 7ea40c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7ea40e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea410: je 0x7ea430 */
  if (zf) goto L_7ea430;
L_7ea412: /* 7ea412: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 7ea415: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ea417: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7ea41c: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7ea421: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ea423: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ea425: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ea427: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ea428: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ea429: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ea42a: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x7ea42du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ea42d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7ea430: /* 7ea430: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7ea432: mov ecx, dword ptr [edi + eax*4] */
  ecx = R32((uint32_t)(edi + eax*4));
/* 7ea435: mov dword ptr [edi + esi*4], ecx */
  W32((uint32_t)(edi + esi*4), ecx);
/* 7ea438: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7ea439: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ea43a: jmp 0x7ea3e2 */
  goto L_7ea3e2;
L_7ea43c: /* 7ea43c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ea43e: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7ea444u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7ea444: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7ea44a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea44b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7ea44d: push 0xaddf48 */
  { uint32_t v = 0xaddf48u; esp -= 4; W32(esp, v); }
/* 7ea452: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea453: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ea459u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ea459: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ea45c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ea45f: /* 7ea45f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ea460: jmp 0x7ea3e2 */
  goto L_7ea3e2;
L_7ea462: /* 7ea462: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7ea465: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea467: je 0x7ea4a3 */
  if (zf) goto L_7ea4a3;
L_7ea469: /* 7ea469: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7ea46f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7ea471: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ea473: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea475: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ea478: lea edi, [ebx + 0x2c] */
  edi = (uint32_t)(ebx + 0x2cu);
/* 7ea47b: je 0x7ea49a */
  if (zf) goto L_7ea49a;
L_7ea47d: /* 7ea47d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ea47f: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7ea484: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7ea489: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ea48b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ea48d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea48e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 7ea491: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ea492: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ea493: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea494: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7ea497u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ea497: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7ea49a: /* 7ea49a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea49b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ea49c: mov ecx, edi */
  ecx = edi;
/* 7ea49e: call 0x6c7dfb */
  esp -= 4; W32(esp, 0x7ea4a3u); SPILL(); f_6c7dfb(); if (g_unwind) return; RELOAD();
L_7ea4a3: /* 7ea4a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ea4a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ea4a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ea4a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ea4af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ea4b0: mov esp, ebp */
  esp = ebp;
/* 7ea4b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ea4b3: ret  */
  esp += 4; SPILL(); return;
}

void f_7ea4b4(void) {
  LOAD_REGS();
L_7ea4b4: /* 7ea4b4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ea4b7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ea4bc: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7ea4bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ea4c0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7ea4c3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ea4c8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ea4c8(); return;
}

void f_7ea4c8(void) {
  LOAD_REGS();
L_7ea4c8: /* 7ea4c8: push 0xa10e90 */
  { uint32_t v = 0xa10e90u; esp -= 4; W32(esp, v); }
/* 7ea4cd: push 0xaddf64 */
  { uint32_t v = 0xaddf64u; esp -= 4; W32(esp, v); }
/* 7ea4d2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ea4d8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ea4d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ea4db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ea4dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ea4df: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ea4e4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ea4e4: guest_badaddr(0x7ea4e4); return;
}

void f_7ea540(void) {
  LOAD_REGS();
L_7ea540: /* 7ea540: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ea542: push 0x9d10fc */
  { uint32_t v = 0x9d10fcu; esp -= 4; W32(esp, v); }
/* 7ea547: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ea54d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea54e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ea555: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ea556: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7ea55a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ea55b: mov esi, ecx */
  esi = ecx;
/* 7ea55d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7ea561: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ea562: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7ea565: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 7ea569: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7ea56b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7ea571u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7ea571: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7ea574: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7ea57c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7ea582u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7ea582: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7ea586: mov eax, esi */
  eax = esi;
/* 7ea588: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ea589: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ea590: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ea593: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ea5c0(void) {
  LOAD_REGS();
L_7ea5c0: /* 7ea5c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ea5c1: mov ebp, esp */
  ebp = esp;
/* 7ea5c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ea5c5: push 0x9d1110 */
  { uint32_t v = 0x9d1110u; esp -= 4; W32(esp, v); }
/* 7ea5ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ea5d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea5d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ea5d8: sub esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea5db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ea5dc: xor ebx, ebx */
  ebx = 0;
/* 7ea5de: mov eax, ecx */
  eax = ecx;
/* 7ea5e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ea5e1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7ea5e4: cmp dword ptr [eax + 0x1158], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1158u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea5ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ea5eb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ea5ee: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7ea5f1: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7ea5f4: je 0x7ea671 */
  if (zf) goto L_7ea671;
L_7ea5f6: /* 7ea5f6: cmp dword ptr [0xcd8a5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcd8a5cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea5fc: je 0x7ea671 */
  if (zf) goto L_7ea671;
L_7ea5fe: /* 7ea5fe: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 7ea601: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7ea604: fadd dword ptr [ebp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x14u)));
/* 7ea607: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ea608: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 7ea60b: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 7ea60d: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 7ea610: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 7ea613: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7ea616: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ea617: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 7ea61a: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7ea61d: mov byte ptr [ebp - 0x1c], al */
  W8((uint32_t)(ebp + 0xffffffe4u), (eax & 0xffu));
/* 7ea620: mov byte ptr [ebp - 0x1b], 0x80 */
  W8((uint32_t)(ebp + 0xffffffe5u), 0x80u);
/* 7ea624: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7ea627: mov byte ptr [ebp - 0x1a], bl */
  W8((uint32_t)(ebp + 0xffffffe6u), (ebx & 0xffu));
/* 7ea62a: mov byte ptr [ebp - 0x19], al */
  W8((uint32_t)(ebp + 0xffffffe7u), (eax & 0xffu));
/* 7ea62d: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 7ea630: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7ea633: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7ea636: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 7ea639: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7ea63c: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 7ea63f: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7ea642: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 7ea645: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 7ea648: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7ea64b: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7ea64e: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x7ea654u); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 7ea654: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ea657: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ea658: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea65b: mov esi, eax */
  esi = eax;
/* 7ea65d: mov edi, esp */
  edi = esp;
/* 7ea65f: mov ecx, 7 */
  ecx = 0x7u;
/* 7ea664: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7ea666: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 7ea66c: call 0x6cc252 */
  esp -= 4; W32(esp, 0x7ea671u); SPILL(); f_6cc252(); if (g_unwind) return; RELOAD();
L_7ea671: /* 7ea671: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ea673: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7ea676: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7ea679: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea67b: je 0x7ea763 */
  if (zf) goto L_7ea763;
L_7ea681: /* 7ea681: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 7ea684: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ea685: mov dword ptr [ebp - 0x80], ebx */
  W32((uint32_t)(ebp + 0xffffff80u), ebx);
/* 7ea688: mov dword ptr [ebp - 0x7c], ebx */
  W32((uint32_t)(ebp + 0xffffff84u), ebx);
/* 7ea68b: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 7ea692: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 7ea699: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 7ea6a0: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7ea6a7: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 7ea6ae: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 7ea6b5: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 7ea6b8: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 7ea6bf: mov dword ptr [ebp - 0x58], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa8u), 0xffffffffu);
/* 7ea6c6: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 7ea6c9: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7ea6cf: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7ea6d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ea6d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea6da: mov eax, esp */
  eax = esp;
/* 7ea6dc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7ea6de: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7ea6e1: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7ea6e4: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7ea6e7: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7ea6ea: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ea6ed: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea6f0: mov eax, esp */
  eax = esp;
/* 7ea6f2: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7ea6f4: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7ea6f7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7ea6fa: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7ea6fd: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7ea700: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ea701: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 7ea704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea705: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7ea708u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ea708: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea70a: jne 0x7ea763 */
  if (!zf) goto L_7ea763;
L_7ea70c: /* 7ea70c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ea70f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ea711: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7ea713: mov dword ptr [ebp - 0x80], ebx */
  W32((uint32_t)(ebp + 0xffffff80u), ebx);
/* 7ea716: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ea71cu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ea71c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea71e: je 0x7ea733 */
  if (zf) goto L_7ea733;
L_7ea720: /* 7ea720: mov ecx, 0xc */
  ecx = 0xcu;
/* 7ea725: lea esi, [ebp - 0x80] */
  esi = (uint32_t)(ebp + 0xffffff80u);
/* 7ea728: mov edi, eax */
  edi = eax;
/* 7ea72a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7ea72c: mov esi, eax */
  esi = eax;
/* 7ea72e: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7ea731: jmp 0x7ea738 */
  goto L_7ea738;
L_7ea733: /* 7ea733: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7ea736: mov esi, ebx */
  esi = ebx;
L_7ea738: /* 7ea738: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7ea73b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7ea73e: cmp dword ptr [ebp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea741: je 0x7ea763 */
  if (zf) goto L_7ea763;
L_7ea743: /* 7ea743: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7ea749: mov eax, dword ptr [0xce848c] */
  eax = R32((uint32_t)(0xce848cu));
/* 7ea74e: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7ea751: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ea753: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ea756: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ea758: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ea75a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7ea75c: mov eax, esi */
  eax = esi;
/* 7ea75e: jmp 0x7ea9b8 */
  goto L_7ea9b8;
L_7ea763: /* 7ea763: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ea767: xor ecx, ecx */
  ecx = 0;
L_7ea769: /* 7ea769: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ea76c: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7ea76f: jge 0x7ea937 */
  if ((sf == of)) goto L_7ea937;
L_7ea775: /* 7ea775: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ea778: mov esi, dword ptr [edx + 0x8c] */
  esi = R32((uint32_t)(edx + 0x8cu));
/* 7ea77e: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 7ea781: mov eax, dword ptr [esi + eax*8 + 0x11c] */
  eax = R32((uint32_t)(esi + eax*8 + 0x11cu));
/* 7ea788: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea78a: je 0x7ea790 */
  if (zf) goto L_7ea790;
L_7ea78c: /* 7ea78c: mov ebx, eax */
  ebx = eax;
/* 7ea78e: jmp 0x7ea795 */
  goto L_7ea795;
L_7ea790: /* 7ea790: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 7ea793: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
L_7ea795: /* 7ea795: xor edi, edi */
  edi = 0;
/* 7ea797: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea799: je 0x7ea92f */
  if (zf) goto L_7ea92f;
L_7ea79f: /* 7ea79f: test byte ptr [ebx + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea7a6: je 0x7ea92f */
  if (zf) goto L_7ea92f;
L_7ea7ac: /* 7ea7ac: xor esi, esi */
  esi = 0;
L_7ea7ae: /* 7ea7ae: cmp esi, dword ptr [ebx + 0x360] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ea7b4: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7ea7b7: jge 0x7ea92f */
  if ((sf == of)) goto L_7ea92f;
L_7ea7bd: /* 7ea7bd: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7ea7c0: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 7ea7c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ea7c4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea7c7: mov eax, esp */
  eax = esp;
/* 7ea7c9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7ea7cb: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 7ea7ce: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7ea7d1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7ea7d4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7ea7d7: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7ea7da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea7dd: mov edx, esp */
  edx = esp;
/* 7ea7df: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7ea7e1: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7ea7e4: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7ea7e7: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7ea7ea: mov edx, dword ptr [ebx + 0x35c] */
  edx = R32((uint32_t)(ebx + 0x35cu));
/* 7ea7f0: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7ea7f3: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 7ea7f6: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 7ea7f9: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 7ea800: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 7ea807: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 7ea80e: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7ea815: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 7ea81c: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 7ea823: mov dword ptr [ebp - 0x60], edi */
  W32((uint32_t)(ebp + 0xffffffa0u), edi);
/* 7ea826: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 7ea82d: mov dword ptr [ebp - 0x58], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa8u), 0xffffffffu);
/* 7ea834: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
/* 7ea837: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ea838: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7ea83b: call 0x6c597f */
  esp -= 4; W32(esp, 0x7ea840u); SPILL(); f_6c597f(); if (g_unwind) return; RELOAD();
/* 7ea840: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea842: jne 0x7ea8f6 */
  if (!zf) goto L_7ea8f6;
L_7ea848: /* 7ea848: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ea84b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7ea84e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ea850: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7ea853: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 7ea856: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea859: mov ecx, esp */
  ecx = esp;
/* 7ea85b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ea85d: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 7ea860: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7ea863: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7ea866: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7ea869: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ea86c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ea86d: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7ea873: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 7ea876: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ea877: call 0x6c9192 */
  esp -= 4; W32(esp, 0x7ea87cu); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 7ea87c: cmp dword ptr [ebp - 0x50], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea87f: jne 0x7ea8f6 */
  if (!zf) goto L_7ea8f6;
L_7ea881: /* 7ea881: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ea884: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ea887: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ea889: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7ea88b: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 7ea88e: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ea894u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ea894: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea896: je 0x7ea8b0 */
  if (zf) goto L_7ea8b0;
L_7ea898: /* 7ea898: mov ecx, 0xc */
  ecx = 0xcu;
/* 7ea89d: lea esi, [ebp - 0x80] */
  esi = (uint32_t)(ebp + 0xffffff80u);
/* 7ea8a0: mov edi, eax */
  edi = eax;
/* 7ea8a2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7ea8a4: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ea8a7: mov ecx, eax */
  ecx = eax;
/* 7ea8a9: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7ea8ac: xor edi, edi */
  edi = 0;
/* 7ea8ae: jmp 0x7ea8b5 */
  goto L_7ea8b5;
L_7ea8b0: /* 7ea8b0: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7ea8b3: mov ecx, edi */
  ecx = edi;
L_7ea8b5: /* 7ea8b5: mov edx, dword ptr [ebx + 0x35c] */
  edx = R32((uint32_t)(ebx + 0x35cu));
/* 7ea8bb: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7ea8be: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7ea8c1: cmp dword ptr [ebp + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea8c4: je 0x7ea8f6 */
  if (zf) goto L_7ea8f6;
L_7ea8c6: /* 7ea8c6: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7ea8cc: mov eax, dword ptr [0xce848c] */
  eax = R32((uint32_t)(0xce848cu));
/* 7ea8d1: lea esi, [edx + eax*4] */
  esi = (uint32_t)(edx + eax*4);
/* 7ea8d4: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ea8d6: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ea8d9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ea8db: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ea8dd: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7ea8df: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 7ea8e1: mov eax, ecx */
  eax = ecx;
/* 7ea8e3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ea8e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ea8ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ea8ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ea8ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ea8f0: mov esp, ebp */
  esp = ebp;
/* 7ea8f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ea8f3: ret 0x30 */
  esp += 52; SPILL(); return;
L_7ea8f6: /* 7ea8f6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ea8f9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7ea8fa: jmp 0x7ea7ae */
  goto L_7ea7ae;
L_7ea92f: /* 7ea92f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7ea930: xor ebx, ebx */
  ebx = 0;
/* 7ea932: jmp 0x7ea769 */
  goto L_7ea769;
L_7ea937: /* 7ea937: cmp dword ptr [ebp + 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea93a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7ea93d: je 0x7ea99c */
  if (zf) goto L_7ea99c;
L_7ea93f: /* 7ea93f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ea942: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7ea948: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea94a: je 0x7ea99c */
  if (zf) goto L_7ea99c;
L_7ea94c: /* 7ea94c: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7ea94f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea950: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7ea953: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 7ea956: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea957: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7ea95a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7ea95c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7ea95e: and eax, 0xffffffe7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7ea961: add eax, 0x9f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9fu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ea966: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea967: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ea969: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea96c: mov eax, esp */
  eax = esp;
/* 7ea96e: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7ea970: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7ea973: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7ea976: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7ea979: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7ea97c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ea97f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea982: mov eax, esp */
  eax = esp;
/* 7ea984: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7ea986: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7ea989: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7ea98c: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7ea98f: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7ea992: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ea995: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea996: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x7ea999u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ea999: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_7ea99c: /* 7ea99c: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7ea9a1: mov ecx, dword ptr [0xce848c] */
  ecx = R32((uint32_t)(0xce848cu));
/* 7ea9a7: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7ea9aa: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ea9ac: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ea9af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ea9b1: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ea9b3: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7ea9b5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
L_7ea9b8: /* 7ea9b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ea9b9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ea9bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ea9be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ea9bf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ea9c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ea9c7: mov esp, ebp */
  esp = ebp;
/* 7ea9c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ea9ca: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_7ea8ff(void) {
  LOAD_REGS();
L_7ea8ff: /* 7ea8ff: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7ea902: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ea907: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ea90a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ea90b: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7ea90e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ea913u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ea913(); return;
}

void f_7ea913(void) {
  LOAD_REGS();
  goto L_7ea913;
L_7ea769: /* 7ea769: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ea76c: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7ea76f: jge 0x7ea937 */
  if ((sf == of)) goto L_7ea937;
L_7ea775: /* 7ea775: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ea778: mov esi, dword ptr [edx + 0x8c] */
  esi = R32((uint32_t)(edx + 0x8cu));
/* 7ea77e: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 7ea781: mov eax, dword ptr [esi + eax*8 + 0x11c] */
  eax = R32((uint32_t)(esi + eax*8 + 0x11cu));
/* 7ea788: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea78a: je 0x7ea790 */
  if (zf) goto L_7ea790;
L_7ea78c: /* 7ea78c: mov ebx, eax */
  ebx = eax;
/* 7ea78e: jmp 0x7ea795 */
  goto L_7ea795;
L_7ea790: /* 7ea790: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 7ea793: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
L_7ea795: /* 7ea795: xor edi, edi */
  edi = 0;
/* 7ea797: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea799: je 0x7ea92f */
  if (zf) goto L_7ea92f;
L_7ea79f: /* 7ea79f: test byte ptr [ebx + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ea7a6: je 0x7ea92f */
  if (zf) goto L_7ea92f;
L_7ea7ac: /* 7ea7ac: xor esi, esi */
  esi = 0;
L_7ea7ae: /* 7ea7ae: cmp esi, dword ptr [ebx + 0x360] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ea7b4: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7ea7b7: jge 0x7ea92f */
  if ((sf == of)) goto L_7ea92f;
L_7ea7bd: /* 7ea7bd: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7ea7c0: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 7ea7c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ea7c4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea7c7: mov eax, esp */
  eax = esp;
/* 7ea7c9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7ea7cb: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 7ea7ce: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7ea7d1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7ea7d4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7ea7d7: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7ea7da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea7dd: mov edx, esp */
  edx = esp;
/* 7ea7df: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7ea7e1: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7ea7e4: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7ea7e7: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7ea7ea: mov edx, dword ptr [ebx + 0x35c] */
  edx = R32((uint32_t)(ebx + 0x35cu));
/* 7ea7f0: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7ea7f3: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 7ea7f6: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 7ea7f9: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 7ea800: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 7ea807: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 7ea80e: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7ea815: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 7ea81c: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 7ea823: mov dword ptr [ebp - 0x60], edi */
  W32((uint32_t)(ebp + 0xffffffa0u), edi);
/* 7ea826: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 7ea82d: mov dword ptr [ebp - 0x58], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa8u), 0xffffffffu);
/* 7ea834: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
/* 7ea837: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ea838: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7ea83b: call 0x6c597f */
  esp -= 4; W32(esp, 0x7ea840u); SPILL(); f_6c597f(); if (g_unwind) return; RELOAD();
/* 7ea840: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea842: jne 0x7ea8f6 */
  if (!zf) goto L_7ea8f6;
L_7ea848: /* 7ea848: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ea84b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7ea84e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ea850: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7ea853: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 7ea856: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea859: mov ecx, esp */
  ecx = esp;
/* 7ea85b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ea85d: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 7ea860: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7ea863: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7ea866: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7ea869: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ea86c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ea86d: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7ea873: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 7ea876: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ea877: call 0x6c9192 */
  esp -= 4; W32(esp, 0x7ea87cu); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 7ea87c: cmp dword ptr [ebp - 0x50], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea87f: jne 0x7ea8f6 */
  if (!zf) goto L_7ea8f6;
L_7ea881: /* 7ea881: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ea884: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ea887: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ea889: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7ea88b: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 7ea88e: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ea894u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ea894: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea896: je 0x7ea8b0 */
  if (zf) goto L_7ea8b0;
L_7ea898: /* 7ea898: mov ecx, 0xc */
  ecx = 0xcu;
/* 7ea89d: lea esi, [ebp - 0x80] */
  esi = (uint32_t)(ebp + 0xffffff80u);
/* 7ea8a0: mov edi, eax */
  edi = eax;
/* 7ea8a2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7ea8a4: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ea8a7: mov ecx, eax */
  ecx = eax;
/* 7ea8a9: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7ea8ac: xor edi, edi */
  edi = 0;
/* 7ea8ae: jmp 0x7ea8b5 */
  goto L_7ea8b5;
L_7ea8b0: /* 7ea8b0: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7ea8b3: mov ecx, edi */
  ecx = edi;
L_7ea8b5: /* 7ea8b5: mov edx, dword ptr [ebx + 0x35c] */
  edx = R32((uint32_t)(ebx + 0x35cu));
/* 7ea8bb: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7ea8be: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7ea8c1: cmp dword ptr [ebp + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea8c4: je 0x7ea8f6 */
  if (zf) goto L_7ea8f6;
L_7ea8c6: /* 7ea8c6: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7ea8cc: mov eax, dword ptr [0xce848c] */
  eax = R32((uint32_t)(0xce848cu));
/* 7ea8d1: lea esi, [edx + eax*4] */
  esi = (uint32_t)(edx + eax*4);
/* 7ea8d4: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ea8d6: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ea8d9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ea8db: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ea8dd: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7ea8df: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 7ea8e1: mov eax, ecx */
  eax = ecx;
/* 7ea8e3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ea8e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ea8ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ea8ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ea8ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ea8f0: mov esp, ebp */
  esp = ebp;
/* 7ea8f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ea8f3: ret 0x30 */
  esp += 52; SPILL(); return;
L_7ea8f6: /* 7ea8f6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ea8f9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7ea8fa: jmp 0x7ea7ae */
  goto L_7ea7ae;
L_7ea913: /* 7ea913: push 0xa10f00 */
  { uint32_t v = 0xa10f00u; esp -= 4; W32(esp, v); }
/* 7ea918: push 0xade418 */
  { uint32_t v = 0xade418u; esp -= 4; W32(esp, v); }
/* 7ea91d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ea923u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ea923: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ea926: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ea928: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ea92a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ea92fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ea92f: /* 7ea92f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7ea930: xor ebx, ebx */
  ebx = 0;
/* 7ea932: jmp 0x7ea769 */
  goto L_7ea769;
L_7ea937: /* 7ea937: cmp dword ptr [ebp + 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea93a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7ea93d: je 0x7ea99c */
  if (zf) goto L_7ea99c;
L_7ea93f: /* 7ea93f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ea942: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7ea948: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ea94a: je 0x7ea99c */
  if (zf) goto L_7ea99c;
L_7ea94c: /* 7ea94c: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7ea94f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea950: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7ea953: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 7ea956: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea957: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7ea95a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7ea95c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7ea95e: and eax, 0xffffffe7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7ea961: add eax, 0x9f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9fu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ea966: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea967: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ea969: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea96c: mov eax, esp */
  eax = esp;
/* 7ea96e: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7ea970: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7ea973: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7ea976: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7ea979: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7ea97c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ea97f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ea982: mov eax, esp */
  eax = esp;
/* 7ea984: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7ea986: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7ea989: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7ea98c: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7ea98f: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7ea992: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ea995: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ea996: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x7ea999u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ea999: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_7ea99c: /* 7ea99c: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7ea9a1: mov ecx, dword ptr [0xce848c] */
  ecx = R32((uint32_t)(0xce848cu));
/* 7ea9a7: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7ea9aa: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ea9ac: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ea9af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ea9b1: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ea9b3: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7ea9b5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ea9b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ea9b9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ea9bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ea9be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ea9bf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ea9c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ea9c7: mov esp, ebp */
  esp = ebp;
/* 7ea9c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ea9ca: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_7ea9cd(void) {
  LOAD_REGS();
L_7ea9cd: /* 7ea9cd: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7ea9d0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ea9d5: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 7ea9d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ea9d9: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7ea9dc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ea9e1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ea9e1(); return;
}

void f_7ea9e1(void) {
  LOAD_REGS();
L_7ea9e1: /* 7ea9e1: push 0xa10ec4 */
  { uint32_t v = 0xa10ec4u; esp -= 4; W32(esp, v); }
/* 7ea9e6: push 0xade420 */
  { uint32_t v = 0xade420u; esp -= 4; W32(esp, v); }
/* 7ea9eb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ea9f1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ea9f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ea9f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ea9f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ea9f8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ea9fdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ea9fd: guest_badaddr(0x7ea9fd); return;
}

void f_7eab10(void) {
  LOAD_REGS();
L_7eab10: /* 7eab10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7eab11: mov ebp, esp */
  ebp = esp;
/* 7eab13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7eab15: push 0x9d1120 */
  { uint32_t v = 0x9d1120u; esp -= 4; W32(esp, v); }
/* 7eab1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7eab20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eab21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7eab28: sub esp, 0xc9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc9cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eab2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7eab2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eab30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eab31: xor ebx, ebx */
  ebx = 0;
/* 7eab33: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7eab36: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7eab39: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7eab3c: mov edx, 0x40 */
  edx = 0x40u;
/* 7eab41: mov ecx, 0x30 */
  ecx = 0x30u;
/* 7eab46: lea eax, [ebp - 0xca8] */
  eax = (uint32_t)(ebp + 0xfffff358u);
/* 7eab4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7eab50: /* 7eab50: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 7eab51: js 0x7eab5a */
  if (sf) goto L_7eab5a;
L_7eab53: /* 7eab53: mov dword ptr [eax + 0x2c], ebx */
  W32((uint32_t)(eax + 0x2cu), ebx);
/* 7eab56: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7eab58: jmp 0x7eab50 */
  goto L_7eab50;
L_7eab5a: /* 7eab5a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eab5d: cmp dword ptr [eax + 0x1150], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1150u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eab63: je 0x7eabc6 */
  if (zf) goto L_7eabc6;
L_7eab65: /* 7eab65: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 7eab68: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x7eab6eu); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 7eab6e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eab70: je 0x7eabc6 */
  if (zf) goto L_7eabc6;
L_7eab72: /* 7eab72: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 7eab78: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eab7a: je 0x7eabc6 */
  if (zf) goto L_7eabc6;
L_7eab7c: /* 7eab7c: mov byte ptr [ebp - 0x14], 0x80 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x80u);
/* 7eab80: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 7eab84: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 7eab88: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 7eab8c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eab8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eab90: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7eab93: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eab96: mov eax, esp */
  eax = esp;
/* 7eab98: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7eab9a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7eab9d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7eaba0: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7eaba3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7eaba6: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7eaba9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eabac: mov eax, esp */
  eax = esp;
/* 7eabae: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7eabb0: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 7eabb3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7eabb6: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 7eabb9: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7eabbc: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x7eabc1u); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 7eabc1: jmp 0x7eacaf */
  goto L_7eacaf;
L_7eabc6: /* 7eabc6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eabc9: cmp dword ptr [eax + 0x1154], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1154u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eabcf: je 0x7eacaf */
  if (zf) goto L_7eacaf;
L_7eabd5: /* 7eabd5: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 7eabd8: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x7eabdeu); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 7eabde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eabe0: jne 0x7eacaf */
  if (!zf) goto L_7eacaf;
L_7eabe6: /* 7eabe6: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 7eabec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eabee: je 0x7eacaf */
  if (zf) goto L_7eacaf;
L_7eabf4: /* 7eabf4: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* 7eabf7: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 7eabfb: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 7eabff: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 7eac03: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eac06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eac07: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7eac0a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eac0d: mov eax, esp */
  eax = esp;
/* 7eac0f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7eac11: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7eac14: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7eac17: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7eac1a: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7eac1d: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7eac20: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eac23: mov eax, esp */
  eax = esp;
/* 7eac25: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7eac27: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 7eac2a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7eac2d: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 7eac30: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7eac33: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x7eac38u); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 7eac38: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 7eac3b: fadd dword ptr [ebp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x14u)));
/* 7eac3e: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7eac41: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 7eac44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eac45: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 7eac48: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7eac4b: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7eac4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eac4f: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 7eac52: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 7eac58: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 7eac5c: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 7eac60: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7eac63: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 7eac67: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 7eac6b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7eac6e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7eac71: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7eac74: fsub dword ptr [ebp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x2cu)));
/* 7eac77: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7eac7a: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 7eac7d: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7eac80: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 7eac83: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 7eac86: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7eac89: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7eac8c: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x7eac92u); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 7eac92: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eac95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eac96: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eac99: mov esi, eax */
  esi = eax;
/* 7eac9b: mov edi, esp */
  edi = esp;
/* 7eac9d: mov ecx, 7 */
  ecx = 0x7u;
/* 7eaca2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7eaca4: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 7eacaa: call 0x6cc252 */
  esp -= 4; W32(esp, 0x7eacafu); SPILL(); f_6cc252(); if (g_unwind) return; RELOAD();
L_7eacaf: /* 7eacaf: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eacb1: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7eacb4: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7eacb7: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 7eacba: mov edx, dword ptr [ebp + 0x34] */
  edx = R32((uint32_t)(ebp + 0x34u));
/* 7eacbd: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eacc0: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 7eacc3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7eacc6: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7eaccd: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 7eacd0: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 7eacd3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7eacd7: je 0x7eae2b */
  if (zf) goto L_7eae2b;
L_7eacdd: /* 7eacdd: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7eace0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eace2: je 0x7eae2b */
  if (zf) goto L_7eae2b;
L_7eace8: /* 7eace8: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 7eaceb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eacec: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7eacf2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eacf4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eacf7: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7eacfd: mov edx, esp */
  edx = esp;
/* 7eacff: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7ead01: mov edi, dword ptr [ebp + 0x28] */
  edi = R32((uint32_t)(ebp + 0x28u));
/* 7ead04: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7ead07: mov edi, dword ptr [ebp + 0x2c] */
  edi = R32((uint32_t)(ebp + 0x2cu));
/* 7ead0a: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 7ead0d: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 7ead10: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ead12: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ead15: mov edx, esp */
  edx = esp;
/* 7ead17: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7ead19: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 7ead1c: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7ead1f: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 7ead22: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 7ead25: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7ead28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ead2b: mov edx, esp */
  edx = esp;
/* 7ead2d: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7ead2f: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7ead32: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7ead35: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 7ead38: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 7ead3b: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7ead3e: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 7ead41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ead43: lea edx, [ebp + esi - 0xca8] */
  edx = (uint32_t)(ebp + esi + 0xfffff358u);
/* 7ead4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ead4b: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x7ead4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ead4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ead50: jne 0x7eae2b */
  if (!zf) goto L_7eae2b;
L_7ead56: /* 7ead56: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7ead59: mov dword ptr [ebp + esi - 0xca4], eax */
  W32((uint32_t)(ebp + esi + 0xfffff35cu), eax);
/* 7ead60: fld dword ptr [ebp + esi - 0xc98] */
  { double v = F32((uint32_t)(ebp + esi + 0xfffff368u)); FPUSH(v); }
/* 7ead67: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 7ead6a: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ead6d: fld dword ptr [ebp + esi - 0xc9c] */
  { double v = F32((uint32_t)(ebp + esi + 0xfffff364u)); FPUSH(v); }
/* 7ead74: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 7ead77: fld dword ptr [ebp + esi - 0xca0] */
  { double v = F32((uint32_t)(ebp + esi + 0xfffff360u)); FPUSH(v); }
/* 7ead7e: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 7ead81: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7ead84: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7ead87: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7ead8a: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7ead90u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7ead90: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 7ead93: lea esi, [ebp + esi - 0xc84] */
  esi = (uint32_t)(ebp + esi + 0xfffff37cu);
/* 7ead9a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7ead9c: fst dword ptr [esi] */
  WF32((uint32_t)(esi), ST0);
/* 7ead9e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7eada0: fadd dword ptr [0xa07fe4] */
  ST0 = ST0 + (F32((uint32_t)(0xa07fe4u)));
/* 7eada6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7eada8: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7eadaa: fadd dword ptr [0xa087d0] */
  ST0 = ST0 + (F32((uint32_t)(0xa087d0u)));
/* 7eadb0: fdivp st(2) */
  STI(2) = STI(2) / ST0;
  FPOP();
/* 7eadb2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7eadb4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7eadba: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7eadbc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eadbe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7eadc1: jp 0x7eadce */
  if (pf) goto L_7eadce;
L_7eadc3: /* 7eadc3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7eadc5: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7eadcc: jmp 0x7eadd1 */
  goto L_7eadd1;
L_7eadce: /* 7eadce: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_7eadd1: /* 7eadd1: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7eadd4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eadd5: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 7eadd8: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7eaddb: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 7eadde: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7eade1: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 7eade4: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7eade7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eade9: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eadec: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7eadef: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eadf2: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7eadf5: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7eadf8: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eadfb: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7eadfe: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 7eae01: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7eae04: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 7eae07: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7eae0a: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7eae0d: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 7eae10: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7eae13: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7eae16: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 7eae19: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7eae1c: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eae1f: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 7eae22: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7eae25: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eae28: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
L_7eae2b: /* 7eae2b: xor esi, esi */
  esi = 0;
/* 7eae2d: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eae2f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eae32: je 0x7eae40 */
  if (zf) goto L_7eae40;
L_7eae34: /* 7eae34: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7eae37: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae3a: jne 0x7eb1a2 */
  if (!zf) goto L_7eb1a2;
L_7eae40: /* 7eae40: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7eae43: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae45: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7eae49: je 0x7eb0bb */
  if (zf) goto L_7eb0bb;
L_7eae4f: /* 7eae4f: xor ecx, ecx */
  ecx = 0;
L_7eae51: /* 7eae51: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eae54: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7eae57: jge 0x7eb0bb */
  if ((sf == of)) goto L_7eb0bb;
L_7eae5d: /* 7eae5d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eae60: mov edi, dword ptr [edx + 0x8c] */
  edi = R32((uint32_t)(edx + 0x8cu));
/* 7eae66: lea esi, [ecx + ecx*2] */
  esi = (uint32_t)(ecx + ecx*2);
/* 7eae69: mov edi, dword ptr [edi + esi*8 + 0x11c] */
  edi = R32((uint32_t)(edi + esi*8 + 0x11cu));
/* 7eae70: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae72: jne 0x7eae79 */
  if (!zf) goto L_7eae79;
L_7eae74: /* 7eae74: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 7eae77: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
L_7eae79: /* 7eae79: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae7b: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 7eae7e: je 0x7eb0b5 */
  if (zf) goto L_7eb0b5;
L_7eae84: /* 7eae84: test byte ptr [edi + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae8b: je 0x7eb0b5 */
  if (zf) goto L_7eb0b5;
L_7eae91: /* 7eae91: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7eae98: jmp 0x7eaea0 */
  goto L_7eaea0;
L_7eaea0: /* 7eaea0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eaea3: cmp edx, dword ptr [edi + 0x360] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eaea9: jge 0x7eb0b5 */
  if ((sf == of)) goto L_7eb0b5;
L_7eaeaf: /* 7eaeaf: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7eaeb2: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 7eaeb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eaeb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eaeb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaebb: mov eax, esp */
  eax = esp;
/* 7eaebd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7eaebf: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 7eaec2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7eaec5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7eaec8: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7eaecb: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7eaece: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaed1: mov edx, esp */
  edx = esp;
/* 7eaed3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7eaed5: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7eaed8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7eaedb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7eaede: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7eaee1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7eaee4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaee7: mov ecx, esp */
  ecx = esp;
/* 7eaee9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eaeeb: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7eaeee: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7eaef1: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 7eaef4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7eaef7: mov ecx, dword ptr [edi + 0x35c] */
  ecx = R32((uint32_t)(edi + 0x35cu));
/* 7eaefd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eaf00: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 7eaf03: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7eaf06: lea eax, [ebp + esi - 0xca8] */
  eax = (uint32_t)(ebp + esi + 0xfffff358u);
/* 7eaf0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eaf0e: call 0x6c23d3 */
  esp -= 4; W32(esp, 0x7eaf13u); SPILL(); f_6c23d3(); if (g_unwind) return; RELOAD();
/* 7eaf13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eaf15: jne 0x7eb073 */
  if (!zf) goto L_7eb073;
L_7eaf1b: /* 7eaf1b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eaf1e: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7eaf21: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eaf23: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 7eaf26: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaf29: lea edi, [ebp + esi - 0xca0] */
  edi = (uint32_t)(ebp + esi + 0xfffff360u);
/* 7eaf30: mov ecx, esp */
  ecx = esp;
/* 7eaf32: mov eax, edi */
  eax = edi;
/* 7eaf34: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7eaf36: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eaf38: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7eaf3b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eaf3e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7eaf41: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7eaf44: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7eaf47: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eaf4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eaf4b: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7eaf51: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7eaf54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eaf55: call 0x6c9192 */
  esp -= 4; W32(esp, 0x7eaf5au); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 7eaf5a: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7eaf5d: cmp dword ptr [ebp - 0x74], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eaf60: jne 0x7eb070 */
  if (!zf) goto L_7eb070;
L_7eaf66: /* 7eaf66: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7eaf69: mov edx, ecx */
  edx = ecx;
/* 7eaf6b: mov eax, dword ptr [edx + 0x35c] */
  eax = R32((uint32_t)(edx + 0x35cu));
/* 7eaf71: fmul dword ptr [ebp + esi - 0xc84] */
  ST0 = ST0 * (F32((uint32_t)(ebp + esi + 0xfffff37cu)));
/* 7eaf78: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eaf7b: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 7eaf7e: mov dword ptr [ebp + esi - 0xca4], edx */
  W32((uint32_t)(ebp + esi + 0xfffff35cu), edx);
/* 7eaf85: fstp dword ptr [ebp + esi - 0xc84] */
  WF32((uint32_t)(ebp + esi + 0xfffff37cu), ST0); FPOP();
/* 7eaf8c: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 7eaf8f: lea esi, [ebp + esi - 0xc84] */
  esi = (uint32_t)(ebp + esi + 0xfffff37cu);
/* 7eaf96: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 7eaf99: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7eaf9c: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7eaf9f: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 7eafa2: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7eafa4: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 7eafa7: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7eafaa: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7eafad: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7eafb0: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7eafb6u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7eafb6: fst dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0);
/* 7eafb9: fld dword ptr [0xa105c0] */
  { double v = F32((uint32_t)(0xa105c0u)); FPUSH(v); }
/* 7eafbf: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7eafc1: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 7eafc3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eafc5: fadd dword ptr [0xa087d0] */
  ST0 = ST0 + (F32((uint32_t)(0xa087d0u)));
/* 7eafcb: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 7eafcd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7eafd3: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7eafd5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eafd7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7eafda: jp 0x7eb017 */
  if (pf) goto L_7eb017;
L_7eafdc: /* 7eafdc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7eafde: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7eafe5: jmp 0x7eb01a */
  goto L_7eb01a;
L_7eb017: /* 7eb017: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_7eb01a: /* 7eb01a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7eb01d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eb01e: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 7eb021: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7eb024: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 7eb027: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7eb02a: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 7eb02d: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7eb033: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eb035: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eb038: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7eb03b: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eb03e: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 7eb044: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eb047: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 7eb04a: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 7eb04d: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7eb050: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7eb053: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eb055: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7eb058: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 7eb05b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7eb05e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eb061: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 7eb064: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 7eb067: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7eb06a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eb06d: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
L_7eb070: /* 7eb070: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
L_7eb073: /* 7eb073: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eb076: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb079: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7eb07a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7eb07d: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7eb080: jmp 0x7eaea0 */
  goto L_7eaea0;
L_7eb0b5: /* 7eb0b5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7eb0b6: jmp 0x7eae51 */
  goto L_7eae51;
L_7eb0bb: /* 7eb0bb: xor esi, esi */
  esi = 0;
/* 7eb0bd: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb0bf: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eb0c2: je 0x7eb0cd */
  if (zf) goto L_7eb0cd;
L_7eb0c4: /* 7eb0c4: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb0c7: jne 0x7eb1a2 */
  if (!zf) goto L_7eb1a2;
L_7eb0cd: /* 7eb0cd: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7eb0d0: test al, 0x9b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9bu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb0d2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7eb0d6: je 0x7eb19f */
  if (zf) goto L_7eb19f;
L_7eb0dc: /* 7eb0dc: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eb0df: mov ecx, dword ptr [edx + 0xec] */
  ecx = R32((uint32_t)(edx + 0xecu));
/* 7eb0e5: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb0e7: je 0x7eb19f */
  if (zf) goto L_7eb19f;
L_7eb0ed: /* 7eb0ed: mov edi, dword ptr [ebp + 0x38] */
  edi = R32((uint32_t)(ebp + 0x38u));
/* 7eb0f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eb0f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb0f2: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 7eb0f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb0f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb0f9: mov eax, esp */
  eax = esp;
/* 7eb0fb: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7eb0fd: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 7eb100: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7eb103: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 7eb106: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7eb109: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 7eb10c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eb10e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb111: mov eax, esp */
  eax = esp;
/* 7eb113: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7eb115: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7eb118: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7eb11b: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7eb11e: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7eb121: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7eb124: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb127: mov eax, esp */
  eax = esp;
/* 7eb129: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7eb12b: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7eb12e: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7eb131: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7eb134: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7eb137: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7eb13a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb13b: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7eb13eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eb13e: mov edi, edi */
  edi = edi;
L_7eb140: /* 7eb140: xor esi, esi */
  esi = 0;
/* 7eb142: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb144: je 0x7eb19f */
  if (zf) goto L_7eb19f;
L_7eb146: /* 7eb146: cmp ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7eb149: jae 0x7eb19f */
  if (!cf) goto L_7eb19f;
L_7eb14b: /* 7eb14b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7eb14e: lea edi, [ebx + ebx*2] */
  edi = (uint32_t)(ebx + ebx*2);
/* 7eb151: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 7eb154: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7eb157: mov esi, eax */
  esi = eax;
/* 7eb159: lea edi, [ebp + edi - 0xca8] */
  edi = (uint32_t)(ebp + edi + 0xfffff358u);
/* 7eb160: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 7eb163: mov ecx, 0xc */
  ecx = 0xcu;
/* 7eb168: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7eb16a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7eb16c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eb16d: jmp 0x7eb140 */
  goto L_7eb140;
L_7eb19f: /* 7eb19f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
L_7eb1a2: /* 7eb1a2: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb1a4: je 0x7eb254 */
  if (zf) goto L_7eb254;
L_7eb1aa: /* 7eb1aa: push 0x6c8c5b */
  { uint32_t v = 0x6c8c5bu; esp -= 4; W32(esp, v); }
/* 7eb1af: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7eb1b1: lea eax, [ebp - 0xca8] */
  eax = (uint32_t)(ebp + 0xfffff358u);
/* 7eb1b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7eb1b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb1b9: call dword ptr [0xcfaa7c] */
  esp -= 4; W32(esp, 0x7eb1bfu); SPILL(); f_4e1785(); if (g_unwind) return; /* Core!?appQsort@@YAXPAXHHP6AHPBX1@Z@Z */ RELOAD();
/* 7eb1bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eb1c2: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 7eb1c5: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7eb1c8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7eb1ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eb1cb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7eb1ce: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7eb1d4u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7eb1d4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb1d6: je 0x7eb1e0 */
  if (zf) goto L_7eb1e0;
L_7eb1d8: /* 7eb1d8: mov dword ptr [eax + 0x2c], esi */
  W32((uint32_t)(eax + 0x2cu), esi);
/* 7eb1db: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7eb1de: jmp 0x7eb1e3 */
  goto L_7eb1e3;
L_7eb1e0: /* 7eb1e0: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_7eb1e3: /* 7eb1e3: xor edx, edx */
  edx = 0;
L_7eb1e5: /* 7eb1e5: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eb1e7: jge 0x7eb251 */
  if ((sf == of)) goto L_7eb251;
L_7eb1e9: /* 7eb1e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eb1ec: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 7eb1ef: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7eb1f2: lea edi, [eax + ecx] */
  edi = (uint32_t)(eax + ecx);
/* 7eb1f5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eb1f6: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eb1f8: lea esi, [ebp + eax - 0xca8] */
  esi = (uint32_t)(ebp + eax + 0xfffff358u);
/* 7eb1ff: mov ecx, 0xc */
  ecx = 0xcu;
/* 7eb204: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7eb207: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7eb209: jge 0x7eb218 */
  if ((sf == of)) goto L_7eb218;
L_7eb20b: /* 7eb20b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb20e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb211: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7eb214: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7eb216: jmp 0x7eb1e5 */
  goto L_7eb1e5;
L_7eb218: /* 7eb218: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb21b: xor eax, eax */
  eax = 0;
/* 7eb21d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7eb21f: jmp 0x7eb1e5 */
  goto L_7eb1e5;
L_7eb251: /* 7eb251: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7eb254: /* 7eb254: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7eb25a: mov edx, dword ptr [0xce8488] */
  edx = R32((uint32_t)(0xce8488u));
/* 7eb260: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7eb263: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eb265: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7eb268: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eb26a: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7eb26c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7eb26e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eb26f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eb271: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eb274: mov eax, esi */
  eax = esi;
/* 7eb276: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eb277: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eb27e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eb27f: mov esp, ebp */
  esp = ebp;
/* 7eb281: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eb282: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_7eae9a(void) {
  LOAD_REGS();
  goto L_7eae9a;
L_7eae51: /* 7eae51: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eae54: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7eae57: jge 0x7eb0bb */
  if ((sf == of)) goto L_7eb0bb;
L_7eae5d: /* 7eae5d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eae60: mov edi, dword ptr [edx + 0x8c] */
  edi = R32((uint32_t)(edx + 0x8cu));
/* 7eae66: lea esi, [ecx + ecx*2] */
  esi = (uint32_t)(ecx + ecx*2);
/* 7eae69: mov edi, dword ptr [edi + esi*8 + 0x11c] */
  edi = R32((uint32_t)(edi + esi*8 + 0x11cu));
/* 7eae70: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae72: jne 0x7eae79 */
  if (!zf) goto L_7eae79;
L_7eae74: /* 7eae74: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 7eae77: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
L_7eae79: /* 7eae79: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae7b: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 7eae7e: je 0x7eb0b5 */
  if (zf) goto L_7eb0b5;
L_7eae84: /* 7eae84: test byte ptr [edi + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae8b: je 0x7eb0b5 */
  if (zf) goto L_7eb0b5;
L_7eae91: /* 7eae91: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7eae98: jmp 0x7eaea0 */
  goto L_7eaea0;
L_7eae9a: /* 7eae9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7eaea0: /* 7eaea0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eaea3: cmp edx, dword ptr [edi + 0x360] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eaea9: jge 0x7eb0b5 */
  if ((sf == of)) goto L_7eb0b5;
L_7eaeaf: /* 7eaeaf: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7eaeb2: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 7eaeb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eaeb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eaeb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaebb: mov eax, esp */
  eax = esp;
/* 7eaebd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7eaebf: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 7eaec2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7eaec5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7eaec8: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7eaecb: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7eaece: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaed1: mov edx, esp */
  edx = esp;
/* 7eaed3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7eaed5: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7eaed8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7eaedb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7eaede: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7eaee1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7eaee4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaee7: mov ecx, esp */
  ecx = esp;
/* 7eaee9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eaeeb: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7eaeee: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7eaef1: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 7eaef4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7eaef7: mov ecx, dword ptr [edi + 0x35c] */
  ecx = R32((uint32_t)(edi + 0x35cu));
/* 7eaefd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eaf00: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 7eaf03: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7eaf06: lea eax, [ebp + esi - 0xca8] */
  eax = (uint32_t)(ebp + esi + 0xfffff358u);
/* 7eaf0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eaf0e: call 0x6c23d3 */
  esp -= 4; W32(esp, 0x7eaf13u); SPILL(); f_6c23d3(); if (g_unwind) return; RELOAD();
/* 7eaf13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eaf15: jne 0x7eb073 */
  if (!zf) goto L_7eb073;
L_7eaf1b: /* 7eaf1b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eaf1e: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7eaf21: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eaf23: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 7eaf26: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaf29: lea edi, [ebp + esi - 0xca0] */
  edi = (uint32_t)(ebp + esi + 0xfffff360u);
/* 7eaf30: mov ecx, esp */
  ecx = esp;
/* 7eaf32: mov eax, edi */
  eax = edi;
/* 7eaf34: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7eaf36: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eaf38: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7eaf3b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eaf3e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7eaf41: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7eaf44: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7eaf47: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eaf4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eaf4b: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7eaf51: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7eaf54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eaf55: call 0x6c9192 */
  esp -= 4; W32(esp, 0x7eaf5au); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 7eaf5a: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7eaf5d: cmp dword ptr [ebp - 0x74], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eaf60: jne 0x7eb070 */
  if (!zf) goto L_7eb070;
L_7eaf66: /* 7eaf66: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7eaf69: mov edx, ecx */
  edx = ecx;
/* 7eaf6b: mov eax, dword ptr [edx + 0x35c] */
  eax = R32((uint32_t)(edx + 0x35cu));
/* 7eaf71: fmul dword ptr [ebp + esi - 0xc84] */
  ST0 = ST0 * (F32((uint32_t)(ebp + esi + 0xfffff37cu)));
/* 7eaf78: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eaf7b: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 7eaf7e: mov dword ptr [ebp + esi - 0xca4], edx */
  W32((uint32_t)(ebp + esi + 0xfffff35cu), edx);
/* 7eaf85: fstp dword ptr [ebp + esi - 0xc84] */
  WF32((uint32_t)(ebp + esi + 0xfffff37cu), ST0); FPOP();
/* 7eaf8c: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 7eaf8f: lea esi, [ebp + esi - 0xc84] */
  esi = (uint32_t)(ebp + esi + 0xfffff37cu);
/* 7eaf96: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 7eaf99: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7eaf9c: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7eaf9f: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 7eafa2: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7eafa4: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 7eafa7: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7eafaa: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7eafad: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7eafb0: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7eafb6u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7eafb6: fst dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0);
/* 7eafb9: fld dword ptr [0xa105c0] */
  { double v = F32((uint32_t)(0xa105c0u)); FPUSH(v); }
/* 7eafbf: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7eafc1: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 7eafc3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eafc5: fadd dword ptr [0xa087d0] */
  ST0 = ST0 + (F32((uint32_t)(0xa087d0u)));
/* 7eafcb: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 7eafcd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7eafd3: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7eafd5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eafd7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7eafda: jp 0x7eb017 */
  if (pf) goto L_7eb017;
L_7eafdc: /* 7eafdc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7eafde: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7eafe5: jmp 0x7eb01a */
  goto L_7eb01a;
L_7eb017: /* 7eb017: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_7eb01a: /* 7eb01a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7eb01d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eb01e: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 7eb021: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7eb024: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 7eb027: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7eb02a: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 7eb02d: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7eb033: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eb035: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eb038: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7eb03b: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eb03e: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 7eb044: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eb047: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 7eb04a: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 7eb04d: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7eb050: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7eb053: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eb055: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7eb058: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 7eb05b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7eb05e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eb061: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 7eb064: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 7eb067: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7eb06a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eb06d: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
L_7eb070: /* 7eb070: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
L_7eb073: /* 7eb073: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eb076: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb079: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7eb07a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7eb07d: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7eb080: jmp 0x7eaea0 */
  goto L_7eaea0;
L_7eb0b5: /* 7eb0b5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7eb0b6: jmp 0x7eae51 */
  goto L_7eae51;
L_7eb0bb: /* 7eb0bb: xor esi, esi */
  esi = 0;
/* 7eb0bd: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb0bf: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eb0c2: je 0x7eb0cd */
  if (zf) goto L_7eb0cd;
L_7eb0c4: /* 7eb0c4: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb0c7: jne 0x7eb1a2 */
  if (!zf) goto L_7eb1a2;
L_7eb0cd: /* 7eb0cd: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7eb0d0: test al, 0x9b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9bu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb0d2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7eb0d6: je 0x7eb19f */
  if (zf) goto L_7eb19f;
L_7eb0dc: /* 7eb0dc: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eb0df: mov ecx, dword ptr [edx + 0xec] */
  ecx = R32((uint32_t)(edx + 0xecu));
/* 7eb0e5: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb0e7: je 0x7eb19f */
  if (zf) goto L_7eb19f;
L_7eb0ed: /* 7eb0ed: mov edi, dword ptr [ebp + 0x38] */
  edi = R32((uint32_t)(ebp + 0x38u));
/* 7eb0f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eb0f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb0f2: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 7eb0f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb0f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb0f9: mov eax, esp */
  eax = esp;
/* 7eb0fb: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7eb0fd: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 7eb100: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7eb103: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 7eb106: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7eb109: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 7eb10c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eb10e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb111: mov eax, esp */
  eax = esp;
/* 7eb113: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7eb115: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7eb118: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7eb11b: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7eb11e: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7eb121: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7eb124: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb127: mov eax, esp */
  eax = esp;
/* 7eb129: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7eb12b: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7eb12e: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7eb131: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7eb134: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7eb137: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7eb13a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb13b: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7eb13eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eb13e: mov edi, edi */
  edi = edi;
L_7eb140: /* 7eb140: xor esi, esi */
  esi = 0;
/* 7eb142: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb144: je 0x7eb19f */
  if (zf) goto L_7eb19f;
L_7eb146: /* 7eb146: cmp ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7eb149: jae 0x7eb19f */
  if (!cf) goto L_7eb19f;
L_7eb14b: /* 7eb14b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7eb14e: lea edi, [ebx + ebx*2] */
  edi = (uint32_t)(ebx + ebx*2);
/* 7eb151: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 7eb154: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7eb157: mov esi, eax */
  esi = eax;
/* 7eb159: lea edi, [ebp + edi - 0xca8] */
  edi = (uint32_t)(ebp + edi + 0xfffff358u);
/* 7eb160: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 7eb163: mov ecx, 0xc */
  ecx = 0xcu;
/* 7eb168: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7eb16a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7eb16c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eb16d: jmp 0x7eb140 */
  goto L_7eb140;
L_7eb19f: /* 7eb19f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
L_7eb1a2: /* 7eb1a2: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb1a4: je 0x7eb254 */
  if (zf) goto L_7eb254;
L_7eb1aa: /* 7eb1aa: push 0x6c8c5b */
  { uint32_t v = 0x6c8c5bu; esp -= 4; W32(esp, v); }
/* 7eb1af: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7eb1b1: lea eax, [ebp - 0xca8] */
  eax = (uint32_t)(ebp + 0xfffff358u);
/* 7eb1b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7eb1b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb1b9: call dword ptr [0xcfaa7c] */
  esp -= 4; W32(esp, 0x7eb1bfu); SPILL(); f_4e1785(); if (g_unwind) return; /* Core!?appQsort@@YAXPAXHHP6AHPBX1@Z@Z */ RELOAD();
/* 7eb1bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eb1c2: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 7eb1c5: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7eb1c8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7eb1ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eb1cb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7eb1ce: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7eb1d4u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7eb1d4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb1d6: je 0x7eb1e0 */
  if (zf) goto L_7eb1e0;
L_7eb1d8: /* 7eb1d8: mov dword ptr [eax + 0x2c], esi */
  W32((uint32_t)(eax + 0x2cu), esi);
/* 7eb1db: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7eb1de: jmp 0x7eb1e3 */
  goto L_7eb1e3;
L_7eb1e0: /* 7eb1e0: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_7eb1e3: /* 7eb1e3: xor edx, edx */
  edx = 0;
L_7eb1e5: /* 7eb1e5: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eb1e7: jge 0x7eb251 */
  if ((sf == of)) goto L_7eb251;
L_7eb1e9: /* 7eb1e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eb1ec: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 7eb1ef: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7eb1f2: lea edi, [eax + ecx] */
  edi = (uint32_t)(eax + ecx);
/* 7eb1f5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eb1f6: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eb1f8: lea esi, [ebp + eax - 0xca8] */
  esi = (uint32_t)(ebp + eax + 0xfffff358u);
/* 7eb1ff: mov ecx, 0xc */
  ecx = 0xcu;
/* 7eb204: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7eb207: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7eb209: jge 0x7eb218 */
  if ((sf == of)) goto L_7eb218;
L_7eb20b: /* 7eb20b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb20e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb211: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7eb214: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7eb216: jmp 0x7eb1e5 */
  goto L_7eb1e5;
L_7eb218: /* 7eb218: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb21b: xor eax, eax */
  eax = 0;
/* 7eb21d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7eb21f: jmp 0x7eb1e5 */
  goto L_7eb1e5;
L_7eb251: /* 7eb251: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7eb254: /* 7eb254: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7eb25a: mov edx, dword ptr [0xce8488] */
  edx = R32((uint32_t)(0xce8488u));
/* 7eb260: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7eb263: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eb265: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7eb268: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eb26a: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7eb26c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7eb26e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eb26f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eb271: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eb274: mov eax, esi */
  eax = esi;
/* 7eb276: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eb277: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eb27e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eb27f: mov esp, ebp */
  esp = ebp;
/* 7eb281: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eb282: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_7eafe7(void) {
  LOAD_REGS();
L_7eafe7: /* 7eafe7: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7eafea: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7eafef: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 7eaff2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eaff3: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 7eaff6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eaffbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7eaffb(); return;
}

void f_7eaffb(void) {
  LOAD_REGS();
  goto L_7eaffb;
L_7eae51: /* 7eae51: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eae54: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7eae57: jge 0x7eb0bb */
  if ((sf == of)) goto L_7eb0bb;
L_7eae5d: /* 7eae5d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eae60: mov edi, dword ptr [edx + 0x8c] */
  edi = R32((uint32_t)(edx + 0x8cu));
/* 7eae66: lea esi, [ecx + ecx*2] */
  esi = (uint32_t)(ecx + ecx*2);
/* 7eae69: mov edi, dword ptr [edi + esi*8 + 0x11c] */
  edi = R32((uint32_t)(edi + esi*8 + 0x11cu));
/* 7eae70: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae72: jne 0x7eae79 */
  if (!zf) goto L_7eae79;
L_7eae74: /* 7eae74: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 7eae77: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
L_7eae79: /* 7eae79: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae7b: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 7eae7e: je 0x7eb0b5 */
  if (zf) goto L_7eb0b5;
L_7eae84: /* 7eae84: test byte ptr [edi + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae8b: je 0x7eb0b5 */
  if (zf) goto L_7eb0b5;
L_7eae91: /* 7eae91: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7eae98: jmp 0x7eaea0 */
  goto L_7eaea0;
L_7eaea0: /* 7eaea0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eaea3: cmp edx, dword ptr [edi + 0x360] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eaea9: jge 0x7eb0b5 */
  if ((sf == of)) goto L_7eb0b5;
L_7eaeaf: /* 7eaeaf: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7eaeb2: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 7eaeb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eaeb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eaeb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaebb: mov eax, esp */
  eax = esp;
/* 7eaebd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7eaebf: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 7eaec2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7eaec5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7eaec8: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7eaecb: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7eaece: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaed1: mov edx, esp */
  edx = esp;
/* 7eaed3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7eaed5: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7eaed8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7eaedb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7eaede: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7eaee1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7eaee4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaee7: mov ecx, esp */
  ecx = esp;
/* 7eaee9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eaeeb: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7eaeee: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7eaef1: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 7eaef4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7eaef7: mov ecx, dword ptr [edi + 0x35c] */
  ecx = R32((uint32_t)(edi + 0x35cu));
/* 7eaefd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eaf00: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 7eaf03: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7eaf06: lea eax, [ebp + esi - 0xca8] */
  eax = (uint32_t)(ebp + esi + 0xfffff358u);
/* 7eaf0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eaf0e: call 0x6c23d3 */
  esp -= 4; W32(esp, 0x7eaf13u); SPILL(); f_6c23d3(); if (g_unwind) return; RELOAD();
/* 7eaf13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eaf15: jne 0x7eb073 */
  if (!zf) goto L_7eb073;
L_7eaf1b: /* 7eaf1b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eaf1e: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7eaf21: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eaf23: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 7eaf26: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaf29: lea edi, [ebp + esi - 0xca0] */
  edi = (uint32_t)(ebp + esi + 0xfffff360u);
/* 7eaf30: mov ecx, esp */
  ecx = esp;
/* 7eaf32: mov eax, edi */
  eax = edi;
/* 7eaf34: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7eaf36: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eaf38: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7eaf3b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eaf3e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7eaf41: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7eaf44: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7eaf47: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eaf4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eaf4b: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7eaf51: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7eaf54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eaf55: call 0x6c9192 */
  esp -= 4; W32(esp, 0x7eaf5au); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 7eaf5a: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7eaf5d: cmp dword ptr [ebp - 0x74], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eaf60: jne 0x7eb070 */
  if (!zf) goto L_7eb070;
L_7eaf66: /* 7eaf66: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7eaf69: mov edx, ecx */
  edx = ecx;
/* 7eaf6b: mov eax, dword ptr [edx + 0x35c] */
  eax = R32((uint32_t)(edx + 0x35cu));
/* 7eaf71: fmul dword ptr [ebp + esi - 0xc84] */
  ST0 = ST0 * (F32((uint32_t)(ebp + esi + 0xfffff37cu)));
/* 7eaf78: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eaf7b: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 7eaf7e: mov dword ptr [ebp + esi - 0xca4], edx */
  W32((uint32_t)(ebp + esi + 0xfffff35cu), edx);
/* 7eaf85: fstp dword ptr [ebp + esi - 0xc84] */
  WF32((uint32_t)(ebp + esi + 0xfffff37cu), ST0); FPOP();
/* 7eaf8c: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 7eaf8f: lea esi, [ebp + esi - 0xc84] */
  esi = (uint32_t)(ebp + esi + 0xfffff37cu);
/* 7eaf96: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 7eaf99: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7eaf9c: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7eaf9f: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 7eafa2: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7eafa4: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 7eafa7: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7eafaa: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7eafad: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7eafb0: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7eafb6u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7eafb6: fst dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0);
/* 7eafb9: fld dword ptr [0xa105c0] */
  { double v = F32((uint32_t)(0xa105c0u)); FPUSH(v); }
/* 7eafbf: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7eafc1: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 7eafc3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eafc5: fadd dword ptr [0xa087d0] */
  ST0 = ST0 + (F32((uint32_t)(0xa087d0u)));
/* 7eafcb: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 7eafcd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7eafd3: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7eafd5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eafd7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7eafda: jp 0x7eb017 */
  if (pf) goto L_7eb017;
L_7eafdc: /* 7eafdc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7eafde: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7eafe5: jmp 0x7eb01a */
  goto L_7eb01a;
L_7eaffb: /* 7eaffb: push 0xa10fb0 */
  { uint32_t v = 0xa10fb0u; esp -= 4; W32(esp, v); }
/* 7eb000: push 0xade430 */
  { uint32_t v = 0xade430u; esp -= 4; W32(esp, v); }
/* 7eb005: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7eb00bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7eb00b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eb00e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eb010: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eb012: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eb017u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7eb017: /* 7eb017: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_7eb01a: /* 7eb01a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7eb01d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eb01e: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 7eb021: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7eb024: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 7eb027: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7eb02a: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 7eb02d: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7eb033: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eb035: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eb038: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7eb03b: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eb03e: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 7eb044: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eb047: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 7eb04a: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 7eb04d: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7eb050: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7eb053: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eb055: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7eb058: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 7eb05b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7eb05e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eb061: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 7eb064: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 7eb067: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7eb06a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eb06d: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
L_7eb070: /* 7eb070: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
L_7eb073: /* 7eb073: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eb076: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb079: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7eb07a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7eb07d: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7eb080: jmp 0x7eaea0 */
  goto L_7eaea0;
L_7eb0b5: /* 7eb0b5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7eb0b6: jmp 0x7eae51 */
  goto L_7eae51;
L_7eb0bb: /* 7eb0bb: xor esi, esi */
  esi = 0;
/* 7eb0bd: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb0bf: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eb0c2: je 0x7eb0cd */
  if (zf) goto L_7eb0cd;
L_7eb0c4: /* 7eb0c4: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb0c7: jne 0x7eb1a2 */
  if (!zf) goto L_7eb1a2;
L_7eb0cd: /* 7eb0cd: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7eb0d0: test al, 0x9b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9bu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb0d2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7eb0d6: je 0x7eb19f */
  if (zf) goto L_7eb19f;
L_7eb0dc: /* 7eb0dc: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eb0df: mov ecx, dword ptr [edx + 0xec] */
  ecx = R32((uint32_t)(edx + 0xecu));
/* 7eb0e5: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb0e7: je 0x7eb19f */
  if (zf) goto L_7eb19f;
L_7eb0ed: /* 7eb0ed: mov edi, dword ptr [ebp + 0x38] */
  edi = R32((uint32_t)(ebp + 0x38u));
/* 7eb0f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eb0f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb0f2: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 7eb0f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb0f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb0f9: mov eax, esp */
  eax = esp;
/* 7eb0fb: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7eb0fd: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 7eb100: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7eb103: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 7eb106: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7eb109: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 7eb10c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eb10e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb111: mov eax, esp */
  eax = esp;
/* 7eb113: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7eb115: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7eb118: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7eb11b: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7eb11e: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7eb121: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7eb124: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb127: mov eax, esp */
  eax = esp;
/* 7eb129: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7eb12b: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7eb12e: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7eb131: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7eb134: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7eb137: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7eb13a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb13b: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7eb13eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eb13e: mov edi, edi */
  edi = edi;
L_7eb140: /* 7eb140: xor esi, esi */
  esi = 0;
/* 7eb142: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb144: je 0x7eb19f */
  if (zf) goto L_7eb19f;
L_7eb146: /* 7eb146: cmp ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7eb149: jae 0x7eb19f */
  if (!cf) goto L_7eb19f;
L_7eb14b: /* 7eb14b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7eb14e: lea edi, [ebx + ebx*2] */
  edi = (uint32_t)(ebx + ebx*2);
/* 7eb151: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 7eb154: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7eb157: mov esi, eax */
  esi = eax;
/* 7eb159: lea edi, [ebp + edi - 0xca8] */
  edi = (uint32_t)(ebp + edi + 0xfffff358u);
/* 7eb160: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 7eb163: mov ecx, 0xc */
  ecx = 0xcu;
/* 7eb168: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7eb16a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7eb16c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eb16d: jmp 0x7eb140 */
  goto L_7eb140;
L_7eb19f: /* 7eb19f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
L_7eb1a2: /* 7eb1a2: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb1a4: je 0x7eb254 */
  if (zf) goto L_7eb254;
L_7eb1aa: /* 7eb1aa: push 0x6c8c5b */
  { uint32_t v = 0x6c8c5bu; esp -= 4; W32(esp, v); }
/* 7eb1af: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7eb1b1: lea eax, [ebp - 0xca8] */
  eax = (uint32_t)(ebp + 0xfffff358u);
/* 7eb1b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7eb1b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb1b9: call dword ptr [0xcfaa7c] */
  esp -= 4; W32(esp, 0x7eb1bfu); SPILL(); f_4e1785(); if (g_unwind) return; /* Core!?appQsort@@YAXPAXHHP6AHPBX1@Z@Z */ RELOAD();
/* 7eb1bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eb1c2: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 7eb1c5: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7eb1c8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7eb1ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eb1cb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7eb1ce: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7eb1d4u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7eb1d4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb1d6: je 0x7eb1e0 */
  if (zf) goto L_7eb1e0;
L_7eb1d8: /* 7eb1d8: mov dword ptr [eax + 0x2c], esi */
  W32((uint32_t)(eax + 0x2cu), esi);
/* 7eb1db: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7eb1de: jmp 0x7eb1e3 */
  goto L_7eb1e3;
L_7eb1e0: /* 7eb1e0: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_7eb1e3: /* 7eb1e3: xor edx, edx */
  edx = 0;
L_7eb1e5: /* 7eb1e5: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eb1e7: jge 0x7eb251 */
  if ((sf == of)) goto L_7eb251;
L_7eb1e9: /* 7eb1e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eb1ec: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 7eb1ef: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7eb1f2: lea edi, [eax + ecx] */
  edi = (uint32_t)(eax + ecx);
/* 7eb1f5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eb1f6: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eb1f8: lea esi, [ebp + eax - 0xca8] */
  esi = (uint32_t)(ebp + eax + 0xfffff358u);
/* 7eb1ff: mov ecx, 0xc */
  ecx = 0xcu;
/* 7eb204: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7eb207: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7eb209: jge 0x7eb218 */
  if ((sf == of)) goto L_7eb218;
L_7eb20b: /* 7eb20b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb20e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb211: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7eb214: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7eb216: jmp 0x7eb1e5 */
  goto L_7eb1e5;
L_7eb218: /* 7eb218: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb21b: xor eax, eax */
  eax = 0;
/* 7eb21d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7eb21f: jmp 0x7eb1e5 */
  goto L_7eb1e5;
L_7eb251: /* 7eb251: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7eb254: /* 7eb254: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7eb25a: mov edx, dword ptr [0xce8488] */
  edx = R32((uint32_t)(0xce8488u));
/* 7eb260: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7eb263: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eb265: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7eb268: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eb26a: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7eb26c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7eb26e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eb26f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eb271: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eb274: mov eax, esi */
  eax = esi;
/* 7eb276: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eb277: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eb27e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eb27f: mov esp, ebp */
  esp = ebp;
/* 7eb281: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eb282: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_7eb085(void) {
  LOAD_REGS();
L_7eb085: /* 7eb085: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7eb088: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7eb08d: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7eb090: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eb091: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 7eb094: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eb099u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7eb099(); return;
}

void f_7eb099(void) {
  LOAD_REGS();
  goto L_7eb099;
L_7eae51: /* 7eae51: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eae54: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7eae57: jge 0x7eb0bb */
  if ((sf == of)) goto L_7eb0bb;
L_7eae5d: /* 7eae5d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eae60: mov edi, dword ptr [edx + 0x8c] */
  edi = R32((uint32_t)(edx + 0x8cu));
/* 7eae66: lea esi, [ecx + ecx*2] */
  esi = (uint32_t)(ecx + ecx*2);
/* 7eae69: mov edi, dword ptr [edi + esi*8 + 0x11c] */
  edi = R32((uint32_t)(edi + esi*8 + 0x11cu));
/* 7eae70: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae72: jne 0x7eae79 */
  if (!zf) goto L_7eae79;
L_7eae74: /* 7eae74: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 7eae77: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
L_7eae79: /* 7eae79: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae7b: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 7eae7e: je 0x7eb0b5 */
  if (zf) goto L_7eb0b5;
L_7eae84: /* 7eae84: test byte ptr [edi + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eae8b: je 0x7eb0b5 */
  if (zf) goto L_7eb0b5;
L_7eae91: /* 7eae91: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7eae98: jmp 0x7eaea0 */
  goto L_7eaea0;
L_7eaea0: /* 7eaea0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eaea3: cmp edx, dword ptr [edi + 0x360] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eaea9: jge 0x7eb0b5 */
  if ((sf == of)) goto L_7eb0b5;
L_7eaeaf: /* 7eaeaf: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7eaeb2: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 7eaeb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eaeb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eaeb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaebb: mov eax, esp */
  eax = esp;
/* 7eaebd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7eaebf: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 7eaec2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7eaec5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7eaec8: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7eaecb: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7eaece: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaed1: mov edx, esp */
  edx = esp;
/* 7eaed3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7eaed5: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7eaed8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7eaedb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7eaede: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7eaee1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7eaee4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaee7: mov ecx, esp */
  ecx = esp;
/* 7eaee9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eaeeb: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7eaeee: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7eaef1: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 7eaef4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7eaef7: mov ecx, dword ptr [edi + 0x35c] */
  ecx = R32((uint32_t)(edi + 0x35cu));
/* 7eaefd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eaf00: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 7eaf03: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7eaf06: lea eax, [ebp + esi - 0xca8] */
  eax = (uint32_t)(ebp + esi + 0xfffff358u);
/* 7eaf0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eaf0e: call 0x6c23d3 */
  esp -= 4; W32(esp, 0x7eaf13u); SPILL(); f_6c23d3(); if (g_unwind) return; RELOAD();
/* 7eaf13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eaf15: jne 0x7eb073 */
  if (!zf) goto L_7eb073;
L_7eaf1b: /* 7eaf1b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eaf1e: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7eaf21: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eaf23: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 7eaf26: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eaf29: lea edi, [ebp + esi - 0xca0] */
  edi = (uint32_t)(ebp + esi + 0xfffff360u);
/* 7eaf30: mov ecx, esp */
  ecx = esp;
/* 7eaf32: mov eax, edi */
  eax = edi;
/* 7eaf34: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7eaf36: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eaf38: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7eaf3b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eaf3e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7eaf41: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7eaf44: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7eaf47: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eaf4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eaf4b: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7eaf51: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7eaf54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eaf55: call 0x6c9192 */
  esp -= 4; W32(esp, 0x7eaf5au); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 7eaf5a: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7eaf5d: cmp dword ptr [ebp - 0x74], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eaf60: jne 0x7eb070 */
  if (!zf) goto L_7eb070;
L_7eaf66: /* 7eaf66: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7eaf69: mov edx, ecx */
  edx = ecx;
/* 7eaf6b: mov eax, dword ptr [edx + 0x35c] */
  eax = R32((uint32_t)(edx + 0x35cu));
/* 7eaf71: fmul dword ptr [ebp + esi - 0xc84] */
  ST0 = ST0 * (F32((uint32_t)(ebp + esi + 0xfffff37cu)));
/* 7eaf78: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eaf7b: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 7eaf7e: mov dword ptr [ebp + esi - 0xca4], edx */
  W32((uint32_t)(ebp + esi + 0xfffff35cu), edx);
/* 7eaf85: fstp dword ptr [ebp + esi - 0xc84] */
  WF32((uint32_t)(ebp + esi + 0xfffff37cu), ST0); FPOP();
/* 7eaf8c: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 7eaf8f: lea esi, [ebp + esi - 0xc84] */
  esi = (uint32_t)(ebp + esi + 0xfffff37cu);
/* 7eaf96: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 7eaf99: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7eaf9c: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7eaf9f: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 7eafa2: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7eafa4: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 7eafa7: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7eafaa: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7eafad: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7eafb0: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7eafb6u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7eafb6: fst dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0);
/* 7eafb9: fld dword ptr [0xa105c0] */
  { double v = F32((uint32_t)(0xa105c0u)); FPUSH(v); }
/* 7eafbf: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7eafc1: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 7eafc3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eafc5: fadd dword ptr [0xa087d0] */
  ST0 = ST0 + (F32((uint32_t)(0xa087d0u)));
/* 7eafcb: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 7eafcd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7eafd3: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7eafd5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7eafd7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7eafda: jp 0x7eb017 */
  if (pf) goto L_7eb017;
L_7eafdc: /* 7eafdc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7eafde: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7eafe5: jmp 0x7eb01a */
  goto L_7eb01a;
L_7eb017: /* 7eb017: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_7eb01a: /* 7eb01a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7eb01d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eb01e: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 7eb021: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7eb024: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 7eb027: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7eb02a: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 7eb02d: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7eb033: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eb035: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eb038: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7eb03b: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eb03e: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 7eb044: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7eb047: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 7eb04a: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 7eb04d: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7eb050: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7eb053: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eb055: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7eb058: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 7eb05b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7eb05e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eb061: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 7eb064: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 7eb067: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7eb06a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eb06d: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
L_7eb070: /* 7eb070: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
L_7eb073: /* 7eb073: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eb076: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb079: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7eb07a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7eb07d: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7eb080: jmp 0x7eaea0 */
  goto L_7eaea0;
L_7eb099: /* 7eb099: push 0xa10f88 */
  { uint32_t v = 0xa10f88u; esp -= 4; W32(esp, v); }
/* 7eb09e: push 0xade438 */
  { uint32_t v = 0xade438u; esp -= 4; W32(esp, v); }
/* 7eb0a3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7eb0a9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7eb0a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eb0ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eb0ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eb0b0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eb0b5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7eb0b5: /* 7eb0b5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7eb0b6: jmp 0x7eae51 */
  goto L_7eae51;
L_7eb0bb: /* 7eb0bb: xor esi, esi */
  esi = 0;
/* 7eb0bd: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb0bf: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eb0c2: je 0x7eb0cd */
  if (zf) goto L_7eb0cd;
L_7eb0c4: /* 7eb0c4: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb0c7: jne 0x7eb1a2 */
  if (!zf) goto L_7eb1a2;
L_7eb0cd: /* 7eb0cd: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7eb0d0: test al, 0x9b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9bu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb0d2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7eb0d6: je 0x7eb19f */
  if (zf) goto L_7eb19f;
L_7eb0dc: /* 7eb0dc: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eb0df: mov ecx, dword ptr [edx + 0xec] */
  ecx = R32((uint32_t)(edx + 0xecu));
/* 7eb0e5: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb0e7: je 0x7eb19f */
  if (zf) goto L_7eb19f;
L_7eb0ed: /* 7eb0ed: mov edi, dword ptr [ebp + 0x38] */
  edi = R32((uint32_t)(ebp + 0x38u));
/* 7eb0f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eb0f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb0f2: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 7eb0f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb0f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb0f9: mov eax, esp */
  eax = esp;
/* 7eb0fb: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7eb0fd: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 7eb100: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7eb103: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 7eb106: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7eb109: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 7eb10c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eb10e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb111: mov eax, esp */
  eax = esp;
/* 7eb113: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7eb115: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7eb118: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7eb11b: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 7eb11e: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7eb121: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7eb124: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb127: mov eax, esp */
  eax = esp;
/* 7eb129: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7eb12b: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7eb12e: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7eb131: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7eb134: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7eb137: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7eb13a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb13b: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7eb13eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eb13e: mov edi, edi */
  edi = edi;
L_7eb140: /* 7eb140: xor esi, esi */
  esi = 0;
/* 7eb142: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb144: je 0x7eb19f */
  if (zf) goto L_7eb19f;
L_7eb146: /* 7eb146: cmp ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7eb149: jae 0x7eb19f */
  if (!cf) goto L_7eb19f;
L_7eb14b: /* 7eb14b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7eb14e: lea edi, [ebx + ebx*2] */
  edi = (uint32_t)(ebx + ebx*2);
/* 7eb151: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 7eb154: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7eb157: mov esi, eax */
  esi = eax;
/* 7eb159: lea edi, [ebp + edi - 0xca8] */
  edi = (uint32_t)(ebp + edi + 0xfffff358u);
/* 7eb160: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 7eb163: mov ecx, 0xc */
  ecx = 0xcu;
/* 7eb168: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7eb16a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7eb16c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7eb16d: jmp 0x7eb140 */
  goto L_7eb140;
L_7eb19f: /* 7eb19f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
L_7eb1a2: /* 7eb1a2: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb1a4: je 0x7eb254 */
  if (zf) goto L_7eb254;
L_7eb1aa: /* 7eb1aa: push 0x6c8c5b */
  { uint32_t v = 0x6c8c5bu; esp -= 4; W32(esp, v); }
/* 7eb1af: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7eb1b1: lea eax, [ebp - 0xca8] */
  eax = (uint32_t)(ebp + 0xfffff358u);
/* 7eb1b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7eb1b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb1b9: call dword ptr [0xcfaa7c] */
  esp -= 4; W32(esp, 0x7eb1bfu); SPILL(); f_4e1785(); if (g_unwind) return; /* Core!?appQsort@@YAXPAXHHP6AHPBX1@Z@Z */ RELOAD();
/* 7eb1bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eb1c2: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 7eb1c5: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7eb1c8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7eb1ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eb1cb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7eb1ce: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7eb1d4u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7eb1d4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb1d6: je 0x7eb1e0 */
  if (zf) goto L_7eb1e0;
L_7eb1d8: /* 7eb1d8: mov dword ptr [eax + 0x2c], esi */
  W32((uint32_t)(eax + 0x2cu), esi);
/* 7eb1db: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7eb1de: jmp 0x7eb1e3 */
  goto L_7eb1e3;
L_7eb1e0: /* 7eb1e0: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_7eb1e3: /* 7eb1e3: xor edx, edx */
  edx = 0;
L_7eb1e5: /* 7eb1e5: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eb1e7: jge 0x7eb251 */
  if ((sf == of)) goto L_7eb251;
L_7eb1e9: /* 7eb1e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eb1ec: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 7eb1ef: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7eb1f2: lea edi, [eax + ecx] */
  edi = (uint32_t)(eax + ecx);
/* 7eb1f5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eb1f6: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eb1f8: lea esi, [ebp + eax - 0xca8] */
  esi = (uint32_t)(ebp + eax + 0xfffff358u);
/* 7eb1ff: mov ecx, 0xc */
  ecx = 0xcu;
/* 7eb204: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7eb207: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7eb209: jge 0x7eb218 */
  if ((sf == of)) goto L_7eb218;
L_7eb20b: /* 7eb20b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb20e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb211: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7eb214: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7eb216: jmp 0x7eb1e5 */
  goto L_7eb1e5;
L_7eb218: /* 7eb218: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb21b: xor eax, eax */
  eax = 0;
/* 7eb21d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7eb21f: jmp 0x7eb1e5 */
  goto L_7eb1e5;
L_7eb251: /* 7eb251: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7eb254: /* 7eb254: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7eb25a: mov edx, dword ptr [0xce8488] */
  edx = R32((uint32_t)(0xce8488u));
/* 7eb260: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7eb263: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eb265: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7eb268: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eb26a: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7eb26c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7eb26e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eb26f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eb271: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eb274: mov eax, esi */
  eax = esi;
/* 7eb276: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eb277: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eb27e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eb27f: mov esp, ebp */
  esp = ebp;
/* 7eb281: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eb282: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_7eb16f(void) {
  LOAD_REGS();
L_7eb16f: /* 7eb16f: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7eb172: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7eb177: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 7eb17a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eb17b: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 7eb17e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eb183u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7eb183(); return;
}

void f_7eb183(void) {
  LOAD_REGS();
L_7eb183: /* 7eb183: push 0xa10f60 */
  { uint32_t v = 0xa10f60u; esp -= 4; W32(esp, v); }
/* 7eb188: push 0xade440 */
  { uint32_t v = 0xade440u; esp -= 4; W32(esp, v); }
/* 7eb18d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7eb193u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7eb193: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eb196: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eb198: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eb19a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eb19fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7eb19f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7eb1a2: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb1a4: je 0x7eb254 */
  if (zf) goto L_7eb254;
L_7eb1aa: /* 7eb1aa: push 0x6c8c5b */
  { uint32_t v = 0x6c8c5bu; esp -= 4; W32(esp, v); }
/* 7eb1af: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7eb1b1: lea eax, [ebp - 0xca8] */
  eax = (uint32_t)(ebp + 0xfffff358u);
/* 7eb1b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7eb1b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb1b9: call dword ptr [0xcfaa7c] */
  esp -= 4; W32(esp, 0x7eb1bfu); SPILL(); f_4e1785(); if (g_unwind) return; /* Core!?appQsort@@YAXPAXHHP6AHPBX1@Z@Z */ RELOAD();
/* 7eb1bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eb1c2: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 7eb1c5: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7eb1c8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7eb1ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eb1cb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7eb1ce: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7eb1d4u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7eb1d4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb1d6: je 0x7eb1e0 */
  if (zf) goto L_7eb1e0;
L_7eb1d8: /* 7eb1d8: mov dword ptr [eax + 0x2c], esi */
  W32((uint32_t)(eax + 0x2cu), esi);
/* 7eb1db: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7eb1de: jmp 0x7eb1e3 */
  goto L_7eb1e3;
L_7eb1e0: /* 7eb1e0: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_7eb1e3: /* 7eb1e3: xor edx, edx */
  edx = 0;
L_7eb1e5: /* 7eb1e5: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eb1e7: jge 0x7eb251 */
  if ((sf == of)) goto L_7eb251;
L_7eb1e9: /* 7eb1e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eb1ec: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 7eb1ef: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7eb1f2: lea edi, [eax + ecx] */
  edi = (uint32_t)(eax + ecx);
/* 7eb1f5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7eb1f6: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eb1f8: lea esi, [ebp + eax - 0xca8] */
  esi = (uint32_t)(ebp + eax + 0xfffff358u);
/* 7eb1ff: mov ecx, 0xc */
  ecx = 0xcu;
/* 7eb204: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7eb207: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7eb209: jge 0x7eb218 */
  if ((sf == of)) goto L_7eb218;
L_7eb20b: /* 7eb20b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb20e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb211: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7eb214: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7eb216: jmp 0x7eb1e5 */
  goto L_7eb1e5;
L_7eb218: /* 7eb218: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb21b: xor eax, eax */
  eax = 0;
/* 7eb21d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7eb21f: jmp 0x7eb1e5 */
  goto L_7eb1e5;
L_7eb251: /* 7eb251: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7eb254: /* 7eb254: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7eb25a: mov edx, dword ptr [0xce8488] */
  edx = R32((uint32_t)(0xce8488u));
/* 7eb260: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7eb263: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eb265: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7eb268: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eb26a: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7eb26c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7eb26e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eb26f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eb271: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eb274: mov eax, esi */
  eax = esi;
/* 7eb276: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eb277: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eb27e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eb27f: mov esp, ebp */
  esp = ebp;
/* 7eb281: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eb282: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_7eb221(void) {
  LOAD_REGS();
L_7eb221: /* 7eb221: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7eb224: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7eb229: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 7eb22c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb22d: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 7eb230: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eb235u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7eb235(); return;
}

void f_7eb235(void) {
  LOAD_REGS();
L_7eb235: /* 7eb235: push 0xa10f28 */
  { uint32_t v = 0xa10f28u; esp -= 4; W32(esp, v); }
/* 7eb23a: push 0xade448 */
  { uint32_t v = 0xade448u; esp -= 4; W32(esp, v); }
/* 7eb23f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7eb245u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7eb245: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eb248: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eb24a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eb24c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eb251u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7eb251: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7eb254: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7eb25a: mov edx, dword ptr [0xce8488] */
  edx = R32((uint32_t)(0xce8488u));
/* 7eb260: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7eb263: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7eb265: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7eb268: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eb26a: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7eb26c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7eb26e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eb26f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eb271: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eb274: mov eax, esi */
  eax = esi;
/* 7eb276: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eb277: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eb27e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eb27f: mov esp, ebp */
  esp = ebp;
/* 7eb281: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eb282: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_7eb470(void) {
  LOAD_REGS();
L_7eb470: /* 7eb470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7eb471: mov ebp, esp */
  ebp = esp;
/* 7eb473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7eb475: push 0x9d1130 */
  { uint32_t v = 0x9d1130u; esp -= 4; W32(esp, v); }
/* 7eb47a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7eb480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7eb488: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb48b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7eb48c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb48d: mov esi, ecx */
  esi = ecx;
/* 7eb48f: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7eb495: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb498: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eb499: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7eb49c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7eb4a3: jne 0x7eb5d9 */
  if (!zf) goto L_7eb5d9;
L_7eb4a9: /* 7eb4a9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7eb4ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb4ae: je 0x7eb4ce */
  if (zf) goto L_7eb4ce;
L_7eb4b0: /* 7eb4b0: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 7eb4b6: lea edx, [esi + 0xc0] */
  edx = (uint32_t)(esi + 0xc0u);
/* 7eb4bc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7eb4be: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7eb4c1: mov byte ptr [ebp - 0x1c], 0 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7eb4c5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eb4c8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7eb4cb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_7eb4ce: /* 7eb4ce: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7eb4d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb4d7: lea ebx, [esi + 0x170] */
  ebx = (uint32_t)(esi + 0x170u);
/* 7eb4dd: mov edx, esp */
  edx = esp;
/* 7eb4df: mov ecx, ebx */
  ecx = ebx;
/* 7eb4e1: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7eb4e3: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7eb4e5: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7eb4e8: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7eb4eb: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7eb4ee: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7eb4f1: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 7eb4f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eb4f8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7eb4fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eb4fc: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7eb502: call 0x6c9192 */
  esp -= 4; W32(esp, 0x7eb507u); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 7eb507: mov ecx, dword ptr [esi + 0xc0] */
  ecx = R32((uint32_t)(esi + 0xc0u));
/* 7eb50d: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eb510: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb512: lea edi, [esi + 0xc0] */
  edi = (uint32_t)(esi + 0xc0u);
/* 7eb518: je 0x7eb556 */
  if (zf) goto L_7eb556;
L_7eb51a: /* 7eb51a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7eb51d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb51f: jne 0x7eb535 */
  if (!zf) goto L_7eb535;
L_7eb521: /* 7eb521: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb522: call 0x6c6523 */
  esp -= 4; W32(esp, 0x7eb527u); SPILL(); f_6c6523(); if (g_unwind) return; RELOAD();
/* 7eb527: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eb52a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eb52b: mov ecx, esi */
  ecx = esi;
/* 7eb52d: call 0x6c7cf7 */
  esp -= 4; W32(esp, 0x7eb532u); SPILL(); f_6c7cf7(); if (g_unwind) return; RELOAD();
/* 7eb532: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
L_7eb535: /* 7eb535: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb538: mov ecx, edi */
  ecx = edi;
/* 7eb53a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7eb53c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eb53f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7eb542: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7eb545: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7eb548: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb54a: jne 0x7eb564 */
  if (!zf) goto L_7eb564;
L_7eb54c: /* 7eb54c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7eb54e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb54f: call 0x6c86f2 */
  esp -= 4; W32(esp, 0x7eb554u); SPILL(); f_6c86f2(); if (g_unwind) return; RELOAD();
/* 7eb554: jmp 0x7eb564 */
  goto L_7eb564;
L_7eb556: /* 7eb556: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb559: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eb55c: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7eb55e: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 7eb561: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
L_7eb564: /* 7eb564: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb56b: je 0x7eb582 */
  if (zf) goto L_7eb582;
L_7eb56d: /* 7eb56d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7eb570: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb572: jne 0x7eb582 */
  if (!zf) goto L_7eb582;
L_7eb574: /* 7eb574: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7eb577: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb579: jne 0x7eb582 */
  if (!zf) goto L_7eb582;
L_7eb57b: /* 7eb57b: mov eax, 1 */
  eax = 0x1u;
/* 7eb580: jmp 0x7eb584 */
  goto L_7eb584;
L_7eb582: /* 7eb582: xor eax, eax */
  eax = 0;
L_7eb584: /* 7eb584: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7eb586: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 7eb589: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb58a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb58b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb58e: mov eax, esp */
  eax = esp;
/* 7eb590: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7eb592: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 7eb595: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7eb598: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7eb59b: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7eb5a1: call 0x6c3f62 */
  esp -= 4; W32(esp, 0x7eb5a6u); SPILL(); f_6c3f62(); if (g_unwind) return; RELOAD();
/* 7eb5a6: mov edi, eax */
  edi = eax;
/* 7eb5a8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7eb5ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb5ad: jne 0x7eb5ec */
  if (!zf) goto L_7eb5ec;
L_7eb5af: /* 7eb5af: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 7eb5b5: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb5b7: je 0x7eb5d9 */
  if (zf) goto L_7eb5d9;
L_7eb5b9: /* 7eb5b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb5bb: je 0x7eb5cb */
  if (zf) goto L_7eb5cb;
L_7eb5bd: /* 7eb5bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb5be: call 0x6c6c30 */
  esp -= 4; W32(esp, 0x7eb5c3u); SPILL(); f_6c6c30(); if (g_unwind) return; RELOAD();
/* 7eb5c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eb5c4: mov ecx, esi */
  ecx = esi;
/* 7eb5c6: call 0x6c3f1c */
  esp -= 4; W32(esp, 0x7eb5cbu); SPILL(); f_6c3f1c(); if (g_unwind) return; RELOAD();
L_7eb5cb: /* 7eb5cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb5cc: mov ecx, edi */
  ecx = edi;
/* 7eb5ce: mov dword ptr [esi + 0x16c], edi */
  W32((uint32_t)(esi + 0x16cu), edi);
/* 7eb5d4: call 0x6c1c1c */
  esp -= 4; W32(esp, 0x7eb5d9u); SPILL(); f_6c1c1c(); if (g_unwind) return; RELOAD();
L_7eb5d9: /* 7eb5d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eb5dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eb5e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eb5e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eb5e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eb5e6: mov esp, ebp */
  esp = ebp;
/* 7eb5e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eb5e9: ret 8 */
  esp += 12; SPILL(); return;
L_7eb5ec: /* 7eb5ec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eb5ef: mov dword ptr [esi + 0x16c], edi */
  W32((uint32_t)(esi + 0x16cu), edi);
/* 7eb5f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eb5f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eb5f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eb5fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eb5ff: mov esp, ebp */
  esp = ebp;
/* 7eb601: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eb602: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7eb605(void) {
  LOAD_REGS();
L_7eb605: /* 7eb605: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eb608: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7eb60d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7eb610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb611: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7eb614: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eb619u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7eb619(); return;
}

void f_7eb619(void) {
  LOAD_REGS();
L_7eb619: /* 7eb619: push 0xa10fd4 */
  { uint32_t v = 0xa10fd4u; esp -= 4; W32(esp, v); }
/* 7eb61e: push 0xade450 */
  { uint32_t v = 0xade450u; esp -= 4; W32(esp, v); }
/* 7eb623: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7eb629u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7eb629: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eb62c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eb62e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eb630: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eb635u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7eb635: guest_badaddr(0x7eb635); return;
}

void f_7eb6c0(void) {
  LOAD_REGS();
L_7eb6c0: /* 7eb6c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7eb6c1: mov ebp, esp */
  ebp = esp;
/* 7eb6c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7eb6c5: push 0x9d1140 */
  { uint32_t v = 0x9d1140u; esp -= 4; W32(esp, v); }
/* 7eb6ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7eb6d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb6d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7eb6d8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb6db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7eb6dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb6dd: mov esi, ecx */
  esi = ecx;
/* 7eb6df: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7eb6e5: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb6e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eb6e9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7eb6ec: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7eb6f3: jne 0x7eb8d2 */
  if (!zf) goto L_7eb8d2;
L_7eb6f9: /* 7eb6f9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7eb6fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb6fe: je 0x7eb71e */
  if (zf) goto L_7eb71e;
L_7eb700: /* 7eb700: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 7eb706: lea edx, [esi + 0xc0] */
  edx = (uint32_t)(esi + 0xc0u);
/* 7eb70c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7eb70e: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7eb711: mov byte ptr [ebp - 0x28], 0 */
  W8((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7eb715: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eb718: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7eb71b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_7eb71e: /* 7eb71e: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7eb724: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb727: lea ebx, [esi + 0x170] */
  ebx = (uint32_t)(esi + 0x170u);
/* 7eb72d: mov edx, esp */
  edx = esp;
/* 7eb72f: mov ecx, ebx */
  ecx = ebx;
/* 7eb731: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7eb733: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7eb735: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7eb738: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7eb73b: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7eb73e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7eb741: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 7eb747: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eb748: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7eb74b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eb74c: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7eb752: call 0x6c9192 */
  esp -= 4; W32(esp, 0x7eb757u); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 7eb757: mov ecx, dword ptr [esi + 0xc0] */
  ecx = R32((uint32_t)(esi + 0xc0u));
/* 7eb75d: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eb760: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb762: lea edi, [esi + 0xc0] */
  edi = (uint32_t)(esi + 0xc0u);
/* 7eb768: je 0x7eb7a6 */
  if (zf) goto L_7eb7a6;
L_7eb76a: /* 7eb76a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7eb76d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb76f: jne 0x7eb785 */
  if (!zf) goto L_7eb785;
L_7eb771: /* 7eb771: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb772: call 0x6c6523 */
  esp -= 4; W32(esp, 0x7eb777u); SPILL(); f_6c6523(); if (g_unwind) return; RELOAD();
/* 7eb777: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7eb77a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7eb77b: mov ecx, esi */
  ecx = esi;
/* 7eb77d: call 0x6c7cf7 */
  esp -= 4; W32(esp, 0x7eb782u); SPILL(); f_6c7cf7(); if (g_unwind) return; RELOAD();
/* 7eb782: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
L_7eb785: /* 7eb785: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb788: mov ecx, edi */
  ecx = edi;
/* 7eb78a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7eb78c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eb78f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7eb792: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7eb795: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7eb798: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb79a: jne 0x7eb7b4 */
  if (!zf) goto L_7eb7b4;
L_7eb79c: /* 7eb79c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7eb79e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb79f: call 0x6c86f2 */
  esp -= 4; W32(esp, 0x7eb7a4u); SPILL(); f_6c86f2(); if (g_unwind) return; RELOAD();
/* 7eb7a4: jmp 0x7eb7b4 */
  goto L_7eb7b4;
L_7eb7a6: /* 7eb7a6: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7eb7a9: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7eb7ac: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7eb7ae: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 7eb7b1: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
L_7eb7b4: /* 7eb7b4: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb7bb: je 0x7eb7d2 */
  if (zf) goto L_7eb7d2;
L_7eb7bd: /* 7eb7bd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7eb7c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb7c2: jne 0x7eb7d2 */
  if (!zf) goto L_7eb7d2;
L_7eb7c4: /* 7eb7c4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7eb7c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb7c9: jne 0x7eb7d2 */
  if (!zf) goto L_7eb7d2;
L_7eb7cb: /* 7eb7cb: mov eax, 1 */
  eax = 0x1u;
/* 7eb7d0: jmp 0x7eb7d4 */
  goto L_7eb7d4;
L_7eb7d2: /* 7eb7d2: xor eax, eax */
  eax = 0;
L_7eb7d4: /* 7eb7d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb7d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb7d6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb7d9: mov eax, ebx */
  eax = ebx;
/* 7eb7db: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7eb7dd: mov ecx, esp */
  ecx = esp;
/* 7eb7df: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eb7e1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7eb7e4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7eb7e7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7eb7ea: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7eb7ed: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7eb7f3: call 0x6c3f62 */
  esp -= 4; W32(esp, 0x7eb7f8u); SPILL(); f_6c3f62(); if (g_unwind) return; RELOAD();
/* 7eb7f8: mov edi, eax */
  edi = eax;
/* 7eb7fa: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb801: je 0x7eb818 */
  if (zf) goto L_7eb818;
L_7eb803: /* 7eb803: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7eb806: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb808: jne 0x7eb818 */
  if (!zf) goto L_7eb818;
L_7eb80a: /* 7eb80a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7eb80d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb80f: jne 0x7eb818 */
  if (!zf) goto L_7eb818;
L_7eb811: /* 7eb811: mov eax, 1 */
  eax = 0x1u;
/* 7eb816: jmp 0x7eb81a */
  goto L_7eb81a;
L_7eb818: /* 7eb818: xor eax, eax */
  eax = 0;
L_7eb81a: /* 7eb81a: fld dword ptr [esi + 0x444] */
  { double v = F32((uint32_t)(esi + 0x444u)); FPUSH(v); }
/* 7eb820: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7eb822: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 7eb825: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb826: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 7eb829: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb82a: mov eax, ecx */
  eax = ecx;
/* 7eb82c: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7eb82f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eb832: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7eb835: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7eb838: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7eb83b: mov edx, esp */
  edx = esp;
/* 7eb83d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7eb83f: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7eb842: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7eb845: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7eb84b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7eb84e: call 0x6c3f62 */
  esp -= 4; W32(esp, 0x7eb853u); SPILL(); f_6c3f62(); if (g_unwind) return; RELOAD();
/* 7eb853: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 7eb859: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb85b: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7eb85e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7eb861: je 0x7eb89b */
  if (zf) goto L_7eb89b;
L_7eb863: /* 7eb863: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb865: jne 0x7eb889 */
  if (!zf) goto L_7eb889;
L_7eb867: /* 7eb867: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb869: je 0x7eb879 */
  if (zf) goto L_7eb879;
L_7eb86b: /* 7eb86b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb86c: call 0x6ccc4d */
  esp -= 4; W32(esp, 0x7eb871u); SPILL(); f_6ccc4d(); if (g_unwind) return; RELOAD();
/* 7eb871: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eb872: mov ecx, esi */
  ecx = esi;
/* 7eb874: call 0x6c3f1c */
  esp -= 4; W32(esp, 0x7eb879u); SPILL(); f_6c3f1c(); if (g_unwind) return; RELOAD();
L_7eb879: /* 7eb879: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7eb87f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb881: je 0x7eb889 */
  if (zf) goto L_7eb889;
L_7eb883: /* 7eb883: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eb884: call 0x6c391d */
  esp -= 4; W32(esp, 0x7eb889u); SPILL(); f_6c391d(); if (g_unwind) return; RELOAD();
L_7eb889: /* 7eb889: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb88b: mov dword ptr [esi + 0x16c], edi */
  W32((uint32_t)(esi + 0x16cu), edi);
/* 7eb891: jne 0x7eb89b */
  if (!zf) goto L_7eb89b;
L_7eb893: /* 7eb893: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb894: mov ecx, edi */
  ecx = edi;
/* 7eb896: call 0x6c5123 */
  esp -= 4; W32(esp, 0x7eb89bu); SPILL(); f_6c5123(); if (g_unwind) return; RELOAD();
L_7eb89b: /* 7eb89b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7eb89e: cmp eax, dword ptr [esi + 0x468] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x468u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7eb8a4: je 0x7eb8d2 */
  if (zf) goto L_7eb8d2;
L_7eb8a6: /* 7eb8a6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb8a8: jne 0x7eb8c9 */
  if (!zf) goto L_7eb8c9;
L_7eb8aa: /* 7eb8aa: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7eb8b0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb8b2: je 0x7eb8be */
  if (zf) goto L_7eb8be;
L_7eb8b4: /* 7eb8b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb8b5: call 0x6c27ac */
  esp -= 4; W32(esp, 0x7eb8bau); SPILL(); f_6c27ac(); if (g_unwind) return; RELOAD();
/* 7eb8ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eb8bc: jne 0x7eb8c9 */
  if (!zf) goto L_7eb8c9;
L_7eb8be: /* 7eb8be: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7eb8c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eb8c2: mov ecx, esi */
  ecx = esi;
/* 7eb8c4: call 0x6cc7ca */
  esp -= 4; W32(esp, 0x7eb8c9u); SPILL(); f_6cc7ca(); if (g_unwind) return; RELOAD();
L_7eb8c9: /* 7eb8c9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7eb8cc: mov dword ptr [esi + 0x468], edx */
  W32((uint32_t)(esi + 0x468u), edx);
L_7eb8d2: /* 7eb8d2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7eb8d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7eb8d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eb8d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eb8de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7eb8df: mov esp, ebp */
  esp = ebp;
/* 7eb8e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7eb8e2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7eb8e5(void) {
  LOAD_REGS();
L_7eb8e5: /* 7eb8e5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7eb8e8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7eb8ed: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7eb8f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eb8f1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7eb8f4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eb8f9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7eb8f9(); return;
}

void f_7eb8f9(void) {
  LOAD_REGS();
L_7eb8f9: /* 7eb8f9: push 0xa10ffc */
  { uint32_t v = 0xa10ffcu; esp -= 4; W32(esp, v); }
/* 7eb8fe: push 0xade460 */
  { uint32_t v = 0xade460u; esp -= 4; W32(esp, v); }
/* 7eb903: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7eb909u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7eb909: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eb90c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eb90e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7eb910: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7eb915u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7eb915: guest_badaddr(0x7eb915); return;
}

void f_7eb9c0(void) {
  LOAD_REGS();
L_7eb9c0: /* 7eb9c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7eb9c2: push 0x9d115c */
  { uint32_t v = 0x9d115cu; esp -= 4; W32(esp, v); }
/* 7eb9c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7eb9cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7eb9ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7eb9d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7eb9d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eb9d7: mov esi, ecx */
  esi = ecx;
/* 7eb9d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7eb9dd: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7eb9e0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7eb9e8: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x7eb9edu); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 7eb9ed: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7eb9f0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7eb9f8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7eb9feu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7eb9fe: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7eba02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eba03: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7eba0a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7eba0d: ret  */
  esp += 4; SPILL(); return;
}

void f_7eba30(void) {
  LOAD_REGS();
L_7eba30: /* 7eba30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eba31: mov esi, ecx */
  esi = ecx;
/* 7eba33: call 0x6c542f */
  esp -= 4; W32(esp, 0x7eba38u); SPILL(); f_6c542f(); if (g_unwind) return; RELOAD();
/* 7eba38: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7eba3d: je 0x7eba4c */
  if (zf) goto L_7eba4c;
L_7eba3f: /* 7eba3f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7eba44: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7eba46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7eba48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eba49: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7eba4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7eba4c: /* 7eba4c: mov eax, esi */
  eax = esi;
/* 7eba4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eba4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7eba70(void) {
  LOAD_REGS();
L_7eba70: /* 7eba70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7eba71: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7eba75: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7eba77: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7eba78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eba79: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7eba7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7eba80: mov ebp, ecx */
  ebp = ecx;
/* 7eba82: jge 0x7eba98 */
  if ((sf == of)) goto L_7eba98;
L_7eba84: /* 7eba84: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7eba89: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7eba8e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7eba93: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7eba95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7eba95: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7eba98: /* 7eba98: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7eba9b: jle 0x7ebab1 */
  if ((zf || sf != of)) goto L_7ebab1;
L_7eba9d: /* 7eba9d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7ebaa2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7ebaa7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7ebaac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ebaaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ebaae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ebab1: /* 7ebab1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7ebab5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 7ebab8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ebabb: jle 0x7ebad1 */
  if ((zf || sf != of)) goto L_7ebad1;
L_7ebabd: /* 7ebabd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7ebac2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7ebac7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7ebacc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ebaceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ebace: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ebad1: /* 7ebad1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ebad3: jge 0x7ebaf0 */
  if ((sf == of)) goto L_7ebaf0;
L_7ebad5: /* 7ebad5: mov esi, ebx */
  esi = ebx;
/* 7ebad7: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 7ebada: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7ebadc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7ebae0: /* 7ebae0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7ebae3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ebae5: call 0x6c542f */
  esp -= 4; W32(esp, 0x7ebaeau); SPILL(); f_6c542f(); if (g_unwind) return; RELOAD();
/* 7ebaea: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ebaed: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7ebaee: jne 0x7ebae0 */
  if (!zf) goto L_7ebae0;
L_7ebaf0: /* 7ebaf0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7ebaf4: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7ebaf6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ebaf7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ebaf8: mov ecx, ebp */
  ecx = ebp;
/* 7ebafa: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7ebb00u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7ebb00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ebb01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ebb02: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ebb03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ebb04: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ebb40(void) {
  LOAD_REGS();
L_7ebb40: /* 7ebb40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ebb42: push 0x9d1179 */
  { uint32_t v = 0x9d1179u; esp -= 4; W32(esp, v); }
/* 7ebb47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ebb4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebb4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ebb55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ebb56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ebb57: mov esi, ecx */
  esi = ecx;
/* 7ebb59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7ebb5d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ebb60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebb61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ebb63: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7ebb6b: call 0x6c1929 */
  esp -= 4; W32(esp, 0x7ebb70u); SPILL(); f_6c1929(); if (g_unwind) return; RELOAD();
/* 7ebb70: mov ecx, esi */
  ecx = esi;
/* 7ebb72: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7ebb7a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7ebb80u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7ebb80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7ebb84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ebb85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ebb8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ebb8f: ret  */
  esp += 4; SPILL(); return;
}

void f_7ebbb0(void) {
  LOAD_REGS();
L_7ebbb0: /* 7ebbb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ebbb1: mov ebp, esp */
  ebp = esp;
/* 7ebbb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ebbb5: push 0x9d11c4 */
  { uint32_t v = 0x9d11c4u; esp -= 4; W32(esp, v); }
/* 7ebbba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ebbc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebbc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ebbc8: sub esp, 0xe50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ebbce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ebbcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ebbd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ebbd1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ebbd4: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7ebbd7: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7ebbda: xor esi, esi */
  esi = 0;
/* 7ebbdc: push 0xb847a4 */
  { uint32_t v = 0xb847a4u; esp -= 4; W32(esp, v); }
/* 7ebbe1: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7ebbe4: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7ebbeau); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7ebbea: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7ebbed: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ebbef: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 7ebbf2: je 0x7ebc0e */
  if (zf) goto L_7ebc0e;
L_7ebbf4: /* 7ebbf4: push 0xceefd0 */
  { uint32_t v = 0xceefd0u; esp -= 4; W32(esp, v); }
/* 7ebbf9: mov ecx, edi */
  ecx = edi;
/* 7ebbfb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7ebc01u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7ebc01: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ebc03: je 0x7ebc0e */
  if (zf) goto L_7ebc0e;
L_7ebc05: /* 7ebc05: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7ebc0b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_7ebc0e: /* 7ebc0e: mov cx, word ptr [0xb847a8] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb847a8u))) & 0xffffu);
/* 7ebc15: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 7ebc18: mov word ptr [ebp - 0xe5c], cx */
  W16((uint32_t)(ebp + 0xfffff1a4u), (ecx & 0xffffu));
/* 7ebc1f: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* 7ebc24: xor eax, eax */
  eax = 0;
/* 7ebc26: lea edi, [ebp - 0xe5a] */
  edi = (uint32_t)(ebp + 0xfffff1a6u);
/* 7ebc2c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7ebc2e: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7ebc30: mov edi, dword ptr [0xcfa914] */
  edi = R32((uint32_t)(0xcfa914u));
L_7ebc36: /* 7ebc36: cmp esi, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ebc39: jge 0x7ebc6b */
  if ((sf == of)) goto L_7ebc6b;
L_7ebc3b: /* 7ebc3b: lea edx, [ebp - 0xe5c] */
  edx = (uint32_t)(ebp + 0xfffff1a4u);
/* 7ebc41: push 0xade06c */
  { uint32_t v = 0xade06cu; esp -= 4; W32(esp, v); }
/* 7ebc46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ebc47: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ebc49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ebc49: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 7ebc4c: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 7ebc4f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ebc52: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7ebc55: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ebc5bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ebc5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebc5c: lea edx, [ebp - 0xe5c] */
  edx = (uint32_t)(ebp + 0xfffff1a4u);
/* 7ebc62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ebc63: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ebc65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ebc65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ebc68: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7ebc69: jmp 0x7ebc36 */
  goto L_7ebc36;
L_7ebc6b: /* 7ebc6b: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ebc6e: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7ebc71: lea ecx, [ebp - 0xe5c] */
  ecx = (uint32_t)(ebp + 0xfffff1a4u);
/* 7ebc77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ebc78: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ebc7b: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7ebc7e: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7ebc84u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7ebc84: lea ecx, [ebx + 0x34] */
  ecx = (uint32_t)(ebx + 0x34u);
/* 7ebc87: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ebc8b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ebc91u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ebc91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebc92: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7ebc95: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7ebc9bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7ebc9b: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 7ebc9e: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7ebca1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7ebca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ebca4: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ebca7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ebca8: mov ecx, dword ptr [eax + 0x508] */
  ecx = R32((uint32_t)(eax + 0x508u));
/* 7ebcae: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 7ebcb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ebcb2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7ebcb6: call 0x6c9570 */
  esp -= 4; W32(esp, 0x7ebcbbu); SPILL(); f_6c9570(); if (g_unwind) return; RELOAD();
/* 7ebcbb: mov ebx, eax */
  ebx = eax;
/* 7ebcbd: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7ebcc0: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7ebcc3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ebcc7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ebccdu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ebccd: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7ebcd0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ebcd4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ebcdau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ebcda: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ebcdc: jne 0x7ebd17 */
  if (!zf) goto L_7ebd17;
L_7ebcde: /* 7ebcde: mov ecx, esi */
  ecx = esi;
/* 7ebce0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ebce6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ebce6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebce7: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7ebcec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ebcee: push 0xade070 */
  { uint32_t v = 0xade070u; esp -= 4; W32(esp, v); }
/* 7ebcf3: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 7ebcf8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ebcf9: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7ebcffu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7ebcff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ebd02: xor eax, eax */
  eax = 0;
/* 7ebd04: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ebd07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ebd0e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ebd0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ebd10: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ebd11: mov esp, ebp */
  esp = ebp;
/* 7ebd13: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ebd14: ret 0x10 */
  esp += 20; SPILL(); return;
L_7ebd17: /* 7ebd17: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7ebd1a: push 0xb847ac */
  { uint32_t v = 0xb847acu; esp -= 4; W32(esp, v); }
/* 7ebd1f: push 0xade094 */
  { uint32_t v = 0xade094u; esp -= 4; W32(esp, v); }
/* 7ebd24: mov ecx, edi */
  ecx = edi;
/* 7ebd26: call 0x6c3b0c */
  esp -= 4; W32(esp, 0x7ebd2bu); SPILL(); f_6c3b0c(); if (g_unwind) return; RELOAD();
/* 7ebd2b: lea esi, [ebx + 0x4e4] */
  esi = (uint32_t)(ebx + 0x4e4u);
/* 7ebd31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebd32: mov ecx, esi */
  ecx = esi;
/* 7ebd34: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7ebd3au); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7ebd3a: mov ecx, esi */
  ecx = esi;
/* 7ebd3c: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7ebd42u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7ebd42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ebd44: jne 0x7ebd5f */
  if (!zf) goto L_7ebd5f;
L_7ebd46: /* 7ebd46: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7ebd4c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7ebd4e: push 0xade0b0 */
  { uint32_t v = 0xade0b0u; esp -= 4; W32(esp, v); }
/* 7ebd53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebd54: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ebd5au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ebd5a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ebd5d: jmp 0x7ebddd */
  goto L_7ebddd;
L_7ebd5f: /* 7ebd5f: push 0xb847b0 */
  { uint32_t v = 0xb847b0u; esp -= 4; W32(esp, v); }
/* 7ebd64: push 0xade114 */
  { uint32_t v = 0xade114u; esp -= 4; W32(esp, v); }
/* 7ebd69: mov ecx, edi */
  ecx = edi;
/* 7ebd6b: call 0x6c3b0c */
  esp -= 4; W32(esp, 0x7ebd70u); SPILL(); f_6c3b0c(); if (g_unwind) return; RELOAD();
/* 7ebd70: lea edi, [ebx + 0x4cc] */
  edi = (uint32_t)(ebx + 0x4ccu);
/* 7ebd76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebd77: mov ecx, edi */
  ecx = edi;
/* 7ebd79: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7ebd7fu); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7ebd7f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7ebd82: push 0xb847b4 */
  { uint32_t v = 0xb847b4u; esp -= 4; W32(esp, v); }
/* 7ebd87: push 0xade120 */
  { uint32_t v = 0xade120u; esp -= 4; W32(esp, v); }
/* 7ebd8c: call 0x6c3b0c */
  esp -= 4; W32(esp, 0x7ebd91u); SPILL(); f_6c3b0c(); if (g_unwind) return; RELOAD();
/* 7ebd91: lea esi, [ebx + 0x4d8] */
  esi = (uint32_t)(ebx + 0x4d8u);
/* 7ebd97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebd98: mov ecx, esi */
  ecx = esi;
/* 7ebd9a: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7ebda0u); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7ebda0: mov ecx, esi */
  ecx = esi;
/* 7ebda2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ebda8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ebda8: mov ecx, edi */
  ecx = edi;
/* 7ebdaa: mov ebx, eax */
  ebx = eax;
/* 7ebdac: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ebdb2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ebdb2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ebdb5: add ecx, 0x4e4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4e4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ebdbb: mov esi, eax */
  esi = eax;
/* 7ebdbd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ebdc3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ebdc3: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7ebdc9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ebdcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ebdcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ebdcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebdce: push 0xade130 */
  { uint32_t v = 0xade130u; esp -= 4; W32(esp, v); }
/* 7ebdd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ebdd4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ebddau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ebdda: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ebddd: /* 7ebddd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ebde0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ebde3: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 7ebde6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ebde9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7ebdec: xor ecx, ecx */
  ecx = 0;
/* 7ebdee: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ebdf0: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7ebdf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ebdf4: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7ebdf7: mov ecx, edi */
  ecx = edi;
/* 7ebdf9: call 0x6c20fe */
  esp -= 4; W32(esp, 0x7ebdfeu); SPILL(); f_6c20fe(); if (g_unwind) return; RELOAD();
/* 7ebdfe: mov ecx, esi */
  ecx = esi;
/* 7ebe00: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7ebe06u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7ebe06: mov ecx, edi */
  ecx = edi;
/* 7ebe08: mov esi, eax */
  esi = eax;
/* 7ebe0a: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7ebe10u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7ebe10: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7ebe16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ebe17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebe18: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7ebe1a: push 0xade1b8 */
  { uint32_t v = 0xade1b8u; esp -= 4; W32(esp, v); }
/* 7ebe1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebe20: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ebe26u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ebe26: mov cl, byte ptr [ebp + 0xc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 7ebe29: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ebe2c: mov ebx, dword ptr [0xcfa2c0] */
  ebx = R32((uint32_t)(0xcfa2c0u));
/* 7ebe32: mov byte ptr [edi + 0x90], cl */
  W8((uint32_t)(edi + 0x90u), (ecx & 0xffu));
/* 7ebe38: mov byte ptr [edi + 0x91], 4 */
  W8((uint32_t)(edi + 0x91u), 0x4u);
/* 7ebe3f: mov dword ptr [edi + 0x534], 0x334cc80c */
  W32((uint32_t)(edi + 0x534u), 0x334cc80cu);
/* 7ebe49: mov dword ptr [edi + 0x540], 5 */
  W32((uint32_t)(edi + 0x540u), 0x5u);
/* 7ebe53: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7ebe56: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7ebe58: mov ecx, dword ptr [0xb7e3e0] */
  ecx = R32((uint32_t)(0xb7e3e0u));
/* 7ebe5e: mov esi, dword ptr [eax + 0x508] */
  esi = R32((uint32_t)(eax + 0x508u));
/* 7ebe64: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ebe67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ebe69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ebe6a: mov ecx, esi */
  ecx = esi;
/* 7ebe6c: mov dword ptr [ebp + 0x14], edi */
  W32((uint32_t)(ebp + 0x14u), edi);
/* 7ebe6f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ebe71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ebe71: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ebe73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ebe75: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 7ebe78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ebe79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebe7a: mov ecx, esi */
  ecx = esi;
/* 7ebe7c: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ebe7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ebe7f: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7ebe85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ebe87: je 0x7ec504 */
  if (zf) goto L_7ec504;
L_7ebe8d: /* 7ebe8d: mov edx, dword ptr [0xb7e39c] */
  edx = R32((uint32_t)(0xb7e39cu));
/* 7ebe93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ebe95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ebe96: mov ecx, edi */
  ecx = edi;
/* 7ebe98: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ebe9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ebe9a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7ebe9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ebe9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ebea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebea1: mov ecx, edi */
  ecx = edi;
/* 7ebea3: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ebea6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ebea6: mov esi, dword ptr [edi + 0x33c] */
  esi = R32((uint32_t)(edi + 0x33cu));
/* 7ebeac: mov eax, dword ptr [0xb7e39c] */
  eax = R32((uint32_t)(0xb7e39cu));
/* 7ebeb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ebeb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebeb4: mov ecx, esi */
  ecx = esi;
/* 7ebeb6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ebeb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ebeb8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ebeba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ebebc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ebebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebebf: mov ecx, esi */
  ecx = esi;
/* 7ebec1: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ebec4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ebec4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ebec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ebec9: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
/* 7ebed0: je 0x7ebf83 */
  if (zf) goto L_7ebf83;
L_7ebed6: /* 7ebed6: mov ecx, 0xcebd20 */
  ecx = 0xcebd20u;
/* 7ebedb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ebee1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ebee1: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7ebee4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebee5: push 0xade1dc */
  { uint32_t v = 0xade1dcu; esp -= 4; W32(esp, v); }
/* 7ebeea: call 0x6c3b0c */
  esp -= 4; W32(esp, 0x7ebeefu); SPILL(); f_6c3b0c(); if (g_unwind) return; RELOAD();
/* 7ebeef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ebef1: je 0x7ebf33 */
  if (zf) goto L_7ebf33;
L_7ebef3: /* 7ebef3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebef4: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ebef7: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7ebefdu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7ebefd: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ebf00: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7ebf03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebf04: lea ecx, [ebx + 0xd8] */
  ecx = (uint32_t)(ebx + 0xd8u);
/* 7ebf0a: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ebf0e: call 0x6c2fae */
  esp -= 4; W32(esp, 0x7ebf13u); SPILL(); f_6c2fae(); if (g_unwind) return; RELOAD();
/* 7ebf13: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ebf16: mov esi, eax */
  esi = eax;
/* 7ebf18: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ebf1c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ebf22u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ebf22: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ebf24: je 0x7ebf36 */
  if (zf) goto L_7ebf36;
L_7ebf26: /* 7ebf26: mov ecx, esi */
  ecx = esi;
/* 7ebf28: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ebf2eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ebf2e: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 7ebf31: jmp 0x7ebf36 */
  goto L_7ebf36;
L_7ebf33: /* 7ebf33: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
L_7ebf36: /* 7ebf36: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7ebf39: xor ecx, ecx */
  ecx = 0;
/* 7ebf3b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ebf3d: jne 0x7ebf83 */
  if (!zf) goto L_7ebf83;
L_7ebf3f: /* 7ebf3f: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 7ebf42: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7ebf44: mov dl, byte ptr [eax + 0x4c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7ebf4a: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ebf4c: jne 0x7ebf83 */
  if (!zf) goto L_7ebf83;
L_7ebf4e: /* 7ebf4e: lea eax, [ebx + 0xd8] */
  eax = (uint32_t)(ebx + 0xd8u);
/* 7ebf54: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 7ebf57: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7ebf5a: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7ebf5d: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7ebf60: cmp dword ptr [eax + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ebf63: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7ebf67: jle 0x7ebf77 */
  if ((zf || sf != of)) goto L_7ebf77;
L_7ebf69: /* 7ebf69: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ebf6b: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ebf6e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ebf74u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ebf74: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
L_7ebf77: /* 7ebf77: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7ebf7a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ebf7e: call 0x6c388c */
  esp -= 4; W32(esp, 0x7ebf83u); SPILL(); f_6c388c(); if (g_unwind) return; RELOAD();
L_7ebf83: /* 7ebf83: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ebf86: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7ebf8cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7ebf8c: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7ebf90: jmp 0x7ebf95 */
  goto L_7ebf95;
L_7ebf92: /* 7ebf92: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_7ebf95: /* 7ebf95: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7ebf98: xor ebx, ebx */
  ebx = 0;
/* 7ebf9a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ebf9c: je 0x7ec20e */
  if (zf) goto L_7ec20e;
L_7ebfa2: /* 7ebfa2: mov esi, dword ptr [0xcfa910] */
  esi = R32((uint32_t)(0xcfa910u));
/* 7ebfa8: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7ebfad: lea ecx, [ebp - 0x45c] */
  ecx = (uint32_t)(ebp + 0xfffffba4u);
/* 7ebfb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ebfb4: push 0xade1e8 */
  { uint32_t v = 0xade1e8u; esp -= 4; W32(esp, v); }
/* 7ebfb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebfba: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ebfbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ebfbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ebfbf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ebfc1: je 0x7ec20e */
  if (zf) goto L_7ec20e;
L_7ebfc7: /* 7ebfc7: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7ebfca: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7ebfcf: lea edx, [ebp - 0x65c] */
  edx = (uint32_t)(ebp + 0xfffff9a4u);
/* 7ebfd5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ebfd6: push 0xade1f8 */
  { uint32_t v = 0xade1f8u; esp -= 4; W32(esp, v); }
/* 7ebfdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebfdc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ebfdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ebfde: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ebfe1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ebfe3: je 0x7ec20e */
  if (zf) goto L_7ec20e;
L_7ebfe9: /* 7ebfe9: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7ebfef: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7ebff1: lea ecx, [ebp - 0x45c] */
  ecx = (uint32_t)(ebp + 0xfffffba4u);
/* 7ebff7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ebff8: push 0xade208 */
  { uint32_t v = 0xade208u; esp -= 4; W32(esp, v); }
/* 7ebffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ebffe: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ec004u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ec004: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ec007: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec00a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec00b: push 0x22 */
  { uint32_t v = 0x22u; esp -= 4; W32(esp, v); }
/* 7ec00d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ec00e: lea edx, [ebp - 0x45c] */
  edx = (uint32_t)(ebp + 0xfffffba4u);
/* 7ec014: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ec015: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ec016: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7ec01b: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x7ec021u); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 7ec021: mov esi, eax */
  esi = eax;
/* 7ec023: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec026: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec028: jne 0x7ec052 */
  if (!zf) goto L_7ec052;
L_7ec02a: /* 7ec02a: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7ec030: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ec032: lea eax, [ebp - 0x45c] */
  eax = (uint32_t)(ebp + 0xfffffba4u);
/* 7ec038: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec039: push 0xade258 */
  { uint32_t v = 0xade258u; esp -= 4; W32(esp, v); }
/* 7ec03e: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7ec043: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ec044: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7ec04au); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7ec04a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec04d: jmp 0x7ec166 */
  goto L_7ec166;
L_7ec052: /* 7ec052: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7ec057: mov ecx, esi */
  ecx = esi;
/* 7ec059: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7ec05fu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7ec05f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec061: je 0x7ec098 */
  if (zf) goto L_7ec098;
L_7ec063: /* 7ec063: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7ec065: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ec067: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ec06a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ec070u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ec070: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7ec073: add eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7ec076: je 0x7ec164 */
  if (zf) goto L_7ec164;
L_7ec07c: /* 7ec07c: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 7ec082: lea ecx, [ebp - 0x65c] */
  ecx = (uint32_t)(ebp + 0xfffff9a4u);
/* 7ec088: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec089: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ec08a: mov ecx, eax */
  ecx = eax;
/* 7ec08c: call 0x6c9935 */
  esp -= 4; W32(esp, 0x7ec091u); SPILL(); f_6c9935(); if (g_unwind) return; RELOAD();
/* 7ec091: mov ebx, eax */
  ebx = eax;
/* 7ec093: jmp 0x7ec166 */
  goto L_7ec166;
L_7ec098: /* 7ec098: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7ec09e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec0a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec0a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec0a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ec0a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec0a7: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7ec0ad: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7ec0af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ec0b2: mov edx, esp */
  edx = esp;
/* 7ec0b4: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7ec0b6: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7ec0b9: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7ec0bc: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7ec0bf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7ec0c2: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ec0c7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ec0c9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ec0cc: mov edx, esp */
  edx = esp;
/* 7ec0ce: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7ec0d0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7ec0d3: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7ec0d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec0d7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7ec0da: mov ecx, esp */
  ecx = esp;
/* 7ec0dc: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 7ec0df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec0e1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7ec0e4: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ec0eau); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ec0ea: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ec0ed: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ec0ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ec0f0: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x7ec0f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec0f6: mov esi, eax */
  esi = eax;
/* 7ec0f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec0fa: jne 0x7ec121 */
  if (!zf) goto L_7ec121;
L_7ec0fc: /* 7ec0fc: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7ec102: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ec104: lea eax, [ebp - 0x45c] */
  eax = (uint32_t)(ebp + 0xfffffba4u);
/* 7ec10a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec10b: push 0xade2c0 */
  { uint32_t v = 0xade2c0u; esp -= 4; W32(esp, v); }
/* 7ec110: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7ec115: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ec116: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7ec11cu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7ec11c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec11f: jmp 0x7ec166 */
  goto L_7ec166;
L_7ec121: /* 7ec121: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7ec126: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ec128: push 0xade330 */
  { uint32_t v = 0xade330u; esp -= 4; W32(esp, v); }
/* 7ec12d: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7ec132: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec133: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7ec139u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7ec139: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec13c: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7ec13e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ec140: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ec143: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ec149u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ec149: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7ec14c: add eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7ec14f: je 0x7ec164 */
  if (zf) goto L_7ec164;
L_7ec151: /* 7ec151: lea edx, [ebp - 0x65c] */
  edx = (uint32_t)(ebp + 0xfffff9a4u);
/* 7ec157: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ec158: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ec159: mov ecx, eax */
  ecx = eax;
/* 7ec15b: call 0x6c9935 */
  esp -= 4; W32(esp, 0x7ec160u); SPILL(); f_6c9935(); if (g_unwind) return; RELOAD();
/* 7ec160: mov ebx, eax */
  ebx = eax;
/* 7ec162: jmp 0x7ec166 */
  goto L_7ec166;
L_7ec164: /* 7ec164: xor ebx, ebx */
  ebx = 0;
L_7ec166: /* 7ec166: mov esi, dword ptr [0xcfa7a0] */
  esi = R32((uint32_t)(0xcfa7a0u));
/* 7ec16c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ec16e: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7ec173: lea eax, [ebp - 0x25c] */
  eax = (uint32_t)(ebp + 0xfffffda4u);
/* 7ec179: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec17a: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 7ec17d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec17e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ec180u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec180: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec183: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ec185: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7ec18a: lea edx, [ebp - 0x25c] */
  edx = (uint32_t)(ebp + 0xfffffda4u);
/* 7ec190: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ec191: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 7ec194: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec195: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ec197u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec197: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec19a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7ec1a0: /* 7ec1a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ec1a2: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7ec1a7: lea ecx, [ebp - 0x25c] */
  ecx = (uint32_t)(ebp + 0xfffffda4u);
/* 7ec1ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec1ae: lea edx, [ebp + 0x14] */
  edx = (uint32_t)(ebp + 0x14u);
/* 7ec1b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ec1b2: call dword ptr [0xcfa7a0] */
  esp -= 4; W32(esp, 0x7ec1b8u); SPILL(); f_4e3a4e(); if (g_unwind) return; /* Core!?ParseLine@@YAHPAPBGPAGHH@Z */ RELOAD();
/* 7ec1b8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec1bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec1bd: je 0x7ebf92 */
  if (zf) goto L_7ebf92;
L_7ec1c3: /* 7ec1c3: lea eax, [ebp - 0x25c] */
  eax = (uint32_t)(ebp + 0xfffffda4u);
/* 7ec1c9: push 0xade384 */
  { uint32_t v = 0xade384u; esp -= 4; W32(esp, v); }
/* 7ec1ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec1cf: call dword ptr [0xcfa834] */
  esp -= 4; W32(esp, 0x7ec1d5u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* 7ec1d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec1d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec1da: je 0x7ebf92 */
  if (zf) goto L_7ebf92;
L_7ec1e0: /* 7ec1e0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec1e2: je 0x7ec1a0 */
  if (zf) goto L_7ec1a0;
L_7ec1e4: /* 7ec1e4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7ec1e6: lea edi, [ebx + 0x10] */
  edi = (uint32_t)(ebx + 0x10u);
/* 7ec1e9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ec1eb: mov ecx, edi */
  ecx = edi;
/* 7ec1ed: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ec1f3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ec1f3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7ec1f5: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7ec1f8: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7ec1fb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec1fd: je 0x7ec1a0 */
  if (zf) goto L_7ec1a0;
L_7ec1ff: /* 7ec1ff: lea eax, [ebp - 0x25c] */
  eax = (uint32_t)(ebp + 0xfffffda4u);
/* 7ec205: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec206: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7ec20cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7ec20c: jmp 0x7ec1a0 */
  goto L_7ec1a0;
L_7ec20e: /* 7ec20e: xor edi, edi */
  edi = 0;
L_7ec210: /* 7ec210: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ec213: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ec215: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 7ec218: jge 0x7ec432 */
  if ((sf == of)) goto L_7ec432;
L_7ec21e: /* 7ec21e: xor ecx, ecx */
  ecx = 0;
/* 7ec220: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_7ec223: /* 7ec223: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec226: mov edx, edi */
  edx = edi;
/* 7ec228: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 7ec22b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ec22d: cmp ecx, dword ptr [eax + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ec230: jge 0x7ec42c */
  if ((sf == of)) goto L_7ec42c;
L_7ec236: /* 7ec236: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 7ec239: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7ec23c: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7ec23f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ec245u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ec245: mov esi, eax */
  esi = eax;
L_7ec247: /* 7ec247: cmp word ptr [esi], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ec24b: jne 0x7ec252 */
  if (!zf) goto L_7ec252;
L_7ec24d: /* 7ec24d: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ec250: jmp 0x7ec247 */
  goto L_7ec247;
L_7ec252: /* 7ec252: lea ecx, [ebp - 0x25c] */
  ecx = (uint32_t)(ebp + 0xfffffda4u);
/* 7ec258: jmp 0x7ec260 */
  goto L_7ec260;
L_7ec260: /* 7ec260: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7ec263: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7ec267: jb 0x7ec273 */
  if (cf) goto L_7ec273;
L_7ec269: /* 7ec269: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7ec26d: jbe 0x7ec41e */
  if ((cf | zf)) goto L_7ec41e;
L_7ec273: /* 7ec273: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7ec277: jb 0x7ec283 */
  if (cf) goto L_7ec283;
L_7ec279: /* 7ec279: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7ec27d: jbe 0x7ec41e */
  if ((cf | zf)) goto L_7ec41e;
L_7ec283: /* 7ec283: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7ec287: jb 0x7ec293 */
  if (cf) goto L_7ec293;
L_7ec289: /* 7ec289: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7ec28d: jbe 0x7ec41e */
  if ((cf | zf)) goto L_7ec41e;
L_7ec293: /* 7ec293: cmp ax, 0x5f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ec297: je 0x7ec41e */
  if (zf) goto L_7ec41e;
L_7ec29d: /* 7ec29d: mov word ptr [ecx], bx */
  W16((uint32_t)(ecx), (ebx & 0xffffu));
/* 7ec2a0: cmp word ptr [esi], 0x5b */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x5bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ec2a4: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 7ec2a7: jne 0x7ec2e4 */
  if (!zf) goto L_7ec2e4;
L_7ec2a9: /* 7ec2a9: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ec2ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ec2ad: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7ec2b3u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7ec2b3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec2b6: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7ec2b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7ec2c0: /* 7ec2c0: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7ec2c3: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7ec2c7: jb 0x7ec2d4 */
  if (cf) goto L_7ec2d4;
L_7ec2c9: /* 7ec2c9: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7ec2cd: ja 0x7ec2d4 */
  if ((!cf && !zf)) goto L_7ec2d4;
L_7ec2cf: /* 7ec2cf: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ec2d2: jmp 0x7ec2c0 */
  goto L_7ec2c0;
L_7ec2d4: /* 7ec2d4: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7ec2d7: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ec2da: cmp ax, 0x5d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ec2de: jne 0x7ec40d */
  if (!zf) goto L_7ec40d;
L_7ec2e4: /* 7ec2e4: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7ec2e7: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ec2ea: cmp cx, 0x3d */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x3du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ec2ee: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 7ec2f1: jne 0x7ec40d */
  if (!zf) goto L_7ec40d;
L_7ec2f7: /* 7ec2f7: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec2fa: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 7ec2fd: mov ecx, dword ptr [edi + edx] */
  ecx = R32((uint32_t)(edi + edx));
/* 7ec300: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7ec306u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7ec306: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ec308: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7ec30b: je 0x7ec315 */
  if (zf) goto L_7ec315;
L_7ec30d: /* 7ec30d: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7ec310: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7ec313: jmp 0x7ec318 */
  goto L_7ec318;
L_7ec315: /* 7ec315: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
L_7ec318: /* 7ec318: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7ec31b: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7ec320u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7ec320: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7ec323: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec325: je 0x7ec40d */
  if (zf) goto L_7ec40d;
L_7ec32b: /* 7ec32b: test dword ptr [ebx + 0x3c], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3cu))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec332: je 0x7ec402 */
  if (zf) goto L_7ec402;
L_7ec338: /* 7ec338: mov ecx, ebx */
  ecx = ebx;
/* 7ec33a: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7ec340u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7ec340: lea ecx, [ebp - 0x25c] */
  ecx = (uint32_t)(ebp + 0xfffffda4u);
/* 7ec346: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec347: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec348: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7ec34eu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7ec34e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec351: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec353: jne 0x7ec402 */
  if (!zf) goto L_7ec402;
L_7ec359: /* 7ec359: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ec35c: cmp edx, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ec35f: jge 0x7ec402 */
  if ((sf == of)) goto L_7ec402;
L_7ec365: /* 7ec365: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ec368: mov edi, dword ptr [ebx + 0x38] */
  edi = R32((uint32_t)(ebx + 0x38u));
/* 7ec36b: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7ec36e: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec371: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 7ec374: mov edx, dword ptr [eax + ecx] */
  edx = R32((uint32_t)(eax + ecx));
/* 7ec377: mov eax, dword ptr [ebx + 0x48] */
  eax = R32((uint32_t)(ebx + 0x48u));
/* 7ec37a: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ec37c: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ec37e: call dword ptr [0xcfa8ac] */
  esp -= 4; W32(esp, 0x7ec384u); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7ec384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec385: mov ecx, ebx */
  ecx = ebx;
/* 7ec387: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7ec38du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7ec38d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec38f: je 0x7ec3f4 */
  if (zf) goto L_7ec3f4;
L_7ec391: /* 7ec391: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 7ec394: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7ec399: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7ec39fu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7ec39f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec3a1: je 0x7ec3f4 */
  if (zf) goto L_7ec3f4;
L_7ec3a3: /* 7ec3a3: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 7ec3aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7ec3b0: /* 7ec3b0: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7ec3b3: cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ec3b6: jge 0x7ec402 */
  if ((sf == of)) goto L_7ec402;
L_7ec3b8: /* 7ec3b8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7ec3bb: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec3be: mov esi, edx */
  esi = edx;
/* 7ec3c0: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 7ec3c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec3c4: lea ecx, [esi + ecx + 4] */
  ecx = (uint32_t)(esi + ecx + 0x4u);
/* 7ec3c8: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x7ec3ceu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 7ec3ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec3d0: je 0x7ec3e8 */
  if (zf) goto L_7ec3e8;
L_7ec3d2: /* 7ec3d2: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec3d5: mov eax, dword ptr [esi + edx] */
  eax = R32((uint32_t)(esi + edx));
/* 7ec3d8: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ec3db: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7ec3dd: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7ec3e0: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7ec3e3: jmp 0x7ec318 */
  goto L_7ec318;
L_7ec3e8: /* 7ec3e8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7ec3eb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ec3ee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ec3ef: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 7ec3f2: jmp 0x7ec3b0 */
  goto L_7ec3b0;
L_7ec3f4: /* 7ec3f4: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7ec3f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec3f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ec3f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ec3fa: mov ecx, ebx */
  ecx = ebx;
/* 7ec3fc: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7ec402u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ec402: /* 7ec402: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7ec405: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7ec408: jmp 0x7ec318 */
  goto L_7ec318;
L_7ec40d: /* 7ec40d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ec410: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ec413: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7ec414: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7ec417: xor ebx, ebx */
  ebx = 0;
/* 7ec419: jmp 0x7ec223 */
  goto L_7ec223;
L_7ec41e: /* 7ec41e: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 7ec421: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ec424: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ec427: jmp 0x7ec260 */
  goto L_7ec260;
L_7ec42c: /* 7ec42c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7ec42d: jmp 0x7ec210 */
  goto L_7ec210;
L_7ec432: /* 7ec432: mov ebx, dword ptr [0xcfa2c0] */
  ebx = R32((uint32_t)(0xcfa2c0u));
/* 7ec438: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 7ec43b: jmp 0x7ec440 */
  goto L_7ec440;
L_7ec440: /* 7ec440: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ec442: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec444: jl 0x7ec46a */
  if ((sf != of)) goto L_7ec46a;
L_7ec446: /* 7ec446: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec449: mov eax, dword ptr [0xb7e39c] */
  eax = R32((uint32_t)(0xb7e39cu));
/* 7ec44e: mov ecx, edi */
  ecx = edi;
/* 7ec450: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 7ec453: mov esi, dword ptr [ecx + edx] */
  esi = R32((uint32_t)(ecx + edx));
/* 7ec456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec457: mov ecx, esi */
  ecx = esi;
/* 7ec459: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ec45bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec45b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ec45d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec45f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec461: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec462: mov ecx, esi */
  ecx = esi;
/* 7ec464: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ec467u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec467: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7ec468: jmp 0x7ec440 */
  goto L_7ec440;
L_7ec46a: /* 7ec46a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ec46d: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7ec470: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ec472: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ec475: mov ecx, dword ptr [edx + 0x33c] */
  ecx = R32((uint32_t)(edx + 0x33cu));
/* 7ec47b: mov esi, dword ptr [eax + 0x508] */
  esi = R32((uint32_t)(eax + 0x508u));
/* 7ec481: mov eax, dword ptr [0xb7e37c] */
  eax = R32((uint32_t)(0xb7e37cu));
/* 7ec486: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 7ec489: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec48a: mov ecx, esi */
  ecx = esi;
/* 7ec48c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ec48eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec48e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ec490: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec492: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 7ec495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec497: mov ecx, esi */
  ecx = esi;
/* 7ec499: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ec49cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec49c: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_7ec49f: /* 7ec49f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7ec4a0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ec4a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4a4: jl 0x7ec4ca */
  if ((sf != of)) goto L_7ec4ca;
L_7ec4a6: /* 7ec4a6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec4a9: mov ecx, dword ptr [0xb7e3a0] */
  ecx = R32((uint32_t)(0xb7e3a0u));
/* 7ec4af: mov edx, edi */
  edx = edi;
/* 7ec4b1: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 7ec4b4: mov esi, dword ptr [edx + eax] */
  esi = R32((uint32_t)(edx + eax));
/* 7ec4b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec4b8: mov ecx, esi */
  ecx = esi;
/* 7ec4ba: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ec4bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec4bc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ec4be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec4c3: mov ecx, esi */
  ecx = esi;
/* 7ec4c5: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ec4c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec4c8: jmp 0x7ec49f */
  goto L_7ec49f;
L_7ec4ca: /* 7ec4ca: mov eax, dword ptr [0xb7e3a0] */
  eax = R32((uint32_t)(0xb7e3a0u));
/* 7ec4cf: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ec4d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec4d3: mov ecx, esi */
  ecx = esi;
/* 7ec4d5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ec4d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec4d7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ec4d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec4de: mov ecx, esi */
  ecx = esi;
/* 7ec4e0: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ec4e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec4e3: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ec4e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec4e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4e9: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ec4ec: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7ec4f0: call 0x6c1929 */
  esp -= 4; W32(esp, 0x7ec4f5u); SPILL(); f_6c1929(); if (g_unwind) return; RELOAD();
/* 7ec4f5: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ec4f8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ec4fc: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7ec502u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7ec502: mov edi, esi */
  edi = esi;
L_7ec504: /* 7ec504: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ec507: mov eax, edi */
  eax = edi;
/* 7ec509: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ec50a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ec50b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ec512: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ec513: mov esp, ebp */
  esp = ebp;
/* 7ec515: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ec516: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7ec25a(void) {
  LOAD_REGS();
  goto L_7ec25a;
L_7ec210: /* 7ec210: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ec213: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ec215: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 7ec218: jge 0x7ec432 */
  if ((sf == of)) goto L_7ec432;
L_7ec21e: /* 7ec21e: xor ecx, ecx */
  ecx = 0;
/* 7ec220: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_7ec223: /* 7ec223: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec226: mov edx, edi */
  edx = edi;
/* 7ec228: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 7ec22b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ec22d: cmp ecx, dword ptr [eax + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ec230: jge 0x7ec42c */
  if ((sf == of)) goto L_7ec42c;
L_7ec236: /* 7ec236: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 7ec239: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7ec23c: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7ec23f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ec245u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ec245: mov esi, eax */
  esi = eax;
L_7ec247: /* 7ec247: cmp word ptr [esi], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ec24b: jne 0x7ec252 */
  if (!zf) goto L_7ec252;
L_7ec24d: /* 7ec24d: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ec250: jmp 0x7ec247 */
  goto L_7ec247;
L_7ec252: /* 7ec252: lea ecx, [ebp - 0x25c] */
  ecx = (uint32_t)(ebp + 0xfffffda4u);
/* 7ec258: jmp 0x7ec260 */
  goto L_7ec260;
L_7ec25a: /* 7ec25a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7ec260: /* 7ec260: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7ec263: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7ec267: jb 0x7ec273 */
  if (cf) goto L_7ec273;
L_7ec269: /* 7ec269: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7ec26d: jbe 0x7ec41e */
  if ((cf | zf)) goto L_7ec41e;
L_7ec273: /* 7ec273: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7ec277: jb 0x7ec283 */
  if (cf) goto L_7ec283;
L_7ec279: /* 7ec279: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7ec27d: jbe 0x7ec41e */
  if ((cf | zf)) goto L_7ec41e;
L_7ec283: /* 7ec283: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7ec287: jb 0x7ec293 */
  if (cf) goto L_7ec293;
L_7ec289: /* 7ec289: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7ec28d: jbe 0x7ec41e */
  if ((cf | zf)) goto L_7ec41e;
L_7ec293: /* 7ec293: cmp ax, 0x5f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ec297: je 0x7ec41e */
  if (zf) goto L_7ec41e;
L_7ec29d: /* 7ec29d: mov word ptr [ecx], bx */
  W16((uint32_t)(ecx), (ebx & 0xffffu));
/* 7ec2a0: cmp word ptr [esi], 0x5b */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x5bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ec2a4: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 7ec2a7: jne 0x7ec2e4 */
  if (!zf) goto L_7ec2e4;
L_7ec2a9: /* 7ec2a9: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ec2ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ec2ad: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7ec2b3u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7ec2b3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec2b6: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7ec2b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7ec2c0: /* 7ec2c0: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7ec2c3: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7ec2c7: jb 0x7ec2d4 */
  if (cf) goto L_7ec2d4;
L_7ec2c9: /* 7ec2c9: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7ec2cd: ja 0x7ec2d4 */
  if ((!cf && !zf)) goto L_7ec2d4;
L_7ec2cf: /* 7ec2cf: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ec2d2: jmp 0x7ec2c0 */
  goto L_7ec2c0;
L_7ec2d4: /* 7ec2d4: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7ec2d7: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ec2da: cmp ax, 0x5d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ec2de: jne 0x7ec40d */
  if (!zf) goto L_7ec40d;
L_7ec2e4: /* 7ec2e4: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7ec2e7: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ec2ea: cmp cx, 0x3d */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x3du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7ec2ee: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 7ec2f1: jne 0x7ec40d */
  if (!zf) goto L_7ec40d;
L_7ec2f7: /* 7ec2f7: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec2fa: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 7ec2fd: mov ecx, dword ptr [edi + edx] */
  ecx = R32((uint32_t)(edi + edx));
/* 7ec300: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7ec306u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7ec306: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ec308: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7ec30b: je 0x7ec315 */
  if (zf) goto L_7ec315;
L_7ec30d: /* 7ec30d: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7ec310: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7ec313: jmp 0x7ec318 */
  goto L_7ec318;
L_7ec315: /* 7ec315: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
L_7ec318: /* 7ec318: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7ec31b: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7ec320u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7ec320: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7ec323: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec325: je 0x7ec40d */
  if (zf) goto L_7ec40d;
L_7ec32b: /* 7ec32b: test dword ptr [ebx + 0x3c], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3cu))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec332: je 0x7ec402 */
  if (zf) goto L_7ec402;
L_7ec338: /* 7ec338: mov ecx, ebx */
  ecx = ebx;
/* 7ec33a: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7ec340u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7ec340: lea ecx, [ebp - 0x25c] */
  ecx = (uint32_t)(ebp + 0xfffffda4u);
/* 7ec346: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec347: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec348: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7ec34eu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7ec34e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec351: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec353: jne 0x7ec402 */
  if (!zf) goto L_7ec402;
L_7ec359: /* 7ec359: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ec35c: cmp edx, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ec35f: jge 0x7ec402 */
  if ((sf == of)) goto L_7ec402;
L_7ec365: /* 7ec365: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ec368: mov edi, dword ptr [ebx + 0x38] */
  edi = R32((uint32_t)(ebx + 0x38u));
/* 7ec36b: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7ec36e: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec371: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 7ec374: mov edx, dword ptr [eax + ecx] */
  edx = R32((uint32_t)(eax + ecx));
/* 7ec377: mov eax, dword ptr [ebx + 0x48] */
  eax = R32((uint32_t)(ebx + 0x48u));
/* 7ec37a: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ec37c: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ec37e: call dword ptr [0xcfa8ac] */
  esp -= 4; W32(esp, 0x7ec384u); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7ec384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec385: mov ecx, ebx */
  ecx = ebx;
/* 7ec387: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7ec38du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7ec38d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec38f: je 0x7ec3f4 */
  if (zf) goto L_7ec3f4;
L_7ec391: /* 7ec391: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 7ec394: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7ec399: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7ec39fu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7ec39f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec3a1: je 0x7ec3f4 */
  if (zf) goto L_7ec3f4;
L_7ec3a3: /* 7ec3a3: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 7ec3aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7ec3b0: /* 7ec3b0: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7ec3b3: cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ec3b6: jge 0x7ec402 */
  if ((sf == of)) goto L_7ec402;
L_7ec3b8: /* 7ec3b8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7ec3bb: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec3be: mov esi, edx */
  esi = edx;
/* 7ec3c0: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 7ec3c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec3c4: lea ecx, [esi + ecx + 4] */
  ecx = (uint32_t)(esi + ecx + 0x4u);
/* 7ec3c8: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x7ec3ceu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 7ec3ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec3d0: je 0x7ec3e8 */
  if (zf) goto L_7ec3e8;
L_7ec3d2: /* 7ec3d2: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec3d5: mov eax, dword ptr [esi + edx] */
  eax = R32((uint32_t)(esi + edx));
/* 7ec3d8: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ec3db: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7ec3dd: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7ec3e0: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7ec3e3: jmp 0x7ec318 */
  goto L_7ec318;
L_7ec3e8: /* 7ec3e8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7ec3eb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ec3ee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ec3ef: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 7ec3f2: jmp 0x7ec3b0 */
  goto L_7ec3b0;
L_7ec3f4: /* 7ec3f4: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7ec3f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec3f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ec3f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ec3fa: mov ecx, ebx */
  ecx = ebx;
/* 7ec3fc: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7ec402u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ec402: /* 7ec402: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7ec405: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7ec408: jmp 0x7ec318 */
  goto L_7ec318;
L_7ec40d: /* 7ec40d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ec410: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ec413: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7ec414: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7ec417: xor ebx, ebx */
  ebx = 0;
/* 7ec419: jmp 0x7ec223 */
  goto L_7ec223;
L_7ec41e: /* 7ec41e: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 7ec421: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ec424: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ec427: jmp 0x7ec260 */
  goto L_7ec260;
L_7ec42c: /* 7ec42c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7ec42d: jmp 0x7ec210 */
  goto L_7ec210;
L_7ec432: /* 7ec432: mov ebx, dword ptr [0xcfa2c0] */
  ebx = R32((uint32_t)(0xcfa2c0u));
/* 7ec438: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 7ec43b: jmp 0x7ec440 */
  goto L_7ec440;
L_7ec440: /* 7ec440: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ec442: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec444: jl 0x7ec46a */
  if ((sf != of)) goto L_7ec46a;
L_7ec446: /* 7ec446: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec449: mov eax, dword ptr [0xb7e39c] */
  eax = R32((uint32_t)(0xb7e39cu));
/* 7ec44e: mov ecx, edi */
  ecx = edi;
/* 7ec450: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 7ec453: mov esi, dword ptr [ecx + edx] */
  esi = R32((uint32_t)(ecx + edx));
/* 7ec456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec457: mov ecx, esi */
  ecx = esi;
/* 7ec459: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ec45bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec45b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ec45d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec45f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec461: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec462: mov ecx, esi */
  ecx = esi;
/* 7ec464: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ec467u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec467: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7ec468: jmp 0x7ec440 */
  goto L_7ec440;
L_7ec46a: /* 7ec46a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ec46d: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7ec470: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ec472: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ec475: mov ecx, dword ptr [edx + 0x33c] */
  ecx = R32((uint32_t)(edx + 0x33cu));
/* 7ec47b: mov esi, dword ptr [eax + 0x508] */
  esi = R32((uint32_t)(eax + 0x508u));
/* 7ec481: mov eax, dword ptr [0xb7e37c] */
  eax = R32((uint32_t)(0xb7e37cu));
/* 7ec486: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 7ec489: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec48a: mov ecx, esi */
  ecx = esi;
/* 7ec48c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ec48eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec48e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ec490: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec492: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 7ec495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec497: mov ecx, esi */
  ecx = esi;
/* 7ec499: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ec49cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec49c: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_7ec49f: /* 7ec49f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7ec4a0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ec4a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4a4: jl 0x7ec4ca */
  if ((sf != of)) goto L_7ec4ca;
L_7ec4a6: /* 7ec4a6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec4a9: mov ecx, dword ptr [0xb7e3a0] */
  ecx = R32((uint32_t)(0xb7e3a0u));
/* 7ec4af: mov edx, edi */
  edx = edi;
/* 7ec4b1: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 7ec4b4: mov esi, dword ptr [edx + eax] */
  esi = R32((uint32_t)(edx + eax));
/* 7ec4b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec4b8: mov ecx, esi */
  ecx = esi;
/* 7ec4ba: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ec4bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec4bc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ec4be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec4c3: mov ecx, esi */
  ecx = esi;
/* 7ec4c5: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ec4c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec4c8: jmp 0x7ec49f */
  goto L_7ec49f;
L_7ec4ca: /* 7ec4ca: mov eax, dword ptr [0xb7e3a0] */
  eax = R32((uint32_t)(0xb7e3a0u));
/* 7ec4cf: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ec4d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec4d3: mov ecx, esi */
  ecx = esi;
/* 7ec4d5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ec4d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec4d7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ec4d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec4de: mov ecx, esi */
  ecx = esi;
/* 7ec4e0: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ec4e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec4e3: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ec4e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec4e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4e9: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ec4ec: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7ec4f0: call 0x6c1929 */
  esp -= 4; W32(esp, 0x7ec4f5u); SPILL(); f_6c1929(); if (g_unwind) return; RELOAD();
/* 7ec4f5: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ec4f8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ec4fc: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7ec502u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7ec502: mov edi, esi */
  edi = esi;
/* 7ec504: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ec507: mov eax, edi */
  eax = edi;
/* 7ec509: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ec50a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ec50b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ec512: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ec513: mov esp, ebp */
  esp = ebp;
/* 7ec515: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ec516: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7ec43d(void) {
  LOAD_REGS();
L_7ec43d: /* 7ec43d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7ec440: /* 7ec440: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ec442: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec444: jl 0x7ec46a */
  if ((sf != of)) goto L_7ec46a;
L_7ec446: /* 7ec446: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec449: mov eax, dword ptr [0xb7e39c] */
  eax = R32((uint32_t)(0xb7e39cu));
/* 7ec44e: mov ecx, edi */
  ecx = edi;
/* 7ec450: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 7ec453: mov esi, dword ptr [ecx + edx] */
  esi = R32((uint32_t)(ecx + edx));
/* 7ec456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec457: mov ecx, esi */
  ecx = esi;
/* 7ec459: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ec45bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec45b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ec45d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec45f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec461: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec462: mov ecx, esi */
  ecx = esi;
/* 7ec464: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ec467u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec467: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7ec468: jmp 0x7ec440 */
  goto L_7ec440;
L_7ec46a: /* 7ec46a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ec46d: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7ec470: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ec472: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ec475: mov ecx, dword ptr [edx + 0x33c] */
  ecx = R32((uint32_t)(edx + 0x33cu));
/* 7ec47b: mov esi, dword ptr [eax + 0x508] */
  esi = R32((uint32_t)(eax + 0x508u));
/* 7ec481: mov eax, dword ptr [0xb7e37c] */
  eax = R32((uint32_t)(0xb7e37cu));
/* 7ec486: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 7ec489: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec48a: mov ecx, esi */
  ecx = esi;
/* 7ec48c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ec48eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec48e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ec490: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec492: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 7ec495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec497: mov ecx, esi */
  ecx = esi;
/* 7ec499: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ec49cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec49c: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_7ec49f: /* 7ec49f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7ec4a0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ec4a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4a4: jl 0x7ec4ca */
  if ((sf != of)) goto L_7ec4ca;
L_7ec4a6: /* 7ec4a6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ec4a9: mov ecx, dword ptr [0xb7e3a0] */
  ecx = R32((uint32_t)(0xb7e3a0u));
/* 7ec4af: mov edx, edi */
  edx = edi;
/* 7ec4b1: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 7ec4b4: mov esi, dword ptr [edx + eax] */
  esi = R32((uint32_t)(edx + eax));
/* 7ec4b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec4b8: mov ecx, esi */
  ecx = esi;
/* 7ec4ba: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ec4bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec4bc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ec4be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec4c3: mov ecx, esi */
  ecx = esi;
/* 7ec4c5: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ec4c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec4c8: jmp 0x7ec49f */
  goto L_7ec49f;
L_7ec4ca: /* 7ec4ca: mov eax, dword ptr [0xb7e3a0] */
  eax = R32((uint32_t)(0xb7e3a0u));
/* 7ec4cf: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ec4d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec4d3: mov ecx, esi */
  ecx = esi;
/* 7ec4d5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ec4d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec4d7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ec4d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec4de: mov ecx, esi */
  ecx = esi;
/* 7ec4e0: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ec4e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ec4e3: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ec4e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec4e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec4e9: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ec4ec: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7ec4f0: call 0x6c1929 */
  esp -= 4; W32(esp, 0x7ec4f5u); SPILL(); f_6c1929(); if (g_unwind) return; RELOAD();
/* 7ec4f5: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ec4f8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ec4fc: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7ec502u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7ec502: mov edi, esi */
  edi = esi;
/* 7ec504: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ec507: mov eax, edi */
  eax = edi;
/* 7ec509: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ec50a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ec50b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ec512: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ec513: mov esp, ebp */
  esp = ebp;
/* 7ec515: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ec516: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7ec519(void) {
  LOAD_REGS();
L_7ec519: /* 7ec519: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7ec51c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ec521: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 7ec524: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ec525: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 7ec528: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ec52du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ec52d(); return;
}

void f_7ec52d(void) {
  LOAD_REGS();
L_7ec52d: /* 7ec52d: push 0xa11020 */
  { uint32_t v = 0xa11020u; esp -= 4; W32(esp, v); }
/* 7ec532: push 0xade388 */
  { uint32_t v = 0xade388u; esp -= 4; W32(esp, v); }
/* 7ec537: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ec53du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ec53d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec540: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec542: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec544: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ec549u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ec549: guest_badaddr(0x7ec549); return;
}

void f_7ec7c0(void) {
  LOAD_REGS();
L_7ec7c0: /* 7ec7c0: mov eax, ecx */
  eax = ecx;
/* 7ec7c2: ret  */
  esp += 4; SPILL(); return;
}

void f_7ec7e0(void) {
  LOAD_REGS();
L_7ec7e0: /* 7ec7e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ec7e1: mov ebp, esp */
  ebp = esp;
/* 7ec7e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ec7e5: push 0x9d11e0 */
  { uint32_t v = 0x9d11e0u; esp -= 4; W32(esp, v); }
/* 7ec7ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ec7f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ec7f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ec7f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ec7fb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7ec7fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ec800: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ec801: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ec802: mov esi, ecx */
  esi = ecx;
/* 7ec804: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7ec807: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ec808: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ec80b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ec812: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7ec815: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7ec818: je 0x7ec828 */
  if (zf) goto L_7ec828;
L_7ec81a: /* 7ec81a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7ec81d: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 7ec820: fld qword ptr [edx + 0x44] */
  { double v = F64((uint32_t)(edx + 0x44u)); FPUSH(v); }
/* 7ec823: fsub qword ptr [eax + 0x78] */
  ST0 = ST0 - (F64((uint32_t)(eax + 0x78u)));
/* 7ec826: jmp 0x7ec831 */
  goto L_7ec831;
L_7ec828: /* 7ec828: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7ec82b: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 7ec82e: fld dword ptr [edx + 0x5c] */
  { double v = F32((uint32_t)(edx + 0x5cu)); FPUSH(v); }
L_7ec831: /* 7ec831: mov al, byte ptr [ecx + 0x80] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x80u))) & 0xffu);
/* 7ec837: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7ec839: js 0x7ec87e */
  if (sf) goto L_7ec87e;
L_7ec83b: /* 7ec83b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ec83e: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7ec844: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7ec847: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 7ec84d: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7ec850: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 7ec856: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7ec858: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7ec85b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7ec85d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7ec860: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7ec862: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7ec865: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 7ec867: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7ec869: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ec86b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7ec871: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ec873: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ec876: jp 0x7ec87e */
  if (pf) goto L_7ec87e;
L_7ec878: /* 7ec878: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
L_7ec87e: /* 7ec87e: fmul dword ptr [ecx + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xa0u)));
/* 7ec884: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec885: fmul dword ptr [0xa110a4] */
  ST0 = ST0 * (F32((uint32_t)(0xa110a4u)));
/* 7ec88b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7ec88e: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7ec894u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7ec894: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ec897: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec89a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7ec89c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ec89d: mov eax, esi */
  eax = esi;
/* 7ec89f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ec8a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ec8a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ec8a8: mov esp, ebp */
  esp = ebp;
/* 7ec8aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ec8ab: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7ec8ae(void) {
  LOAD_REGS();
L_7ec8ae: /* 7ec8ae: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ec8b1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ec8b6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7ec8b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ec8ba: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ec8bd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ec8c2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ec8c2(); return;
}

void f_7ec8c2(void) {
  LOAD_REGS();
L_7ec8c2: /* 7ec8c2: push 0xa11058 */
  { uint32_t v = 0xa11058u; esp -= 4; W32(esp, v); }
/* 7ec8c7: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7ec8cc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ec8d2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ec8d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ec8d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec8d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ec8d9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ec8deu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ec8de: guest_badaddr(0x7ec8de); return;
}

void f_7ec920(void) {
  LOAD_REGS();
L_7ec920: /* 7ec920: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7ec924: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7ec928: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7ec92a: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ec92c: ret  */
  esp += 4; SPILL(); return;
}

void f_7ec940(void) {
  LOAD_REGS();
L_7ec940: /* 7ec940: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ec942: jmp dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); SPILL(); call_ind(t); return; }
}

void f_7ec960(void) {
  LOAD_REGS();
L_7ec960: /* 7ec960: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ec980(void) {
  LOAD_REGS();
L_7ec980: /* 7ec980: xor eax, eax */
  eax = 0;
/* 7ec982: ret  */
  esp += 4; SPILL(); return;
}

void f_7ec9a0(void) {
  LOAD_REGS();
L_7ec9a0: /* 7ec9a0: jmp 0x6c1195 */
  SPILL(); f_6c1195(); return;
}

void f_7ec9c0(void) {
  LOAD_REGS();
L_7ec9c0: /* 7ec9c0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7ec9c4: xor eax, eax */
  eax = 0;
/* 7ec9c6: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ec9c8: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ec9cb: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7ec9e0(void) {
  LOAD_REGS();
L_7ec9e0: /* 7ec9e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ec9e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ec9e5: mov esi, dword ptr [ecx + 0x394] */
  esi = R32((uint32_t)(ecx + 0x394u));
/* 7ec9eb: mov edx, eax */
  edx = eax;
/* 7ec9ed: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7ec9f0: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7ec9f2: and edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7ec9f8: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 7ec9fa: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 7eca00: mov dword ptr [ecx + 0x394], esi */
  W32((uint32_t)(ecx + 0x394u), esi);
/* 7eca06: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 7eca0c: mov dword ptr [ecx + 0x340], edx */
  W32((uint32_t)(ecx + 0x340u), edx);
/* 7eca12: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 7eca16: mov dword ptr [ecx + 0x344], edx */
  W32((uint32_t)(ecx + 0x344u), edx);
/* 7eca1c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7eca20: mov dword ptr [ecx + 0x348], edx */
  W32((uint32_t)(ecx + 0x348u), edx);
/* 7eca26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eca27: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7eca50(void) {
  LOAD_REGS();
L_7eca50: /* 7eca50: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7eca54: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7eca58: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7eca5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eca5b: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 7eca5d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7eca5f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7eca61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7eca62: ret  */
  esp += 4; SPILL(); return;
}

void f_7eca80(void) {
  LOAD_REGS();
L_7eca80: /* 7eca80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7eca81: mov esi, ecx */
  esi = ecx;
/* 7eca83: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 7eca86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eca88: je 0x7ecaea */
  if (zf) goto L_7ecaea;
L_7eca8a: /* 7eca8a: mov eax, dword ptr [eax + 0x80] */
  eax = R32((uint32_t)(eax + 0x80u));
/* 7eca90: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7eca96: mov edx, dword ptr [ecx + 0xfc] */
  edx = R32((uint32_t)(ecx + 0xfcu));
/* 7eca9c: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7eca9f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7ecaa2: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ecaa4: je 0x7ecaea */
  if (zf) goto L_7ecaea;
L_7ecaa6: /* 7ecaa6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ecaa8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ecaaa: mov ecx, 0xb08f8c */
  ecx = 0xb08f8cu;
/* 7ecaaf: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ecab5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ecab5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ecab7: je 0x7ecada */
  if (zf) goto L_7ecada;
L_7ecab9: /* 7ecab9: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 7ecabf: mov ecx, dword ptr [edx + 0xf4] */
  ecx = R32((uint32_t)(edx + 0xf4u));
/* 7ecac5: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7ecac7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7ecaca: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7ecad0: mov dword ptr [ecx + 0xf4], eax */
  W32((uint32_t)(ecx + 0xf4u), eax);
/* 7ecad6: xor eax, eax */
  eax = 0;
/* 7ecad8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ecad9: ret  */
  esp += 4; SPILL(); return;
L_7ecada: /* 7ecada: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7ecae0: xor eax, eax */
  eax = 0;
/* 7ecae2: mov dword ptr [ecx + 0xf4], eax */
  W32((uint32_t)(ecx + 0xf4u), eax);
/* 7ecae8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ecae9: ret  */
  esp += 4; SPILL(); return;
L_7ecaea: /* 7ecaea: mov eax, 1 */
  eax = 0x1u;
/* 7ecaef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ecaf0: ret  */
  esp += 4; SPILL(); return;
}

void f_7ecb20(void) {
  LOAD_REGS();
L_7ecb20: /* 7ecb20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ecb21: mov esi, ecx */
  esi = ecx;
/* 7ecb23: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 7ecb26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ecb28: je 0x7ecb8a */
  if (zf) goto L_7ecb8a;
L_7ecb2a: /* 7ecb2a: mov eax, dword ptr [eax + 0x80] */
  eax = R32((uint32_t)(eax + 0x80u));
/* 7ecb30: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7ecb36: mov edx, dword ptr [ecx + 0xfc] */
  edx = R32((uint32_t)(ecx + 0xfcu));
/* 7ecb3c: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7ecb3f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7ecb42: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ecb44: je 0x7ecb8a */
  if (zf) goto L_7ecb8a;
L_7ecb46: /* 7ecb46: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ecb48: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ecb4a: mov ecx, 0xb08f8c */
  ecx = 0xb08f8cu;
/* 7ecb4f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ecb55u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ecb55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ecb57: je 0x7ecb7a */
  if (zf) goto L_7ecb7a;
L_7ecb59: /* 7ecb59: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 7ecb5f: mov ecx, dword ptr [edx + 0xf4] */
  ecx = R32((uint32_t)(edx + 0xf4u));
/* 7ecb65: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7ecb67: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7ecb6a: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7ecb70: mov dword ptr [ecx + 0xf4], eax */
  W32((uint32_t)(ecx + 0xf4u), eax);
/* 7ecb76: xor eax, eax */
  eax = 0;
/* 7ecb78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ecb79: ret  */
  esp += 4; SPILL(); return;
L_7ecb7a: /* 7ecb7a: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7ecb80: xor eax, eax */
  eax = 0;
/* 7ecb82: mov dword ptr [ecx + 0xf4], eax */
  W32((uint32_t)(ecx + 0xf4u), eax);
/* 7ecb88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ecb89: ret  */
  esp += 4; SPILL(); return;
L_7ecb8a: /* 7ecb8a: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7ecb90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ecb92: je 0x7ecbf4 */
  if (zf) goto L_7ecbf4;
L_7ecb94: /* 7ecb94: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 7ecb9a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7ecba0: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 7ecba6: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7ecba9: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7ecbac: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ecbae: je 0x7ecbf4 */
  if (zf) goto L_7ecbf4;
L_7ecbb0: /* 7ecbb0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ecbb2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ecbb4: mov ecx, 0xb08f8c */
  ecx = 0xb08f8cu;
/* 7ecbb9: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ecbbfu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ecbbf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ecbc1: je 0x7ecbe4 */
  if (zf) goto L_7ecbe4;
L_7ecbc3: /* 7ecbc3: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7ecbc9: mov ecx, dword ptr [ecx + 0xf4] */
  ecx = R32((uint32_t)(ecx + 0xf4u));
/* 7ecbcf: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7ecbd1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7ecbd4: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 7ecbda: mov dword ptr [edx + 0xf4], eax */
  W32((uint32_t)(edx + 0xf4u), eax);
/* 7ecbe0: xor eax, eax */
  eax = 0;
/* 7ecbe2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ecbe3: ret  */
  esp += 4; SPILL(); return;
L_7ecbe4: /* 7ecbe4: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 7ecbea: xor eax, eax */
  eax = 0;
/* 7ecbec: mov dword ptr [edx + 0xf4], eax */
  W32((uint32_t)(edx + 0xf4u), eax);
/* 7ecbf2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ecbf3: ret  */
  esp += 4; SPILL(); return;
L_7ecbf4: /* 7ecbf4: mov eax, 1 */
  eax = 0x1u;
/* 7ecbf9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ecbfa: ret  */
  esp += 4; SPILL(); return;
}

void f_7ecc40(void) {
  LOAD_REGS();
L_7ecc40: /* 7ecc40: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ecc43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ecc44: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ecc45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ecc46: mov esi, ecx */
  esi = ecx;
/* 7ecc48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ecc49: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 7ecc4d: lea edi, [esi + 0x188] */
  edi = (uint32_t)(esi + 0x188u);
/* 7ecc53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ecc54: mov ecx, edi */
  ecx = edi;
/* 7ecc56: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7ecc5cu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7ecc5c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7ecc5e: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* 7ecc64: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ecc66: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7ecc69: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7ecc6c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7ecc6f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7ecc72: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 7ecc78: test byte ptr [ecx + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ecc7f: je 0x7ecc87 */
  if (zf) goto L_7ecc87;
L_7ecc81: /* 7ecc81: mov byte ptr [esi + 0x50], 3 */
  W8((uint32_t)(esi + 0x50u), 0x3u);
/* 7ecc85: jmp 0x7eccbc */
  goto L_7eccbc;
L_7ecc87: /* 7ecc87: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7ecc8d: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7ecc8f: jns 0x7ecca6 */
  if (!sf) goto L_7ecca6;
L_7ecc91: /* 7ecc91: push 0xb6ec48 */
  { uint32_t v = 0xb6ec48u; esp -= 4; W32(esp, v); }
/* 7ecc96: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7ecc9cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7ecc9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ecc9e: je 0x7ecca6 */
  if (zf) goto L_7ecca6;
L_7ecca0: /* 7ecca0: mov byte ptr [esi + 0x50], 0xb */
  W8((uint32_t)(esi + 0x50u), 0xbu);
/* 7ecca4: jmp 0x7eccbc */
  goto L_7eccbc;
L_7ecca6: /* 7ecca6: test dword ptr [esi + 0x390], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x390u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7eccb0: je 0x7eccb8 */
  if (zf) goto L_7eccb8;
L_7eccb2: /* 7eccb2: mov byte ptr [esi + 0x50], 1 */
  W8((uint32_t)(esi + 0x50u), 0x1u);
/* 7eccb6: jmp 0x7eccbc */
  goto L_7eccbc;
L_7eccb8: /* 7eccb8: mov byte ptr [esi + 0x50], 4 */
  W8((uint32_t)(esi + 0x50u), 0x4u);
L_7eccbc: /* 7eccbc: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 7eccc0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7eccc3: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 7eccc5: mov ecx, esp */
  ecx = esp;
/* 7eccc7: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 7ecccb: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 7ecccf: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 7eccd3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7eccd5: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 7eccd8: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 7eccdc: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 7ecce0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 7ecce4: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 7ecce7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7eccea: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 7eccee: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 7eccf2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7eccf5: mov ecx, esi */
  ecx = esi;
/* 7eccf7: call 0x6c5321 */
  esp -= 4; W32(esp, 0x7eccfcu); SPILL(); f_6c5321(); if (g_unwind) return; RELOAD();
/* 7eccfc: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7ecd02: xor ebx, ebx */
  ebx = 0;
/* 7ecd04: test eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ecd09: je 0x7ecee6 */
  if (zf) goto L_7ecee6;
L_7ecd0f: /* 7ecd0f: test eax, 0x40000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ecd14: jne 0x7ecee6 */
  if (!zf) goto L_7ecee6;
L_7ecd1a: /* 7ecd1a: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 7ecd20: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 7ecd24: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7ecd2a: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 7ecd2e: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 7ecd32: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 7ecd36: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 7ecd3a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ecd3c: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 7ecd40: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 7ecd44: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ecd47: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* 7ecd4b: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 7ecd4f: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* 7ecd57: mov dword ptr [esp + 0x54], 0xffffffff */
  W32((uint32_t)(esp + 0x54u), 0xffffffffu);
/* 7ecd5f: mov dword ptr [esp + 0x58], ebx */
  W32((uint32_t)(esp + 0x58u), ebx);
/* 7ecd63: jp 0x7ecda6 */
  if (pf) goto L_7ecda6;
L_7ecd65: /* 7ecd65: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 7ecd6b: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 7ecd71: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 7ecd77: mov edx, eax */
  edx = eax;
/* 7ecd79: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7ecd7f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7ecd83: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7ecd89: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 7ecd8d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7ecd90: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7ecd94: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7ecd96: mov dword ptr [esp + 0x1c], 0x40800000 */
  W32((uint32_t)(esp + 0x1cu), 0x40800000u);
/* 7ecd9e: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 7ecda2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7ecda4: jmp 0x7ecdf1 */
  goto L_7ecdf1;
L_7ecda6: /* 7ecda6: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 7ecdac: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7ecdb2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ecdb4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ecdb7: jp 0x7ece5e */
  if (pf) goto L_7ece5e;
L_7ecdbd: /* 7ecdbd: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 7ecdc3: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 7ecdc9: mov eax, edx */
  eax = edx;
/* 7ecdcb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 7ecdcf: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7ecdd5: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 7ecdd9: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7ecddc: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7ecde0: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 7ecde4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7ecde7: fsub dword ptr [0xa0b294] */
  ST0 = ST0 - (F32((uint32_t)(0xa0b294u)));
/* 7ecded: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
L_7ecdf1: /* 7ecdf1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7ecdf3: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 7ecdf7: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7ecdfd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ece00: mov ebx, esp */
  ebx = esp;
/* 7ece02: push 0xdf */
  { uint32_t v = 0xdfu; esp -= 4; W32(esp, v); }
/* 7ece07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ece08: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 7ece0a: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 7ece0e: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 7ece12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ece13: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 7ece16: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 7ece1a: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 7ece1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ece1f: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 7ece23: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ece25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ece26: mov dword ptr [ebx + 8], ebp */
  W32((uint32_t)(ebx + 0x8u), ebp);
/* 7ece29: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7ece2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ece2f: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 7ece33: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7ece39: xor ebx, ebx */
  ebx = 0;
/* 7ece3b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ece3d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ece40: jnp 0x7ece5e */
  if (!pf) goto L_7ece5e;
L_7ece42: /* 7ece42: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 7ece46: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 7ece4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ece4e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ece51: jnp 0x7ece5e */
  if (!pf) goto L_7ece5e;
L_7ece53: /* 7ece53: mov dword ptr [esi + 0x190], ebx */
  W32((uint32_t)(esi + 0x190u), ebx);
/* 7ece59: jmp 0x7ecee6 */
  goto L_7ecee6;
L_7ece5e: /* 7ece5e: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 7ece64: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7ece6a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ece6c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ece6f: jp 0x7ece89 */
  if (pf) goto L_7ece89;
L_7ece71: /* 7ece71: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 7ece77: fld dword ptr [ecx + 0x3cc] */
  { double v = F32((uint32_t)(ecx + 0x3ccu)); FPUSH(v); }
/* 7ece7d: fmul dword ptr [0xa110a8] */
  ST0 = ST0 * (F32((uint32_t)(0xa110a8u)));
/* 7ece83: fstp dword ptr [esi + 0x190] */
  WF32((uint32_t)(esi + 0x190u), ST0); FPOP();
L_7ece89: /* 7ece89: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 7ece8f: fld dword ptr [eax + 0x3c4] */
  { double v = F32((uint32_t)(eax + 0x3c4u)); FPUSH(v); }
/* 7ece95: add eax, 0x3c4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ece9a: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7ecea0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7ecea3: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7ecea9: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7eceac: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7eceb2: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 7eceb6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eceb8: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 7ecebc: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7ecec0: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 7ecec4: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 7ecec8: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 7ececc: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7eced0: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7eced2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7eced4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7eced6: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 7eced9: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7ecedc: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 7ecedf: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7ecee2: mov byte ptr [esi + 0x50], 2 */
  W8((uint32_t)(esi + 0x50u), 0x2u);
L_7ecee6: /* 7ecee6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ecee7: mov ecx, esp */
  ecx = esp;
/* 7ecee9: push 0x150 */
  { uint32_t v = 0x150u; esp -= 4; W32(esp, v); }
/* 7eceee: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ecef4u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ecef4: mov ecx, esi */
  ecx = esi;
/* 7ecef6: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7ecefcu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7ecefc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ecefe: je 0x7ecf26 */
  if (zf) goto L_7ecf26;
L_7ecf00: /* 7ecf00: mov ecx, dword ptr [0xb7e2fc] */
  ecx = R32((uint32_t)(0xb7e2fcu));
/* 7ecf06: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 7ecf0a: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7ecf0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ecf0d: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 7ecf11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ecf12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ecf13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ecf14: mov ecx, esi */
  ecx = esi;
/* 7ecf16: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 7ecf1a: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7ecf20u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7ecf20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ecf21: mov ecx, esi */
  ecx = esi;
/* 7ecf23: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7ecf26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ecf26: /* 7ecf26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ecf27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ecf28: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ecf29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ecf2a: add esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ecf2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ecff0(void) {
  LOAD_REGS();
L_7ecff0: /* 7ecff0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ecff1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ecff2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ecff3: mov esi, ecx */
  esi = ecx;
/* 7ecff5: mov al, byte ptr [esi + 0x8a] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x8au))) & 0xffu);
/* 7ecffb: mov ebx, 1 */
  ebx = 0x1u;
/* 7ed000: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed002: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ed003: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7ed007: jne 0x7ed021 */
  if (!zf) goto L_7ed021;
L_7ed009: /* 7ed009: test byte ptr [esi + 0x530], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x530u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed00f: je 0x7ed021 */
  if (zf) goto L_7ed021;
L_7ed011: /* 7ed011: mov eax, dword ptr [esi + 0xd0] */
  eax = R32((uint32_t)(esi + 0xd0u));
/* 7ed017: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed019: je 0x7ed021 */
  if (zf) goto L_7ed021;
L_7ed01b: /* 7ed01b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ed01c: call 0x6c2ab8 */
  esp -= 4; W32(esp, 0x7ed021u); SPILL(); f_6c2ab8(); if (g_unwind) return; RELOAD();
L_7ed021: /* 7ed021: mov eax, dword ptr [esi + 0x438] */
  eax = R32((uint32_t)(esi + 0x438u));
/* 7ed027: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed029: je 0x7ed0a2 */
  if (zf) goto L_7ed0a2;
L_7ed02b: /* 7ed02b: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 7ed031: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed034: jne 0x7ed0a2 */
  if (!zf) goto L_7ed0a2;
L_7ed036: /* 7ed036: mov ecx, esi */
  ecx = esi;
/* 7ed038: call 0x6c1195 */
  esp -= 4; W32(esp, 0x7ed03du); SPILL(); f_6c1195(); if (g_unwind) return; RELOAD();
/* 7ed03d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed03f: je 0x7ed06d */
  if (zf) goto L_7ed06d;
L_7ed041: /* 7ed041: mov ecx, esi */
  ecx = esi;
/* 7ed043: call 0x6c2e00 */
  esp -= 4; W32(esp, 0x7ed048u); SPILL(); f_6c2e00(); if (g_unwind) return; RELOAD();
/* 7ed048: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed04a: je 0x7ed06d */
  if (zf) goto L_7ed06d;
L_7ed04c: /* 7ed04c: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7ed052: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ed054: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x7ed05au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ed05a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ed05c: jne 0x7ed06d */
  if (!zf) goto L_7ed06d;
L_7ed05e: /* 7ed05e: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7ed064: test byte ptr [ecx + 0x4c4], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x4c4u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed06b: je 0x7ed0a2 */
  if (zf) goto L_7ed0a2;
L_7ed06d: /* 7ed06d: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7ed073: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ed075: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ed076: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ed078: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ed07a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ed07d: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7ed083: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 7ed085: mov ebx, esp */
  ebx = esp;
/* 7ed087: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 7ed089: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 7ed08c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7ed08f: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 7ed092: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 7ed095: mov eax, dword ptr [esi + 0x438] */
  eax = R32((uint32_t)(esi + 0x438u));
/* 7ed09b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ed09c: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7ed0a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ed0a2: /* 7ed0a2: test dword ptr [esi + 0x390], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x390u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed0ac: jne 0x7ed0b9 */
  if (!zf) goto L_7ed0b9;
L_7ed0ae: /* 7ed0ae: mov ecx, esi */
  ecx = esi;
/* 7ed0b0: call 0x6c2e00 */
  esp -= 4; W32(esp, 0x7ed0b5u); SPILL(); f_6c2e00(); if (g_unwind) return; RELOAD();
/* 7ed0b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed0b7: je 0x7ed0c1 */
  if (zf) goto L_7ed0c1;
L_7ed0b9: /* 7ed0b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ed0ba: mov ecx, esi */
  ecx = esi;
/* 7ed0bc: call 0x6c3413 */
  esp -= 4; W32(esp, 0x7ed0c1u); SPILL(); f_6c3413(); if (g_unwind) return; RELOAD();
L_7ed0c1: /* 7ed0c1: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ed0c8: jne 0x7ed121 */
  if (!zf) goto L_7ed121;
L_7ed0ca: /* 7ed0ca: fld dword ptr [esi + 0x470] */
  { double v = F32((uint32_t)(esi + 0x470u)); FPUSH(v); }
/* 7ed0d0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7ed0d6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ed0d8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed0db: jne 0x7ed121 */
  if (!zf) goto L_7ed121;
L_7ed0dd: /* 7ed0dd: fld dword ptr [esi + 0x470] */
  { double v = F32((uint32_t)(esi + 0x470u)); FPUSH(v); }
/* 7ed0e3: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 7ed0e7: fst dword ptr [esi + 0x470] */
  WF32((uint32_t)(esi + 0x470u), ST0);
/* 7ed0ed: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 7ed0f3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ed0f5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ed0f8: jp 0x7ed121 */
  if (pf) goto L_7ed121;
L_7ed0fa: /* 7ed0fa: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7ed0fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ed0fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ed100: mov dword ptr [esi + 0x470], 0 */
  W32((uint32_t)(esi + 0x470u), 0x0u);
/* 7ed10a: mov ecx, dword ptr [0xb7e428] */
  ecx = R32((uint32_t)(0xb7e428u));
/* 7ed110: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ed112: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ed113: mov ecx, esi */
  ecx = esi;
/* 7ed115: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7ed11bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7ed11b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ed11c: mov ecx, esi */
  ecx = esi;
/* 7ed11e: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7ed121u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ed121: /* 7ed121: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ed122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ed123: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ed124: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ed125: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ed180(void) {
  LOAD_REGS();
L_7ed180: /* 7ed180: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ed181: mov ebp, esp */
  ebp = esp;
/* 7ed183: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ed185: push 0x9d11f0 */
  { uint32_t v = 0x9d11f0u; esp -= 4; W32(esp, v); }
/* 7ed18a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ed190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ed191: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ed198: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ed19b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ed19c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ed19d: mov esi, ecx */
  esi = ecx;
/* 7ed19f: mov ecx, dword ptr [esi + 0x80] */
  ecx = R32((uint32_t)(esi + 0x80u));
/* 7ed1a5: test ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed1ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ed1ac: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ed1af: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ed1b6: jne 0x7ed570 */
  if (!zf) goto L_7ed570;
L_7ed1bc: /* 7ed1bc: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7ed1bf: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ed1c2: je 0x7ed570 */
  if (zf) goto L_7ed570;
L_7ed1c8: /* 7ed1c8: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7ed1ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed1d0: je 0x7ed21d */
  if (zf) goto L_7ed21d;
L_7ed1d2: /* 7ed1d2: test dword ptr [eax + 0x80], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed1dc: je 0x7ed21d */
  if (zf) goto L_7ed21d;
L_7ed1de: /* 7ed1de: mov dl, byte ptr [eax + 0x50] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x50u))) & 0xffu);
/* 7ed1e1: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed1e3: je 0x7ed1ea */
  if (zf) goto L_7ed1ea;
L_7ed1e5: /* 7ed1e5: cmp dl, 5 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ed1e8: jne 0x7ed21d */
  if (!zf) goto L_7ed21d;
L_7ed1ea: /* 7ed1ea: fld dword ptr [eax + 0xd4] */
  { double v = F32((uint32_t)(eax + 0xd4u)); FPUSH(v); }
/* 7ed1f0: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 7ed1f6: fsubr qword ptr [edx + 0xd0] */
  ST0 = (F64((uint32_t)(edx + 0xd0u))) - ST0;
/* 7ed1fc: fcomp qword ptr [0xa110e0] */
  fpu_com(ST0, F64((uint32_t)(0xa110e0u)));
  FPOP();
/* 7ed202: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ed204: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed207: jne 0x7ed21d */
  if (!zf) goto L_7ed21d;
L_7ed209: /* 7ed209: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 7ed20f: mov dl, byte ptr [eax + 0x4c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7ed215: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed217: je 0x7ed570 */
  if (zf) goto L_7ed570;
L_7ed21d: /* 7ed21d: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7ed223: mov edx, dword ptr [eax + 0xfc] */
  edx = R32((uint32_t)(eax + 0xfcu));
/* 7ed229: mov al, byte ptr [esi + 0x91] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x91u))) & 0xffu);
/* 7ed22f: shl edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7ed232: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7ed234: and edx, 0x400 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7ed23a: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7ed23c: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 7ed23e: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* 7ed244: jb 0x7ed254 */
  if (cf) goto L_7ed254;
L_7ed246: /* 7ed246: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ed249: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7ed24b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ed24c: mov ecx, esi */
  ecx = esi;
/* 7ed24e: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0x7ed254u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ed254: /* 7ed254: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ed25b: jne 0x7ed30c */
  if (!zf) goto L_7ed30c;
L_7ed261: /* 7ed261: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ed264: jne 0x7ed30c */
  if (!zf) goto L_7ed30c;
L_7ed26a: /* 7ed26a: fld dword ptr [esi + 0x344] */
  { double v = F32((uint32_t)(esi + 0x344u)); FPUSH(v); }
/* 7ed270: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7ed276: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ed278: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ed27b: jp 0x7ed2d9 */
  if (pf) goto L_7ed2d9;
L_7ed27d: /* 7ed27d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ed27e: mov ecx, esp */
  ecx = esp;
/* 7ed280: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 7ed283: push 0x155 */
  { uint32_t v = 0x155u; esp -= 4; W32(esp, v); }
/* 7ed288: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ed28eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ed28e: mov ecx, esi */
  ecx = esi;
/* 7ed290: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7ed296u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7ed296: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed298: je 0x7ed2b8 */
  if (zf) goto L_7ed2b8;
L_7ed29a: /* 7ed29a: mov ecx, esi */
  ecx = esi;
/* 7ed29c: call 0x6c2225 */
  esp -= 4; W32(esp, 0x7ed2a1u); SPILL(); f_6c2225(); if (g_unwind) return; RELOAD();
/* 7ed2a1: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7ed2a7u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7ed2a7: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 7ed2aa: fmul dword ptr [0xa0973c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0973cu)));
/* 7ed2b0: fadd dword ptr [0xa110dc] */
  ST0 = ST0 + (F32((uint32_t)(0xa110dcu)));
/* 7ed2b6: jmp 0x7ed2d3 */
  goto L_7ed2d3;
L_7ed2b8: /* 7ed2b8: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7ed2beu); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7ed2be: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 7ed2c1: fmul dword ptr [0xa0973c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0973cu)));
/* 7ed2c7: fadd dword ptr [esi + 0x344] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x344u)));
/* 7ed2cd: fadd dword ptr [0xa110a8] */
  ST0 = ST0 + (F32((uint32_t)(0xa110a8u)));
L_7ed2d3: /* 7ed2d3: fstp dword ptr [esi + 0x344] */
  WF32((uint32_t)(esi + 0x344u), ST0); FPOP();
L_7ed2d9: /* 7ed2d9: fld dword ptr [esi + 0x344] */
  { double v = F32((uint32_t)(esi + 0x344u)); FPUSH(v); }
/* 7ed2df: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7ed2e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed2e7: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 7ed2ea: fstp dword ptr [esi + 0x344] */
  WF32((uint32_t)(esi + 0x344u), ST0); FPOP();
/* 7ed2f0: je 0x7ed30c */
  if (zf) goto L_7ed30c;
L_7ed2f2: /* 7ed2f2: mov cl, byte ptr [eax + 0x80] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x80u))) & 0xffu);
/* 7ed2f8: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7ed2fa: js 0x7ed30c */
  if (sf) goto L_7ed30c;
L_7ed2fc: /* 7ed2fc: test byte ptr [eax + 0x394], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x394u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed303: jne 0x7ed30c */
  if (!zf) goto L_7ed30c;
L_7ed305: /* 7ed305: mov ecx, esi */
  ecx = esi;
/* 7ed307: call 0x6cc171 */
  esp -= 4; W32(esp, 0x7ed30cu); SPILL(); f_6cc171(); if (g_unwind) return; RELOAD();
L_7ed30c: /* 7ed30c: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7ed312: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed314: je 0x7ed36c */
  if (zf) goto L_7ed36c;
L_7ed316: /* 7ed316: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7ed31c: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7ed31e: jns 0x7ed34a */
  if (!sf) goto L_7ed34a;
L_7ed320: /* 7ed320: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ed322: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ed325: lea eax, [esi + 0x380] */
  eax = (uint32_t)(esi + 0x380u);
/* 7ed32b: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7ed32d: mov edi, esp */
  edi = esp;
/* 7ed32f: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7ed331: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7ed334: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7ed337: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7ed33a: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7ed33d: mov eax, dword ptr [esi + 0x38c] */
  eax = R32((uint32_t)(esi + 0x38cu));
/* 7ed343: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ed344: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0x7ed34au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ed34a: /* 7ed34a: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7ed350: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 7ed356: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7ed358: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 7ed35e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7ed360: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7ed363: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 7ed366: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7ed369: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_7ed36c: /* 7ed36c: mov eax, dword ptr [esi + 0x48c] */
  eax = R32((uint32_t)(esi + 0x48cu));
/* 7ed372: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed374: je 0x7ed58e */
  if (zf) goto L_7ed58e;
L_7ed37a: /* 7ed37a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed37c: je 0x7ed522 */
  if (zf) goto L_7ed522;
L_7ed382: /* 7ed382: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 7ed388: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed38b: jne 0x7ed522 */
  if (!zf) goto L_7ed522;
L_7ed391: /* 7ed391: mov edx, dword ptr [eax + 0x33c] */
  edx = R32((uint32_t)(eax + 0x33cu));
/* 7ed397: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed399: je 0x7ed522 */
  if (zf) goto L_7ed522;
L_7ed39f: /* 7ed39f: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 7ed3a5: fsub dword ptr [ecx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x178u)));
/* 7ed3ab: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7ed3b1: fsub dword ptr [ecx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x174u)));
/* 7ed3b7: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 7ed3bd: fsub dword ptr [ecx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x170u)));
/* 7ed3c3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ed3c6: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7ed3c9: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7ed3cc: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7ed3cf: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7ed3d5u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7ed3d5: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 7ed3d8: fcomp dword ptr [esi + 0x490] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x490u)));
  FPOP();
/* 7ed3de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ed3e0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed3e3: je 0x7ed519 */
  if (zf) goto L_7ed519;
L_7ed3e9: /* 7ed3e9: mov eax, dword ptr [esi + 0x48c] */
  eax = R32((uint32_t)(esi + 0x48cu));
/* 7ed3ef: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 7ed3f5: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ed3fa: fsub dword ptr [esi + 0x488] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x488u)));
/* 7ed400: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ed403: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7ed406: fsub dword ptr [esi + 0x484] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x484u)));
/* 7ed40c: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7ed40e: fsub dword ptr [esi + 0x480] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x480u)));
/* 7ed414: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7ed417: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7ed41a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7ed41d: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7ed423u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7ed423: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7ed426: fld dword ptr [esi + 0x490] */
  { double v = F32((uint32_t)(esi + 0x490u)); FPUSH(v); }
/* 7ed42c: fmul dword ptr [0xa0e1c0] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e1c0u)));
/* 7ed432: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 7ed435: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ed437: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ed43a: jnp 0x7ed519 */
  if (!pf) goto L_7ed519;
L_7ed440: /* 7ed440: mov ecx, dword ptr [esi + 0x48c] */
  ecx = R32((uint32_t)(esi + 0x48cu));
/* 7ed446: add ecx, 0x188 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ed44c: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7ed452u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7ed452: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7ed455: mov ecx, dword ptr [esi + 0x48c] */
  ecx = R32((uint32_t)(esi + 0x48cu));
/* 7ed45b: fld dword ptr [ecx + 0x3f8] */
  { double v = F32((uint32_t)(ecx + 0x3f8u)); FPUSH(v); }
/* 7ed461: fmul dword ptr [0xa110d8] */
  ST0 = ST0 * (F32((uint32_t)(0xa110d8u)));
/* 7ed467: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 7ed46a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ed46c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ed46f: jp 0x7ed58e */
  if (pf) goto L_7ed58e;
L_7ed475: /* 7ed475: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 7ed47b: fld dword ptr [esi + 0x488] */
  { double v = F32((uint32_t)(esi + 0x488u)); FPUSH(v); }
/* 7ed481: fsub dword ptr [edx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x178u)));
/* 7ed487: fld dword ptr [esi + 0x484] */
  { double v = F32((uint32_t)(esi + 0x484u)); FPUSH(v); }
/* 7ed48d: fsub dword ptr [edx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x174u)));
/* 7ed493: fld dword ptr [esi + 0x480] */
  { double v = F32((uint32_t)(esi + 0x480u)); FPUSH(v); }
/* 7ed499: fsub dword ptr [edx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x170u)));
/* 7ed49f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7ed4a1: fmul dword ptr [ecx + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18cu)));
/* 7ed4a7: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7ed4a9: fmul dword ptr [ecx + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x190u)));
/* 7ed4af: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 7ed4b1: fmul dword ptr [ecx + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x188u)));
/* 7ed4b7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ed4b9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7ed4bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ed4c1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed4c4: jne 0x7ed58e */
  if (!zf) goto L_7ed58e;
L_7ed4ca: /* 7ed4ca: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7ed4d0: fsub dword ptr [edx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x178u)));
/* 7ed4d6: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 7ed4dc: fsub dword ptr [edx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x174u)));
/* 7ed4e2: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 7ed4e8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ed4eb: fsub dword ptr [edx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x170u)));
/* 7ed4f1: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7ed4f4: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7ed4f7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7ed4fa: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7ed500u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7ed500: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7ed503: fld dword ptr [esi + 0x490] */
  { double v = F32((uint32_t)(esi + 0x490u)); FPUSH(v); }
/* 7ed509: fmul dword ptr [0xa0e1c0] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e1c0u)));
/* 7ed50f: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 7ed512: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ed514: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ed517: jp 0x7ed58e */
  if (pf) goto L_7ed58e;
L_7ed519: /* 7ed519: mov ecx, esi */
  ecx = esi;
/* 7ed51b: call 0x6cb1d1 */
  esp -= 4; W32(esp, 0x7ed520u); SPILL(); f_6cb1d1(); if (g_unwind) return; RELOAD();
/* 7ed520: jmp 0x7ed58e */
  goto L_7ed58e;
L_7ed522: /* 7ed522: mov eax, dword ptr [0xb7e4ac] */
  eax = R32((uint32_t)(0xb7e4acu));
/* 7ed527: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ed529: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ed52a: mov ecx, esi */
  ecx = esi;
/* 7ed52c: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7ed532u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7ed532: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ed534: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ed536: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ed538: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ed539: mov ecx, esi */
  ecx = esi;
/* 7ed53b: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ed53eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ed53e: jmp 0x7ed58e */
  goto L_7ed58e;
L_7ed570: /* 7ed570: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 7ed576: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* 7ed57c: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7ed57f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7ed581: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7ed586: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7ed588: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
L_7ed58e: /* 7ed58e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ed591: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ed592: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ed593: mov eax, 1 */
  eax = 0x1u;
/* 7ed598: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ed59f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ed5a0: mov esp, ebp */
  esp = ebp;
/* 7ed5a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ed5a3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ed540(void) {
  LOAD_REGS();
L_7ed540: /* 7ed540: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ed543: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ed548: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7ed54b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ed54c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ed54f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ed554u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ed554(); return;
}

void f_7ed554(void) {
  LOAD_REGS();
L_7ed554: /* 7ed554: push 0xa110ac */
  { uint32_t v = 0xa110acu; esp -= 4; W32(esp, v); }
/* 7ed559: push 0xade680 */
  { uint32_t v = 0xade680u; esp -= 4; W32(esp, v); }
/* 7ed55e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ed564u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ed564: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ed567: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ed569: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ed56b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ed570u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7ed570: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 7ed576: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* 7ed57c: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7ed57f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7ed581: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7ed586: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7ed588: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 7ed58e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ed591: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ed592: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ed593: mov eax, 1 */
  eax = 0x1u;
/* 7ed598: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ed59f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ed5a0: mov esp, ebp */
  esp = ebp;
/* 7ed5a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ed5a3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ed6c0(void) {
  LOAD_REGS();
L_7ed6c0: /* 7ed6c0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ed6c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ed6c4: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 7ed6c8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ed6c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ed6ca: mov esi, ecx */
  esi = ecx;
/* 7ed6cc: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7ed6d2: fld dword ptr [esi + 0x340] */
  { double v = F32((uint32_t)(esi + 0x340u)); FPUSH(v); }
/* 7ed6d8: fcomp dword ptr [ecx + 0x3ac] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x3acu)));
  FPOP();
/* 7ed6de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ed6df: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 7ed6e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ed6e5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ed6e8: jp 0x7ed70f */
  if (pf) goto L_7ed70f;
L_7ed6ea: /* 7ed6ea: cmp ebx, dword ptr [esi + 0x344] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x344u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ed6f0: jne 0x7ed70f */
  if (!zf) goto L_7ed70f;
L_7ed6f2: /* 7ed6f2: cmp edi, dword ptr [esi + 0x348] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x348u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ed6f8: jne 0x7ed70f */
  if (!zf) goto L_7ed70f;
L_7ed6fa: /* 7ed6fa: xor eax, eax */
  eax = 0;
/* 7ed6fc: mov al, byte ptr [esi + 0x396] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x396u))) & 0xffu);
/* 7ed702: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7ed705: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ed706: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ed707: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ed708: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ed709: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ed70c: ret 0x14 */
  esp += 24; SPILL(); return;
L_7ed70f: /* 7ed70f: test byte ptr [esi + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed716: jne 0x7ed958 */
  if (!zf) goto L_7ed958;
L_7ed71c: /* 7ed71c: mov eax, esi */
  eax = esi;
/* 7ed71e: mov edi, edi */
  edi = edi;
L_7ed720: /* 7ed720: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ed722: je 0x7ed958 */
  if (zf) goto L_7ed958;
L_7ed728: /* 7ed728: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 7ed72b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed72d: jne 0x7ed720 */
  if (!zf) goto L_7ed720;
L_7ed72f: /* 7ed72f: mov eax, esi */
  eax = esi;
L_7ed731: /* 7ed731: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ed733: je 0x7ed958 */
  if (zf) goto L_7ed958;
L_7ed739: /* 7ed739: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 7ed73c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed73e: jne 0x7ed731 */
  if (!zf) goto L_7ed731;
L_7ed740: /* 7ed740: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ed742: je 0x7ed958 */
  if (zf) goto L_7ed958;
L_7ed748: /* 7ed748: cmp edi, dword ptr [esi + 0xa4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xa4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ed74e: je 0x7ed958 */
  if (zf) goto L_7ed958;
L_7ed754: /* 7ed754: test dword ptr [ebx + 0x4c4], 0x10000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4c4u))); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed75e: jne 0x7ed958 */
  if (!zf) goto L_7ed958;
L_7ed764: /* 7ed764: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* 7ed76a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed76c: je 0x7ed7df */
  if (zf) goto L_7ed7df;
L_7ed76e: /* 7ed76e: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7ed774: mov eax, dword ptr [0xcfaa80] */
  eax = R32((uint32_t)(0xcfaa80u));
/* 7ed779: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 7ed77f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7ed783: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7ed787: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7ed78d: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 7ed793: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7ed797: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7ed79d: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 7ed7a3: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 7ed7a7: fld dword ptr [esi + 0x2c4] */
  { double v = F32((uint32_t)(esi + 0x2c4u)); FPUSH(v); }
/* 7ed7ad: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7ed7af: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 7ed7b3: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7ed7b9u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7ed7b9: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 7ed7bd: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 7ed7c1: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7ed7c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ed7c5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed7c8: jne 0x7ed7df */
  if (!zf) goto L_7ed7df;
L_7ed7ca: /* 7ed7ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ed7cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ed7cc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ed7ce: mov ecx, esi */
  ecx = esi;
/* 7ed7d0: call 0x6c730b */
  esp -= 4; W32(esp, 0x7ed7d5u); SPILL(); f_6c730b(); if (g_unwind) return; RELOAD();
/* 7ed7d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ed7d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ed7d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ed7d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ed7d9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ed7dc: ret 0x14 */
  esp += 24; SPILL(); return;
L_7ed7df: /* 7ed7df: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7ed7e5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7ed7e7: js 0x7ed7ee */
  if (sf) goto L_7ed7ee;
L_7ed7e9: /* 7ed7e9: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed7ec: je 0x7ed816 */
  if (zf) goto L_7ed816;
L_7ed7ee: /* 7ed7ee: test byte ptr [esi + 0x88], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed7f5: jne 0x7ed816 */
  if (!zf) goto L_7ed816;
L_7ed7f7: /* 7ed7f7: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* 7ed7fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed7ff: jne 0x7ed816 */
  if (!zf) goto L_7ed816;
L_7ed801: /* 7ed801: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ed802: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ed803: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ed805: mov ecx, esi */
  ecx = esi;
/* 7ed807: call 0x6c730b */
  esp -= 4; W32(esp, 0x7ed80cu); SPILL(); f_6c730b(); if (g_unwind) return; RELOAD();
/* 7ed80c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ed80d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ed80e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ed80f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ed810: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ed813: ret 0x14 */
  esp += 24; SPILL(); return;
L_7ed816: /* 7ed816: mov ecx, dword ptr [esi + 0xc0] */
  ecx = R32((uint32_t)(esi + 0xc0u));
/* 7ed81c: test byte ptr [ecx + 0x358], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x358u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed823: je 0x7ed876 */
  if (zf) goto L_7ed876;
L_7ed825: /* 7ed825: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7ed82b: mov edx, ecx */
  edx = ecx;
/* 7ed82d: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 7ed831: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7ed835: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7ed839: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7ed83f: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 7ed843: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7ed847: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7ed84d: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 7ed851: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 7ed855: mov eax, dword ptr [edx + 0x380] */
  eax = R32((uint32_t)(edx + 0x380u));
/* 7ed85b: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 7ed85f: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7ed865u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7ed865: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 7ed869: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 7ed86d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7ed86f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ed871: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ed874: jnp 0x7ed801 */
  if (!pf) goto L_7ed801;
L_7ed876: /* 7ed876: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 7ed87c: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7ed882: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7ed888: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 7ed88c: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 7ed890: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7ed896: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ed899: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 7ed89d: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 7ed8a1: mov edx, esp */
  edx = esp;
/* 7ed8a3: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7ed8a5: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 7ed8a8: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7ed8ab: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7ed8af: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 7ed8b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ed8b6: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 7ed8bc: mov edx, esp */
  edx = esp;
/* 7ed8be: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7ed8c0: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 7ed8c4: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7ed8c7: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 7ed8cb: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 7ed8cf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7ed8d2: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7ed8d8: call 0x6c5db2 */
  esp -= 4; W32(esp, 0x7ed8ddu); SPILL(); f_6c5db2(); if (g_unwind) return; RELOAD();
/* 7ed8dd: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed8df: jne 0x7ed93f */
  if (!zf) goto L_7ed93f;
L_7ed8e1: /* 7ed8e1: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 7ed8e5: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7ed8eb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ed8ee: mov edx, esp */
  edx = esp;
/* 7ed8f0: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7ed8f2: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 7ed8f5: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7ed8f8: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7ed8fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ed901: mov edx, esp */
  edx = esp;
/* 7ed903: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7ed905: mov ecx, dword ptr [esi + 0x174] */
  ecx = R32((uint32_t)(esi + 0x174u));
/* 7ed90b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7ed90e: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 7ed914: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7ed917: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7ed91d: call 0x6c5db2 */
  esp -= 4; W32(esp, 0x7ed922u); SPILL(); f_6c5db2(); if (g_unwind) return; RELOAD();
/* 7ed922: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ed924: jne 0x7ed93f */
  if (!zf) goto L_7ed93f;
L_7ed926: /* 7ed926: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 7ed92a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ed92b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ed92c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ed92e: mov ecx, esi */
  ecx = esi;
/* 7ed930: call 0x6c730b */
  esp -= 4; W32(esp, 0x7ed935u); SPILL(); f_6c730b(); if (g_unwind) return; RELOAD();
/* 7ed935: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ed936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ed937: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ed938: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ed939: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ed93c: ret 0x14 */
  esp += 24; SPILL(); return;
L_7ed93f: /* 7ed93f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 7ed943: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ed944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ed945: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ed947: mov ecx, esi */
  ecx = esi;
/* 7ed949: call 0x6c730b */
  esp -= 4; W32(esp, 0x7ed94eu); SPILL(); f_6c730b(); if (g_unwind) return; RELOAD();
/* 7ed94e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ed94f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ed950: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ed951: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ed952: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ed955: ret 0x14 */
  esp += 24; SPILL(); return;
L_7ed958: /* 7ed958: or dword ptr [esi + 0x394], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x394u))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x394u), r);
  }
/* 7ed962: mov ecx, dword ptr [ecx + 0x3ac] */
  ecx = R32((uint32_t)(ecx + 0x3acu));
/* 7ed968: mov dword ptr [esi + 0x348], edi */
  W32((uint32_t)(esi + 0x348u), edi);
/* 7ed96e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ed96f: mov dword ptr [esi + 0x344], ebx */
  W32((uint32_t)(esi + 0x344u), ebx);
/* 7ed975: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 7ed97b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ed97c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ed97d: mov eax, 1 */
  eax = 0x1u;
/* 7ed982: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ed983: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ed986: ret 0x14 */
  esp += 24; SPILL(); return;
}
