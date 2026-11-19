#include "recomp.h"
#include "rec_mod.h"

void f_4fdda0(void) {
  LOAD_REGS();
L_4fdda0: /* 4fdda0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4fdda3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdda4: mov esi, ecx */
  esi = ecx;
/* 4fdda6: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 4fdda9: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fddae: je 0x4fddff */
  if (zf) goto L_4fddff;
L_4fddb0: /* 4fddb0: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fddb2: jne 0x4fde08 */
  if (!zf) goto L_4fde08;
L_4fddb4: /* 4fddb4: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 4fddb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fddb9: je 0x4fddff */
  if (zf) goto L_4fddff;
L_4fddbb: /* 4fddbb: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 4fddbe: cmp eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fddc2: jne 0x4fddff */
  if (!zf) goto L_4fddff;
L_4fddc4: /* 4fddc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fddc5: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 4fddc9: call 0x4e3b11 */
  esp -= 4; W32(esp, 0x4fddceu); SPILL(); f_4e3b11(); if (g_unwind) return; RELOAD();
/* 4fddce: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4fddd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fddd4: je 0x4fddff */
  if (zf) goto L_4fddff;
L_4fddd6: /* 4fddd6: cmp dword ptr [esp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fddda: jne 0x4fddff */
  if (!zf) goto L_4fddff;
L_4fdddc: /* 4fdddc: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 4fdde2: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fdde5: jne 0x4fde08 */
  if (!zf) goto L_4fde08;
L_4fdde7: /* 4fdde7: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 4fddea: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 4fddee: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 4fddf2: call 0x4e439f */
  esp -= 4; W32(esp, 0x4fddf7u); SPILL(); f_4e439f(); if (g_unwind) return; RELOAD();
/* 4fddf7: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4fddfb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fddfd: jne 0x4fddd6 */
  if (!zf) goto L_4fddd6;
L_4fddff: /* 4fddff: xor eax, eax */
  eax = 0;
/* 4fde01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fde02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fde05: ret 4 */
  esp += 8; SPILL(); return;
L_4fde08: /* 4fde08: mov eax, 1 */
  eax = 0x1u;
/* 4fde0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fde0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fde11: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fde40(void) {
  LOAD_REGS();
L_4fde40: /* 4fde40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fde42: push 0x555cc3 */
  { uint32_t v = 0x555cc3u; esp -= 4; W32(esp, v); }
/* 4fde47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fde4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fde4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fde55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fde56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fde57: mov esi, ecx */
  esi = ecx;
/* 4fde59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fde5d: mov dword ptr [esi], 0x569a90 */
  W32((uint32_t)(esi), 0x569a90u);
/* 4fde63: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 4fde6b: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4fde70u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4fde70: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 4fde73: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 4fde78: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fde7du); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fde7d: mov ecx, esi */
  ecx = esi;
/* 4fde7f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fde87: call 0x4e3a9e */
  esp -= 4; W32(esp, 0x4fde8cu); SPILL(); f_4e3a9e(); if (g_unwind) return; RELOAD();
/* 4fde8c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fde90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fde91: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fde98: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fde9b: ret  */
  esp += 4; SPILL(); return;
}

void f_4fdec0(void) {
  LOAD_REGS();
L_4fdec0: /* 4fdec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdec1: mov esi, ecx */
  esi = ecx;
/* 4fdec3: call 0x4e245a */
  esp -= 4; W32(esp, 0x4fdec8u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 4fdec8: xor eax, eax */
  eax = 0;
/* 4fdeca: mov dword ptr [esi], 0x569a90 */
  W32((uint32_t)(esi), 0x569a90u);
/* 4fded0: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 4fded3: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 4fded6: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 4fded9: mov eax, esi */
  eax = esi;
/* 4fdedb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fdedc: ret  */
  esp += 4; SPILL(); return;
}

void f_4fdef0(void) {
  LOAD_REGS();
L_4fdef0: /* 4fdef0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fdef2: push 0x555ce8 */
  { uint32_t v = 0x555ce8u; esp -= 4; W32(esp, v); }
/* 4fdef7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fdefd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fdefe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fdf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fdf06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdf07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdf08: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4fdf0c: mov esi, ecx */
  esi = ecx;
/* 4fdf0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdf0f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 4fdf13: call 0x4e1078 */
  esp -= 4; W32(esp, 0x4fdf18u); SPILL(); f_4e1078(); if (g_unwind) return; RELOAD();
/* 4fdf18: mov dword ptr [esi], 0x5693d8 */
  W32((uint32_t)(esi), 0x5693d8u);
/* 4fdf1e: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 4fdf21: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 4fdf24: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 4fdf27: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 4fdf2a: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 4fdf2d: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 4fdf30: add edi, 0x34 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4fdf33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdf34: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 4fdf37: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 4fdf3f: mov dword ptr [esi], 0x569a90 */
  W32((uint32_t)(esi), 0x569a90u);
/* 4fdf45: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fdf4au); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fdf4a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4fdf4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fdf4f: mov eax, esi */
  eax = esi;
/* 4fdf51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fdf52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fdf59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fdf5c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fdf80(void) {
  LOAD_REGS();
L_4fdf80: /* 4fdf80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fdf81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdf82: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4fdf86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdf87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdf88: mov edi, ecx */
  edi = ecx;
/* 4fdf8a: call 0x4e1c67 */
  esp -= 4; W32(esp, 0x4fdf8fu); SPILL(); f_4e1c67(); if (g_unwind) return; RELOAD();
/* 4fdf8f: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 4fdf92: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* 4fdf95: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 4fdf98: mov dword ptr [edi + 0x2c], ecx */
  W32((uint32_t)(edi + 0x2cu), ecx);
/* 4fdf9b: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 4fdf9e: lea ebx, [esi + 0x34] */
  ebx = (uint32_t)(esi + 0x34u);
/* 4fdfa1: lea esi, [edi + 0x34] */
  esi = (uint32_t)(edi + 0x34u);
/* 4fdfa4: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fdfa6: mov dword ptr [edi + 0x30], edx */
  W32((uint32_t)(edi + 0x30u), edx);
/* 4fdfa9: je 0x4fdfe3 */
  if (zf) goto L_4fdfe3;
L_4fdfab: /* 4fdfab: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fdfae: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fdfb0: mov ecx, esi */
  ecx = esi;
/* 4fdfb2: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fdfb5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fdfb8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fdfbdu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fdfbd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fdfc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fdfc2: je 0x4fdfe3 */
  if (zf) goto L_4fdfe3;
L_4fdfc4: /* 4fdfc4: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 4fdfc7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fdfc9: je 0x4fdfcf */
  if (zf) goto L_4fdfcf;
L_4fdfcb: /* 4fdfcb: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 4fdfcd: jmp 0x4fdfd4 */
  goto L_4fdfd4;
L_4fdfcf: /* 4fdfcf: mov ebx, 0x5ed66c */
  ebx = 0x5ed66cu;
L_4fdfd4: /* 4fdfd4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fdfd6: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fdfd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fdfd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fdfda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fdfdb: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fdfe0u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fdfe0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fdfe3: /* 4fdfe3: mov eax, edi */
  eax = edi;
/* 4fdfe5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fdfe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fdfe7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fdfe8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe010(void) {
  LOAD_REGS();
L_4fe010: /* 4fe010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe011: mov esi, ecx */
  esi = ecx;
/* 4fe013: call 0x4e17ee */
  esp -= 4; W32(esp, 0x4fe018u); SPILL(); f_4e17ee(); if (g_unwind) return; RELOAD();
/* 4fe018: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe01d: je 0x4fe02a */
  if (zf) goto L_4fe02a;
L_4fe01f: /* 4fe01f: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 4fe021: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe022: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fe027u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fe027: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fe02a: /* 4fe02a: mov eax, esi */
  eax = esi;
/* 4fe02c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe02d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe040(void) {
  LOAD_REGS();
L_4fe040: /* 4fe040: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fe041: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4fe045: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe048: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe049: mov esi, ecx */
  esi = ecx;
/* 4fe04b: je 0x4fe07b */
  if (zf) goto L_4fe07b;
L_4fe04d: /* 4fe04d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4fe050: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe051: push 0x4e17ee */
  { uint32_t v = 0x4e17eeu; esp -= 4; W32(esp, v); }
/* 4fe056: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4fe059: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe05a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 4fe05c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe05d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fe062u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fe062: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe065: je 0x4fe073 */
  if (zf) goto L_4fe073;
L_4fe067: /* 4fe067: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fe06d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fe06f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe070: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fe073u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fe073: /* 4fe073: mov eax, edi */
  eax = edi;
/* 4fe075: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fe076: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe077: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fe078: ret 4 */
  esp += 8; SPILL(); return;
L_4fe07b: /* 4fe07b: mov ecx, esi */
  ecx = esi;
/* 4fe07d: call 0x4e17ee */
  esp -= 4; W32(esp, 0x4fe082u); SPILL(); f_4e17ee(); if (g_unwind) return; RELOAD();
/* 4fe082: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe085: je 0x4fe092 */
  if (zf) goto L_4fe092;
L_4fe087: /* 4fe087: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 4fe089: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe08a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fe08fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fe08f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fe092: /* 4fe092: mov eax, esi */
  eax = esi;
/* 4fe094: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe095: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fe096: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe0c0(void) {
  LOAD_REGS();
L_4fe0c0: /* 4fe0c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fe0c2: push 0x555d13 */
  { uint32_t v = 0x555d13u; esp -= 4; W32(esp, v); }
/* 4fe0c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fe0cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe0ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fe0d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fe0d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe0d7: mov esi, ecx */
  esi = ecx;
/* 4fe0d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fe0dd: mov dword ptr [esi], 0x569b28 */
  W32((uint32_t)(esi), 0x569b28u);
/* 4fe0e3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 4fe0eb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4fe0f0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4fe0f0: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 4fe0f3: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 4fe0f8: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fe0fdu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fe0fd: mov ecx, esi */
  ecx = esi;
/* 4fe0ff: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fe107: call 0x4e3a9e */
  esp -= 4; W32(esp, 0x4fe10cu); SPILL(); f_4e3a9e(); if (g_unwind) return; RELOAD();
/* 4fe10c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fe110: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe111: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fe118: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fe11b: ret  */
  esp += 4; SPILL(); return;
}

void f_4fe140(void) {
  LOAD_REGS();
L_4fe140: /* 4fe140: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fe142: push 0x555d38 */
  { uint32_t v = 0x555d38u; esp -= 4; W32(esp, v); }
/* 4fe147: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fe14d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe14e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fe155: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fe156: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe157: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe158: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4fe15c: mov esi, ecx */
  esi = ecx;
/* 4fe15e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe15f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 4fe163: call 0x4e1078 */
  esp -= 4; W32(esp, 0x4fe168u); SPILL(); f_4e1078(); if (g_unwind) return; RELOAD();
/* 4fe168: mov dword ptr [esi], 0x5693d8 */
  W32((uint32_t)(esi), 0x5693d8u);
/* 4fe16e: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 4fe171: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 4fe174: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 4fe177: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 4fe17a: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 4fe17d: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 4fe180: mov dword ptr [esi], 0x569b28 */
  W32((uint32_t)(esi), 0x569b28u);
/* 4fe186: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 4fe189: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 4fe18c: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 4fe18f: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 4fe192: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 4fe195: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 4fe198: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 4fe19b: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 4fe19e: mov cx, word ptr [edi + 0x44] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x44u))) & 0xffffu);
/* 4fe1a2: mov word ptr [esi + 0x44], cx */
  W16((uint32_t)(esi + 0x44u), (ecx & 0xffffu));
/* 4fe1a6: mov dx, word ptr [edi + 0x46] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x46u))) & 0xffffu);
/* 4fe1aa: mov word ptr [esi + 0x46], dx */
  W16((uint32_t)(esi + 0x46u), (edx & 0xffffu));
/* 4fe1ae: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 4fe1b1: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 4fe1b4: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 4fe1b7: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 4fe1ba: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 4fe1bd: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 4fe1c0: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 4fe1c3: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 4fe1c6: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 4fe1c9: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 4fe1cc: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 4fe1cf: add edi, 0x60 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4fe1d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe1d3: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 4fe1d6: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 4fe1de: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 4fe1e1: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fe1e6u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fe1e6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4fe1ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fe1eb: mov eax, esi */
  eax = esi;
/* 4fe1ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe1ee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fe1f5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fe1f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe230(void) {
  LOAD_REGS();
L_4fe230: /* 4fe230: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fe231: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe232: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe233: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4fe237: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe238: mov esi, ecx */
  esi = ecx;
/* 4fe23a: call 0x4e1c67 */
  esp -= 4; W32(esp, 0x4fe23fu); SPILL(); f_4e1c67(); if (g_unwind) return; RELOAD();
/* 4fe23f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 4fe242: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 4fe245: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 4fe248: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 4fe24b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 4fe24e: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 4fe251: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 4fe254: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 4fe257: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 4fe25a: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 4fe25d: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 4fe260: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 4fe263: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 4fe266: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 4fe269: mov cx, word ptr [edi + 0x44] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x44u))) & 0xffffu);
/* 4fe26d: mov word ptr [esi + 0x44], cx */
  W16((uint32_t)(esi + 0x44u), (ecx & 0xffffu));
/* 4fe271: mov dx, word ptr [edi + 0x46] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x46u))) & 0xffffu);
/* 4fe275: mov word ptr [esi + 0x46], dx */
  W16((uint32_t)(esi + 0x46u), (edx & 0xffffu));
/* 4fe279: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 4fe27c: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 4fe27f: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 4fe282: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 4fe285: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 4fe288: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 4fe28b: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 4fe28e: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 4fe291: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 4fe294: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 4fe297: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 4fe29a: lea ebx, [edi + 0x60] */
  ebx = (uint32_t)(edi + 0x60u);
/* 4fe29d: lea edi, [esi + 0x60] */
  edi = (uint32_t)(esi + 0x60u);
/* 4fe2a0: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fe2a2: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 4fe2a5: je 0x4fe2df */
  if (zf) goto L_4fe2df;
L_4fe2a7: /* 4fe2a7: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fe2aa: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fe2ac: mov ecx, edi */
  ecx = edi;
/* 4fe2ae: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 4fe2b1: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 4fe2b4: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fe2b9u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fe2b9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4fe2bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe2be: je 0x4fe2df */
  if (zf) goto L_4fe2df;
L_4fe2c0: /* 4fe2c0: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 4fe2c3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe2c5: je 0x4fe2cb */
  if (zf) goto L_4fe2cb;
L_4fe2c7: /* 4fe2c7: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 4fe2c9: jmp 0x4fe2d0 */
  goto L_4fe2d0;
L_4fe2cb: /* 4fe2cb: mov ebx, 0x5ed66c */
  ebx = 0x5ed66cu;
L_4fe2d0: /* 4fe2d0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4fe2d2: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fe2d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe2d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fe2d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fe2d7: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fe2dcu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fe2dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fe2df: /* 4fe2df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fe2e0: mov eax, esi */
  eax = esi;
/* 4fe2e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe2e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fe2e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe320(void) {
  LOAD_REGS();
L_4fe320: /* 4fe320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe321: mov esi, ecx */
  esi = ecx;
/* 4fe323: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4fe328u); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4fe328: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe32d: je 0x4fe33a */
  if (zf) goto L_4fe33a;
L_4fe32f: /* 4fe32f: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4fe331: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe332: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fe337u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fe337: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fe33a: /* 4fe33a: mov eax, esi */
  eax = esi;
/* 4fe33c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe33d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe350(void) {
  LOAD_REGS();
L_4fe350: /* 4fe350: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fe351: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4fe355: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe358: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe359: mov esi, ecx */
  esi = ecx;
/* 4fe35b: je 0x4fe38b */
  if (zf) goto L_4fe38b;
L_4fe35d: /* 4fe35d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4fe360: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe361: push 0x4e1aaf */
  { uint32_t v = 0x4e1aafu; esp -= 4; W32(esp, v); }
/* 4fe366: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4fe369: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe36a: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4fe36c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe36d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fe372u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fe372: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe375: je 0x4fe383 */
  if (zf) goto L_4fe383;
L_4fe377: /* 4fe377: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fe37d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fe37f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe380: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fe383u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fe383: /* 4fe383: mov eax, edi */
  eax = edi;
/* 4fe385: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fe386: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe387: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fe388: ret 4 */
  esp += 8; SPILL(); return;
L_4fe38b: /* 4fe38b: mov ecx, esi */
  ecx = esi;
/* 4fe38d: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4fe392u); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4fe392: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe395: je 0x4fe3a2 */
  if (zf) goto L_4fe3a2;
L_4fe397: /* 4fe397: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4fe399: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe39a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fe39fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fe39f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fe3a2: /* 4fe3a2: mov eax, esi */
  eax = esi;
/* 4fe3a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe3a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fe3a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe3d0(void) {
  LOAD_REGS();
L_4fe3d0: /* 4fe3d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fe3d2: push 0x555d58 */
  { uint32_t v = 0x555d58u; esp -= 4; W32(esp, v); }
/* 4fe3d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fe3dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe3de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fe3e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fe3e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe3e7: mov esi, ecx */
  esi = ecx;
/* 4fe3e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fe3ed: mov dword ptr [esi], 0x569c08 */
  W32((uint32_t)(esi), 0x569c08u);
/* 4fe3f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4fe3fb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4fe400u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4fe400: mov ecx, esi */
  ecx = esi;
/* 4fe402: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fe40a: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4fe40fu); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4fe40f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fe413: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe414: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fe41b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fe41e: ret  */
  esp += 4; SPILL(); return;
}

void f_4fe440(void) {
  LOAD_REGS();
L_4fe440: /* 4fe440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe441: mov esi, ecx */
  esi = ecx;
/* 4fe443: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x4fe448u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 4fe448: mov dword ptr [esi], 0x569c08 */
  W32((uint32_t)(esi), 0x569c08u);
/* 4fe44e: mov eax, esi */
  eax = esi;
/* 4fe450: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe451: ret  */
  esp += 4; SPILL(); return;
}

void f_4fe470(void) {
  LOAD_REGS();
L_4fe470: /* 4fe470: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4fe474: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4fe478: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe479: mov esi, ecx */
  esi = ecx;
/* 4fe47b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4fe47f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe480: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fe481: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fe482: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4fe484: mov ecx, esi */
  ecx = esi;
/* 4fe486: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x4fe48bu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 4fe48b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4fe48f: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4fe492: mov dword ptr [esi], 0x569c08 */
  W32((uint32_t)(esi), 0x569c08u);
/* 4fe498: mov eax, esi */
  eax = esi;
/* 4fe49a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe49b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_4fe4b0(void) {
  LOAD_REGS();
L_4fe4b0: /* 4fe4b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe4b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe4b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fe4b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe4b7: mov esi, ecx */
  esi = ecx;
/* 4fe4b9: call 0x4e2a45 */
  esp -= 4; W32(esp, 0x4fe4beu); SPILL(); f_4e2a45(); if (g_unwind) return; RELOAD();
/* 4fe4be: mov dword ptr [esi], 0x569c08 */
  W32((uint32_t)(esi), 0x569c08u);
/* 4fe4c4: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4fe4c7: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4fe4ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fe4cb: mov eax, esi */
  eax = esi;
/* 4fe4cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe4ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe4f0(void) {
  LOAD_REGS();
L_4fe4f0: /* 4fe4f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe4f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe4f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fe4f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe4f7: mov esi, ecx */
  esi = ecx;
/* 4fe4f9: call 0x4e1514 */
  esp -= 4; W32(esp, 0x4fe4feu); SPILL(); f_4e1514(); if (g_unwind) return; RELOAD();
/* 4fe4fe: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4fe501: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4fe504: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fe505: mov eax, esi */
  eax = esi;
/* 4fe507: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe508: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe520(void) {
  LOAD_REGS();
L_4fe520: /* 4fe520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe521: mov esi, ecx */
  esi = ecx;
/* 4fe523: call 0x4e2de7 */
  esp -= 4; W32(esp, 0x4fe528u); SPILL(); f_4e2de7(); if (g_unwind) return; RELOAD();
/* 4fe528: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe52d: je 0x4fe53a */
  if (zf) goto L_4fe53a;
L_4fe52f: /* 4fe52f: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4fe531: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe532: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fe537u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fe537: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fe53a: /* 4fe53a: mov eax, esi */
  eax = esi;
/* 4fe53c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe53d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe550(void) {
  LOAD_REGS();
L_4fe550: /* 4fe550: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fe551: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4fe555: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe558: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe559: mov esi, ecx */
  esi = ecx;
/* 4fe55b: je 0x4fe58b */
  if (zf) goto L_4fe58b;
L_4fe55d: /* 4fe55d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4fe560: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe561: push 0x4e2de7 */
  { uint32_t v = 0x4e2de7u; esp -= 4; W32(esp, v); }
/* 4fe566: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4fe569: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe56a: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4fe56c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe56d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fe572u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fe572: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe575: je 0x4fe583 */
  if (zf) goto L_4fe583;
L_4fe577: /* 4fe577: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fe57d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fe57f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe580: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fe583u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fe583: /* 4fe583: mov eax, edi */
  eax = edi;
/* 4fe585: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fe586: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe587: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fe588: ret 4 */
  esp += 8; SPILL(); return;
L_4fe58b: /* 4fe58b: mov ecx, esi */
  ecx = esi;
/* 4fe58d: call 0x4e2de7 */
  esp -= 4; W32(esp, 0x4fe592u); SPILL(); f_4e2de7(); if (g_unwind) return; RELOAD();
/* 4fe592: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe595: je 0x4fe5a2 */
  if (zf) goto L_4fe5a2;
L_4fe597: /* 4fe597: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4fe599: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe59a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fe59fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fe59f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fe5a2: /* 4fe5a2: mov eax, esi */
  eax = esi;
/* 4fe5a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe5a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fe5a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe5d0(void) {
  LOAD_REGS();
L_4fe5d0: /* 4fe5d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fe5d2: push 0x555d78 */
  { uint32_t v = 0x555d78u; esp -= 4; W32(esp, v); }
/* 4fe5d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fe5dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe5de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fe5e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fe5e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe5e7: mov esi, ecx */
  esi = ecx;
/* 4fe5e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fe5ed: mov dword ptr [esi], 0x569ce8 */
  W32((uint32_t)(esi), 0x569ce8u);
/* 4fe5f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4fe5fb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4fe600u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4fe600: mov ecx, esi */
  ecx = esi;
/* 4fe602: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fe60a: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4fe60fu); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4fe60f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fe613: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe614: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fe61b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fe61e: ret  */
  esp += 4; SPILL(); return;
}

void f_4fe640(void) {
  LOAD_REGS();
L_4fe640: /* 4fe640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe641: mov esi, ecx */
  esi = ecx;
/* 4fe643: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x4fe648u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 4fe648: mov dword ptr [esi], 0x569ce8 */
  W32((uint32_t)(esi), 0x569ce8u);
/* 4fe64e: mov eax, esi */
  eax = esi;
/* 4fe650: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe651: ret  */
  esp += 4; SPILL(); return;
}

void f_4fe670(void) {
  LOAD_REGS();
L_4fe670: /* 4fe670: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4fe674: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4fe678: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe679: mov esi, ecx */
  esi = ecx;
/* 4fe67b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4fe67f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe680: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fe681: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fe682: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4fe684: mov ecx, esi */
  ecx = esi;
/* 4fe686: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x4fe68bu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 4fe68b: mov dword ptr [esi], 0x569ce8 */
  W32((uint32_t)(esi), 0x569ce8u);
/* 4fe691: mov eax, esi */
  eax = esi;
/* 4fe693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe694: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4fe6b0(void) {
  LOAD_REGS();
L_4fe6b0: /* 4fe6b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4fe6b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe6b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe6b6: mov esi, ecx */
  esi = ecx;
/* 4fe6b8: call 0x4e2a45 */
  esp -= 4; W32(esp, 0x4fe6bdu); SPILL(); f_4e2a45(); if (g_unwind) return; RELOAD();
/* 4fe6bd: mov dword ptr [esi], 0x569ce8 */
  W32((uint32_t)(esi), 0x569ce8u);
/* 4fe6c3: mov eax, esi */
  eax = esi;
/* 4fe6c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe6c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe6e0(void) {
  LOAD_REGS();
L_4fe6e0: /* 4fe6e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4fe6e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe6e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe6e6: mov esi, ecx */
  esi = ecx;
/* 4fe6e8: call 0x4e1514 */
  esp -= 4; W32(esp, 0x4fe6edu); SPILL(); f_4e1514(); if (g_unwind) return; RELOAD();
/* 4fe6ed: mov eax, esi */
  eax = esi;
/* 4fe6ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe6f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe710(void) {
  LOAD_REGS();
L_4fe710: /* 4fe710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe711: mov esi, ecx */
  esi = ecx;
/* 4fe713: call 0x4e2fd1 */
  esp -= 4; W32(esp, 0x4fe718u); SPILL(); f_4e2fd1(); if (g_unwind) return; RELOAD();
/* 4fe718: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe71d: je 0x4fe72a */
  if (zf) goto L_4fe72a;
L_4fe71f: /* 4fe71f: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4fe721: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe722: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fe727u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fe727: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fe72a: /* 4fe72a: mov eax, esi */
  eax = esi;
/* 4fe72c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe72d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe740(void) {
  LOAD_REGS();
L_4fe740: /* 4fe740: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fe741: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4fe745: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe748: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe749: mov esi, ecx */
  esi = ecx;
/* 4fe74b: je 0x4fe77b */
  if (zf) goto L_4fe77b;
L_4fe74d: /* 4fe74d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4fe750: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe751: push 0x4e2fd1 */
  { uint32_t v = 0x4e2fd1u; esp -= 4; W32(esp, v); }
/* 4fe756: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4fe759: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe75a: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4fe75c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe75d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fe762u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fe762: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe765: je 0x4fe773 */
  if (zf) goto L_4fe773;
L_4fe767: /* 4fe767: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fe76d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fe76f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe770: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fe773u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fe773: /* 4fe773: mov eax, edi */
  eax = edi;
/* 4fe775: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fe776: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe777: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fe778: ret 4 */
  esp += 8; SPILL(); return;
L_4fe77b: /* 4fe77b: mov ecx, esi */
  ecx = esi;
/* 4fe77d: call 0x4e2fd1 */
  esp -= 4; W32(esp, 0x4fe782u); SPILL(); f_4e2fd1(); if (g_unwind) return; RELOAD();
/* 4fe782: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe785: je 0x4fe792 */
  if (zf) goto L_4fe792;
L_4fe787: /* 4fe787: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4fe789: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe78a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fe78fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fe78f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fe792: /* 4fe792: mov eax, esi */
  eax = esi;
/* 4fe794: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe795: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fe796: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe7c0(void) {
  LOAD_REGS();
L_4fe7c0: /* 4fe7c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fe7c2: push 0x555d98 */
  { uint32_t v = 0x555d98u; esp -= 4; W32(esp, v); }
/* 4fe7c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fe7cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe7ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fe7d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fe7d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe7d7: mov esi, ecx */
  esi = ecx;
/* 4fe7d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fe7dd: mov dword ptr [esi], 0x569dc8 */
  W32((uint32_t)(esi), 0x569dc8u);
/* 4fe7e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4fe7eb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4fe7f0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4fe7f0: mov ecx, esi */
  ecx = esi;
/* 4fe7f2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fe7fa: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4fe7ffu); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4fe7ff: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fe803: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe804: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fe80b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fe80e: ret  */
  esp += 4; SPILL(); return;
}

void f_4fe830(void) {
  LOAD_REGS();
L_4fe830: /* 4fe830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe831: mov esi, ecx */
  esi = ecx;
/* 4fe833: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x4fe838u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 4fe838: mov dword ptr [esi], 0x569dc8 */
  W32((uint32_t)(esi), 0x569dc8u);
/* 4fe83e: mov eax, esi */
  eax = esi;
/* 4fe840: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe841: ret  */
  esp += 4; SPILL(); return;
}

void f_4fe860(void) {
  LOAD_REGS();
L_4fe860: /* 4fe860: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4fe864: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4fe868: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe869: mov esi, ecx */
  esi = ecx;
/* 4fe86b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4fe86f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe870: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fe871: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fe872: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4fe874: mov ecx, esi */
  ecx = esi;
/* 4fe876: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x4fe87bu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 4fe87b: mov dword ptr [esi], 0x569dc8 */
  W32((uint32_t)(esi), 0x569dc8u);
/* 4fe881: mov dword ptr [esi + 0x6c], 1 */
  W32((uint32_t)(esi + 0x6cu), 0x1u);
/* 4fe888: mov eax, esi */
  eax = esi;
/* 4fe88a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe88b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4fe8a0(void) {
  LOAD_REGS();
L_4fe8a0: /* 4fe8a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe8a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe8a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fe8a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe8a7: mov esi, ecx */
  esi = ecx;
/* 4fe8a9: call 0x4e2a45 */
  esp -= 4; W32(esp, 0x4fe8aeu); SPILL(); f_4e2a45(); if (g_unwind) return; RELOAD();
/* 4fe8ae: mov dword ptr [esi], 0x569dc8 */
  W32((uint32_t)(esi), 0x569dc8u);
/* 4fe8b4: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4fe8b7: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4fe8ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fe8bb: mov eax, esi */
  eax = esi;
/* 4fe8bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe8be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe8e0(void) {
  LOAD_REGS();
L_4fe8e0: /* 4fe8e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe8e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe8e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fe8e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe8e7: mov esi, ecx */
  esi = ecx;
/* 4fe8e9: call 0x4e1514 */
  esp -= 4; W32(esp, 0x4fe8eeu); SPILL(); f_4e1514(); if (g_unwind) return; RELOAD();
/* 4fe8ee: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4fe8f1: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4fe8f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fe8f5: mov eax, esi */
  eax = esi;
/* 4fe8f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe8f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe910(void) {
  LOAD_REGS();
L_4fe910: /* 4fe910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe911: mov esi, ecx */
  esi = ecx;
/* 4fe913: call 0x4e1988 */
  esp -= 4; W32(esp, 0x4fe918u); SPILL(); f_4e1988(); if (g_unwind) return; RELOAD();
/* 4fe918: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe91d: je 0x4fe92a */
  if (zf) goto L_4fe92a;
L_4fe91f: /* 4fe91f: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4fe921: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe922: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fe927u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fe927: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fe92a: /* 4fe92a: mov eax, esi */
  eax = esi;
/* 4fe92c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe92d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe940(void) {
  LOAD_REGS();
L_4fe940: /* 4fe940: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fe941: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4fe945: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe948: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe949: mov esi, ecx */
  esi = ecx;
/* 4fe94b: je 0x4fe97b */
  if (zf) goto L_4fe97b;
L_4fe94d: /* 4fe94d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4fe950: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe951: push 0x4e1988 */
  { uint32_t v = 0x4e1988u; esp -= 4; W32(esp, v); }
/* 4fe956: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4fe959: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe95a: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4fe95c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe95d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fe962u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fe962: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe965: je 0x4fe973 */
  if (zf) goto L_4fe973;
L_4fe967: /* 4fe967: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fe96d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fe96f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fe970: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fe973u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fe973: /* 4fe973: mov eax, edi */
  eax = edi;
/* 4fe975: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fe976: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe977: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fe978: ret 4 */
  esp += 8; SPILL(); return;
L_4fe97b: /* 4fe97b: mov ecx, esi */
  ecx = esi;
/* 4fe97d: call 0x4e1988 */
  esp -= 4; W32(esp, 0x4fe982u); SPILL(); f_4e1988(); if (g_unwind) return; RELOAD();
/* 4fe982: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fe985: je 0x4fe992 */
  if (zf) goto L_4fe992;
L_4fe987: /* 4fe987: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4fe989: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe98a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fe98fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fe98f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fe992: /* 4fe992: mov eax, esi */
  eax = esi;
/* 4fe994: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fe995: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fe996: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fe9c0(void) {
  LOAD_REGS();
L_4fe9c0: /* 4fe9c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fe9c2: push 0x555db8 */
  { uint32_t v = 0x555db8u; esp -= 4; W32(esp, v); }
/* 4fe9c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fe9cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fe9ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fe9d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fe9d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fe9d7: mov esi, ecx */
  esi = ecx;
/* 4fe9d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fe9dd: mov dword ptr [esi], 0x569ea8 */
  W32((uint32_t)(esi), 0x569ea8u);
/* 4fe9e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4fe9eb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4fe9f0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4fe9f0: mov ecx, esi */
  ecx = esi;
/* 4fe9f2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fe9fa: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4fe9ffu); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4fe9ff: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fea03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fea04: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fea0b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fea0e: ret  */
  esp += 4; SPILL(); return;
}

void f_4fea30(void) {
  LOAD_REGS();
L_4fea30: /* 4fea30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fea31: mov esi, ecx */
  esi = ecx;
/* 4fea33: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x4fea38u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 4fea38: mov dword ptr [esi], 0x569ea8 */
  W32((uint32_t)(esi), 0x569ea8u);
/* 4fea3e: mov eax, esi */
  eax = esi;
/* 4fea40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fea41: ret  */
  esp += 4; SPILL(); return;
}

void f_4fea60(void) {
  LOAD_REGS();
L_4fea60: /* 4fea60: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4fea64: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4fea68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fea69: mov esi, ecx */
  esi = ecx;
/* 4fea6b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4fea6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fea70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fea71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fea72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4fea74: mov ecx, esi */
  ecx = esi;
/* 4fea76: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x4fea7bu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 4fea7b: mov dword ptr [esi], 0x569ea8 */
  W32((uint32_t)(esi), 0x569ea8u);
/* 4fea81: mov eax, esi */
  eax = esi;
/* 4fea83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fea84: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4feaa0(void) {
  LOAD_REGS();
L_4feaa0: /* 4feaa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4feaa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4feaa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4feaa6: mov esi, ecx */
  esi = ecx;
/* 4feaa8: call 0x4e2a45 */
  esp -= 4; W32(esp, 0x4feaadu); SPILL(); f_4e2a45(); if (g_unwind) return; RELOAD();
/* 4feaad: mov dword ptr [esi], 0x569ea8 */
  W32((uint32_t)(esi), 0x569ea8u);
/* 4feab3: mov eax, esi */
  eax = esi;
/* 4feab5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4feab6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fead0(void) {
  LOAD_REGS();
L_4fead0: /* 4fead0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4fead4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fead5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fead6: mov esi, ecx */
  esi = ecx;
/* 4fead8: call 0x4e1514 */
  esp -= 4; W32(esp, 0x4feaddu); SPILL(); f_4e1514(); if (g_unwind) return; RELOAD();
/* 4feadd: mov eax, esi */
  eax = esi;
/* 4feadf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4feae0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4feb00(void) {
  LOAD_REGS();
L_4feb00: /* 4feb00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4feb01: mov esi, ecx */
  esi = ecx;
/* 4feb03: call 0x4e38a5 */
  esp -= 4; W32(esp, 0x4feb08u); SPILL(); f_4e38a5(); if (g_unwind) return; RELOAD();
/* 4feb08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4feb0d: je 0x4feb1a */
  if (zf) goto L_4feb1a;
L_4feb0f: /* 4feb0f: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4feb11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4feb12: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4feb17u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4feb17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4feb1a: /* 4feb1a: mov eax, esi */
  eax = esi;
/* 4feb1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4feb1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4feb30(void) {
  LOAD_REGS();
L_4feb30: /* 4feb30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4feb31: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4feb35: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4feb38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4feb39: mov esi, ecx */
  esi = ecx;
/* 4feb3b: je 0x4feb6b */
  if (zf) goto L_4feb6b;
L_4feb3d: /* 4feb3d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4feb40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4feb41: push 0x4e38a5 */
  { uint32_t v = 0x4e38a5u; esp -= 4; W32(esp, v); }
/* 4feb46: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4feb49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4feb4a: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4feb4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4feb4d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4feb52u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4feb52: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4feb55: je 0x4feb63 */
  if (zf) goto L_4feb63;
L_4feb57: /* 4feb57: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4feb5d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4feb5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4feb60: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4feb63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4feb63: /* 4feb63: mov eax, edi */
  eax = edi;
/* 4feb65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4feb66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4feb67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4feb68: ret 4 */
  esp += 8; SPILL(); return;
L_4feb6b: /* 4feb6b: mov ecx, esi */
  ecx = esi;
/* 4feb6d: call 0x4e38a5 */
  esp -= 4; W32(esp, 0x4feb72u); SPILL(); f_4e38a5(); if (g_unwind) return; RELOAD();
/* 4feb72: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4feb75: je 0x4feb82 */
  if (zf) goto L_4feb82;
L_4feb77: /* 4feb77: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4feb79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4feb7a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4feb7fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4feb7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4feb82: /* 4feb82: mov eax, esi */
  eax = esi;
/* 4feb84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4feb85: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4feb86: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4febb0(void) {
  LOAD_REGS();
L_4febb0: /* 4febb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4febb2: push 0x555dd8 */
  { uint32_t v = 0x555dd8u; esp -= 4; W32(esp, v); }
/* 4febb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4febbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4febbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4febc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4febc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4febc7: mov esi, ecx */
  esi = ecx;
/* 4febc9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4febcd: mov dword ptr [esi], 0x569f88 */
  W32((uint32_t)(esi), 0x569f88u);
/* 4febd3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4febdb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4febe0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4febe0: mov ecx, esi */
  ecx = esi;
/* 4febe2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4febea: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4febefu); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4febef: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4febf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4febf4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4febfb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4febfe: ret  */
  esp += 4; SPILL(); return;
}

void f_4fec20(void) {
  LOAD_REGS();
L_4fec20: /* 4fec20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fec21: mov esi, ecx */
  esi = ecx;
/* 4fec23: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x4fec28u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 4fec28: mov dword ptr [esi], 0x569f88 */
  W32((uint32_t)(esi), 0x569f88u);
/* 4fec2e: mov eax, esi */
  eax = esi;
/* 4fec30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fec31: ret  */
  esp += 4; SPILL(); return;
}

void f_4fec50(void) {
  LOAD_REGS();
L_4fec50: /* 4fec50: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4fec54: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4fec58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fec59: mov esi, ecx */
  esi = ecx;
/* 4fec5b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4fec5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fec60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fec61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fec62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4fec64: mov ecx, esi */
  ecx = esi;
/* 4fec66: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x4fec6bu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 4fec6b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4fec6f: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4fec72: mov dword ptr [esi], 0x569f88 */
  W32((uint32_t)(esi), 0x569f88u);
/* 4fec78: mov eax, esi */
  eax = esi;
/* 4fec7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fec7b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_4fec90(void) {
  LOAD_REGS();
L_4fec90: /* 4fec90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fec91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fec92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fec96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fec97: mov esi, ecx */
  esi = ecx;
/* 4fec99: call 0x4e2a45 */
  esp -= 4; W32(esp, 0x4fec9eu); SPILL(); f_4e2a45(); if (g_unwind) return; RELOAD();
/* 4fec9e: mov dword ptr [esi], 0x569f88 */
  W32((uint32_t)(esi), 0x569f88u);
/* 4feca4: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4feca7: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4fecaa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fecab: mov eax, esi */
  eax = esi;
/* 4fecad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fecae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fecd0(void) {
  LOAD_REGS();
L_4fecd0: /* 4fecd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fecd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fecd2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fecd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fecd7: mov esi, ecx */
  esi = ecx;
/* 4fecd9: call 0x4e1514 */
  esp -= 4; W32(esp, 0x4fecdeu); SPILL(); f_4e1514(); if (g_unwind) return; RELOAD();
/* 4fecde: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4fece1: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4fece4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fece5: mov eax, esi */
  eax = esi;
/* 4fece7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fece8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fed00(void) {
  LOAD_REGS();
L_4fed00: /* 4fed00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fed01: mov esi, ecx */
  esi = ecx;
/* 4fed03: call 0x4e286a */
  esp -= 4; W32(esp, 0x4fed08u); SPILL(); f_4e286a(); if (g_unwind) return; RELOAD();
/* 4fed08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fed0d: je 0x4fed1a */
  if (zf) goto L_4fed1a;
L_4fed0f: /* 4fed0f: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4fed11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fed12: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fed17u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fed17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fed1a: /* 4fed1a: mov eax, esi */
  eax = esi;
/* 4fed1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fed1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fed30(void) {
  LOAD_REGS();
L_4fed30: /* 4fed30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fed31: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4fed35: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fed38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fed39: mov esi, ecx */
  esi = ecx;
/* 4fed3b: je 0x4fed6b */
  if (zf) goto L_4fed6b;
L_4fed3d: /* 4fed3d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4fed40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fed41: push 0x4e286a */
  { uint32_t v = 0x4e286au; esp -= 4; W32(esp, v); }
/* 4fed46: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4fed49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fed4a: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4fed4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fed4d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fed52u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fed52: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fed55: je 0x4fed63 */
  if (zf) goto L_4fed63;
L_4fed57: /* 4fed57: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fed5d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fed5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fed60: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fed63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fed63: /* 4fed63: mov eax, edi */
  eax = edi;
/* 4fed65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fed66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fed67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fed68: ret 4 */
  esp += 8; SPILL(); return;
L_4fed6b: /* 4fed6b: mov ecx, esi */
  ecx = esi;
/* 4fed6d: call 0x4e286a */
  esp -= 4; W32(esp, 0x4fed72u); SPILL(); f_4e286a(); if (g_unwind) return; RELOAD();
/* 4fed72: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fed75: je 0x4fed82 */
  if (zf) goto L_4fed82;
L_4fed77: /* 4fed77: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4fed79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fed7a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fed7fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fed7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fed82: /* 4fed82: mov eax, esi */
  eax = esi;
/* 4fed84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fed85: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fed86: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fedb0(void) {
  LOAD_REGS();
L_4fedb0: /* 4fedb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fedb2: push 0x555df8 */
  { uint32_t v = 0x555df8u; esp -= 4; W32(esp, v); }
/* 4fedb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fedbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fedbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fedc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fedc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fedc7: mov esi, ecx */
  esi = ecx;
/* 4fedc9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fedcd: mov dword ptr [esi], 0x56a068 */
  W32((uint32_t)(esi), 0x56a068u);
/* 4fedd3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4feddb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4fede0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4fede0: mov ecx, esi */
  ecx = esi;
/* 4fede2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fedea: call 0x4e286a */
  esp -= 4; W32(esp, 0x4fedefu); SPILL(); f_4e286a(); if (g_unwind) return; RELOAD();
/* 4fedef: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fedf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fedf4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fedfb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fedfe: ret  */
  esp += 4; SPILL(); return;
}

void f_4fee20(void) {
  LOAD_REGS();
L_4fee20: /* 4fee20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fee21: mov esi, ecx */
  esi = ecx;
/* 4fee23: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x4fee28u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 4fee28: mov dword ptr [esi], 0x56a068 */
  W32((uint32_t)(esi), 0x56a068u);
/* 4fee2e: mov eax, esi */
  eax = esi;
/* 4fee30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fee31: ret  */
  esp += 4; SPILL(); return;
}

void f_4fee50(void) {
  LOAD_REGS();
L_4fee50: /* 4fee50: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4fee54: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4fee58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fee59: mov esi, ecx */
  esi = ecx;
/* 4fee5b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4fee5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fee60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fee61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fee62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4fee64: mov ecx, esi */
  ecx = esi;
/* 4fee66: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x4fee6bu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 4fee6b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4fee6f: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 4fee72: mov dword ptr [esi + 0x6c], 0x5f0d80 */
  W32((uint32_t)(esi + 0x6cu), 0x5f0d80u);
/* 4fee79: mov dword ptr [esi], 0x56a068 */
  W32((uint32_t)(esi), 0x56a068u);
/* 4fee7f: mov eax, esi */
  eax = esi;
/* 4fee81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fee82: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_4feea0(void) {
  LOAD_REGS();
L_4feea0: /* 4feea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4feea1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4feea2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4feea6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4feea7: mov esi, ecx */
  esi = ecx;
/* 4feea9: call 0x4e2a45 */
  esp -= 4; W32(esp, 0x4feeaeu); SPILL(); f_4e2a45(); if (g_unwind) return; RELOAD();
/* 4feeae: mov dword ptr [esi], 0x569f88 */
  W32((uint32_t)(esi), 0x569f88u);
/* 4feeb4: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4feeb7: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4feeba: mov dword ptr [esi], 0x56a068 */
  W32((uint32_t)(esi), 0x56a068u);
/* 4feec0: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 4feec3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4feec4: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 4feec7: mov eax, esi */
  eax = esi;
/* 4feec9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4feeca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4feee0(void) {
  LOAD_REGS();
L_4feee0: /* 4feee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4feee1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4feee2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4feee6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4feee7: mov esi, ecx */
  esi = ecx;
/* 4feee9: call 0x4e1514 */
  esp -= 4; W32(esp, 0x4feeeeu); SPILL(); f_4e1514(); if (g_unwind) return; RELOAD();
/* 4feeee: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4feef1: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4feef4: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 4feef7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4feef8: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 4feefb: mov eax, esi */
  eax = esi;
/* 4feefd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4feefe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fef20(void) {
  LOAD_REGS();
L_4fef20: /* 4fef20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fef21: mov esi, ecx */
  esi = ecx;
/* 4fef23: call 0x4e1073 */
  esp -= 4; W32(esp, 0x4fef28u); SPILL(); f_4e1073(); if (g_unwind) return; RELOAD();
/* 4fef28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fef2d: je 0x4fef3a */
  if (zf) goto L_4fef3a;
L_4fef2f: /* 4fef2f: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 4fef31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fef32: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fef37u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fef37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fef3a: /* 4fef3a: mov eax, esi */
  eax = esi;
/* 4fef3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fef3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fef50(void) {
  LOAD_REGS();
L_4fef50: /* 4fef50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fef51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4fef55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fef58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fef59: mov esi, ecx */
  esi = ecx;
/* 4fef5b: je 0x4fef8b */
  if (zf) goto L_4fef8b;
L_4fef5d: /* 4fef5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4fef60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fef61: push 0x4e1073 */
  { uint32_t v = 0x4e1073u; esp -= 4; W32(esp, v); }
/* 4fef66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4fef69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fef6a: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 4fef6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fef6d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fef72u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fef72: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fef75: je 0x4fef83 */
  if (zf) goto L_4fef83;
L_4fef77: /* 4fef77: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fef7d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fef7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fef80: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fef83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fef83: /* 4fef83: mov eax, edi */
  eax = edi;
/* 4fef85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fef86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fef87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fef88: ret 4 */
  esp += 8; SPILL(); return;
L_4fef8b: /* 4fef8b: mov ecx, esi */
  ecx = esi;
/* 4fef8d: call 0x4e1073 */
  esp -= 4; W32(esp, 0x4fef92u); SPILL(); f_4e1073(); if (g_unwind) return; RELOAD();
/* 4fef92: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fef95: je 0x4fefa2 */
  if (zf) goto L_4fefa2;
L_4fef97: /* 4fef97: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 4fef99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fef9a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fef9fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fef9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fefa2: /* 4fefa2: mov eax, esi */
  eax = esi;
/* 4fefa4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fefa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fefa6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fefd0(void) {
  LOAD_REGS();
L_4fefd0: /* 4fefd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fefd2: push 0x555e18 */
  { uint32_t v = 0x555e18u; esp -= 4; W32(esp, v); }
/* 4fefd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fefdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fefde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fefe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fefe6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fefe7: mov esi, ecx */
  esi = ecx;
/* 4fefe9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fefed: mov dword ptr [esi], 0x56a148 */
  W32((uint32_t)(esi), 0x56a148u);
/* 4feff3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4feffb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4ff000u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4ff000: mov ecx, esi */
  ecx = esi;
/* 4ff002: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4ff00a: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4ff00fu); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4ff00f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4ff013: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff014: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4ff01b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ff01e: ret  */
  esp += 4; SPILL(); return;
}

void f_4ff040(void) {
  LOAD_REGS();
L_4ff040: /* 4ff040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff041: mov esi, ecx */
  esi = ecx;
/* 4ff043: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x4ff048u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 4ff048: mov dword ptr [esi], 0x56a148 */
  W32((uint32_t)(esi), 0x56a148u);
/* 4ff04e: mov eax, esi */
  eax = esi;
/* 4ff050: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff051: ret  */
  esp += 4; SPILL(); return;
}

void f_4ff070(void) {
  LOAD_REGS();
L_4ff070: /* 4ff070: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4ff074: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ff078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff079: mov esi, ecx */
  esi = ecx;
/* 4ff07b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4ff07f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff080: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ff081: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4ff082: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4ff084: mov ecx, esi */
  ecx = esi;
/* 4ff086: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x4ff08bu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 4ff08b: mov dword ptr [esi], 0x56a148 */
  W32((uint32_t)(esi), 0x56a148u);
/* 4ff091: mov eax, esi */
  eax = esi;
/* 4ff093: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff094: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4ff0b0(void) {
  LOAD_REGS();
L_4ff0b0: /* 4ff0b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ff0b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff0b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff0b6: mov esi, ecx */
  esi = ecx;
/* 4ff0b8: call 0x4e2a45 */
  esp -= 4; W32(esp, 0x4ff0bdu); SPILL(); f_4e2a45(); if (g_unwind) return; RELOAD();
/* 4ff0bd: mov dword ptr [esi], 0x56a148 */
  W32((uint32_t)(esi), 0x56a148u);
/* 4ff0c3: mov eax, esi */
  eax = esi;
/* 4ff0c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff0c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff0e0(void) {
  LOAD_REGS();
L_4ff0e0: /* 4ff0e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ff0e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff0e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff0e6: mov esi, ecx */
  esi = ecx;
/* 4ff0e8: call 0x4e1514 */
  esp -= 4; W32(esp, 0x4ff0edu); SPILL(); f_4e1514(); if (g_unwind) return; RELOAD();
/* 4ff0ed: mov eax, esi */
  eax = esi;
/* 4ff0ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff0f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff110(void) {
  LOAD_REGS();
L_4ff110: /* 4ff110: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff111: mov esi, ecx */
  esi = ecx;
/* 4ff113: call 0x4e41dd */
  esp -= 4; W32(esp, 0x4ff118u); SPILL(); f_4e41dd(); if (g_unwind) return; RELOAD();
/* 4ff118: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff11d: je 0x4ff12a */
  if (zf) goto L_4ff12a;
L_4ff11f: /* 4ff11f: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4ff121: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff122: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ff127u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ff127: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ff12a: /* 4ff12a: mov eax, esi */
  eax = esi;
/* 4ff12c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff12d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff140(void) {
  LOAD_REGS();
L_4ff140: /* 4ff140: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4ff141: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4ff145: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff149: mov esi, ecx */
  esi = ecx;
/* 4ff14b: je 0x4ff17b */
  if (zf) goto L_4ff17b;
L_4ff14d: /* 4ff14d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4ff150: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff151: push 0x4e41dd */
  { uint32_t v = 0x4e41ddu; esp -= 4; W32(esp, v); }
/* 4ff156: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4ff159: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff15a: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4ff15c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff15d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4ff162u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4ff162: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff165: je 0x4ff173 */
  if (zf) goto L_4ff173;
L_4ff167: /* 4ff167: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4ff16d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ff16f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff170: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4ff173u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4ff173: /* 4ff173: mov eax, edi */
  eax = edi;
/* 4ff175: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ff176: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff177: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ff178: ret 4 */
  esp += 8; SPILL(); return;
L_4ff17b: /* 4ff17b: mov ecx, esi */
  ecx = esi;
/* 4ff17d: call 0x4e41dd */
  esp -= 4; W32(esp, 0x4ff182u); SPILL(); f_4e41dd(); if (g_unwind) return; RELOAD();
/* 4ff182: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff185: je 0x4ff192 */
  if (zf) goto L_4ff192;
L_4ff187: /* 4ff187: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4ff189: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff18a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ff18fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ff18f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ff192: /* 4ff192: mov eax, esi */
  eax = esi;
/* 4ff194: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff195: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ff196: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff1c0(void) {
  LOAD_REGS();
L_4ff1c0: /* 4ff1c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4ff1c2: push 0x555e38 */
  { uint32_t v = 0x555e38u; esp -= 4; W32(esp, v); }
/* 4ff1c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4ff1cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff1ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4ff1d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ff1d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff1d7: mov esi, ecx */
  esi = ecx;
/* 4ff1d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4ff1dd: mov dword ptr [esi], 0x56a228 */
  W32((uint32_t)(esi), 0x56a228u);
/* 4ff1e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4ff1eb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4ff1f0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4ff1f0: mov ecx, esi */
  ecx = esi;
/* 4ff1f2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4ff1fa: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4ff1ffu); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4ff1ff: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4ff203: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff204: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4ff20b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ff20e: ret  */
  esp += 4; SPILL(); return;
}

void f_4ff230(void) {
  LOAD_REGS();
L_4ff230: /* 4ff230: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff231: mov esi, ecx */
  esi = ecx;
/* 4ff233: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x4ff238u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 4ff238: mov dword ptr [esi], 0x56a228 */
  W32((uint32_t)(esi), 0x56a228u);
/* 4ff23e: mov eax, esi */
  eax = esi;
/* 4ff240: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff241: ret  */
  esp += 4; SPILL(); return;
}

void f_4ff260(void) {
  LOAD_REGS();
L_4ff260: /* 4ff260: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4ff264: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ff268: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff269: mov esi, ecx */
  esi = ecx;
/* 4ff26b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4ff26f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff270: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ff271: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4ff272: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4ff274: mov ecx, esi */
  ecx = esi;
/* 4ff276: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x4ff27bu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 4ff27b: mov dword ptr [esi], 0x56a228 */
  W32((uint32_t)(esi), 0x56a228u);
/* 4ff281: mov eax, esi */
  eax = esi;
/* 4ff283: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff284: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4ff2a0(void) {
  LOAD_REGS();
L_4ff2a0: /* 4ff2a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ff2a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff2a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff2a6: mov esi, ecx */
  esi = ecx;
/* 4ff2a8: call 0x4e2a45 */
  esp -= 4; W32(esp, 0x4ff2adu); SPILL(); f_4e2a45(); if (g_unwind) return; RELOAD();
/* 4ff2ad: mov dword ptr [esi], 0x56a228 */
  W32((uint32_t)(esi), 0x56a228u);
/* 4ff2b3: mov eax, esi */
  eax = esi;
/* 4ff2b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff2b6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff2d0(void) {
  LOAD_REGS();
L_4ff2d0: /* 4ff2d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4ff2d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff2d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff2d6: mov esi, ecx */
  esi = ecx;
/* 4ff2d8: call 0x4e1514 */
  esp -= 4; W32(esp, 0x4ff2ddu); SPILL(); f_4e1514(); if (g_unwind) return; RELOAD();
/* 4ff2dd: mov eax, esi */
  eax = esi;
/* 4ff2df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff2e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff300(void) {
  LOAD_REGS();
L_4ff300: /* 4ff300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff301: mov esi, ecx */
  esi = ecx;
/* 4ff303: call 0x4e1712 */
  esp -= 4; W32(esp, 0x4ff308u); SPILL(); f_4e1712(); if (g_unwind) return; RELOAD();
/* 4ff308: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff30d: je 0x4ff31a */
  if (zf) goto L_4ff31a;
L_4ff30f: /* 4ff30f: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4ff311: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff312: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ff317u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ff317: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ff31a: /* 4ff31a: mov eax, esi */
  eax = esi;
/* 4ff31c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff31d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff330(void) {
  LOAD_REGS();
L_4ff330: /* 4ff330: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4ff331: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4ff335: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff338: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff339: mov esi, ecx */
  esi = ecx;
/* 4ff33b: je 0x4ff36b */
  if (zf) goto L_4ff36b;
L_4ff33d: /* 4ff33d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4ff340: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff341: push 0x4e1712 */
  { uint32_t v = 0x4e1712u; esp -= 4; W32(esp, v); }
/* 4ff346: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4ff349: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff34a: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4ff34c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff34d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4ff352u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4ff352: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff355: je 0x4ff363 */
  if (zf) goto L_4ff363;
L_4ff357: /* 4ff357: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4ff35d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ff35f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff360: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4ff363u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4ff363: /* 4ff363: mov eax, edi */
  eax = edi;
/* 4ff365: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ff366: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff367: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ff368: ret 4 */
  esp += 8; SPILL(); return;
L_4ff36b: /* 4ff36b: mov ecx, esi */
  ecx = esi;
/* 4ff36d: call 0x4e1712 */
  esp -= 4; W32(esp, 0x4ff372u); SPILL(); f_4e1712(); if (g_unwind) return; RELOAD();
/* 4ff372: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff375: je 0x4ff382 */
  if (zf) goto L_4ff382;
L_4ff377: /* 4ff377: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 4ff379: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff37a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ff37fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ff37f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ff382: /* 4ff382: mov eax, esi */
  eax = esi;
/* 4ff384: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff385: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ff386: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff3b0(void) {
  LOAD_REGS();
L_4ff3b0: /* 4ff3b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4ff3b2: push 0x555e58 */
  { uint32_t v = 0x555e58u; esp -= 4; W32(esp, v); }
/* 4ff3b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4ff3bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff3be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4ff3c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ff3c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff3c7: mov esi, ecx */
  esi = ecx;
/* 4ff3c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4ff3cd: mov dword ptr [esi], 0x56a308 */
  W32((uint32_t)(esi), 0x56a308u);
/* 4ff3d3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4ff3db: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4ff3e0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4ff3e0: mov ecx, esi */
  ecx = esi;
/* 4ff3e2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4ff3ea: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4ff3efu); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4ff3ef: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4ff3f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff3f4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4ff3fb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ff3fe: ret  */
  esp += 4; SPILL(); return;
}

void f_4ff420(void) {
  LOAD_REGS();
L_4ff420: /* 4ff420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff421: mov esi, ecx */
  esi = ecx;
/* 4ff423: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x4ff428u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 4ff428: mov dword ptr [esi], 0x56a308 */
  W32((uint32_t)(esi), 0x56a308u);
/* 4ff42e: mov eax, esi */
  eax = esi;
/* 4ff430: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff431: ret  */
  esp += 4; SPILL(); return;
}

void f_4ff450(void) {
  LOAD_REGS();
L_4ff450: /* 4ff450: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4ff454: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ff458: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff459: mov esi, ecx */
  esi = ecx;
/* 4ff45b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4ff45f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff460: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ff461: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4ff462: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4ff464: mov ecx, esi */
  ecx = esi;
/* 4ff466: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x4ff46bu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 4ff46b: mov dword ptr [esi], 0x56a308 */
  W32((uint32_t)(esi), 0x56a308u);
/* 4ff471: mov eax, esi */
  eax = esi;
/* 4ff473: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff474: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4ff490(void) {
  LOAD_REGS();
L_4ff490: /* 4ff490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff491: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff492: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4ff496: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff497: mov esi, ecx */
  esi = ecx;
/* 4ff499: call 0x4e2a45 */
  esp -= 4; W32(esp, 0x4ff49eu); SPILL(); f_4e2a45(); if (g_unwind) return; RELOAD();
/* 4ff49e: mov dword ptr [esi], 0x56a308 */
  W32((uint32_t)(esi), 0x56a308u);
/* 4ff4a4: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4ff4a7: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4ff4aa: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 4ff4ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ff4ae: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 4ff4b1: mov eax, esi */
  eax = esi;
/* 4ff4b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff4b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff4d0(void) {
  LOAD_REGS();
L_4ff4d0: /* 4ff4d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff4d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff4d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4ff4d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff4d7: mov esi, ecx */
  esi = ecx;
/* 4ff4d9: call 0x4e1514 */
  esp -= 4; W32(esp, 0x4ff4deu); SPILL(); f_4e1514(); if (g_unwind) return; RELOAD();
/* 4ff4de: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4ff4e1: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4ff4e4: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 4ff4e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ff4e8: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 4ff4eb: mov eax, esi */
  eax = esi;
/* 4ff4ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff4ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff510(void) {
  LOAD_REGS();
L_4ff510: /* 4ff510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff511: mov esi, ecx */
  esi = ecx;
/* 4ff513: call 0x4e2770 */
  esp -= 4; W32(esp, 0x4ff518u); SPILL(); f_4e2770(); if (g_unwind) return; RELOAD();
/* 4ff518: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff51d: je 0x4ff52a */
  if (zf) goto L_4ff52a;
L_4ff51f: /* 4ff51f: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 4ff521: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff522: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ff527u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ff527: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ff52a: /* 4ff52a: mov eax, esi */
  eax = esi;
/* 4ff52c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff52d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff540(void) {
  LOAD_REGS();
L_4ff540: /* 4ff540: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4ff541: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4ff545: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff549: mov esi, ecx */
  esi = ecx;
/* 4ff54b: je 0x4ff57b */
  if (zf) goto L_4ff57b;
L_4ff54d: /* 4ff54d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4ff550: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff551: push 0x4e2770 */
  { uint32_t v = 0x4e2770u; esp -= 4; W32(esp, v); }
/* 4ff556: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4ff559: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff55a: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 4ff55c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff55d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4ff562u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4ff562: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff565: je 0x4ff573 */
  if (zf) goto L_4ff573;
L_4ff567: /* 4ff567: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4ff56d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ff56f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff570: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4ff573u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4ff573: /* 4ff573: mov eax, edi */
  eax = edi;
/* 4ff575: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ff576: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff577: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ff578: ret 4 */
  esp += 8; SPILL(); return;
L_4ff57b: /* 4ff57b: mov ecx, esi */
  ecx = esi;
/* 4ff57d: call 0x4e2770 */
  esp -= 4; W32(esp, 0x4ff582u); SPILL(); f_4e2770(); if (g_unwind) return; RELOAD();
/* 4ff582: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff585: je 0x4ff592 */
  if (zf) goto L_4ff592;
L_4ff587: /* 4ff587: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 4ff589: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff58a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ff58fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ff58f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ff592: /* 4ff592: mov eax, esi */
  eax = esi;
/* 4ff594: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff595: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ff596: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff5c0(void) {
  LOAD_REGS();
L_4ff5c0: /* 4ff5c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4ff5c2: push 0x555e78 */
  { uint32_t v = 0x555e78u; esp -= 4; W32(esp, v); }
/* 4ff5c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4ff5cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff5ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4ff5d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ff5d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff5d7: mov esi, ecx */
  esi = ecx;
/* 4ff5d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4ff5dd: mov dword ptr [esi], 0x56a3e8 */
  W32((uint32_t)(esi), 0x56a3e8u);
/* 4ff5e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4ff5eb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4ff5f0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4ff5f0: mov ecx, esi */
  ecx = esi;
/* 4ff5f2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4ff5fa: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4ff5ffu); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4ff5ff: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4ff603: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff604: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4ff60b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ff60e: ret  */
  esp += 4; SPILL(); return;
}

void f_4ff630(void) {
  LOAD_REGS();
L_4ff630: /* 4ff630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff631: mov esi, ecx */
  esi = ecx;
/* 4ff633: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x4ff638u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 4ff638: mov dword ptr [esi], 0x56a3e8 */
  W32((uint32_t)(esi), 0x56a3e8u);
/* 4ff63e: mov eax, esi */
  eax = esi;
/* 4ff640: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff641: ret  */
  esp += 4; SPILL(); return;
}

void f_4ff660(void) {
  LOAD_REGS();
L_4ff660: /* 4ff660: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4ff664: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ff668: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff669: mov esi, ecx */
  esi = ecx;
/* 4ff66b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4ff66f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff670: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ff671: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4ff672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4ff674: mov ecx, esi */
  ecx = esi;
/* 4ff676: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x4ff67bu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 4ff67b: mov dword ptr [esi], 0x56a3e8 */
  W32((uint32_t)(esi), 0x56a3e8u);
/* 4ff681: mov eax, esi */
  eax = esi;
/* 4ff683: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff684: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4ff6a0(void) {
  LOAD_REGS();
L_4ff6a0: /* 4ff6a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff6a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff6a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4ff6a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff6a7: mov esi, ecx */
  esi = ecx;
/* 4ff6a9: call 0x4e2a45 */
  esp -= 4; W32(esp, 0x4ff6aeu); SPILL(); f_4e2a45(); if (g_unwind) return; RELOAD();
/* 4ff6ae: mov dword ptr [esi], 0x56a3e8 */
  W32((uint32_t)(esi), 0x56a3e8u);
/* 4ff6b4: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4ff6b7: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4ff6ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ff6bb: mov eax, esi */
  eax = esi;
/* 4ff6bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff6be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff6e0(void) {
  LOAD_REGS();
L_4ff6e0: /* 4ff6e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff6e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff6e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4ff6e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff6e7: mov esi, ecx */
  esi = ecx;
/* 4ff6e9: call 0x4e1514 */
  esp -= 4; W32(esp, 0x4ff6eeu); SPILL(); f_4e1514(); if (g_unwind) return; RELOAD();
/* 4ff6ee: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4ff6f1: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4ff6f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ff6f5: mov eax, esi */
  eax = esi;
/* 4ff6f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff6f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff710(void) {
  LOAD_REGS();
L_4ff710: /* 4ff710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff711: mov esi, ecx */
  esi = ecx;
/* 4ff713: call 0x4e371a */
  esp -= 4; W32(esp, 0x4ff718u); SPILL(); f_4e371a(); if (g_unwind) return; RELOAD();
/* 4ff718: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff71d: je 0x4ff72a */
  if (zf) goto L_4ff72a;
L_4ff71f: /* 4ff71f: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4ff721: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff722: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ff727u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ff727: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ff72a: /* 4ff72a: mov eax, esi */
  eax = esi;
/* 4ff72c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff72d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff740(void) {
  LOAD_REGS();
L_4ff740: /* 4ff740: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4ff741: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4ff745: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff748: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff749: mov esi, ecx */
  esi = ecx;
/* 4ff74b: je 0x4ff77b */
  if (zf) goto L_4ff77b;
L_4ff74d: /* 4ff74d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4ff750: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff751: push 0x4e371a */
  { uint32_t v = 0x4e371au; esp -= 4; W32(esp, v); }
/* 4ff756: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4ff759: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff75a: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4ff75c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff75d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4ff762u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4ff762: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff765: je 0x4ff773 */
  if (zf) goto L_4ff773;
L_4ff767: /* 4ff767: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4ff76d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ff76f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff770: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4ff773u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4ff773: /* 4ff773: mov eax, edi */
  eax = edi;
/* 4ff775: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ff776: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff777: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ff778: ret 4 */
  esp += 8; SPILL(); return;
L_4ff77b: /* 4ff77b: mov ecx, esi */
  ecx = esi;
/* 4ff77d: call 0x4e371a */
  esp -= 4; W32(esp, 0x4ff782u); SPILL(); f_4e371a(); if (g_unwind) return; RELOAD();
/* 4ff782: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff785: je 0x4ff792 */
  if (zf) goto L_4ff792;
L_4ff787: /* 4ff787: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4ff789: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff78a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ff78fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ff78f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ff792: /* 4ff792: mov eax, esi */
  eax = esi;
/* 4ff794: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff795: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ff796: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff7c0(void) {
  LOAD_REGS();
L_4ff7c0: /* 4ff7c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4ff7c2: push 0x555e98 */
  { uint32_t v = 0x555e98u; esp -= 4; W32(esp, v); }
/* 4ff7c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4ff7cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff7ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4ff7d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ff7d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff7d7: mov esi, ecx */
  esi = ecx;
/* 4ff7d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4ff7dd: mov dword ptr [esi], 0x56a4c8 */
  W32((uint32_t)(esi), 0x56a4c8u);
/* 4ff7e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4ff7eb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4ff7f0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4ff7f0: mov ecx, esi */
  ecx = esi;
/* 4ff7f2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4ff7fa: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4ff7ffu); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4ff7ff: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4ff803: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff804: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4ff80b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ff80e: ret  */
  esp += 4; SPILL(); return;
}

void f_4ff830(void) {
  LOAD_REGS();
L_4ff830: /* 4ff830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff831: mov esi, ecx */
  esi = ecx;
/* 4ff833: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x4ff838u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 4ff838: mov dword ptr [esi], 0x56a4c8 */
  W32((uint32_t)(esi), 0x56a4c8u);
/* 4ff83e: mov eax, esi */
  eax = esi;
/* 4ff840: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff841: ret  */
  esp += 4; SPILL(); return;
}

void f_4ff860(void) {
  LOAD_REGS();
L_4ff860: /* 4ff860: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4ff864: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ff868: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff869: mov esi, ecx */
  esi = ecx;
/* 4ff86b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4ff86f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff870: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ff871: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4ff872: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4ff874: mov ecx, esi */
  ecx = esi;
/* 4ff876: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x4ff87bu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 4ff87b: mov dword ptr [esi], 0x56a4c8 */
  W32((uint32_t)(esi), 0x56a4c8u);
/* 4ff881: mov eax, esi */
  eax = esi;
/* 4ff883: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff884: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4ff8a0(void) {
  LOAD_REGS();
L_4ff8a0: /* 4ff8a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff8a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff8a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4ff8a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff8a7: mov esi, ecx */
  esi = ecx;
/* 4ff8a9: call 0x4e2a45 */
  esp -= 4; W32(esp, 0x4ff8aeu); SPILL(); f_4e2a45(); if (g_unwind) return; RELOAD();
/* 4ff8ae: mov dword ptr [esi], 0x56a4c8 */
  W32((uint32_t)(esi), 0x56a4c8u);
/* 4ff8b4: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4ff8b7: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4ff8ba: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 4ff8bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ff8be: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 4ff8c1: mov eax, esi */
  eax = esi;
/* 4ff8c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff8c4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff8e0(void) {
  LOAD_REGS();
L_4ff8e0: /* 4ff8e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff8e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff8e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4ff8e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff8e7: mov esi, ecx */
  esi = ecx;
/* 4ff8e9: call 0x4e1514 */
  esp -= 4; W32(esp, 0x4ff8eeu); SPILL(); f_4e1514(); if (g_unwind) return; RELOAD();
/* 4ff8ee: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4ff8f1: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4ff8f4: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 4ff8f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ff8f8: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 4ff8fb: mov eax, esi */
  eax = esi;
/* 4ff8fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff8fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff920(void) {
  LOAD_REGS();
L_4ff920: /* 4ff920: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff921: mov esi, ecx */
  esi = ecx;
/* 4ff923: call 0x4e32dd */
  esp -= 4; W32(esp, 0x4ff928u); SPILL(); f_4e32dd(); if (g_unwind) return; RELOAD();
/* 4ff928: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff92d: je 0x4ff93a */
  if (zf) goto L_4ff93a;
L_4ff92f: /* 4ff92f: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 4ff931: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff932: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ff937u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ff937: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ff93a: /* 4ff93a: mov eax, esi */
  eax = esi;
/* 4ff93c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff93d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff950(void) {
  LOAD_REGS();
L_4ff950: /* 4ff950: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4ff951: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4ff955: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff958: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff959: mov esi, ecx */
  esi = ecx;
/* 4ff95b: je 0x4ff98b */
  if (zf) goto L_4ff98b;
L_4ff95d: /* 4ff95d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4ff960: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff961: push 0x4e32dd */
  { uint32_t v = 0x4e32ddu; esp -= 4; W32(esp, v); }
/* 4ff966: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4ff969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff96a: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 4ff96c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff96d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4ff972u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4ff972: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff975: je 0x4ff983 */
  if (zf) goto L_4ff983;
L_4ff977: /* 4ff977: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4ff97d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ff97f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ff980: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4ff983u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4ff983: /* 4ff983: mov eax, edi */
  eax = edi;
/* 4ff985: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ff986: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff987: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ff988: ret 4 */
  esp += 8; SPILL(); return;
L_4ff98b: /* 4ff98b: mov ecx, esi */
  ecx = esi;
/* 4ff98d: call 0x4e32dd */
  esp -= 4; W32(esp, 0x4ff992u); SPILL(); f_4e32dd(); if (g_unwind) return; RELOAD();
/* 4ff992: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ff995: je 0x4ff9a2 */
  if (zf) goto L_4ff9a2;
L_4ff997: /* 4ff997: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 4ff999: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff99a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ff99fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ff99f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ff9a2: /* 4ff9a2: mov eax, esi */
  eax = esi;
/* 4ff9a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ff9a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ff9a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ff9d0(void) {
  LOAD_REGS();
L_4ff9d0: /* 4ff9d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4ff9d2: push 0x555eb8 */
  { uint32_t v = 0x555eb8u; esp -= 4; W32(esp, v); }
/* 4ff9d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4ff9dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ff9de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4ff9e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ff9e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ff9e7: mov esi, ecx */
  esi = ecx;
/* 4ff9e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4ff9ed: mov dword ptr [esi], 0x56a5a8 */
  W32((uint32_t)(esi), 0x56a5a8u);
/* 4ff9f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4ff9fb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4ffa00u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4ffa00: mov ecx, esi */
  ecx = esi;
/* 4ffa02: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4ffa0a: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4ffa0fu); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4ffa0f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4ffa13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffa14: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4ffa1b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ffa1e: ret  */
  esp += 4; SPILL(); return;
}

void f_4ffa40(void) {
  LOAD_REGS();
L_4ffa40: /* 4ffa40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffa41: mov esi, ecx */
  esi = ecx;
/* 4ffa43: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x4ffa48u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 4ffa48: mov dword ptr [esi], 0x56a5a8 */
  W32((uint32_t)(esi), 0x56a5a8u);
/* 4ffa4e: mov eax, esi */
  eax = esi;
/* 4ffa50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffa51: ret  */
  esp += 4; SPILL(); return;
}

void f_4ffa70(void) {
  LOAD_REGS();
L_4ffa70: /* 4ffa70: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4ffa74: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ffa78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffa79: mov esi, ecx */
  esi = ecx;
/* 4ffa7b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4ffa7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ffa80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ffa81: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4ffa82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4ffa84: mov ecx, esi */
  ecx = esi;
/* 4ffa86: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x4ffa8bu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 4ffa8b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4ffa8f: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4ffa92: mov dword ptr [esi], 0x56a5a8 */
  W32((uint32_t)(esi), 0x56a5a8u);
/* 4ffa98: mov eax, esi */
  eax = esi;
/* 4ffa9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffa9b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_4ffab0(void) {
  LOAD_REGS();
L_4ffab0: /* 4ffab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffab1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ffab2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4ffab6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ffab7: mov esi, ecx */
  esi = ecx;
/* 4ffab9: call 0x4e2a45 */
  esp -= 4; W32(esp, 0x4ffabeu); SPILL(); f_4e2a45(); if (g_unwind) return; RELOAD();
/* 4ffabe: mov dword ptr [esi], 0x56a5a8 */
  W32((uint32_t)(esi), 0x56a5a8u);
/* 4ffac4: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4ffac7: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4ffaca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ffacb: mov eax, esi */
  eax = esi;
/* 4ffacd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fface: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ffaf0(void) {
  LOAD_REGS();
L_4ffaf0: /* 4ffaf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffaf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ffaf2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4ffaf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ffaf7: mov esi, ecx */
  esi = ecx;
/* 4ffaf9: call 0x4e1514 */
  esp -= 4; W32(esp, 0x4ffafeu); SPILL(); f_4e1514(); if (g_unwind) return; RELOAD();
/* 4ffafe: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4ffb01: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4ffb04: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ffb05: mov eax, esi */
  eax = esi;
/* 4ffb07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffb08: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ffb20(void) {
  LOAD_REGS();
L_4ffb20: /* 4ffb20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffb21: mov esi, ecx */
  esi = ecx;
/* 4ffb23: call 0x4e44da */
  esp -= 4; W32(esp, 0x4ffb28u); SPILL(); f_4e44da(); if (g_unwind) return; RELOAD();
/* 4ffb28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ffb2d: je 0x4ffb3a */
  if (zf) goto L_4ffb3a;
L_4ffb2f: /* 4ffb2f: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4ffb31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffb32: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ffb37u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ffb37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ffb3a: /* 4ffb3a: mov eax, esi */
  eax = esi;
/* 4ffb3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffb3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ffb50(void) {
  LOAD_REGS();
L_4ffb50: /* 4ffb50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4ffb51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4ffb55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ffb58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffb59: mov esi, ecx */
  esi = ecx;
/* 4ffb5b: je 0x4ffb8b */
  if (zf) goto L_4ffb8b;
L_4ffb5d: /* 4ffb5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4ffb60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ffb61: push 0x4e44da */
  { uint32_t v = 0x4e44dau; esp -= 4; W32(esp, v); }
/* 4ffb66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4ffb69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ffb6a: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4ffb6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffb6d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4ffb72u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4ffb72: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ffb75: je 0x4ffb83 */
  if (zf) goto L_4ffb83;
L_4ffb77: /* 4ffb77: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4ffb7d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ffb7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ffb80: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4ffb83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4ffb83: /* 4ffb83: mov eax, edi */
  eax = edi;
/* 4ffb85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ffb86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffb87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ffb88: ret 4 */
  esp += 8; SPILL(); return;
L_4ffb8b: /* 4ffb8b: mov ecx, esi */
  ecx = esi;
/* 4ffb8d: call 0x4e44da */
  esp -= 4; W32(esp, 0x4ffb92u); SPILL(); f_4e44da(); if (g_unwind) return; RELOAD();
/* 4ffb92: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ffb95: je 0x4ffba2 */
  if (zf) goto L_4ffba2;
L_4ffb97: /* 4ffb97: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4ffb99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffb9a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ffb9fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ffb9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ffba2: /* 4ffba2: mov eax, esi */
  eax = esi;
/* 4ffba4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffba5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ffba6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ffbd0(void) {
  LOAD_REGS();
L_4ffbd0: /* 4ffbd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4ffbd2: push 0x555ed8 */
  { uint32_t v = 0x555ed8u; esp -= 4; W32(esp, v); }
/* 4ffbd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4ffbdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ffbde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4ffbe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ffbe6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffbe7: mov esi, ecx */
  esi = ecx;
/* 4ffbe9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4ffbed: mov dword ptr [esi], 0x56a688 */
  W32((uint32_t)(esi), 0x56a688u);
/* 4ffbf3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4ffbfb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4ffc00u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4ffc00: mov ecx, esi */
  ecx = esi;
/* 4ffc02: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4ffc0a: call 0x4e1aaf */
  esp -= 4; W32(esp, 0x4ffc0fu); SPILL(); f_4e1aaf(); if (g_unwind) return; RELOAD();
/* 4ffc0f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4ffc13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffc14: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4ffc1b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ffc1e: ret  */
  esp += 4; SPILL(); return;
}

void f_4ffc40(void) {
  LOAD_REGS();
L_4ffc40: /* 4ffc40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffc41: mov esi, ecx */
  esi = ecx;
/* 4ffc43: call 0x4e2d97 */
  esp -= 4; W32(esp, 0x4ffc48u); SPILL(); f_4e2d97(); if (g_unwind) return; RELOAD();
/* 4ffc48: mov dword ptr [esi], 0x56a688 */
  W32((uint32_t)(esi), 0x56a688u);
/* 4ffc4e: mov eax, esi */
  eax = esi;
/* 4ffc50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffc51: ret  */
  esp += 4; SPILL(); return;
}

void f_4ffc70(void) {
  LOAD_REGS();
L_4ffc70: /* 4ffc70: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4ffc74: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4ffc78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffc79: mov esi, ecx */
  esi = ecx;
/* 4ffc7b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4ffc7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ffc80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ffc81: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4ffc82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4ffc84: mov ecx, esi */
  ecx = esi;
/* 4ffc86: call 0x4e2c89 */
  esp -= 4; W32(esp, 0x4ffc8bu); SPILL(); f_4e2c89(); if (g_unwind) return; RELOAD();
/* 4ffc8b: mov dword ptr [esi], 0x56a688 */
  W32((uint32_t)(esi), 0x56a688u);
/* 4ffc91: mov eax, esi */
  eax = esi;
/* 4ffc93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffc94: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4ffcb0(void) {
  LOAD_REGS();
L_4ffcb0: /* 4ffcb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffcb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ffcb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4ffcb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ffcb7: mov esi, ecx */
  esi = ecx;
/* 4ffcb9: call 0x4e2a45 */
  esp -= 4; W32(esp, 0x4ffcbeu); SPILL(); f_4e2a45(); if (g_unwind) return; RELOAD();
/* 4ffcbe: mov dword ptr [esi], 0x56a688 */
  W32((uint32_t)(esi), 0x56a688u);
/* 4ffcc4: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4ffcc7: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4ffcca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ffccb: mov eax, esi */
  eax = esi;
/* 4ffccd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffcce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ffcf0(void) {
  LOAD_REGS();
L_4ffcf0: /* 4ffcf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffcf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ffcf2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4ffcf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ffcf7: mov esi, ecx */
  esi = ecx;
/* 4ffcf9: call 0x4e1514 */
  esp -= 4; W32(esp, 0x4ffcfeu); SPILL(); f_4e1514(); if (g_unwind) return; RELOAD();
/* 4ffcfe: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4ffd01: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4ffd04: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ffd05: mov eax, esi */
  eax = esi;
/* 4ffd07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffd08: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ffd20(void) {
  LOAD_REGS();
L_4ffd20: /* 4ffd20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffd21: mov esi, ecx */
  esi = ecx;
/* 4ffd23: call 0x4e1410 */
  esp -= 4; W32(esp, 0x4ffd28u); SPILL(); f_4e1410(); if (g_unwind) return; RELOAD();
/* 4ffd28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ffd2d: je 0x4ffd3a */
  if (zf) goto L_4ffd3a;
L_4ffd2f: /* 4ffd2f: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4ffd31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffd32: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ffd37u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ffd37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ffd3a: /* 4ffd3a: mov eax, esi */
  eax = esi;
/* 4ffd3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffd3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ffd50(void) {
  LOAD_REGS();
L_4ffd50: /* 4ffd50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4ffd51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4ffd55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ffd58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffd59: mov esi, ecx */
  esi = ecx;
/* 4ffd5b: je 0x4ffd8b */
  if (zf) goto L_4ffd8b;
L_4ffd5d: /* 4ffd5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4ffd60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ffd61: push 0x4e1410 */
  { uint32_t v = 0x4e1410u; esp -= 4; W32(esp, v); }
/* 4ffd66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4ffd69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ffd6a: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4ffd6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffd6d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4ffd72u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4ffd72: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ffd75: je 0x4ffd83 */
  if (zf) goto L_4ffd83;
L_4ffd77: /* 4ffd77: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4ffd7d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4ffd7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ffd80: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4ffd83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4ffd83: /* 4ffd83: mov eax, edi */
  eax = edi;
/* 4ffd85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ffd86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffd87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ffd88: ret 4 */
  esp += 8; SPILL(); return;
L_4ffd8b: /* 4ffd8b: mov ecx, esi */
  ecx = esi;
/* 4ffd8d: call 0x4e1410 */
  esp -= 4; W32(esp, 0x4ffd92u); SPILL(); f_4e1410(); if (g_unwind) return; RELOAD();
/* 4ffd92: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4ffd95: je 0x4ffda2 */
  if (zf) goto L_4ffda2;
L_4ffd97: /* 4ffd97: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 4ffd99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffd9a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4ffd9fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4ffd9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4ffda2: /* 4ffda2: mov eax, esi */
  eax = esi;
/* 4ffda4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffda5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ffda6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4ffdd0(void) {
  LOAD_REGS();
L_4ffdd0: /* 4ffdd0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4ffdd3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4ffdd5: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 4ffdd9: je 0x4ffde4 */
  if (zf) goto L_4ffde4;
L_4ffddb: /* 4ffddb: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 4ffdde: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 4ffde2: jmp 0x4ffdec */
  goto L_4ffdec;
L_4ffde4: /* 4ffde4: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
L_4ffdec: /* 4ffdec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4ffded: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4ffdee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffdef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4ffdf0: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4ffdf4: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x4ffdf9u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 4ffdf9: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 4ffdfd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4ffdff: je 0x4ffe68 */
  if (zf) goto L_4ffe68;
L_4ffe01: /* 4ffe01: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 4ffe05: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 4ffe09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_4ffe10: /* 4ffe10: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 4ffe13: xor edi, edi */
  edi = 0;
/* 4ffe15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4ffe17: jle 0x4ffe50 */
  if ((zf || sf != of)) goto L_4ffe50;
L_4ffe19: /* 4ffe19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_4ffe20: /* 4ffe20: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 4ffe23: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 4ffe26: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 4ffe29: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4ffe2b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4ffe2d: je 0x4ffe34 */
  if (zf) goto L_4ffe34;
L_4ffe2f: /* 4ffe2f: lea ecx, [eax + ebx] */
  ecx = (uint32_t)(eax + ebx);
/* 4ffe32: jmp 0x4ffe36 */
  goto L_4ffe36;
L_4ffe34: /* 4ffe34: xor ecx, ecx */
  ecx = 0;
L_4ffe36: /* 4ffe36: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4ffe38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ffe39: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4ffe3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ffe3c: mov ecx, esi */
  ecx = esi;
/* 4ffe3e: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x4ffe44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4ffe44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4ffe46: je 0x4ffe77 */
  if (zf) goto L_4ffe77;
L_4ffe48: /* 4ffe48: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 4ffe4b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4ffe4c: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4ffe4e: jl 0x4ffe20 */
  if ((sf != of)) goto L_4ffe20;
L_4ffe50: /* 4ffe50: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 4ffe53: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4ffe57: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4ffe5b: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x4ffe60u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 4ffe60: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 4ffe64: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4ffe66: jne 0x4ffe10 */
  if (!zf) goto L_4ffe10;
L_4ffe68: /* 4ffe68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ffe69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffe6a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4ffe6b: mov eax, 1 */
  eax = 0x1u;
/* 4ffe70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ffe71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ffe74: ret 8 */
  esp += 12; SPILL(); return;
L_4ffe77: /* 4ffe77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4ffe78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffe79: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4ffe7a: xor eax, eax */
  eax = 0;
/* 4ffe7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4ffe7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4ffe80: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4ffec0(void) {
  LOAD_REGS();
L_4ffec0: /* 4ffec0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4ffec2: push 0x555ef8 */
  { uint32_t v = 0x555ef8u; esp -= 4; W32(esp, v); }
/* 4ffec7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4ffecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4ffece: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4ffed5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4ffed6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4ffed7: mov esi, ecx */
  esi = ecx;
/* 4ffed9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4ffedd: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 4ffee0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4ffee8: call 0x4e33c8 */
  esp -= 4; W32(esp, 0x4ffeedu); SPILL(); f_4e33c8(); if (g_unwind) return; RELOAD();
/* 4ffeed: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4ffef1: mov dword ptr [esi], 0x569110 */
  W32((uint32_t)(esi), 0x569110u);
/* 4ffef7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4ffef8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4ffeff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fff02: ret  */
  esp += 4; SPILL(); return;
}

void f_4fff30(void) {
  LOAD_REGS();
L_4fff30: /* 4fff30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fff32: push 0x555f18 */
  { uint32_t v = 0x555f18u; esp -= 4; W32(esp, v); }
/* 4fff37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fff3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fff3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fff45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fff46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fff47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fff48: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4fff4c: mov esi, ecx */
  esi = ecx;
/* 4fff4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fff4f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 4fff53: call 0x4e2973 */
  esp -= 4; W32(esp, 0x4fff58u); SPILL(); f_4e2973(); if (g_unwind) return; RELOAD();
/* 4fff58: lea eax, [edi + 0x40] */
  eax = (uint32_t)(edi + 0x40u);
/* 4fff5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fff5c: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 4fff5f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 4fff67: mov dword ptr [esi], 0x56a768 */
  W32((uint32_t)(esi), 0x56a768u);
/* 4fff6d: call 0x4e1dd4 */
  esp -= 4; W32(esp, 0x4fff72u); SPILL(); f_4e1dd4(); if (g_unwind) return; RELOAD();
/* 4fff72: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 4fff75: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 4fff78: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 4fff7b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4fff7f: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 4fff82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fff83: mov eax, esi */
  eax = esi;
/* 4fff85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fff86: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fff8d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fff90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fffc0(void) {
  LOAD_REGS();
L_4fffc0: /* 4fffc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fffc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fffc2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fffc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fffc7: mov esi, ecx */
  esi = ecx;
/* 4fffc9: call 0x4e2b71 */
  esp -= 4; W32(esp, 0x4fffceu); SPILL(); f_4e2b71(); if (g_unwind) return; RELOAD();
/* 4fffce: lea eax, [edi + 0x40] */
  eax = (uint32_t)(edi + 0x40u);
/* 4fffd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fffd2: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 4fffd5: call 0x4e2185 */
  esp -= 4; W32(esp, 0x4fffdau); SPILL(); f_4e2185(); if (g_unwind) return; RELOAD();
/* 4fffda: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 4fffdd: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 4fffe0: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 4fffe3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fffe4: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 4fffe7: mov eax, esi */
  eax = esi;
/* 4fffe9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fffea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500000(void) {
  LOAD_REGS();
L_500000: /* 500000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500001: mov esi, ecx */
  esi = ecx;
/* 500003: call 0x4e3837 */
  esp -= 4; W32(esp, 0x500008u); SPILL(); f_4e3837(); if (g_unwind) return; RELOAD();
/* 500008: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50000d: je 0x50001b */
  if (zf) goto L_50001b;
L_50000f: /* 50000f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 500015: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 500017: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500018: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x50001bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50001b: /* 50001b: mov eax, esi */
  eax = esi;
/* 50001d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50001e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500040(void) {
  LOAD_REGS();
L_500040: /* 500040: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 500041: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 500045: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 500048: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500049: mov esi, ecx */
  esi = ecx;
/* 50004b: je 0x50007b */
  if (zf) goto L_50007b;
L_50004d: /* 50004d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 500050: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500051: push 0x4e3837 */
  { uint32_t v = 0x4e3837u; esp -= 4; W32(esp, v); }
/* 500056: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 500059: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50005a: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 50005c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50005d: call 0x554e72 */
  esp -= 4; W32(esp, 0x500062u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 500062: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 500065: je 0x500073 */
  if (zf) goto L_500073;
L_500067: /* 500067: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50006d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50006f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500070: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x500073u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_500073: /* 500073: mov eax, edi */
  eax = edi;
/* 500075: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 500076: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500077: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 500078: ret 4 */
  esp += 8; SPILL(); return;
L_50007b: /* 50007b: mov ecx, esi */
  ecx = esi;
/* 50007d: call 0x4e3837 */
  esp -= 4; W32(esp, 0x500082u); SPILL(); f_4e3837(); if (g_unwind) return; RELOAD();
/* 500082: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 500085: je 0x500093 */
  if (zf) goto L_500093;
L_500087: /* 500087: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50008d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50008f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500090: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x500093u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_500093: /* 500093: mov eax, esi */
  eax = esi;
/* 500095: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500096: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 500097: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50004d(void) {
  LOAD_REGS();
L_50004d: /* 50004d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 500050: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500051: push 0x4e3837 */
  { uint32_t v = 0x4e3837u; esp -= 4; W32(esp, v); }
/* 500056: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 500059: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50005a: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 50005c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50005d: call 0x554e72 */
  esp -= 4; W32(esp, 0x500062u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 500062: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 500065: je 0x500073 */
  if (zf) goto L_500073;
L_500067: /* 500067: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50006d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50006f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500070: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x500073u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_500073: /* 500073: mov eax, edi */
  eax = edi;
/* 500075: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 500076: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500077: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 500078: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500065(void) {
  LOAD_REGS();
L_500065: /* 500065: je 0x500073 */
  if (zf) goto L_500073;
L_500067: /* 500067: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50006d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50006f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500070: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x500073u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_500073: /* 500073: mov eax, edi */
  eax = edi;
/* 500075: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 500076: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500077: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 500078: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50006d(void) {
  LOAD_REGS();
L_50006d: /* 50006d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50006f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500070: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x500073u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 500073: mov eax, edi */
  eax = edi;
/* 500075: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 500076: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500077: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 500078: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500070(void) {
  LOAD_REGS();
L_500070: /* 500070: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x500073u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 500073: mov eax, edi */
  eax = edi;
/* 500075: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 500076: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500077: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 500078: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500073(void) {
  LOAD_REGS();
L_500073: /* 500073: mov eax, edi */
  eax = edi;
/* 500075: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 500076: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500077: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 500078: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500076(void) {
  LOAD_REGS();
L_500076: /* 500076: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500077: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 500078: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5000c0(void) {
  LOAD_REGS();
L_5000c0: /* 5000c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5000c2: push 0x555f38 */
  { uint32_t v = 0x555f38u; esp -= 4; W32(esp, v); }
/* 5000c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5000cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5000ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5000d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5000d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5000d7: mov esi, ecx */
  esi = ecx;
/* 5000d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 5000dd: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 5000e0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 5000e8: call 0x4e33c8 */
  esp -= 4; W32(esp, 0x5000edu); SPILL(); f_4e33c8(); if (g_unwind) return; RELOAD();
/* 5000ed: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5000f1: mov dword ptr [esi], 0x569110 */
  W32((uint32_t)(esi), 0x569110u);
/* 5000f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5000f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5000ff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 500102: ret  */
  esp += 4; SPILL(); return;
}

void f_500130(void) {
  LOAD_REGS();
L_500130: /* 500130: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 500132: push 0x555f58 */
  { uint32_t v = 0x555f58u; esp -= 4; W32(esp, v); }
/* 500137: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50013d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50013e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 500145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 500146: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500147: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500148: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 50014c: mov esi, ecx */
  esi = ecx;
/* 50014e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50014f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 500153: call 0x4e2973 */
  esp -= 4; W32(esp, 0x500158u); SPILL(); f_4e2973(); if (g_unwind) return; RELOAD();
/* 500158: lea eax, [edi + 0x40] */
  eax = (uint32_t)(edi + 0x40u);
/* 50015b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50015c: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 50015f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 500167: mov dword ptr [esi], 0x56a7d8 */
  W32((uint32_t)(esi), 0x56a7d8u);
/* 50016d: call 0x4e1dd4 */
  esp -= 4; W32(esp, 0x500172u); SPILL(); f_4e1dd4(); if (g_unwind) return; RELOAD();
/* 500172: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 500175: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 500178: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 50017b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50017f: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 500182: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 500183: mov eax, esi */
  eax = esi;
/* 500185: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500186: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50018d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 500190: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5001c0(void) {
  LOAD_REGS();
L_5001c0: /* 5001c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5001c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5001c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 5001c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5001c7: mov esi, ecx */
  esi = ecx;
/* 5001c9: call 0x4e2b71 */
  esp -= 4; W32(esp, 0x5001ceu); SPILL(); f_4e2b71(); if (g_unwind) return; RELOAD();
/* 5001ce: lea eax, [edi + 0x40] */
  eax = (uint32_t)(edi + 0x40u);
/* 5001d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5001d2: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 5001d5: call 0x4e2185 */
  esp -= 4; W32(esp, 0x5001dau); SPILL(); f_4e2185(); if (g_unwind) return; RELOAD();
/* 5001da: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 5001dd: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 5001e0: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 5001e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5001e4: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 5001e7: mov eax, esi */
  eax = esi;
/* 5001e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5001ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500200(void) {
  LOAD_REGS();
L_500200: /* 500200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500201: mov esi, ecx */
  esi = ecx;
/* 500203: call 0x4e1bf4 */
  esp -= 4; W32(esp, 0x500208u); SPILL(); f_4e1bf4(); if (g_unwind) return; RELOAD();
/* 500208: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50020d: je 0x50021b */
  if (zf) goto L_50021b;
L_50020f: /* 50020f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 500215: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 500217: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500218: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x50021bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50021b: /* 50021b: mov eax, esi */
  eax = esi;
/* 50021d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50021e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500240(void) {
  LOAD_REGS();
L_500240: /* 500240: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 500241: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 500245: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 500248: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500249: mov esi, ecx */
  esi = ecx;
/* 50024b: je 0x50027b */
  if (zf) goto L_50027b;
L_50024d: /* 50024d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 500250: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500251: push 0x4e1bf4 */
  { uint32_t v = 0x4e1bf4u; esp -= 4; W32(esp, v); }
/* 500256: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 500259: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50025a: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 50025c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50025d: call 0x554e72 */
  esp -= 4; W32(esp, 0x500262u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 500262: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 500265: je 0x500273 */
  if (zf) goto L_500273;
L_500267: /* 500267: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50026d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50026f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500270: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x500273u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_500273: /* 500273: mov eax, edi */
  eax = edi;
/* 500275: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 500276: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500277: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 500278: ret 4 */
  esp += 8; SPILL(); return;
L_50027b: /* 50027b: mov ecx, esi */
  ecx = esi;
/* 50027d: call 0x4e1bf4 */
  esp -= 4; W32(esp, 0x500282u); SPILL(); f_4e1bf4(); if (g_unwind) return; RELOAD();
/* 500282: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 500285: je 0x500293 */
  if (zf) goto L_500293;
L_500287: /* 500287: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50028d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50028f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500290: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x500293u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_500293: /* 500293: mov eax, esi */
  eax = esi;
/* 500295: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500296: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 500297: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5002c0(void) {
  LOAD_REGS();
L_5002c0: /* 5002c0: mov eax, ecx */
  eax = ecx;
/* 5002c2: xor ecx, ecx */
  ecx = 0;
/* 5002c4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 5002c7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 5002ca: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 5002cd: ret  */
  esp += 4; SPILL(); return;
}

void f_5002e0(void) {
  LOAD_REGS();
L_5002e0: /* 5002e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5002e2: push 0x555f7b */
  { uint32_t v = 0x555f7bu; esp -= 4; W32(esp, v); }
/* 5002e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5002ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5002ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5002f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5002f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5002f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5002f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5002f9: mov edi, ecx */
  edi = ecx;
/* 5002fb: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 5002fe: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 500302: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 500308: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 50030f: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 500316: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 50031a: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 50031e: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 500320: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 500322: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 50032a: je 0x500366 */
  if (zf) goto L_500366;
L_50032c: /* 50032c: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 500330: je 0x50033e */
  if (zf) goto L_50033e;
L_500332: /* 500332: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 500333: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x500338u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 500338: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50033b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50033c: jmp 0x500340 */
  goto L_500340;
L_50033e: /* 50033e: xor eax, eax */
  eax = 0;
L_500340: /* 500340: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 500342: mov ecx, esi */
  ecx = esi;
/* 500344: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500347: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50034a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50034fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50034f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 500352: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500354: je 0x500366 */
  if (zf) goto L_500366;
L_500356: /* 500356: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 500358: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 50035b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50035c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50035d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50035e: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x500363u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 500363: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_500366: /* 500366: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 50036a: mov eax, edi */
  eax = edi;
/* 50036c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50036d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50036e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50036f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 500376: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 500379: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5003b0(void) {
  LOAD_REGS();
L_5003b0: /* 5003b0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5003b3: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_5003d0(void) {
  LOAD_REGS();
L_5003d0: /* 5003d0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5003d6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5003d8: push 0x555f98 */
  { uint32_t v = 0x555f98u; esp -= 4; W32(esp, v); }
/* 5003dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5003de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5003e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5003e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5003e7: mov edi, ecx */
  edi = ecx;
/* 5003e9: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 5003ed: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 5003f0: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 5003f4: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5003f6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 5003fe: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 500400: je 0x50043d */
  if (zf) goto L_50043d;
L_500402: /* 500402: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 500406: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 500408: mov ecx, esi */
  ecx = esi;
/* 50040a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50040d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 500410: call 0x4e4502 */
  esp -= 4; W32(esp, 0x500415u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 500415: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 500418: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50041a: je 0x50043d */
  if (zf) goto L_50043d;
L_50041c: /* 50041c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 500420: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500422: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 500426: jne 0x50042d */
  if (!zf) goto L_50042d;
L_500428: /* 500428: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_50042d: /* 50042d: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 500430: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 500432: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 500433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 500434: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 500435: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x50043au); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 50043a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50043d: /* 50043d: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 500441: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 500449: call 0x4e1217 */
  esp -= 4; W32(esp, 0x50044eu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 50044e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 500452: mov eax, edi */
  eax = edi;
/* 500454: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 500455: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50045c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50045d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 500460: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_5004a0(void) {
  LOAD_REGS();
L_5004a0: /* 5004a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5004a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5004a5: mov esi, ecx */
  esi = ecx;
/* 5004a7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 5004a9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5004ac: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 5004ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5004af: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 5004b2: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x5004b7u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 5004b7: mov eax, esi */
  eax = esi;
/* 5004b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5004ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5004d0(void) {
  LOAD_REGS();
L_5004d0: /* 5004d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5004d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5004d5: mov esi, ecx */
  esi = ecx;
/* 5004d7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5004d9: je 0x5004e9 */
  if (zf) goto L_5004e9;
L_5004db: /* 5004db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5004dc: call 0x4e2df1 */
  esp -= 4; W32(esp, 0x5004e1u); SPILL(); f_4e2df1(); if (g_unwind) return; RELOAD();
/* 5004e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5004e2: mov ecx, esi */
  ecx = esi;
/* 5004e4: call 0x4e2676 */
  esp -= 4; W32(esp, 0x5004e9u); SPILL(); f_4e2676(); if (g_unwind) return; RELOAD();
L_5004e9: /* 5004e9: mov eax, esi */
  eax = esi;
/* 5004eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5004ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500500(void) {
  LOAD_REGS();
L_500500: /* 500500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 500502: push 0x555fb8 */
  { uint32_t v = 0x555fb8u; esp -= 4; W32(esp, v); }
/* 500507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50050d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50050e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 500515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 500516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 500517: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 50051b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 50051e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50051f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500520: mov esi, ecx */
  esi = ecx;
/* 500522: xor ebp, ebp */
  ebp = 0;
/* 500524: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 500526: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 50052a: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 50052c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50052f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500532: call 0x4e4502 */
  esp -= 4; W32(esp, 0x500537u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 500537: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 50053a: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50053d: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 500541: jle 0x5005a8 */
  if ((zf || sf != of)) goto L_5005a8;
L_500543: /* 500543: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 500547: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500548: jmp 0x500550 */
  goto L_500550;
L_500550: /* 500550: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500553: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 500556: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 500559: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50055b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 50055e: jle 0x50057c */
  if ((zf || sf != of)) goto L_50057c;
L_500560: /* 500560: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 500563: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 500564: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 500567: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 500569: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50056c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 500570: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 500572: mov ecx, esi */
  ecx = esi;
/* 500574: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500577: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50057cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50057c: /* 50057c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50057e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 500581: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 500584: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500586: je 0x500594 */
  if (zf) goto L_500594;
L_500588: /* 500588: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 50058a: add eax, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50058e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50058f: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x500594u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
L_500594: /* 500594: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 500598: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 50059b: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 50059c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50059f: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5005a1: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 5005a5: jl 0x500550 */
  if ((sf != of)) goto L_500550;
L_5005a7: /* 5005a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5005a8: /* 5005a8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 5005ac: mov eax, esi */
  eax = esi;
/* 5005ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5005af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5005b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5005b1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5005b8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5005bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50054a(void) {
  LOAD_REGS();
L_50054a: /* 50054a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_500550: /* 500550: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500553: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 500556: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 500559: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50055b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 50055e: jle 0x50057c */
  if ((zf || sf != of)) goto L_50057c;
L_500560: /* 500560: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 500563: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 500564: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 500567: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 500569: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50056c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 500570: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 500572: mov ecx, esi */
  ecx = esi;
/* 500574: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500577: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50057cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50057c: /* 50057c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50057e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 500581: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 500584: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500586: je 0x500594 */
  if (zf) goto L_500594;
L_500588: /* 500588: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 50058a: add eax, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50058e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50058f: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x500594u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
L_500594: /* 500594: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 500598: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 50059b: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 50059c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50059f: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5005a1: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 5005a5: jl 0x500550 */
  if ((sf != of)) goto L_500550;
L_5005a7: /* 5005a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5005a8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 5005ac: mov eax, esi */
  eax = esi;
/* 5005ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5005af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5005b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5005b1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5005b8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5005bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5005f0(void) {
  LOAD_REGS();
L_5005f0: /* 5005f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5005f2: push 0x555fd8 */
  { uint32_t v = 0x555fd8u; esp -= 4; W32(esp, v); }
/* 5005f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5005fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5005fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 500605: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 500606: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500607: mov esi, ecx */
  esi = ecx;
/* 500609: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50060a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 50060e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500611: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 500613: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 50061b: jge 0x500634 */
  if ((sf == of)) goto L_500634;
L_50061d: /* 50061d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 500622: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 500627: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 50062c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x500631u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 500631: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_500634: /* 500634: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500637: jle 0x500650 */
  if ((zf || sf != of)) goto L_500650;
L_500639: /* 500639: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 50063e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 500643: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 500648: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50064du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50064d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_500650: /* 500650: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 500652: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500653: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 500655: mov ecx, esi */
  ecx = esi;
/* 500657: call 0x4e438b */
  esp -= 4; W32(esp, 0x50065cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 50065c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50065e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500660: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 500668: je 0x500676 */
  if (zf) goto L_500676;
L_50066a: /* 50066a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 500670: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 500672: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 500673: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x500676u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_500676: /* 500676: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50067a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 500680: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 500687: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 50068e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50068f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500690: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 500697: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50069a: ret  */
  esp += 4; SPILL(); return;
}

void f_5006d0(void) {
  LOAD_REGS();
L_5006d0: /* 5006d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5006d1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 5006d5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5006d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5006d7: mov esi, ecx */
  esi = ecx;
/* 5006d9: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5006db: je 0x50073a */
  if (zf) goto L_50073a;
L_5006dd: /* 5006dd: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 5006e0: xor ebp, ebp */
  ebp = 0;
/* 5006e2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5006e4: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 5006e7: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5006ea: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5006efu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5006ef: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5006f2: jle 0x50073a */
  if ((zf || sf != of)) goto L_50073a;
L_5006f4: /* 5006f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_5006f5: /* 5006f5: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 5006f8: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5006fb: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 5006fe: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500700: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 500703: jle 0x500721 */
  if ((zf || sf != of)) goto L_500721;
L_500705: /* 500705: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 500708: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 500709: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50070c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50070e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 500711: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 500715: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 500717: mov ecx, esi */
  ecx = esi;
/* 500719: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50071c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x500721u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_500721: /* 500721: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 500723: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 500726: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500728: je 0x500731 */
  if (zf) goto L_500731;
L_50072a: /* 50072a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50072c: mov ecx, dword ptr [edx + ebp*4] */
  ecx = R32((uint32_t)(edx + ebp*4));
/* 50072f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_500731: /* 500731: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 500734: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 500735: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500737: jl 0x5006f5 */
  if ((sf != of)) goto L_5006f5;
L_500739: /* 500739: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_50073a: /* 50073a: mov eax, esi */
  eax = esi;
/* 50073c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50073d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50073e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50073f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500770(void) {
  LOAD_REGS();
L_500770: /* 500770: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 500772: push 0x555ff8 */
  { uint32_t v = 0x555ff8u; esp -= 4; W32(esp, v); }
/* 500777: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50077d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50077e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 500785: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 500786: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500787: mov esi, ecx */
  esi = ecx;
/* 500789: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50078a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 50078e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500791: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 500793: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 50079b: jge 0x5007b4 */
  if ((sf == of)) goto L_5007b4;
L_50079d: /* 50079d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 5007a2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5007a7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 5007ac: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5007b1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5007b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5007b4: /* 5007b4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5007b7: jle 0x5007d0 */
  if ((zf || sf != of)) goto L_5007d0;
L_5007b9: /* 5007b9: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 5007be: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5007c3: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 5007c8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5007cdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5007cd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5007d0: /* 5007d0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5007d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5007d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5007d5: mov ecx, esi */
  ecx = esi;
/* 5007d7: call 0x4e438b */
  esp -= 4; W32(esp, 0x5007dcu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5007dc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5007de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5007e0: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 5007e8: je 0x5007f6 */
  if (zf) goto L_5007f6;
L_5007ea: /* 5007ea: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5007f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5007f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5007f3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5007f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5007f6: /* 5007f6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5007fa: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 500800: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 500807: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 50080e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50080f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500810: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 500817: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50081a: ret  */
  esp += 4; SPILL(); return;
}

void f_500850(void) {
  LOAD_REGS();
L_500850: /* 500850: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 500851: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 500855: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 500856: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500857: mov esi, ecx */
  esi = ecx;
/* 500859: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50085b: je 0x5008e2 */
  if (zf) goto L_5008e2;
L_500861: /* 500861: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 500864: xor ebp, ebp */
  ebp = 0;
/* 500866: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 500868: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 50086b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50086e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x500873u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 500873: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500876: jle 0x5008e2 */
  if ((zf || sf != of)) goto L_5008e2;
L_500878: /* 500878: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 50087c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50087d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_500880: /* 500880: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500883: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 500886: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 500889: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50088b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 50088e: jle 0x5008ac */
  if ((zf || sf != of)) goto L_5008ac;
L_500890: /* 500890: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 500893: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 500894: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 500897: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 500899: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50089c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 5008a0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5008a2: mov ecx, esi */
  ecx = esi;
/* 5008a4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5008a7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5008acu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5008ac: /* 5008ac: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5008ae: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 5008b1: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 5008b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5008b6: je 0x5008ce */
  if (zf) goto L_5008ce;
L_5008b8: /* 5008b8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 5008ba: add ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5008be: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5008c0: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 5008c2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 5008c5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 5008c8: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 5008cb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_5008ce: /* 5008ce: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 5008d2: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 5008d5: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 5008d6: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5008d9: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5008db: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 5008df: jl 0x500880 */
  if ((sf != of)) goto L_500880;
L_5008e1: /* 5008e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5008e2: /* 5008e2: mov eax, esi */
  eax = esi;
/* 5008e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5008e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5008e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5008e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500920(void) {
  LOAD_REGS();
L_500920: /* 500920: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 500922: push 0x556018 */
  { uint32_t v = 0x556018u; esp -= 4; W32(esp, v); }
/* 500927: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50092d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50092e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 500935: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 500936: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 500937: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 50093b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 50093e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50093f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500940: mov esi, ecx */
  esi = ecx;
/* 500942: xor ebp, ebp */
  ebp = 0;
/* 500944: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 500946: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 50094a: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 50094c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50094f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500952: call 0x4e4502 */
  esp -= 4; W32(esp, 0x500957u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 500957: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 50095a: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50095d: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 500961: jle 0x5009c8 */
  if ((zf || sf != of)) goto L_5009c8;
L_500963: /* 500963: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 500967: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500968: jmp 0x500970 */
  goto L_500970;
L_500970: /* 500970: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500973: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 500976: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 500979: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50097b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 50097e: jle 0x50099c */
  if ((zf || sf != of)) goto L_50099c;
L_500980: /* 500980: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 500983: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 500984: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 500987: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 500989: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50098c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 500990: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 500992: mov ecx, esi */
  ecx = esi;
/* 500994: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500997: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50099cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50099c: /* 50099c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50099e: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* 5009a1: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 5009a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5009a6: je 0x5009b4 */
  if (zf) goto L_5009b4;
L_5009a8: /* 5009a8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5009aa: add eax, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5009ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5009af: call 0x4e1b31 */
  esp -= 4; W32(esp, 0x5009b4u); SPILL(); f_4e1b31(); if (g_unwind) return; RELOAD();
L_5009b4: /* 5009b4: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 5009b8: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 5009bb: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 5009bc: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5009bf: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5009c1: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 5009c5: jl 0x500970 */
  if ((sf != of)) goto L_500970;
L_5009c7: /* 5009c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5009c8: /* 5009c8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 5009cc: mov eax, esi */
  eax = esi;
/* 5009ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5009cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5009d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5009d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5009d8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5009db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50096a(void) {
  LOAD_REGS();
L_50096a: /* 50096a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_500970: /* 500970: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500973: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 500976: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 500979: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50097b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 50097e: jle 0x50099c */
  if ((zf || sf != of)) goto L_50099c;
L_500980: /* 500980: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 500983: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 500984: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 500987: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 500989: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50098c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 500990: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 500992: mov ecx, esi */
  ecx = esi;
/* 500994: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500997: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50099cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50099c: /* 50099c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50099e: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* 5009a1: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 5009a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5009a6: je 0x5009b4 */
  if (zf) goto L_5009b4;
L_5009a8: /* 5009a8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5009aa: add eax, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5009ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5009af: call 0x4e1b31 */
  esp -= 4; W32(esp, 0x5009b4u); SPILL(); f_4e1b31(); if (g_unwind) return; RELOAD();
L_5009b4: /* 5009b4: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 5009b8: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 5009bb: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 5009bc: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5009bf: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5009c1: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 5009c5: jl 0x500970 */
  if ((sf != of)) goto L_500970;
L_5009c7: /* 5009c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5009c8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 5009cc: mov eax, esi */
  eax = esi;
/* 5009ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5009cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5009d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5009d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5009d8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5009db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500a10(void) {
  LOAD_REGS();
L_500a10: /* 500a10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 500a12: push 0x556038 */
  { uint32_t v = 0x556038u; esp -= 4; W32(esp, v); }
/* 500a17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 500a1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 500a1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 500a25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 500a26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500a27: mov esi, ecx */
  esi = ecx;
/* 500a29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500a2a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 500a2e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500a31: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 500a33: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 500a3b: jge 0x500a54 */
  if ((sf == of)) goto L_500a54;
L_500a3d: /* 500a3d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 500a42: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 500a47: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 500a4c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x500a51u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 500a51: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_500a54: /* 500a54: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500a57: jle 0x500a70 */
  if ((zf || sf != of)) goto L_500a70;
L_500a59: /* 500a59: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 500a5e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 500a63: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 500a68: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x500a6du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 500a6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_500a70: /* 500a70: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 500a72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500a73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 500a75: mov ecx, esi */
  ecx = esi;
/* 500a77: call 0x4e438b */
  esp -= 4; W32(esp, 0x500a7cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 500a7c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 500a7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500a80: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 500a88: je 0x500a96 */
  if (zf) goto L_500a96;
L_500a8a: /* 500a8a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 500a90: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 500a92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 500a93: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x500a96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_500a96: /* 500a96: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 500a9a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 500aa0: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 500aa7: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 500aae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 500aaf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500ab0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 500ab7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 500aba: ret  */
  esp += 4; SPILL(); return;
}

void f_500af0(void) {
  LOAD_REGS();
L_500af0: /* 500af0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 500af1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 500af2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 500af6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500af7: mov esi, ecx */
  esi = ecx;
/* 500af9: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 500afb: je 0x500b62 */
  if (zf) goto L_500b62;
L_500afd: /* 500afd: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 500b00: xor ebx, ebx */
  ebx = 0;
/* 500b02: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 500b04: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 500b07: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500b0a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x500b0fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 500b0f: cmp dword ptr [ebp + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500b12: jle 0x500b62 */
  if ((zf || sf != of)) goto L_500b62;
L_500b14: /* 500b14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_500b15: /* 500b15: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500b18: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 500b1b: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 500b1e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500b20: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 500b23: jle 0x500b41 */
  if ((zf || sf != of)) goto L_500b41;
L_500b25: /* 500b25: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 500b28: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 500b29: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 500b2c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 500b2e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 500b31: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 500b35: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 500b37: mov ecx, esi */
  ecx = esi;
/* 500b39: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500b3c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x500b41u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_500b41: /* 500b41: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 500b43: lea eax, [ecx + edi*8] */
  eax = (uint32_t)(ecx + edi*8);
/* 500b46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500b48: je 0x500b59 */
  if (zf) goto L_500b59;
L_500b4a: /* 500b4a: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 500b4d: mov ecx, dword ptr [edx + ebx*8] */
  ecx = R32((uint32_t)(edx + ebx*8));
/* 500b50: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 500b52: mov edx, dword ptr [edx + ebx*8 + 4] */
  edx = R32((uint32_t)(edx + ebx*8 + 0x4u));
/* 500b56: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_500b59: /* 500b59: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 500b5c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 500b5d: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500b5f: jl 0x500b15 */
  if ((sf != of)) goto L_500b15;
L_500b61: /* 500b61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_500b62: /* 500b62: mov eax, esi */
  eax = esi;
/* 500b64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500b65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 500b66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 500b67: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500b90(void) {
  LOAD_REGS();
L_500b90: /* 500b90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 500b92: push 0x556058 */
  { uint32_t v = 0x556058u; esp -= 4; W32(esp, v); }
/* 500b97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 500b9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 500b9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 500ba5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 500ba6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500ba7: mov esi, ecx */
  esi = ecx;
/* 500ba9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500baa: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 500bae: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500bb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 500bb3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 500bbb: jge 0x500bd4 */
  if ((sf == of)) goto L_500bd4;
L_500bbd: /* 500bbd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 500bc2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 500bc7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 500bcc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x500bd1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 500bd1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_500bd4: /* 500bd4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500bd7: jle 0x500bf0 */
  if ((zf || sf != of)) goto L_500bf0;
L_500bd9: /* 500bd9: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 500bde: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 500be3: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 500be8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x500bedu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 500bed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_500bf0: /* 500bf0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 500bf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500bf3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 500bf5: mov ecx, esi */
  ecx = esi;
/* 500bf7: call 0x4e438b */
  esp -= 4; W32(esp, 0x500bfcu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 500bfc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 500bfe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500c00: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 500c08: je 0x500c16 */
  if (zf) goto L_500c16;
L_500c0a: /* 500c0a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 500c10: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 500c12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 500c13: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x500c16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_500c16: /* 500c16: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 500c1a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 500c20: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 500c27: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 500c2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 500c2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500c30: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 500c37: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 500c3a: ret  */
  esp += 4; SPILL(); return;
}

void f_500c70(void) {
  LOAD_REGS();
L_500c70: /* 500c70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 500c71: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 500c75: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 500c76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500c77: mov esi, ecx */
  esi = ecx;
/* 500c79: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 500c7b: je 0x500cda */
  if (zf) goto L_500cda;
L_500c7d: /* 500c7d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 500c80: xor ebp, ebp */
  ebp = 0;
/* 500c82: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 500c84: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 500c87: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500c8a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x500c8fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 500c8f: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500c92: jle 0x500cda */
  if ((zf || sf != of)) goto L_500cda;
L_500c94: /* 500c94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_500c95: /* 500c95: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500c98: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 500c9b: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 500c9e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500ca0: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 500ca3: jle 0x500cc1 */
  if ((zf || sf != of)) goto L_500cc1;
L_500ca5: /* 500ca5: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 500ca8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 500ca9: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 500cac: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 500cae: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 500cb1: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 500cb5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 500cb7: mov ecx, esi */
  ecx = esi;
/* 500cb9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500cbc: call 0x4e4502 */
  esp -= 4; W32(esp, 0x500cc1u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_500cc1: /* 500cc1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 500cc3: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 500cc6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500cc8: je 0x500cd1 */
  if (zf) goto L_500cd1;
L_500cca: /* 500cca: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 500ccc: mov ecx, dword ptr [edx + ebp*4] */
  ecx = R32((uint32_t)(edx + ebp*4));
/* 500ccf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_500cd1: /* 500cd1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 500cd4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 500cd5: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500cd7: jl 0x500c95 */
  if ((sf != of)) goto L_500c95;
L_500cd9: /* 500cd9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_500cda: /* 500cda: mov eax, esi */
  eax = esi;
/* 500cdc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500cdd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 500cde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 500cdf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500d10(void) {
  LOAD_REGS();
L_500d10: /* 500d10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 500d12: push 0x556078 */
  { uint32_t v = 0x556078u; esp -= 4; W32(esp, v); }
/* 500d17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 500d1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 500d1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 500d25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 500d26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500d27: mov esi, ecx */
  esi = ecx;
/* 500d29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500d2a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 500d2e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500d31: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 500d33: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 500d3b: jge 0x500d54 */
  if ((sf == of)) goto L_500d54;
L_500d3d: /* 500d3d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 500d42: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 500d47: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 500d4c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x500d51u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 500d51: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_500d54: /* 500d54: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500d57: jle 0x500d70 */
  if ((zf || sf != of)) goto L_500d70;
L_500d59: /* 500d59: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 500d5e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 500d63: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 500d68: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x500d6du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 500d6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_500d70: /* 500d70: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 500d72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500d73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 500d75: mov ecx, esi */
  ecx = esi;
/* 500d77: call 0x4e438b */
  esp -= 4; W32(esp, 0x500d7cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 500d7c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 500d7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500d80: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 500d88: je 0x500d96 */
  if (zf) goto L_500d96;
L_500d8a: /* 500d8a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 500d90: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 500d92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 500d93: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x500d96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_500d96: /* 500d96: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 500d9a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 500da0: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 500da7: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 500dae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 500daf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500db0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 500db7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 500dba: ret  */
  esp += 4; SPILL(); return;
}

void f_500df0(void) {
  LOAD_REGS();
L_500df0: /* 500df0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 500df1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 500df5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 500df6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500df7: mov esi, ecx */
  esi = ecx;
/* 500df9: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 500dfb: je 0x500e82 */
  if (zf) goto L_500e82;
L_500e01: /* 500e01: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 500e04: xor ebp, ebp */
  ebp = 0;
/* 500e06: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 500e08: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 500e0b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500e0e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x500e13u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 500e13: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500e16: jle 0x500e82 */
  if ((zf || sf != of)) goto L_500e82;
L_500e18: /* 500e18: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 500e1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500e1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_500e20: /* 500e20: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500e23: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 500e26: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 500e29: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500e2b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 500e2e: jle 0x500e4c */
  if ((zf || sf != of)) goto L_500e4c;
L_500e30: /* 500e30: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 500e33: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 500e34: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 500e37: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 500e39: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 500e3c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 500e40: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 500e42: mov ecx, esi */
  ecx = esi;
/* 500e44: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500e47: call 0x4e4502 */
  esp -= 4; W32(esp, 0x500e4cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_500e4c: /* 500e4c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 500e4e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 500e51: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 500e54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500e56: je 0x500e6e */
  if (zf) goto L_500e6e;
L_500e58: /* 500e58: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 500e5a: add ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 500e5e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 500e60: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 500e62: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 500e65: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 500e68: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 500e6b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_500e6e: /* 500e6e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 500e72: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 500e75: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 500e76: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 500e79: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500e7b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 500e7f: jl 0x500e20 */
  if ((sf != of)) goto L_500e20;
L_500e81: /* 500e81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_500e82: /* 500e82: mov eax, esi */
  eax = esi;
/* 500e84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500e85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 500e86: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 500e87: ret 4 */
  esp += 8; SPILL(); return;
}

void f_500ec0(void) {
  LOAD_REGS();
L_500ec0: /* 500ec0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 500ec2: push 0x556098 */
  { uint32_t v = 0x556098u; esp -= 4; W32(esp, v); }
/* 500ec7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 500ecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 500ece: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 500ed5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 500ed6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500ed7: mov esi, ecx */
  esi = ecx;
/* 500ed9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500eda: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 500ede: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500ee1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 500ee3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 500eeb: jge 0x500f04 */
  if ((sf == of)) goto L_500f04;
L_500eed: /* 500eed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 500ef2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 500ef7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 500efc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x500f01u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 500f01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_500f04: /* 500f04: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500f07: jle 0x500f20 */
  if ((zf || sf != of)) goto L_500f20;
L_500f09: /* 500f09: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 500f0e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 500f13: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 500f18: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x500f1du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 500f1d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_500f20: /* 500f20: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 500f22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 500f23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 500f25: mov ecx, esi */
  ecx = esi;
/* 500f27: call 0x4e438b */
  esp -= 4; W32(esp, 0x500f2cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 500f2c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 500f2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500f30: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 500f38: je 0x500f46 */
  if (zf) goto L_500f46;
L_500f3a: /* 500f3a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 500f40: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 500f42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 500f43: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x500f46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_500f46: /* 500f46: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 500f4a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 500f50: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 500f57: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 500f5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 500f5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 500f60: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 500f67: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 500f6a: ret  */
  esp += 4; SPILL(); return;
}

void f_500fa0(void) {
  LOAD_REGS();
L_500fa0: /* 500fa0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 500fa1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 500fa5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 500fa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 500fa7: mov esi, ecx */
  esi = ecx;
/* 500fa9: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 500fab: je 0x50100a */
  if (zf) goto L_50100a;
L_500fad: /* 500fad: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 500fb0: xor ebp, ebp */
  ebp = 0;
/* 500fb2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 500fb4: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 500fb7: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500fba: call 0x4e4502 */
  esp -= 4; W32(esp, 0x500fbfu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 500fbf: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500fc2: jle 0x50100a */
  if ((zf || sf != of)) goto L_50100a;
L_500fc4: /* 500fc4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_500fc5: /* 500fc5: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 500fc8: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 500fcb: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 500fce: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 500fd0: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 500fd3: jle 0x500ff1 */
  if ((zf || sf != of)) goto L_500ff1;
L_500fd5: /* 500fd5: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 500fd8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 500fd9: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 500fdc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 500fde: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 500fe1: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 500fe5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 500fe7: mov ecx, esi */
  ecx = esi;
/* 500fe9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 500fec: call 0x4e4502 */
  esp -= 4; W32(esp, 0x500ff1u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_500ff1: /* 500ff1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 500ff3: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 500ff6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 500ff8: je 0x501001 */
  if (zf) goto L_501001;
L_500ffa: /* 500ffa: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 500ffc: mov ecx, dword ptr [edx + ebp*4] */
  ecx = R32((uint32_t)(edx + ebp*4));
/* 500fff: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_501001: /* 501001: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 501004: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 501005: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 501007: jl 0x500fc5 */
  if ((sf != of)) goto L_500fc5;
L_501009: /* 501009: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_50100a: /* 50100a: mov eax, esi */
  eax = esi;
/* 50100c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50100d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50100e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50100f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_501040(void) {
  LOAD_REGS();
L_501040: /* 501040: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 501044: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501045: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501046: mov esi, ecx */
  esi = ecx;
/* 501048: call 0x4e1366 */
  esp -= 4; W32(esp, 0x50104du); SPILL(); f_4e1366(); if (g_unwind) return; RELOAD();
/* 50104d: mov eax, esi */
  eax = esi;
/* 50104f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501050: ret 4 */
  esp += 8; SPILL(); return;
}

void f_501070(void) {
  LOAD_REGS();
L_501070: /* 501070: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 501072: push 0x5560b8 */
  { uint32_t v = 0x5560b8u; esp -= 4; W32(esp, v); }
/* 501077: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50107d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50107e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 501085: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501086: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501087: mov esi, ecx */
  esi = ecx;
/* 501089: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50108a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 50108e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 501091: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 501093: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 50109b: jge 0x5010b4 */
  if ((sf == of)) goto L_5010b4;
L_50109d: /* 50109d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 5010a2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5010a7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 5010ac: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5010b1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5010b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5010b4: /* 5010b4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5010b7: jle 0x5010d0 */
  if ((zf || sf != of)) goto L_5010d0;
L_5010b9: /* 5010b9: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 5010be: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5010c3: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 5010c8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5010cdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5010cd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5010d0: /* 5010d0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 5010d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5010d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5010d5: mov ecx, esi */
  ecx = esi;
/* 5010d7: call 0x4e438b */
  esp -= 4; W32(esp, 0x5010dcu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5010dc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5010de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5010e0: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 5010e8: je 0x5010f6 */
  if (zf) goto L_5010f6;
L_5010ea: /* 5010ea: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5010f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5010f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5010f3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5010f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5010f6: /* 5010f6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5010fa: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 501100: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 501107: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 50110e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50110f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501110: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 501117: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50111a: ret  */
  esp += 4; SPILL(); return;
}

void f_501150(void) {
  LOAD_REGS();
L_501150: /* 501150: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 501152: push 0x5560d8 */
  { uint32_t v = 0x5560d8u; esp -= 4; W32(esp, v); }
/* 501157: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50115d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50115e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 501165: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501166: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501167: mov esi, ecx */
  esi = ecx;
/* 501169: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50116a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 50116e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 501171: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 501173: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 50117b: jge 0x501194 */
  if ((sf == of)) goto L_501194;
L_50117d: /* 50117d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 501182: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 501187: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 50118c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x501191u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 501191: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_501194: /* 501194: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 501197: jle 0x5011b0 */
  if ((zf || sf != of)) goto L_5011b0;
L_501199: /* 501199: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 50119e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5011a3: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 5011a8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5011adu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5011ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5011b0: /* 5011b0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 5011b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5011b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5011b5: mov ecx, esi */
  ecx = esi;
/* 5011b7: call 0x4e438b */
  esp -= 4; W32(esp, 0x5011bcu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5011bc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5011be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5011c0: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 5011c8: je 0x5011d6 */
  if (zf) goto L_5011d6;
L_5011ca: /* 5011ca: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5011d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5011d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5011d3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5011d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5011d6: /* 5011d6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5011da: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 5011e0: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 5011e7: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 5011ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5011ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5011f0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5011f7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5011fa: ret  */
  esp += 4; SPILL(); return;
}

void f_501230(void) {
  LOAD_REGS();
L_501230: /* 501230: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 501231: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 501232: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 501236: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501237: mov esi, ecx */
  esi = ecx;
/* 501239: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50123b: je 0x5012a2 */
  if (zf) goto L_5012a2;
L_50123d: /* 50123d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 501240: xor ebx, ebx */
  ebx = 0;
/* 501242: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 501244: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 501247: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50124a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50124fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50124f: cmp dword ptr [ebp + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 501252: jle 0x5012a2 */
  if ((zf || sf != of)) goto L_5012a2;
L_501254: /* 501254: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_501255: /* 501255: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 501258: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 50125b: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 50125e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 501260: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 501263: jle 0x501281 */
  if ((zf || sf != of)) goto L_501281;
L_501265: /* 501265: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 501268: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 501269: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50126c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50126e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 501271: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 501275: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 501277: mov ecx, esi */
  ecx = esi;
/* 501279: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50127c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x501281u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_501281: /* 501281: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 501283: lea eax, [ecx + edi*8] */
  eax = (uint32_t)(ecx + edi*8);
/* 501286: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501288: je 0x501299 */
  if (zf) goto L_501299;
L_50128a: /* 50128a: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 50128d: mov ecx, dword ptr [edx + ebx*8] */
  ecx = R32((uint32_t)(edx + ebx*8));
/* 501290: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 501292: mov edx, dword ptr [edx + ebx*8 + 4] */
  edx = R32((uint32_t)(edx + ebx*8 + 0x4u));
/* 501296: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_501299: /* 501299: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 50129c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 50129d: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50129f: jl 0x501255 */
  if ((sf != of)) goto L_501255;
L_5012a1: /* 5012a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5012a2: /* 5012a2: mov eax, esi */
  eax = esi;
/* 5012a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5012a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5012a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5012a7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5012d0(void) {
  LOAD_REGS();
L_5012d0: /* 5012d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5012d2: push 0x5560f8 */
  { uint32_t v = 0x5560f8u; esp -= 4; W32(esp, v); }
/* 5012d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5012dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5012de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5012e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5012e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5012e7: mov esi, ecx */
  esi = ecx;
/* 5012e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5012ea: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 5012ee: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 5012f1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5012f3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 5012fb: jge 0x501314 */
  if ((sf == of)) goto L_501314;
L_5012fd: /* 5012fd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 501302: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 501307: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 50130c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x501311u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 501311: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_501314: /* 501314: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 501317: jle 0x501330 */
  if ((zf || sf != of)) goto L_501330;
L_501319: /* 501319: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 50131e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 501323: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 501328: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50132du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50132d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_501330: /* 501330: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 501332: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 501333: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 501335: mov ecx, esi */
  ecx = esi;
/* 501337: call 0x4e438b */
  esp -= 4; W32(esp, 0x50133cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 50133c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50133e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501340: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 501348: je 0x501356 */
  if (zf) goto L_501356;
L_50134a: /* 50134a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 501350: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 501352: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501353: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x501356u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_501356: /* 501356: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50135a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 501360: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 501367: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 50136e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50136f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501370: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 501377: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50137a: ret  */
  esp += 4; SPILL(); return;
}

void f_5013b0(void) {
  LOAD_REGS();
L_5013b0: /* 5013b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5013b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5013b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5013b3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 5013b7: mov ebx, ecx */
  ebx = ecx;
/* 5013b9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5013bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5013bc: je 0x501443 */
  if (zf) goto L_501443;
L_5013c2: /* 5013c2: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 5013c5: xor esi, esi */
  esi = 0;
/* 5013c7: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 5013c9: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 5013cc: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 5013cf: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5013d4u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5013d4: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5013d7: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 5013db: jle 0x501443 */
  if ((zf || sf != of)) goto L_501443;
L_5013dd: /* 5013dd: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 5013e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_5013e2: /* 5013e2: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 5013e5: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 5013e8: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 5013eb: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5013ed: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 5013f0: jle 0x50140e */
  if ((zf || sf != of)) goto L_50140e;
L_5013f2: /* 5013f2: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5013f5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5013f6: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5013f9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5013fb: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5013fe: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 501402: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 501404: mov ecx, ebx */
  ecx = ebx;
/* 501406: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 501409: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50140eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50140e: /* 50140e: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 501410: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 501413: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  esi = r;
  }
/* 501415: mov edi, esi */
  edi = esi;
/* 501417: je 0x501427 */
  if (zf) goto L_501427;
L_501419: /* 501419: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 50141c: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 501420: mov ecx, 7 */
  ecx = 0x7u;
/* 501425: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_501427: /* 501427: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 50142b: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 50142f: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 501432: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 501433: add edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 501436: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 501438: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 50143c: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 501440: jl 0x5013e2 */
  if ((sf != of)) goto L_5013e2;
L_501442: /* 501442: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_501443: /* 501443: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501444: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 501445: mov eax, ebx */
  eax = ebx;
/* 501447: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 501448: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 501449: ret 4 */
  esp += 8; SPILL(); return;
}

void f_501480(void) {
  LOAD_REGS();
L_501480: /* 501480: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 501482: push 0x556118 */
  { uint32_t v = 0x556118u; esp -= 4; W32(esp, v); }
/* 501487: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50148d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50148e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 501495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501496: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501497: mov esi, ecx */
  esi = ecx;
/* 501499: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50149a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 50149e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 5014a1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5014a3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 5014ab: jge 0x5014c4 */
  if ((sf == of)) goto L_5014c4;
L_5014ad: /* 5014ad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 5014b2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5014b7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 5014bc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5014c1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5014c1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5014c4: /* 5014c4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5014c7: jle 0x5014e0 */
  if ((zf || sf != of)) goto L_5014e0;
L_5014c9: /* 5014c9: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 5014ce: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5014d3: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 5014d8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5014ddu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5014dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5014e0: /* 5014e0: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 5014e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5014e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5014e5: mov ecx, esi */
  ecx = esi;
/* 5014e7: call 0x4e438b */
  esp -= 4; W32(esp, 0x5014ecu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5014ec: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5014ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5014f0: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 5014f8: je 0x501506 */
  if (zf) goto L_501506;
L_5014fa: /* 5014fa: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 501500: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 501502: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501503: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x501506u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_501506: /* 501506: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50150a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 501510: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 501517: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 50151e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50151f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501520: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 501527: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50152a: ret  */
  esp += 4; SPILL(); return;
}

void f_501560(void) {
  LOAD_REGS();
L_501560: /* 501560: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501561: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 501562: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 501563: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 501567: mov ebx, ecx */
  ebx = ecx;
/* 501569: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50156b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50156c: je 0x5015f4 */
  if (zf) goto L_5015f4;
L_501572: /* 501572: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 501575: xor esi, esi */
  esi = 0;
/* 501577: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 501579: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 50157c: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 50157f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x501584u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 501584: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 501587: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 50158b: jle 0x5015f4 */
  if ((zf || sf != of)) goto L_5015f4;
L_50158d: /* 50158d: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 501591: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_501592: /* 501592: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 501595: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 501598: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 50159b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50159d: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 5015a0: jle 0x5015be */
  if ((zf || sf != of)) goto L_5015be;
L_5015a2: /* 5015a2: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5015a5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5015a6: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5015a9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5015ab: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5015ae: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 5015b2: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 5015b4: mov ecx, ebx */
  ecx = ebx;
/* 5015b6: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 5015b9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5015beu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5015be: /* 5015be: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 5015c0: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 5015c3: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 5015c6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5015c8: je 0x5015d8 */
  if (zf) goto L_5015d8;
L_5015ca: /* 5015ca: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 5015cd: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 5015d1: mov ecx, 9 */
  ecx = 0x9u;
/* 5015d6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_5015d8: /* 5015d8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 5015dc: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 5015e0: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 5015e3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5015e4: add edx, 0x24 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5015e7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5015e9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 5015ed: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 5015f1: jl 0x501592 */
  if ((sf != of)) goto L_501592;
L_5015f3: /* 5015f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5015f4: /* 5015f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5015f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5015f6: mov eax, ebx */
  eax = ebx;
/* 5015f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5015f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5015fa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_501630(void) {
  LOAD_REGS();
L_501630: /* 501630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501631: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 501632: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 501636: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 501637: mov esi, ecx */
  esi = ecx;
/* 501639: call 0x4e13a7 */
  esp -= 4; W32(esp, 0x50163eu); SPILL(); f_4e13a7(); if (g_unwind) return; RELOAD();
/* 50163e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 501641: mov ecx, esi */
  ecx = esi;
/* 501643: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 501646: call 0x4e2c07 */
  esp -= 4; W32(esp, 0x50164bu); SPILL(); f_4e2c07(); if (g_unwind) return; RELOAD();
/* 50164b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50164c: mov eax, esi */
  eax = esi;
/* 50164e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50164f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_501670(void) {
  LOAD_REGS();
L_501670: /* 501670: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 501672: push 0x556138 */
  { uint32_t v = 0x556138u; esp -= 4; W32(esp, v); }
/* 501677: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50167d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50167e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 501685: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501686: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501687: mov esi, ecx */
  esi = ecx;
/* 501689: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50168a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 50168e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 501691: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 501693: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 50169b: jge 0x5016b4 */
  if ((sf == of)) goto L_5016b4;
L_50169d: /* 50169d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 5016a2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5016a7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 5016ac: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5016b1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5016b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5016b4: /* 5016b4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5016b7: jle 0x5016d0 */
  if ((zf || sf != of)) goto L_5016d0;
L_5016b9: /* 5016b9: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 5016be: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5016c3: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 5016c8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5016cdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5016cd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5016d0: /* 5016d0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5016d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5016d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5016d5: mov ecx, esi */
  ecx = esi;
/* 5016d7: call 0x4e438b */
  esp -= 4; W32(esp, 0x5016dcu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5016dc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5016de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5016e0: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 5016e8: je 0x5016f6 */
  if (zf) goto L_5016f6;
L_5016ea: /* 5016ea: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5016f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5016f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5016f3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5016f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5016f6: /* 5016f6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5016fa: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 501700: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 501707: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 50170e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50170f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501710: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 501717: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50171a: ret  */
  esp += 4; SPILL(); return;
}

void f_501750(void) {
  LOAD_REGS();
L_501750: /* 501750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501751: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 501752: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 501756: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 501757: mov esi, ecx */
  esi = ecx;
/* 501759: call 0x4e28d8 */
  esp -= 4; W32(esp, 0x50175eu); SPILL(); f_4e28d8(); if (g_unwind) return; RELOAD();
/* 50175e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 501761: mov ecx, esi */
  ecx = esi;
/* 501763: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 501766: call 0x4e2455 */
  esp -= 4; W32(esp, 0x50176bu); SPILL(); f_4e2455(); if (g_unwind) return; RELOAD();
/* 50176b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50176c: mov eax, esi */
  eax = esi;
/* 50176e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50176f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_501790(void) {
  LOAD_REGS();
L_501790: /* 501790: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 501792: push 0x556158 */
  { uint32_t v = 0x556158u; esp -= 4; W32(esp, v); }
/* 501797: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50179d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50179e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5017a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5017a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5017a7: mov esi, ecx */
  esi = ecx;
/* 5017a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5017aa: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 5017ae: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 5017b1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5017b3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 5017bb: jge 0x5017d4 */
  if ((sf == of)) goto L_5017d4;
L_5017bd: /* 5017bd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 5017c2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5017c7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 5017cc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5017d1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5017d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5017d4: /* 5017d4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5017d7: jle 0x5017f0 */
  if ((zf || sf != of)) goto L_5017f0;
L_5017d9: /* 5017d9: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 5017de: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5017e3: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 5017e8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5017edu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5017ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5017f0: /* 5017f0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5017f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5017f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5017f5: mov ecx, esi */
  ecx = esi;
/* 5017f7: call 0x4e438b */
  esp -= 4; W32(esp, 0x5017fcu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5017fc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5017fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501800: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 501808: je 0x501816 */
  if (zf) goto L_501816;
L_50180a: /* 50180a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 501810: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 501812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501813: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x501816u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_501816: /* 501816: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50181a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 501820: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 501827: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 50182e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50182f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501830: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 501837: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50183a: ret  */
  esp += 4; SPILL(); return;
}

void f_501870(void) {
  LOAD_REGS();
L_501870: /* 501870: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501871: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 501872: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 501876: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 501877: mov esi, ecx */
  esi = ecx;
/* 501879: call 0x4e394a */
  esp -= 4; W32(esp, 0x50187eu); SPILL(); f_4e394a(); if (g_unwind) return; RELOAD();
/* 50187e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 501881: mov ecx, esi */
  ecx = esi;
/* 501883: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 501886: call 0x4e3053 */
  esp -= 4; W32(esp, 0x50188bu); SPILL(); f_4e3053(); if (g_unwind) return; RELOAD();
/* 50188b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50188c: mov eax, esi */
  eax = esi;
/* 50188e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50188f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5018b0(void) {
  LOAD_REGS();
L_5018b0: /* 5018b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5018b2: push 0x556178 */
  { uint32_t v = 0x556178u; esp -= 4; W32(esp, v); }
/* 5018b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5018bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5018be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5018c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5018c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5018c7: mov esi, ecx */
  esi = ecx;
/* 5018c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5018ca: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 5018ce: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 5018d1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5018d3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 5018db: jge 0x5018f4 */
  if ((sf == of)) goto L_5018f4;
L_5018dd: /* 5018dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 5018e2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5018e7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 5018ec: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5018f1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5018f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5018f4: /* 5018f4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5018f7: jle 0x501910 */
  if ((zf || sf != of)) goto L_501910;
L_5018f9: /* 5018f9: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 5018fe: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 501903: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 501908: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50190du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50190d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_501910: /* 501910: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 501912: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 501913: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 501915: mov ecx, esi */
  ecx = esi;
/* 501917: call 0x4e438b */
  esp -= 4; W32(esp, 0x50191cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 50191c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50191e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501920: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 501928: je 0x501936 */
  if (zf) goto L_501936;
L_50192a: /* 50192a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 501930: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 501932: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501933: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x501936u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_501936: /* 501936: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50193a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 501940: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 501947: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 50194e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50194f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501950: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 501957: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50195a: ret  */
  esp += 4; SPILL(); return;
}

void f_501990(void) {
  LOAD_REGS();
L_501990: /* 501990: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501991: mov esi, ecx */
  esi = ecx;
/* 501993: call 0x4e1217 */
  esp -= 4; W32(esp, 0x501998u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 501998: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50199d: je 0x5019ab */
  if (zf) goto L_5019ab;
L_50199f: /* 50199f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5019a5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5019a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5019a8: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x5019abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5019ab: /* 5019ab: mov eax, esi */
  eax = esi;
/* 5019ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5019ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5019d0(void) {
  LOAD_REGS();
L_5019d0: /* 5019d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5019d1: mov esi, ecx */
  esi = ecx;
/* 5019d3: call 0x4e4057 */
  esp -= 4; W32(esp, 0x5019d8u); SPILL(); f_4e4057(); if (g_unwind) return; RELOAD();
/* 5019d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5019dd: je 0x5019eb */
  if (zf) goto L_5019eb;
L_5019df: /* 5019df: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5019e5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5019e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5019e8: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x5019ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5019eb: /* 5019eb: mov eax, esi */
  eax = esi;
/* 5019ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5019ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_501a10(void) {
  LOAD_REGS();
L_501a10: /* 501a10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501a11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501a12: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 501a16: push 0x5ed66c */
  { uint32_t v = 0x5ed66cu; esp -= 4; W32(esp, v); }
/* 501a1b: mov ecx, esi */
  ecx = esi;
/* 501a1d: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 501a25: call 0x4e13de */
  esp -= 4; W32(esp, 0x501a2au); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 501a2a: mov eax, esi */
  eax = esi;
/* 501a2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501a2d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 501a2e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_501a50(void) {
  LOAD_REGS();
L_501a50: /* 501a50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501a51: mov esi, ecx */
  esi = ecx;
/* 501a53: call 0x4e1f05 */
  esp -= 4; W32(esp, 0x501a58u); SPILL(); f_4e1f05(); if (g_unwind) return; RELOAD();
/* 501a58: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 501a5d: je 0x501a6b */
  if (zf) goto L_501a6b;
L_501a5f: /* 501a5f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 501a65: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 501a67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501a68: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x501a6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_501a6b: /* 501a6b: mov eax, esi */
  eax = esi;
/* 501a6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501a6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_501a90(void) {
  LOAD_REGS();
L_501a90: /* 501a90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501a91: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 501a94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501a96: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 501a9e: je 0x501aa4 */
  if (zf) goto L_501aa4;
L_501aa0: /* 501aa0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 501aa2: jmp 0x501aa9 */
  goto L_501aa9;
L_501aa4: /* 501aa4: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_501aa9: /* 501aa9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501aab: je 0x501ab0 */
  if (zf) goto L_501ab0;
L_501aad: /* 501aad: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 501aae: jmp 0x501ab2 */
  goto L_501ab2;
L_501ab0: /* 501ab0: xor eax, eax */
  eax = 0;
L_501ab2: /* 501ab2: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 501ab6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 501ab8: jge 0x501abe */
  if ((sf == of)) goto L_501abe;
L_501aba: /* 501aba: xor eax, eax */
  eax = 0;
/* 501abc: jmp 0x501ac4 */
  goto L_501ac4;
L_501abe: /* 501abe: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 501ac0: jge 0x501ac4 */
  if ((sf == of)) goto L_501ac4;
L_501ac2: /* 501ac2: mov eax, edx */
  eax = edx;
L_501ac4: /* 501ac4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501ac5: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 501ac9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501aca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501acb: mov ecx, esi */
  ecx = esi;
/* 501acd: call 0x4e11bd */
  esp -= 4; W32(esp, 0x501ad2u); SPILL(); f_4e11bd(); if (g_unwind) return; RELOAD();
/* 501ad2: mov eax, esi */
  eax = esi;
/* 501ad4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501ad5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 501ad6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_501b00(void) {
  LOAD_REGS();
L_501b00: /* 501b00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501b01: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 501b04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501b06: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 501b0e: je 0x501b14 */
  if (zf) goto L_501b14;
L_501b10: /* 501b10: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 501b12: jmp 0x501b19 */
  goto L_501b19;
L_501b14: /* 501b14: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_501b19: /* 501b19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501b1b: je 0x501b22 */
  if (zf) goto L_501b22;
L_501b1d: /* 501b1d: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 501b20: jmp 0x501b24 */
  goto L_501b24;
L_501b22: /* 501b22: xor edx, edx */
  edx = 0;
L_501b24: /* 501b24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501b26: je 0x501b2b */
  if (zf) goto L_501b2b;
L_501b28: /* 501b28: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 501b29: jmp 0x501b2d */
  goto L_501b2d;
L_501b2b: /* 501b2b: xor eax, eax */
  eax = 0;
L_501b2d: /* 501b2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501b2e: sub eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 501b32: jns 0x501b4a */
  if (!sf) goto L_501b4a;
L_501b34: /* 501b34: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 501b38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501b39: xor eax, eax */
  eax = 0;
/* 501b3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501b3c: mov ecx, esi */
  ecx = esi;
/* 501b3e: call 0x4e11bd */
  esp -= 4; W32(esp, 0x501b43u); SPILL(); f_4e11bd(); if (g_unwind) return; RELOAD();
/* 501b43: mov eax, esi */
  eax = esi;
/* 501b45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501b46: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 501b47: ret 8 */
  esp += 12; SPILL(); return;
L_501b4a: /* 501b4a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 501b4c: jl 0x501b50 */
  if ((sf != of)) goto L_501b50;
L_501b4e: /* 501b4e: mov eax, edx */
  eax = edx;
L_501b50: /* 501b50: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 501b54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501b55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501b56: mov ecx, esi */
  ecx = esi;
/* 501b58: call 0x4e11bd */
  esp -= 4; W32(esp, 0x501b5du); SPILL(); f_4e11bd(); if (g_unwind) return; RELOAD();
/* 501b5d: mov eax, esi */
  eax = esi;
/* 501b5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501b60: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 501b61: ret 8 */
  esp += 12; SPILL(); return;
}

void f_501b90(void) {
  LOAD_REGS();
L_501b90: /* 501b90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501b91: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 501b95: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 501b99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501b9a: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 501b9d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 501b9f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501ba1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 501ba2: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 501baa: je 0x501bbe */
  if (zf) goto L_501bbe;
L_501bac: /* 501bac: lea edi, [esi - 1] */
  edi = (uint32_t)(esi + 0xffffffffu);
/* 501baf: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 501bb1: jb 0x501bb5 */
  if (cf) goto L_501bb5;
L_501bb3: /* 501bb3: mov edx, edi */
  edx = edi;
L_501bb5: /* 501bb5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501bb7: je 0x501bc2 */
  if (zf) goto L_501bc2;
L_501bb9: /* 501bb9: lea edi, [esi - 1] */
  edi = (uint32_t)(esi + 0xffffffffu);
/* 501bbc: jmp 0x501bc4 */
  goto L_501bc4;
L_501bbe: /* 501bbe: xor edi, edi */
  edi = 0;
/* 501bc0: jmp 0x501bb3 */
  goto L_501bb3;
L_501bc2: /* 501bc2: xor edi, edi */
  edi = 0;
L_501bc4: /* 501bc4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 501bc6: jae 0x501bcc */
  if (!cf) goto L_501bcc;
L_501bc8: /* 501bc8: mov eax, edx */
  eax = edx;
/* 501bca: jmp 0x501bd2 */
  goto L_501bd2;
L_501bcc: /* 501bcc: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 501bce: jb 0x501bd2 */
  if (cf) goto L_501bd2;
L_501bd0: /* 501bd0: mov eax, edi */
  eax = edi;
L_501bd2: /* 501bd2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501bd4: je 0x501bda */
  if (zf) goto L_501bda;
L_501bd6: /* 501bd6: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 501bd8: jmp 0x501bdf */
  goto L_501bdf;
L_501bda: /* 501bda: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_501bdf: /* 501bdf: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 501be3: lea ecx, [ecx + edx*2] */
  ecx = (uint32_t)(ecx + edx*2);
/* 501be6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501be7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 501be9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501bea: mov ecx, esi */
  ecx = esi;
/* 501bec: call 0x4e11bd */
  esp -= 4; W32(esp, 0x501bf1u); SPILL(); f_4e11bd(); if (g_unwind) return; RELOAD();
/* 501bf1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 501bf2: mov eax, esi */
  eax = esi;
/* 501bf4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501bf5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 501bf6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_501c20(void) {
  LOAD_REGS();
L_501c20: /* 501c20: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 501c26: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 501c28: push 0x5561a0 */
  { uint32_t v = 0x5561a0u; esp -= 4; W32(esp, v); }
/* 501c2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501c2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 501c35: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 501c38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501c39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 501c3a: mov edi, ecx */
  edi = ecx;
/* 501c3c: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 501c40: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 501c43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501c45: je 0x501c4b */
  if (zf) goto L_501c4b;
L_501c47: /* 501c47: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 501c49: jmp 0x501c50 */
  goto L_501c50;
L_501c4b: /* 501c4b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_501c50: /* 501c50: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 501c54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501c55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501c56: mov ecx, edi */
  ecx = edi;
/* 501c58: call 0x4e1055 */
  esp -= 4; W32(esp, 0x501c5du); SPILL(); f_4e1055(); if (g_unwind) return; RELOAD();
/* 501c5d: mov esi, eax */
  esi = eax;
/* 501c5f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 501c61: jge 0x501c78 */
  if ((sf == of)) goto L_501c78;
L_501c63: /* 501c63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 501c64: xor eax, eax */
  eax = 0;
/* 501c66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501c67: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 501c6b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 501c72: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 501c75: ret 0x10 */
  esp += 20; SPILL(); return;
L_501c78: /* 501c78: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 501c79: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 501c7d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501c7f: je 0x501caf */
  if (zf) goto L_501caf;
L_501c81: /* 501c81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501c82: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 501c86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 501c87: mov ecx, edi */
  ecx = edi;
/* 501c89: call 0x4e42f0 */
  esp -= 4; W32(esp, 0x501c8eu); SPILL(); f_4e42f0(); if (g_unwind) return; RELOAD();
/* 501c8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501c8f: mov ecx, ebx */
  ecx = ebx;
/* 501c91: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 501c99: call 0x4e1d20 */
  esp -= 4; W32(esp, 0x501c9eu); SPILL(); f_4e1d20(); if (g_unwind) return; RELOAD();
/* 501c9e: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 501ca2: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 501caa: call 0x4e1217 */
  esp -= 4; W32(esp, 0x501cafu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
L_501caf: /* 501caf: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 501cb3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501cb5: je 0x501cfc */
  if (zf) goto L_501cfc;
L_501cb7: /* 501cb7: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 501cbb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 501cbe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501cc0: je 0x501cc5 */
  if (zf) goto L_501cc5;
L_501cc2: /* 501cc2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 501cc3: jmp 0x501cc7 */
  goto L_501cc7;
L_501cc5: /* 501cc5: xor eax, eax */
  eax = 0;
L_501cc7: /* 501cc7: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 501ccc: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 501cce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501ccf: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 501cd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501cd4: mov ecx, edi */
  ecx = edi;
/* 501cd6: call 0x4e2577 */
  esp -= 4; W32(esp, 0x501cdbu); SPILL(); f_4e2577(); if (g_unwind) return; RELOAD();
/* 501cdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501cdc: mov ecx, ebx */
  ecx = ebx;
/* 501cde: mov dword ptr [esp + 0x30], 1 */
  W32((uint32_t)(esp + 0x30u), 0x1u);
/* 501ce6: call 0x4e1d20 */
  esp -= 4; W32(esp, 0x501cebu); SPILL(); f_4e1d20(); if (g_unwind) return; RELOAD();
/* 501ceb: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 501cef: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 501cf7: call 0x4e1217 */
  esp -= 4; W32(esp, 0x501cfcu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
L_501cfc: /* 501cfc: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 501d00: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 501d01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 501d02: mov eax, 1 */
  eax = 0x1u;
/* 501d07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501d08: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 501d0f: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 501d12: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_501d60(void) {
  LOAD_REGS();
L_501d60: /* 501d60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 501d61: mov ebp, esp */
  ebp = esp;
/* 501d63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 501d65: push 0x5561d0 */
  { uint32_t v = 0x5561d0u; esp -= 4; W32(esp, v); }
/* 501d6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 501d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501d71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 501d78: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 501d7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 501d7c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 501d7f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501d81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501d82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 501d83: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 501d86: mov esi, ecx */
  esi = ecx;
/* 501d88: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 501d8f: jne 0x501da8 */
  if (!zf) goto L_501da8;
L_501d91: /* 501d91: push 0x562 */
  { uint32_t v = 0x562u; esp -= 4; W32(esp, v); }
/* 501d96: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 501d9b: push 0x5a3b90 */
  { uint32_t v = 0x5a3b90u; esp -= 4; W32(esp, v); }
/* 501da0: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x501da5u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 501da5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_501da8: /* 501da8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501da9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 501dac: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x501db1u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 501db1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 501db4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 501db6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501db7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 501dba: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 501dbe: call 0x4e1055 */
  esp -= 4; W32(esp, 0x501dc3u); SPILL(); f_4e1055(); if (g_unwind) return; RELOAD();
L_501dc3: /* 501dc3: mov edi, eax */
  edi = eax;
L_501dc5: /* 501dc5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 501dc7: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 501dca: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 501dcd: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 501dd0: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 501dd3: jle 0x501ecf */
  if ((zf || sf != of)) goto L_501ecf;
L_501dd9: /* 501dd9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 501ddb: jle 0x501df9 */
  if ((zf || sf != of)) goto L_501df9;
L_501ddd: /* 501ddd: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 501de0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 501de1: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 501de4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 501de6: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 501de9: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 501ded: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 501df0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 501df2: mov ecx, ebx */
  ecx = ebx;
/* 501df4: call 0x4e4502 */
  esp -= 4; W32(esp, 0x501df9u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_501df9: /* 501df9: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 501dfb: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 501dfe: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 501e01: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501e03: je 0x501e0f */
  if (zf) goto L_501e0f;
L_501e05: /* 501e05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 501e06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501e07: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 501e0a: call 0x4e42f0 */
  esp -= 4; W32(esp, 0x501e0fu); SPILL(); f_4e42f0(); if (g_unwind) return; RELOAD();
L_501e0f: /* 501e0f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 501e12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501e14: je 0x501e19 */
  if (zf) goto L_501e19;
L_501e16: /* 501e16: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 501e17: jmp 0x501e1b */
  goto L_501e1b;
L_501e19: /* 501e19: xor eax, eax */
  eax = 0;
L_501e1b: /* 501e1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501e1c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 501e1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 501e1e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 501e21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501e22: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 501e25: call 0x4e2577 */
  esp -= 4; W32(esp, 0x501e2au); SPILL(); f_4e2577(); if (g_unwind) return; RELOAD();
/* 501e2a: mov esi, eax */
  esi = eax;
/* 501e2c: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 501e2f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 501e31: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 501e35: je 0x501e71 */
  if (zf) goto L_501e71;
L_501e37: /* 501e37: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 501e3a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 501e3c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 501e3f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 501e42: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 501e45: call 0x4e4502 */
  esp -= 4; W32(esp, 0x501e4au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 501e4a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 501e4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501e4f: je 0x501e71 */
  if (zf) goto L_501e71;
L_501e51: /* 501e51: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 501e54: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 501e56: je 0x501e5c */
  if (zf) goto L_501e5c;
L_501e58: /* 501e58: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 501e5a: jmp 0x501e61 */
  goto L_501e61;
L_501e5c: /* 501e5c: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_501e61: /* 501e61: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 501e64: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 501e66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501e67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 501e68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 501e69: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x501e6eu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 501e6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_501e71: /* 501e71: xor esi, esi */
  esi = 0;
/* 501e73: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 501e75: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 501e78: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 501e7c: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 501e7f: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 501e82: call 0x4e4502 */
  esp -= 4; W32(esp, 0x501e87u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 501e87: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 501e8a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 501e8e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x501e93u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 501e93: cmp dword ptr [ebp - 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 501e96: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 501e99: jne 0x501ea0 */
  if (!zf) goto L_501ea0;
L_501e9b: /* 501e9b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_501ea0: /* 501ea0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 501ea3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 501ea4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501ea5: call 0x4e2220 */
  esp -= 4; W32(esp, 0x501eaau); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 501eaa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 501ead: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 501eaf: je 0x501ec7 */
  if (zf) goto L_501ec7;
L_501eb1: /* 501eb1: cmp dword ptr [ebp - 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 501eb4: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 501eb7: jne 0x501ebe */
  if (!zf) goto L_501ebe;
L_501eb9: /* 501eb9: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_501ebe: /* 501ebe: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 501ec0: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 501ec2: jmp 0x501dc3 */
  goto L_501dc3;
L_501ec7: /* 501ec7: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 501eca: jmp 0x501dc5 */
  goto L_501dc5;
L_501ecf: /* 501ecf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 501ed1: jle 0x501eef */
  if ((zf || sf != of)) goto L_501eef;
L_501ed3: /* 501ed3: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 501ed6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 501ed7: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 501eda: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 501edc: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 501edf: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 501ee3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 501ee5: mov ecx, ebx */
  ecx = ebx;
/* 501ee7: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 501eea: call 0x4e4502 */
  esp -= 4; W32(esp, 0x501eefu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_501eef: /* 501eef: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 501ef1: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 501ef4: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 501ef7: xor esi, esi */
  esi = 0;
/* 501ef9: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 501efb: je 0x501f06 */
  if (zf) goto L_501f06;
L_501efd: /* 501efd: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 501f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 501f01: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x501f06u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
L_501f06: /* 501f06: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 501f09: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 501f0b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 501f0e: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 501f12: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 501f15: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 501f18: call 0x4e4502 */
  esp -= 4; W32(esp, 0x501f1du); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 501f1d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 501f20: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 501f24: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x501f29u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 501f29: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 501f2c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 501f2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 501f2e: mov eax, ebx */
  eax = ebx;
/* 501f30: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 501f37: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 501f38: mov esp, ebp */
  esp = ebp;
/* 501f3a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 501f3b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_501f3e(void) {
  LOAD_REGS();
L_501f3e: /* 501f3e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 501f41: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 501f46: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 501f49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 501f4a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 501f4d: call 0x554df6 */
  esp -= 4; W32(esp, 0x501f52u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_501f52(); return;
}

void f_501f52(void) {
  LOAD_REGS();
L_501f52: /* 501f52: push 0x56a844 */
  { uint32_t v = 0x56a844u; esp -= 4; W32(esp, v); }
/* 501f57: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 501f5c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x501f61u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 501f61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 501f64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 501f66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 501f68: call 0x554df6 */
  esp -= 4; W32(esp, 0x501f6du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_501f6d: guest_badaddr(0x501f6d); return;
}

void f_502000(void) {
  LOAD_REGS();
L_502000: /* 502000: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 502001: mov ebp, esp */
  ebp = esp;
/* 502003: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 502005: push 0x556227 */
  { uint32_t v = 0x556227u; esp -= 4; W32(esp, v); }
/* 50200a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 502010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502011: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 502018: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50201b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50201c: xor ebx, ebx */
  ebx = 0;
/* 50201e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50201f: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 502022: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 502023: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 502026: mov esi, ecx */
  esi = ecx;
/* 502028: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 50202f: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 502032: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 502035: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 502038: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50203b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50203d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 502041: je 0x502046 */
  if (zf) goto L_502046;
L_502043: /* 502043: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 502044: jmp 0x502048 */
  goto L_502048;
L_502046: /* 502046: xor eax, eax */
  eax = 0;
L_502048: /* 502048: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 50204b: jmp 0x502050 */
  goto L_502050;
L_502050: /* 502050: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 502053: jle 0x5020a1 */
  if ((zf || sf != of)) goto L_5020a1;
L_502055: /* 502055: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 502057: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 502058: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 50205b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50205c: mov ecx, esi */
  ecx = esi;
/* 50205e: call 0x4e2577 */
  esp -= 4; W32(esp, 0x502063u); SPILL(); f_4e2577(); if (g_unwind) return; RELOAD();
/* 502063: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 502066: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 50206a: je 0x502070 */
  if (zf) goto L_502070;
L_50206c: /* 50206c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 50206e: jmp 0x502075 */
  goto L_502075;
L_502070: /* 502070: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_502075: /* 502075: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502076: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 502079: call 0x4e180c */
  esp -= 4; W32(esp, 0x50207eu); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 50207e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 502080: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 502083: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 502087: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 50208a: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 50208d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x502092u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 502092: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 502095: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 502099: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x50209eu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 50209e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 50209f: jmp 0x502050 */
  goto L_502050;
L_5020a1: /* 5020a1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 5020a4: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5020a6: je 0x5020de */
  if (zf) goto L_5020de;
L_5020a8: /* 5020a8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5020ab: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5020ad: mov ecx, esi */
  ecx = esi;
/* 5020af: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5020b2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 5020b5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5020bau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5020ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5020bd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5020bf: je 0x5020de */
  if (zf) goto L_5020de;
L_5020c1: /* 5020c1: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5020c4: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 5020c7: jne 0x5020ce */
  if (!zf) goto L_5020ce;
L_5020c9: /* 5020c9: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_5020ce: /* 5020ce: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 5020d1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5020d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5020d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5020d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5020d6: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x5020dbu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 5020db: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5020de: /* 5020de: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 5020e1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 5020e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5020e5: mov ecx, esi */
  ecx = esi;
/* 5020e7: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x5020ecu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 5020ec: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 5020f0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5020f2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 5020f5: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 5020f9: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 5020fc: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 5020ff: call 0x4e4502 */
  esp -= 4; W32(esp, 0x502104u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 502104: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 502107: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 50210b: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x502110u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 502110: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 502113: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 502114: mov eax, esi */
  eax = esi;
/* 502116: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 502117: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50211e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50211f: mov esp, ebp */
  esp = ebp;
/* 502121: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 502122: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50204d(void) {
  LOAD_REGS();
L_50204d: /* 50204d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_502050: /* 502050: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 502053: jle 0x5020a1 */
  if ((zf || sf != of)) goto L_5020a1;
L_502055: /* 502055: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 502057: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 502058: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 50205b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50205c: mov ecx, esi */
  ecx = esi;
/* 50205e: call 0x4e2577 */
  esp -= 4; W32(esp, 0x502063u); SPILL(); f_4e2577(); if (g_unwind) return; RELOAD();
/* 502063: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 502066: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 50206a: je 0x502070 */
  if (zf) goto L_502070;
L_50206c: /* 50206c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 50206e: jmp 0x502075 */
  goto L_502075;
L_502070: /* 502070: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_502075: /* 502075: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502076: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 502079: call 0x4e180c */
  esp -= 4; W32(esp, 0x50207eu); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 50207e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 502080: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 502083: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 502087: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 50208a: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 50208d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x502092u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 502092: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 502095: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 502099: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x50209eu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 50209e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 50209f: jmp 0x502050 */
  goto L_502050;
L_5020a1: /* 5020a1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 5020a4: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5020a6: je 0x5020de */
  if (zf) goto L_5020de;
L_5020a8: /* 5020a8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5020ab: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5020ad: mov ecx, esi */
  ecx = esi;
/* 5020af: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5020b2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 5020b5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5020bau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5020ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5020bd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5020bf: je 0x5020de */
  if (zf) goto L_5020de;
L_5020c1: /* 5020c1: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5020c4: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 5020c7: jne 0x5020ce */
  if (!zf) goto L_5020ce;
L_5020c9: /* 5020c9: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_5020ce: /* 5020ce: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 5020d1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5020d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5020d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5020d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5020d6: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x5020dbu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 5020db: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5020de: /* 5020de: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 5020e1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 5020e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5020e5: mov ecx, esi */
  ecx = esi;
/* 5020e7: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x5020ecu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 5020ec: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 5020f0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5020f2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 5020f5: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 5020f9: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 5020fc: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 5020ff: call 0x4e4502 */
  esp -= 4; W32(esp, 0x502104u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 502104: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 502107: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 50210b: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x502110u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 502110: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 502113: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 502114: mov eax, esi */
  eax = esi;
/* 502116: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 502117: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50211e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50211f: mov esp, ebp */
  esp = ebp;
/* 502121: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 502122: ret 4 */
  esp += 8; SPILL(); return;
}

void f_502125(void) {
  LOAD_REGS();
L_502125: /* 502125: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 502128: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50212d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 502130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502131: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 502134: call 0x554df6 */
  esp -= 4; W32(esp, 0x502139u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_502139(); return;
}

void f_502139(void) {
  LOAD_REGS();
L_502139: /* 502139: push 0x56a880 */
  { uint32_t v = 0x56a880u; esp -= 4; W32(esp, v); }
/* 50213e: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 502143: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x502148u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 502148: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50214b: xor ebx, ebx */
  ebx = 0;
/* 50214d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50214e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50214f: call 0x554df6 */
  esp -= 4; W32(esp, 0x502154u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_502154: guest_badaddr(0x502154); return;
}

void f_5021c0(void) {
  LOAD_REGS();
L_5021c0: /* 5021c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5021c1: mov ebp, esp */
  ebp = esp;
/* 5021c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5021c5: push 0x556287 */
  { uint32_t v = 0x556287u; esp -= 4; W32(esp, v); }
/* 5021ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5021d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5021d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5021d8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5021db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5021dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5021dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5021de: xor edi, edi */
  edi = 0;
/* 5021e0: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 5021e3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5021e6: mov ebx, ecx */
  ebx = ecx;
/* 5021e8: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 5021ef: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 5021f2: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 5021f5: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 5021f8: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 5021fb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5021fd: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 502201: je 0x502206 */
  if (zf) goto L_502206;
L_502203: /* 502203: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 502204: jmp 0x502208 */
  goto L_502208;
L_502206: /* 502206: xor eax, eax */
  eax = 0;
L_502208: /* 502208: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 50220b: jmp 0x502210 */
  goto L_502210;
L_502210: /* 502210: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 502213: jle 0x502261 */
  if ((zf || sf != of)) goto L_502261;
L_502215: /* 502215: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 502217: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 502218: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 50221b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50221c: mov ecx, ebx */
  ecx = ebx;
/* 50221e: call 0x4e2577 */
  esp -= 4; W32(esp, 0x502223u); SPILL(); f_4e2577(); if (g_unwind) return; RELOAD();
/* 502223: cmp dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 502226: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 50222a: je 0x502230 */
  if (zf) goto L_502230;
L_50222c: /* 50222c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 50222e: jmp 0x502235 */
  goto L_502235;
L_502230: /* 502230: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_502235: /* 502235: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502236: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 502239: call 0x4e180c */
  esp -= 4; W32(esp, 0x50223eu); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 50223e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 502240: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 502243: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 502247: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 50224a: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 50224d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x502252u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 502252: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 502255: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 502259: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x50225eu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 50225e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 50225f: jmp 0x502210 */
  goto L_502210;
L_502261: /* 502261: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 502264: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 502267: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 502268: mov ecx, esi */
  ecx = esi;
/* 50226a: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x50226fu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 50226f: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 502273: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 502275: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 502278: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 50227c: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 50227f: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 502282: call 0x4e4502 */
  esp -= 4; W32(esp, 0x502287u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 502287: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 50228a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 50228e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x502293u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 502293: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 502296: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 502297: mov eax, esi */
  eax = esi;
/* 502299: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50229a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5022a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5022a2: mov esp, ebp */
  esp = ebp;
/* 5022a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5022a5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50220d(void) {
  LOAD_REGS();
L_50220d: /* 50220d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_502210: /* 502210: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 502213: jle 0x502261 */
  if ((zf || sf != of)) goto L_502261;
L_502215: /* 502215: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 502217: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 502218: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 50221b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50221c: mov ecx, ebx */
  ecx = ebx;
/* 50221e: call 0x4e2577 */
  esp -= 4; W32(esp, 0x502223u); SPILL(); f_4e2577(); if (g_unwind) return; RELOAD();
/* 502223: cmp dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 502226: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 50222a: je 0x502230 */
  if (zf) goto L_502230;
L_50222c: /* 50222c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 50222e: jmp 0x502235 */
  goto L_502235;
L_502230: /* 502230: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_502235: /* 502235: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502236: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 502239: call 0x4e180c */
  esp -= 4; W32(esp, 0x50223eu); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 50223e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 502240: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 502243: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 502247: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 50224a: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 50224d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x502252u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 502252: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 502255: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 502259: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x50225eu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 50225e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 50225f: jmp 0x502210 */
  goto L_502210;
L_502261: /* 502261: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 502264: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 502267: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 502268: mov ecx, esi */
  ecx = esi;
/* 50226a: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x50226fu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 50226f: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 502273: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 502275: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 502278: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 50227c: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 50227f: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 502282: call 0x4e4502 */
  esp -= 4; W32(esp, 0x502287u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 502287: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 50228a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 50228e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x502293u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 502293: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 502296: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 502297: mov eax, esi */
  eax = esi;
/* 502299: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50229a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5022a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5022a2: mov esp, ebp */
  esp = ebp;
/* 5022a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5022a5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5022a8(void) {
  LOAD_REGS();
L_5022a8: /* 5022a8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5022ab: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5022b0: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 5022b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5022b4: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 5022b7: call 0x554df6 */
  esp -= 4; W32(esp, 0x5022bcu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5022bc(); return;
}

void f_5022bc(void) {
  LOAD_REGS();
L_5022bc: /* 5022bc: push 0x56a8a8 */
  { uint32_t v = 0x56a8a8u; esp -= 4; W32(esp, v); }
/* 5022c1: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 5022c6: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5022cbu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5022cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5022ce: xor edi, edi */
  edi = 0;
/* 5022d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5022d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5022d2: call 0x554df6 */
  esp -= 4; W32(esp, 0x5022d7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5022d7: guest_badaddr(0x5022d7); return;
}

void f_502330(void) {
  LOAD_REGS();
L_502330: /* 502330: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 502332: push 0x5562f7 */
  { uint32_t v = 0x5562f7u; esp -= 4; W32(esp, v); }
/* 502337: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50233d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50233e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 502345: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 502348: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 50234c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50234d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50234e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50234f: xor ebx, ebx */
  ebx = 0;
/* 502351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502352: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 502356: call 0x4e35cb */
  esp -= 4; W32(esp, 0x50235bu); SPILL(); f_4e35cb(); if (g_unwind) return; RELOAD();
/* 50235b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50235e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50235f: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 502363: call 0x4e13de */
  esp -= 4; W32(esp, 0x502368u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 502368: mov dword ptr [esp + 0x3c], 1 */
  W32((uint32_t)(esp + 0x3cu), 0x1u);
/* 502370: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 502374: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 502378: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 50237c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 502380: xor esi, esi */
  esi = 0;
/* 502382: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 502384: mov byte ptr [esp + 0x3c], 2 */
  W8((uint32_t)(esp + 0x3cu), 0x2u);
/* 502389: je 0x50238e */
  if (zf) goto L_50238e;
L_50238b: /* 50238b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 50238c: jmp 0x502390 */
  goto L_502390;
L_50238e: /* 50238e: xor eax, eax */
  eax = 0;
L_502390: /* 502390: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 502393: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 502396: jle 0x50240c */
  if ((zf || sf != of)) goto L_50240c;
L_502398: /* 502398: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50239a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50239b: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 50239f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5023a0: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 5023a4: call 0x4e2577 */
  esp -= 4; W32(esp, 0x5023a9u); SPILL(); f_4e2577(); if (g_unwind) return; RELOAD();
/* 5023a9: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5023ac: mov byte ptr [esp + 0x3c], 3 */
  W8((uint32_t)(esp + 0x3cu), 0x3u);
/* 5023b1: je 0x5023b7 */
  if (zf) goto L_5023b7;
L_5023b3: /* 5023b3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 5023b5: jmp 0x5023bc */
  goto L_5023bc;
L_5023b7: /* 5023b7: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5023bc: /* 5023bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5023bd: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 5023c1: call 0x4e180c */
  esp -= 4; W32(esp, 0x5023c6u); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 5023c6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5023c8: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 5023cc: mov byte ptr [esp + 0x40], 4 */
  W8((uint32_t)(esp + 0x40u), 0x4u);
/* 5023d1: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 5023d5: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 5023d9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5023deu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5023de: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 5023e2: mov byte ptr [esp + 0x3c], 2 */
  W8((uint32_t)(esp + 0x3cu), 0x2u);
/* 5023e7: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5023ecu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5023ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5023ed: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5023f0: jne 0x502406 */
  if (!zf) goto L_502406;
L_5023f2: /* 5023f2: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5023f4: jle 0x502406 */
  if ((zf || sf != of)) goto L_502406;
L_5023f6: /* 5023f6: push 0x5a3b9c */
  { uint32_t v = 0x5a3b9cu; esp -= 4; W32(esp, v); }
/* 5023fb: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 5023ff: call 0x4e180c */
  esp -= 4; W32(esp, 0x502404u); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 502404: xor esi, esi */
  esi = 0;
L_502406: /* 502406: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 502407: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50240a: jg 0x502398 */
  if ((!zf && sf == of)) goto L_502398;
L_50240c: /* 50240c: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 502410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 502411: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 502415: call 0x4e1cb7 */
  esp -= 4; W32(esp, 0x50241au); SPILL(); f_4e1cb7(); if (g_unwind) return; RELOAD();
/* 50241a: mov dword ptr [esp + 0xc], 1 */
  W32((uint32_t)(esp + 0xcu), 0x1u);
/* 502422: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 502424: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 502428: mov byte ptr [esp + 0x40], 5 */
  W8((uint32_t)(esp + 0x40u), 0x5u);
/* 50242d: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 502431: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 502435: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50243au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50243a: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 50243e: mov byte ptr [esp + 0x3c], 1 */
  W8((uint32_t)(esp + 0x3cu), 0x1u);
/* 502443: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x502448u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 502448: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 50244a: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 50244e: mov dword ptr [esp + 0x40], 6 */
  W32((uint32_t)(esp + 0x40u), 0x6u);
/* 502456: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 50245a: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 50245e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x502463u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 502463: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 502467: mov byte ptr [esp + 0x3c], bl */
  W8((uint32_t)(esp + 0x3cu), (ebx & 0xffu));
/* 50246b: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x502470u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 502470: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 502474: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 502475: mov eax, esi */
  eax = esi;
/* 502477: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 502478: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 502479: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 502480: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 502483: ret  */
  esp += 4; SPILL(); return;
}

void f_5024f0(void) {
  LOAD_REGS();
L_5024f0: /* 5024f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5024f2: push 0x556330 */
  { uint32_t v = 0x556330u; esp -= 4; W32(esp, v); }
/* 5024f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5024fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5024fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 502505: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 502508: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 502509: xor ebx, ebx */
  ebx = 0;
/* 50250b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50250c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50250d: mov esi, ecx */
  esi = ecx;
/* 50250f: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 502513: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 502517: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 50251b: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 50251f: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 502523: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 502525: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 502529: je 0x502569 */
  if (zf) goto L_502569;
L_50252b: /* 50252b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 50252e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 502530: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 502534: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 502538: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 50253c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x502541u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 502541: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 502545: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 502547: je 0x502569 */
  if (zf) goto L_502569;
L_502549: /* 502549: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50254c: je 0x502552 */
  if (zf) goto L_502552;
L_50254e: /* 50254e: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 502550: jmp 0x502557 */
  goto L_502557;
L_502552: /* 502552: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_502557: /* 502557: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 50255b: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 50255e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50255f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 502560: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 502561: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x502566u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 502566: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_502569: /* 502569: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50256a: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 50256e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50256f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 502570: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 502571: mov eax, esp */
  eax = esp;
/* 502573: mov ecx, esi */
  ecx = esi;
/* 502575: mov dword ptr [esp + 0x3c], esp */
  W32((uint32_t)(esp + 0x3cu), esp);
/* 502579: mov dword ptr [eax], 0x340 */
  W32((uint32_t)(eax), 0x340u);
/* 50257f: call 0x4e2aea */
  esp -= 4; W32(esp, 0x502584u); SPILL(); f_4e2aea(); if (g_unwind) return; RELOAD();
/* 502584: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 502586: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502587: mov ecx, esi */
  ecx = esi;
/* 502589: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x50258cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50258c: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 502590: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 502592: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 502596: mov dword ptr [esp + 0x28], 1 */
  W32((uint32_t)(esp + 0x28u), 0x1u);
/* 50259e: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 5025a2: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 5025a6: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5025abu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5025ab: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5025af: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* 5025b7: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5025bcu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5025bc: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 5025c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5025c1: mov eax, esi */
  eax = esi;
/* 5025c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5025c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5025cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5025cc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5025cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_502620(void) {
  LOAD_REGS();
L_502620: /* 502620: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502624: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502626: je 0x50262d */
  if (zf) goto L_50262d;
L_502628: /* 502628: jmp 0x4e28ec */
  SPILL(); f_4e28ec(); return;
L_50262d: /* 50262d: ret  */
  esp += 4; SPILL(); return;
}

void f_502640(void) {
  LOAD_REGS();
L_502640: /* 502640: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502644: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502646: je 0x50264d */
  if (zf) goto L_50264d;
L_502648: /* 502648: jmp 0x4e2eeb */
  SPILL(); f_4e2eeb(); return;
L_50264d: /* 50264d: ret  */
  esp += 4; SPILL(); return;
}

void f_502660(void) {
  LOAD_REGS();
L_502660: /* 502660: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502664: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502666: je 0x50266d */
  if (zf) goto L_50266d;
L_502668: /* 502668: jmp 0x4e1ad7 */
  SPILL(); f_4e1ad7(); return;
L_50266d: /* 50266d: ret  */
  esp += 4; SPILL(); return;
}

void f_502680(void) {
  LOAD_REGS();
L_502680: /* 502680: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502684: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502686: je 0x50268d */
  if (zf) goto L_50268d;
L_502688: /* 502688: jmp 0x4e402f */
  SPILL(); f_4e402f(); return;
L_50268d: /* 50268d: ret  */
  esp += 4; SPILL(); return;
}

void f_5026a0(void) {
  LOAD_REGS();
L_5026a0: /* 5026a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5026a2: push 0x5563c6 */
  { uint32_t v = 0x5563c6u; esp -= 4; W32(esp, v); }
/* 5026a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5026ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5026ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5026b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5026b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5026b7: mov esi, ecx */
  esi = ecx;
/* 5026b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 5026bd: mov dword ptr [esi], 0x56a8d8 */
  W32((uint32_t)(esi), 0x56a8d8u);
/* 5026c3: mov dword ptr [esp + 0x10], 9 */
  W32((uint32_t)(esp + 0x10u), 0x9u);
/* 5026cb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x5026d0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 5026d0: lea ecx, [esi + 0x520] */
  ecx = (uint32_t)(esi + 0x520u);
/* 5026d6: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 5026db: call 0x4e1217 */
  esp -= 4; W32(esp, 0x5026e0u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 5026e0: lea ecx, [esi + 0x50c] */
  ecx = (uint32_t)(esi + 0x50cu);
/* 5026e6: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 5026eb: call 0x4e1b59 */
  esp -= 4; W32(esp, 0x5026f0u); SPILL(); f_4e1b59(); if (g_unwind) return; RELOAD();
/* 5026f0: lea ecx, [esi + 0x500] */
  ecx = (uint32_t)(esi + 0x500u);
/* 5026f6: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 5026fb: call 0x4e2892 */
  esp -= 4; W32(esp, 0x502700u); SPILL(); f_4e2892(); if (g_unwind) return; RELOAD();
/* 502700: lea ecx, [esi + 0x4f4] */
  ecx = (uint32_t)(esi + 0x4f4u);
/* 502706: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 50270b: call 0x4e2892 */
  esp -= 4; W32(esp, 0x502710u); SPILL(); f_4e2892(); if (g_unwind) return; RELOAD();
/* 502710: lea ecx, [esi + 0x4e8] */
  ecx = (uint32_t)(esi + 0x4e8u);
/* 502716: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 50271b: call 0x4e33c8 */
  esp -= 4; W32(esp, 0x502720u); SPILL(); f_4e33c8(); if (g_unwind) return; RELOAD();
/* 502720: lea ecx, [esi + 0x4dc] */
  ecx = (uint32_t)(esi + 0x4dcu);
/* 502726: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 50272b: call 0x4e2892 */
  esp -= 4; W32(esp, 0x502730u); SPILL(); f_4e2892(); if (g_unwind) return; RELOAD();
/* 502730: lea ecx, [esi + 0x4d0] */
  ecx = (uint32_t)(esi + 0x4d0u);
/* 502736: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 50273b: call 0x4e20a4 */
  esp -= 4; W32(esp, 0x502740u); SPILL(); f_4e20a4(); if (g_unwind) return; RELOAD();
/* 502740: lea ecx, [esi + 0x4c4] */
  ecx = (uint32_t)(esi + 0x4c4u);
/* 502746: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 50274b: call 0x4e42be */
  esp -= 4; W32(esp, 0x502750u); SPILL(); f_4e42be(); if (g_unwind) return; RELOAD();
/* 502750: lea ecx, [esi + 0x4b8] */
  ecx = (uint32_t)(esi + 0x4b8u);
/* 502756: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 50275b: call 0x4e3fcb */
  esp -= 4; W32(esp, 0x502760u); SPILL(); f_4e3fcb(); if (g_unwind) return; RELOAD();
/* 502760: mov ecx, esi */
  ecx = esi;
/* 502762: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 50276a: call 0x4e2cfc */
  esp -= 4; W32(esp, 0x50276fu); SPILL(); f_4e2cfc(); if (g_unwind) return; RELOAD();
/* 50276f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 502773: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 502774: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50277b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50277e: ret  */
  esp += 4; SPILL(); return;
}

void f_5027c0(void) {
  LOAD_REGS();
L_5027c0: /* 5027c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5027c2: push 0x556478 */
  { uint32_t v = 0x556478u; esp -= 4; W32(esp, v); }
/* 5027c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5027cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5027ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5027d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5027d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5027d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5027d8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 5027dc: mov esi, ecx */
  esi = ecx;
/* 5027de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5027df: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 5027e3: call 0x4e127b */
  esp -= 4; W32(esp, 0x5027e8u); SPILL(); f_4e127b(); if (g_unwind) return; RELOAD();
/* 5027e8: mov dword ptr [esi], 0x56a8d8 */
  W32((uint32_t)(esi), 0x56a8d8u);
/* 5027ee: mov eax, dword ptr [edi + 0x498] */
  eax = R32((uint32_t)(edi + 0x498u));
/* 5027f4: mov dword ptr [esi + 0x498], eax */
  W32((uint32_t)(esi + 0x498u), eax);
/* 5027fa: mov ecx, dword ptr [edi + 0x49c] */
  ecx = R32((uint32_t)(edi + 0x49cu));
/* 502800: mov dword ptr [esi + 0x49c], ecx */
  W32((uint32_t)(esi + 0x49cu), ecx);
/* 502806: lea edx, [edi + 0x4a0] */
  edx = (uint32_t)(edi + 0x4a0u);
/* 50280c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 50280e: lea eax, [esi + 0x4a0] */
  eax = (uint32_t)(esi + 0x4a0u);
/* 502814: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 502816: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 502819: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 50281c: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 50281f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 502822: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 502825: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 502828: mov eax, dword ptr [edi + 0x4b0] */
  eax = R32((uint32_t)(edi + 0x4b0u));
/* 50282e: mov dword ptr [esi + 0x4b0], eax */
  W32((uint32_t)(esi + 0x4b0u), eax);
/* 502834: mov ecx, dword ptr [edi + 0x4b4] */
  ecx = R32((uint32_t)(edi + 0x4b4u));
/* 50283a: lea edx, [edi + 0x4b8] */
  edx = (uint32_t)(edi + 0x4b8u);
/* 502840: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 502846: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 502847: lea ecx, [esi + 0x4b8] */
  ecx = (uint32_t)(esi + 0x4b8u);
/* 50284d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 502855: call 0x4e38c8 */
  esp -= 4; W32(esp, 0x50285au); SPILL(); f_4e38c8(); if (g_unwind) return; RELOAD();
/* 50285a: lea eax, [edi + 0x4c4] */
  eax = (uint32_t)(edi + 0x4c4u);
/* 502860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502861: lea ecx, [esi + 0x4c4] */
  ecx = (uint32_t)(esi + 0x4c4u);
/* 502867: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 50286c: call 0x4e151e */
  esp -= 4; W32(esp, 0x502871u); SPILL(); f_4e151e(); if (g_unwind) return; RELOAD();
/* 502871: lea ecx, [edi + 0x4d0] */
  ecx = (uint32_t)(edi + 0x4d0u);
/* 502877: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 502878: lea ecx, [esi + 0x4d0] */
  ecx = (uint32_t)(esi + 0x4d0u);
/* 50287e: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 502883: call 0x4e29eb */
  esp -= 4; W32(esp, 0x502888u); SPILL(); f_4e29eb(); if (g_unwind) return; RELOAD();
/* 502888: lea edx, [edi + 0x4dc] */
  edx = (uint32_t)(edi + 0x4dcu);
/* 50288e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50288f: lea ecx, [esi + 0x4dc] */
  ecx = (uint32_t)(esi + 0x4dcu);
/* 502895: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 50289a: call 0x4e3c3d */
  esp -= 4; W32(esp, 0x50289fu); SPILL(); f_4e3c3d(); if (g_unwind) return; RELOAD();
/* 50289f: lea eax, [edi + 0x4e8] */
  eax = (uint32_t)(edi + 0x4e8u);
/* 5028a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5028a6: lea ecx, [esi + 0x4e8] */
  ecx = (uint32_t)(esi + 0x4e8u);
/* 5028ac: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 5028b1: call 0x4e1dd4 */
  esp -= 4; W32(esp, 0x5028b6u); SPILL(); f_4e1dd4(); if (g_unwind) return; RELOAD();
/* 5028b6: lea ecx, [edi + 0x4f4] */
  ecx = (uint32_t)(edi + 0x4f4u);
/* 5028bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5028bd: lea ecx, [esi + 0x4f4] */
  ecx = (uint32_t)(esi + 0x4f4u);
/* 5028c3: mov byte ptr [esp + 0x18], 5 */
  W8((uint32_t)(esp + 0x18u), 0x5u);
/* 5028c8: call 0x4e3c3d */
  esp -= 4; W32(esp, 0x5028cdu); SPILL(); f_4e3c3d(); if (g_unwind) return; RELOAD();
/* 5028cd: lea edx, [edi + 0x500] */
  edx = (uint32_t)(edi + 0x500u);
/* 5028d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5028d4: lea ecx, [esi + 0x500] */
  ecx = (uint32_t)(esi + 0x500u);
/* 5028da: mov byte ptr [esp + 0x18], 6 */
  W8((uint32_t)(esp + 0x18u), 0x6u);
/* 5028df: call 0x4e3c3d */
  esp -= 4; W32(esp, 0x5028e4u); SPILL(); f_4e3c3d(); if (g_unwind) return; RELOAD();
/* 5028e4: lea eax, [edi + 0x50c] */
  eax = (uint32_t)(edi + 0x50cu);
/* 5028ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5028eb: lea ecx, [esi + 0x50c] */
  ecx = (uint32_t)(esi + 0x50cu);
/* 5028f1: mov byte ptr [esp + 0x18], 7 */
  W8((uint32_t)(esp + 0x18u), 0x7u);
/* 5028f6: call 0x4e1c94 */
  esp -= 4; W32(esp, 0x5028fbu); SPILL(); f_4e1c94(); if (g_unwind) return; RELOAD();
/* 5028fb: mov ecx, dword ptr [edi + 0x518] */
  ecx = R32((uint32_t)(edi + 0x518u));
/* 502901: mov dword ptr [esi + 0x518], ecx */
  W32((uint32_t)(esi + 0x518u), ecx);
/* 502907: mov edx, dword ptr [edi + 0x51c] */
  edx = R32((uint32_t)(edi + 0x51cu));
/* 50290d: mov byte ptr [esp + 0x14], 8 */
  W8((uint32_t)(esp + 0x14u), 0x8u);
/* 502912: mov dword ptr [esi + 0x51c], edx */
  W32((uint32_t)(esi + 0x51cu), edx);
/* 502918: add edi, 0x520 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x520u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 50291e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50291f: lea ecx, [esi + 0x520] */
  ecx = (uint32_t)(esi + 0x520u);
/* 502925: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x50292au); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 50292a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50292e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50292f: mov eax, esi */
  eax = esi;
/* 502931: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 502932: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 502939: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50293c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5029a0(void) {
  LOAD_REGS();
L_5029a0: /* 5029a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5029a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5029a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5029a3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 5029a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5029a8: mov esi, ecx */
  esi = ecx;
/* 5029aa: call 0x4e32e2 */
  esp -= 4; W32(esp, 0x5029afu); SPILL(); f_4e32e2(); if (g_unwind) return; RELOAD();
/* 5029af: mov eax, dword ptr [edi + 0x498] */
  eax = R32((uint32_t)(edi + 0x498u));
/* 5029b5: mov dword ptr [esi + 0x498], eax */
  W32((uint32_t)(esi + 0x498u), eax);
/* 5029bb: mov ecx, dword ptr [edi + 0x49c] */
  ecx = R32((uint32_t)(edi + 0x49cu));
/* 5029c1: mov dword ptr [esi + 0x49c], ecx */
  W32((uint32_t)(esi + 0x49cu), ecx);
/* 5029c7: lea edx, [edi + 0x4a0] */
  edx = (uint32_t)(edi + 0x4a0u);
/* 5029cd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 5029cf: lea eax, [esi + 0x4a0] */
  eax = (uint32_t)(esi + 0x4a0u);
/* 5029d5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5029d7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 5029da: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 5029dd: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 5029e0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 5029e3: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 5029e6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 5029e9: mov eax, dword ptr [edi + 0x4b0] */
  eax = R32((uint32_t)(edi + 0x4b0u));
/* 5029ef: mov dword ptr [esi + 0x4b0], eax */
  W32((uint32_t)(esi + 0x4b0u), eax);
/* 5029f5: mov ecx, dword ptr [edi + 0x4b4] */
  ecx = R32((uint32_t)(edi + 0x4b4u));
/* 5029fb: lea edx, [edi + 0x4b8] */
  edx = (uint32_t)(edi + 0x4b8u);
/* 502a01: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 502a07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 502a08: lea ecx, [esi + 0x4b8] */
  ecx = (uint32_t)(esi + 0x4b8u);
/* 502a0e: call 0x4e1a0a */
  esp -= 4; W32(esp, 0x502a13u); SPILL(); f_4e1a0a(); if (g_unwind) return; RELOAD();
/* 502a13: lea eax, [edi + 0x4c4] */
  eax = (uint32_t)(edi + 0x4c4u);
/* 502a19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502a1a: lea ecx, [esi + 0x4c4] */
  ecx = (uint32_t)(esi + 0x4c4u);
/* 502a20: call 0x4e2298 */
  esp -= 4; W32(esp, 0x502a25u); SPILL(); f_4e2298(); if (g_unwind) return; RELOAD();
/* 502a25: lea ecx, [edi + 0x4d0] */
  ecx = (uint32_t)(edi + 0x4d0u);
/* 502a2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 502a2c: lea ecx, [esi + 0x4d0] */
  ecx = (uint32_t)(esi + 0x4d0u);
/* 502a32: call 0x4e1bc2 */
  esp -= 4; W32(esp, 0x502a37u); SPILL(); f_4e1bc2(); if (g_unwind) return; RELOAD();
/* 502a37: lea edx, [edi + 0x4dc] */
  edx = (uint32_t)(edi + 0x4dcu);
/* 502a3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 502a3e: lea ecx, [esi + 0x4dc] */
  ecx = (uint32_t)(esi + 0x4dcu);
/* 502a44: call 0x4e3062 */
  esp -= 4; W32(esp, 0x502a49u); SPILL(); f_4e3062(); if (g_unwind) return; RELOAD();
/* 502a49: lea eax, [edi + 0x4e8] */
  eax = (uint32_t)(edi + 0x4e8u);
/* 502a4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502a50: lea ecx, [esi + 0x4e8] */
  ecx = (uint32_t)(esi + 0x4e8u);
/* 502a56: call 0x4e2185 */
  esp -= 4; W32(esp, 0x502a5bu); SPILL(); f_4e2185(); if (g_unwind) return; RELOAD();
/* 502a5b: lea ecx, [edi + 0x4f4] */
  ecx = (uint32_t)(edi + 0x4f4u);
/* 502a61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 502a62: lea ecx, [esi + 0x4f4] */
  ecx = (uint32_t)(esi + 0x4f4u);
/* 502a68: call 0x4e3062 */
  esp -= 4; W32(esp, 0x502a6du); SPILL(); f_4e3062(); if (g_unwind) return; RELOAD();
/* 502a6d: lea edx, [edi + 0x500] */
  edx = (uint32_t)(edi + 0x500u);
/* 502a73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 502a74: lea ecx, [esi + 0x500] */
  ecx = (uint32_t)(esi + 0x500u);
/* 502a7a: call 0x4e3062 */
  esp -= 4; W32(esp, 0x502a7fu); SPILL(); f_4e3062(); if (g_unwind) return; RELOAD();
/* 502a7f: lea eax, [edi + 0x50c] */
  eax = (uint32_t)(edi + 0x50cu);
/* 502a85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502a86: lea ecx, [esi + 0x50c] */
  ecx = (uint32_t)(esi + 0x50cu);
/* 502a8c: call 0x4e1960 */
  esp -= 4; W32(esp, 0x502a91u); SPILL(); f_4e1960(); if (g_unwind) return; RELOAD();
/* 502a91: mov ecx, dword ptr [edi + 0x518] */
  ecx = R32((uint32_t)(edi + 0x518u));
/* 502a97: mov dword ptr [esi + 0x518], ecx */
  W32((uint32_t)(esi + 0x518u), ecx);
/* 502a9d: mov edx, dword ptr [edi + 0x51c] */
  edx = R32((uint32_t)(edi + 0x51cu));
/* 502aa3: lea ebx, [edi + 0x520] */
  ebx = (uint32_t)(edi + 0x520u);
/* 502aa9: lea edi, [esi + 0x520] */
  edi = (uint32_t)(esi + 0x520u);
/* 502aaf: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 502ab1: mov dword ptr [esi + 0x51c], edx */
  W32((uint32_t)(esi + 0x51cu), edx);
/* 502ab7: je 0x502af1 */
  if (zf) goto L_502af1;
L_502ab9: /* 502ab9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 502abc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 502abe: mov ecx, edi */
  ecx = edi;
/* 502ac0: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 502ac3: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 502ac6: call 0x4e4502 */
  esp -= 4; W32(esp, 0x502acbu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 502acb: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 502ace: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502ad0: je 0x502af1 */
  if (zf) goto L_502af1;
L_502ad2: /* 502ad2: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 502ad5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502ad7: je 0x502add */
  if (zf) goto L_502add;
L_502ad9: /* 502ad9: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 502adb: jmp 0x502ae2 */
  goto L_502ae2;
L_502add: /* 502add: mov ebx, 0x5ed66c */
  ebx = 0x5ed66cu;
L_502ae2: /* 502ae2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 502ae4: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 502ae6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502ae7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 502ae8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 502ae9: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x502aeeu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 502aee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_502af1: /* 502af1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 502af2: mov eax, esi */
  eax = esi;
/* 502af4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 502af5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 502af6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_502b60(void) {
  LOAD_REGS();
L_502b60: /* 502b60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 502b61: mov esi, ecx */
  esi = ecx;
/* 502b63: call 0x4e2a1d */
  esp -= 4; W32(esp, 0x502b68u); SPILL(); f_4e2a1d(); if (g_unwind) return; RELOAD();
/* 502b68: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 502b6d: je 0x502b7d */
  if (zf) goto L_502b7d;
L_502b6f: /* 502b6f: push 0x52c */
  { uint32_t v = 0x52cu; esp -= 4; W32(esp, v); }
/* 502b74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 502b75: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x502b7au); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 502b7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_502b7d: /* 502b7d: mov eax, esi */
  eax = esi;
/* 502b7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 502b80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_502ba0(void) {
  LOAD_REGS();
L_502ba0: /* 502ba0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 502ba1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 502ba5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 502ba8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 502ba9: mov esi, ecx */
  esi = ecx;
/* 502bab: je 0x502bde */
  if (zf) goto L_502bde;
L_502bad: /* 502bad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 502bb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 502bb1: push 0x4e2a1d */
  { uint32_t v = 0x4e2a1du; esp -= 4; W32(esp, v); }
/* 502bb6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 502bb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502bba: push 0x52c */
  { uint32_t v = 0x52cu; esp -= 4; W32(esp, v); }
/* 502bbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 502bc0: call 0x554e72 */
  esp -= 4; W32(esp, 0x502bc5u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 502bc5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 502bc8: je 0x502bd6 */
  if (zf) goto L_502bd6;
L_502bca: /* 502bca: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 502bd0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 502bd2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 502bd3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x502bd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_502bd6: /* 502bd6: mov eax, edi */
  eax = edi;
/* 502bd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 502bd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 502bda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 502bdb: ret 4 */
  esp += 8; SPILL(); return;
L_502bde: /* 502bde: mov ecx, esi */
  ecx = esi;
/* 502be0: call 0x4e2a1d */
  esp -= 4; W32(esp, 0x502be5u); SPILL(); f_4e2a1d(); if (g_unwind) return; RELOAD();
/* 502be5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 502be8: je 0x502bf8 */
  if (zf) goto L_502bf8;
L_502bea: /* 502bea: push 0x52c */
  { uint32_t v = 0x52cu; esp -= 4; W32(esp, v); }
/* 502bef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 502bf0: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x502bf5u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 502bf5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_502bf8: /* 502bf8: mov eax, esi */
  eax = esi;
/* 502bfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 502bfb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 502bfc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_502c20(void) {
  LOAD_REGS();
L_502c20: /* 502c20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502c24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502c26: je 0x502c2d */
  if (zf) goto L_502c2d;
L_502c28: /* 502c28: jmp 0x4e2536 */
  SPILL(); f_4e2536(); return;
L_502c2d: /* 502c2d: ret  */
  esp += 4; SPILL(); return;
}

void f_502c40(void) {
  LOAD_REGS();
L_502c40: /* 502c40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502c44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502c46: je 0x502c4d */
  if (zf) goto L_502c4d;
L_502c48: /* 502c48: jmp 0x4e3427 */
  SPILL(); f_4e3427(); return;
L_502c4d: /* 502c4d: ret  */
  esp += 4; SPILL(); return;
}

void f_502c60(void) {
  LOAD_REGS();
L_502c60: /* 502c60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502c64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502c66: je 0x502c6d */
  if (zf) goto L_502c6d;
L_502c68: /* 502c68: jmp 0x4e3a3a */
  SPILL(); f_4e3a3a(); return;
L_502c6d: /* 502c6d: ret  */
  esp += 4; SPILL(); return;
}

void f_502c80(void) {
  LOAD_REGS();
L_502c80: /* 502c80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502c84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502c86: je 0x502c8d */
  if (zf) goto L_502c8d;
L_502c88: /* 502c88: jmp 0x4e2e64 */
  SPILL(); f_4e2e64(); return;
L_502c8d: /* 502c8d: ret  */
  esp += 4; SPILL(); return;
}

void f_502ca0(void) {
  LOAD_REGS();
L_502ca0: /* 502ca0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502ca4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502ca6: je 0x502cad */
  if (zf) goto L_502cad;
L_502ca8: /* 502ca8: jmp 0x4e3a5d */
  SPILL(); f_4e3a5d(); return;
L_502cad: /* 502cad: ret  */
  esp += 4; SPILL(); return;
}

void f_502cc0(void) {
  LOAD_REGS();
L_502cc0: /* 502cc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502cc4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502cc6: je 0x502ccd */
  if (zf) goto L_502ccd;
L_502cc8: /* 502cc8: jmp 0x4e44df */
  SPILL(); f_4e44df(); return;
L_502ccd: /* 502ccd: ret  */
  esp += 4; SPILL(); return;
}

void f_502ce0(void) {
  LOAD_REGS();
L_502ce0: /* 502ce0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502ce4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502ce6: je 0x502ced */
  if (zf) goto L_502ced;
L_502ce8: /* 502ce8: jmp 0x4e268a */
  SPILL(); f_4e268a(); return;
L_502ced: /* 502ced: ret  */
  esp += 4; SPILL(); return;
}

void f_502d00(void) {
  LOAD_REGS();
L_502d00: /* 502d00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502d04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502d06: je 0x502d0d */
  if (zf) goto L_502d0d;
L_502d08: /* 502d08: jmp 0x4e2bad */
  SPILL(); f_4e2bad(); return;
L_502d0d: /* 502d0d: ret  */
  esp += 4; SPILL(); return;
}

void f_502d20(void) {
  LOAD_REGS();
L_502d20: /* 502d20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502d24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502d26: je 0x502d2d */
  if (zf) goto L_502d2d;
L_502d28: /* 502d28: jmp 0x4e193d */
  SPILL(); f_4e193d(); return;
L_502d2d: /* 502d2d: ret  */
  esp += 4; SPILL(); return;
}

void f_502d40(void) {
  LOAD_REGS();
L_502d40: /* 502d40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502d44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502d46: je 0x502d4d */
  if (zf) goto L_502d4d;
L_502d48: /* 502d48: jmp 0x4e3765 */
  SPILL(); f_4e3765(); return;
L_502d4d: /* 502d4d: ret  */
  esp += 4; SPILL(); return;
}

void f_502d60(void) {
  LOAD_REGS();
L_502d60: /* 502d60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502d64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502d66: je 0x502d6d */
  if (zf) goto L_502d6d;
L_502d68: /* 502d68: jmp 0x4e1992 */
  SPILL(); f_4e1992(); return;
L_502d6d: /* 502d6d: ret  */
  esp += 4; SPILL(); return;
}

void f_502d80(void) {
  LOAD_REGS();
L_502d80: /* 502d80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502d84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502d86: je 0x502d8d */
  if (zf) goto L_502d8d;
L_502d88: /* 502d88: jmp 0x4e2cca */
  SPILL(); f_4e2cca(); return;
L_502d8d: /* 502d8d: ret  */
  esp += 4; SPILL(); return;
}

void f_502da0(void) {
  LOAD_REGS();
L_502da0: /* 502da0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502da4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502da6: je 0x502dad */
  if (zf) goto L_502dad;
L_502da8: /* 502da8: jmp 0x4e29b9 */
  SPILL(); f_4e29b9(); return;
L_502dad: /* 502dad: ret  */
  esp += 4; SPILL(); return;
}

void f_502dc0(void) {
  LOAD_REGS();
L_502dc0: /* 502dc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 502dc4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 502dc6: je 0x502dcd */
  if (zf) goto L_502dcd;
L_502dc8: /* 502dc8: jmp 0x4e2766 */
  SPILL(); f_4e2766(); return;
L_502dcd: /* 502dcd: ret  */
  esp += 4; SPILL(); return;
}

void f_502de0(void) {
  LOAD_REGS();
L_502de0: /* 502de0: jmp 0x4e1366 */
  SPILL(); f_4e1366(); return;
}

void f_502e00(void) {
  LOAD_REGS();
L_502e00: /* 502e00: jmp 0x4e2775 */
  SPILL(); f_4e2775(); return;
}

void f_502e20(void) {
  LOAD_REGS();
L_502e20: /* 502e20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 502e24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 502e25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502e26: mov esi, ecx */
  esi = ecx;
/* 502e28: call 0x4e3319 */
  esp -= 4; W32(esp, 0x502e2du); SPILL(); f_4e3319(); if (g_unwind) return; RELOAD();
/* 502e2d: mov eax, esi */
  eax = esi;
/* 502e2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 502e30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_502e50(void) {
  LOAD_REGS();
L_502e50: /* 502e50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 502e54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 502e55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502e56: mov esi, ecx */
  esi = ecx;
/* 502e58: call 0x4e1366 */
  esp -= 4; W32(esp, 0x502e5du); SPILL(); f_4e1366(); if (g_unwind) return; RELOAD();
/* 502e5d: mov eax, esi */
  eax = esi;
/* 502e5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 502e60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_502e80(void) {
  LOAD_REGS();
L_502e80: /* 502e80: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 502e83: jmp 0x4e3bd9 */
  SPILL(); f_4e3bd9(); return;
}

void f_502ea0(void) {
  LOAD_REGS();
L_502ea0: /* 502ea0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 502ea4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 502ea5: mov esi, ecx */
  esi = ecx;
/* 502ea7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 502ea9: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 502eab: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 502eae: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 502eb1: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 502eb4: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 502eb7: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 502eba: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 502ebd: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 502ec0: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 502ec3: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 502ec6: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 502ec9: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 502ecc: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 502ecf: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 502ed2: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 502ed5: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 502ed8: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 502edb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 502edc: lea edx, [eax + 0x24] */
  edx = (uint32_t)(eax + 0x24u);
/* 502edf: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 502ee1: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 502ee4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 502ee6: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 502ee9: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 502eec: mov edi, dword ptr [edx + 8] */
  edi = R32((uint32_t)(edx + 0x8u));
/* 502eef: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 502ef2: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 502ef5: add eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 502ef8: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 502efb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502efc: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 502eff: call 0x4e350d */
  esp -= 4; W32(esp, 0x502f04u); SPILL(); f_4e350d(); if (g_unwind) return; RELOAD();
/* 502f04: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 502f05: mov eax, esi */
  eax = esi;
/* 502f07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 502f08: ret 4 */
  esp += 8; SPILL(); return;
}

void f_502f30(void) {
  LOAD_REGS();
L_502f30: /* 502f30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 502f34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 502f35: mov esi, ecx */
  esi = ecx;
/* 502f37: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 502f39: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 502f3b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 502f3e: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 502f41: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 502f44: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 502f47: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 502f4a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 502f4d: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 502f50: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 502f53: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 502f56: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 502f59: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 502f5c: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 502f5f: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 502f62: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 502f65: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 502f68: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 502f6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 502f6c: lea edx, [eax + 0x24] */
  edx = (uint32_t)(eax + 0x24u);
/* 502f6f: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 502f71: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 502f74: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 502f76: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 502f79: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 502f7c: mov edi, dword ptr [edx + 8] */
  edi = R32((uint32_t)(edx + 0x8u));
/* 502f7f: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 502f82: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 502f85: add eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 502f88: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 502f8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502f8c: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 502f8f: call 0x4e31ac */
  esp -= 4; W32(esp, 0x502f94u); SPILL(); f_4e31ac(); if (g_unwind) return; RELOAD();
/* 502f94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 502f95: mov eax, esi */
  eax = esi;
/* 502f97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 502f98: ret 4 */
  esp += 8; SPILL(); return;
}

void f_502fc0(void) {
  LOAD_REGS();
L_502fc0: /* 502fc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 502fc2: push 0x5564f5 */
  { uint32_t v = 0x5564f5u; esp -= 4; W32(esp, v); }
/* 502fc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 502fcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 502fce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 502fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 502fd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 502fd7: mov esi, ecx */
  esi = ecx;
/* 502fd9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 502fdd: mov dword ptr [esi], 0x56a990 */
  W32((uint32_t)(esi), 0x56a990u);
/* 502fe3: mov dword ptr [esp + 0x10], 5 */
  W32((uint32_t)(esp + 0x10u), 0x5u);
/* 502feb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x502ff0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 502ff0: lea ecx, [esi + 0x94] */
  ecx = (uint32_t)(esi + 0x94u);
/* 502ff6: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 502ffb: call 0x4e1217 */
  esp -= 4; W32(esp, 0x503000u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 503000: lea ecx, [esi + 0x84] */
  ecx = (uint32_t)(esi + 0x84u);
/* 503006: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 50300b: call 0x4e322e */
  esp -= 4; W32(esp, 0x503010u); SPILL(); f_4e322e(); if (g_unwind) return; RELOAD();
/* 503010: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* 503013: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 503018: call 0x4e2234 */
  esp -= 4; W32(esp, 0x50301du); SPILL(); f_4e2234(); if (g_unwind) return; RELOAD();
/* 50301d: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 503020: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 503025: call 0x4e2892 */
  esp -= 4; W32(esp, 0x50302au); SPILL(); f_4e2892(); if (g_unwind) return; RELOAD();
/* 50302a: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 50302d: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 503032: call 0x4e3bd9 */
  esp -= 4; W32(esp, 0x503037u); SPILL(); f_4e3bd9(); if (g_unwind) return; RELOAD();
/* 503037: mov ecx, esi */
  ecx = esi;
/* 503039: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 503041: call 0x4e2e55 */
  esp -= 4; W32(esp, 0x503046u); SPILL(); f_4e2e55(); if (g_unwind) return; RELOAD();
/* 503046: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50304a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50304b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 503052: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 503055: ret  */
  esp += 4; SPILL(); return;
}

void f_503090(void) {
  LOAD_REGS();
L_503090: /* 503090: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 503092: push 0x556528 */
  { uint32_t v = 0x556528u; esp -= 4; W32(esp, v); }
/* 503097: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50309d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50309e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5030a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5030a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5030a7: mov esi, ecx */
  esi = ecx;
/* 5030a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5030aa: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 5030ae: call 0x4e245a */
  esp -= 4; W32(esp, 0x5030b3u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 5030b3: xor edi, edi */
  edi = 0;
/* 5030b5: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 5030b8: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 5030bc: mov dword ptr [esi], 0x56a990 */
  W32((uint32_t)(esi), 0x56a990u);
/* 5030c2: call 0x4e18de */
  esp -= 4; W32(esp, 0x5030c7u); SPILL(); f_4e18de(); if (g_unwind) return; RELOAD();
/* 5030c7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5030cb: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* 5030ce: mov dword ptr [esi + 0x70], edi */
  W32((uint32_t)(esi + 0x70u), edi);
/* 5030d1: mov dword ptr [esi + 0x74], edi */
  W32((uint32_t)(esi + 0x74u), edi);
/* 5030d4: mov dword ptr [esi + 0x78], edi */
  W32((uint32_t)(esi + 0x78u), edi);
/* 5030d7: mov dword ptr [esi + 0x7c], edi */
  W32((uint32_t)(esi + 0x7cu), edi);
/* 5030da: mov dword ptr [esi + 0x80], edi */
  W32((uint32_t)(esi + 0x80u), edi);
/* 5030e0: mov dword ptr [esi + 0x84], edi */
  W32((uint32_t)(esi + 0x84u), edi);
/* 5030e6: mov dword ptr [esi + 0x88], edi */
  W32((uint32_t)(esi + 0x88u), edi);
/* 5030ec: mov dword ptr [esi + 0x8c], edi */
  W32((uint32_t)(esi + 0x8cu), edi);
/* 5030f2: mov dword ptr [esi + 0x94], edi */
  W32((uint32_t)(esi + 0x94u), edi);
/* 5030f8: mov dword ptr [esi + 0x98], edi */
  W32((uint32_t)(esi + 0x98u), edi);
/* 5030fe: mov dword ptr [esi + 0x9c], edi */
  W32((uint32_t)(esi + 0x9cu), edi);
/* 503104: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 503105: mov eax, esi */
  eax = esi;
/* 503107: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 503108: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50310f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 503112: ret  */
  esp += 4; SPILL(); return;
}

void f_503150(void) {
  LOAD_REGS();
L_503150: /* 503150: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 503152: push 0x556577 */
  { uint32_t v = 0x556577u; esp -= 4; W32(esp, v); }
/* 503157: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50315d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50315e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 503165: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503166: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503167: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503168: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 50316c: mov esi, ecx */
  esi = ecx;
/* 50316e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50316f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 503173: call 0x4e1078 */
  esp -= 4; W32(esp, 0x503178u); SPILL(); f_4e1078(); if (g_unwind) return; RELOAD();
/* 503178: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 50317b: mov dword ptr [esi], 0x56a990 */
  W32((uint32_t)(esi), 0x56a990u);
/* 503181: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 503184: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503185: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 503188: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 503190: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 503193: call 0x4e1497 */
  esp -= 4; W32(esp, 0x503198u); SPILL(); f_4e1497(); if (g_unwind) return; RELOAD();
/* 503198: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 50319b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50319c: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 50319f: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 5031a4: call 0x4e3c3d */
  esp -= 4; W32(esp, 0x5031a9u); SPILL(); f_4e3c3d(); if (g_unwind) return; RELOAD();
/* 5031a9: lea eax, [edi + 0x78] */
  eax = (uint32_t)(edi + 0x78u);
/* 5031ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5031ad: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* 5031b0: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 5031b5: call 0x4e4098 */
  esp -= 4; W32(esp, 0x5031bau); SPILL(); f_4e4098(); if (g_unwind) return; RELOAD();
/* 5031ba: lea ecx, [edi + 0x84] */
  ecx = (uint32_t)(edi + 0x84u);
/* 5031c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5031c1: lea ecx, [esi + 0x84] */
  ecx = (uint32_t)(esi + 0x84u);
/* 5031c7: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 5031cc: call 0x4e2446 */
  esp -= 4; W32(esp, 0x5031d1u); SPILL(); f_4e2446(); if (g_unwind) return; RELOAD();
/* 5031d1: mov edx, dword ptr [edi + 0x90] */
  edx = R32((uint32_t)(edi + 0x90u));
/* 5031d7: lea eax, [edi + 0x94] */
  eax = (uint32_t)(edi + 0x94u);
/* 5031dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5031de: lea ecx, [esi + 0x94] */
  ecx = (uint32_t)(esi + 0x94u);
/* 5031e4: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 5031e9: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* 5031ef: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x5031f4u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 5031f4: mov ecx, dword ptr [edi + 0xa0] */
  ecx = R32((uint32_t)(edi + 0xa0u));
/* 5031fa: mov dword ptr [esi + 0xa0], ecx */
  W32((uint32_t)(esi + 0xa0u), ecx);
/* 503200: add edi, 0xa4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 503206: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 503208: lea edx, [esi + 0xa4] */
  edx = (uint32_t)(esi + 0xa4u);
/* 50320e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 503210: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 503213: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 503216: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 503219: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 50321c: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 50321f: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 503222: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 503226: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 503227: mov eax, esi */
  eax = esi;
/* 503229: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50322a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 503231: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 503234: ret 4 */
  esp += 8; SPILL(); return;
}

void f_503280(void) {
  LOAD_REGS();
L_503280: /* 503280: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 503281: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 503282: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503283: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503284: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 503288: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503289: mov esi, ecx */
  esi = ecx;
/* 50328b: call 0x4e1c67 */
  esp -= 4; W32(esp, 0x503290u); SPILL(); f_4e1c67(); if (g_unwind) return; RELOAD();
/* 503290: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 503293: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 503296: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503297: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 50329a: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 50329d: call 0x4e4291 */
  esp -= 4; W32(esp, 0x5032a2u); SPILL(); f_4e4291(); if (g_unwind) return; RELOAD();
/* 5032a2: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 5032a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5032a6: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 5032a9: call 0x4e3062 */
  esp -= 4; W32(esp, 0x5032aeu); SPILL(); f_4e3062(); if (g_unwind) return; RELOAD();
/* 5032ae: lea eax, [edi + 0x78] */
  eax = (uint32_t)(edi + 0x78u);
/* 5032b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5032b2: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* 5032b5: call 0x4e229d */
  esp -= 4; W32(esp, 0x5032bau); SPILL(); f_4e229d(); if (g_unwind) return; RELOAD();
/* 5032ba: lea ecx, [edi + 0x84] */
  ecx = (uint32_t)(edi + 0x84u);
/* 5032c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5032c1: lea ecx, [esi + 0x84] */
  ecx = (uint32_t)(esi + 0x84u);
/* 5032c7: call 0x4e1faa */
  esp -= 4; W32(esp, 0x5032ccu); SPILL(); f_4e1faa(); if (g_unwind) return; RELOAD();
/* 5032cc: mov edx, dword ptr [edi + 0x90] */
  edx = R32((uint32_t)(edi + 0x90u));
/* 5032d2: lea ebp, [edi + 0x94] */
  ebp = (uint32_t)(edi + 0x94u);
/* 5032d8: lea ebx, [esi + 0x94] */
  ebx = (uint32_t)(esi + 0x94u);
/* 5032de: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5032e0: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* 5032e6: je 0x503321 */
  if (zf) goto L_503321;
L_5032e8: /* 5032e8: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 5032eb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5032ed: mov ecx, ebx */
  ecx = ebx;
/* 5032ef: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 5032f2: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 5032f5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5032fau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5032fa: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 5032fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5032ff: je 0x503321 */
  if (zf) goto L_503321;
L_503301: /* 503301: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 503304: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 503306: je 0x50330d */
  if (zf) goto L_50330d;
L_503308: /* 503308: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 50330b: jmp 0x503312 */
  goto L_503312;
L_50330d: /* 50330d: mov ebp, 0x5ed66c */
  ebp = 0x5ed66cu;
L_503312: /* 503312: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 503314: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 503316: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 503317: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 503318: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503319: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x50331eu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 50331e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_503321: /* 503321: mov edx, dword ptr [edi + 0xa0] */
  edx = R32((uint32_t)(edi + 0xa0u));
/* 503327: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 50332d: lea eax, [esi + 0xa4] */
  eax = (uint32_t)(esi + 0xa4u);
/* 503333: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 503335: mov ecx, 0x10 */
  ecx = 0x10u;
/* 50333a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_503340: /* 503340: mov dl, byte ptr [edi + eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax))) & 0xffu);
/* 503343: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 503345: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 503346: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 503347: jne 0x503340 */
  if (!zf) goto L_503340;
L_503349: /* 503349: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50334a: mov eax, esi */
  eax = esi;
/* 50334c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50334d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50334e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50334f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5033a0(void) {
  LOAD_REGS();
L_5033a0: /* 5033a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5033a1: mov esi, ecx */
  esi = ecx;
/* 5033a3: call 0x4e25ea */
  esp -= 4; W32(esp, 0x5033a8u); SPILL(); f_4e25ea(); if (g_unwind) return; RELOAD();
/* 5033a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5033ad: je 0x5033bd */
  if (zf) goto L_5033bd;
L_5033af: /* 5033af: push 0xb4 */
  { uint32_t v = 0xb4u; esp -= 4; W32(esp, v); }
/* 5033b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5033b5: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x5033bau); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 5033ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5033bd: /* 5033bd: mov eax, esi */
  eax = esi;
/* 5033bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5033c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5033e0(void) {
  LOAD_REGS();
L_5033e0: /* 5033e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5033e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 5033e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5033e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5033e9: mov esi, ecx */
  esi = ecx;
/* 5033eb: je 0x50341e */
  if (zf) goto L_50341e;
L_5033ed: /* 5033ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 5033f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5033f1: push 0x4e25ea */
  { uint32_t v = 0x4e25eau; esp -= 4; W32(esp, v); }
/* 5033f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 5033f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5033fa: push 0xb4 */
  { uint32_t v = 0xb4u; esp -= 4; W32(esp, v); }
/* 5033ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503400: call 0x554e72 */
  esp -= 4; W32(esp, 0x503405u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 503405: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 503408: je 0x503416 */
  if (zf) goto L_503416;
L_50340a: /* 50340a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 503410: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 503412: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503413: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x503416u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_503416: /* 503416: mov eax, edi */
  eax = edi;
/* 503418: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 503419: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50341a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50341b: ret 4 */
  esp += 8; SPILL(); return;
L_50341e: /* 50341e: mov ecx, esi */
  ecx = esi;
/* 503420: call 0x4e25ea */
  esp -= 4; W32(esp, 0x503425u); SPILL(); f_4e25ea(); if (g_unwind) return; RELOAD();
/* 503425: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 503428: je 0x503438 */
  if (zf) goto L_503438;
L_50342a: /* 50342a: push 0xb4 */
  { uint32_t v = 0xb4u; esp -= 4; W32(esp, v); }
/* 50342f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503430: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x503435u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 503435: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_503438: /* 503438: mov eax, esi */
  eax = esi;
/* 50343a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50343b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50343c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_503460(void) {
  LOAD_REGS();
L_503460: /* 503460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503461: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503462: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 503466: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503467: mov esi, ecx */
  esi = ecx;
/* 503469: call 0x4e13a7 */
  esp -= 4; W32(esp, 0x50346eu); SPILL(); f_4e13a7(); if (g_unwind) return; RELOAD();
/* 50346e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 503471: mov ecx, esi */
  ecx = esi;
/* 503473: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 503476: call 0x4e2c07 */
  esp -= 4; W32(esp, 0x50347bu); SPILL(); f_4e2c07(); if (g_unwind) return; RELOAD();
/* 50347b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50347c: mov eax, esi */
  eax = esi;
/* 50347e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50347f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5034a0(void) {
  LOAD_REGS();
L_5034a0: /* 5034a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5034a2: push 0x5565a8 */
  { uint32_t v = 0x5565a8u; esp -= 4; W32(esp, v); }
/* 5034a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5034ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5034ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5034b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5034b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5034b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5034b8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 5034bc: mov esi, ecx */
  esi = ecx;
/* 5034be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5034bf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 5034c3: call 0x4e1fc8 */
  esp -= 4; W32(esp, 0x5034c8u); SPILL(); f_4e1fc8(); if (g_unwind) return; RELOAD();
/* 5034c8: xor eax, eax */
  eax = 0;
/* 5034ca: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 5034ce: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5034d1: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 5034d4: mov ecx, esi */
  ecx = esi;
/* 5034d6: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 5034d9: call 0x4e2c07 */
  esp -= 4; W32(esp, 0x5034deu); SPILL(); f_4e2c07(); if (g_unwind) return; RELOAD();
/* 5034de: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5034e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5034e3: mov eax, esi */
  eax = esi;
/* 5034e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5034e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5034ed: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5034f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_503520(void) {
  LOAD_REGS();
L_503520: /* 503520: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 503522: push 0x5565c8 */
  { uint32_t v = 0x5565c8u; esp -= 4; W32(esp, v); }
/* 503527: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50352d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50352e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 503535: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503536: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503537: mov esi, ecx */
  esi = ecx;
/* 503539: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 50353d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 503540: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 503542: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 50354a: je 0x503558 */
  if (zf) goto L_503558;
L_50354c: /* 50354c: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 503552: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 503554: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 503555: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x503558u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_503558: /* 503558: mov ecx, esi */
  ecx = esi;
/* 50355a: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 503561: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 503568: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 503570: call 0x4e2f4a */
  esp -= 4; W32(esp, 0x503575u); SPILL(); f_4e2f4a(); if (g_unwind) return; RELOAD();
/* 503575: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 503579: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50357a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 503581: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 503584: ret  */
  esp += 4; SPILL(); return;
}

void f_5035b0(void) {
  LOAD_REGS();
L_5035b0: /* 5035b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5035b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5035b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 5035b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5035b7: mov esi, ecx */
  esi = ecx;
/* 5035b9: call 0x4e28d8 */
  esp -= 4; W32(esp, 0x5035beu); SPILL(); f_4e28d8(); if (g_unwind) return; RELOAD();
/* 5035be: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 5035c1: mov ecx, esi */
  ecx = esi;
/* 5035c3: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 5035c6: call 0x4e2455 */
  esp -= 4; W32(esp, 0x5035cbu); SPILL(); f_4e2455(); if (g_unwind) return; RELOAD();
/* 5035cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5035cc: mov eax, esi */
  eax = esi;
/* 5035ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5035cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5035f0(void) {
  LOAD_REGS();
L_5035f0: /* 5035f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5035f2: push 0x5565e8 */
  { uint32_t v = 0x5565e8u; esp -= 4; W32(esp, v); }
/* 5035f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5035fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5035fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 503605: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503606: xor eax, eax */
  eax = 0;
/* 503608: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503609: mov esi, ecx */
  esi = ecx;
/* 50360b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 50360f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 503611: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 503614: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 503617: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 50361b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 50361e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 503625: call 0x4e2455 */
  esp -= 4; W32(esp, 0x50362au); SPILL(); f_4e2455(); if (g_unwind) return; RELOAD();
/* 50362a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50362e: mov eax, esi */
  eax = esi;
/* 503630: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 503631: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 503638: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50363b: ret  */
  esp += 4; SPILL(); return;
}

void f_503660(void) {
  LOAD_REGS();
L_503660: /* 503660: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 503662: push 0x556608 */
  { uint32_t v = 0x556608u; esp -= 4; W32(esp, v); }
/* 503667: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50366d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50366e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 503675: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503676: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503677: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503678: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 50367c: mov esi, ecx */
  esi = ecx;
/* 50367e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50367f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 503683: call 0x4e3fd5 */
  esp -= 4; W32(esp, 0x503688u); SPILL(); f_4e3fd5(); if (g_unwind) return; RELOAD();
/* 503688: xor eax, eax */
  eax = 0;
/* 50368a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 50368e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 503691: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 503694: mov ecx, esi */
  ecx = esi;
/* 503696: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 503699: call 0x4e2455 */
  esp -= 4; W32(esp, 0x50369eu); SPILL(); f_4e2455(); if (g_unwind) return; RELOAD();
/* 50369e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5036a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5036a3: mov eax, esi */
  eax = esi;
/* 5036a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5036a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5036ad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5036b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5036e0(void) {
  LOAD_REGS();
L_5036e0: /* 5036e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5036e2: push 0x556628 */
  { uint32_t v = 0x556628u; esp -= 4; W32(esp, v); }
/* 5036e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5036ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5036ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5036f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5036f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5036f7: mov esi, ecx */
  esi = ecx;
/* 5036f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 5036fd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 503700: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 503702: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 50370a: je 0x503718 */
  if (zf) goto L_503718;
L_50370c: /* 50370c: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 503712: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 503714: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 503715: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x503718u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_503718: /* 503718: mov ecx, esi */
  ecx = esi;
/* 50371a: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 503721: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 503728: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 503730: call 0x4e1bef */
  esp -= 4; W32(esp, 0x503735u); SPILL(); f_4e1bef(); if (g_unwind) return; RELOAD();
/* 503735: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 503739: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50373a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 503741: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 503744: ret  */
  esp += 4; SPILL(); return;
}

void f_503770(void) {
  LOAD_REGS();
L_503770: /* 503770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503771: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503772: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 503776: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503777: mov esi, ecx */
  esi = ecx;
/* 503779: call 0x4e394a */
  esp -= 4; W32(esp, 0x50377eu); SPILL(); f_4e394a(); if (g_unwind) return; RELOAD();
/* 50377e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 503781: mov ecx, esi */
  ecx = esi;
/* 503783: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 503786: call 0x4e3053 */
  esp -= 4; W32(esp, 0x50378bu); SPILL(); f_4e3053(); if (g_unwind) return; RELOAD();
/* 50378b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50378c: mov eax, esi */
  eax = esi;
/* 50378e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50378f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5037b0(void) {
  LOAD_REGS();
L_5037b0: /* 5037b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5037b2: push 0x556648 */
  { uint32_t v = 0x556648u; esp -= 4; W32(esp, v); }
/* 5037b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5037bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5037be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5037c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5037c6: xor eax, eax */
  eax = 0;
/* 5037c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5037c9: mov esi, ecx */
  esi = ecx;
/* 5037cb: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 5037cf: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 5037d1: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 5037d4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5037d7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 5037db: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5037de: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 5037e5: call 0x4e3053 */
  esp -= 4; W32(esp, 0x5037eau); SPILL(); f_4e3053(); if (g_unwind) return; RELOAD();
/* 5037ea: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5037ee: mov eax, esi */
  eax = esi;
/* 5037f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5037f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5037f8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5037fb: ret  */
  esp += 4; SPILL(); return;
}

void f_503820(void) {
  LOAD_REGS();
L_503820: /* 503820: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 503822: push 0x556668 */
  { uint32_t v = 0x556668u; esp -= 4; W32(esp, v); }
/* 503827: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50382d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50382e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 503835: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503836: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503837: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503838: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 50383c: mov esi, ecx */
  esi = ecx;
/* 50383e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50383f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 503843: call 0x4e1947 */
  esp -= 4; W32(esp, 0x503848u); SPILL(); f_4e1947(); if (g_unwind) return; RELOAD();
/* 503848: xor eax, eax */
  eax = 0;
/* 50384a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 50384e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 503851: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 503854: mov ecx, esi */
  ecx = esi;
/* 503856: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 503859: call 0x4e3053 */
  esp -= 4; W32(esp, 0x50385eu); SPILL(); f_4e3053(); if (g_unwind) return; RELOAD();
/* 50385e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 503862: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 503863: mov eax, esi */
  eax = esi;
/* 503865: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 503866: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50386d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 503870: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5038a0(void) {
  LOAD_REGS();
L_5038a0: /* 5038a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5038a2: push 0x556688 */
  { uint32_t v = 0x556688u; esp -= 4; W32(esp, v); }
/* 5038a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5038ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5038ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5038b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5038b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5038b7: mov esi, ecx */
  esi = ecx;
/* 5038b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 5038bd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5038c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5038c2: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 5038ca: je 0x5038d8 */
  if (zf) goto L_5038d8;
L_5038cc: /* 5038cc: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5038d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5038d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5038d5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5038d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5038d8: /* 5038d8: mov ecx, esi */
  ecx = esi;
/* 5038da: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 5038e1: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 5038e8: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 5038f0: call 0x4e245f */
  esp -= 4; W32(esp, 0x5038f5u); SPILL(); f_4e245f(); if (g_unwind) return; RELOAD();
/* 5038f5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5038f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5038fa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 503901: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 503904: ret  */
  esp += 4; SPILL(); return;
}

void f_503930(void) {
  LOAD_REGS();
L_503930: /* 503930: mov eax, ecx */
  eax = ecx;
/* 503932: ret  */
  esp += 4; SPILL(); return;
}

void f_503950(void) {
  LOAD_REGS();
L_503950: /* 503950: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 503951: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 503955: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 503957: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 503958: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503959: mov ebp, ecx */
  ebp = ecx;
/* 50395b: jge 0x503974 */
  if ((sf == of)) goto L_503974;
L_50395d: /* 50395d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 503962: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 503967: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 50396c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x503971u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 503971: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_503974: /* 503974: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 503977: jle 0x503990 */
  if ((zf || sf != of)) goto L_503990;
L_503979: /* 503979: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 50397e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 503983: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 503988: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50398du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50398d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_503990: /* 503990: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 503994: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 503997: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50399a: jle 0x5039b3 */
  if ((zf || sf != of)) goto L_5039b3;
L_50399c: /* 50399c: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 5039a1: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5039a6: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 5039ab: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5039b0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5039b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5039b3: /* 5039b3: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5039b5: jge 0x5039d1 */
  if ((sf == of)) goto L_5039d1;
L_5039b7: /* 5039b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5039b8: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 5039bb: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 5039be: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_5039c0: /* 5039c0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 5039c3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5039c5: call 0x4e1217 */
  esp -= 4; W32(esp, 0x5039cau); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 5039ca: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 5039cd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 5039ce: jne 0x5039c0 */
  if (!zf) goto L_5039c0;
L_5039d0: /* 5039d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_5039d1: /* 5039d1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 5039d5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5039d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5039d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5039d9: mov ecx, ebp */
  ecx = ebp;
/* 5039db: call 0x4e438b */
  esp -= 4; W32(esp, 0x5039e0u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5039e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5039e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5039e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5039e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_503a20(void) {
  LOAD_REGS();
L_503a20: /* 503a20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503a21: mov esi, ecx */
  esi = ecx;
/* 503a23: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 503a26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503a27: xor edi, edi */
  edi = 0;
/* 503a29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 503a2b: jle 0x503a45 */
  if ((zf || sf != of)) goto L_503a45;
L_503a2d: /* 503a2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 503a2e: xor ebx, ebx */
  ebx = 0;
L_503a30: /* 503a30: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 503a32: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 503a34: call 0x4e1217 */
  esp -= 4; W32(esp, 0x503a39u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 503a39: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 503a3c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 503a3d: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 503a40: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 503a42: jl 0x503a30 */
  if ((sf != of)) goto L_503a30;
L_503a44: /* 503a44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_503a45: /* 503a45: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 503a49: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 503a4b: mov ecx, esi */
  ecx = esi;
/* 503a4d: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 503a54: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 503a57: call 0x4e4502 */
  esp -= 4; W32(esp, 0x503a5cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 503a5c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 503a5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 503a5e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_503a90(void) {
  LOAD_REGS();
L_503a90: /* 503a90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 503a91: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 503a95: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 503a97: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 503a98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503a99: mov ebp, ecx */
  ebp = ecx;
/* 503a9b: jge 0x503ab4 */
  if ((sf == of)) goto L_503ab4;
L_503a9d: /* 503a9d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 503aa2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 503aa7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 503aac: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x503ab1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 503ab1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_503ab4: /* 503ab4: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 503ab7: jle 0x503ad0 */
  if ((zf || sf != of)) goto L_503ad0;
L_503ab9: /* 503ab9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 503abe: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 503ac3: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 503ac8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x503acdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 503acd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_503ad0: /* 503ad0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 503ad4: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 503ad7: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 503ada: jle 0x503af3 */
  if ((zf || sf != of)) goto L_503af3;
L_503adc: /* 503adc: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 503ae1: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 503ae6: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 503aeb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x503af0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 503af0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_503af3: /* 503af3: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 503af5: jge 0x503b11 */
  if ((sf == of)) goto L_503b11;
L_503af7: /* 503af7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503af8: lea esi, [ebx + ebx*8] */
  esi = (uint32_t)(ebx + ebx*8);
/* 503afb: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 503afe: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_503b00: /* 503b00: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 503b03: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 503b05: call 0x4e4057 */
  esp -= 4; W32(esp, 0x503b0au); SPILL(); f_4e4057(); if (g_unwind) return; RELOAD();
/* 503b0a: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 503b0d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 503b0e: jne 0x503b00 */
  if (!zf) goto L_503b00;
L_503b10: /* 503b10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_503b11: /* 503b11: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 503b15: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 503b17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503b18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 503b19: mov ecx, ebp */
  ecx = ebp;
/* 503b1b: call 0x4e438b */
  esp -= 4; W32(esp, 0x503b20u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 503b20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 503b21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 503b22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 503b23: ret 8 */
  esp += 12; SPILL(); return;
}

void f_503b60(void) {
  LOAD_REGS();
L_503b60: /* 503b60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503b61: mov esi, ecx */
  esi = ecx;
/* 503b63: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 503b66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503b67: xor edi, edi */
  edi = 0;
/* 503b69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 503b6b: jle 0x503b85 */
  if ((zf || sf != of)) goto L_503b85;
L_503b6d: /* 503b6d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 503b6e: xor ebx, ebx */
  ebx = 0;
L_503b70: /* 503b70: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 503b72: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 503b74: call 0x4e4057 */
  esp -= 4; W32(esp, 0x503b79u); SPILL(); f_4e4057(); if (g_unwind) return; RELOAD();
/* 503b79: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 503b7c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 503b7d: add ebx, 0x48 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 503b80: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 503b82: jl 0x503b70 */
  if ((sf != of)) goto L_503b70;
L_503b84: /* 503b84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_503b85: /* 503b85: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 503b89: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 503b8b: mov ecx, esi */
  ecx = esi;
/* 503b8d: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 503b94: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 503b97: call 0x4e4502 */
  esp -= 4; W32(esp, 0x503b9cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 503b9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 503b9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 503b9e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_503bd0(void) {
  LOAD_REGS();
L_503bd0: /* 503bd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 503bd1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 503bd5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 503bd7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 503bd8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503bd9: mov ebp, ecx */
  ebp = ecx;
/* 503bdb: jge 0x503bf4 */
  if ((sf == of)) goto L_503bf4;
L_503bdd: /* 503bdd: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 503be2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 503be7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 503bec: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x503bf1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 503bf1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_503bf4: /* 503bf4: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 503bf7: jle 0x503c10 */
  if ((zf || sf != of)) goto L_503c10;
L_503bf9: /* 503bf9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 503bfe: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 503c03: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 503c08: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x503c0du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 503c0d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_503c10: /* 503c10: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 503c14: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 503c17: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 503c1a: jle 0x503c33 */
  if ((zf || sf != of)) goto L_503c33;
L_503c1c: /* 503c1c: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 503c21: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 503c26: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 503c2b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x503c30u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 503c30: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_503c33: /* 503c33: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 503c35: jge 0x503c51 */
  if ((sf == of)) goto L_503c51;
L_503c37: /* 503c37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503c38: mov esi, ebx */
  esi = ebx;
/* 503c3a: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 503c3d: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 503c3f: nop  */
L_503c40: /* 503c40: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 503c43: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 503c45: call 0x4e1f05 */
  esp -= 4; W32(esp, 0x503c4au); SPILL(); f_4e1f05(); if (g_unwind) return; RELOAD();
/* 503c4a: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 503c4d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 503c4e: jne 0x503c40 */
  if (!zf) goto L_503c40;
L_503c50: /* 503c50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_503c51: /* 503c51: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 503c55: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 503c57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503c58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 503c59: mov ecx, ebp */
  ecx = ebp;
/* 503c5b: call 0x4e438b */
  esp -= 4; W32(esp, 0x503c60u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 503c60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 503c61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 503c62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 503c63: ret 8 */
  esp += 12; SPILL(); return;
}

void f_503ca0(void) {
  LOAD_REGS();
L_503ca0: /* 503ca0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 503ca1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503ca2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503ca3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 503ca7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 503ca8: mov esi, ecx */
  esi = ecx;
/* 503caa: call 0x4e3210 */
  esp -= 4; W32(esp, 0x503cafu); SPILL(); f_4e3210(); if (g_unwind) return; RELOAD();
/* 503caf: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 503cb2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 503cb5: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 503cb8: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 503cbb: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 503cbe: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 503cc1: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 503cc4: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 503cc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503cc8: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 503ccb: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 503cce: call 0x4e3017 */
  esp -= 4; W32(esp, 0x503cd3u); SPILL(); f_4e3017(); if (g_unwind) return; RELOAD();
/* 503cd3: lea ebx, [edi + 0x28] */
  ebx = (uint32_t)(edi + 0x28u);
/* 503cd6: lea edi, [esi + 0x28] */
  edi = (uint32_t)(esi + 0x28u);
/* 503cd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 503cda: mov ecx, edi */
  ecx = edi;
/* 503cdc: call 0x4e13a7 */
  esp -= 4; W32(esp, 0x503ce1u); SPILL(); f_4e13a7(); if (g_unwind) return; RELOAD();
/* 503ce1: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 503ce4: mov ecx, edi */
  ecx = edi;
/* 503ce6: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 503ce9: call 0x4e2c07 */
  esp -= 4; W32(esp, 0x503ceeu); SPILL(); f_4e2c07(); if (g_unwind) return; RELOAD();
/* 503cee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 503cef: mov eax, esi */
  eax = esi;
/* 503cf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 503cf2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 503cf3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_503d20(void) {
  LOAD_REGS();
L_503d20: /* 503d20: jmp 0x4e2801 */
  SPILL(); f_4e2801(); return;
}

void f_503d40(void) {
  LOAD_REGS();
L_503d40: /* 503d40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 503d44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503d45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 503d46: mov esi, ecx */
  esi = ecx;
/* 503d48: call 0x4e1663 */
  esp -= 4; W32(esp, 0x503d4du); SPILL(); f_4e1663(); if (g_unwind) return; RELOAD();
/* 503d4d: mov eax, esi */
  eax = esi;
/* 503d4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 503d50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_503d70(void) {
  LOAD_REGS();
L_503d70: /* 503d70: jmp 0x4e1145 */
  SPILL(); f_4e1145(); return;
}

void f_503d90(void) {
  LOAD_REGS();
L_503d90: /* 503d90: jmp 0x4e30d5 */
  SPILL(); f_4e30d5(); return;
}

void f_503db0(void) {
  LOAD_REGS();
L_503db0: /* 503db0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 503db2: push 0x5566a8 */
  { uint32_t v = 0x5566a8u; esp -= 4; W32(esp, v); }
/* 503db7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 503dbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 503dbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 503dc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503dc6: xor eax, eax */
  eax = 0;
/* 503dc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503dc9: mov esi, ecx */
  esi = ecx;
/* 503dcb: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 503dcf: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 503dd1: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 503dd4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 503dd7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 503ddb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 503dde: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 503de5: call 0x4e2455 */
  esp -= 4; W32(esp, 0x503deau); SPILL(); f_4e2455(); if (g_unwind) return; RELOAD();
/* 503dea: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 503dee: mov eax, esi */
  eax = esi;
/* 503df0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 503df1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 503df8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 503dfb: ret  */
  esp += 4; SPILL(); return;
}

void f_503e20(void) {
  LOAD_REGS();
L_503e20: /* 503e20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 503e22: push 0x5566c8 */
  { uint32_t v = 0x5566c8u; esp -= 4; W32(esp, v); }
/* 503e27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 503e2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 503e2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 503e35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 503e36: xor eax, eax */
  eax = 0;
/* 503e38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503e39: mov esi, ecx */
  esi = ecx;
/* 503e3b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 503e3f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 503e41: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 503e44: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 503e47: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 503e4b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 503e4e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 503e55: call 0x4e3053 */
  esp -= 4; W32(esp, 0x503e5au); SPILL(); f_4e3053(); if (g_unwind) return; RELOAD();
/* 503e5a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 503e5e: mov eax, esi */
  eax = esi;
/* 503e60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 503e61: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 503e68: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 503e6b: ret  */
  esp += 4; SPILL(); return;
}

void f_503e90(void) {
  LOAD_REGS();
L_503e90: /* 503e90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 503e94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503e95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 503e96: mov esi, ecx */
  esi = ecx;
/* 503e98: call 0x4e271b */
  esp -= 4; W32(esp, 0x503e9du); SPILL(); f_4e271b(); if (g_unwind) return; RELOAD();
/* 503e9d: mov eax, esi */
  eax = esi;
/* 503e9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 503ea0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_503ec0(void) {
  LOAD_REGS();
L_503ec0: /* 503ec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 503ec4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503ec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 503ec6: mov esi, ecx */
  esi = ecx;
/* 503ec8: call 0x4e3378 */
  esp -= 4; W32(esp, 0x503ecdu); SPILL(); f_4e3378(); if (g_unwind) return; RELOAD();
/* 503ecd: mov eax, esi */
  eax = esi;
/* 503ecf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 503ed0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_503ef0(void) {
  LOAD_REGS();
L_503ef0: /* 503ef0: mov eax, ecx */
  eax = ecx;
/* 503ef2: ret  */
  esp += 4; SPILL(); return;
}

void f_503f10(void) {
  LOAD_REGS();
L_503f10: /* 503f10: jmp 0x4e2775 */
  SPILL(); f_4e2775(); return;
}

void f_503f30(void) {
  LOAD_REGS();
L_503f30: /* 503f30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 503f34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503f35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 503f36: mov esi, ecx */
  esi = ecx;
/* 503f38: call 0x4e3319 */
  esp -= 4; W32(esp, 0x503f3du); SPILL(); f_4e3319(); if (g_unwind) return; RELOAD();
/* 503f3d: mov eax, esi */
  eax = esi;
/* 503f3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 503f40: ret 4 */
  esp += 8; SPILL(); return;
}

void f_503f60(void) {
  LOAD_REGS();
L_503f60: /* 503f60: jmp 0x4e2775 */
  SPILL(); f_4e2775(); return;
}

void f_503f80(void) {
  LOAD_REGS();
L_503f80: /* 503f80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 503f84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 503f85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 503f86: mov esi, ecx */
  esi = ecx;
/* 503f88: call 0x4e3319 */
  esp -= 4; W32(esp, 0x503f8du); SPILL(); f_4e3319(); if (g_unwind) return; RELOAD();
/* 503f8d: mov eax, esi */
  eax = esi;
/* 503f8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 503f90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_503fb0(void) {
  LOAD_REGS();
L_503fb0: /* 503fb0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 503fb4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 503fb6: je 0x503fbd */
  if (zf) goto L_503fbd;
L_503fb8: /* 503fb8: jmp 0x4e12a8 */
  SPILL(); f_4e12a8(); return;
L_503fbd: /* 503fbd: ret  */
  esp += 4; SPILL(); return;
}
