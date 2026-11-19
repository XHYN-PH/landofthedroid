#include "recomp.h"
#include "rec_mod.h"

void f_42ca7e(void) {
  LOAD_REGS();
L_42ca7e: /* 42ca7e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42ca80: push 0x440fc8 */
  { uint32_t v = 0x440fc8u; esp -= 4; W32(esp, v); }
/* 42ca85: call 0x40101f */
  esp -= 4; W32(esp, 0x42ca8au); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42ca8a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42ca8d: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42ca92u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42ca92: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ca93: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42ca97: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42ca9a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42ca9d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42caa0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42caa3: call 0x42c995 */
  esp -= 4; W32(esp, 0x42caa8u); SPILL(); f_42c995(); if (g_unwind) return; RELOAD();
/* 42caa8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42caab: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42caae: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42cab2: call 0x42cac0 */
  esp -= 4; W32(esp, 0x42cab7u); SPILL(); f_42cac0(); if (g_unwind) return; RELOAD();
/* 42cab7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42caba: call 0x40105a */
  esp -= 4; W32(esp, 0x42cabfu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42cabf: ret  */
  esp += 4; SPILL(); return;
}

void f_42cac0(void) {
  LOAD_REGS();
L_42cac0: /* 42cac0: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42cac3: call 0x413925 */
  esp -= 4; W32(esp, 0x42cac8u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42cac8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cac9: ret  */
  esp += 4; SPILL(); return;
}

void f_42caca(void) {
  LOAD_REGS();
L_42caca: /* 42caca: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42cacc: push 0x440fd8 */
  { uint32_t v = 0x440fd8u; esp -= 4; W32(esp, v); }
/* 42cad1: call 0x40101f */
  esp -= 4; W32(esp, 0x42cad6u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42cad6: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 42cad9: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42cadc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42cadd: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42cae2u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42cae2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cae3: xor edi, edi */
  edi = 0;
/* 42cae5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 42cae8: test byte ptr [esi + 0xc], 0x83 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xcu))); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42caec: je 0x42caf5 */
  if (zf) goto L_42caf5;
L_42caee: /* 42caee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42caef: call 0x4143d3 */
  esp -= 4; W32(esp, 0x42caf4u); SPILL(); f_4143d3(); if (g_unwind) return; RELOAD();
/* 42caf4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42caf5: /* 42caf5: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 42caf8: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 42cafa: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 42cafd: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 42cb00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42cb01: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 42cb03: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42cb06: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cb09: call 0x42dae4 */
  esp -= 4; W32(esp, 0x42cb0eu); SPILL(); f_42dae4(); if (g_unwind) return; RELOAD();
/* 42cb0e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42cb11: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42cb14: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42cb18: call 0x42cb26 */
  esp -= 4; W32(esp, 0x42cb1du); SPILL(); f_42cb26(); if (g_unwind) return; RELOAD();
/* 42cb1d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42cb20: call 0x40105a */
  esp -= 4; W32(esp, 0x42cb25u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42cb25: ret  */
  esp += 4; SPILL(); return;
}

void f_42cb26(void) {
  LOAD_REGS();
L_42cb26: /* 42cb26: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42cb29: call 0x413925 */
  esp -= 4; W32(esp, 0x42cb2eu); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42cb2e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cb2f: ret  */
  esp += 4; SPILL(); return;
}

void f_42cb30(void) {
  LOAD_REGS();
L_42cb30: /* 42cb30: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42cb32: push 0x440fe8 */
  { uint32_t v = 0x440fe8u; esp -= 4; W32(esp, v); }
/* 42cb37: call 0x40101f */
  esp -= 4; W32(esp, 0x42cb3cu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42cb3c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cb3f: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42cb44u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42cb44: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cb45: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42cb49: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 42cb4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42cb4d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42cb50: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cb53: call 0x42dc5c */
  esp -= 4; W32(esp, 0x42cb58u); SPILL(); f_42dc5c(); if (g_unwind) return; RELOAD();
/* 42cb58: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42cb5b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42cb5e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42cb62: call 0x42cb70 */
  esp -= 4; W32(esp, 0x42cb67u); SPILL(); f_42cb70(); if (g_unwind) return; RELOAD();
/* 42cb67: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42cb6a: call 0x40105a */
  esp -= 4; W32(esp, 0x42cb6fu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42cb6f: ret  */
  esp += 4; SPILL(); return;
}

void f_42cb70(void) {
  LOAD_REGS();
L_42cb70: /* 42cb70: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cb73: call 0x413925 */
  esp -= 4; W32(esp, 0x42cb78u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42cb78: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cb79: ret  */
  esp += 4; SPILL(); return;
}

void f_42cb7a(void) {
  LOAD_REGS();
L_42cb7a: /* 42cb7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42cb7b: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 42cb7f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42cb82: test al, 0x83 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42cb84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42cb85: je 0x42cbf8 */
  if (zf) goto L_42cbf8;
L_42cb87: /* 42cb87: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 42cb8b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42cb8d: je 0x42cb99 */
  if (zf) goto L_42cb99;
L_42cb8f: /* 42cb8f: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42cb92: je 0x42cb99 */
  if (zf) goto L_42cb99;
L_42cb94: /* 42cb94: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42cb97: jne 0x42cbf8 */
  if (!zf) goto L_42cbf8;
L_42cb99: /* 42cb99: and eax, 0xffffffef */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42cb9c: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42cb9f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42cba2: jne 0x42cbb1 */
  if (!zf) goto L_42cbb1;
L_42cba4: /* 42cba4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42cba5: call 0x42cc6a */
  esp -= 4; W32(esp, 0x42cbaau); SPILL(); f_42cc6a(); if (g_unwind) return; RELOAD();
/* 42cbaa: add dword ptr [esp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 42cbae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cbaf: xor edi, edi */
  edi = 0;
L_42cbb1: /* 42cbb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42cbb2: call 0x404333 */
  esp -= 4; W32(esp, 0x42cbb7u); SPILL(); f_404333(); if (g_unwind) return; RELOAD();
/* 42cbb7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42cbba: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 42cbbc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cbbd: jns 0x42cbc7 */
  if (!sf) goto L_42cbc7;
L_42cbbf: /* 42cbbf: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42cbc2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42cbc5: jmp 0x42cbdb */
  goto L_42cbdb;
L_42cbc7: /* 42cbc7: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42cbc9: je 0x42cbdb */
  if (zf) goto L_42cbdb;
L_42cbcb: /* 42cbcb: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42cbcd: je 0x42cbdb */
  if (zf) goto L_42cbdb;
L_42cbcf: /* 42cbcf: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42cbd2: jne 0x42cbdb */
  if (!zf) goto L_42cbdb;
L_42cbd4: /* 42cbd4: mov dword ptr [esi + 0x18], 0x200 */
  W32((uint32_t)(esi + 0x18u), 0x200u);
L_42cbdb: /* 42cbdb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42cbdc: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42cbe0: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 42cbe3: call 0x415ca2 */
  esp -= 4; W32(esp, 0x42cbe8u); SPILL(); f_415ca2(); if (g_unwind) return; RELOAD();
/* 42cbe8: xor ecx, ecx */
  ecx = 0;
/* 42cbea: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42cbed: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42cbf0: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 42cbf3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 42cbf4: mov eax, ecx */
  eax = ecx;
/* 42cbf6: jmp 0x42cc06 */
  goto L_42cc06;
L_42cbf8: /* 42cbf8: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42cbfdu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42cbfd: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 42cc03: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_42cc06: /* 42cc06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42cc07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42cc08: ret  */
  esp += 4; SPILL(); return;
}

void f_42cc09(void) {
  LOAD_REGS();
L_42cc09: /* 42cc09: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42cc0b: push 0x440ff8 */
  { uint32_t v = 0x440ff8u; esp -= 4; W32(esp, v); }
/* 42cc10: call 0x40101f */
  esp -= 4; W32(esp, 0x42cc15u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42cc15: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cc18: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42cc1du); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42cc1d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cc1e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42cc22: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42cc25: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42cc28: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cc2b: call 0x42cb7a */
  esp -= 4; W32(esp, 0x42cc30u); SPILL(); f_42cb7a(); if (g_unwind) return; RELOAD();
/* 42cc30: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42cc33: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42cc36: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42cc3a: call 0x42cc48 */
  esp -= 4; W32(esp, 0x42cc3fu); SPILL(); f_42cc48(); if (g_unwind) return; RELOAD();
/* 42cc3f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42cc42: call 0x40105a */
  esp -= 4; W32(esp, 0x42cc47u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42cc47: ret  */
  esp += 4; SPILL(); return;
}

void f_42cc48(void) {
  LOAD_REGS();
L_42cc48: /* 42cc48: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cc4b: call 0x413925 */
  esp -= 4; W32(esp, 0x42cc50u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42cc50: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cc51: ret  */
  esp += 4; SPILL(); return;
}

void f_42cc52(void) {
  LOAD_REGS();
L_42cc52: /* 42cc52: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 42cc56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42cc58: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 42cc5b: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 42cc5d: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42cc61: call 0x42f830 */
  esp -= 4; W32(esp, 0x42cc66u); SPILL(); f_42f830(); if (g_unwind) return; RELOAD();
/* 42cc66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42cc69: ret  */
  esp += 4; SPILL(); return;
}

void f_42cc6a(void) {
  LOAD_REGS();
L_42cc6a: /* 42cc6a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42cc6b: mov ebp, esp */
  ebp = esp;
/* 42cc6d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42cc70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42cc71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42cc72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42cc73: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42cc76: mov esi, dword ptr [edi + 0x10] */
  esi = R32((uint32_t)(edi + 0x10u));
/* 42cc79: xor ebx, ebx */
  ebx = 0;
/* 42cc7b: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42cc7e: mov dword ptr [ebp - 0xc], esi */
  W32((uint32_t)(ebp + 0xfffffff4u), esi);
/* 42cc81: jge 0x42cc86 */
  if ((sf == of)) goto L_42cc86;
L_42cc83: /* 42cc83: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
L_42cc86: /* 42cc86: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42cc88: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42cc89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42cc8a: call 0x415ca2 */
  esp -= 4; W32(esp, 0x42cc8fu); SPILL(); f_415ca2(); if (g_unwind) return; RELOAD();
/* 42cc8f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42cc92: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42cc94: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 42cc97: jl 0x42cd07 */
  if ((sf != of)) goto L_42cd07;
L_42cc99: /* 42cc99: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 42cc9c: test cx, 0x108 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x108u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42cca1: jne 0x42ccab */
  if (!zf) goto L_42ccab;
L_42cca3: /* 42cca3: sub eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42cca6: jmp 0x42cdc7 */
  goto L_42cdc7;
L_42ccab: /* 42ccab: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 42ccad: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 42ccb0: mov ebx, eax */
  ebx = eax;
/* 42ccb2: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 42ccb4: test cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42ccb7: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 42ccba: je 0x42ccf8 */
  if (zf) goto L_42ccf8;
L_42ccbc: /* 42ccbc: mov ebx, esi */
  ebx = esi;
/* 42ccbe: mov ecx, esi */
  ecx = esi;
/* 42ccc0: sar ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 42ccc3: mov ebx, dword ptr [ebx*4 + 0x449240] */
  ebx = R32((uint32_t)(ebx*4 + 0x449240u));
/* 42ccca: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 42cccd: lea ecx, [ecx + ecx*8] */
  ecx = (uint32_t)(ecx + ecx*8);
/* 42ccd0: test byte ptr [ebx + ecx*4 + 4], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + ecx*4 + 0x4u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42ccd5: je 0x42ccea */
  if (zf) goto L_42ccea;
L_42ccd7: /* 42ccd7: mov ecx, edx */
  ecx = edx;
/* 42ccd9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42ccdb: jae 0x42ccea */
  if (!cf) goto L_42ccea;
L_42ccdd: /* 42ccdd: cmp byte ptr [ecx], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42cce0: jne 0x42cce5 */
  if (!zf) goto L_42cce5;
L_42cce2: /* 42cce2: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_42cce5: /* 42cce5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42cce6: cmp ecx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42cce8: jb 0x42ccdd */
  if (cf) goto L_42ccdd;
L_42ccea: /* 42ccea: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ccee: jne 0x42cd0f */
  if (!zf) goto L_42cd0f;
L_42ccf0: /* 42ccf0: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 42ccf3: jmp 0x42cdc7 */
  goto L_42cdc7;
L_42ccf8: /* 42ccf8: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 42ccfa: js 0x42ccea */
  if (sf) goto L_42ccea;
L_42ccfc: /* 42ccfc: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42cd01u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42cd01: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_42cd07: /* 42cd07: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42cd0a: jmp 0x42cdc7 */
  goto L_42cdc7;
L_42cd0f: /* 42cd0f: test byte ptr [edi + 0xc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42cd13: je 0x42cdbf */
  if (zf) goto L_42cdbf;
L_42cd19: /* 42cd19: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 42cd1c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42cd1e: jne 0x42cd28 */
  if (!zf) goto L_42cd28;
L_42cd20: /* 42cd20: and dword ptr [ebp - 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 42cd23: jmp 0x42cdbf */
  goto L_42cdbf;
L_42cd28: /* 42cd28: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42cd2a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42cd2c: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 42cd2f: mov eax, esi */
  eax = esi;
/* 42cd31: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 42cd34: lea ebx, [eax*4 + 0x449240] */
  ebx = (uint32_t)(eax*4 + 0x449240u);
/* 42cd3b: mov eax, esi */
  eax = esi;
/* 42cd3d: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42cd40: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 42cd43: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 42cd45: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 42cd48: test byte ptr [esi + eax + 4], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax + 0x4u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42cd4d: je 0x42cdb9 */
  if (zf) goto L_42cdb9;
L_42cd4f: /* 42cd4f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42cd51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42cd53: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 42cd56: call 0x415ca2 */
  esp -= 4; W32(esp, 0x42cd5bu); SPILL(); f_415ca2(); if (g_unwind) return; RELOAD();
/* 42cd5b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42cd5e: cmp eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42cd61: jne 0x42cd80 */
  if (!zf) goto L_42cd80;
L_42cd63: /* 42cd63: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 42cd66: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 42cd69: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 42cd6b: jmp 0x42cd76 */
  goto L_42cd76;
L_42cd6d: /* 42cd6d: cmp byte ptr [eax], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42cd70: jne 0x42cd75 */
  if (!zf) goto L_42cd75;
L_42cd72: /* 42cd72: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_42cd75: /* 42cd75: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_42cd76: /* 42cd76: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42cd78: jb 0x42cd6d */
  if (cf) goto L_42cd6d;
L_42cd7a: /* 42cd7a: test byte ptr [edi + 0xd], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xdu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42cd7e: jmp 0x42cdb4 */
  goto L_42cdb4;
L_42cd80: /* 42cd80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42cd82: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 42cd85: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 42cd88: call 0x415ca2 */
  esp -= 4; W32(esp, 0x42cd8du); SPILL(); f_415ca2(); if (g_unwind) return; RELOAD();
/* 42cd8d: mov eax, 0x200 */
  eax = 0x200u;
/* 42cd92: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42cd95: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42cd98: ja 0x42cda7 */
  if ((!cf && !zf)) goto L_42cda7;
L_42cd9a: /* 42cd9a: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 42cd9d: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42cda0: je 0x42cda7 */
  if (zf) goto L_42cda7;
L_42cda2: /* 42cda2: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42cda5: je 0x42cdaa */
  if (zf) goto L_42cdaa;
L_42cda7: /* 42cda7: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
L_42cdaa: /* 42cdaa: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 42cdad: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 42cdaf: test byte ptr [esi + eax + 4], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax + 0x4u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
L_42cdb4: /* 42cdb4: je 0x42cdb9 */
  if (zf) goto L_42cdb9;
L_42cdb6: /* 42cdb6: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_42cdb9: /* 42cdb9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42cdbc: sub dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_42cdbf: /* 42cdbf: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 42cdc2: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 42cdc5: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_42cdc7: /* 42cdc7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42cdc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42cdc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42cdca: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42cdcb: ret  */
  esp += 4; SPILL(); return;
}

void f_42cdcc(void) {
  LOAD_REGS();
L_42cdcc: /* 42cdcc: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42cdce: push 0x441008 */
  { uint32_t v = 0x441008u; esp -= 4; W32(esp, v); }
/* 42cdd3: call 0x40101f */
  esp -= 4; W32(esp, 0x42cdd8u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42cdd8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cddb: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42cde0u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42cde0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cde1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42cde5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cde8: call 0x42cc6a */
  esp -= 4; W32(esp, 0x42cdedu); SPILL(); f_42cc6a(); if (g_unwind) return; RELOAD();
/* 42cded: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cdee: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42cdf1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42cdf5: call 0x42ce03 */
  esp -= 4; W32(esp, 0x42cdfau); SPILL(); f_42ce03(); if (g_unwind) return; RELOAD();
/* 42cdfa: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42cdfd: call 0x40105a */
  esp -= 4; W32(esp, 0x42ce02u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42ce02: ret  */
  esp += 4; SPILL(); return;
}

void f_42ce03(void) {
  LOAD_REGS();
L_42ce03: /* 42ce03: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ce06: call 0x413925 */
  esp -= 4; W32(esp, 0x42ce0bu); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42ce0b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ce0c: ret  */
  esp += 4; SPILL(); return;
}

void f_42ce0d(void) {
  LOAD_REGS();
L_42ce0d: /* 42ce0d: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 42ce0f: push 0x441018 */
  { uint32_t v = 0x441018u; esp -= 4; W32(esp, v); }
/* 42ce14: call 0x40101f */
  esp -= 4; W32(esp, 0x42ce19u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42ce19: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42ce1c: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42ce1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42ce20: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42ce25u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42ce25: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ce26: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42ce2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42ce2b: call 0x413ad8 */
  esp -= 4; W32(esp, 0x42ce30u); SPILL(); f_413ad8(); if (g_unwind) return; RELOAD();
/* 42ce30: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42ce33: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 42ce36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ce37: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42ce3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42ce3b: call 0x401feb */
  esp -= 4; W32(esp, 0x42ce40u); SPILL(); f_401feb(); if (g_unwind) return; RELOAD();
/* 42ce40: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42ce43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42ce44: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42ce47: call 0x413b5a */
  esp -= 4; W32(esp, 0x42ce4cu); SPILL(); f_413b5a(); if (g_unwind) return; RELOAD();
/* 42ce4c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ce4f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42ce53: call 0x42ce61 */
  esp -= 4; W32(esp, 0x42ce58u); SPILL(); f_42ce61(); if (g_unwind) return; RELOAD();
/* 42ce58: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 42ce5b: call 0x40105a */
  esp -= 4; W32(esp, 0x42ce60u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42ce60: ret  */
  esp += 4; SPILL(); return;
}

void f_42ce61(void) {
  LOAD_REGS();
L_42ce61: /* 42ce61: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42ce64: call 0x413925 */
  esp -= 4; W32(esp, 0x42ce69u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42ce69: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ce6a: ret  */
  esp += 4; SPILL(); return;
}

void f_42ce6b(void) {
  LOAD_REGS();
L_42ce6b: /* 42ce6b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42ce6c: mov ebp, esp */
  ebp = esp;
/* 42ce6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42ce6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42ce70: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42ce73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42ce74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42ce75: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 42ce78: imul edi, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  edi = (uint32_t)r;
  }
/* 42ce7c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ce7e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 42ce81: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 42ce84: mov ebx, edi */
  ebx = edi;
/* 42ce86: jne 0x42ce8f */
  if (!zf) goto L_42ce8f;
L_42ce88: /* 42ce88: xor eax, eax */
  eax = 0;
/* 42ce8a: jmp 0x42cf5a */
  goto L_42cf5a;
L_42ce8f: /* 42ce8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42ce90: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 42ce93: test word ptr [esi + 0xc], 0x10c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xcu))); uint16_t b = (uint16_t)(0x10cu);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42ce99: je 0x42cea3 */
  if (zf) goto L_42cea3;
L_42ce9b: /* 42ce9b: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 42ce9e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 42cea1: jmp 0x42ceaa */
  goto L_42ceaa;
L_42cea3: /* 42cea3: mov dword ptr [ebp - 4], 0x1000 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1000u);
L_42ceaa: /* 42ceaa: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 42cead: and ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 42ceb3: je 0x42cede */
  if (zf) goto L_42cede;
L_42ceb5: /* 42ceb5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 42ceb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ceba: je 0x42cede */
  if (zf) goto L_42cede;
L_42cebc: /* 42cebc: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42cebe: mov edi, ebx */
  edi = ebx;
/* 42cec0: jb 0x42cec4 */
  if (cf) goto L_42cec4;
L_42cec2: /* 42cec2: mov edi, eax */
  edi = eax;
L_42cec4: /* 42cec4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42cec5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cec8: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 42ceca: call 0x40126b */
  esp -= 4; W32(esp, 0x42cecfu); SPILL(); hle_memcpy(); RELOAD();
/* 42cecf: sub dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 42ced2: add dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 42ced4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ced7: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 42ced9: add dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42cedc: jmp 0x42cf20 */
  goto L_42cf20;
L_42cede: /* 42cede: cmp ebx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42cee1: jb 0x42cf25 */
  if (cf) goto L_42cf25;
L_42cee3: /* 42cee3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42cee5: je 0x42cef2 */
  if (zf) goto L_42cef2;
L_42cee7: /* 42cee7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42cee8: call 0x404333 */
  esp -= 4; W32(esp, 0x42ceedu); SPILL(); f_404333(); if (g_unwind) return; RELOAD();
/* 42ceed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ceef: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cef0: jne 0x42cf5e */
  if (!zf) goto L_42cf5e;
L_42cef2: /* 42cef2: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42cef6: mov edi, ebx */
  edi = ebx;
/* 42cef8: je 0x42cf03 */
  if (zf) goto L_42cf03;
L_42cefa: /* 42cefa: xor edx, edx */
  edx = 0;
/* 42cefc: mov eax, ebx */
  eax = ebx;
/* 42cefe: div dword ptr [ebp - 4] */
  { uint32_t d = R32((uint32_t)(ebp + 0xfffffffcu)); if (!d) d = guest_divzero(0x42cefe);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 42cf01: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_42cf03: /* 42cf03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42cf04: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cf07: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 42cf0a: call 0x41597f */
  esp -= 4; W32(esp, 0x42cf0fu); SPILL(); f_41597f(); if (g_unwind) return; RELOAD();
/* 42cf0f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42cf12: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42cf15: je 0x42cf69 */
  if (zf) goto L_42cf69;
L_42cf17: /* 42cf17: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42cf1a: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 42cf1c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42cf1e: jb 0x42cf69 */
  if (cf) goto L_42cf69;
L_42cf20: /* 42cf20: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 42cf23: jmp 0x42cf4e */
  goto L_42cf4e;
L_42cf25: /* 42cf25: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42cf28: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 42cf2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42cf2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42cf2d: call 0x414470 */
  esp -= 4; W32(esp, 0x42cf32u); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 42cf32: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42cf35: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cf36: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cf37: je 0x42cf5e */
  if (zf) goto L_42cf5e;
L_42cf39: /* 42cf39: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42cf3c: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 42cf3f: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 42cf40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 42cf42: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 42cf45: jg 0x42cf4e */
  if ((!zf && sf == of)) goto L_42cf4e;
L_42cf47: /* 42cf47: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_42cf4e: /* 42cf4e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42cf50: jne 0x42ceaa */
  if (!zf) goto L_42ceaa;
L_42cf56: /* 42cf56: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
L_42cf59: /* 42cf59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_42cf5a: /* 42cf5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42cf5b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42cf5c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42cf5d: ret  */
  esp += 4; SPILL(); return;
L_42cf5e: /* 42cf5e: mov eax, edi */
  eax = edi;
L_42cf60: /* 42cf60: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42cf62: xor edx, edx */
  edx = 0;
/* 42cf64: div dword ptr [ebp + 0xc] */
  { uint32_t d = R32((uint32_t)(ebp + 0xcu)); if (!d) d = guest_divzero(0x42cf64);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 42cf67: jmp 0x42cf59 */
  goto L_42cf59;
L_42cf69: /* 42cf69: or dword ptr [esi + 0xc], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 42cf6d: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 42cf70: jmp 0x42cf60 */
  goto L_42cf60;
}

void f_42cf72(void) {
  LOAD_REGS();
L_42cf72: /* 42cf72: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42cf74: push 0x441028 */
  { uint32_t v = 0x441028u; esp -= 4; W32(esp, v); }
/* 42cf79: call 0x40101f */
  esp -= 4; W32(esp, 0x42cf7eu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42cf7e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42cf81: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42cf86u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42cf86: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cf87: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42cf8b: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42cf8e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42cf91: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42cf94: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cf97: call 0x42ce6b */
  esp -= 4; W32(esp, 0x42cf9cu); SPILL(); f_42ce6b(); if (g_unwind) return; RELOAD();
/* 42cf9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42cf9f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42cfa2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42cfa6: call 0x42cfb4 */
  esp -= 4; W32(esp, 0x42cfabu); SPILL(); f_42cfb4(); if (g_unwind) return; RELOAD();
/* 42cfab: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42cfae: call 0x40105a */
  esp -= 4; W32(esp, 0x42cfb3u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42cfb3: ret  */
  esp += 4; SPILL(); return;
}

void f_42cfb4(void) {
  LOAD_REGS();
L_42cfb4: /* 42cfb4: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42cfb7: call 0x413925 */
  esp -= 4; W32(esp, 0x42cfbcu); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42cfbc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cfbd: ret  */
  esp += 4; SPILL(); return;
}

void f_42cfbe(void) {
  LOAD_REGS();
L_42cfbe: /* 42cfbe: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42cfc0: push 0x441038 */
  { uint32_t v = 0x441038u; esp -= 4; W32(esp, v); }
/* 42cfc5: call 0x40101f */
  esp -= 4; W32(esp, 0x42cfcau); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42cfca: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cfcd: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42cfd2u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42cfd2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42cfd3: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42cfd7: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 42cfda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42cfdb: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42cfde: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42cfe1: call 0x42e730 */
  esp -= 4; W32(esp, 0x42cfe6u); SPILL(); f_42e730(); if (g_unwind) return; RELOAD();
/* 42cfe6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42cfe9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42cfec: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42cff0: call 0x42cffe */
  esp -= 4; W32(esp, 0x42cff5u); SPILL(); f_42cffe(); if (g_unwind) return; RELOAD();
/* 42cff5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42cff8: call 0x40105a */
  esp -= 4; W32(esp, 0x42cffdu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42cffd: ret  */
  esp += 4; SPILL(); return;
}

void f_42cffe(void) {
  LOAD_REGS();
L_42cffe: /* 42cffe: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42d001: call 0x413925 */
  esp -= 4; W32(esp, 0x42d006u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42d006: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d007: ret  */
  esp += 4; SPILL(); return;
}

void f_42d008(void) {
  LOAD_REGS();
L_42d008: /* 42d008: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 42d00a: push 0x441048 */
  { uint32_t v = 0x441048u; esp -= 4; W32(esp, v); }
/* 42d00f: call 0x40101f */
  esp -= 4; W32(esp, 0x42d014u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d014: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 42d017: mov edi, ebx */
  edi = ebx;
/* 42d019: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 42d01c: mov esi, 0x449568 */
  esi = 0x449568u;
/* 42d021: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d022: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42d024: call 0x404166 */
  esp -= 4; W32(esp, 0x42d029u); SPILL(); f_404166(); if (g_unwind) return; RELOAD();
/* 42d029: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d02a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d02b: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_42d02f: /* 42d02f: dec dword ptr [0x44956c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44956cu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(0x44956cu), r);
  }
/* 42d035: js 0x42d047 */
  if (sf) goto L_42d047;
L_42d037: /* 42d037: mov eax, dword ptr [0x449568] */
  eax = R32((uint32_t)(0x449568u));
/* 42d03c: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 42d03f: inc dword ptr [0x449568] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449568u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x449568u), r);
  }
/* 42d045: jmp 0x42d04e */
  goto L_42d04e;
L_42d047: /* 42d047: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d048: call 0x42ac9e */
  esp -= 4; W32(esp, 0x42d04du); SPILL(); f_42ac9e(); if (g_unwind) return; RELOAD();
/* 42d04d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42d04e: /* 42d04e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42d051: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d054: je 0x42d06d */
  if (zf) goto L_42d06d;
L_42d056: /* 42d056: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d059: jne 0x42d065 */
  if (!zf) goto L_42d065;
L_42d05b: /* 42d05b: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d05d: jne 0x42d06d */
  if (!zf) goto L_42d06d;
L_42d05f: /* 42d05f: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42d063: jmp 0x42d070 */
  goto L_42d070;
L_42d065: /* 42d065: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 42d067: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42d068: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 42d06b: jmp 0x42d02f */
  goto L_42d02f;
L_42d06d: /* 42d06d: and byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(edi), r);
  }
L_42d070: /* 42d070: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d074: call 0x42d087 */
  esp -= 4; W32(esp, 0x42d079u); SPILL(); f_42d087(); if (g_unwind) return; RELOAD();
/* 42d079: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42d07c: call 0x40105a */
  esp -= 4; W32(esp, 0x42d081u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d081: ret  */
  esp += 4; SPILL(); return;
}

void f_42d082(void) {
  LOAD_REGS();
L_42d082: /* 42d082: mov esi, 0x449568 */
  esi = 0x449568u;
  SPILL(); f_42d087(); return;
}

void f_42d087(void) {
  LOAD_REGS();
L_42d087: /* 42d087: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d088: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42d08a: call 0x404275 */
  esp -= 4; W32(esp, 0x42d08fu); SPILL(); f_404275(); if (g_unwind) return; RELOAD();
/* 42d08f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d090: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d091: ret  */
  esp += 4; SPILL(); return;
}

void f_42d092(void) {
  LOAD_REGS();
L_42d092: /* 42d092: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42d094: push 0x441058 */
  { uint32_t v = 0x441058u; esp -= 4; W32(esp, v); }
/* 42d099: call 0x40101f */
  esp -= 4; W32(esp, 0x42d09eu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d09e: mov esi, 0x449588 */
  esi = 0x449588u;
/* 42d0a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d0a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42d0a6: call 0x404166 */
  esp -= 4; W32(esp, 0x42d0abu); SPILL(); f_404166(); if (g_unwind) return; RELOAD();
/* 42d0ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d0ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d0ad: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d0b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d0b2: call 0x413ad8 */
  esp -= 4; W32(esp, 0x42d0b7u); SPILL(); f_413ad8(); if (g_unwind) return; RELOAD();
/* 42d0b7: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42d0ba: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 42d0bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d0be: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42d0c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d0c2: call 0x413c12 */
  esp -= 4; W32(esp, 0x42d0c7u); SPILL(); f_413c12(); if (g_unwind) return; RELOAD();
/* 42d0c7: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42d0ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d0cb: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42d0ce: call 0x413b5a */
  esp -= 4; W32(esp, 0x42d0d3u); SPILL(); f_413b5a(); if (g_unwind) return; RELOAD();
/* 42d0d3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d0d6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d0da: call 0x42d0ed */
  esp -= 4; W32(esp, 0x42d0dfu); SPILL(); f_42d0ed(); if (g_unwind) return; RELOAD();
/* 42d0df: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42d0e2: call 0x40105a */
  esp -= 4; W32(esp, 0x42d0e7u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d0e7: ret  */
  esp += 4; SPILL(); return;
}

void f_42d0e8(void) {
  LOAD_REGS();
L_42d0e8: /* 42d0e8: mov esi, 0x449588 */
  esi = 0x449588u;
  SPILL(); f_42d0ed(); return;
}

void f_42d0ed(void) {
  LOAD_REGS();
L_42d0ed: /* 42d0ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d0ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42d0f0: call 0x404275 */
  esp -= 4; W32(esp, 0x42d0f5u); SPILL(); f_404275(); if (g_unwind) return; RELOAD();
/* 42d0f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d0f6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d0f7: ret  */
  esp += 4; SPILL(); return;
}

void f_42d0f8(void) {
  LOAD_REGS();
L_42d0f8: /* 42d0f8: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 42d0fa: push 0x441068 */
  { uint32_t v = 0x441068u; esp -= 4; W32(esp, v); }
/* 42d0ff: call 0x40101f */
  esp -= 4; W32(esp, 0x42d104u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d104: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42d108: mov esi, 0x449588 */
  esi = 0x449588u;
/* 42d10d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d10e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42d110: call 0x404166 */
  esp -= 4; W32(esp, 0x42d115u); SPILL(); f_404166(); if (g_unwind) return; RELOAD();
/* 42d115: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d116: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d117: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d11b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d11c: call 0x413ad8 */
  esp -= 4; W32(esp, 0x42d121u); SPILL(); f_413ad8(); if (g_unwind) return; RELOAD();
/* 42d121: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42d124: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42d127: call 0x402493 */
  esp -= 4; W32(esp, 0x42d12cu); SPILL(); hle_strlen(); RELOAD();
/* 42d12c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42d12f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d131: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42d133: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42d136: call 0x42ce6b */
  esp -= 4; W32(esp, 0x42d13bu); SPILL(); f_42ce6b(); if (g_unwind) return; RELOAD();
/* 42d13b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d13e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 42d141: cmp eax, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d144: jne 0x42d16c */
  if (!zf) goto L_42d16c;
L_42d146: /* 42d146: dec dword ptr [0x44958c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44958cu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(0x44958cu), r);
  }
/* 42d14c: js 0x42d15e */
  if (sf) goto L_42d15e;
L_42d14e: /* 42d14e: mov eax, dword ptr [0x449588] */
  eax = R32((uint32_t)(0x449588u));
/* 42d153: mov byte ptr [eax], 0xa */
  W8((uint32_t)(eax), 0xau);
/* 42d156: inc dword ptr [0x449588] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449588u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x449588u), r);
  }
/* 42d15c: jmp 0x42d168 */
  goto L_42d168;
L_42d15e: /* 42d15e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d15f: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 42d161: call 0x414470 */
  esp -= 4; W32(esp, 0x42d166u); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 42d166: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d167: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42d168: /* 42d168: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_42d16c: /* 42d16c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d16d: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42d170: call 0x413b5a */
  esp -= 4; W32(esp, 0x42d175u); SPILL(); f_413b5a(); if (g_unwind) return; RELOAD();
/* 42d175: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d176: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d177: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d17b: call 0x42d18e */
  esp -= 4; W32(esp, 0x42d180u); SPILL(); f_42d18e(); if (g_unwind) return; RELOAD();
/* 42d180: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42d183: call 0x40105a */
  esp -= 4; W32(esp, 0x42d188u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d188: ret  */
  esp += 4; SPILL(); return;
}

void f_42d189(void) {
  LOAD_REGS();
L_42d189: /* 42d189: mov esi, 0x449588 */
  esi = 0x449588u;
  SPILL(); f_42d18e(); return;
}

void f_42d18e(void) {
  LOAD_REGS();
L_42d18e: /* 42d18e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d18f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42d191: call 0x404275 */
  esp -= 4; W32(esp, 0x42d196u); SPILL(); f_404275(); if (g_unwind) return; RELOAD();
/* 42d196: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d197: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d198: ret  */
  esp += 4; SPILL(); return;
}

void f_42d199(void) {
  LOAD_REGS();
L_42d199: /* 42d199: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42d19b: push 0x441078 */
  { uint32_t v = 0x441078u; esp -= 4; W32(esp, v); }
/* 42d1a0: call 0x40101f */
  esp -= 4; W32(esp, 0x42d1a5u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d1a5: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42d1a8: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42d1ab: mov edi, dword ptr [esi + 0x10] */
  edi = R32((uint32_t)(esi + 0x10u));
/* 42d1ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d1af: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42d1b4u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42d1b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d1b5: xor ebx, ebx */
  ebx = 0;
/* 42d1b7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42d1ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d1bb: call 0x404333 */
  esp -= 4; W32(esp, 0x42d1c0u); SPILL(); f_404333(); if (g_unwind) return; RELOAD();
/* 42d1c0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d1c1: and dword ptr [esi + 0xc], 0xffffffcf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0xffffffcfu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 42d1c5: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d1c8: je 0x42d1e3 */
  if (zf) goto L_42d1e3;
L_42d1ca: /* 42d1ca: mov ecx, edi */
  ecx = edi;
/* 42d1cc: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 42d1cf: mov eax, edi */
  eax = edi;
/* 42d1d1: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42d1d4: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 42d1d7: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 42d1de: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 42d1e1: jmp 0x42d1e8 */
  goto L_42d1e8;
L_42d1e3: /* 42d1e3: mov eax, 0x449008 */
  eax = 0x449008u;
L_42d1e8: /* 42d1e8: mov cl, byte ptr [eax + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4u))) & 0xffu);
/* 42d1eb: and cl, 0xfd */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xfdu);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42d1ee: mov byte ptr [eax + 4], cl */
  W8((uint32_t)(eax + 0x4u), (ecx & 0xffu));
/* 42d1f1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42d1f4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 42d1f6: jns 0x42d1fe */
  if (!sf) goto L_42d1fe;
L_42d1f8: /* 42d1f8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42d1fb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
L_42d1fe: /* 42d1fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42d1ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42d200: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42d201: call 0x415ca2 */
  esp -= 4; W32(esp, 0x42d206u); SPILL(); f_415ca2(); if (g_unwind) return; RELOAD();
/* 42d206: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d209: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d20d: call 0x42d218 */
  esp -= 4; W32(esp, 0x42d212u); SPILL(); f_42d218(); if (g_unwind) return; RELOAD();
/* 42d212: call 0x40105a */
  esp -= 4; W32(esp, 0x42d217u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d217: ret  */
  esp += 4; SPILL(); return;
}

void f_42d218(void) {
  LOAD_REGS();
L_42d218: /* 42d218: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42d21b: call 0x413925 */
  esp -= 4; W32(esp, 0x42d220u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42d220: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d221: ret  */
  esp += 4; SPILL(); return;
}

void f_42d222(void) {
  LOAD_REGS();
L_42d222: /* 42d222: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42d224: push 0x441088 */
  { uint32_t v = 0x441088u; esp -= 4; W32(esp, v); }
/* 42d229: call 0x40101f */
  esp -= 4; W32(esp, 0x42d22eu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d22e: mov esi, 0x449568 */
  esi = 0x449568u;
/* 42d233: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d234: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42d236: call 0x404166 */
  esp -= 4; W32(esp, 0x42d23bu); SPILL(); f_404166(); if (g_unwind) return; RELOAD();
/* 42d23b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d23c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d23d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d241: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 42d244: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d245: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42d248: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d249: call 0x42dc5c */
  esp -= 4; W32(esp, 0x42d24eu); SPILL(); f_42dc5c(); if (g_unwind) return; RELOAD();
/* 42d24e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d251: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42d254: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d258: call 0x42d26b */
  esp -= 4; W32(esp, 0x42d25du); SPILL(); f_42d26b(); if (g_unwind) return; RELOAD();
/* 42d25d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42d260: call 0x40105a */
  esp -= 4; W32(esp, 0x42d265u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d265: ret  */
  esp += 4; SPILL(); return;
}

void f_42d266(void) {
  LOAD_REGS();
L_42d266: /* 42d266: mov esi, 0x449568 */
  esi = 0x449568u;
  SPILL(); f_42d26b(); return;
}

void f_42d26b(void) {
  LOAD_REGS();
L_42d26b: /* 42d26b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d26c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42d26e: call 0x404275 */
  esp -= 4; W32(esp, 0x42d273u); SPILL(); f_404275(); if (g_unwind) return; RELOAD();
/* 42d273: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d274: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d275: ret  */
  esp += 4; SPILL(); return;
}

void f_42d276(void) {
  LOAD_REGS();
L_42d276: /* 42d276: xor eax, eax */
  eax = 0;
/* 42d278: cmp dword ptr [esp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d27c: jne 0x42d284 */
  if (!zf) goto L_42d284;
L_42d27e: /* 42d27e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d27f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 42d281: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d282: jmp 0x42d28e */
  goto L_42d28e;
L_42d284: /* 42d284: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 42d289: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d28a: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
L_42d28e: /* 42d28e: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42d292: call 0x413a02 */
  esp -= 4; W32(esp, 0x42d297u); SPILL(); f_413a02(); if (g_unwind) return; RELOAD();
/* 42d297: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d29a: ret  */
  esp += 4; SPILL(); return;
}

void f_42d29b(void) {
  LOAD_REGS();
L_42d29b: /* 42d29b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42d29c: mov ebp, esp */
  ebp = esp;
/* 42d29e: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42d2a1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42d2a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d2a5: mov dword ptr [ebp - 0x14], 0x49 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x49u);
/* 42d2ac: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 42d2af: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42d2b2: call 0x402493 */
  esp -= 4; W32(esp, 0x42d2b7u); SPILL(); hle_strlen(); RELOAD();
/* 42d2b7: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42d2ba: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 42d2bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d2be: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42d2c1: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42d2c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d2c5: call 0x42dc5c */
  esp -= 4; W32(esp, 0x42d2cau); SPILL(); f_42dc5c(); if (g_unwind) return; RELOAD();
/* 42d2ca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d2cd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42d2ce: ret  */
  esp += 4; SPILL(); return;
}

void f_42d2cf(void) {
  LOAD_REGS();
L_42d2cf: /* 42d2cf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42d2d0: mov ebp, esp */
  ebp = esp;
/* 42d2d2: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42d2d5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42d2d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d2d9: mov dword ptr [ebp - 0x14], 0x49 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x49u);
/* 42d2e0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 42d2e3: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42d2e6: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42d2ebu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42d2eb: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42d2ed: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42d2f0: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 42d2f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d2f4: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42d2f7: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42d2fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d2fb: call 0x42e730 */
  esp -= 4; W32(esp, 0x42d300u); SPILL(); f_42e730(); if (g_unwind) return; RELOAD();
/* 42d300: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d303: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42d304: ret  */
  esp += 4; SPILL(); return;
}

void f_42d305(void) {
  LOAD_REGS();
L_42d305: /* 42d305: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d30a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d30b: mov esi, 0x44f5ac */
  esi = 0x44f5acu;
/* 42d310: je 0x42d317 */
  if (zf) goto L_42d317;
L_42d312: /* 42d312: mov esi, 0x44f5bc */
  esi = 0x44f5bcu;
L_42d317: /* 42d317: push 0x440810 */
  { uint32_t v = 0x440810u; esp -= 4; W32(esp, v); }
/* 42d31c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d31d: call 0x404b3a */
  esp -= 4; W32(esp, 0x42d322u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 42d322: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d323: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 42d326: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d327: mov cl, byte ptr [eax - 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xffffffffu))) & 0xffu);
/* 42d32a: cmp cl, 0x5c */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42d32d: je 0x42d338 */
  if (zf) goto L_42d338;
L_42d32f: /* 42d32f: cmp cl, 0x2f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42d332: je 0x42d338 */
  if (zf) goto L_42d338;
L_42d334: /* 42d334: mov byte ptr [eax], 0x5c */
  W8((uint32_t)(eax), 0x5cu);
/* 42d337: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_42d338: /* 42d338: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d33d: je 0x42d344 */
  if (zf) goto L_42d344;
L_42d33f: /* 42d33f: mov byte ptr [eax], 0x74 */
  W8((uint32_t)(eax), 0x74u);
/* 42d342: jmp 0x42d347 */
  goto L_42d347;
L_42d344: /* 42d344: mov byte ptr [eax], 0x73 */
  W8((uint32_t)(eax), 0x73u);
L_42d347: /* 42d347: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42d348: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42d34a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d34b: call 0x419028 */
  esp -= 4; W32(esp, 0x42d350u); SPILL(); f_419028(); if (g_unwind) return; RELOAD();
/* 42d350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d351: call 0x401df3 */
  esp -= 4; W32(esp, 0x42d356u); SPILL(); f_401df3(); if (g_unwind) return; RELOAD();
/* 42d356: push 0x43e37c */
  { uint32_t v = 0x43e37cu; esp -= 4; W32(esp, v); }
/* 42d35b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d35c: call 0x401d57 */
  esp -= 4; W32(esp, 0x42d361u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 42d361: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d364: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42d365: ret  */
  esp += 4; SPILL(); return;
}

void f_42d366(void) {
  LOAD_REGS();
L_42d366: /* 42d366: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42d367: mov ebp, esp */
  ebp = esp;
/* 42d369: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42d36a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d36b: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 42d36d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42d370: call 0x427075 */
  esp -= 4; W32(esp, 0x42d375u); SPILL(); f_427075(); if (g_unwind) return; RELOAD();
/* 42d375: mov esi, eax */
  esi = eax;
/* 42d377: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42d379: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42d37a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42d37c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d37d: call 0x417982 */
  esp -= 4; W32(esp, 0x42d382u); SPILL(); f_417982(); if (g_unwind) return; RELOAD();
/* 42d382: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d385: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42d386: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42d38b: jb 0x42d392 */
  if (cf) goto L_42d392;
L_42d38d: /* 42d38d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42d390: jmp 0x42d3aa */
  goto L_42d3aa;
L_42d392: /* 42d392: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42d394: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 42d397: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42d398: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d399: call 0x401df3 */
  esp -= 4; W32(esp, 0x42d39eu); SPILL(); f_401df3(); if (g_unwind) return; RELOAD();
/* 42d39e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d39f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d3a0: call 0x404b3a */
  esp -= 4; W32(esp, 0x42d3a5u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 42d3a5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d3a8: xor eax, eax */
  eax = 0;
L_42d3aa: /* 42d3aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42d3ab: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42d3ac: ret  */
  esp += 4; SPILL(); return;
}

void f_42d3ad(void) {
  LOAD_REGS();
L_42d3ad: /* 42d3ad: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42d3af: push 0x441098 */
  { uint32_t v = 0x441098u; esp -= 4; W32(esp, v); }
/* 42d3b4: call 0x40101f */
  esp -= 4; W32(esp, 0x42d3b9u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d3b9: xor ebx, ebx */
  ebx = 0;
/* 42d3bb: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 42d3be: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42d3c0: call 0x40fa82 */
  esp -= 4; W32(esp, 0x42d3c5u); SPILL(); f_40fa82(); if (g_unwind) return; RELOAD();
/* 42d3c5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d3c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42d3c8: je 0x42d458 */
  if (zf) goto L_42d458;
L_42d3ce: /* 42d3ce: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42d3d0: call 0x4011b7 */
  esp -= 4; W32(esp, 0x42d3d5u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 42d3d5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d3d6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42d3d9: cmp byte ptr [0x44f5ac], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f5acu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42d3df: jne 0x42d407 */
  if (!zf) goto L_42d407;
L_42d3e1: /* 42d3e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42d3e2: call 0x42d305 */
  esp -= 4; W32(esp, 0x42d3e7u); SPILL(); f_42d305(); if (g_unwind) return; RELOAD();
/* 42d3e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d3e8: mov esi, 0x44f5ac */
  esi = 0x44f5acu;
L_42d3ed: /* 42d3ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42d3ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d3ef: call 0x418bc2 */
  esp -= 4; W32(esp, 0x42d3f4u); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 42d3f4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d3f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d3f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42d3f8: jne 0x42d40e */
  if (!zf) goto L_42d40e;
L_42d3fa: /* 42d3fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d3fb: call 0x42d366 */
  esp -= 4; W32(esp, 0x42d400u); SPILL(); f_42d366(); if (g_unwind) return; RELOAD();
/* 42d400: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d401: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42d403: je 0x42d3ed */
  if (zf) goto L_42d3ed;
L_42d405: /* 42d405: jmp 0x42d44c */
  goto L_42d44c;
L_42d407: /* 42d407: mov esi, 0x44f5ac */
  esi = 0x44f5acu;
/* 42d40c: jmp 0x42d3fa */
  goto L_42d3fa;
L_42d40e: /* 42d40e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42d411: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d413: jne 0x42d440 */
  if (!zf) goto L_42d440;
L_42d415: /* 42d415: call 0x40137f */
  esp -= 4; W32(esp, 0x42d41au); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42d41a: mov edi, eax */
  edi = eax;
/* 42d41c: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 42d41f: cmp dword ptr [edi + 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x2cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d422: jne 0x42d43a */
  if (!zf) goto L_42d43a;
L_42d424: /* 42d424: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* 42d426: call 0x4010eb */
  esp -= 4; W32(esp, 0x42d42bu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42d42b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d42c: mov dword ptr [edi + 0x2c], eax */
  W32((uint32_t)(edi + 0x2cu), eax);
/* 42d42f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d431: jne 0x42d43a */
  if (!zf) goto L_42d43a;
L_42d433: /* 42d433: mov edi, esi */
  edi = esi;
/* 42d435: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 42d438: jmp 0x42d449 */
  goto L_42d449;
L_42d43a: /* 42d43a: mov edi, dword ptr [edi + 0x2c] */
  edi = R32((uint32_t)(edi + 0x2cu));
/* 42d43d: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
L_42d440: /* 42d440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d441: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42d442: call 0x404b3a */
  esp -= 4; W32(esp, 0x42d447u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 42d447: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d448: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42d449: /* 42d449: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
L_42d44c: /* 42d44c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d450: call 0x42d45e */
  esp -= 4; W32(esp, 0x42d455u); SPILL(); f_42d45e(); if (g_unwind) return; RELOAD();
/* 42d455: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_42d458: /* 42d458: call 0x40105a */
  esp -= 4; W32(esp, 0x42d45du); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d45d: ret  */
  esp += 4; SPILL(); return;
}

void f_42d45e(void) {
  LOAD_REGS();
L_42d45e: /* 42d45e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42d460: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42d465u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42d465: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d466: ret  */
  esp += 4; SPILL(); return;
}

void f_42d467(void) {
  LOAD_REGS();
L_42d467: /* 42d467: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 42d469: push 0x4410a8 */
  { uint32_t v = 0x4410a8u; esp -= 4; W32(esp, v); }
/* 42d46e: call 0x40101f */
  esp -= 4; W32(esp, 0x42d473u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d473: xor ebx, ebx */
  ebx = 0;
/* 42d475: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 42d478: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 42d47b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42d47d: call 0x40fa82 */
  esp -= 4; W32(esp, 0x42d482u); SPILL(); f_40fa82(); if (g_unwind) return; RELOAD();
/* 42d482: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d483: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42d485: je 0x42d562 */
  if (zf) goto L_42d562;
L_42d48b: /* 42d48b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42d48d: call 0x4011b7 */
  esp -= 4; W32(esp, 0x42d492u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 42d492: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d493: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42d496: cmp byte ptr [0x44f5bc], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f5bcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42d49d: jne 0x42d4ae */
  if (!zf) goto L_42d4ae;
L_42d49f: /* 42d49f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42d4a1: call 0x42d305 */
  esp -= 4; W32(esp, 0x42d4a6u); SPILL(); f_42d305(); if (g_unwind) return; RELOAD();
/* 42d4a6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d4a7: mov edi, 0x44f5bc */
  edi = 0x44f5bcu;
/* 42d4ac: jmp 0x42d4c2 */
  goto L_42d4c2;
L_42d4ae: /* 42d4ae: mov edi, 0x44f5bc */
  edi = 0x44f5bcu;
/* 42d4b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42d4b4: call 0x42d366 */
  esp -= 4; W32(esp, 0x42d4b9u); SPILL(); f_42d366(); if (g_unwind) return; RELOAD();
/* 42d4b9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d4ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42d4bc: jne 0x42d553 */
  if (!zf) goto L_42d553;
L_42d4c2: /* 42d4c2: call 0x42d9c2 */
  esp -= 4; W32(esp, 0x42d4c7u); SPILL(); f_42d9c2(); if (g_unwind) return; RELOAD();
/* 42d4c7: mov esi, eax */
  esi = eax;
/* 42d4c9: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 42d4cc: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d4ce: jne 0x42d4dd */
  if (!zf) goto L_42d4dd;
L_42d4d0: /* 42d4d0: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42d4d5u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42d4d5: mov dword ptr [eax], 0x18 */
  W32((uint32_t)(eax), 0x18u);
/* 42d4db: jmp 0x42d556 */
  goto L_42d556;
L_42d4dd: /* 42d4dd: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_42d4e4: /* 42d4e4: push 0x180 */
  { uint32_t v = 0x180u; esp -= 4; W32(esp, v); }
/* 42d4e9: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 42d4eb: push 0x8542 */
  { uint32_t v = 0x8542u; esp -= 4; W32(esp, v); }
/* 42d4f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42d4f1: call 0x424d5f */
  esp -= 4; W32(esp, 0x42d4f6u); SPILL(); f_424d5f(); if (g_unwind) return; RELOAD();
/* 42d4f6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d4f9: mov ebx, eax */
  ebx = eax;
/* 42d4fb: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42d4fe: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d501: jne 0x42d51d */
  if (!zf) goto L_42d51d;
L_42d503: /* 42d503: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42d508u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42d508: cmp dword ptr [eax], 0x11 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d50b: jne 0x42d518 */
  if (!zf) goto L_42d518;
L_42d50d: /* 42d50d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42d50e: call 0x42d366 */
  esp -= 4; W32(esp, 0x42d513u); SPILL(); f_42d366(); if (g_unwind) return; RELOAD();
/* 42d513: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d514: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42d516: je 0x42d4e4 */
  if (zf) goto L_42d4e4;
L_42d518: /* 42d518: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d51b: je 0x42d556 */
  if (zf) goto L_42d556;
L_42d51d: /* 42d51d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42d51e: call 0x406e43 */
  esp -= 4; W32(esp, 0x42d523u); SPILL(); f_406e43(); if (g_unwind) return; RELOAD();
/* 42d523: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d524: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 42d527: xor ecx, ecx */
  ecx = 0;
/* 42d529: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d52b: jne 0x42d536 */
  if (!zf) goto L_42d536;
L_42d52d: /* 42d52d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42d52e: call 0x415b93 */
  esp -= 4; W32(esp, 0x42d533u); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 42d533: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d534: jmp 0x42d556 */
  goto L_42d556;
L_42d536: /* 42d536: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 42d539: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 42d53b: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 42d53e: mov eax, dword ptr [0x449238] */
  eax = R32((uint32_t)(0x449238u));
/* 42d543: or eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42d548: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42d54b: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 42d54e: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42d551: jmp 0x42d556 */
  goto L_42d556;
L_42d553: /* 42d553: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
L_42d556: /* 42d556: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d55a: call 0x42d56b */
  esp -= 4; W32(esp, 0x42d55fu); SPILL(); f_42d56b(); if (g_unwind) return; RELOAD();
/* 42d55f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_42d562: /* 42d562: call 0x40105a */
  esp -= 4; W32(esp, 0x42d567u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d567: ret  */
  esp += 4; SPILL(); return;
}

void f_42d568(void) {
  LOAD_REGS();
L_42d568: /* 42d568: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
  SPILL(); f_42d56b(); return;
}

void f_42d56b(void) {
  LOAD_REGS();
L_42d56b: /* 42d56b: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d56f: je 0x42d578 */
  if (zf) goto L_42d578;
L_42d571: /* 42d571: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d572: call 0x413925 */
  esp -= 4; W32(esp, 0x42d577u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42d577: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42d578: /* 42d578: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42d57a: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42d57fu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42d57f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d580: ret  */
  esp += 4; SPILL(); return;
}

void f_42d581(void) {
  LOAD_REGS();
L_42d581: /* 42d581: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42d582: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 42d586: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d589: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d58a: je 0x42d5cd */
  if (zf) goto L_42d5cd;
L_42d58c: /* 42d58c: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 42d590: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42d593: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42d595: jne 0x42d59f */
  if (!zf) goto L_42d59f;
L_42d597: /* 42d597: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 42d599: jns 0x42d5cd */
  if (!sf) goto L_42d5cd;
L_42d59b: /* 42d59b: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42d59d: jne 0x42d5cd */
  if (!zf) goto L_42d5cd;
L_42d59f: /* 42d59f: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d5a3: jne 0x42d5ac */
  if (!zf) goto L_42d5ac;
L_42d5a5: /* 42d5a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d5a6: call 0x414589 */
  esp -= 4; W32(esp, 0x42d5abu); SPILL(); f_414589(); if (g_unwind) return; RELOAD();
/* 42d5ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42d5ac: /* 42d5ac: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 42d5ae: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d5b1: jne 0x42d5bc */
  if (!zf) goto L_42d5bc;
L_42d5b3: /* 42d5b3: cmp dword ptr [esi + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d5b7: jne 0x42d5cd */
  if (!zf) goto L_42d5cd;
L_42d5b9: /* 42d5b9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42d5ba: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_42d5bc: /* 42d5bc: dec dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi), r);
  }
/* 42d5be: test byte ptr [esi + 0xc], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xcu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42d5c2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 42d5c4: je 0x42d5d3 */
  if (zf) goto L_42d5d3;
L_42d5c6: /* 42d5c6: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42d5c8: je 0x42d5d5 */
  if (zf) goto L_42d5d5;
L_42d5ca: /* 42d5ca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42d5cb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_42d5cd: /* 42d5cd: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_42d5d0: /* 42d5d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42d5d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42d5d2: ret  */
  esp += 4; SPILL(); return;
L_42d5d3: /* 42d5d3: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
L_42d5d5: /* 42d5d5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42d5d8: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 42d5db: and eax, 0xffffffef */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42d5de: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42d5e1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42d5e4: mov eax, ebx */
  eax = ebx;
/* 42d5e6: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42d5eb: jmp 0x42d5d0 */
  goto L_42d5d0;
}

void f_42d5ed(void) {
  LOAD_REGS();
L_42d5ed: /* 42d5ed: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42d5ef: push 0x4410b8 */
  { uint32_t v = 0x4410b8u; esp -= 4; W32(esp, v); }
/* 42d5f4: call 0x40101f */
  esp -= 4; W32(esp, 0x42d5f9u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d5f9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42d5fc: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42d601u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42d601: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d602: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d606: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42d609: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42d60c: call 0x42d581 */
  esp -= 4; W32(esp, 0x42d611u); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42d611: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d612: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d613: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42d616: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d61a: call 0x42d628 */
  esp -= 4; W32(esp, 0x42d61fu); SPILL(); f_42d628(); if (g_unwind) return; RELOAD();
/* 42d61f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42d622: call 0x40105a */
  esp -= 4; W32(esp, 0x42d627u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d627: ret  */
  esp += 4; SPILL(); return;
}

void f_42d628(void) {
  LOAD_REGS();
L_42d628: /* 42d628: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42d62b: call 0x413925 */
  esp -= 4; W32(esp, 0x42d630u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42d630: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d631: ret  */
  esp += 4; SPILL(); return;
}

void f_42d632(void) {
  LOAD_REGS();
L_42d632: /* 42d632: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42d633: mov ebp, esp */
  ebp = esp;
/* 42d635: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42d638: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 42d63d: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 42d640: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42d641: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 42d644: cmp bx, -1 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42d648: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d649: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 42d64c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42d64d: je 0x42d6c1 */
  if (zf) goto L_42d6c1;
L_42d64f: /* 42d64f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42d652: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42d655: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42d657: jne 0x42d661 */
  if (!zf) goto L_42d661;
L_42d659: /* 42d659: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 42d65b: jns 0x42d6c1 */
  if (!sf) goto L_42d6c1;
L_42d65d: /* 42d65d: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42d65f: jne 0x42d6c1 */
  if (!zf) goto L_42d6c1;
L_42d661: /* 42d661: xor edi, edi */
  edi = 0;
/* 42d663: cmp dword ptr [esi + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d666: jne 0x42d66f */
  if (!zf) goto L_42d66f;
L_42d668: /* 42d668: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d669: call 0x414589 */
  esp -= 4; W32(esp, 0x42d66eu); SPILL(); f_414589(); if (g_unwind) return; RELOAD();
/* 42d66e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42d66f: /* 42d66f: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 42d672: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 42d675: jne 0x42d703 */
  if (!zf) goto L_42d703;
L_42d67b: /* 42d67b: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 42d67e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d681: je 0x42d69a */
  if (zf) goto L_42d69a;
L_42d683: /* 42d683: mov edx, eax */
  edx = eax;
/* 42d685: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 42d688: mov edx, dword ptr [edx*4 + 0x449240] */
  edx = R32((uint32_t)(edx*4 + 0x449240u));
/* 42d68f: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42d692: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 42d695: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 42d698: jmp 0x42d69f */
  goto L_42d69f;
L_42d69a: /* 42d69a: mov eax, 0x449008 */
  eax = 0x449008u;
L_42d69f: /* 42d69f: test byte ptr [eax + 4], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42d6a3: je 0x42d703 */
  if (zf) goto L_42d703;
L_42d6a5: /* 42d6a5: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 42d6a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42d6a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d6aa: call 0x402a4e */
  esp -= 4; W32(esp, 0x42d6afu); SPILL(); f_402a4e(); if (g_unwind) return; RELOAD();
/* 42d6af: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d6b2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d6b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d6b4: jne 0x42d6d5 */
  if (!zf) goto L_42d6d5;
L_42d6b6: /* 42d6b6: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42d6bbu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42d6bb: mov dword ptr [eax], 0x2a */
  W32((uint32_t)(eax), 0x2au);
L_42d6c1: /* 42d6c1: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
L_42d6c5: /* 42d6c5: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 42d6c8: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42d6cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42d6cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42d6cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42d6ce: call 0x4013ab */
  esp -= 4; W32(esp, 0x42d6d3u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 42d6d3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42d6d4: ret  */
  esp += 4; SPILL(); return;
L_42d6d5: /* 42d6d5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 42d6d8: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 42d6da: cmp dword ptr [esi], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42d6dc: jae 0x42d6ea */
  if (!cf) goto L_42d6ea;
L_42d6de: /* 42d6de: cmp dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d6e1: jne 0x42d6c1 */
  if (!zf) goto L_42d6c1;
L_42d6e3: /* 42d6e3: cmp eax, dword ptr [esi + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42d6e6: jg 0x42d6c1 */
  if ((!zf && sf == of)) goto L_42d6c1;
L_42d6e8: /* 42d6e8: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_42d6ea: /* 42d6ea: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 42d6ed: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42d6ef: jl 0x42d6fe */
  if ((sf != of)) goto L_42d6fe;
L_42d6f1: /* 42d6f1: dec dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi), r);
  }
/* 42d6f3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 42d6f4: mov dl, byte ptr [ebp + ecx - 0xb] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + ecx + 0xfffffff5u))) & 0xffu);
/* 42d6f8: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 42d6fa: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 42d6fc: jns 0x42d6f1 */
  if (!sf) goto L_42d6f1;
L_42d6fe: /* 42d6fe: add dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 42d701: jmp 0x42d736 */
  goto L_42d736;
L_42d703: /* 42d703: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 42d706: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42d709: cmp dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42d70b: jae 0x42d71a */
  if (!cf) goto L_42d71a;
L_42d70d: /* 42d70d: cmp dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d710: jne 0x42d6c1 */
  if (!zf) goto L_42d6c1;
L_42d712: /* 42d712: cmp dword ptr [esi + 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42d716: jb 0x42d6c1 */
  if (cf) goto L_42d6c1;
L_42d718: /* 42d718: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_42d71a: /* 42d71a: add dword ptr [esi], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 42d71d: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d71f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 42d721: je 0x42d72f */
  if (zf) goto L_42d72f;
L_42d723: /* 42d723: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42d726: je 0x42d732 */
  if (zf) goto L_42d732;
L_42d728: /* 42d728: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42d72b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 42d72d: jmp 0x42d6c1 */
  goto L_42d6c1;
L_42d72f: /* 42d72f: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
L_42d732: /* 42d732: add dword ptr [esi + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_42d736: /* 42d736: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42d739: and eax, 0xffffffef */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42d73c: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42d73f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42d742: mov ax, bx */
  eax = (eax & 0xffff0000u) | ((uint32_t)((ebx & 0xffffu)) & 0xffffu);
/* 42d745: jmp 0x42d6c5 */
  goto L_42d6c5;
}

void f_42d74a(void) {
  LOAD_REGS();
L_42d74a: /* 42d74a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42d74c: push 0x4410c8 */
  { uint32_t v = 0x4410c8u; esp -= 4; W32(esp, v); }
/* 42d751: call 0x40101f */
  esp -= 4; W32(esp, 0x42d756u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d756: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42d759: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42d75eu); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42d75e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d75f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d763: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42d766: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42d769: call 0x42d632 */
  esp -= 4; W32(esp, 0x42d76eu); SPILL(); f_42d632(); if (g_unwind) return; RELOAD();
/* 42d76e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d76f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d770: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42d773: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d777: call 0x42d786 */
  esp -= 4; W32(esp, 0x42d77cu); SPILL(); f_42d786(); if (g_unwind) return; RELOAD();
/* 42d77c: mov ax, word ptr [ebp - 0x1c] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe4u))) & 0xffffu);
/* 42d780: call 0x40105a */
  esp -= 4; W32(esp, 0x42d785u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d785: ret  */
  esp += 4; SPILL(); return;
}

void f_42d786(void) {
  LOAD_REGS();
L_42d786: /* 42d786: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42d789: call 0x413925 */
  esp -= 4; W32(esp, 0x42d78eu); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42d78e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d78f: ret  */
  esp += 4; SPILL(); return;
}

void f_42d790(void) {
  LOAD_REGS();
L_42d790: /* 42d790: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 42d792: push 0x4410d8 */
  { uint32_t v = 0x4410d8u; esp -= 4; W32(esp, v); }
/* 42d797: call 0x40101f */
  esp -= 4; W32(esp, 0x42d79cu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d79c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42d79f: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42d7a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d7a3: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42d7a8u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42d7a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d7a9: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d7ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d7ae: call 0x413ad8 */
  esp -= 4; W32(esp, 0x42d7b3u); SPILL(); f_413ad8(); if (g_unwind) return; RELOAD();
/* 42d7b3: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42d7b6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42d7b9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42d7bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d7bd: call 0x413c12 */
  esp -= 4; W32(esp, 0x42d7c2u); SPILL(); f_413c12(); if (g_unwind) return; RELOAD();
/* 42d7c2: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42d7c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d7c6: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42d7c9: call 0x413b5a */
  esp -= 4; W32(esp, 0x42d7ceu); SPILL(); f_413b5a(); if (g_unwind) return; RELOAD();
/* 42d7ce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d7d1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d7d5: call 0x42d7e3 */
  esp -= 4; W32(esp, 0x42d7dau); SPILL(); f_42d7e3(); if (g_unwind) return; RELOAD();
/* 42d7da: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 42d7dd: call 0x40105a */
  esp -= 4; W32(esp, 0x42d7e2u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d7e2: ret  */
  esp += 4; SPILL(); return;
}

void f_42d7e3(void) {
  LOAD_REGS();
L_42d7e3: /* 42d7e3: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42d7e6: call 0x413925 */
  esp -= 4; W32(esp, 0x42d7ebu); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42d7eb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d7ec: ret  */
  esp += 4; SPILL(); return;
}

void f_42d7ed(void) {
  LOAD_REGS();
L_42d7ed: /* 42d7ed: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 42d7ef: push 0x4410e8 */
  { uint32_t v = 0x4410e8u; esp -= 4; W32(esp, v); }
/* 42d7f4: call 0x40101f */
  esp -= 4; W32(esp, 0x42d7f9u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d7f9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42d7fc: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42d7ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d800: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42d805u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42d805: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d806: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d80a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d80b: call 0x413ad8 */
  esp -= 4; W32(esp, 0x42d810u); SPILL(); f_413ad8(); if (g_unwind) return; RELOAD();
/* 42d810: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42d813: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42d816: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42d819: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d81a: call 0x401feb */
  esp -= 4; W32(esp, 0x42d81fu); SPILL(); f_401feb(); if (g_unwind) return; RELOAD();
/* 42d81f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42d822: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d823: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42d826: call 0x413b5a */
  esp -= 4; W32(esp, 0x42d82bu); SPILL(); f_413b5a(); if (g_unwind) return; RELOAD();
/* 42d82b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d82e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d832: call 0x42d840 */
  esp -= 4; W32(esp, 0x42d837u); SPILL(); f_42d840(); if (g_unwind) return; RELOAD();
/* 42d837: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 42d83a: call 0x40105a */
  esp -= 4; W32(esp, 0x42d83fu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d83f: ret  */
  esp += 4; SPILL(); return;
}

void f_42d840(void) {
  LOAD_REGS();
L_42d840: /* 42d840: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42d843: call 0x413925 */
  esp -= 4; W32(esp, 0x42d848u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42d848: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d849: ret  */
  esp += 4; SPILL(); return;
}

void f_42d84a(void) {
  LOAD_REGS();
L_42d84a: /* 42d84a: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 42d84c: push 0x4410f8 */
  { uint32_t v = 0x4410f8u; esp -= 4; W32(esp, v); }
/* 42d851: call 0x40101f */
  esp -= 4; W32(esp, 0x42d856u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d856: mov esi, 0x449588 */
  esi = 0x449588u;
/* 42d85b: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42d85e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d85f: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42d864u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42d864: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d865: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d869: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d86a: call 0x413ad8 */
  esp -= 4; W32(esp, 0x42d86fu); SPILL(); f_413ad8(); if (g_unwind) return; RELOAD();
/* 42d86f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42d872: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42d875: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42d878: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d879: call 0x413c12 */
  esp -= 4; W32(esp, 0x42d87eu); SPILL(); f_413c12(); if (g_unwind) return; RELOAD();
/* 42d87e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42d881: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d882: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42d885: call 0x413b5a */
  esp -= 4; W32(esp, 0x42d88au); SPILL(); f_413b5a(); if (g_unwind) return; RELOAD();
/* 42d88a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d88d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d891: call 0x42d89f */
  esp -= 4; W32(esp, 0x42d896u); SPILL(); f_42d89f(); if (g_unwind) return; RELOAD();
/* 42d896: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 42d899: call 0x40105a */
  esp -= 4; W32(esp, 0x42d89eu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d89e: ret  */
  esp += 4; SPILL(); return;
}

void f_42d89f(void) {
  LOAD_REGS();
L_42d89f: /* 42d89f: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42d8a2: call 0x413925 */
  esp -= 4; W32(esp, 0x42d8a7u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42d8a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d8a8: ret  */
  esp += 4; SPILL(); return;
}

void f_42d8a9(void) {
  LOAD_REGS();
L_42d8a9: /* 42d8a9: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 42d8ab: push 0x441108 */
  { uint32_t v = 0x441108u; esp -= 4; W32(esp, v); }
/* 42d8b0: call 0x40101f */
  esp -= 4; W32(esp, 0x42d8b5u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d8b5: mov esi, 0x449588 */
  esi = 0x449588u;
/* 42d8ba: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42d8bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d8be: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42d8c3u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42d8c3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d8c4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d8c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d8c9: call 0x413ad8 */
  esp -= 4; W32(esp, 0x42d8ceu); SPILL(); f_413ad8(); if (g_unwind) return; RELOAD();
/* 42d8ce: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42d8d1: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42d8d4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42d8d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d8d8: call 0x401feb */
  esp -= 4; W32(esp, 0x42d8ddu); SPILL(); f_401feb(); if (g_unwind) return; RELOAD();
/* 42d8dd: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42d8e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d8e1: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42d8e4: call 0x413b5a */
  esp -= 4; W32(esp, 0x42d8e9u); SPILL(); f_413b5a(); if (g_unwind) return; RELOAD();
/* 42d8e9: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d8ec: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d8f0: call 0x42d8fe */
  esp -= 4; W32(esp, 0x42d8f5u); SPILL(); f_42d8fe(); if (g_unwind) return; RELOAD();
/* 42d8f5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 42d8f8: call 0x40105a */
  esp -= 4; W32(esp, 0x42d8fdu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d8fd: ret  */
  esp += 4; SPILL(); return;
}

void f_42d8fe(void) {
  LOAD_REGS();
L_42d8fe: /* 42d8fe: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42d901: call 0x413925 */
  esp -= 4; W32(esp, 0x42d906u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42d906: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d907: ret  */
  esp += 4; SPILL(); return;
}

void f_42d908(void) {
  LOAD_REGS();
L_42d908: /* 42d908: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42d90a: push 0x441118 */
  { uint32_t v = 0x441118u; esp -= 4; W32(esp, v); }
/* 42d90f: call 0x40101f */
  esp -= 4; W32(esp, 0x42d914u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d914: mov esi, 0x449588 */
  esi = 0x449588u;
/* 42d919: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d91a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42d91c: call 0x404166 */
  esp -= 4; W32(esp, 0x42d921u); SPILL(); f_404166(); if (g_unwind) return; RELOAD();
/* 42d921: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d922: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d923: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d927: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d928: call 0x413ad8 */
  esp -= 4; W32(esp, 0x42d92du); SPILL(); f_413ad8(); if (g_unwind) return; RELOAD();
/* 42d92d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42d930: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 42d933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d934: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42d937: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d938: call 0x401feb */
  esp -= 4; W32(esp, 0x42d93du); SPILL(); f_401feb(); if (g_unwind) return; RELOAD();
/* 42d93d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42d940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d941: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42d944: call 0x413b5a */
  esp -= 4; W32(esp, 0x42d949u); SPILL(); f_413b5a(); if (g_unwind) return; RELOAD();
/* 42d949: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d94c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d950: call 0x42d963 */
  esp -= 4; W32(esp, 0x42d955u); SPILL(); f_42d963(); if (g_unwind) return; RELOAD();
/* 42d955: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42d958: call 0x40105a */
  esp -= 4; W32(esp, 0x42d95du); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d95d: ret  */
  esp += 4; SPILL(); return;
}

void f_42d95e(void) {
  LOAD_REGS();
L_42d95e: /* 42d95e: mov esi, 0x449588 */
  esi = 0x449588u;
  SPILL(); f_42d963(); return;
}

void f_42d963(void) {
  LOAD_REGS();
L_42d963: /* 42d963: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d964: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42d966: call 0x404275 */
  esp -= 4; W32(esp, 0x42d96bu); SPILL(); f_404275(); if (g_unwind) return; RELOAD();
/* 42d96b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d96c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d96d: ret  */
  esp += 4; SPILL(); return;
}

void f_42d96e(void) {
  LOAD_REGS();
L_42d96e: /* 42d96e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42d970: push 0x441128 */
  { uint32_t v = 0x441128u; esp -= 4; W32(esp, v); }
/* 42d975: call 0x40101f */
  esp -= 4; W32(esp, 0x42d97au); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d97a: mov esi, 0x449568 */
  esi = 0x449568u;
/* 42d97f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d980: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42d982: call 0x404166 */
  esp -= 4; W32(esp, 0x42d987u); SPILL(); f_404166(); if (g_unwind) return; RELOAD();
/* 42d987: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d988: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d989: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d98d: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 42d990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42d991: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42d994: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d995: call 0x42e730 */
  esp -= 4; W32(esp, 0x42d99au); SPILL(); f_42e730(); if (g_unwind) return; RELOAD();
/* 42d99a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42d99d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42d9a0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42d9a4: call 0x42d9b7 */
  esp -= 4; W32(esp, 0x42d9a9u); SPILL(); f_42d9b7(); if (g_unwind) return; RELOAD();
/* 42d9a9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42d9ac: call 0x40105a */
  esp -= 4; W32(esp, 0x42d9b1u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42d9b1: ret  */
  esp += 4; SPILL(); return;
}

void f_42d9b2(void) {
  LOAD_REGS();
L_42d9b2: /* 42d9b2: mov esi, 0x449568 */
  esi = 0x449568u;
  SPILL(); f_42d9b7(); return;
}

void f_42d9b7(void) {
  LOAD_REGS();
L_42d9b7: /* 42d9b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42d9b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42d9ba: call 0x404275 */
  esp -= 4; W32(esp, 0x42d9bfu); SPILL(); f_404275(); if (g_unwind) return; RELOAD();
/* 42d9bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d9c0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d9c1: ret  */
  esp += 4; SPILL(); return;
}

void f_42d9c2(void) {
  LOAD_REGS();
L_42d9c2: /* 42d9c2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42d9c4: push 0x441138 */
  { uint32_t v = 0x441138u; esp -= 4; W32(esp, v); }
/* 42d9c9: call 0x40101f */
  esp -= 4; W32(esp, 0x42d9ceu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42d9ce: xor ebx, ebx */
  ebx = 0;
/* 42d9d0: xor edi, edi */
  edi = 0;
/* 42d9d2: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 42d9d5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42d9d7: call 0x4011b7 */
  esp -= 4; W32(esp, 0x42d9dcu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 42d9dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42d9dd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42d9e0: xor esi, esi */
  esi = 0;
L_42d9e2: /* 42d9e2: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 42d9e5: cmp esi, dword ptr [0x44ab68] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44ab68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42d9eb: jge 0x42dab1 */
  if ((sf == of)) goto L_42dab1;
L_42d9f1: /* 42d9f1: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 42d9f6: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 42d9f9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42d9fb: je 0x42da4d */
  if (zf) goto L_42da4d;
L_42d9fd: /* 42d9fd: test byte ptr [eax + 0xc], 0x83 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42da01: jne 0x42da46 */
  if (!zf) goto L_42da46;
L_42da03: /* 42da03: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42da06: jle 0x42da1f */
  if ((zf || sf != of)) goto L_42da1f;
L_42da08: /* 42da08: cmp esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42da0b: jge 0x42da1f */
  if ((sf == of)) goto L_42da1f;
L_42da0d: /* 42da0d: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* 42da10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42da11: call 0x40fa82 */
  esp -= 4; W32(esp, 0x42da16u); SPILL(); f_40fa82(); if (g_unwind) return; RELOAD();
/* 42da16: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42da17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42da19: je 0x42dab1 */
  if (zf) goto L_42dab1;
L_42da1f: /* 42da1f: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 42da24: push dword ptr [eax + esi*4] */
  { uint32_t v = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, v); }
/* 42da27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42da28: call 0x404166 */
  esp -= 4; W32(esp, 0x42da2du); SPILL(); f_404166(); if (g_unwind) return; RELOAD();
/* 42da2d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42da2e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42da2f: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 42da34: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 42da37: test byte ptr [eax + 0xc], 0x83 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42da3b: je 0x42da49 */
  if (zf) goto L_42da49;
L_42da3d: /* 42da3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42da3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42da3f: call 0x404275 */
  esp -= 4; W32(esp, 0x42da44u); SPILL(); f_404275(); if (g_unwind) return; RELOAD();
/* 42da44: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42da45: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42da46: /* 42da46: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42da47: jmp 0x42d9e2 */
  goto L_42d9e2;
L_42da49: /* 42da49: mov edi, eax */
  edi = eax;
/* 42da4b: jmp 0x42daae */
  goto L_42daae;
L_42da4d: /* 42da4d: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 42da50: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 42da52: call 0x4010eb */
  esp -= 4; W32(esp, 0x42da57u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42da57: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42da58: mov ecx, dword ptr [0x44ab78] */
  ecx = R32((uint32_t)(0x44ab78u));
/* 42da5e: mov dword ptr [esi + ecx], eax */
  W32((uint32_t)(esi + ecx), eax);
/* 42da61: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 42da66: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* 42da69: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42da6b: je 0x42dab1 */
  if (zf) goto L_42dab1;
L_42da6d: /* 42da6d: push 0xfa0 */
  { uint32_t v = 0xfa0u; esp -= 4; W32(esp, v); }
/* 42da72: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42da75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42da76: call 0x404bf7 */
  esp -= 4; W32(esp, 0x42da7bu); SPILL(); f_404bf7(); if (g_unwind) return; RELOAD();
/* 42da7b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42da7c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42da7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42da7f: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 42da84: jne 0x42da99 */
  if (!zf) goto L_42da99;
L_42da86: /* 42da86: push dword ptr [esi + eax] */
  { uint32_t v = R32((uint32_t)(esi + eax)); esp -= 4; W32(esp, v); }
/* 42da89: call 0x401156 */
  esp -= 4; W32(esp, 0x42da8eu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42da8e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42da8f: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 42da94: mov dword ptr [esi + eax], ebx */
  W32((uint32_t)(esi + eax), ebx);
/* 42da97: jmp 0x42dab1 */
  goto L_42dab1;
L_42da99: /* 42da99: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* 42da9c: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42da9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42daa0: call dword ptr [0x43903c] */
  esp -= 4; W32(esp, 0x42daa6u); SPILL(); call_ind(R32(0x43903cu)); if (g_unwind) return; /* KERNEL32!EnterCriticalSection */ RELOAD();
/* 42daa6: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 42daab: mov edi, dword ptr [esi + eax] */
  edi = R32((uint32_t)(esi + eax));
L_42daae: /* 42daae: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
L_42dab1: /* 42dab1: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dab3: je 0x42dac7 */
  if (zf) goto L_42dac7;
L_42dab5: /* 42dab5: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 42dab8: mov dword ptr [edi + 0xc], ebx */
  W32((uint32_t)(edi + 0xcu), ebx);
/* 42dabb: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 42dabe: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 42dac0: mov dword ptr [edi + 0x1c], ebx */
  W32((uint32_t)(edi + 0x1cu), ebx);
/* 42dac3: or dword ptr [edi + 0x10], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x10u), r);
  }
L_42dac7: /* 42dac7: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42dacb: call 0x42dadb */
  esp -= 4; W32(esp, 0x42dad0u); SPILL(); f_42dadb(); if (g_unwind) return; RELOAD();
/* 42dad0: mov eax, edi */
  eax = edi;
/* 42dad2: call 0x40105a */
  esp -= 4; W32(esp, 0x42dad7u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42dad7: ret  */
  esp += 4; SPILL(); return;
}

void f_42dad8(void) {
  LOAD_REGS();
L_42dad8: /* 42dad8: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
  SPILL(); f_42dadb(); return;
}

void f_42dadb(void) {
  LOAD_REGS();
L_42dadb: /* 42dadb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42dadd: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42dae2u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42dae2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dae3: ret  */
  esp += 4; SPILL(); return;
}

void f_42dae4(void) {
  LOAD_REGS();
L_42dae4: /* 42dae4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42dae5: mov ebp, esp */
  ebp = esp;
/* 42dae7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42dae8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42dae9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42daea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42daeb: mov esi, dword ptr [0x449238] */
  esi = R32((uint32_t)(0x449238u));
/* 42daf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42daf2: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 42daf5: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42daf7: xor ebx, ebx */
  ebx = 0;
/* 42daf9: cmp al, 0x61 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x61u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dafb: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 42dafe: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42db01: je 0x42db1d */
  if (zf) goto L_42db1d;
L_42db03: /* 42db03: cmp al, 0x72 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x72u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42db05: je 0x42db16 */
  if (zf) goto L_42db16;
L_42db07: /* 42db07: cmp al, 0x77 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x77u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42db09: jne 0x42dc29 */
  if (!zf) goto L_42dc29;
L_42db0f: /* 42db0f: mov ecx, 0x301 */
  ecx = 0x301u;
/* 42db14: jmp 0x42db22 */
  goto L_42db22;
L_42db16: /* 42db16: xor ecx, ecx */
  ecx = 0;
/* 42db18: or esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 42db1b: jmp 0x42db25 */
  goto L_42db25;
L_42db1d: /* 42db1d: mov ecx, 0x109 */
  ecx = 0x109u;
L_42db22: /* 42db22: or esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_42db25: /* 42db25: xor edx, edx */
  edx = 0;
/* 42db27: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 42db28: jmp 0x42dc04 */
  goto L_42dc04;
L_42db2d: /* 42db2d: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42db2f: je 0x42dc0f */
  if (zf) goto L_42dc0f;
L_42db35: /* 42db35: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 42db38: cmp eax, 0x54 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42db3b: jg 0x42dbae */
  if ((!zf && sf == of)) goto L_42dbae;
L_42db3d: /* 42db3d: je 0x42dba1 */
  if (zf) goto L_42dba1;
L_42db3f: /* 42db3f: sub eax, 0x2b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42db42: je 0x42db8b */
  if (zf) goto L_42db8b;
L_42db44: /* 42db44: sub eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42db47: je 0x42db81 */
  if (zf) goto L_42db81;
L_42db49: /* 42db49: sub eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42db4c: je 0x42db6d */
  if (zf) goto L_42db6d;
L_42db4e: /* 42db4e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42db4f: jne 0x42dbe6 */
  if (!zf) goto L_42dbe6;
L_42db55: /* 42db55: cmp dword ptr [ebp - 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42db58: jne 0x42dbe6 */
  if (!zf) goto L_42dbe6;
L_42db5e: /* 42db5e: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 42db65: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42db68: jmp 0x42dc04 */
  goto L_42dc04;
L_42db6d: /* 42db6d: cmp dword ptr [ebp - 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42db70: jne 0x42dbe6 */
  if (!zf) goto L_42dbe6;
L_42db72: /* 42db72: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 42db79: or ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42db7c: jmp 0x42dc04 */
  goto L_42dc04;
L_42db81: /* 42db81: test cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42db84: jne 0x42dbe6 */
  if (!zf) goto L_42dbe6;
L_42db86: /* 42db86: or ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42db89: jmp 0x42dc04 */
  goto L_42dc04;
L_42db8b: /* 42db8b: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42db8e: jne 0x42dbe6 */
  if (!zf) goto L_42dbe6;
L_42db90: /* 42db90: and ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 42db93: and esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 42db96: or ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42db99: or esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 42db9f: jmp 0x42dc04 */
  goto L_42dc04;
L_42dba1: /* 42dba1: mov eax, 0x1000 */
  eax = 0x1000u;
/* 42dba6: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dba8: jne 0x42dbe6 */
  if (!zf) goto L_42dbe6;
L_42dbaa: /* 42dbaa: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42dbac: jmp 0x42dc04 */
  goto L_42dc04;
L_42dbae: /* 42dbae: sub eax, 0x62 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x62u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42dbb1: je 0x42dbf9 */
  if (zf) goto L_42dbf9;
L_42dbb3: /* 42dbb3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42dbb4: je 0x42dbe1 */
  if (zf) goto L_42dbe1;
L_42dbb6: /* 42dbb6: sub eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42dbb9: je 0x42dbcd */
  if (zf) goto L_42dbcd;
L_42dbbb: /* 42dbbb: sub eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42dbbe: jne 0x42dbe6 */
  if (!zf) goto L_42dbe6;
L_42dbc0: /* 42dbc0: test ch, 0xc0 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xc0u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42dbc3: jne 0x42dbe6 */
  if (!zf) goto L_42dbe6;
L_42dbc5: /* 42dbc5: or ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42dbcb: jmp 0x42dc04 */
  goto L_42dc04;
L_42dbcd: /* 42dbcd: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dbd0: jne 0x42dbe6 */
  if (!zf) goto L_42dbe6;
L_42dbd2: /* 42dbd2: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
/* 42dbd9: and esi, 0xffffbfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffbfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 42dbdf: jmp 0x42dc04 */
  goto L_42dc04;
L_42dbe1: /* 42dbe1: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dbe4: je 0x42dbea */
  if (zf) goto L_42dbea;
L_42dbe6: /* 42dbe6: xor edx, edx */
  edx = 0;
/* 42dbe8: jmp 0x42dc04 */
  goto L_42dc04;
L_42dbea: /* 42dbea: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
/* 42dbf1: or esi, 0x4000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 42dbf7: jmp 0x42dc04 */
  goto L_42dc04;
L_42dbf9: /* 42dbf9: test ch, 0xc0 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xc0u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42dbfc: jne 0x42dbe6 */
  if (!zf) goto L_42dbe6;
L_42dbfe: /* 42dbfe: or ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_42dc04: /* 42dc04: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42dc05: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42dc07: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dc09: jne 0x42db2d */
  if (!zf) goto L_42db2d;
L_42dc0f: /* 42dc0f: push 0x1a4 */
  { uint32_t v = 0x1a4u; esp -= 4; W32(esp, v); }
/* 42dc14: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42dc17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42dc18: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42dc1b: call 0x424d5f */
  esp -= 4; W32(esp, 0x42dc20u); SPILL(); f_424d5f(); if (g_unwind) return; RELOAD();
/* 42dc20: mov ecx, eax */
  ecx = eax;
/* 42dc22: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42dc25: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42dc27: jge 0x42dc2d */
  if ((sf == of)) goto L_42dc2d;
L_42dc29: /* 42dc29: xor eax, eax */
  eax = 0;
/* 42dc2b: jmp 0x42dc41 */
  goto L_42dc41;
L_42dc2d: /* 42dc2d: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 42dc30: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 42dc33: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 42dc36: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 42dc38: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 42dc3b: mov dword ptr [eax + 0x1c], ebx */
  W32((uint32_t)(eax + 0x1cu), ebx);
/* 42dc3e: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
L_42dc41: /* 42dc41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42dc42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42dc43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42dc44: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42dc45: ret  */
  esp += 4; SPILL(); return;
}

void f_42dc46(void) {
  LOAD_REGS();
L_42dc46: /* 42dc46: dec dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(edx + 0x4u), r);
  }
/* 42dc49: js 0x42dc54 */
  if (sf) goto L_42dc54;
L_42dc4b: /* 42dc4b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 42dc4d: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 42dc50: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42dc51: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 42dc53: ret  */
  esp += 4; SPILL(); return;
L_42dc54: /* 42dc54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 42dc55: call 0x42ac9e */
  esp -= 4; W32(esp, 0x42dc5au); SPILL(); f_42ac9e(); if (g_unwind) return; RELOAD();
/* 42dc5a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dc5b: ret  */
  esp += 4; SPILL(); return;
}

void f_42dc5c(void) {
  LOAD_REGS();
L_42dc5c: /* 42dc5c: push 0x1c8 */
  { uint32_t v = 0x1c8u; esp -= 4; W32(esp, v); }
/* 42dc61: push 0x441148 */
  { uint32_t v = 0x441148u; esp -= 4; W32(esp, v); }
/* 42dc66: call 0x40101f */
  esp -= 4; W32(esp, 0x42dc6bu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42dc6b: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 42dc70: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 42dc73: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42dc76: xor eax, eax */
  eax = 0;
/* 42dc78: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42dc7b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42dc7e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 42dc81: and byte ptr [ebp - 0x29], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42dc84: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 42dc87: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
L_42dc8a: /* 42dc8a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42dc8d: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 42dc8f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42dc91: je 0x42e6c9 */
  if (zf) goto L_42e6c9;
L_42dc97: /* 42dc97: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 42dc9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42dc9b: call 0x415488 */
  esp -= 4; W32(esp, 0x42dca0u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 42dca0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dca1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dca3: je 0x42dce6 */
  if (zf) goto L_42dce6;
L_42dca5: /* 42dca5: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
L_42dca8: /* 42dca8: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42dcab: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42dcae: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42dcb3u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42dcb3: mov esi, eax */
  esi = eax;
/* 42dcb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42dcb6: call 0x415488 */
  esp -= 4; W32(esp, 0x42dcbbu); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 42dcbb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dcbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dcbe: jne 0x42dca8 */
  if (!zf) goto L_42dca8;
L_42dcc0: /* 42dcc0: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dcc3: je 0x42dcd0 */
  if (zf) goto L_42dcd0;
L_42dcc5: /* 42dcc5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42dcc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42dcc9: call 0x42d581 */
  esp -= 4; W32(esp, 0x42dcceu); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42dcce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dccf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42dcd0: /* 42dcd0: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 42dcd3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42dcd6: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 42dcd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42dcda: call 0x415488 */
  esp -= 4; W32(esp, 0x42dcdfu); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 42dcdf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dce0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dce2: jne 0x42dcd0 */
  if (!zf) goto L_42dcd0;
L_42dce4: /* 42dce4: jmp 0x42dc8a */
  goto L_42dc8a;
L_42dce6: /* 42dce6: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42dce9: cmp byte ptr [esi], 0x25 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x25u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dcec: jne 0x42e645 */
  if (!zf) goto L_42e645;
L_42dcf2: /* 42dcf2: xor edi, edi */
  edi = 0;
/* 42dcf4: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 42dcf7: and byte ptr [ebp - 0x39], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc7u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffc7u), r);
  }
/* 42dcfb: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 42dcfe: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* 42dd01: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 42dd04: and byte ptr [ebp - 0x49], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
/* 42dd08: and byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb6u), r);
  }
/* 42dd0c: and byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 42dd10: and byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42dd14: and byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
/* 42dd18: and byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42dd1c: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
/* 42dd20: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
L_42dd23: /* 42dd23: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42dd24: movzx ebx, byte ptr [esi] */
  ebx = (uint32_t)(R8((uint32_t)(esi)));
/* 42dd27: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 42dd2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42dd2b: call 0x40152b */
  esp -= 4; W32(esp, 0x42dd30u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42dd30: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dd31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dd33: je 0x42dd44 */
  if (zf) goto L_42dd44;
L_42dd35: /* 42dd35: inc dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffbcu), r);
  }
/* 42dd38: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 42dd3b: lea edi, [ebx + eax*2 - 0x30] */
  edi = (uint32_t)(ebx + eax*2 + 0xffffffd0u);
/* 42dd3f: jmp 0x42ddde */
  goto L_42ddde;
L_42dd44: /* 42dd44: cmp ebx, 0x4e */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42dd47: jg 0x42ddbc */
  if ((!zf && sf == of)) goto L_42ddbc;
L_42dd49: /* 42dd49: je 0x42ddde */
  if (zf) goto L_42ddde;
L_42dd4f: /* 42dd4f: cmp ebx, 0x2a */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd52: je 0x42ddb7 */
  if (zf) goto L_42ddb7;
L_42dd54: /* 42dd54: cmp ebx, 0x46 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd57: je 0x42ddde */
  if (zf) goto L_42ddde;
L_42dd5d: /* 42dd5d: cmp ebx, 0x49 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x49u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd60: je 0x42dd6c */
  if (zf) goto L_42dd6c;
L_42dd62: /* 42dd62: cmp ebx, 0x4c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd65: jne 0x42ddcb */
  if (!zf) goto L_42ddcb;
L_42dd67: /* 42dd67: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 42dd6a: jmp 0x42ddde */
  goto L_42ddde;
L_42dd6c: /* 42dd6c: mov cl, byte ptr [esi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 42dd6f: cmp cl, 0x36 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x36u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd72: jne 0x42dd8b */
  if (!zf) goto L_42dd8b;
L_42dd74: /* 42dd74: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 42dd77: cmp byte ptr [eax], 0x34 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x34u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd7a: jne 0x42dd8b */
  if (!zf) goto L_42dd8b;
L_42dd7c: /* 42dd7c: mov esi, eax */
  esi = eax;
/* 42dd7e: inc dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffacu), r);
  }
/* 42dd81: and dword ptr [ebp - 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 42dd85: and dword ptr [ebp - 0x58], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 42dd89: jmp 0x42ddde */
  goto L_42ddde;
L_42dd8b: /* 42dd8b: cmp cl, 0x33 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x33u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd8e: jne 0x42dd9c */
  if (!zf) goto L_42dd9c;
L_42dd90: /* 42dd90: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 42dd93: cmp byte ptr [eax], 0x32 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x32u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd96: jne 0x42dd9c */
  if (!zf) goto L_42dd9c;
L_42dd98: /* 42dd98: mov esi, eax */
  esi = eax;
/* 42dd9a: jmp 0x42ddde */
  goto L_42ddde;
L_42dd9c: /* 42dd9c: cmp cl, 0x64 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x64u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd9f: je 0x42ddde */
  if (zf) goto L_42ddde;
L_42dda1: /* 42dda1: cmp cl, 0x69 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x69u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dda4: je 0x42ddde */
  if (zf) goto L_42ddde;
L_42dda6: /* 42dda6: cmp cl, 0x6f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dda9: je 0x42ddde */
  if (zf) goto L_42ddde;
L_42ddab: /* 42ddab: cmp cl, 0x78 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ddae: je 0x42ddde */
  if (zf) goto L_42ddde;
L_42ddb0: /* 42ddb0: cmp cl, 0x58 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ddb3: jne 0x42ddcb */
  if (!zf) goto L_42ddcb;
L_42ddb5: /* 42ddb5: jmp 0x42ddde */
  goto L_42ddde;
L_42ddb7: /* 42ddb7: inc byte ptr [ebp - 0x4b] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 42ddba: jmp 0x42ddde */
  goto L_42ddde;
L_42ddbc: /* 42ddbc: cmp ebx, 0x68 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ddbf: je 0x42ddd8 */
  if (zf) goto L_42ddd8;
L_42ddc1: /* 42ddc1: cmp ebx, 0x6c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ddc4: je 0x42ddd0 */
  if (zf) goto L_42ddd0;
L_42ddc6: /* 42ddc6: cmp ebx, 0x77 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ddc9: je 0x42ddd3 */
  if (zf) goto L_42ddd3;
L_42ddcb: /* 42ddcb: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42ddce: jmp 0x42ddde */
  goto L_42ddde;
L_42ddd0: /* 42ddd0: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
L_42ddd3: /* 42ddd3: inc byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42ddd6: jmp 0x42ddde */
  goto L_42ddde;
L_42ddd8: /* 42ddd8: dec byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 42dddb: dec byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
L_42ddde: /* 42ddde: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dde2: je 0x42dd23 */
  if (zf) goto L_42dd23;
L_42dde8: /* 42dde8: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 42ddeb: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 42ddee: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ddf2: jne 0x42de08 */
  if (!zf) goto L_42de08;
L_42ddf4: /* 42ddf4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 42ddf7: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 42ddfa: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42ddfd: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 42de00: mov ebx, dword ptr [eax - 4] */
  ebx = R32((uint32_t)(eax + 0xfffffffcu));
/* 42de03: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 42de06: jmp 0x42de0b */
  goto L_42de0b;
L_42de08: /* 42de08: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
L_42de0b: /* 42de0b: and byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42de0f: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42de13: jne 0x42de29 */
  if (!zf) goto L_42de29;
L_42de15: /* 42de15: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 42de17: cmp al, 0x53 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x53u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42de19: je 0x42de25 */
  if (zf) goto L_42de25;
L_42de1b: /* 42de1b: cmp al, 0x43 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x43u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42de1d: je 0x42de25 */
  if (zf) goto L_42de25;
L_42de1f: /* 42de1f: or byte ptr [ebp - 0x4e], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42de23: jmp 0x42de29 */
  goto L_42de29;
L_42de25: /* 42de25: mov byte ptr [ebp - 0x4e], 1 */
  W8((uint32_t)(ebp + 0xffffffb2u), 0x1u);
L_42de29: /* 42de29: movzx edi, byte ptr [esi] */
  edi = (uint32_t)(R8((uint32_t)(esi)));
/* 42de2c: or edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 42de2f: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 42de32: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42de35: je 0x42de60 */
  if (zf) goto L_42de60;
L_42de37: /* 42de37: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42de3a: je 0x42dec0 */
  if (zf) goto L_42dec0;
L_42de40: /* 42de40: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42de43: je 0x42dec0 */
  if (zf) goto L_42dec0;
L_42de45: /* 42de45: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42de48: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42de4b: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42de50u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42de50: mov esi, eax */
  esi = eax;
/* 42de52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42de53: call 0x415488 */
  esp -= 4; W32(esp, 0x42de58u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 42de58: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42de59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42de5b: jne 0x42de45 */
  if (!zf) goto L_42de45;
L_42de5d: /* 42de5d: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_42de60: /* 42de60: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_42de63: /* 42de63: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 42de66: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42de68: je 0x42de74 */
  if (zf) goto L_42de74;
L_42de6a: /* 42de6a: cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42de6e: je 0x42e0c9 */
  if (zf) goto L_42e0c9;
L_42de74: /* 42de74: cmp edi, 0x6f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42de77: jg 0x42e098 */
  if ((!zf && sf == of)) goto L_42e098;
L_42de7d: /* 42de7d: je 0x42e40b */
  if (zf) goto L_42e40b;
L_42de83: /* 42de83: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42de86: je 0x42e077 */
  if (zf) goto L_42e077;
L_42de8c: /* 42de8c: cmp edi, 0x64 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42de8f: je 0x42e40b */
  if (zf) goto L_42e40b;
L_42de95: /* 42de95: jle 0x42e0be */
  if ((zf || sf != of)) goto L_42e0be;
L_42de9b: /* 42de9b: cmp edi, 0x67 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42de9e: jle 0x42deea */
  if ((zf || sf != of)) goto L_42deea;
L_42dea0: /* 42dea0: cmp edi, 0x69 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dea3: je 0x42ded2 */
  if (zf) goto L_42ded2;
L_42dea5: /* 42dea5: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dea8: jne 0x42e0be */
  if (!zf) goto L_42e0be;
L_42deae: /* 42deae: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 42deb1: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42deb5: je 0x42e61d */
  if (zf) goto L_42e61d;
L_42debb: /* 42debb: jmp 0x42e63d */
  goto L_42e63d;
L_42dec0: /* 42dec0: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42dec3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42dec6: mov edx, esi */
  edx = esi;
/* 42dec8: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42decdu); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42decd: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 42ded0: jmp 0x42de63 */
  goto L_42de63;
L_42ded2: /* 42ded2: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 42ded4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_42ded5: /* 42ded5: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42ded8: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dedb: jne 0x42e304 */
  if (!zf) goto L_42e304;
L_42dee1: /* 42dee1: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 42dee5: jmp 0x42e309 */
  goto L_42e309;
L_42deea: /* 42deea: lea esi, [ebp - 0x1c8] */
  esi = (uint32_t)(ebp + 0xfffffe38u);
/* 42def0: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42def3: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42def6: jne 0x42df06 */
  if (!zf) goto L_42df06;
L_42def8: /* 42def8: mov byte ptr [ebp - 0x1c8], bl */
  W8((uint32_t)(ebp + 0xfffffe38u), (ebx & 0xffu));
/* 42defe: lea esi, [ebp - 0x1c7] */
  esi = (uint32_t)(ebp + 0xfffffe39u);
/* 42df04: jmp 0x42df0b */
  goto L_42df0b;
L_42df06: /* 42df06: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42df09: jne 0x42df22 */
  if (!zf) goto L_42df22;
L_42df0b: /* 42df0b: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42df0e: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42df11: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42df14: mov edx, edi */
  edx = edi;
/* 42df16: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42df1bu); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42df1b: mov ebx, eax */
  ebx = eax;
/* 42df1d: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42df20: jmp 0x42df25 */
  goto L_42df25;
L_42df22: /* 42df22: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_42df25: /* 42df25: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42df29: je 0x42df34 */
  if (zf) goto L_42df34;
L_42df2b: /* 42df2b: cmp dword ptr [ebp - 0x48], 0x15d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x15du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42df32: jle 0x42df5c */
  if ((zf || sf != of)) goto L_42df5c;
L_42df34: /* 42df34: mov dword ptr [ebp - 0x48], 0x15d */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x15du);
/* 42df3b: jmp 0x42df5c */
  goto L_42df5c;
L_42df3d: /* 42df3d: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42df40: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42df43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42df45: je 0x42df67 */
  if (zf) goto L_42df67;
L_42df47: /* 42df47: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42df4a: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 42df4c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42df4d: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42df50: mov edx, edi */
  edx = edi;
/* 42df52: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42df57u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42df57: mov ebx, eax */
  ebx = eax;
/* 42df59: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42df5c: /* 42df5c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42df5d: call 0x40152b */
  esp -= 4; W32(esp, 0x42df62u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42df62: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42df63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42df65: jne 0x42df3d */
  if (!zf) goto L_42df3d;
L_42df67: /* 42df67: cmp byte ptr [0x44a9ac], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44a9acu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42df6d: jne 0x42dfb9 */
  if (!zf) goto L_42dfb9;
L_42df6f: /* 42df6f: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42df72: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42df75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42df77: je 0x42dfb9 */
  if (zf) goto L_42dfb9;
L_42df79: /* 42df79: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42df7c: mov edx, edi */
  edx = edi;
/* 42df7e: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42df83u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42df83: mov ebx, eax */
  ebx = eax;
/* 42df85: mov al, byte ptr [0x44a9ac] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0x44a9acu))) & 0xffu);
/* 42df8a: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 42df8c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42df8d: jmp 0x42dfab */
  goto L_42dfab;
L_42df8f: /* 42df8f: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42df92: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42df95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42df97: je 0x42dfb9 */
  if (zf) goto L_42dfb9;
L_42df99: /* 42df99: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42df9c: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 42df9e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42df9f: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42dfa2: mov edx, edi */
  edx = edi;
/* 42dfa4: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42dfa9u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42dfa9: mov ebx, eax */
  ebx = eax;
L_42dfab: /* 42dfab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42dfac: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42dfaf: call 0x40152b */
  esp -= 4; W32(esp, 0x42dfb4u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42dfb4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dfb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dfb7: jne 0x42df8f */
  if (!zf) goto L_42df8f;
L_42dfb9: /* 42dfb9: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dfbd: je 0x42e02e */
  if (zf) goto L_42e02e;
L_42dfbf: /* 42dfbf: cmp ebx, 0x65 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dfc2: je 0x42dfc9 */
  if (zf) goto L_42dfc9;
L_42dfc4: /* 42dfc4: cmp ebx, 0x45 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dfc7: jne 0x42e02e */
  if (!zf) goto L_42e02e;
L_42dfc9: /* 42dfc9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42dfcc: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42dfcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dfd1: je 0x42e02e */
  if (zf) goto L_42e02e;
L_42dfd3: /* 42dfd3: mov byte ptr [esi], 0x65 */
  W8((uint32_t)(esi), 0x65u);
/* 42dfd6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42dfd7: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42dfda: mov edx, edi */
  edx = edi;
/* 42dfdc: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42dfe1u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42dfe1: mov ebx, eax */
  ebx = eax;
/* 42dfe3: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42dfe6: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dfe9: jne 0x42dff0 */
  if (!zf) goto L_42dff0;
L_42dfeb: /* 42dfeb: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 42dfed: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42dfee: jmp 0x42dff5 */
  goto L_42dff5;
L_42dff0: /* 42dff0: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dff3: jne 0x42e023 */
  if (!zf) goto L_42e023;
L_42dff5: /* 42dff5: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42dff8: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42dffb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dffd: jne 0x42e014 */
  if (!zf) goto L_42e014;
L_42dfff: /* 42dfff: and dword ptr [ebp - 0x48], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e002: jmp 0x42e023 */
  goto L_42e023;
L_42e004: /* 42e004: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42e007: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e00a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e00c: je 0x42e02e */
  if (zf) goto L_42e02e;
L_42e00e: /* 42e00e: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42e011: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 42e013: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_42e014: /* 42e014: mov edx, edi */
  edx = edi;
/* 42e016: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e019: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e01eu); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e01e: mov ebx, eax */
  ebx = eax;
/* 42e020: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e023: /* 42e023: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e024: call 0x40152b */
  esp -= 4; W32(esp, 0x42e029u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42e029: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e02a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e02c: jne 0x42e004 */
  if (!zf) goto L_42e004;
L_42e02e: /* 42e02e: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e031: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e034: je 0x42e03f */
  if (zf) goto L_42e03f;
L_42e036: /* 42e036: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42e037: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e038: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e03du); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e03d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e03e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e03f: /* 42e03f: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e043: je 0x42e6c9 */
  if (zf) goto L_42e6c9;
L_42e049: /* 42e049: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e04d: jne 0x42e63d */
  if (!zf) goto L_42e63d;
L_42e053: /* 42e053: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42e056: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 42e059: lea eax, [ebp - 0x1c8] */
  eax = (uint32_t)(ebp + 0xfffffe38u);
/* 42e05f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e060: push dword ptr [ebp - 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff9cu)); esp -= 4; W32(esp, v); }
/* 42e063: movsx eax, byte ptr [ebp - 0x4f] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
/* 42e067: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42e068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e069: call dword ptr [0x44afa8] */
  { uint32_t t = R32((uint32_t)(0x44afa8u)); esp -= 4; W32(esp, 0x42e06fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 42e06f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42e072: jmp 0x42e63d */
  goto L_42e63d;
L_42e077: /* 42e077: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e079: jne 0x42e085 */
  if (!zf) goto L_42e085;
L_42e07b: /* 42e07b: mov dword ptr [ebp - 0x44], 1 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x1u);
/* 42e082: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
L_42e085: /* 42e085: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42e089: jle 0x42e210 */
  if ((zf || sf != of)) goto L_42e210;
L_42e08f: /* 42e08f: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
/* 42e093: jmp 0x42e210 */
  goto L_42e210;
L_42e098: /* 42e098: mov eax, edi */
  eax = edi;
/* 42e09a: sub eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42e09d: je 0x42e407 */
  if (zf) goto L_42e407;
L_42e0a3: /* 42e0a3: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42e0a6: je 0x42e085 */
  if (zf) goto L_42e085;
L_42e0a8: /* 42e0a8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42e0a9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42e0aa: je 0x42e40b */
  if (zf) goto L_42e40b;
L_42e0b0: /* 42e0b0: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42e0b3: je 0x42ded5 */
  if (zf) goto L_42ded5;
L_42e0b9: /* 42e0b9: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42e0bc: je 0x42e0ea */
  if (zf) goto L_42e0ea;
L_42e0be: /* 42e0be: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42e0c1: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 42e0c4: cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e0c7: je 0x42e0d2 */
  if (zf) goto L_42e0d2;
L_42e0c9: /* 42e0c9: cmp dword ptr [ebp - 0x28], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e0cd: jmp 0x42e699 */
  goto L_42e699;
L_42e0d2: /* 42e0d2: dec byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42e0d5: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e0d9: jne 0x42e63d */
  if (!zf) goto L_42e63d;
L_42e0df: /* 42e0df: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 42e0e2: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 42e0e5: jmp 0x42e63d */
  goto L_42e63d;
L_42e0ea: /* 42e0ea: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42e0ee: jle 0x42e0f4 */
  if ((zf || sf != of)) goto L_42e0f4;
L_42e0f0: /* 42e0f0: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
L_42e0f4: /* 42e0f4: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 42e0f7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e0f8: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 42e0fb: mov dword ptr [ebp - 0x1cc], edi */
  W32((uint32_t)(ebp + 0xfffffe34u), edi);
/* 42e101: cmp byte ptr [edi], 0x5e */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x5eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e104: jne 0x42e111 */
  if (!zf) goto L_42e111;
L_42e106: /* 42e106: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e107: mov dword ptr [ebp - 0x1cc], edi */
  W32((uint32_t)(ebp + 0xfffffe34u), edi);
/* 42e10d: or byte ptr [ebp - 0x49], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
L_42e111: /* 42e111: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42e114: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e116: jne 0x42e169 */
  if (!zf) goto L_42e169;
L_42e118: /* 42e118: and dword ptr [ebp - 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42e11b: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42e11d: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 42e11e: call 0x4014ee */
  esp -= 4; W32(esp, 0x42e123u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 42e123: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 42e126: mov ebx, esp */
  ebx = esp;
/* 42e128: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 42e12b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42e12f: jmp 0x42e169 */
  goto L_42e169;
L_42e169: /* 42e169: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42e16b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42e16d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e16e: call 0x4010fd */
  esp -= 4; W32(esp, 0x42e173u); SPILL(); hle_memset(); RELOAD();
/* 42e173: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42e176: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e17a: jne 0x42e1f0 */
  if (!zf) goto L_42e1f0;
L_42e17c: /* 42e17c: cmp byte ptr [edi], 0x5d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e17f: jne 0x42e1f0 */
  if (!zf) goto L_42e1f0;
L_42e181: /* 42e181: mov dl, 0x5d */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x5du) & 0xffu);
/* 42e183: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e184: mov byte ptr [ebx + 0xb], 0x20 */
  W8((uint32_t)(ebx + 0xbu), 0x20u);
/* 42e188: jmp 0x42e1f3 */
  goto L_42e1f3;
L_42e18a: /* 42e18a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e18b: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e18d: jne 0x42e1da */
  if (!zf) goto L_42e1da;
L_42e18f: /* 42e18f: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42e191: je 0x42e1da */
  if (zf) goto L_42e1da;
L_42e193: /* 42e193: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42e195: cmp cl, 0x5d */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e198: je 0x42e1da */
  if (zf) goto L_42e1da;
L_42e19a: /* 42e19a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e19b: cmp dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 42e19d: jae 0x42e1a3 */
  if (!cf) goto L_42e1a3;
L_42e19f: /* 42e19f: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 42e1a1: jmp 0x42e1a7 */
  goto L_42e1a7;
L_42e1a3: /* 42e1a3: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 42e1a5: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
L_42e1a7: /* 42e1a7: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42e1a9: ja 0x42e1d6 */
  if ((!cf && !zf)) goto L_42e1d6;
L_42e1ab: /* 42e1ab: movzx esi, dl */
  esi = (uint32_t)((edx & 0xffu));
/* 42e1ae: sub al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42e1b0: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42e1b2: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 42e1b5: mov dword ptr [ebp - 0x1d0], eax */
  W32((uint32_t)(ebp + 0xfffffe30u), eax);
L_42e1bb: /* 42e1bb: mov eax, esi */
  eax = esi;
/* 42e1bd: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42e1c0: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42e1c2: mov ecx, esi */
  ecx = esi;
/* 42e1c4: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 42e1c7: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42e1c9: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 42e1cb: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 42e1cd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42e1ce: dec dword ptr [ebp - 0x1d0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe30u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffe30u), r);
  }
/* 42e1d4: jne 0x42e1bb */
  if (!zf) goto L_42e1bb;
L_42e1d6: /* 42e1d6: xor dl, dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 42e1d8: jmp 0x42e1f3 */
  goto L_42e1f3;
L_42e1da: /* 42e1da: mov byte ptr [ebp - 0x39], al */
  W8((uint32_t)(ebp + 0xffffffc7u), (eax & 0xffu));
/* 42e1dd: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 42e1e0: mov eax, ecx */
  eax = ecx;
/* 42e1e2: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42e1e5: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42e1e7: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 42e1ea: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42e1ec: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 42e1ee: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_42e1f0: /* 42e1f0: mov dl, byte ptr [ebp - 0x39] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffc7u))) & 0xffu);
L_42e1f3: /* 42e1f3: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42e1f5: cmp al, 0x5d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e1f7: jne 0x42e18a */
  if (!zf) goto L_42e18a;
L_42e1f9: /* 42e1f9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42e1fb: je 0x42e6c9 */
  if (zf) goto L_42e6c9;
L_42e201: /* 42e201: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42e204: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e208: jne 0x42e20d */
  if (!zf) goto L_42e20d;
L_42e20a: /* 42e20a: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
L_42e20d: /* 42e20d: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_42e210: /* 42e210: mov esi, ebx */
  esi = ebx;
/* 42e212: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e215: cmp dword ptr [ebp - 0x28], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e219: je 0x42e228 */
  if (zf) goto L_42e228;
L_42e21b: /* 42e21b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e21e: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42e221: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e226u); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e226: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e227: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e228: /* 42e228: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e22c: je 0x42e23c */
  if (zf) goto L_42e23c;
L_42e22e: /* 42e22e: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42e231: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e234: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e236: je 0x42e3ce */
  if (zf) goto L_42e3ce;
L_42e23c: /* 42e23c: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e23f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42e242: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e247u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e247: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 42e24a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e24d: je 0x42e3bb */
  if (zf) goto L_42e3bb;
L_42e253: /* 42e253: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e256: je 0x42e29c */
  if (zf) goto L_42e29c;
L_42e258: /* 42e258: cmp edi, 0x73 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x73u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e25b: jne 0x42e26c */
  if (!zf) goto L_42e26c;
L_42e25d: /* 42e25d: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e260: jl 0x42e267 */
  if ((sf != of)) goto L_42e267;
L_42e262: /* 42e262: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e265: jle 0x42e26c */
  if ((zf || sf != of)) goto L_42e26c;
L_42e267: /* 42e267: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e26a: jne 0x42e29c */
  if (!zf) goto L_42e29c;
L_42e26c: /* 42e26c: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e26f: jne 0x42e3bb */
  if (!zf) goto L_42e3bb;
L_42e275: /* 42e275: mov ecx, eax */
  ecx = eax;
/* 42e277: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 42e27a: xor edx, edx */
  edx = 0;
  cf = 0;
/* 42e27c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  edx = r;
  }
/* 42e27d: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 42e27f: mov ecx, eax */
  ecx = eax;
/* 42e281: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 42e284: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42e287: movsx ecx, byte ptr [ecx + edi] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + edi)));
/* 42e28b: movsx edi, byte ptr [ebp - 0x49] */
  edi = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb7u)));
/* 42e28f: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42e291: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e293: je 0x42e3bb */
  if (zf) goto L_42e3bb;
L_42e299: /* 42e299: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_42e29c: /* 42e29c: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e2a0: jne 0x42e3b5 */
  if (!zf) goto L_42e3b5;
L_42e2a6: /* 42e2a6: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e2aa: je 0x42e3aa */
  if (zf) goto L_42e3aa;
L_42e2b0: /* 42e2b0: mov byte ptr [ebp - 0x1d4], al */
  W8((uint32_t)(ebp + 0xfffffe2cu), (eax & 0xffu));
/* 42e2b6: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 42e2b9: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 42e2bf: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42e2c4: je 0x42e2d7 */
  if (zf) goto L_42e2d7;
L_42e2c6: /* 42e2c6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e2c9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42e2cc: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e2d1u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e2d1: mov byte ptr [ebp - 0x1d3], al */
  W8((uint32_t)(ebp + 0xfffffe2du), (eax & 0xffu));
L_42e2d7: /* 42e2d7: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 42e2dd: lea eax, [ebp - 0x1d4] */
  eax = (uint32_t)(ebp + 0xfffffe2cu);
/* 42e2e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e2e4: lea eax, [ebp - 0x1d8] */
  eax = (uint32_t)(ebp + 0xfffffe28u);
/* 42e2ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e2eb: call 0x402197 */
  esp -= 4; W32(esp, 0x42e2f0u); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 42e2f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42e2f3: mov ax, word ptr [ebp - 0x1d8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffe28u))) & 0xffffu);
/* 42e2fa: mov word ptr [ebx], ax */
  W16((uint32_t)(ebx), (eax & 0xffffu));
/* 42e2fd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 42e2fe: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 42e2ff: jmp 0x42e3ad */
  goto L_42e3ad;
L_42e304: /* 42e304: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e307: jne 0x42e327 */
  if (!zf) goto L_42e327;
L_42e309: /* 42e309: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e30c: jne 0x42e318 */
  if (!zf) goto L_42e318;
L_42e30e: /* 42e30e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e310: je 0x42e318 */
  if (zf) goto L_42e318;
L_42e312: /* 42e312: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42e316: jmp 0x42e327 */
  goto L_42e327;
L_42e318: /* 42e318: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e31b: mov edx, esi */
  edx = esi;
/* 42e31d: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e322u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e322: mov ebx, eax */
  ebx = eax;
/* 42e324: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e327: /* 42e327: cmp ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e32a: jne 0x42e43c */
  if (!zf) goto L_42e43c;
L_42e330: /* 42e330: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e333: mov edx, esi */
  edx = esi;
/* 42e335: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e33au); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e33a: mov ebx, eax */
  ebx = eax;
/* 42e33c: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42e33f: cmp bl, 0x78 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e342: je 0x42e384 */
  if (zf) goto L_42e384;
L_42e344: /* 42e344: cmp bl, 0x58 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e347: je 0x42e384 */
  if (zf) goto L_42e384;
L_42e349: /* 42e349: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 42e350: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e353: je 0x42e36b */
  if (zf) goto L_42e36b;
L_42e355: /* 42e355: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e359: je 0x42e363 */
  if (zf) goto L_42e363;
L_42e35b: /* 42e35b: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e35e: jne 0x42e363 */
  if (!zf) goto L_42e363;
L_42e360: /* 42e360: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42e363: /* 42e363: push 0x6f */
  { uint32_t v = 0x6fu; esp -= 4; W32(esp, v); }
L_42e365: /* 42e365: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42e366: jmp 0x42e43c */
  goto L_42e43c;
L_42e36b: /* 42e36b: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e36e: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e371: je 0x42e37c */
  if (zf) goto L_42e37c;
L_42e373: /* 42e373: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42e374: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e375: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e37au); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e37a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e37b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e37c: /* 42e37c: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 42e37e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42e37f: jmp 0x42e439 */
  goto L_42e439;
L_42e384: /* 42e384: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e387: mov edx, esi */
  edx = esi;
/* 42e389: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e38eu); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e38e: mov ebx, eax */
  ebx = eax;
/* 42e390: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42e393: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e397: je 0x42e3a6 */
  if (zf) goto L_42e3a6;
L_42e399: /* 42e399: sub dword ptr [ebp - 0x48], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e39d: cmp dword ptr [ebp - 0x48], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e3a1: jge 0x42e3a6 */
  if ((sf == of)) goto L_42e3a6;
L_42e3a3: /* 42e3a3: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42e3a6: /* 42e3a6: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 42e3a8: jmp 0x42e365 */
  goto L_42e365;
L_42e3aa: /* 42e3aa: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 42e3ac: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_42e3ad: /* 42e3ad: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 42e3b0: jmp 0x42e228 */
  goto L_42e228;
L_42e3b5: /* 42e3b5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42e3b6: jmp 0x42e228 */
  goto L_42e228;
L_42e3bb: /* 42e3bb: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e3be: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e3c1: je 0x42e3ce */
  if (zf) goto L_42e3ce;
L_42e3c3: /* 42e3c3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e3c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e3c7: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e3ccu); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e3cc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e3cd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e3ce: /* 42e3ce: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e3d0: je 0x42e6c9 */
  if (zf) goto L_42e6c9;
L_42e3d6: /* 42e3d6: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e3da: jne 0x42e63d */
  if (!zf) goto L_42e63d;
L_42e3e0: /* 42e3e0: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42e3e3: cmp dword ptr [ebp - 0x68], 0x63 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e3e7: je 0x42e63d */
  if (zf) goto L_42e63d;
L_42e3ed: /* 42e3ed: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42e3f0: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e3f4: je 0x42e3ff */
  if (zf) goto L_42e3ff;
L_42e3f6: /* 42e3f6: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
/* 42e3fa: jmp 0x42e63d */
  goto L_42e63d;
L_42e3ff: /* 42e3ff: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42e402: jmp 0x42e63d */
  goto L_42e63d;
L_42e407: /* 42e407: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
L_42e40b: /* 42e40b: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42e40e: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e411: jne 0x42e419 */
  if (!zf) goto L_42e419;
L_42e413: /* 42e413: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 42e417: jmp 0x42e41e */
  goto L_42e41e;
L_42e419: /* 42e419: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e41c: jne 0x42e43c */
  if (!zf) goto L_42e43c;
L_42e41e: /* 42e41e: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e421: jne 0x42e42d */
  if (!zf) goto L_42e42d;
L_42e423: /* 42e423: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e425: je 0x42e42d */
  if (zf) goto L_42e42d;
L_42e427: /* 42e427: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42e42b: jmp 0x42e43c */
  goto L_42e43c;
L_42e42d: /* 42e42d: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e430: mov edx, esi */
  edx = esi;
/* 42e432: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e437u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e437: mov ebx, eax */
  ebx = eax;
L_42e439: /* 42e439: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e43c: /* 42e43c: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e440: je 0x42e541 */
  if (zf) goto L_42e541;
L_42e446: /* 42e446: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e44a: jne 0x42e51f */
  if (!zf) goto L_42e51f;
L_42e450: /* 42e450: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e453: je 0x42e49b */
  if (zf) goto L_42e49b;
L_42e455: /* 42e455: cmp edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e458: je 0x42e49b */
  if (zf) goto L_42e49b;
L_42e45a: /* 42e45a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e45b: call 0x40152b */
  esp -= 4; W32(esp, 0x42e460u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42e460: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e461: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e463: je 0x42e4cc */
  if (zf) goto L_42e4cc;
L_42e465: /* 42e465: cmp edi, 0x6f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e468: jne 0x42e484 */
  if (!zf) goto L_42e484;
L_42e46a: /* 42e46a: cmp ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e46d: jge 0x42e4cc */
  if ((sf == of)) goto L_42e4cc;
L_42e46f: /* 42e46f: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42e472: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42e475: shld ecx, eax, 3 */
  { uint32_t a = ecx, b = eax, c = (0x3u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 42e479: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42e47c: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42e47f: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42e482: jmp 0x42e4cf */
  goto L_42e4cf;
L_42e484: /* 42e484: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42e486: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 42e488: push dword ptr [ebp - 0x58] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa8u)); esp -= 4; W32(esp, v); }
/* 42e48b: push dword ptr [ebp - 0x5c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa4u)); esp -= 4; W32(esp, v); }
/* 42e48e: call 0x40518c */
  esp -= 4; W32(esp, 0x42e493u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 42e493: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42e496: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 42e499: jmp 0x42e4cf */
  goto L_42e4cf;
L_42e49b: /* 42e49b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e49c: call 0x415449 */
  esp -= 4; W32(esp, 0x42e4a1u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 42e4a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e4a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 42e4a4: je 0x42e4cc */
  if (zf) goto L_42e4cc;
L_42e4a6: /* 42e4a6: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42e4a9: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42e4ac: shld ecx, eax, 4 */
  { uint32_t a = ecx, b = eax, c = (0x4u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 42e4b0: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42e4b3: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42e4b6: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42e4b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e4ba: call 0x40152b */
  esp -= 4; W32(esp, 0x42e4bfu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42e4bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e4c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e4c2: jne 0x42e4cf */
  if (!zf) goto L_42e4cf;
L_42e4c4: /* 42e4c4: and ebx, 0xffffffdf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 42e4c7: sub ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 42e4ca: jmp 0x42e4cf */
  goto L_42e4cf;
L_42e4cc: /* 42e4cc: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42e4cf: /* 42e4cf: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e4d3: jne 0x42e501 */
  if (!zf) goto L_42e501;
L_42e4d5: /* 42e4d5: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42e4d8: lea eax, [ebx - 0x30] */
  eax = (uint32_t)(ebx + 0xffffffd0u);
/* 42e4db: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 42e4dc: add dword ptr [ebp - 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 42e4df: adc dword ptr [ebp - 0x58], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 42e4e2: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e4e6: je 0x42e4f3 */
  if (zf) goto L_42e4f3;
L_42e4e8: /* 42e4e8: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e4eb: jne 0x42e4f3 */
  if (!zf) goto L_42e4f3;
L_42e4ed: /* 42e4ed: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42e4f1: jmp 0x42e512 */
  goto L_42e512;
L_42e4f3: /* 42e4f3: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e4f6: mov edx, esi */
  edx = esi;
/* 42e4f8: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e4fdu); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e4fd: mov ebx, eax */
  ebx = eax;
/* 42e4ff: jmp 0x42e512 */
  goto L_42e512;
L_42e501: /* 42e501: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e504: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e507: je 0x42e512 */
  if (zf) goto L_42e512;
L_42e509: /* 42e509: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42e50a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e50b: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e510u); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e510: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e511: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e512: /* 42e512: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e516: je 0x42e450 */
  if (zf) goto L_42e450;
L_42e51c: /* 42e51c: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e51f: /* 42e51f: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e523: je 0x42e5fb */
  if (zf) goto L_42e5fb;
L_42e529: /* 42e529: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42e52c: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 42e52e: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42e531: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 42e534: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 42e536: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42e539: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42e53c: jmp 0x42e5fb */
  goto L_42e5fb;
L_42e541: /* 42e541: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e545: jne 0x42e5f2 */
  if (!zf) goto L_42e5f2;
L_42e54b: /* 42e54b: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e54e: je 0x42e57d */
  if (zf) goto L_42e57d;
L_42e550: /* 42e550: cmp edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e553: je 0x42e57d */
  if (zf) goto L_42e57d;
L_42e555: /* 42e555: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e556: call 0x40152b */
  esp -= 4; W32(esp, 0x42e55bu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42e55b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e55c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e55e: je 0x42e59f */
  if (zf) goto L_42e59f;
L_42e560: /* 42e560: cmp edi, 0x6f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e563: jne 0x42e570 */
  if (!zf) goto L_42e570;
L_42e565: /* 42e565: cmp ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e568: jge 0x42e59f */
  if ((sf == of)) goto L_42e59f;
L_42e56a: /* 42e56a: shl dword ptr [ebp - 0x38], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42e56e: jmp 0x42e5a2 */
  goto L_42e5a2;
L_42e570: /* 42e570: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42e573: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 42e576: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42e578: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42e57b: jmp 0x42e5a2 */
  goto L_42e5a2;
L_42e57d: /* 42e57d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e57e: call 0x415449 */
  esp -= 4; W32(esp, 0x42e583u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 42e583: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e584: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e586: je 0x42e59f */
  if (zf) goto L_42e59f;
L_42e588: /* 42e588: shl dword ptr [ebp - 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42e58c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e58d: call 0x40152b */
  esp -= 4; W32(esp, 0x42e592u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42e592: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e593: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e595: jne 0x42e5a2 */
  if (!zf) goto L_42e5a2;
L_42e597: /* 42e597: and ebx, 0xffffffdf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 42e59a: sub ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 42e59d: jmp 0x42e5a2 */
  goto L_42e5a2;
L_42e59f: /* 42e59f: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42e5a2: /* 42e5a2: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e5a6: jne 0x42e5d4 */
  if (!zf) goto L_42e5d4;
L_42e5a8: /* 42e5a8: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42e5ab: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42e5ae: lea eax, [eax + ebx - 0x30] */
  eax = (uint32_t)(eax + ebx + 0xffffffd0u);
/* 42e5b2: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42e5b5: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e5b9: je 0x42e5c6 */
  if (zf) goto L_42e5c6;
L_42e5bb: /* 42e5bb: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e5be: jne 0x42e5c6 */
  if (!zf) goto L_42e5c6;
L_42e5c0: /* 42e5c0: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42e5c4: jmp 0x42e5e5 */
  goto L_42e5e5;
L_42e5c6: /* 42e5c6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e5c9: mov edx, esi */
  edx = esi;
/* 42e5cb: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e5d0u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e5d0: mov ebx, eax */
  ebx = eax;
/* 42e5d2: jmp 0x42e5e5 */
  goto L_42e5e5;
L_42e5d4: /* 42e5d4: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e5d7: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e5da: je 0x42e5e5 */
  if (zf) goto L_42e5e5;
L_42e5dc: /* 42e5dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42e5dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e5de: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e5e3u); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e5e3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e5e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e5e5: /* 42e5e5: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e5e9: je 0x42e54b */
  if (zf) goto L_42e54b;
L_42e5ef: /* 42e5ef: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e5f2: /* 42e5f2: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e5f6: je 0x42e5fb */
  if (zf) goto L_42e5fb;
L_42e5f8: /* 42e5f8: neg dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
L_42e5fb: /* 42e5fb: cmp edi, 0x46 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e5fe: jne 0x42e604 */
  if (!zf) goto L_42e604;
L_42e600: /* 42e600: and dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
L_42e604: /* 42e604: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e608: je 0x42e6c9 */
  if (zf) goto L_42e6c9;
L_42e60e: /* 42e60e: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e612: jne 0x42e63d */
  if (!zf) goto L_42e63d;
L_42e614: /* 42e614: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42e617: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42e61a: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
L_42e61d: /* 42e61d: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e621: je 0x42e630 */
  if (zf) goto L_42e630;
L_42e623: /* 42e623: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42e626: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 42e628: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42e62b: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 42e62e: jmp 0x42e63d */
  goto L_42e63d;
L_42e630: /* 42e630: cmp byte ptr [ebp - 0x4f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e634: je 0x42e63a */
  if (zf) goto L_42e63a;
L_42e636: /* 42e636: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 42e638: jmp 0x42e63d */
  goto L_42e63d;
L_42e63a: /* 42e63a: mov word ptr [ebx], ax */
  W16((uint32_t)(ebx), (eax & 0xffffu));
L_42e63d: /* 42e63d: inc byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42e640: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 42e643: jmp 0x42e6ad */
  goto L_42e6ad;
L_42e645: /* 42e645: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e648: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42e64b: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e650u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e650: mov ebx, eax */
  ebx = eax;
/* 42e652: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42e655: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 42e658: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42e659: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 42e65c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e65e: jne 0x42e696 */
  if (!zf) goto L_42e696;
L_42e660: /* 42e660: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 42e663: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 42e669: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42e66e: je 0x42e6ad */
  if (zf) goto L_42e6ad;
L_42e670: /* 42e670: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e673: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42e676: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e67bu); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e67b: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 42e67e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42e67f: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 42e682: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e684: je 0x42e6aa */
  if (zf) goto L_42e6aa;
L_42e686: /* 42e686: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e689: je 0x42e696 */
  if (zf) goto L_42e696;
L_42e68b: /* 42e68b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e68e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e68f: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e694u); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e694: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e695: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e696: /* 42e696: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_42e699: /* 42e699: je 0x42e6c9 */
  if (zf) goto L_42e6c9;
L_42e69b: /* 42e69b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e69e: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42e6a1: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e6a6u); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e6a6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e6a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e6a8: jmp 0x42e6c9 */
  goto L_42e6c9;
L_42e6aa: /* 42e6aa: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
L_42e6ad: /* 42e6ad: cmp dword ptr [ebp - 0x28], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e6b1: jne 0x42dc8a */
  if (!zf) goto L_42dc8a;
L_42e6b7: /* 42e6b7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42e6ba: cmp byte ptr [eax], 0x25 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x25u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e6bd: jne 0x42e6c9 */
  if (!zf) goto L_42e6c9;
L_42e6bf: /* 42e6bf: cmp byte ptr [eax + 1], 0x6e */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1u))); uint8_t b = (uint8_t)(0x6eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e6c3: je 0x42dc8a */
  if (zf) goto L_42dc8a;
L_42e6c9: /* 42e6c9: cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e6cd: jne 0x42e6d8 */
  if (!zf) goto L_42e6d8;
L_42e6cf: /* 42e6cf: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42e6d2: call 0x401156 */
  esp -= 4; W32(esp, 0x42e6d7u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42e6d7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e6d8: /* 42e6d8: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 42e6db: cmp dword ptr [ebp - 0x28], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e6df: jne 0x42e6ed */
  if (!zf) goto L_42e6ed;
L_42e6e1: /* 42e6e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e6e3: jne 0x42e6ed */
  if (!zf) goto L_42e6ed;
L_42e6e5: /* 42e6e5: cmp byte ptr [ebp - 0x29], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e6e8: jne 0x42e6ed */
  if (!zf) goto L_42e6ed;
L_42e6ea: /* 42e6ea: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_42e6ed: /* 42e6ed: lea esp, [ebp - 0x1e4] */
  esp = (uint32_t)(ebp + 0xfffffe1cu);
/* 42e6f3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42e6f6: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42e6f9: call 0x4013ab */
  esp -= 4; W32(esp, 0x42e6feu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 42e6fe: call 0x40105a */
  esp -= 4; W32(esp, 0x42e703u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42e703: ret  */
  esp += 4; SPILL(); return;
}

void f_42e131(void) {
  LOAD_REGS();
L_42e131: /* 42e131: xor eax, eax */
  eax = 0;
/* 42e133: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42e134: ret  */
  esp += 4; SPILL(); return;
}

void f_42e135(void) {
  LOAD_REGS();
  goto L_42e135;
L_42dc8a: /* 42dc8a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42dc8d: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 42dc8f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42dc91: je 0x42e6c9 */
  if (zf) goto L_42e6c9;
L_42dc97: /* 42dc97: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 42dc9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42dc9b: call 0x415488 */
  esp -= 4; W32(esp, 0x42dca0u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 42dca0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dca1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dca3: je 0x42dce6 */
  if (zf) goto L_42dce6;
L_42dca5: /* 42dca5: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
L_42dca8: /* 42dca8: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42dcab: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42dcae: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42dcb3u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42dcb3: mov esi, eax */
  esi = eax;
/* 42dcb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42dcb6: call 0x415488 */
  esp -= 4; W32(esp, 0x42dcbbu); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 42dcbb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dcbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dcbe: jne 0x42dca8 */
  if (!zf) goto L_42dca8;
L_42dcc0: /* 42dcc0: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dcc3: je 0x42dcd0 */
  if (zf) goto L_42dcd0;
L_42dcc5: /* 42dcc5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42dcc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42dcc9: call 0x42d581 */
  esp -= 4; W32(esp, 0x42dcceu); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42dcce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dccf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42dcd0: /* 42dcd0: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 42dcd3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42dcd6: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 42dcd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42dcda: call 0x415488 */
  esp -= 4; W32(esp, 0x42dcdfu); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 42dcdf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dce0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dce2: jne 0x42dcd0 */
  if (!zf) goto L_42dcd0;
L_42dce4: /* 42dce4: jmp 0x42dc8a */
  goto L_42dc8a;
L_42dce6: /* 42dce6: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42dce9: cmp byte ptr [esi], 0x25 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x25u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dcec: jne 0x42e645 */
  if (!zf) goto L_42e645;
L_42dcf2: /* 42dcf2: xor edi, edi */
  edi = 0;
/* 42dcf4: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 42dcf7: and byte ptr [ebp - 0x39], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc7u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffc7u), r);
  }
/* 42dcfb: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 42dcfe: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* 42dd01: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 42dd04: and byte ptr [ebp - 0x49], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
/* 42dd08: and byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb6u), r);
  }
/* 42dd0c: and byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 42dd10: and byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42dd14: and byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
/* 42dd18: and byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42dd1c: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
/* 42dd20: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
L_42dd23: /* 42dd23: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42dd24: movzx ebx, byte ptr [esi] */
  ebx = (uint32_t)(R8((uint32_t)(esi)));
/* 42dd27: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 42dd2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42dd2b: call 0x40152b */
  esp -= 4; W32(esp, 0x42dd30u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42dd30: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dd31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dd33: je 0x42dd44 */
  if (zf) goto L_42dd44;
L_42dd35: /* 42dd35: inc dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffbcu), r);
  }
/* 42dd38: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 42dd3b: lea edi, [ebx + eax*2 - 0x30] */
  edi = (uint32_t)(ebx + eax*2 + 0xffffffd0u);
/* 42dd3f: jmp 0x42ddde */
  goto L_42ddde;
L_42dd44: /* 42dd44: cmp ebx, 0x4e */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42dd47: jg 0x42ddbc */
  if ((!zf && sf == of)) goto L_42ddbc;
L_42dd49: /* 42dd49: je 0x42ddde */
  if (zf) goto L_42ddde;
L_42dd4f: /* 42dd4f: cmp ebx, 0x2a */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd52: je 0x42ddb7 */
  if (zf) goto L_42ddb7;
L_42dd54: /* 42dd54: cmp ebx, 0x46 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd57: je 0x42ddde */
  if (zf) goto L_42ddde;
L_42dd5d: /* 42dd5d: cmp ebx, 0x49 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x49u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd60: je 0x42dd6c */
  if (zf) goto L_42dd6c;
L_42dd62: /* 42dd62: cmp ebx, 0x4c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd65: jne 0x42ddcb */
  if (!zf) goto L_42ddcb;
L_42dd67: /* 42dd67: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 42dd6a: jmp 0x42ddde */
  goto L_42ddde;
L_42dd6c: /* 42dd6c: mov cl, byte ptr [esi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 42dd6f: cmp cl, 0x36 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x36u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd72: jne 0x42dd8b */
  if (!zf) goto L_42dd8b;
L_42dd74: /* 42dd74: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 42dd77: cmp byte ptr [eax], 0x34 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x34u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd7a: jne 0x42dd8b */
  if (!zf) goto L_42dd8b;
L_42dd7c: /* 42dd7c: mov esi, eax */
  esi = eax;
/* 42dd7e: inc dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffacu), r);
  }
/* 42dd81: and dword ptr [ebp - 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 42dd85: and dword ptr [ebp - 0x58], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 42dd89: jmp 0x42ddde */
  goto L_42ddde;
L_42dd8b: /* 42dd8b: cmp cl, 0x33 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x33u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd8e: jne 0x42dd9c */
  if (!zf) goto L_42dd9c;
L_42dd90: /* 42dd90: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 42dd93: cmp byte ptr [eax], 0x32 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x32u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd96: jne 0x42dd9c */
  if (!zf) goto L_42dd9c;
L_42dd98: /* 42dd98: mov esi, eax */
  esi = eax;
/* 42dd9a: jmp 0x42ddde */
  goto L_42ddde;
L_42dd9c: /* 42dd9c: cmp cl, 0x64 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x64u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dd9f: je 0x42ddde */
  if (zf) goto L_42ddde;
L_42dda1: /* 42dda1: cmp cl, 0x69 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x69u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dda4: je 0x42ddde */
  if (zf) goto L_42ddde;
L_42dda6: /* 42dda6: cmp cl, 0x6f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dda9: je 0x42ddde */
  if (zf) goto L_42ddde;
L_42ddab: /* 42ddab: cmp cl, 0x78 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ddae: je 0x42ddde */
  if (zf) goto L_42ddde;
L_42ddb0: /* 42ddb0: cmp cl, 0x58 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ddb3: jne 0x42ddcb */
  if (!zf) goto L_42ddcb;
L_42ddb5: /* 42ddb5: jmp 0x42ddde */
  goto L_42ddde;
L_42ddb7: /* 42ddb7: inc byte ptr [ebp - 0x4b] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 42ddba: jmp 0x42ddde */
  goto L_42ddde;
L_42ddbc: /* 42ddbc: cmp ebx, 0x68 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ddbf: je 0x42ddd8 */
  if (zf) goto L_42ddd8;
L_42ddc1: /* 42ddc1: cmp ebx, 0x6c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ddc4: je 0x42ddd0 */
  if (zf) goto L_42ddd0;
L_42ddc6: /* 42ddc6: cmp ebx, 0x77 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ddc9: je 0x42ddd3 */
  if (zf) goto L_42ddd3;
L_42ddcb: /* 42ddcb: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42ddce: jmp 0x42ddde */
  goto L_42ddde;
L_42ddd0: /* 42ddd0: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
L_42ddd3: /* 42ddd3: inc byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42ddd6: jmp 0x42ddde */
  goto L_42ddde;
L_42ddd8: /* 42ddd8: dec byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 42dddb: dec byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
L_42ddde: /* 42ddde: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42dde2: je 0x42dd23 */
  if (zf) goto L_42dd23;
L_42dde8: /* 42dde8: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 42ddeb: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 42ddee: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ddf2: jne 0x42de08 */
  if (!zf) goto L_42de08;
L_42ddf4: /* 42ddf4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 42ddf7: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 42ddfa: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42ddfd: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 42de00: mov ebx, dword ptr [eax - 4] */
  ebx = R32((uint32_t)(eax + 0xfffffffcu));
/* 42de03: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 42de06: jmp 0x42de0b */
  goto L_42de0b;
L_42de08: /* 42de08: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
L_42de0b: /* 42de0b: and byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42de0f: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42de13: jne 0x42de29 */
  if (!zf) goto L_42de29;
L_42de15: /* 42de15: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 42de17: cmp al, 0x53 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x53u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42de19: je 0x42de25 */
  if (zf) goto L_42de25;
L_42de1b: /* 42de1b: cmp al, 0x43 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x43u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42de1d: je 0x42de25 */
  if (zf) goto L_42de25;
L_42de1f: /* 42de1f: or byte ptr [ebp - 0x4e], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42de23: jmp 0x42de29 */
  goto L_42de29;
L_42de25: /* 42de25: mov byte ptr [ebp - 0x4e], 1 */
  W8((uint32_t)(ebp + 0xffffffb2u), 0x1u);
L_42de29: /* 42de29: movzx edi, byte ptr [esi] */
  edi = (uint32_t)(R8((uint32_t)(esi)));
/* 42de2c: or edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 42de2f: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 42de32: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42de35: je 0x42de60 */
  if (zf) goto L_42de60;
L_42de37: /* 42de37: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42de3a: je 0x42dec0 */
  if (zf) goto L_42dec0;
L_42de40: /* 42de40: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42de43: je 0x42dec0 */
  if (zf) goto L_42dec0;
L_42de45: /* 42de45: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42de48: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42de4b: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42de50u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42de50: mov esi, eax */
  esi = eax;
/* 42de52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42de53: call 0x415488 */
  esp -= 4; W32(esp, 0x42de58u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 42de58: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42de59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42de5b: jne 0x42de45 */
  if (!zf) goto L_42de45;
L_42de5d: /* 42de5d: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_42de60: /* 42de60: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_42de63: /* 42de63: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 42de66: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42de68: je 0x42de74 */
  if (zf) goto L_42de74;
L_42de6a: /* 42de6a: cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42de6e: je 0x42e0c9 */
  if (zf) goto L_42e0c9;
L_42de74: /* 42de74: cmp edi, 0x6f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42de77: jg 0x42e098 */
  if ((!zf && sf == of)) goto L_42e098;
L_42de7d: /* 42de7d: je 0x42e40b */
  if (zf) goto L_42e40b;
L_42de83: /* 42de83: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42de86: je 0x42e077 */
  if (zf) goto L_42e077;
L_42de8c: /* 42de8c: cmp edi, 0x64 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42de8f: je 0x42e40b */
  if (zf) goto L_42e40b;
L_42de95: /* 42de95: jle 0x42e0be */
  if ((zf || sf != of)) goto L_42e0be;
L_42de9b: /* 42de9b: cmp edi, 0x67 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42de9e: jle 0x42deea */
  if ((zf || sf != of)) goto L_42deea;
L_42dea0: /* 42dea0: cmp edi, 0x69 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dea3: je 0x42ded2 */
  if (zf) goto L_42ded2;
L_42dea5: /* 42dea5: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dea8: jne 0x42e0be */
  if (!zf) goto L_42e0be;
L_42deae: /* 42deae: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 42deb1: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42deb5: je 0x42e61d */
  if (zf) goto L_42e61d;
L_42debb: /* 42debb: jmp 0x42e63d */
  goto L_42e63d;
L_42dec0: /* 42dec0: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42dec3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42dec6: mov edx, esi */
  edx = esi;
/* 42dec8: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42decdu); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42decd: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 42ded0: jmp 0x42de63 */
  goto L_42de63;
L_42ded2: /* 42ded2: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 42ded4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_42ded5: /* 42ded5: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42ded8: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dedb: jne 0x42e304 */
  if (!zf) goto L_42e304;
L_42dee1: /* 42dee1: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 42dee5: jmp 0x42e309 */
  goto L_42e309;
L_42deea: /* 42deea: lea esi, [ebp - 0x1c8] */
  esi = (uint32_t)(ebp + 0xfffffe38u);
/* 42def0: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42def3: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42def6: jne 0x42df06 */
  if (!zf) goto L_42df06;
L_42def8: /* 42def8: mov byte ptr [ebp - 0x1c8], bl */
  W8((uint32_t)(ebp + 0xfffffe38u), (ebx & 0xffu));
/* 42defe: lea esi, [ebp - 0x1c7] */
  esi = (uint32_t)(ebp + 0xfffffe39u);
/* 42df04: jmp 0x42df0b */
  goto L_42df0b;
L_42df06: /* 42df06: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42df09: jne 0x42df22 */
  if (!zf) goto L_42df22;
L_42df0b: /* 42df0b: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42df0e: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42df11: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42df14: mov edx, edi */
  edx = edi;
/* 42df16: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42df1bu); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42df1b: mov ebx, eax */
  ebx = eax;
/* 42df1d: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42df20: jmp 0x42df25 */
  goto L_42df25;
L_42df22: /* 42df22: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_42df25: /* 42df25: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42df29: je 0x42df34 */
  if (zf) goto L_42df34;
L_42df2b: /* 42df2b: cmp dword ptr [ebp - 0x48], 0x15d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x15du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42df32: jle 0x42df5c */
  if ((zf || sf != of)) goto L_42df5c;
L_42df34: /* 42df34: mov dword ptr [ebp - 0x48], 0x15d */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x15du);
/* 42df3b: jmp 0x42df5c */
  goto L_42df5c;
L_42df3d: /* 42df3d: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42df40: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42df43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42df45: je 0x42df67 */
  if (zf) goto L_42df67;
L_42df47: /* 42df47: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42df4a: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 42df4c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42df4d: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42df50: mov edx, edi */
  edx = edi;
/* 42df52: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42df57u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42df57: mov ebx, eax */
  ebx = eax;
/* 42df59: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42df5c: /* 42df5c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42df5d: call 0x40152b */
  esp -= 4; W32(esp, 0x42df62u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42df62: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42df63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42df65: jne 0x42df3d */
  if (!zf) goto L_42df3d;
L_42df67: /* 42df67: cmp byte ptr [0x44a9ac], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44a9acu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42df6d: jne 0x42dfb9 */
  if (!zf) goto L_42dfb9;
L_42df6f: /* 42df6f: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42df72: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42df75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42df77: je 0x42dfb9 */
  if (zf) goto L_42dfb9;
L_42df79: /* 42df79: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42df7c: mov edx, edi */
  edx = edi;
/* 42df7e: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42df83u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42df83: mov ebx, eax */
  ebx = eax;
/* 42df85: mov al, byte ptr [0x44a9ac] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0x44a9acu))) & 0xffu);
/* 42df8a: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 42df8c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42df8d: jmp 0x42dfab */
  goto L_42dfab;
L_42df8f: /* 42df8f: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42df92: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42df95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42df97: je 0x42dfb9 */
  if (zf) goto L_42dfb9;
L_42df99: /* 42df99: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42df9c: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 42df9e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42df9f: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42dfa2: mov edx, edi */
  edx = edi;
/* 42dfa4: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42dfa9u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42dfa9: mov ebx, eax */
  ebx = eax;
L_42dfab: /* 42dfab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42dfac: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42dfaf: call 0x40152b */
  esp -= 4; W32(esp, 0x42dfb4u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42dfb4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42dfb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dfb7: jne 0x42df8f */
  if (!zf) goto L_42df8f;
L_42dfb9: /* 42dfb9: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dfbd: je 0x42e02e */
  if (zf) goto L_42e02e;
L_42dfbf: /* 42dfbf: cmp ebx, 0x65 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dfc2: je 0x42dfc9 */
  if (zf) goto L_42dfc9;
L_42dfc4: /* 42dfc4: cmp ebx, 0x45 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dfc7: jne 0x42e02e */
  if (!zf) goto L_42e02e;
L_42dfc9: /* 42dfc9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42dfcc: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42dfcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dfd1: je 0x42e02e */
  if (zf) goto L_42e02e;
L_42dfd3: /* 42dfd3: mov byte ptr [esi], 0x65 */
  W8((uint32_t)(esi), 0x65u);
/* 42dfd6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42dfd7: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42dfda: mov edx, edi */
  edx = edi;
/* 42dfdc: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42dfe1u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42dfe1: mov ebx, eax */
  ebx = eax;
/* 42dfe3: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42dfe6: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dfe9: jne 0x42dff0 */
  if (!zf) goto L_42dff0;
L_42dfeb: /* 42dfeb: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 42dfed: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42dfee: jmp 0x42dff5 */
  goto L_42dff5;
L_42dff0: /* 42dff0: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42dff3: jne 0x42e023 */
  if (!zf) goto L_42e023;
L_42dff5: /* 42dff5: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42dff8: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42dffb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42dffd: jne 0x42e014 */
  if (!zf) goto L_42e014;
L_42dfff: /* 42dfff: and dword ptr [ebp - 0x48], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e002: jmp 0x42e023 */
  goto L_42e023;
L_42e004: /* 42e004: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42e007: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e00a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e00c: je 0x42e02e */
  if (zf) goto L_42e02e;
L_42e00e: /* 42e00e: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42e011: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 42e013: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_42e014: /* 42e014: mov edx, edi */
  edx = edi;
/* 42e016: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e019: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e01eu); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e01e: mov ebx, eax */
  ebx = eax;
/* 42e020: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e023: /* 42e023: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e024: call 0x40152b */
  esp -= 4; W32(esp, 0x42e029u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42e029: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e02a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e02c: jne 0x42e004 */
  if (!zf) goto L_42e004;
L_42e02e: /* 42e02e: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e031: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e034: je 0x42e03f */
  if (zf) goto L_42e03f;
L_42e036: /* 42e036: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42e037: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e038: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e03du); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e03d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e03e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e03f: /* 42e03f: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e043: je 0x42e6c9 */
  if (zf) goto L_42e6c9;
L_42e049: /* 42e049: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e04d: jne 0x42e63d */
  if (!zf) goto L_42e63d;
L_42e053: /* 42e053: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42e056: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 42e059: lea eax, [ebp - 0x1c8] */
  eax = (uint32_t)(ebp + 0xfffffe38u);
/* 42e05f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e060: push dword ptr [ebp - 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff9cu)); esp -= 4; W32(esp, v); }
/* 42e063: movsx eax, byte ptr [ebp - 0x4f] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
/* 42e067: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42e068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e069: call dword ptr [0x44afa8] */
  { uint32_t t = R32((uint32_t)(0x44afa8u)); esp -= 4; W32(esp, 0x42e06fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 42e06f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42e072: jmp 0x42e63d */
  goto L_42e63d;
L_42e077: /* 42e077: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e079: jne 0x42e085 */
  if (!zf) goto L_42e085;
L_42e07b: /* 42e07b: mov dword ptr [ebp - 0x44], 1 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x1u);
/* 42e082: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
L_42e085: /* 42e085: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42e089: jle 0x42e210 */
  if ((zf || sf != of)) goto L_42e210;
L_42e08f: /* 42e08f: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
/* 42e093: jmp 0x42e210 */
  goto L_42e210;
L_42e098: /* 42e098: mov eax, edi */
  eax = edi;
/* 42e09a: sub eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42e09d: je 0x42e407 */
  if (zf) goto L_42e407;
L_42e0a3: /* 42e0a3: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42e0a6: je 0x42e085 */
  if (zf) goto L_42e085;
L_42e0a8: /* 42e0a8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42e0a9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42e0aa: je 0x42e40b */
  if (zf) goto L_42e40b;
L_42e0b0: /* 42e0b0: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42e0b3: je 0x42ded5 */
  if (zf) goto L_42ded5;
L_42e0b9: /* 42e0b9: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42e0bc: je 0x42e0ea */
  if (zf) goto L_42e0ea;
L_42e0be: /* 42e0be: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42e0c1: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 42e0c4: cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e0c7: je 0x42e0d2 */
  if (zf) goto L_42e0d2;
L_42e0c9: /* 42e0c9: cmp dword ptr [ebp - 0x28], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e0cd: jmp 0x42e699 */
  goto L_42e699;
L_42e0d2: /* 42e0d2: dec byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42e0d5: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e0d9: jne 0x42e63d */
  if (!zf) goto L_42e63d;
L_42e0df: /* 42e0df: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 42e0e2: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 42e0e5: jmp 0x42e63d */
  goto L_42e63d;
L_42e0ea: /* 42e0ea: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42e0ee: jle 0x42e0f4 */
  if ((zf || sf != of)) goto L_42e0f4;
L_42e0f0: /* 42e0f0: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
L_42e0f4: /* 42e0f4: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 42e0f7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e0f8: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 42e0fb: mov dword ptr [ebp - 0x1cc], edi */
  W32((uint32_t)(ebp + 0xfffffe34u), edi);
/* 42e101: cmp byte ptr [edi], 0x5e */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x5eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e104: jne 0x42e111 */
  if (!zf) goto L_42e111;
L_42e106: /* 42e106: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e107: mov dword ptr [ebp - 0x1cc], edi */
  W32((uint32_t)(ebp + 0xfffffe34u), edi);
/* 42e10d: or byte ptr [ebp - 0x49], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
L_42e111: /* 42e111: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42e114: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e116: jne 0x42e169 */
  if (!zf) goto L_42e169;
L_42e118: /* 42e118: and dword ptr [ebp - 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42e11b: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42e11d: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 42e11e: call 0x4014ee */
  esp -= 4; W32(esp, 0x42e123u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 42e123: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 42e126: mov ebx, esp */
  ebx = esp;
/* 42e128: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 42e12b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42e12f: jmp 0x42e169 */
  goto L_42e169;
L_42e135: /* 42e135: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 42e138: call 0x415709 */
  esp -= 4; W32(esp, 0x42e13du); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 42e13d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42e13f: call 0x4010eb */
  esp -= 4; W32(esp, 0x42e144u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42e144: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e145: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42e148: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e14a: jne 0x42e155 */
  if (!zf) goto L_42e155;
L_42e14c: /* 42e14c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42e150: jmp 0x42e6c9 */
  goto L_42e6c9;
L_42e155: /* 42e155: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 42e15c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42e160: mov edi, dword ptr [ebp - 0x1cc] */
  edi = R32((uint32_t)(ebp + 0xfffffe34u));
/* 42e166: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
L_42e169: /* 42e169: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42e16b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42e16d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e16e: call 0x4010fd */
  esp -= 4; W32(esp, 0x42e173u); SPILL(); hle_memset(); RELOAD();
/* 42e173: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42e176: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e17a: jne 0x42e1f0 */
  if (!zf) goto L_42e1f0;
L_42e17c: /* 42e17c: cmp byte ptr [edi], 0x5d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e17f: jne 0x42e1f0 */
  if (!zf) goto L_42e1f0;
L_42e181: /* 42e181: mov dl, 0x5d */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x5du) & 0xffu);
/* 42e183: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e184: mov byte ptr [ebx + 0xb], 0x20 */
  W8((uint32_t)(ebx + 0xbu), 0x20u);
/* 42e188: jmp 0x42e1f3 */
  goto L_42e1f3;
L_42e18a: /* 42e18a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e18b: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e18d: jne 0x42e1da */
  if (!zf) goto L_42e1da;
L_42e18f: /* 42e18f: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42e191: je 0x42e1da */
  if (zf) goto L_42e1da;
L_42e193: /* 42e193: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42e195: cmp cl, 0x5d */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e198: je 0x42e1da */
  if (zf) goto L_42e1da;
L_42e19a: /* 42e19a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e19b: cmp dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 42e19d: jae 0x42e1a3 */
  if (!cf) goto L_42e1a3;
L_42e19f: /* 42e19f: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 42e1a1: jmp 0x42e1a7 */
  goto L_42e1a7;
L_42e1a3: /* 42e1a3: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 42e1a5: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
L_42e1a7: /* 42e1a7: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42e1a9: ja 0x42e1d6 */
  if ((!cf && !zf)) goto L_42e1d6;
L_42e1ab: /* 42e1ab: movzx esi, dl */
  esi = (uint32_t)((edx & 0xffu));
/* 42e1ae: sub al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42e1b0: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42e1b2: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 42e1b5: mov dword ptr [ebp - 0x1d0], eax */
  W32((uint32_t)(ebp + 0xfffffe30u), eax);
L_42e1bb: /* 42e1bb: mov eax, esi */
  eax = esi;
/* 42e1bd: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42e1c0: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42e1c2: mov ecx, esi */
  ecx = esi;
/* 42e1c4: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 42e1c7: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42e1c9: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 42e1cb: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 42e1cd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42e1ce: dec dword ptr [ebp - 0x1d0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe30u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffe30u), r);
  }
/* 42e1d4: jne 0x42e1bb */
  if (!zf) goto L_42e1bb;
L_42e1d6: /* 42e1d6: xor dl, dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 42e1d8: jmp 0x42e1f3 */
  goto L_42e1f3;
L_42e1da: /* 42e1da: mov byte ptr [ebp - 0x39], al */
  W8((uint32_t)(ebp + 0xffffffc7u), (eax & 0xffu));
/* 42e1dd: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 42e1e0: mov eax, ecx */
  eax = ecx;
/* 42e1e2: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42e1e5: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42e1e7: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 42e1ea: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42e1ec: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 42e1ee: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_42e1f0: /* 42e1f0: mov dl, byte ptr [ebp - 0x39] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffc7u))) & 0xffu);
L_42e1f3: /* 42e1f3: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42e1f5: cmp al, 0x5d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e1f7: jne 0x42e18a */
  if (!zf) goto L_42e18a;
L_42e1f9: /* 42e1f9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42e1fb: je 0x42e6c9 */
  if (zf) goto L_42e6c9;
L_42e201: /* 42e201: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42e204: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e208: jne 0x42e20d */
  if (!zf) goto L_42e20d;
L_42e20a: /* 42e20a: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
L_42e20d: /* 42e20d: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_42e210: /* 42e210: mov esi, ebx */
  esi = ebx;
/* 42e212: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e215: cmp dword ptr [ebp - 0x28], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e219: je 0x42e228 */
  if (zf) goto L_42e228;
L_42e21b: /* 42e21b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e21e: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42e221: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e226u); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e226: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e227: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e228: /* 42e228: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e22c: je 0x42e23c */
  if (zf) goto L_42e23c;
L_42e22e: /* 42e22e: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42e231: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e234: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e236: je 0x42e3ce */
  if (zf) goto L_42e3ce;
L_42e23c: /* 42e23c: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e23f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42e242: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e247u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e247: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 42e24a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e24d: je 0x42e3bb */
  if (zf) goto L_42e3bb;
L_42e253: /* 42e253: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e256: je 0x42e29c */
  if (zf) goto L_42e29c;
L_42e258: /* 42e258: cmp edi, 0x73 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x73u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e25b: jne 0x42e26c */
  if (!zf) goto L_42e26c;
L_42e25d: /* 42e25d: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e260: jl 0x42e267 */
  if ((sf != of)) goto L_42e267;
L_42e262: /* 42e262: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e265: jle 0x42e26c */
  if ((zf || sf != of)) goto L_42e26c;
L_42e267: /* 42e267: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e26a: jne 0x42e29c */
  if (!zf) goto L_42e29c;
L_42e26c: /* 42e26c: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e26f: jne 0x42e3bb */
  if (!zf) goto L_42e3bb;
L_42e275: /* 42e275: mov ecx, eax */
  ecx = eax;
/* 42e277: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 42e27a: xor edx, edx */
  edx = 0;
  cf = 0;
/* 42e27c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  edx = r;
  }
/* 42e27d: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 42e27f: mov ecx, eax */
  ecx = eax;
/* 42e281: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 42e284: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42e287: movsx ecx, byte ptr [ecx + edi] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + edi)));
/* 42e28b: movsx edi, byte ptr [ebp - 0x49] */
  edi = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb7u)));
/* 42e28f: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42e291: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e293: je 0x42e3bb */
  if (zf) goto L_42e3bb;
L_42e299: /* 42e299: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_42e29c: /* 42e29c: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e2a0: jne 0x42e3b5 */
  if (!zf) goto L_42e3b5;
L_42e2a6: /* 42e2a6: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e2aa: je 0x42e3aa */
  if (zf) goto L_42e3aa;
L_42e2b0: /* 42e2b0: mov byte ptr [ebp - 0x1d4], al */
  W8((uint32_t)(ebp + 0xfffffe2cu), (eax & 0xffu));
/* 42e2b6: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 42e2b9: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 42e2bf: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42e2c4: je 0x42e2d7 */
  if (zf) goto L_42e2d7;
L_42e2c6: /* 42e2c6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e2c9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42e2cc: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e2d1u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e2d1: mov byte ptr [ebp - 0x1d3], al */
  W8((uint32_t)(ebp + 0xfffffe2du), (eax & 0xffu));
L_42e2d7: /* 42e2d7: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 42e2dd: lea eax, [ebp - 0x1d4] */
  eax = (uint32_t)(ebp + 0xfffffe2cu);
/* 42e2e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e2e4: lea eax, [ebp - 0x1d8] */
  eax = (uint32_t)(ebp + 0xfffffe28u);
/* 42e2ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e2eb: call 0x402197 */
  esp -= 4; W32(esp, 0x42e2f0u); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 42e2f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42e2f3: mov ax, word ptr [ebp - 0x1d8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffe28u))) & 0xffffu);
/* 42e2fa: mov word ptr [ebx], ax */
  W16((uint32_t)(ebx), (eax & 0xffffu));
/* 42e2fd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 42e2fe: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 42e2ff: jmp 0x42e3ad */
  goto L_42e3ad;
L_42e304: /* 42e304: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e307: jne 0x42e327 */
  if (!zf) goto L_42e327;
L_42e309: /* 42e309: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e30c: jne 0x42e318 */
  if (!zf) goto L_42e318;
L_42e30e: /* 42e30e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e310: je 0x42e318 */
  if (zf) goto L_42e318;
L_42e312: /* 42e312: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42e316: jmp 0x42e327 */
  goto L_42e327;
L_42e318: /* 42e318: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e31b: mov edx, esi */
  edx = esi;
/* 42e31d: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e322u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e322: mov ebx, eax */
  ebx = eax;
/* 42e324: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e327: /* 42e327: cmp ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e32a: jne 0x42e43c */
  if (!zf) goto L_42e43c;
L_42e330: /* 42e330: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e333: mov edx, esi */
  edx = esi;
/* 42e335: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e33au); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e33a: mov ebx, eax */
  ebx = eax;
/* 42e33c: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42e33f: cmp bl, 0x78 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e342: je 0x42e384 */
  if (zf) goto L_42e384;
L_42e344: /* 42e344: cmp bl, 0x58 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e347: je 0x42e384 */
  if (zf) goto L_42e384;
L_42e349: /* 42e349: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 42e350: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e353: je 0x42e36b */
  if (zf) goto L_42e36b;
L_42e355: /* 42e355: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e359: je 0x42e363 */
  if (zf) goto L_42e363;
L_42e35b: /* 42e35b: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e35e: jne 0x42e363 */
  if (!zf) goto L_42e363;
L_42e360: /* 42e360: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42e363: /* 42e363: push 0x6f */
  { uint32_t v = 0x6fu; esp -= 4; W32(esp, v); }
L_42e365: /* 42e365: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42e366: jmp 0x42e43c */
  goto L_42e43c;
L_42e36b: /* 42e36b: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e36e: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e371: je 0x42e37c */
  if (zf) goto L_42e37c;
L_42e373: /* 42e373: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42e374: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e375: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e37au); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e37a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e37b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e37c: /* 42e37c: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 42e37e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42e37f: jmp 0x42e439 */
  goto L_42e439;
L_42e384: /* 42e384: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e387: mov edx, esi */
  edx = esi;
/* 42e389: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e38eu); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e38e: mov ebx, eax */
  ebx = eax;
/* 42e390: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42e393: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e397: je 0x42e3a6 */
  if (zf) goto L_42e3a6;
L_42e399: /* 42e399: sub dword ptr [ebp - 0x48], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e39d: cmp dword ptr [ebp - 0x48], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e3a1: jge 0x42e3a6 */
  if ((sf == of)) goto L_42e3a6;
L_42e3a3: /* 42e3a3: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42e3a6: /* 42e3a6: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 42e3a8: jmp 0x42e365 */
  goto L_42e365;
L_42e3aa: /* 42e3aa: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 42e3ac: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_42e3ad: /* 42e3ad: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 42e3b0: jmp 0x42e228 */
  goto L_42e228;
L_42e3b5: /* 42e3b5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42e3b6: jmp 0x42e228 */
  goto L_42e228;
L_42e3bb: /* 42e3bb: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e3be: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e3c1: je 0x42e3ce */
  if (zf) goto L_42e3ce;
L_42e3c3: /* 42e3c3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e3c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e3c7: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e3ccu); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e3cc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e3cd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e3ce: /* 42e3ce: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e3d0: je 0x42e6c9 */
  if (zf) goto L_42e6c9;
L_42e3d6: /* 42e3d6: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e3da: jne 0x42e63d */
  if (!zf) goto L_42e63d;
L_42e3e0: /* 42e3e0: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42e3e3: cmp dword ptr [ebp - 0x68], 0x63 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e3e7: je 0x42e63d */
  if (zf) goto L_42e63d;
L_42e3ed: /* 42e3ed: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42e3f0: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e3f4: je 0x42e3ff */
  if (zf) goto L_42e3ff;
L_42e3f6: /* 42e3f6: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
/* 42e3fa: jmp 0x42e63d */
  goto L_42e63d;
L_42e3ff: /* 42e3ff: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42e402: jmp 0x42e63d */
  goto L_42e63d;
L_42e407: /* 42e407: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
L_42e40b: /* 42e40b: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42e40e: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e411: jne 0x42e419 */
  if (!zf) goto L_42e419;
L_42e413: /* 42e413: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 42e417: jmp 0x42e41e */
  goto L_42e41e;
L_42e419: /* 42e419: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e41c: jne 0x42e43c */
  if (!zf) goto L_42e43c;
L_42e41e: /* 42e41e: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e421: jne 0x42e42d */
  if (!zf) goto L_42e42d;
L_42e423: /* 42e423: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e425: je 0x42e42d */
  if (zf) goto L_42e42d;
L_42e427: /* 42e427: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42e42b: jmp 0x42e43c */
  goto L_42e43c;
L_42e42d: /* 42e42d: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e430: mov edx, esi */
  edx = esi;
/* 42e432: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e437u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e437: mov ebx, eax */
  ebx = eax;
L_42e439: /* 42e439: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e43c: /* 42e43c: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e440: je 0x42e541 */
  if (zf) goto L_42e541;
L_42e446: /* 42e446: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e44a: jne 0x42e51f */
  if (!zf) goto L_42e51f;
L_42e450: /* 42e450: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e453: je 0x42e49b */
  if (zf) goto L_42e49b;
L_42e455: /* 42e455: cmp edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e458: je 0x42e49b */
  if (zf) goto L_42e49b;
L_42e45a: /* 42e45a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e45b: call 0x40152b */
  esp -= 4; W32(esp, 0x42e460u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42e460: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e461: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e463: je 0x42e4cc */
  if (zf) goto L_42e4cc;
L_42e465: /* 42e465: cmp edi, 0x6f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e468: jne 0x42e484 */
  if (!zf) goto L_42e484;
L_42e46a: /* 42e46a: cmp ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e46d: jge 0x42e4cc */
  if ((sf == of)) goto L_42e4cc;
L_42e46f: /* 42e46f: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42e472: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42e475: shld ecx, eax, 3 */
  { uint32_t a = ecx, b = eax, c = (0x3u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 42e479: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42e47c: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42e47f: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42e482: jmp 0x42e4cf */
  goto L_42e4cf;
L_42e484: /* 42e484: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42e486: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 42e488: push dword ptr [ebp - 0x58] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa8u)); esp -= 4; W32(esp, v); }
/* 42e48b: push dword ptr [ebp - 0x5c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa4u)); esp -= 4; W32(esp, v); }
/* 42e48e: call 0x40518c */
  esp -= 4; W32(esp, 0x42e493u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 42e493: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42e496: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 42e499: jmp 0x42e4cf */
  goto L_42e4cf;
L_42e49b: /* 42e49b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e49c: call 0x415449 */
  esp -= 4; W32(esp, 0x42e4a1u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 42e4a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e4a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 42e4a4: je 0x42e4cc */
  if (zf) goto L_42e4cc;
L_42e4a6: /* 42e4a6: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42e4a9: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42e4ac: shld ecx, eax, 4 */
  { uint32_t a = ecx, b = eax, c = (0x4u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 42e4b0: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42e4b3: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42e4b6: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42e4b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e4ba: call 0x40152b */
  esp -= 4; W32(esp, 0x42e4bfu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42e4bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e4c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e4c2: jne 0x42e4cf */
  if (!zf) goto L_42e4cf;
L_42e4c4: /* 42e4c4: and ebx, 0xffffffdf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 42e4c7: sub ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 42e4ca: jmp 0x42e4cf */
  goto L_42e4cf;
L_42e4cc: /* 42e4cc: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42e4cf: /* 42e4cf: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e4d3: jne 0x42e501 */
  if (!zf) goto L_42e501;
L_42e4d5: /* 42e4d5: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42e4d8: lea eax, [ebx - 0x30] */
  eax = (uint32_t)(ebx + 0xffffffd0u);
/* 42e4db: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 42e4dc: add dword ptr [ebp - 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 42e4df: adc dword ptr [ebp - 0x58], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 42e4e2: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e4e6: je 0x42e4f3 */
  if (zf) goto L_42e4f3;
L_42e4e8: /* 42e4e8: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e4eb: jne 0x42e4f3 */
  if (!zf) goto L_42e4f3;
L_42e4ed: /* 42e4ed: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42e4f1: jmp 0x42e512 */
  goto L_42e512;
L_42e4f3: /* 42e4f3: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e4f6: mov edx, esi */
  edx = esi;
/* 42e4f8: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e4fdu); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e4fd: mov ebx, eax */
  ebx = eax;
/* 42e4ff: jmp 0x42e512 */
  goto L_42e512;
L_42e501: /* 42e501: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e504: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e507: je 0x42e512 */
  if (zf) goto L_42e512;
L_42e509: /* 42e509: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42e50a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e50b: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e510u); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e510: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e511: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e512: /* 42e512: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e516: je 0x42e450 */
  if (zf) goto L_42e450;
L_42e51c: /* 42e51c: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e51f: /* 42e51f: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e523: je 0x42e5fb */
  if (zf) goto L_42e5fb;
L_42e529: /* 42e529: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42e52c: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 42e52e: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42e531: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 42e534: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 42e536: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42e539: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42e53c: jmp 0x42e5fb */
  goto L_42e5fb;
L_42e541: /* 42e541: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e545: jne 0x42e5f2 */
  if (!zf) goto L_42e5f2;
L_42e54b: /* 42e54b: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e54e: je 0x42e57d */
  if (zf) goto L_42e57d;
L_42e550: /* 42e550: cmp edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e553: je 0x42e57d */
  if (zf) goto L_42e57d;
L_42e555: /* 42e555: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e556: call 0x40152b */
  esp -= 4; W32(esp, 0x42e55bu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42e55b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e55c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e55e: je 0x42e59f */
  if (zf) goto L_42e59f;
L_42e560: /* 42e560: cmp edi, 0x6f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e563: jne 0x42e570 */
  if (!zf) goto L_42e570;
L_42e565: /* 42e565: cmp ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e568: jge 0x42e59f */
  if ((sf == of)) goto L_42e59f;
L_42e56a: /* 42e56a: shl dword ptr [ebp - 0x38], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42e56e: jmp 0x42e5a2 */
  goto L_42e5a2;
L_42e570: /* 42e570: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42e573: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 42e576: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42e578: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42e57b: jmp 0x42e5a2 */
  goto L_42e5a2;
L_42e57d: /* 42e57d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e57e: call 0x415449 */
  esp -= 4; W32(esp, 0x42e583u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 42e583: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e584: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e586: je 0x42e59f */
  if (zf) goto L_42e59f;
L_42e588: /* 42e588: shl dword ptr [ebp - 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42e58c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e58d: call 0x40152b */
  esp -= 4; W32(esp, 0x42e592u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42e592: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e593: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e595: jne 0x42e5a2 */
  if (!zf) goto L_42e5a2;
L_42e597: /* 42e597: and ebx, 0xffffffdf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 42e59a: sub ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 42e59d: jmp 0x42e5a2 */
  goto L_42e5a2;
L_42e59f: /* 42e59f: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42e5a2: /* 42e5a2: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e5a6: jne 0x42e5d4 */
  if (!zf) goto L_42e5d4;
L_42e5a8: /* 42e5a8: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42e5ab: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42e5ae: lea eax, [eax + ebx - 0x30] */
  eax = (uint32_t)(eax + ebx + 0xffffffd0u);
/* 42e5b2: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42e5b5: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e5b9: je 0x42e5c6 */
  if (zf) goto L_42e5c6;
L_42e5bb: /* 42e5bb: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e5be: jne 0x42e5c6 */
  if (!zf) goto L_42e5c6;
L_42e5c0: /* 42e5c0: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42e5c4: jmp 0x42e5e5 */
  goto L_42e5e5;
L_42e5c6: /* 42e5c6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e5c9: mov edx, esi */
  edx = esi;
/* 42e5cb: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e5d0u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e5d0: mov ebx, eax */
  ebx = eax;
/* 42e5d2: jmp 0x42e5e5 */
  goto L_42e5e5;
L_42e5d4: /* 42e5d4: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e5d7: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e5da: je 0x42e5e5 */
  if (zf) goto L_42e5e5;
L_42e5dc: /* 42e5dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42e5dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42e5de: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e5e3u); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e5e3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e5e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e5e5: /* 42e5e5: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e5e9: je 0x42e54b */
  if (zf) goto L_42e54b;
L_42e5ef: /* 42e5ef: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e5f2: /* 42e5f2: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e5f6: je 0x42e5fb */
  if (zf) goto L_42e5fb;
L_42e5f8: /* 42e5f8: neg dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
L_42e5fb: /* 42e5fb: cmp edi, 0x46 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e5fe: jne 0x42e604 */
  if (!zf) goto L_42e604;
L_42e600: /* 42e600: and dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
L_42e604: /* 42e604: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e608: je 0x42e6c9 */
  if (zf) goto L_42e6c9;
L_42e60e: /* 42e60e: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e612: jne 0x42e63d */
  if (!zf) goto L_42e63d;
L_42e614: /* 42e614: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42e617: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42e61a: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
L_42e61d: /* 42e61d: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e621: je 0x42e630 */
  if (zf) goto L_42e630;
L_42e623: /* 42e623: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42e626: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 42e628: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42e62b: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 42e62e: jmp 0x42e63d */
  goto L_42e63d;
L_42e630: /* 42e630: cmp byte ptr [ebp - 0x4f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e634: je 0x42e63a */
  if (zf) goto L_42e63a;
L_42e636: /* 42e636: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 42e638: jmp 0x42e63d */
  goto L_42e63d;
L_42e63a: /* 42e63a: mov word ptr [ebx], ax */
  W16((uint32_t)(ebx), (eax & 0xffffu));
L_42e63d: /* 42e63d: inc byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42e640: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 42e643: jmp 0x42e6ad */
  goto L_42e6ad;
L_42e645: /* 42e645: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e648: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42e64b: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e650u); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e650: mov ebx, eax */
  ebx = eax;
/* 42e652: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42e655: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 42e658: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42e659: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 42e65c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e65e: jne 0x42e696 */
  if (!zf) goto L_42e696;
L_42e660: /* 42e660: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 42e663: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 42e669: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42e66e: je 0x42e6ad */
  if (zf) goto L_42e6ad;
L_42e670: /* 42e670: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e673: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42e676: call 0x42dc46 */
  esp -= 4; W32(esp, 0x42e67bu); SPILL(); f_42dc46(); if (g_unwind) return; RELOAD();
/* 42e67b: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 42e67e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42e67f: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 42e682: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e684: je 0x42e6aa */
  if (zf) goto L_42e6aa;
L_42e686: /* 42e686: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e689: je 0x42e696 */
  if (zf) goto L_42e696;
L_42e68b: /* 42e68b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e68e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e68f: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e694u); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e694: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e695: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e696: /* 42e696: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_42e699: /* 42e699: je 0x42e6c9 */
  if (zf) goto L_42e6c9;
L_42e69b: /* 42e69b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e69e: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42e6a1: call 0x42d581 */
  esp -= 4; W32(esp, 0x42e6a6u); SPILL(); f_42d581(); if (g_unwind) return; RELOAD();
/* 42e6a6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e6a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e6a8: jmp 0x42e6c9 */
  goto L_42e6c9;
L_42e6aa: /* 42e6aa: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
L_42e6ad: /* 42e6ad: cmp dword ptr [ebp - 0x28], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e6b1: jne 0x42dc8a */
  if (!zf) goto L_42dc8a;
L_42e6b7: /* 42e6b7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42e6ba: cmp byte ptr [eax], 0x25 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x25u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e6bd: jne 0x42e6c9 */
  if (!zf) goto L_42e6c9;
L_42e6bf: /* 42e6bf: cmp byte ptr [eax + 1], 0x6e */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1u))); uint8_t b = (uint8_t)(0x6eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e6c3: je 0x42dc8a */
  if (zf) goto L_42dc8a;
L_42e6c9: /* 42e6c9: cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e6cd: jne 0x42e6d8 */
  if (!zf) goto L_42e6d8;
L_42e6cf: /* 42e6cf: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42e6d2: call 0x401156 */
  esp -= 4; W32(esp, 0x42e6d7u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42e6d7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e6d8: /* 42e6d8: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 42e6db: cmp dword ptr [ebp - 0x28], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e6df: jne 0x42e6ed */
  if (!zf) goto L_42e6ed;
L_42e6e1: /* 42e6e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e6e3: jne 0x42e6ed */
  if (!zf) goto L_42e6ed;
L_42e6e5: /* 42e6e5: cmp byte ptr [ebp - 0x29], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e6e8: jne 0x42e6ed */
  if (!zf) goto L_42e6ed;
L_42e6ea: /* 42e6ea: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_42e6ed: /* 42e6ed: lea esp, [ebp - 0x1e4] */
  esp = (uint32_t)(ebp + 0xfffffe1cu);
/* 42e6f3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42e6f6: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42e6f9: call 0x4013ab */
  esp -= 4; W32(esp, 0x42e6feu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 42e6fe: call 0x40105a */
  esp -= 4; W32(esp, 0x42e703u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42e703: ret  */
  esp += 4; SPILL(); return;
}

void f_42e704(void) {
  LOAD_REGS();
L_42e704: /* 42e704: cmp word ptr [esp + 4], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x4u))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e70a: jne 0x42d632 */
  if (!zf) { SPILL(); f_42d632(); return; }
L_42e710: /* 42e710: ret  */
  esp += 4; SPILL(); return;
}

void f_42e711(void) {
  LOAD_REGS();
L_42e711: /* 42e711: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_42e712: /* 42e712: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e716: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 42e718: call 0x42c65c */
  esp -= 4; W32(esp, 0x42e71du); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42e71d: mov edi, eax */
  edi = eax;
/* 42e71f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42e720: call 0x41750b */
  esp -= 4; W32(esp, 0x42e725u); SPILL(); f_41750b(); if (g_unwind) return; RELOAD();
/* 42e725: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e727: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e728: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e729: jne 0x42e712 */
  if (!zf) goto L_42e712;
L_42e72b: /* 42e72b: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 42e72e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42e72f: ret  */
  esp += 4; SPILL(); return;
}

void f_42e730(void) {
  LOAD_REGS();
L_42e730: /* 42e730: push 0x31c */
  { uint32_t v = 0x31cu; esp -= 4; W32(esp, v); }
/* 42e735: push 0x441158 */
  { uint32_t v = 0x441158u; esp -= 4; W32(esp, v); }
/* 42e73a: call 0x40101f */
  esp -= 4; W32(esp, 0x42e73fu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42e73f: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 42e744: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 42e747: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42e74a: xor ebx, ebx */
  ebx = 0;
/* 42e74c: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 42e74f: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 42e752: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42e755: and byte ptr [ebp - 0x29], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42e758: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 42e75b: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
L_42e75e: /* 42e75e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42e761: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 42e764: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42e767: je 0x42f1dc */
  if (zf) goto L_42f1dc;
L_42e76d: /* 42e76d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 42e76f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e770: call 0x401414 */
  esp -= 4; W32(esp, 0x42e775u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 42e775: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e776: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e779: je 0x42e7ac */
  if (zf) goto L_42e7ac;
L_42e77b: /* 42e77b: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e77e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e781: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e784: lea esi, [ebp - 0x30] */
  esi = (uint32_t)(ebp + 0xffffffd0u);
/* 42e787: call 0x42e711 */
  esp -= 4; W32(esp, 0x42e78cu); SPILL(); f_42e711(); if (g_unwind) return; RELOAD();
/* 42e78c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e78d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e78e: call 0x42e704 */
  esp -= 4; W32(esp, 0x42e793u); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42e793: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e794: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e795: /* 42e795: add dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 42e799: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42e79c: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 42e79f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e7a0: call 0x41750b */
  esp -= 4; W32(esp, 0x42e7a5u); SPILL(); f_41750b(); if (g_unwind) return; RELOAD();
/* 42e7a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e7a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e7a8: jne 0x42e795 */
  if (!zf) goto L_42e795;
L_42e7aa: /* 42e7aa: jmp 0x42e75e */
  goto L_42e75e;
L_42e7ac: /* 42e7ac: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 42e7af: cmp word ptr [edi], 0x25 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x25u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e7b3: jne 0x42f219 */
  if (!zf) goto L_42f219;
L_42e7b9: /* 42e7b9: xor eax, eax */
  eax = 0;
/* 42e7bb: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42e7be: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 42e7c1: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 42e7c4: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 42e7c7: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 42e7ca: and byte ptr [ebp - 0x49], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
/* 42e7cd: and byte ptr [ebp - 0x4a], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb6u), r);
  }
/* 42e7d0: and byte ptr [ebp - 0x4b], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 42e7d3: and byte ptr [ebp - 0x4c], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42e7d6: and byte ptr [ebp - 0x4d], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
/* 42e7d9: and byte ptr [ebp - 0x4e], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42e7dc: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
/* 42e7e0: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
L_42e7e3: /* 42e7e3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e7e4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e7e5: movzx esi, word ptr [edi] */
  esi = (uint32_t)(R16((uint32_t)(edi)));
/* 42e7e8: test si, 0xff00 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xff00u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42e7ed: jne 0x42e816 */
  if (!zf) goto L_42e816;
L_42e7ef: /* 42e7ef: mov eax, esi */
  eax = esi;
/* 42e7f1: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42e7f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e7f7: call 0x40152b */
  esp -= 4; W32(esp, 0x42e7fcu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42e7fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e7fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e7ff: je 0x42e816 */
  if (zf) goto L_42e816;
L_42e801: /* 42e801: inc dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffbcu), r);
  }
/* 42e804: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42e807: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 42e80a: lea eax, [esi + eax*2 - 0x30] */
  eax = (uint32_t)(esi + eax*2 + 0xffffffd0u);
/* 42e80e: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 42e811: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e816: /* 42e816: cmp esi, 0x4e */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e819: jg 0x42e898 */
  if ((!zf && sf == of)) goto L_42e898;
L_42e81b: /* 42e81b: je 0x42e8ba */
  if (zf) goto L_42e8ba;
L_42e821: /* 42e821: cmp esi, 0x2a */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e824: je 0x42e893 */
  if (zf) goto L_42e893;
L_42e826: /* 42e826: cmp esi, 0x46 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e829: je 0x42e8ba */
  if (zf) goto L_42e8ba;
L_42e82f: /* 42e82f: cmp esi, 0x49 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x49u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e832: je 0x42e83e */
  if (zf) goto L_42e83e;
L_42e834: /* 42e834: cmp esi, 0x4c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e837: jne 0x42e8a7 */
  if (!zf) goto L_42e8a7;
L_42e839: /* 42e839: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 42e83c: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e83e: /* 42e83e: mov cx, word ptr [edi + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x2u))) & 0xffffu);
/* 42e842: cmp cx, 0x36 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x36u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e846: jne 0x42e860 */
  if (!zf) goto L_42e860;
L_42e848: /* 42e848: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 42e84b: cmp word ptr [eax], 0x34 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x34u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e84f: jne 0x42e860 */
  if (!zf) goto L_42e860;
L_42e851: /* 42e851: mov edi, eax */
  edi = eax;
/* 42e853: inc dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffacu), r);
  }
/* 42e856: and dword ptr [ebp - 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 42e85a: and dword ptr [ebp - 0x58], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 42e85e: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e860: /* 42e860: cmp cx, 0x33 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x33u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e864: jne 0x42e873 */
  if (!zf) goto L_42e873;
L_42e866: /* 42e866: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 42e869: cmp word ptr [eax], 0x32 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x32u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e86d: jne 0x42e873 */
  if (!zf) goto L_42e873;
L_42e86f: /* 42e86f: mov edi, eax */
  edi = eax;
/* 42e871: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e873: /* 42e873: cmp cx, 0x64 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x64u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e877: je 0x42e8ba */
  if (zf) goto L_42e8ba;
L_42e879: /* 42e879: cmp cx, 0x69 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x69u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e87d: je 0x42e8ba */
  if (zf) goto L_42e8ba;
L_42e87f: /* 42e87f: cmp cx, 0x6f */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x6fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e883: je 0x42e8ba */
  if (zf) goto L_42e8ba;
L_42e885: /* 42e885: cmp cx, 0x78 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e889: je 0x42e8ba */
  if (zf) goto L_42e8ba;
L_42e88b: /* 42e88b: cmp cx, 0x58 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e88f: jne 0x42e8a7 */
  if (!zf) goto L_42e8a7;
L_42e891: /* 42e891: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e893: /* 42e893: inc byte ptr [ebp - 0x4b] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 42e896: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e898: /* 42e898: cmp esi, 0x68 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e89b: je 0x42e8b4 */
  if (zf) goto L_42e8b4;
L_42e89d: /* 42e89d: cmp esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8a0: je 0x42e8ac */
  if (zf) goto L_42e8ac;
L_42e8a2: /* 42e8a2: cmp esi, 0x77 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8a5: je 0x42e8af */
  if (zf) goto L_42e8af;
L_42e8a7: /* 42e8a7: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42e8aa: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e8ac: /* 42e8ac: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
L_42e8af: /* 42e8af: inc byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42e8b2: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e8b4: /* 42e8b4: dec byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 42e8b7: dec byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
L_42e8ba: /* 42e8ba: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8be: je 0x42e7e3 */
  if (zf) goto L_42e7e3;
L_42e8c4: /* 42e8c4: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 42e8c7: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8cb: jne 0x42e8e1 */
  if (!zf) goto L_42e8e1;
L_42e8cd: /* 42e8cd: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 42e8d0: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 42e8d3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42e8d6: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 42e8d9: mov edi, dword ptr [eax - 4] */
  edi = R32((uint32_t)(eax + 0xfffffffcu));
/* 42e8dc: mov dword ptr [ebp - 0x64], edi */
  W32((uint32_t)(ebp + 0xffffff9cu), edi);
/* 42e8df: jmp 0x42e8e4 */
  goto L_42e8e4;
L_42e8e1: /* 42e8e1: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
L_42e8e4: /* 42e8e4: and byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42e8e8: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8ec: jne 0x42e90a */
  if (!zf) goto L_42e90a;
L_42e8ee: /* 42e8ee: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42e8f1: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 42e8f4: cmp ax, 0x53 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x53u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8f8: je 0x42e906 */
  if (zf) goto L_42e906;
L_42e8fa: /* 42e8fa: cmp ax, 0x43 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x43u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8fe: je 0x42e906 */
  if (zf) goto L_42e906;
L_42e900: /* 42e900: mov byte ptr [ebp - 0x4e], 1 */
  W8((uint32_t)(ebp + 0xffffffb2u), 0x1u);
/* 42e904: jmp 0x42e90a */
  goto L_42e90a;
L_42e906: /* 42e906: or byte ptr [ebp - 0x4e], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
L_42e90a: /* 42e90a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42e90d: movzx esi, word ptr [eax] */
  esi = (uint32_t)(R16((uint32_t)(eax)));
/* 42e910: or esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 42e913: mov dword ptr [ebp - 0x68], esi */
  W32((uint32_t)(ebp + 0xffffff98u), esi);
/* 42e916: cmp esi, 0x6e */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e919: je 0x42e946 */
  if (zf) goto L_42e946;
L_42e91b: /* 42e91b: cmp esi, 0x63 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e91e: je 0x42e935 */
  if (zf) goto L_42e935;
L_42e920: /* 42e920: cmp esi, 0x7b */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e923: je 0x42e935 */
  if (zf) goto L_42e935;
L_42e925: /* 42e925: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e928: lea esi, [ebp - 0x30] */
  esi = (uint32_t)(ebp + 0xffffffd0u);
/* 42e92b: call 0x42e711 */
  esp -= 4; W32(esp, 0x42e930u); SPILL(); f_42e711(); if (g_unwind) return; RELOAD();
/* 42e930: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 42e933: jmp 0x42e940 */
  goto L_42e940;
L_42e935: /* 42e935: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e938: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e93b: call 0x42c65c */
  esp -= 4; W32(esp, 0x42e940u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
L_42e940: /* 42e940: mov ebx, eax */
  ebx = eax;
/* 42e942: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e943: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e946: /* 42e946: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 42e949: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e94b: je 0x42e957 */
  if (zf) goto L_42e957;
L_42e94d: /* 42e94d: cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e951: je 0x42f237 */
  if (zf) goto L_42f237;
L_42e957: /* 42e957: cmp esi, 0x6f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e95a: jg 0x42ec9a */
  if ((!zf && sf == of)) goto L_42ec9a;
L_42e960: /* 42e960: je 0x42ef5b */
  if (zf) goto L_42ef5b;
L_42e966: /* 42e966: cmp esi, 0x63 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e969: je 0x42ebd2 */
  if (zf) goto L_42ebd2;
L_42e96f: /* 42e96f: cmp esi, 0x64 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e972: je 0x42ef5b */
  if (zf) goto L_42ef5b;
L_42e978: /* 42e978: jle 0x42ecc4 */
  if ((zf || sf != of)) goto L_42ecc4;
L_42e97e: /* 42e97e: cmp esi, 0x67 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e981: jle 0x42e9bc */
  if ((zf || sf != of)) goto L_42e9bc;
L_42e983: /* 42e983: cmp esi, 0x69 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e986: je 0x42e9a3 */
  if (zf) goto L_42e9a3;
L_42e988: /* 42e988: cmp esi, 0x6e */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e98b: jne 0x42ecc4 */
  if (!zf) goto L_42ecc4;
L_42e991: /* 42e991: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 42e994: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e998: je 0x42f195 */
  if (zf) goto L_42f195;
L_42e99e: /* 42e99e: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42e9a3: /* 42e9a3: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 42e9a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42e9a6: mov dword ptr [ebp - 0x68], esi */
  W32((uint32_t)(ebp + 0xffffff98u), esi);
L_42e9a9: /* 42e9a9: cmp bx, 0x2d */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e9ad: jne 0x42ee41 */
  if (!zf) goto L_42ee41;
L_42e9b3: /* 42e9b3: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 42e9b7: jmp 0x42ee47 */
  goto L_42ee47;
L_42e9bc: /* 42e9bc: lea esi, [ebp - 0x324] */
  esi = (uint32_t)(ebp + 0xfffffcdcu);
/* 42e9c2: cmp bx, 0x2d */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e9c6: jne 0x42e9d7 */
  if (!zf) goto L_42e9d7;
L_42e9c8: /* 42e9c8: mov word ptr [ebp - 0x324], bx */
  W16((uint32_t)(ebp + 0xfffffcdcu), (ebx & 0xffffu));
/* 42e9cf: lea esi, [ebp - 0x322] */
  esi = (uint32_t)(ebp + 0xfffffcdeu);
/* 42e9d5: jmp 0x42e9dd */
  goto L_42e9dd;
L_42e9d7: /* 42e9d7: cmp bx, 0x2b */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e9db: jne 0x42e9f1 */
  if (!zf) goto L_42e9f1;
L_42e9dd: /* 42e9dd: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e9e0: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e9e3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e9e6: call 0x42c65c */
  esp -= 4; W32(esp, 0x42e9ebu); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42e9eb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e9ec: mov ebx, eax */
  ebx = eax;
/* 42e9ee: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e9f1: /* 42e9f1: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e9f5: je 0x42ea00 */
  if (zf) goto L_42ea00;
L_42e9f7: /* 42e9f7: cmp dword ptr [ebp - 0x48], 0x15d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x15du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e9fe: jle 0x42ea07 */
  if ((zf || sf != of)) goto L_42ea07;
L_42ea00: /* 42ea00: mov dword ptr [ebp - 0x48], 0x15d */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x15du);
L_42ea07: /* 42ea07: mov edi, 0xff00 */
  edi = 0xff00u;
/* 42ea0c: jmp 0x42ea43 */
  goto L_42ea43;
L_42ea0e: /* 42ea0e: mov eax, ebx */
  eax = ebx;
/* 42ea10: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42ea15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ea16: call 0x40152b */
  esp -= 4; W32(esp, 0x42ea1bu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42ea1b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ea1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ea1e: je 0x42ea48 */
  if (zf) goto L_42ea48;
L_42ea20: /* 42ea20: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42ea23: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42ea26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ea28: je 0x42ea48 */
  if (zf) goto L_42ea48;
L_42ea2a: /* 42ea2a: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42ea2d: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 42ea30: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ea31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ea32: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ea35: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ea38: call 0x42c65c */
  esp -= 4; W32(esp, 0x42ea3du); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42ea3d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ea3e: mov ebx, eax */
  ebx = eax;
/* 42ea40: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42ea43: /* 42ea43: test di, bx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42ea46: je 0x42ea0e */
  if (zf) goto L_42ea0e;
L_42ea48: /* 42ea48: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 42ea4e: push 0x44a9ac */
  { uint32_t v = 0x44a9acu; esp -= 4; W32(esp, v); }
/* 42ea53: lea eax, [ebp - 0x328] */
  eax = (uint32_t)(ebp + 0xfffffcd8u);
/* 42ea59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ea5a: call 0x402197 */
  esp -= 4; W32(esp, 0x42ea5fu); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 42ea5f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ea62: cmp word ptr [ebp - 0x328], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffcd8u))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ea69: jne 0x42eaca */
  if (!zf) goto L_42eaca;
L_42ea6b: /* 42ea6b: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42ea6e: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42ea71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ea73: je 0x42eaca */
  if (zf) goto L_42eaca;
L_42ea75: /* 42ea75: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ea78: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ea7b: call 0x42c65c */
  esp -= 4; W32(esp, 0x42ea80u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42ea80: mov ebx, eax */
  ebx = eax;
/* 42ea82: mov ax, word ptr [ebp - 0x328] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffcd8u))) & 0xffffu);
/* 42ea89: mov word ptr [esi], ax */
  W16((uint32_t)(esi), (eax & 0xffffu));
/* 42ea8c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ea8d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ea8e: jmp 0x42eac1 */
  goto L_42eac1;
L_42ea90: /* 42ea90: mov eax, ebx */
  eax = ebx;
/* 42ea92: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42ea97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ea98: call 0x40152b */
  esp -= 4; W32(esp, 0x42ea9du); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42ea9d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ea9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eaa0: je 0x42eaca */
  if (zf) goto L_42eaca;
L_42eaa2: /* 42eaa2: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42eaa5: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eaa8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eaaa: je 0x42eaca */
  if (zf) goto L_42eaca;
L_42eaac: /* 42eaac: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42eaaf: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 42eab2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eab3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eab4: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42eab7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42eaba: call 0x42c65c */
  esp -= 4; W32(esp, 0x42eabfu); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42eabf: mov ebx, eax */
  ebx = eax;
L_42eac1: /* 42eac1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eac2: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42eac5: test di, bx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42eac8: je 0x42ea90 */
  if (zf) goto L_42ea90;
L_42eaca: /* 42eaca: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42eace: je 0x42eb5e */
  if (zf) goto L_42eb5e;
L_42ead4: /* 42ead4: cmp bx, 0x65 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x65u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ead8: je 0x42eae0 */
  if (zf) goto L_42eae0;
L_42eada: /* 42eada: cmp bx, 0x45 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x45u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42eade: jne 0x42eb5e */
  if (!zf) goto L_42eb5e;
L_42eae0: /* 42eae0: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42eae3: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eae6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eae8: je 0x42eb5e */
  if (zf) goto L_42eb5e;
L_42eaea: /* 42eaea: mov word ptr [esi], 0x65 */
  W16((uint32_t)(esi), 0x65u);
/* 42eaef: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eaf0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eaf1: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42eaf4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42eaf7: call 0x42c65c */
  esp -= 4; W32(esp, 0x42eafcu); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42eafc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eafd: mov ebx, eax */
  ebx = eax;
/* 42eaff: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42eb02: cmp bx, 0x2d */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42eb06: jne 0x42eb0f */
  if (!zf) goto L_42eb0f;
L_42eb08: /* 42eb08: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 42eb0b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eb0c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eb0d: jmp 0x42eb15 */
  goto L_42eb15;
L_42eb0f: /* 42eb0f: cmp bx, 0x2b */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42eb13: jne 0x42eb59 */
  if (!zf) goto L_42eb59;
L_42eb15: /* 42eb15: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42eb18: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eb1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eb1d: jne 0x42eb48 */
  if (!zf) goto L_42eb48;
L_42eb1f: /* 42eb1f: and dword ptr [ebp - 0x48], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eb22: jmp 0x42eb59 */
  goto L_42eb59;
L_42eb24: /* 42eb24: mov eax, ebx */
  eax = ebx;
/* 42eb26: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42eb2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42eb2c: call 0x40152b */
  esp -= 4; W32(esp, 0x42eb31u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42eb31: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eb32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eb34: je 0x42eb5e */
  if (zf) goto L_42eb5e;
L_42eb36: /* 42eb36: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42eb39: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eb3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eb3e: je 0x42eb5e */
  if (zf) goto L_42eb5e;
L_42eb40: /* 42eb40: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42eb43: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 42eb46: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eb47: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_42eb48: /* 42eb48: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42eb4b: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42eb4e: call 0x42c65c */
  esp -= 4; W32(esp, 0x42eb53u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42eb53: mov ebx, eax */
  ebx = eax;
/* 42eb55: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42eb58: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42eb59: /* 42eb59: test di, bx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42eb5c: je 0x42eb24 */
  if (zf) goto L_42eb24;
L_42eb5e: /* 42eb5e: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42eb61: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42eb64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42eb65: call 0x42e704 */
  esp -= 4; W32(esp, 0x42eb6au); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42eb6a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eb6b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eb6c: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42eb70: je 0x42f1dc */
  if (zf) goto L_42f1dc;
L_42eb76: /* 42eb76: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42eb7a: jne 0x42f1b5 */
  if (!zf) goto L_42f1b5;
L_42eb80: /* 42eb80: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42eb83: and word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi), r);
  }
/* 42eb87: lea eax, [ebp - 0x324] */
  eax = (uint32_t)(ebp + 0xfffffcdcu);
/* 42eb8d: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 42eb8f: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 42eb91: lea esi, [esi + esi + 2] */
  esi = (uint32_t)(esi + esi + 0x2u);
/* 42eb95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42eb96: call 0x4010eb */
  esp -= 4; W32(esp, 0x42eb9bu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42eb9b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eb9c: mov edi, eax */
  edi = eax;
/* 42eb9e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eba0: je 0x42f1dc */
  if (zf) goto L_42f1dc;
L_42eba6: /* 42eba6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42eba7: lea eax, [ebp - 0x324] */
  eax = (uint32_t)(ebp + 0xfffffcdcu);
/* 42ebad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ebae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42ebaf: call 0x417e01 */
  esp -= 4; W32(esp, 0x42ebb4u); SPILL(); f_417e01(); if (g_unwind) return; RELOAD();
/* 42ebb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42ebb5: push dword ptr [ebp - 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff9cu)); esp -= 4; W32(esp, v); }
/* 42ebb8: movsx eax, byte ptr [ebp - 0x4f] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
/* 42ebbc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42ebbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ebbe: call dword ptr [0x44afa8] */
  { uint32_t t = R32((uint32_t)(0x44afa8u)); esp -= 4; W32(esp, 0x42ebc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 42ebc4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42ebc5: call 0x401156 */
  esp -= 4; W32(esp, 0x42ebcau); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42ebca: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ebcd: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42ebd2: /* 42ebd2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ebd4: jne 0x42ebe0 */
  if (!zf) goto L_42ebe0;
L_42ebd6: /* 42ebd6: mov dword ptr [ebp - 0x44], 1 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x1u);
/* 42ebdd: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
L_42ebe0: /* 42ebe0: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42ebe4: jle 0x42ebea */
  if ((zf || sf != of)) goto L_42ebea;
L_42ebe6: /* 42ebe6: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
L_42ebea: /* 42ebea: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42ebed: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ebf0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ebf3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42ebf4: call 0x42e704 */
  esp -= 4; W32(esp, 0x42ebf9u); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
L_42ebf9: /* 42ebf9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ebfa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42ebfb: /* 42ebfb: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ebff: je 0x42ec0f */
  if (zf) goto L_42ec0f;
L_42ec01: /* 42ec01: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42ec04: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42ec07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ec09: je 0x42ef1d */
  if (zf) goto L_42ef1d;
L_42ec0f: /* 42ec0f: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ec12: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ec15: call 0x42c65c */
  esp -= 4; W32(esp, 0x42ec1au); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42ec1a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ec1b: mov ebx, eax */
  ebx = eax;
/* 42ec1d: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42ec20: cmp bx, -1 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec24: je 0x42ef0f */
  if (zf) goto L_42ef0f;
L_42ec2a: /* 42ec2a: cmp dword ptr [ebp - 0x68], 0x63 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec2e: je 0x42ec77 */
  if (zf) goto L_42ec77;
L_42ec30: /* 42ec30: cmp dword ptr [ebp - 0x68], 0x73 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x73u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec34: jne 0x42ec48 */
  if (!zf) goto L_42ec48;
L_42ec36: /* 42ec36: cmp bx, 9 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42ec3a: jb 0x42ec42 */
  if (cf) goto L_42ec42;
L_42ec3c: /* 42ec3c: cmp bx, 0xd */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42ec40: jbe 0x42ec48 */
  if ((cf | zf)) goto L_42ec48;
L_42ec42: /* 42ec42: cmp bx, 0x20 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec46: jne 0x42ec77 */
  if (!zf) goto L_42ec77;
L_42ec48: /* 42ec48: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec4c: jne 0x42ef0f */
  if (!zf) goto L_42ef0f;
L_42ec52: /* 42ec52: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 42ec55: mov ecx, eax */
  ecx = eax;
/* 42ec57: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 42ec5a: xor edx, edx */
  edx = 0;
  cf = 0;
/* 42ec5c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  edx = r;
  }
/* 42ec5d: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 42ec5f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42ec62: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42ec65: movsx eax, byte ptr [eax + ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + ecx)));
/* 42ec69: movsx ecx, byte ptr [ebp - 0x49] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb7u)));
/* 42ec6d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 42ec6f: test eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ec71: je 0x42ef0f */
  if (zf) goto L_42ef0f;
L_42ec77: /* 42ec77: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec7b: jne 0x42ef08 */
  if (!zf) goto L_42ef08;
L_42ec81: /* 42ec81: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec85: je 0x42eef7 */
  if (zf) goto L_42eef7;
L_42ec8b: /* 42ec8b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42ec8e: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 42ec91: add dword ptr [ebp - 0x64], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffff9cu), r);
  }
/* 42ec95: jmp 0x42ebfb */
  goto L_42ebfb;
L_42ec9a: /* 42ec9a: mov eax, esi */
  eax = esi;
/* 42ec9c: sub eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42ec9f: je 0x42ef57 */
  if (zf) goto L_42ef57;
L_42eca5: /* 42eca5: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42eca8: je 0x42ebe0 */
  if (zf) goto L_42ebe0;
L_42ecae: /* 42ecae: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42ecaf: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42ecb0: je 0x42ef5b */
  if (zf) goto L_42ef5b;
L_42ecb6: /* 42ecb6: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42ecb9: je 0x42e9a9 */
  if (zf) goto L_42e9a9;
L_42ecbf: /* 42ecbf: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42ecc2: je 0x42ece8 */
  if (zf) goto L_42ece8;
L_42ecc4: /* 42ecc4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42ecc7: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ecca: jne 0x42f237 */
  if (!zf) goto L_42f237;
L_42ecd0: /* 42ecd0: dec byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42ecd3: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ecd7: jne 0x42f1b5 */
  if (!zf) goto L_42f1b5;
L_42ecdd: /* 42ecdd: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 42ece0: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 42ece3: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42ece8: /* 42ece8: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42ecec: jle 0x42ecf2 */
  if ((zf || sf != of)) goto L_42ecf2;
L_42ecee: /* 42ecee: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
L_42ecf2: /* 42ecf2: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 42ecf5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42ecf6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42ecf7: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 42ecfa: mov dword ptr [ebp - 0x32c], edi */
  W32((uint32_t)(ebp + 0xfffffcd4u), edi);
/* 42ed00: cmp word ptr [edi], 0x5e */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x5eu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ed04: jne 0x42ed13 */
  if (!zf) goto L_42ed13;
L_42ed06: /* 42ed06: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 42ed09: mov dword ptr [ebp - 0x32c], edi */
  W32((uint32_t)(ebp + 0xfffffcd4u), edi);
/* 42ed0f: or byte ptr [ebp - 0x49], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
L_42ed13: /* 42ed13: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ed17: jne 0x42ed73 */
  if (!zf) goto L_42ed73;
L_42ed19: /* 42ed19: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42ed1d: mov eax, 0x2000 */
  eax = 0x2000u;
/* 42ed22: call 0x4014ee */
  esp -= 4; W32(esp, 0x42ed27u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 42ed27: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 42ed2a: mov eax, esp */
  eax = esp;
/* 42ed2c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42ed2f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42ed33: jmp 0x42ed73 */
  goto L_42ed73;
L_42ed73: /* 42ed73: push 0x2000 */
  { uint32_t v = 0x2000u; esp -= 4; W32(esp, v); }
/* 42ed78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42ed7a: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42ed7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42ed7e: call 0x4010fd */
  esp -= 4; W32(esp, 0x42ed83u); SPILL(); hle_memset(); RELOAD();
/* 42ed83: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ed86: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ed8a: jne 0x42ed9d */
  if (!zf) goto L_42ed9d;
L_42ed8c: /* 42ed8c: push 0x5d */
  { uint32_t v = 0x5du; esp -= 4; W32(esp, v); }
/* 42ed8e: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 42ed8f: cmp word ptr [edi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ed92: jne 0x42ed9d */
  if (!zf) goto L_42ed9d;
L_42ed94: /* 42ed94: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 42ed97: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42ed98: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42ed99: mov byte ptr [esi + 0xb], 0x20 */
  W8((uint32_t)(esi + 0xbu), 0x20u);
L_42ed9d: /* 42ed9d: xor eax, eax */
  eax = 0;
/* 42ed9f: jmp 0x42ee19 */
  goto L_42ee19;
L_42eda1: /* 42eda1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42eda2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42eda3: cmp ax, 0x2d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42eda7: jne 0x42ee00 */
  if (!zf) goto L_42ee00;
L_42eda9: /* 42eda9: cmp word ptr [ebp - 0x3c], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffc4u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42edae: je 0x42ee00 */
  if (zf) goto L_42ee00;
L_42edb0: /* 42edb0: xor ecx, ecx */
  ecx = 0;
/* 42edb2: mov cx, word ptr [edi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 42edb5: cmp cx, 0x5d */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42edb9: je 0x42ee00 */
  if (zf) goto L_42ee00;
L_42edbb: /* 42edbb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42edbc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42edbd: cmp word ptr [ebp - 0x3c], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffc4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42edc1: jae 0x42edc7 */
  if (!cf) goto L_42edc7;
L_42edc3: /* 42edc3: mov eax, ecx */
  eax = ecx;
/* 42edc5: jmp 0x42edcd */
  goto L_42edcd;
L_42edc7: /* 42edc7: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 42edca: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
L_42edcd: /* 42edcd: cmp word ptr [ebp - 0x3c], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffc4u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42edd1: ja 0x42edfa */
  if ((!cf && !zf)) goto L_42edfa;
L_42edd3: /* 42edd3: movzx esi, word ptr [ebp - 0x3c] */
  esi = (uint32_t)(R16((uint32_t)(ebp + 0xffffffc4u)));
/* 42edd7: sub eax, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42edda: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42eddb: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
L_42edde: /* 42edde: mov eax, esi */
  eax = esi;
/* 42ede0: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42ede3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42ede6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42ede8: mov ecx, esi */
  ecx = esi;
/* 42edea: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 42eded: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42edef: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 42edf1: or byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 42edf3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42edf4: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 42edf5: jne 0x42edde */
  if (!zf) goto L_42edde;
L_42edf7: /* 42edf7: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
L_42edfa: /* 42edfa: and dword ptr [ebp - 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc4u), r);
  }
/* 42edfe: jmp 0x42ee19 */
  goto L_42ee19;
L_42ee00: /* 42ee00: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 42ee03: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 42ee06: mov eax, ecx */
  eax = ecx;
/* 42ee08: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42ee0b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42ee0e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42ee10: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 42ee13: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42ee15: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 42ee17: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_42ee19: /* 42ee19: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 42ee1c: cmp ax, 0x5d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee20: jne 0x42eda1 */
  if (!zf) goto L_42eda1;
L_42ee26: /* 42ee26: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42ee29: je 0x42f1dc */
  if (zf) goto L_42f1dc;
L_42ee2f: /* 42ee2f: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee33: jne 0x42ebea */
  if (!zf) goto L_42ebea;
L_42ee39: /* 42ee39: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 42ee3c: jmp 0x42ebea */
  goto L_42ebea;
L_42ee41: /* 42ee41: cmp bx, 0x2b */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee45: jne 0x42ee67 */
  if (!zf) goto L_42ee67;
L_42ee47: /* 42ee47: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42ee4a: jne 0x42ee56 */
  if (!zf) goto L_42ee56;
L_42ee4c: /* 42ee4c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ee4e: je 0x42ee56 */
  if (zf) goto L_42ee56;
L_42ee50: /* 42ee50: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42ee54: jmp 0x42ee67 */
  goto L_42ee67;
L_42ee56: /* 42ee56: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ee59: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ee5c: call 0x42c65c */
  esp -= 4; W32(esp, 0x42ee61u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42ee61: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ee62: mov ebx, eax */
  ebx = eax;
/* 42ee64: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42ee67: /* 42ee67: cmp bx, 0x30 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee6b: jne 0x42ef8d */
  if (!zf) goto L_42ef8d;
L_42ee71: /* 42ee71: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ee74: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ee77: call 0x42c65c */
  esp -= 4; W32(esp, 0x42ee7cu); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42ee7c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ee7d: mov ebx, eax */
  ebx = eax;
/* 42ee7f: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42ee82: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 42ee84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42ee85: cmp bx, di */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee88: je 0x42eecb */
  if (zf) goto L_42eecb;
L_42ee8a: /* 42ee8a: cmp bx, 0x58 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee8e: je 0x42eecb */
  if (zf) goto L_42eecb;
L_42ee90: /* 42ee90: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 42ee97: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee99: je 0x42eeb5 */
  if (zf) goto L_42eeb5;
L_42ee9b: /* 42ee9b: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee9f: je 0x42eea9 */
  if (zf) goto L_42eea9;
L_42eea1: /* 42eea1: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eea4: jne 0x42eea9 */
  if (!zf) goto L_42eea9;
L_42eea6: /* 42eea6: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42eea9: /* 42eea9: mov dword ptr [ebp - 0x68], 0x6f */
  W32((uint32_t)(ebp + 0xffffff98u), 0x6fu);
/* 42eeb0: jmp 0x42ef8d */
  goto L_42ef8d;
L_42eeb5: /* 42eeb5: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42eeb8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42eebb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42eebc: call 0x42e704 */
  esp -= 4; W32(esp, 0x42eec1u); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42eec1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eec2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eec3: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 42eec5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42eec6: jmp 0x42ef8a */
  goto L_42ef8a;
L_42eecb: /* 42eecb: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42eece: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42eed1: call 0x42c65c */
  esp -= 4; W32(esp, 0x42eed6u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42eed6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eed7: mov ebx, eax */
  ebx = eax;
/* 42eed9: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42eedc: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42eee0: je 0x42eeef */
  if (zf) goto L_42eeef;
L_42eee2: /* 42eee2: sub dword ptr [ebp - 0x48], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eee6: cmp dword ptr [ebp - 0x48], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42eeea: jge 0x42eeef */
  if ((sf == of)) goto L_42eeef;
L_42eeec: /* 42eeec: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42eeef: /* 42eeef: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 42eef2: jmp 0x42ef8d */
  goto L_42ef8d;
L_42eef7: /* 42eef7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42eef8: push dword ptr [ebp - 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff9cu)); esp -= 4; W32(esp, v); }
/* 42eefb: call 0x402a4e */
  esp -= 4; W32(esp, 0x42ef00u); SPILL(); f_402a4e(); if (g_unwind) return; RELOAD();
/* 42ef00: add dword ptr [ebp - 0x64], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffff9cu), r);
  }
/* 42ef03: jmp 0x42ebf9 */
  goto L_42ebf9;
L_42ef08: /* 42ef08: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ef09: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ef0a: jmp 0x42ebfb */
  goto L_42ebfb;
L_42ef0f: /* 42ef0f: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ef12: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ef15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42ef16: call 0x42e704 */
  esp -= 4; W32(esp, 0x42ef1bu); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42ef1b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ef1c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42ef1d: /* 42ef1d: cmp esi, dword ptr [ebp - 0x64] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef20: je 0x42f1dc */
  if (zf) goto L_42f1dc;
L_42ef26: /* 42ef26: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef2a: jne 0x42f1b5 */
  if (!zf) goto L_42f1b5;
L_42ef30: /* 42ef30: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42ef33: cmp dword ptr [ebp - 0x68], 0x63 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef37: je 0x42f1b5 */
  if (zf) goto L_42f1b5;
L_42ef3d: /* 42ef3d: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42ef40: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef44: je 0x42ef4f */
  if (zf) goto L_42ef4f;
L_42ef46: /* 42ef46: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
/* 42ef4a: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42ef4f: /* 42ef4f: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42ef52: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42ef57: /* 42ef57: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
L_42ef5b: /* 42ef5b: cmp bx, 0x2d */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef5f: jne 0x42ef67 */
  if (!zf) goto L_42ef67;
L_42ef61: /* 42ef61: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 42ef65: jmp 0x42ef6d */
  goto L_42ef6d;
L_42ef67: /* 42ef67: cmp bx, 0x2b */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef6b: jne 0x42ef8d */
  if (!zf) goto L_42ef8d;
L_42ef6d: /* 42ef6d: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42ef70: jne 0x42ef7c */
  if (!zf) goto L_42ef7c;
L_42ef72: /* 42ef72: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ef74: je 0x42ef7c */
  if (zf) goto L_42ef7c;
L_42ef76: /* 42ef76: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42ef7a: jmp 0x42ef8d */
  goto L_42ef8d;
L_42ef7c: /* 42ef7c: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ef7f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ef82: call 0x42c65c */
  esp -= 4; W32(esp, 0x42ef87u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42ef87: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ef88: mov ebx, eax */
  ebx = eax;
L_42ef8a: /* 42ef8a: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42ef8d: /* 42ef8d: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef91: je 0x42f0a7 */
  if (zf) goto L_42f0a7;
L_42ef97: /* 42ef97: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef9b: jne 0x42f085 */
  if (!zf) goto L_42f085;
L_42efa1: /* 42efa1: cmp dword ptr [ebp - 0x68], 0x78 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42efa5: je 0x42effc */
  if (zf) goto L_42effc;
L_42efa7: /* 42efa7: cmp dword ptr [ebp - 0x68], 0x70 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42efab: je 0x42effc */
  if (zf) goto L_42effc;
L_42efad: /* 42efad: test bh, 0xff */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42efb0: jne 0x42f031 */
  if (!zf) goto L_42f031;
L_42efb2: /* 42efb2: mov eax, ebx */
  eax = ebx;
/* 42efb4: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42efb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42efba: call 0x40152b */
  esp -= 4; W32(esp, 0x42efbfu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42efbf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42efc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42efc2: je 0x42f031 */
  if (zf) goto L_42f031;
L_42efc4: /* 42efc4: cmp dword ptr [ebp - 0x68], 0x6f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42efc8: jne 0x42efe5 */
  if (!zf) goto L_42efe5;
L_42efca: /* 42efca: cmp bx, 0x38 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x38u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 42efce: jae 0x42f031 */
  if (!cf) goto L_42f031;
L_42efd0: /* 42efd0: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42efd3: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42efd6: shld ecx, eax, 3 */
  { uint32_t a = ecx, b = eax, c = (0x3u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 42efda: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42efdd: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42efe0: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42efe3: jmp 0x42f034 */
  goto L_42f034;
L_42efe5: /* 42efe5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42efe7: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 42efe9: push dword ptr [ebp - 0x58] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa8u)); esp -= 4; W32(esp, v); }
/* 42efec: push dword ptr [ebp - 0x5c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa4u)); esp -= 4; W32(esp, v); }
/* 42efef: call 0x40518c */
  esp -= 4; W32(esp, 0x42eff4u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 42eff4: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42eff7: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 42effa: jmp 0x42f034 */
  goto L_42f034;
L_42effc: /* 42effc: test bh, 0xff */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42efff: jne 0x42f031 */
  if (!zf) goto L_42f031;
L_42f001: /* 42f001: mov eax, ebx */
  eax = ebx;
/* 42f003: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f008: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42f009: call 0x415449 */
  esp -= 4; W32(esp, 0x42f00eu); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 42f00e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f00f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 42f011: je 0x42f031 */
  if (zf) goto L_42f031;
L_42f013: /* 42f013: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42f016: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42f019: shld ecx, eax, 4 */
  { uint32_t a = ecx, b = eax, c = (0x4u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 42f01d: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42f020: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42f023: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42f026: mov esi, ebx */
  esi = ebx;
/* 42f028: call 0x42a09f */
  esp -= 4; W32(esp, 0x42f02du); SPILL(); f_42a09f(); if (g_unwind) return; RELOAD();
/* 42f02d: mov ebx, eax */
  ebx = eax;
/* 42f02f: jmp 0x42f034 */
  goto L_42f034;
L_42f031: /* 42f031: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42f034: /* 42f034: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f038: jne 0x42f06a */
  if (!zf) goto L_42f06a;
L_42f03a: /* 42f03a: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42f03d: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 42f040: sub eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42f043: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 42f044: add dword ptr [ebp - 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 42f047: adc dword ptr [ebp - 0x58], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 42f04a: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f04e: je 0x42f05b */
  if (zf) goto L_42f05b;
L_42f050: /* 42f050: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42f053: jne 0x42f05b */
  if (!zf) goto L_42f05b;
L_42f055: /* 42f055: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42f059: jmp 0x42f078 */
  goto L_42f078;
L_42f05b: /* 42f05b: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42f05e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f061: call 0x42c65c */
  esp -= 4; W32(esp, 0x42f066u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42f066: mov ebx, eax */
  ebx = eax;
/* 42f068: jmp 0x42f077 */
  goto L_42f077;
L_42f06a: /* 42f06a: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42f06d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f070: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42f071: call 0x42e704 */
  esp -= 4; W32(esp, 0x42f076u); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42f076: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42f077: /* 42f077: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42f078: /* 42f078: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f07c: je 0x42efa1 */
  if (zf) goto L_42efa1;
L_42f082: /* 42f082: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42f085: /* 42f085: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f089: je 0x42f176 */
  if (zf) goto L_42f176;
L_42f08f: /* 42f08f: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42f092: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 42f094: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42f097: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 42f09a: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 42f09c: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42f09f: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42f0a2: jmp 0x42f176 */
  goto L_42f176;
L_42f0a7: /* 42f0a7: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f0ab: jne 0x42f16d */
  if (!zf) goto L_42f16d;
L_42f0b1: /* 42f0b1: cmp dword ptr [ebp - 0x68], 0x78 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f0b5: je 0x42f0f3 */
  if (zf) goto L_42f0f3;
L_42f0b7: /* 42f0b7: cmp dword ptr [ebp - 0x68], 0x70 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f0bb: je 0x42f0f3 */
  if (zf) goto L_42f0f3;
L_42f0bd: /* 42f0bd: test bh, 0xff */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f0c0: jne 0x42f119 */
  if (!zf) goto L_42f119;
L_42f0c2: /* 42f0c2: mov eax, ebx */
  eax = ebx;
/* 42f0c4: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f0c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42f0ca: call 0x40152b */
  esp -= 4; W32(esp, 0x42f0cfu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42f0cf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f0d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42f0d2: je 0x42f119 */
  if (zf) goto L_42f119;
L_42f0d4: /* 42f0d4: cmp dword ptr [ebp - 0x68], 0x6f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f0d8: jne 0x42f0e6 */
  if (!zf) goto L_42f0e6;
L_42f0da: /* 42f0da: cmp bx, 0x38 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x38u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42f0de: jae 0x42f119 */
  if (!cf) goto L_42f119;
L_42f0e0: /* 42f0e0: shl dword ptr [ebp - 0x38], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42f0e4: jmp 0x42f11c */
  goto L_42f11c;
L_42f0e6: /* 42f0e6: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42f0e9: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 42f0ec: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42f0ee: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42f0f1: jmp 0x42f11c */
  goto L_42f11c;
L_42f0f3: /* 42f0f3: test bh, 0xff */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f0f6: jne 0x42f119 */
  if (!zf) goto L_42f119;
L_42f0f8: /* 42f0f8: mov eax, ebx */
  eax = ebx;
/* 42f0fa: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f0ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42f100: call 0x415449 */
  esp -= 4; W32(esp, 0x42f105u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 42f105: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f106: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42f108: je 0x42f119 */
  if (zf) goto L_42f119;
L_42f10a: /* 42f10a: shl dword ptr [ebp - 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42f10e: mov esi, ebx */
  esi = ebx;
/* 42f110: call 0x42a09f */
  esp -= 4; W32(esp, 0x42f115u); SPILL(); f_42a09f(); if (g_unwind) return; RELOAD();
/* 42f115: mov ebx, eax */
  ebx = eax;
/* 42f117: jmp 0x42f11c */
  goto L_42f11c;
L_42f119: /* 42f119: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42f11c: /* 42f11c: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f120: jne 0x42f152 */
  if (!zf) goto L_42f152;
L_42f122: /* 42f122: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42f125: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 42f128: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42f12b: lea eax, [ecx + eax - 0x30] */
  eax = (uint32_t)(ecx + eax + 0xffffffd0u);
/* 42f12f: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42f132: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f136: je 0x42f143 */
  if (zf) goto L_42f143;
L_42f138: /* 42f138: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42f13b: jne 0x42f143 */
  if (!zf) goto L_42f143;
L_42f13d: /* 42f13d: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42f141: jmp 0x42f160 */
  goto L_42f160;
L_42f143: /* 42f143: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42f146: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f149: call 0x42c65c */
  esp -= 4; W32(esp, 0x42f14eu); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42f14e: mov ebx, eax */
  ebx = eax;
/* 42f150: jmp 0x42f15f */
  goto L_42f15f;
L_42f152: /* 42f152: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42f155: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f158: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42f159: call 0x42e704 */
  esp -= 4; W32(esp, 0x42f15eu); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42f15e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42f15f: /* 42f15f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42f160: /* 42f160: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f164: je 0x42f0b1 */
  if (zf) goto L_42f0b1;
L_42f16a: /* 42f16a: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42f16d: /* 42f16d: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f171: je 0x42f176 */
  if (zf) goto L_42f176;
L_42f173: /* 42f173: neg dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
L_42f176: /* 42f176: cmp dword ptr [ebp - 0x68], 0x46 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f17a: jne 0x42f180 */
  if (!zf) goto L_42f180;
L_42f17c: /* 42f17c: and dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
L_42f180: /* 42f180: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f184: je 0x42f1dc */
  if (zf) goto L_42f1dc;
L_42f186: /* 42f186: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f18a: jne 0x42f1b5 */
  if (!zf) goto L_42f1b5;
L_42f18c: /* 42f18c: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42f18f: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42f192: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
L_42f195: /* 42f195: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f199: je 0x42f1a8 */
  if (zf) goto L_42f1a8;
L_42f19b: /* 42f19b: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42f19e: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 42f1a0: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42f1a3: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 42f1a6: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42f1a8: /* 42f1a8: cmp byte ptr [ebp - 0x4f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1ac: je 0x42f1b2 */
  if (zf) goto L_42f1b2;
L_42f1ae: /* 42f1ae: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 42f1b0: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42f1b2: /* 42f1b2: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
L_42f1b5: /* 42f1b5: inc byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42f1b8: add dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_42f1bc: /* 42f1bc: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 42f1bf: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1c2: jne 0x42e75e */
  if (!zf) goto L_42e75e;
L_42f1c8: /* 42f1c8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42f1cb: cmp word ptr [eax], 0x25 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x25u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1cf: jne 0x42f1dc */
  if (!zf) goto L_42f1dc;
L_42f1d1: /* 42f1d1: cmp word ptr [eax + 2], 0x6e */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x2u))); uint16_t b = (uint16_t)(0x6eu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1d6: je 0x42e75e */
  if (zf) goto L_42e75e;
L_42f1dc: /* 42f1dc: cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1e0: jne 0x42f1eb */
  if (!zf) goto L_42f1eb;
L_42f1e2: /* 42f1e2: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42f1e5: call 0x401156 */
  esp -= 4; W32(esp, 0x42f1eau); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42f1ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42f1eb: /* 42f1eb: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 42f1ee: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1f1: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 42f1f4: jne 0x42f202 */
  if (!zf) goto L_42f202;
L_42f1f6: /* 42f1f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42f1f8: jne 0x42f202 */
  if (!zf) goto L_42f202;
L_42f1fa: /* 42f1fa: cmp byte ptr [ebp - 0x29], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1fd: jne 0x42f202 */
  if (!zf) goto L_42f202;
L_42f1ff: /* 42f1ff: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_42f202: /* 42f202: lea esp, [ebp - 0x338] */
  esp = (uint32_t)(ebp + 0xfffffcc8u);
/* 42f208: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42f20b: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42f20e: call 0x4013ab */
  esp -= 4; W32(esp, 0x42f213u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 42f213: call 0x40105a */
  esp -= 4; W32(esp, 0x42f218u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42f218: ret  */
  esp += 4; SPILL(); return;
L_42f219: /* 42f219: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42f21c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f21f: call 0x42c65c */
  esp -= 4; W32(esp, 0x42f224u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42f224: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f225: mov ebx, eax */
  ebx = eax;
/* 42f227: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42f22a: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 42f22d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42f22e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42f22f: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 42f232: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42f235: je 0x42f1bc */
  if (zf) goto L_42f1bc;
L_42f237: /* 42f237: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f23a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42f23b: call 0x42e704 */
  esp -= 4; W32(esp, 0x42f240u); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42f240: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f241: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f242: jmp 0x42f1dc */
  goto L_42f1dc;
}

void f_42ed35(void) {
  LOAD_REGS();
L_42ed35: /* 42ed35: xor eax, eax */
  eax = 0;
/* 42ed37: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42ed38: ret  */
  esp += 4; SPILL(); return;
}

void f_42ed39(void) {
  LOAD_REGS();
  goto L_42ed39;
L_42e75e: /* 42e75e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42e761: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 42e764: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42e767: je 0x42f1dc */
  if (zf) goto L_42f1dc;
L_42e76d: /* 42e76d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 42e76f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e770: call 0x401414 */
  esp -= 4; W32(esp, 0x42e775u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 42e775: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e776: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e779: je 0x42e7ac */
  if (zf) goto L_42e7ac;
L_42e77b: /* 42e77b: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e77e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e781: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e784: lea esi, [ebp - 0x30] */
  esi = (uint32_t)(ebp + 0xffffffd0u);
/* 42e787: call 0x42e711 */
  esp -= 4; W32(esp, 0x42e78cu); SPILL(); f_42e711(); if (g_unwind) return; RELOAD();
/* 42e78c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e78d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e78e: call 0x42e704 */
  esp -= 4; W32(esp, 0x42e793u); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42e793: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e794: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42e795: /* 42e795: add dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 42e799: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42e79c: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 42e79f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e7a0: call 0x41750b */
  esp -= 4; W32(esp, 0x42e7a5u); SPILL(); f_41750b(); if (g_unwind) return; RELOAD();
/* 42e7a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e7a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e7a8: jne 0x42e795 */
  if (!zf) goto L_42e795;
L_42e7aa: /* 42e7aa: jmp 0x42e75e */
  goto L_42e75e;
L_42e7ac: /* 42e7ac: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 42e7af: cmp word ptr [edi], 0x25 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x25u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e7b3: jne 0x42f219 */
  if (!zf) goto L_42f219;
L_42e7b9: /* 42e7b9: xor eax, eax */
  eax = 0;
/* 42e7bb: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42e7be: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 42e7c1: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 42e7c4: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 42e7c7: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 42e7ca: and byte ptr [ebp - 0x49], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
/* 42e7cd: and byte ptr [ebp - 0x4a], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb6u), r);
  }
/* 42e7d0: and byte ptr [ebp - 0x4b], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 42e7d3: and byte ptr [ebp - 0x4c], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42e7d6: and byte ptr [ebp - 0x4d], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
/* 42e7d9: and byte ptr [ebp - 0x4e], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42e7dc: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
/* 42e7e0: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
L_42e7e3: /* 42e7e3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e7e4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42e7e5: movzx esi, word ptr [edi] */
  esi = (uint32_t)(R16((uint32_t)(edi)));
/* 42e7e8: test si, 0xff00 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xff00u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42e7ed: jne 0x42e816 */
  if (!zf) goto L_42e816;
L_42e7ef: /* 42e7ef: mov eax, esi */
  eax = esi;
/* 42e7f1: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42e7f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42e7f7: call 0x40152b */
  esp -= 4; W32(esp, 0x42e7fcu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42e7fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e7fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e7ff: je 0x42e816 */
  if (zf) goto L_42e816;
L_42e801: /* 42e801: inc dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffbcu), r);
  }
/* 42e804: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42e807: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 42e80a: lea eax, [esi + eax*2 - 0x30] */
  eax = (uint32_t)(esi + eax*2 + 0xffffffd0u);
/* 42e80e: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 42e811: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e816: /* 42e816: cmp esi, 0x4e */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e819: jg 0x42e898 */
  if ((!zf && sf == of)) goto L_42e898;
L_42e81b: /* 42e81b: je 0x42e8ba */
  if (zf) goto L_42e8ba;
L_42e821: /* 42e821: cmp esi, 0x2a */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e824: je 0x42e893 */
  if (zf) goto L_42e893;
L_42e826: /* 42e826: cmp esi, 0x46 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e829: je 0x42e8ba */
  if (zf) goto L_42e8ba;
L_42e82f: /* 42e82f: cmp esi, 0x49 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x49u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e832: je 0x42e83e */
  if (zf) goto L_42e83e;
L_42e834: /* 42e834: cmp esi, 0x4c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e837: jne 0x42e8a7 */
  if (!zf) goto L_42e8a7;
L_42e839: /* 42e839: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 42e83c: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e83e: /* 42e83e: mov cx, word ptr [edi + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x2u))) & 0xffffu);
/* 42e842: cmp cx, 0x36 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x36u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e846: jne 0x42e860 */
  if (!zf) goto L_42e860;
L_42e848: /* 42e848: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 42e84b: cmp word ptr [eax], 0x34 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x34u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e84f: jne 0x42e860 */
  if (!zf) goto L_42e860;
L_42e851: /* 42e851: mov edi, eax */
  edi = eax;
/* 42e853: inc dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffacu), r);
  }
/* 42e856: and dword ptr [ebp - 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 42e85a: and dword ptr [ebp - 0x58], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 42e85e: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e860: /* 42e860: cmp cx, 0x33 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x33u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e864: jne 0x42e873 */
  if (!zf) goto L_42e873;
L_42e866: /* 42e866: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 42e869: cmp word ptr [eax], 0x32 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x32u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e86d: jne 0x42e873 */
  if (!zf) goto L_42e873;
L_42e86f: /* 42e86f: mov edi, eax */
  edi = eax;
/* 42e871: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e873: /* 42e873: cmp cx, 0x64 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x64u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e877: je 0x42e8ba */
  if (zf) goto L_42e8ba;
L_42e879: /* 42e879: cmp cx, 0x69 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x69u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e87d: je 0x42e8ba */
  if (zf) goto L_42e8ba;
L_42e87f: /* 42e87f: cmp cx, 0x6f */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x6fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e883: je 0x42e8ba */
  if (zf) goto L_42e8ba;
L_42e885: /* 42e885: cmp cx, 0x78 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e889: je 0x42e8ba */
  if (zf) goto L_42e8ba;
L_42e88b: /* 42e88b: cmp cx, 0x58 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e88f: jne 0x42e8a7 */
  if (!zf) goto L_42e8a7;
L_42e891: /* 42e891: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e893: /* 42e893: inc byte ptr [ebp - 0x4b] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 42e896: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e898: /* 42e898: cmp esi, 0x68 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e89b: je 0x42e8b4 */
  if (zf) goto L_42e8b4;
L_42e89d: /* 42e89d: cmp esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8a0: je 0x42e8ac */
  if (zf) goto L_42e8ac;
L_42e8a2: /* 42e8a2: cmp esi, 0x77 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8a5: je 0x42e8af */
  if (zf) goto L_42e8af;
L_42e8a7: /* 42e8a7: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42e8aa: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e8ac: /* 42e8ac: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
L_42e8af: /* 42e8af: inc byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42e8b2: jmp 0x42e8ba */
  goto L_42e8ba;
L_42e8b4: /* 42e8b4: dec byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 42e8b7: dec byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
L_42e8ba: /* 42e8ba: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8be: je 0x42e7e3 */
  if (zf) goto L_42e7e3;
L_42e8c4: /* 42e8c4: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 42e8c7: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8cb: jne 0x42e8e1 */
  if (!zf) goto L_42e8e1;
L_42e8cd: /* 42e8cd: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 42e8d0: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 42e8d3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42e8d6: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 42e8d9: mov edi, dword ptr [eax - 4] */
  edi = R32((uint32_t)(eax + 0xfffffffcu));
/* 42e8dc: mov dword ptr [ebp - 0x64], edi */
  W32((uint32_t)(ebp + 0xffffff9cu), edi);
/* 42e8df: jmp 0x42e8e4 */
  goto L_42e8e4;
L_42e8e1: /* 42e8e1: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
L_42e8e4: /* 42e8e4: and byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42e8e8: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8ec: jne 0x42e90a */
  if (!zf) goto L_42e90a;
L_42e8ee: /* 42e8ee: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42e8f1: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 42e8f4: cmp ax, 0x53 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x53u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8f8: je 0x42e906 */
  if (zf) goto L_42e906;
L_42e8fa: /* 42e8fa: cmp ax, 0x43 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x43u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e8fe: je 0x42e906 */
  if (zf) goto L_42e906;
L_42e900: /* 42e900: mov byte ptr [ebp - 0x4e], 1 */
  W8((uint32_t)(ebp + 0xffffffb2u), 0x1u);
/* 42e904: jmp 0x42e90a */
  goto L_42e90a;
L_42e906: /* 42e906: or byte ptr [ebp - 0x4e], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
L_42e90a: /* 42e90a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42e90d: movzx esi, word ptr [eax] */
  esi = (uint32_t)(R16((uint32_t)(eax)));
/* 42e910: or esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 42e913: mov dword ptr [ebp - 0x68], esi */
  W32((uint32_t)(ebp + 0xffffff98u), esi);
/* 42e916: cmp esi, 0x6e */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e919: je 0x42e946 */
  if (zf) goto L_42e946;
L_42e91b: /* 42e91b: cmp esi, 0x63 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e91e: je 0x42e935 */
  if (zf) goto L_42e935;
L_42e920: /* 42e920: cmp esi, 0x7b */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e923: je 0x42e935 */
  if (zf) goto L_42e935;
L_42e925: /* 42e925: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e928: lea esi, [ebp - 0x30] */
  esi = (uint32_t)(ebp + 0xffffffd0u);
/* 42e92b: call 0x42e711 */
  esp -= 4; W32(esp, 0x42e930u); SPILL(); f_42e711(); if (g_unwind) return; RELOAD();
/* 42e930: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 42e933: jmp 0x42e940 */
  goto L_42e940;
L_42e935: /* 42e935: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e938: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e93b: call 0x42c65c */
  esp -= 4; W32(esp, 0x42e940u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
L_42e940: /* 42e940: mov ebx, eax */
  ebx = eax;
/* 42e942: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e943: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e946: /* 42e946: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 42e949: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42e94b: je 0x42e957 */
  if (zf) goto L_42e957;
L_42e94d: /* 42e94d: cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e951: je 0x42f237 */
  if (zf) goto L_42f237;
L_42e957: /* 42e957: cmp esi, 0x6f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e95a: jg 0x42ec9a */
  if ((!zf && sf == of)) goto L_42ec9a;
L_42e960: /* 42e960: je 0x42ef5b */
  if (zf) goto L_42ef5b;
L_42e966: /* 42e966: cmp esi, 0x63 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e969: je 0x42ebd2 */
  if (zf) goto L_42ebd2;
L_42e96f: /* 42e96f: cmp esi, 0x64 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e972: je 0x42ef5b */
  if (zf) goto L_42ef5b;
L_42e978: /* 42e978: jle 0x42ecc4 */
  if ((zf || sf != of)) goto L_42ecc4;
L_42e97e: /* 42e97e: cmp esi, 0x67 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e981: jle 0x42e9bc */
  if ((zf || sf != of)) goto L_42e9bc;
L_42e983: /* 42e983: cmp esi, 0x69 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e986: je 0x42e9a3 */
  if (zf) goto L_42e9a3;
L_42e988: /* 42e988: cmp esi, 0x6e */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e98b: jne 0x42ecc4 */
  if (!zf) goto L_42ecc4;
L_42e991: /* 42e991: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 42e994: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42e998: je 0x42f195 */
  if (zf) goto L_42f195;
L_42e99e: /* 42e99e: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42e9a3: /* 42e9a3: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 42e9a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42e9a6: mov dword ptr [ebp - 0x68], esi */
  W32((uint32_t)(ebp + 0xffffff98u), esi);
L_42e9a9: /* 42e9a9: cmp bx, 0x2d */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e9ad: jne 0x42ee41 */
  if (!zf) goto L_42ee41;
L_42e9b3: /* 42e9b3: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 42e9b7: jmp 0x42ee47 */
  goto L_42ee47;
L_42e9bc: /* 42e9bc: lea esi, [ebp - 0x324] */
  esi = (uint32_t)(ebp + 0xfffffcdcu);
/* 42e9c2: cmp bx, 0x2d */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e9c6: jne 0x42e9d7 */
  if (!zf) goto L_42e9d7;
L_42e9c8: /* 42e9c8: mov word ptr [ebp - 0x324], bx */
  W16((uint32_t)(ebp + 0xfffffcdcu), (ebx & 0xffffu));
/* 42e9cf: lea esi, [ebp - 0x322] */
  esi = (uint32_t)(ebp + 0xfffffcdeu);
/* 42e9d5: jmp 0x42e9dd */
  goto L_42e9dd;
L_42e9d7: /* 42e9d7: cmp bx, 0x2b */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42e9db: jne 0x42e9f1 */
  if (!zf) goto L_42e9f1;
L_42e9dd: /* 42e9dd: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42e9e0: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42e9e3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42e9e6: call 0x42c65c */
  esp -= 4; W32(esp, 0x42e9ebu); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42e9eb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42e9ec: mov ebx, eax */
  ebx = eax;
/* 42e9ee: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42e9f1: /* 42e9f1: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42e9f5: je 0x42ea00 */
  if (zf) goto L_42ea00;
L_42e9f7: /* 42e9f7: cmp dword ptr [ebp - 0x48], 0x15d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x15du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42e9fe: jle 0x42ea07 */
  if ((zf || sf != of)) goto L_42ea07;
L_42ea00: /* 42ea00: mov dword ptr [ebp - 0x48], 0x15d */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x15du);
L_42ea07: /* 42ea07: mov edi, 0xff00 */
  edi = 0xff00u;
/* 42ea0c: jmp 0x42ea43 */
  goto L_42ea43;
L_42ea0e: /* 42ea0e: mov eax, ebx */
  eax = ebx;
/* 42ea10: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42ea15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ea16: call 0x40152b */
  esp -= 4; W32(esp, 0x42ea1bu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42ea1b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ea1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ea1e: je 0x42ea48 */
  if (zf) goto L_42ea48;
L_42ea20: /* 42ea20: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42ea23: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42ea26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ea28: je 0x42ea48 */
  if (zf) goto L_42ea48;
L_42ea2a: /* 42ea2a: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42ea2d: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 42ea30: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ea31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ea32: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ea35: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ea38: call 0x42c65c */
  esp -= 4; W32(esp, 0x42ea3du); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42ea3d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ea3e: mov ebx, eax */
  ebx = eax;
/* 42ea40: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42ea43: /* 42ea43: test di, bx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42ea46: je 0x42ea0e */
  if (zf) goto L_42ea0e;
L_42ea48: /* 42ea48: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 42ea4e: push 0x44a9ac */
  { uint32_t v = 0x44a9acu; esp -= 4; W32(esp, v); }
/* 42ea53: lea eax, [ebp - 0x328] */
  eax = (uint32_t)(ebp + 0xfffffcd8u);
/* 42ea59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ea5a: call 0x402197 */
  esp -= 4; W32(esp, 0x42ea5fu); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 42ea5f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ea62: cmp word ptr [ebp - 0x328], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffcd8u))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ea69: jne 0x42eaca */
  if (!zf) goto L_42eaca;
L_42ea6b: /* 42ea6b: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42ea6e: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42ea71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ea73: je 0x42eaca */
  if (zf) goto L_42eaca;
L_42ea75: /* 42ea75: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ea78: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ea7b: call 0x42c65c */
  esp -= 4; W32(esp, 0x42ea80u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42ea80: mov ebx, eax */
  ebx = eax;
/* 42ea82: mov ax, word ptr [ebp - 0x328] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffcd8u))) & 0xffffu);
/* 42ea89: mov word ptr [esi], ax */
  W16((uint32_t)(esi), (eax & 0xffffu));
/* 42ea8c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ea8d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ea8e: jmp 0x42eac1 */
  goto L_42eac1;
L_42ea90: /* 42ea90: mov eax, ebx */
  eax = ebx;
/* 42ea92: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42ea97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ea98: call 0x40152b */
  esp -= 4; W32(esp, 0x42ea9du); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42ea9d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ea9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eaa0: je 0x42eaca */
  if (zf) goto L_42eaca;
L_42eaa2: /* 42eaa2: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42eaa5: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eaa8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eaaa: je 0x42eaca */
  if (zf) goto L_42eaca;
L_42eaac: /* 42eaac: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42eaaf: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 42eab2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eab3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eab4: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42eab7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42eaba: call 0x42c65c */
  esp -= 4; W32(esp, 0x42eabfu); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42eabf: mov ebx, eax */
  ebx = eax;
L_42eac1: /* 42eac1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eac2: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42eac5: test di, bx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42eac8: je 0x42ea90 */
  if (zf) goto L_42ea90;
L_42eaca: /* 42eaca: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42eace: je 0x42eb5e */
  if (zf) goto L_42eb5e;
L_42ead4: /* 42ead4: cmp bx, 0x65 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x65u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ead8: je 0x42eae0 */
  if (zf) goto L_42eae0;
L_42eada: /* 42eada: cmp bx, 0x45 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x45u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42eade: jne 0x42eb5e */
  if (!zf) goto L_42eb5e;
L_42eae0: /* 42eae0: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42eae3: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eae6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eae8: je 0x42eb5e */
  if (zf) goto L_42eb5e;
L_42eaea: /* 42eaea: mov word ptr [esi], 0x65 */
  W16((uint32_t)(esi), 0x65u);
/* 42eaef: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eaf0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eaf1: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42eaf4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42eaf7: call 0x42c65c */
  esp -= 4; W32(esp, 0x42eafcu); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42eafc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eafd: mov ebx, eax */
  ebx = eax;
/* 42eaff: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42eb02: cmp bx, 0x2d */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42eb06: jne 0x42eb0f */
  if (!zf) goto L_42eb0f;
L_42eb08: /* 42eb08: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 42eb0b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eb0c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eb0d: jmp 0x42eb15 */
  goto L_42eb15;
L_42eb0f: /* 42eb0f: cmp bx, 0x2b */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42eb13: jne 0x42eb59 */
  if (!zf) goto L_42eb59;
L_42eb15: /* 42eb15: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42eb18: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eb1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eb1d: jne 0x42eb48 */
  if (!zf) goto L_42eb48;
L_42eb1f: /* 42eb1f: and dword ptr [ebp - 0x48], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eb22: jmp 0x42eb59 */
  goto L_42eb59;
L_42eb24: /* 42eb24: mov eax, ebx */
  eax = ebx;
/* 42eb26: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42eb2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42eb2c: call 0x40152b */
  esp -= 4; W32(esp, 0x42eb31u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42eb31: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eb32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eb34: je 0x42eb5e */
  if (zf) goto L_42eb5e;
L_42eb36: /* 42eb36: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42eb39: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eb3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eb3e: je 0x42eb5e */
  if (zf) goto L_42eb5e;
L_42eb40: /* 42eb40: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42eb43: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 42eb46: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42eb47: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_42eb48: /* 42eb48: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42eb4b: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42eb4e: call 0x42c65c */
  esp -= 4; W32(esp, 0x42eb53u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42eb53: mov ebx, eax */
  ebx = eax;
/* 42eb55: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42eb58: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42eb59: /* 42eb59: test di, bx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42eb5c: je 0x42eb24 */
  if (zf) goto L_42eb24;
L_42eb5e: /* 42eb5e: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42eb61: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42eb64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42eb65: call 0x42e704 */
  esp -= 4; W32(esp, 0x42eb6au); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42eb6a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eb6b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eb6c: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42eb70: je 0x42f1dc */
  if (zf) goto L_42f1dc;
L_42eb76: /* 42eb76: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42eb7a: jne 0x42f1b5 */
  if (!zf) goto L_42f1b5;
L_42eb80: /* 42eb80: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42eb83: and word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi), r);
  }
/* 42eb87: lea eax, [ebp - 0x324] */
  eax = (uint32_t)(ebp + 0xfffffcdcu);
/* 42eb8d: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 42eb8f: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 42eb91: lea esi, [esi + esi + 2] */
  esi = (uint32_t)(esi + esi + 0x2u);
/* 42eb95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42eb96: call 0x4010eb */
  esp -= 4; W32(esp, 0x42eb9bu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42eb9b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eb9c: mov edi, eax */
  edi = eax;
/* 42eb9e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42eba0: je 0x42f1dc */
  if (zf) goto L_42f1dc;
L_42eba6: /* 42eba6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42eba7: lea eax, [ebp - 0x324] */
  eax = (uint32_t)(ebp + 0xfffffcdcu);
/* 42ebad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ebae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42ebaf: call 0x417e01 */
  esp -= 4; W32(esp, 0x42ebb4u); SPILL(); f_417e01(); if (g_unwind) return; RELOAD();
/* 42ebb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42ebb5: push dword ptr [ebp - 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff9cu)); esp -= 4; W32(esp, v); }
/* 42ebb8: movsx eax, byte ptr [ebp - 0x4f] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
/* 42ebbc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42ebbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ebbe: call dword ptr [0x44afa8] */
  { uint32_t t = R32((uint32_t)(0x44afa8u)); esp -= 4; W32(esp, 0x42ebc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 42ebc4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42ebc5: call 0x401156 */
  esp -= 4; W32(esp, 0x42ebcau); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42ebca: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ebcd: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42ebd2: /* 42ebd2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ebd4: jne 0x42ebe0 */
  if (!zf) goto L_42ebe0;
L_42ebd6: /* 42ebd6: mov dword ptr [ebp - 0x44], 1 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x1u);
/* 42ebdd: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
L_42ebe0: /* 42ebe0: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42ebe4: jle 0x42ebea */
  if ((zf || sf != of)) goto L_42ebea;
L_42ebe6: /* 42ebe6: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
L_42ebea: /* 42ebea: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42ebed: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ebf0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ebf3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42ebf4: call 0x42e704 */
  esp -= 4; W32(esp, 0x42ebf9u); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
L_42ebf9: /* 42ebf9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ebfa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42ebfb: /* 42ebfb: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ebff: je 0x42ec0f */
  if (zf) goto L_42ec0f;
L_42ec01: /* 42ec01: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42ec04: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42ec07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ec09: je 0x42ef1d */
  if (zf) goto L_42ef1d;
L_42ec0f: /* 42ec0f: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ec12: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ec15: call 0x42c65c */
  esp -= 4; W32(esp, 0x42ec1au); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42ec1a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ec1b: mov ebx, eax */
  ebx = eax;
/* 42ec1d: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42ec20: cmp bx, -1 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec24: je 0x42ef0f */
  if (zf) goto L_42ef0f;
L_42ec2a: /* 42ec2a: cmp dword ptr [ebp - 0x68], 0x63 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec2e: je 0x42ec77 */
  if (zf) goto L_42ec77;
L_42ec30: /* 42ec30: cmp dword ptr [ebp - 0x68], 0x73 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x73u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec34: jne 0x42ec48 */
  if (!zf) goto L_42ec48;
L_42ec36: /* 42ec36: cmp bx, 9 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42ec3a: jb 0x42ec42 */
  if (cf) goto L_42ec42;
L_42ec3c: /* 42ec3c: cmp bx, 0xd */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42ec40: jbe 0x42ec48 */
  if ((cf | zf)) goto L_42ec48;
L_42ec42: /* 42ec42: cmp bx, 0x20 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec46: jne 0x42ec77 */
  if (!zf) goto L_42ec77;
L_42ec48: /* 42ec48: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec4c: jne 0x42ef0f */
  if (!zf) goto L_42ef0f;
L_42ec52: /* 42ec52: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 42ec55: mov ecx, eax */
  ecx = eax;
/* 42ec57: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 42ec5a: xor edx, edx */
  edx = 0;
  cf = 0;
/* 42ec5c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  edx = r;
  }
/* 42ec5d: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 42ec5f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42ec62: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42ec65: movsx eax, byte ptr [eax + ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + ecx)));
/* 42ec69: movsx ecx, byte ptr [ebp - 0x49] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb7u)));
/* 42ec6d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 42ec6f: test eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ec71: je 0x42ef0f */
  if (zf) goto L_42ef0f;
L_42ec77: /* 42ec77: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec7b: jne 0x42ef08 */
  if (!zf) goto L_42ef08;
L_42ec81: /* 42ec81: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ec85: je 0x42eef7 */
  if (zf) goto L_42eef7;
L_42ec8b: /* 42ec8b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42ec8e: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 42ec91: add dword ptr [ebp - 0x64], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffff9cu), r);
  }
/* 42ec95: jmp 0x42ebfb */
  goto L_42ebfb;
L_42ec9a: /* 42ec9a: mov eax, esi */
  eax = esi;
/* 42ec9c: sub eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42ec9f: je 0x42ef57 */
  if (zf) goto L_42ef57;
L_42eca5: /* 42eca5: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42eca8: je 0x42ebe0 */
  if (zf) goto L_42ebe0;
L_42ecae: /* 42ecae: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42ecaf: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42ecb0: je 0x42ef5b */
  if (zf) goto L_42ef5b;
L_42ecb6: /* 42ecb6: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42ecb9: je 0x42e9a9 */
  if (zf) goto L_42e9a9;
L_42ecbf: /* 42ecbf: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42ecc2: je 0x42ece8 */
  if (zf) goto L_42ece8;
L_42ecc4: /* 42ecc4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42ecc7: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ecca: jne 0x42f237 */
  if (!zf) goto L_42f237;
L_42ecd0: /* 42ecd0: dec byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42ecd3: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ecd7: jne 0x42f1b5 */
  if (!zf) goto L_42f1b5;
L_42ecdd: /* 42ecdd: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 42ece0: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 42ece3: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42ece8: /* 42ece8: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42ecec: jle 0x42ecf2 */
  if ((zf || sf != of)) goto L_42ecf2;
L_42ecee: /* 42ecee: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
L_42ecf2: /* 42ecf2: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 42ecf5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42ecf6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42ecf7: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 42ecfa: mov dword ptr [ebp - 0x32c], edi */
  W32((uint32_t)(ebp + 0xfffffcd4u), edi);
/* 42ed00: cmp word ptr [edi], 0x5e */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x5eu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ed04: jne 0x42ed13 */
  if (!zf) goto L_42ed13;
L_42ed06: /* 42ed06: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 42ed09: mov dword ptr [ebp - 0x32c], edi */
  W32((uint32_t)(ebp + 0xfffffcd4u), edi);
/* 42ed0f: or byte ptr [ebp - 0x49], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
L_42ed13: /* 42ed13: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ed17: jne 0x42ed73 */
  if (!zf) goto L_42ed73;
L_42ed19: /* 42ed19: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42ed1d: mov eax, 0x2000 */
  eax = 0x2000u;
/* 42ed22: call 0x4014ee */
  esp -= 4; W32(esp, 0x42ed27u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 42ed27: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 42ed2a: mov eax, esp */
  eax = esp;
/* 42ed2c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42ed2f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42ed33: jmp 0x42ed73 */
  goto L_42ed73;
L_42ed39: /* 42ed39: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 42ed3c: call 0x415709 */
  esp -= 4; W32(esp, 0x42ed41u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 42ed41: push 0x2000 */
  { uint32_t v = 0x2000u; esp -= 4; W32(esp, v); }
/* 42ed46: call 0x4010eb */
  esp -= 4; W32(esp, 0x42ed4bu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42ed4b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ed4c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42ed4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ed51: jne 0x42ed5f */
  if (!zf) goto L_42ed5f;
L_42ed53: /* 42ed53: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42ed57: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42ed5a: jmp 0x42f1dc */
  goto L_42f1dc;
L_42ed5f: /* 42ed5f: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 42ed66: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42ed6a: mov edi, dword ptr [ebp - 0x32c] */
  edi = R32((uint32_t)(ebp + 0xfffffcd4u));
/* 42ed70: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
L_42ed73: /* 42ed73: push 0x2000 */
  { uint32_t v = 0x2000u; esp -= 4; W32(esp, v); }
/* 42ed78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42ed7a: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42ed7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42ed7e: call 0x4010fd */
  esp -= 4; W32(esp, 0x42ed83u); SPILL(); hle_memset(); RELOAD();
/* 42ed83: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ed86: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ed8a: jne 0x42ed9d */
  if (!zf) goto L_42ed9d;
L_42ed8c: /* 42ed8c: push 0x5d */
  { uint32_t v = 0x5du; esp -= 4; W32(esp, v); }
/* 42ed8e: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 42ed8f: cmp word ptr [edi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ed92: jne 0x42ed9d */
  if (!zf) goto L_42ed9d;
L_42ed94: /* 42ed94: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 42ed97: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42ed98: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42ed99: mov byte ptr [esi + 0xb], 0x20 */
  W8((uint32_t)(esi + 0xbu), 0x20u);
L_42ed9d: /* 42ed9d: xor eax, eax */
  eax = 0;
/* 42ed9f: jmp 0x42ee19 */
  goto L_42ee19;
L_42eda1: /* 42eda1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42eda2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42eda3: cmp ax, 0x2d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42eda7: jne 0x42ee00 */
  if (!zf) goto L_42ee00;
L_42eda9: /* 42eda9: cmp word ptr [ebp - 0x3c], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffc4u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42edae: je 0x42ee00 */
  if (zf) goto L_42ee00;
L_42edb0: /* 42edb0: xor ecx, ecx */
  ecx = 0;
/* 42edb2: mov cx, word ptr [edi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 42edb5: cmp cx, 0x5d */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42edb9: je 0x42ee00 */
  if (zf) goto L_42ee00;
L_42edbb: /* 42edbb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42edbc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42edbd: cmp word ptr [ebp - 0x3c], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffc4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42edc1: jae 0x42edc7 */
  if (!cf) goto L_42edc7;
L_42edc3: /* 42edc3: mov eax, ecx */
  eax = ecx;
/* 42edc5: jmp 0x42edcd */
  goto L_42edcd;
L_42edc7: /* 42edc7: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 42edca: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
L_42edcd: /* 42edcd: cmp word ptr [ebp - 0x3c], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffc4u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42edd1: ja 0x42edfa */
  if ((!cf && !zf)) goto L_42edfa;
L_42edd3: /* 42edd3: movzx esi, word ptr [ebp - 0x3c] */
  esi = (uint32_t)(R16((uint32_t)(ebp + 0xffffffc4u)));
/* 42edd7: sub eax, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42edda: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42eddb: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
L_42edde: /* 42edde: mov eax, esi */
  eax = esi;
/* 42ede0: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42ede3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42ede6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42ede8: mov ecx, esi */
  ecx = esi;
/* 42edea: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 42eded: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42edef: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 42edf1: or byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 42edf3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42edf4: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 42edf5: jne 0x42edde */
  if (!zf) goto L_42edde;
L_42edf7: /* 42edf7: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
L_42edfa: /* 42edfa: and dword ptr [ebp - 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc4u), r);
  }
/* 42edfe: jmp 0x42ee19 */
  goto L_42ee19;
L_42ee00: /* 42ee00: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 42ee03: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 42ee06: mov eax, ecx */
  eax = ecx;
/* 42ee08: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42ee0b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42ee0e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42ee10: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 42ee13: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42ee15: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 42ee17: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_42ee19: /* 42ee19: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 42ee1c: cmp ax, 0x5d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee20: jne 0x42eda1 */
  if (!zf) goto L_42eda1;
L_42ee26: /* 42ee26: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42ee29: je 0x42f1dc */
  if (zf) goto L_42f1dc;
L_42ee2f: /* 42ee2f: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee33: jne 0x42ebea */
  if (!zf) goto L_42ebea;
L_42ee39: /* 42ee39: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 42ee3c: jmp 0x42ebea */
  goto L_42ebea;
L_42ee41: /* 42ee41: cmp bx, 0x2b */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee45: jne 0x42ee67 */
  if (!zf) goto L_42ee67;
L_42ee47: /* 42ee47: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42ee4a: jne 0x42ee56 */
  if (!zf) goto L_42ee56;
L_42ee4c: /* 42ee4c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ee4e: je 0x42ee56 */
  if (zf) goto L_42ee56;
L_42ee50: /* 42ee50: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42ee54: jmp 0x42ee67 */
  goto L_42ee67;
L_42ee56: /* 42ee56: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ee59: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ee5c: call 0x42c65c */
  esp -= 4; W32(esp, 0x42ee61u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42ee61: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ee62: mov ebx, eax */
  ebx = eax;
/* 42ee64: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42ee67: /* 42ee67: cmp bx, 0x30 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee6b: jne 0x42ef8d */
  if (!zf) goto L_42ef8d;
L_42ee71: /* 42ee71: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ee74: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ee77: call 0x42c65c */
  esp -= 4; W32(esp, 0x42ee7cu); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42ee7c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ee7d: mov ebx, eax */
  ebx = eax;
/* 42ee7f: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42ee82: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 42ee84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42ee85: cmp bx, di */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee88: je 0x42eecb */
  if (zf) goto L_42eecb;
L_42ee8a: /* 42ee8a: cmp bx, 0x58 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee8e: je 0x42eecb */
  if (zf) goto L_42eecb;
L_42ee90: /* 42ee90: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 42ee97: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee99: je 0x42eeb5 */
  if (zf) goto L_42eeb5;
L_42ee9b: /* 42ee9b: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ee9f: je 0x42eea9 */
  if (zf) goto L_42eea9;
L_42eea1: /* 42eea1: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eea4: jne 0x42eea9 */
  if (!zf) goto L_42eea9;
L_42eea6: /* 42eea6: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42eea9: /* 42eea9: mov dword ptr [ebp - 0x68], 0x6f */
  W32((uint32_t)(ebp + 0xffffff98u), 0x6fu);
/* 42eeb0: jmp 0x42ef8d */
  goto L_42ef8d;
L_42eeb5: /* 42eeb5: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42eeb8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42eebb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42eebc: call 0x42e704 */
  esp -= 4; W32(esp, 0x42eec1u); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42eec1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eec2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eec3: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 42eec5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42eec6: jmp 0x42ef8a */
  goto L_42ef8a;
L_42eecb: /* 42eecb: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42eece: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42eed1: call 0x42c65c */
  esp -= 4; W32(esp, 0x42eed6u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42eed6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42eed7: mov ebx, eax */
  ebx = eax;
/* 42eed9: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42eedc: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42eee0: je 0x42eeef */
  if (zf) goto L_42eeef;
L_42eee2: /* 42eee2: sub dword ptr [ebp - 0x48], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42eee6: cmp dword ptr [ebp - 0x48], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42eeea: jge 0x42eeef */
  if ((sf == of)) goto L_42eeef;
L_42eeec: /* 42eeec: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42eeef: /* 42eeef: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 42eef2: jmp 0x42ef8d */
  goto L_42ef8d;
L_42eef7: /* 42eef7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42eef8: push dword ptr [ebp - 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff9cu)); esp -= 4; W32(esp, v); }
/* 42eefb: call 0x402a4e */
  esp -= 4; W32(esp, 0x42ef00u); SPILL(); f_402a4e(); if (g_unwind) return; RELOAD();
/* 42ef00: add dword ptr [ebp - 0x64], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffff9cu), r);
  }
/* 42ef03: jmp 0x42ebf9 */
  goto L_42ebf9;
L_42ef08: /* 42ef08: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ef09: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ef0a: jmp 0x42ebfb */
  goto L_42ebfb;
L_42ef0f: /* 42ef0f: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ef12: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ef15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42ef16: call 0x42e704 */
  esp -= 4; W32(esp, 0x42ef1bu); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42ef1b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ef1c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42ef1d: /* 42ef1d: cmp esi, dword ptr [ebp - 0x64] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef20: je 0x42f1dc */
  if (zf) goto L_42f1dc;
L_42ef26: /* 42ef26: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef2a: jne 0x42f1b5 */
  if (!zf) goto L_42f1b5;
L_42ef30: /* 42ef30: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42ef33: cmp dword ptr [ebp - 0x68], 0x63 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef37: je 0x42f1b5 */
  if (zf) goto L_42f1b5;
L_42ef3d: /* 42ef3d: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42ef40: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef44: je 0x42ef4f */
  if (zf) goto L_42ef4f;
L_42ef46: /* 42ef46: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
/* 42ef4a: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42ef4f: /* 42ef4f: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42ef52: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42ef57: /* 42ef57: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
L_42ef5b: /* 42ef5b: cmp bx, 0x2d */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef5f: jne 0x42ef67 */
  if (!zf) goto L_42ef67;
L_42ef61: /* 42ef61: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 42ef65: jmp 0x42ef6d */
  goto L_42ef6d;
L_42ef67: /* 42ef67: cmp bx, 0x2b */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef6b: jne 0x42ef8d */
  if (!zf) goto L_42ef8d;
L_42ef6d: /* 42ef6d: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42ef70: jne 0x42ef7c */
  if (!zf) goto L_42ef7c;
L_42ef72: /* 42ef72: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ef74: je 0x42ef7c */
  if (zf) goto L_42ef7c;
L_42ef76: /* 42ef76: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42ef7a: jmp 0x42ef8d */
  goto L_42ef8d;
L_42ef7c: /* 42ef7c: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ef7f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ef82: call 0x42c65c */
  esp -= 4; W32(esp, 0x42ef87u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42ef87: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ef88: mov ebx, eax */
  ebx = eax;
L_42ef8a: /* 42ef8a: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42ef8d: /* 42ef8d: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef91: je 0x42f0a7 */
  if (zf) goto L_42f0a7;
L_42ef97: /* 42ef97: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ef9b: jne 0x42f085 */
  if (!zf) goto L_42f085;
L_42efa1: /* 42efa1: cmp dword ptr [ebp - 0x68], 0x78 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42efa5: je 0x42effc */
  if (zf) goto L_42effc;
L_42efa7: /* 42efa7: cmp dword ptr [ebp - 0x68], 0x70 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42efab: je 0x42effc */
  if (zf) goto L_42effc;
L_42efad: /* 42efad: test bh, 0xff */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42efb0: jne 0x42f031 */
  if (!zf) goto L_42f031;
L_42efb2: /* 42efb2: mov eax, ebx */
  eax = ebx;
/* 42efb4: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42efb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42efba: call 0x40152b */
  esp -= 4; W32(esp, 0x42efbfu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42efbf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42efc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42efc2: je 0x42f031 */
  if (zf) goto L_42f031;
L_42efc4: /* 42efc4: cmp dword ptr [ebp - 0x68], 0x6f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42efc8: jne 0x42efe5 */
  if (!zf) goto L_42efe5;
L_42efca: /* 42efca: cmp bx, 0x38 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x38u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 42efce: jae 0x42f031 */
  if (!cf) goto L_42f031;
L_42efd0: /* 42efd0: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42efd3: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42efd6: shld ecx, eax, 3 */
  { uint32_t a = ecx, b = eax, c = (0x3u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 42efda: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42efdd: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42efe0: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42efe3: jmp 0x42f034 */
  goto L_42f034;
L_42efe5: /* 42efe5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42efe7: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 42efe9: push dword ptr [ebp - 0x58] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa8u)); esp -= 4; W32(esp, v); }
/* 42efec: push dword ptr [ebp - 0x5c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa4u)); esp -= 4; W32(esp, v); }
/* 42efef: call 0x40518c */
  esp -= 4; W32(esp, 0x42eff4u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 42eff4: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42eff7: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 42effa: jmp 0x42f034 */
  goto L_42f034;
L_42effc: /* 42effc: test bh, 0xff */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42efff: jne 0x42f031 */
  if (!zf) goto L_42f031;
L_42f001: /* 42f001: mov eax, ebx */
  eax = ebx;
/* 42f003: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f008: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42f009: call 0x415449 */
  esp -= 4; W32(esp, 0x42f00eu); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 42f00e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f00f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 42f011: je 0x42f031 */
  if (zf) goto L_42f031;
L_42f013: /* 42f013: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42f016: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42f019: shld ecx, eax, 4 */
  { uint32_t a = ecx, b = eax, c = (0x4u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 42f01d: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42f020: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42f023: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42f026: mov esi, ebx */
  esi = ebx;
/* 42f028: call 0x42a09f */
  esp -= 4; W32(esp, 0x42f02du); SPILL(); f_42a09f(); if (g_unwind) return; RELOAD();
/* 42f02d: mov ebx, eax */
  ebx = eax;
/* 42f02f: jmp 0x42f034 */
  goto L_42f034;
L_42f031: /* 42f031: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42f034: /* 42f034: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f038: jne 0x42f06a */
  if (!zf) goto L_42f06a;
L_42f03a: /* 42f03a: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42f03d: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 42f040: sub eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42f043: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 42f044: add dword ptr [ebp - 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 42f047: adc dword ptr [ebp - 0x58], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 42f04a: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f04e: je 0x42f05b */
  if (zf) goto L_42f05b;
L_42f050: /* 42f050: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42f053: jne 0x42f05b */
  if (!zf) goto L_42f05b;
L_42f055: /* 42f055: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42f059: jmp 0x42f078 */
  goto L_42f078;
L_42f05b: /* 42f05b: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42f05e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f061: call 0x42c65c */
  esp -= 4; W32(esp, 0x42f066u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42f066: mov ebx, eax */
  ebx = eax;
/* 42f068: jmp 0x42f077 */
  goto L_42f077;
L_42f06a: /* 42f06a: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42f06d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f070: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42f071: call 0x42e704 */
  esp -= 4; W32(esp, 0x42f076u); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42f076: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42f077: /* 42f077: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42f078: /* 42f078: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f07c: je 0x42efa1 */
  if (zf) goto L_42efa1;
L_42f082: /* 42f082: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42f085: /* 42f085: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f089: je 0x42f176 */
  if (zf) goto L_42f176;
L_42f08f: /* 42f08f: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42f092: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 42f094: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42f097: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 42f09a: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 42f09c: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42f09f: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42f0a2: jmp 0x42f176 */
  goto L_42f176;
L_42f0a7: /* 42f0a7: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f0ab: jne 0x42f16d */
  if (!zf) goto L_42f16d;
L_42f0b1: /* 42f0b1: cmp dword ptr [ebp - 0x68], 0x78 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f0b5: je 0x42f0f3 */
  if (zf) goto L_42f0f3;
L_42f0b7: /* 42f0b7: cmp dword ptr [ebp - 0x68], 0x70 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f0bb: je 0x42f0f3 */
  if (zf) goto L_42f0f3;
L_42f0bd: /* 42f0bd: test bh, 0xff */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f0c0: jne 0x42f119 */
  if (!zf) goto L_42f119;
L_42f0c2: /* 42f0c2: mov eax, ebx */
  eax = ebx;
/* 42f0c4: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f0c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42f0ca: call 0x40152b */
  esp -= 4; W32(esp, 0x42f0cfu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42f0cf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f0d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42f0d2: je 0x42f119 */
  if (zf) goto L_42f119;
L_42f0d4: /* 42f0d4: cmp dword ptr [ebp - 0x68], 0x6f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f0d8: jne 0x42f0e6 */
  if (!zf) goto L_42f0e6;
L_42f0da: /* 42f0da: cmp bx, 0x38 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x38u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42f0de: jae 0x42f119 */
  if (!cf) goto L_42f119;
L_42f0e0: /* 42f0e0: shl dword ptr [ebp - 0x38], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42f0e4: jmp 0x42f11c */
  goto L_42f11c;
L_42f0e6: /* 42f0e6: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42f0e9: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 42f0ec: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42f0ee: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42f0f1: jmp 0x42f11c */
  goto L_42f11c;
L_42f0f3: /* 42f0f3: test bh, 0xff */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f0f6: jne 0x42f119 */
  if (!zf) goto L_42f119;
L_42f0f8: /* 42f0f8: mov eax, ebx */
  eax = ebx;
/* 42f0fa: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f0ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42f100: call 0x415449 */
  esp -= 4; W32(esp, 0x42f105u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 42f105: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f106: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42f108: je 0x42f119 */
  if (zf) goto L_42f119;
L_42f10a: /* 42f10a: shl dword ptr [ebp - 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42f10e: mov esi, ebx */
  esi = ebx;
/* 42f110: call 0x42a09f */
  esp -= 4; W32(esp, 0x42f115u); SPILL(); f_42a09f(); if (g_unwind) return; RELOAD();
/* 42f115: mov ebx, eax */
  ebx = eax;
/* 42f117: jmp 0x42f11c */
  goto L_42f11c;
L_42f119: /* 42f119: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42f11c: /* 42f11c: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f120: jne 0x42f152 */
  if (!zf) goto L_42f152;
L_42f122: /* 42f122: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42f125: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 42f128: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42f12b: lea eax, [ecx + eax - 0x30] */
  eax = (uint32_t)(ecx + eax + 0xffffffd0u);
/* 42f12f: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42f132: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f136: je 0x42f143 */
  if (zf) goto L_42f143;
L_42f138: /* 42f138: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42f13b: jne 0x42f143 */
  if (!zf) goto L_42f143;
L_42f13d: /* 42f13d: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 42f141: jmp 0x42f160 */
  goto L_42f160;
L_42f143: /* 42f143: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42f146: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f149: call 0x42c65c */
  esp -= 4; W32(esp, 0x42f14eu); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42f14e: mov ebx, eax */
  ebx = eax;
/* 42f150: jmp 0x42f15f */
  goto L_42f15f;
L_42f152: /* 42f152: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42f155: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f158: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42f159: call 0x42e704 */
  esp -= 4; W32(esp, 0x42f15eu); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42f15e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42f15f: /* 42f15f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42f160: /* 42f160: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f164: je 0x42f0b1 */
  if (zf) goto L_42f0b1;
L_42f16a: /* 42f16a: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_42f16d: /* 42f16d: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f171: je 0x42f176 */
  if (zf) goto L_42f176;
L_42f173: /* 42f173: neg dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
L_42f176: /* 42f176: cmp dword ptr [ebp - 0x68], 0x46 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f17a: jne 0x42f180 */
  if (!zf) goto L_42f180;
L_42f17c: /* 42f17c: and dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
L_42f180: /* 42f180: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f184: je 0x42f1dc */
  if (zf) goto L_42f1dc;
L_42f186: /* 42f186: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f18a: jne 0x42f1b5 */
  if (!zf) goto L_42f1b5;
L_42f18c: /* 42f18c: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42f18f: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42f192: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
L_42f195: /* 42f195: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f199: je 0x42f1a8 */
  if (zf) goto L_42f1a8;
L_42f19b: /* 42f19b: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42f19e: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 42f1a0: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42f1a3: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 42f1a6: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42f1a8: /* 42f1a8: cmp byte ptr [ebp - 0x4f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1ac: je 0x42f1b2 */
  if (zf) goto L_42f1b2;
L_42f1ae: /* 42f1ae: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 42f1b0: jmp 0x42f1b5 */
  goto L_42f1b5;
L_42f1b2: /* 42f1b2: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
L_42f1b5: /* 42f1b5: inc byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42f1b8: add dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_42f1bc: /* 42f1bc: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 42f1bf: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1c2: jne 0x42e75e */
  if (!zf) goto L_42e75e;
L_42f1c8: /* 42f1c8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42f1cb: cmp word ptr [eax], 0x25 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x25u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1cf: jne 0x42f1dc */
  if (!zf) goto L_42f1dc;
L_42f1d1: /* 42f1d1: cmp word ptr [eax + 2], 0x6e */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x2u))); uint16_t b = (uint16_t)(0x6eu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1d6: je 0x42e75e */
  if (zf) goto L_42e75e;
L_42f1dc: /* 42f1dc: cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1e0: jne 0x42f1eb */
  if (!zf) goto L_42f1eb;
L_42f1e2: /* 42f1e2: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42f1e5: call 0x401156 */
  esp -= 4; W32(esp, 0x42f1eau); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42f1ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42f1eb: /* 42f1eb: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 42f1ee: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1f1: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 42f1f4: jne 0x42f202 */
  if (!zf) goto L_42f202;
L_42f1f6: /* 42f1f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42f1f8: jne 0x42f202 */
  if (!zf) goto L_42f202;
L_42f1fa: /* 42f1fa: cmp byte ptr [ebp - 0x29], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f1fd: jne 0x42f202 */
  if (!zf) goto L_42f202;
L_42f1ff: /* 42f1ff: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_42f202: /* 42f202: lea esp, [ebp - 0x338] */
  esp = (uint32_t)(ebp + 0xfffffcc8u);
/* 42f208: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42f20b: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42f20e: call 0x4013ab */
  esp -= 4; W32(esp, 0x42f213u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 42f213: call 0x40105a */
  esp -= 4; W32(esp, 0x42f218u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42f218: ret  */
  esp += 4; SPILL(); return;
L_42f219: /* 42f219: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42f21c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f21f: call 0x42c65c */
  esp -= 4; W32(esp, 0x42f224u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42f224: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f225: mov ebx, eax */
  ebx = eax;
/* 42f227: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42f22a: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 42f22d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42f22e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42f22f: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 42f232: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42f235: je 0x42f1bc */
  if (zf) goto L_42f1bc;
L_42f237: /* 42f237: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f23a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42f23b: call 0x42e704 */
  esp -= 4; W32(esp, 0x42f240u); SPILL(); f_42e704(); if (g_unwind) return; RELOAD();
/* 42f240: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f241: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f242: jmp 0x42f1dc */
  goto L_42f1dc;
}

void f_42f244(void) {
  LOAD_REGS();
L_42f244: /* 42f244: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42f245: mov ebp, esp */
  ebp = esp;
/* 42f247: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42f248: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42f249: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 42f24c: movzx eax, word ptr [edx] */
  eax = (uint32_t)(R16((uint32_t)(edx)));
/* 42f24f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42f250: xor ebx, ebx */
  ebx = 0;
/* 42f252: cmp eax, 0x61 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f255: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42f256: mov esi, dword ptr [0x449238] */
  esi = R32((uint32_t)(0x449238u));
/* 42f25c: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 42f25f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42f262: je 0x42f280 */
  if (zf) goto L_42f280;
L_42f264: /* 42f264: cmp eax, 0x72 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x72u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f267: je 0x42f279 */
  if (zf) goto L_42f279;
L_42f269: /* 42f269: cmp eax, 0x77 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f26c: jne 0x42f391 */
  if (!zf) goto L_42f391;
L_42f272: /* 42f272: mov ecx, 0x301 */
  ecx = 0x301u;
/* 42f277: jmp 0x42f285 */
  goto L_42f285;
L_42f279: /* 42f279: xor ecx, ecx */
  ecx = 0;
/* 42f27b: or esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 42f27e: jmp 0x42f288 */
  goto L_42f288;
L_42f280: /* 42f280: mov ecx, 0x109 */
  ecx = 0x109u;
L_42f285: /* 42f285: or esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_42f288: /* 42f288: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42f289: xor edi, edi */
  edi = 0;
/* 42f28b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42f28c: jmp 0x42f368 */
  goto L_42f368;
L_42f291: /* 42f291: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f293: je 0x42f376 */
  if (zf) goto L_42f376;
L_42f299: /* 42f299: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 42f29c: cmp eax, 0x54 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42f29f: jg 0x42f312 */
  if ((!zf && sf == of)) goto L_42f312;
L_42f2a1: /* 42f2a1: je 0x42f305 */
  if (zf) goto L_42f305;
L_42f2a3: /* 42f2a3: sub eax, 0x2b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42f2a6: je 0x42f2ef */
  if (zf) goto L_42f2ef;
L_42f2a8: /* 42f2a8: sub eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42f2ab: je 0x42f2e5 */
  if (zf) goto L_42f2e5;
L_42f2ad: /* 42f2ad: sub eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42f2b0: je 0x42f2d1 */
  if (zf) goto L_42f2d1;
L_42f2b2: /* 42f2b2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42f2b3: jne 0x42f34a */
  if (!zf) goto L_42f34a;
L_42f2b9: /* 42f2b9: cmp dword ptr [ebp - 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f2bc: jne 0x42f34a */
  if (!zf) goto L_42f34a;
L_42f2c2: /* 42f2c2: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 42f2c9: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42f2cc: jmp 0x42f368 */
  goto L_42f368;
L_42f2d1: /* 42f2d1: cmp dword ptr [ebp - 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f2d4: jne 0x42f34a */
  if (!zf) goto L_42f34a;
L_42f2d6: /* 42f2d6: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 42f2dd: or ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42f2e0: jmp 0x42f368 */
  goto L_42f368;
L_42f2e5: /* 42f2e5: test cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f2e8: jne 0x42f34a */
  if (!zf) goto L_42f34a;
L_42f2ea: /* 42f2ea: or ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42f2ed: jmp 0x42f368 */
  goto L_42f368;
L_42f2ef: /* 42f2ef: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f2f2: jne 0x42f34a */
  if (!zf) goto L_42f34a;
L_42f2f4: /* 42f2f4: and ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 42f2f7: and esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 42f2fa: or ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42f2fd: or esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 42f303: jmp 0x42f368 */
  goto L_42f368;
L_42f305: /* 42f305: mov eax, 0x1000 */
  eax = 0x1000u;
/* 42f30a: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42f30c: jne 0x42f34a */
  if (!zf) goto L_42f34a;
L_42f30e: /* 42f30e: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42f310: jmp 0x42f368 */
  goto L_42f368;
L_42f312: /* 42f312: sub eax, 0x62 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x62u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42f315: je 0x42f35d */
  if (zf) goto L_42f35d;
L_42f317: /* 42f317: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42f318: je 0x42f345 */
  if (zf) goto L_42f345;
L_42f31a: /* 42f31a: sub eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42f31d: je 0x42f331 */
  if (zf) goto L_42f331;
L_42f31f: /* 42f31f: sub eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42f322: jne 0x42f34a */
  if (!zf) goto L_42f34a;
L_42f324: /* 42f324: test ch, 0xc0 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xc0u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f327: jne 0x42f34a */
  if (!zf) goto L_42f34a;
L_42f329: /* 42f329: or ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42f32f: jmp 0x42f368 */
  goto L_42f368;
L_42f331: /* 42f331: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f334: jne 0x42f34a */
  if (!zf) goto L_42f34a;
L_42f336: /* 42f336: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
/* 42f33d: and esi, 0xffffbfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffbfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 42f343: jmp 0x42f368 */
  goto L_42f368;
L_42f345: /* 42f345: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f348: je 0x42f34e */
  if (zf) goto L_42f34e;
L_42f34a: /* 42f34a: xor edi, edi */
  edi = 0;
/* 42f34c: jmp 0x42f368 */
  goto L_42f368;
L_42f34e: /* 42f34e: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
/* 42f355: or esi, 0x4000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 42f35b: jmp 0x42f368 */
  goto L_42f368;
L_42f35d: /* 42f35d: test ch, 0xc0 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xc0u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f360: jne 0x42f34a */
  if (!zf) goto L_42f34a;
L_42f362: /* 42f362: or ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_42f368: /* 42f368: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 42f369: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 42f36a: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 42f36d: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42f370: jne 0x42f291 */
  if (!zf) goto L_42f291;
L_42f376: /* 42f376: push 0x1a4 */
  { uint32_t v = 0x1a4u; esp -= 4; W32(esp, v); }
/* 42f37b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42f37e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42f37f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f382: call 0x42579f */
  esp -= 4; W32(esp, 0x42f387u); SPILL(); f_42579f(); if (g_unwind) return; RELOAD();
/* 42f387: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42f38a: mov ecx, eax */
  ecx = eax;
/* 42f38c: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42f38e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42f38f: jge 0x42f395 */
  if ((sf == of)) goto L_42f395;
L_42f391: /* 42f391: xor eax, eax */
  eax = 0;
/* 42f393: jmp 0x42f3a9 */
  goto L_42f3a9;
L_42f395: /* 42f395: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 42f398: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 42f39b: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 42f39e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 42f3a0: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 42f3a3: mov dword ptr [eax + 0x1c], ebx */
  W32((uint32_t)(eax + 0x1cu), ebx);
/* 42f3a6: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
L_42f3a9: /* 42f3a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42f3aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42f3ab: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42f3ac: ret  */
  esp += 4; SPILL(); return;
}

void f_42f3ad(void) {
  LOAD_REGS();
L_42f3ad: /* 42f3ad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42f3ae: mov ebp, esp */
  ebp = esp;
/* 42f3b0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42f3b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42f3b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42f3b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42f3b6: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42f3b9: mov esi, dword ptr [edi + 0x10] */
  esi = R32((uint32_t)(edi + 0x10u));
/* 42f3bc: xor eax, eax */
  eax = 0;
/* 42f3be: cmp dword ptr [edi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42f3c1: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 42f3c4: jge 0x42f3c9 */
  if ((sf == of)) goto L_42f3c9;
L_42f3c6: /* 42f3c6: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
L_42f3c9: /* 42f3c9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42f3cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42f3cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42f3cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42f3ce: call 0x415dd0 */
  esp -= 4; W32(esp, 0x42f3d3u); SPILL(); f_415dd0(); if (g_unwind) return; RELOAD();
/* 42f3d3: mov ecx, edx */
  ecx = edx;
/* 42f3d5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42f3d8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 42f3da: mov ebx, eax */
  ebx = eax;
/* 42f3dc: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
/* 42f3df: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 42f3e2: jg 0x42f3ee */
  if ((!zf && sf == of)) goto L_42f3ee;
L_42f3e4: /* 42f3e4: jl 0x42f46a */
  if ((sf != of)) goto L_42f46a;
L_42f3ea: /* 42f3ea: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 42f3ec: jb 0x42f46a */
  if (cf) goto L_42f46a;
L_42f3ee: /* 42f3ee: test word ptr [edi + 0xc], 0x108 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi + 0xcu))); uint16_t b = (uint16_t)(0x108u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42f3f4: jne 0x42f407 */
  if (!zf) goto L_42f407;
L_42f3f6: /* 42f3f6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 42f3f9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 42f3fa: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ebx = r;
  }
/* 42f3fc: sbb ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 42f3fe: mov eax, ebx */
  eax = ebx;
/* 42f400: mov edx, ecx */
  edx = ecx;
/* 42f402: jmp 0x42f53d */
  goto L_42f53d;
L_42f407: /* 42f407: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 42f409: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 42f40c: mov ecx, eax */
  ecx = eax;
/* 42f40e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 42f410: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 42f413: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 42f416: test cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f419: je 0x42f45b */
  if (zf) goto L_42f45b;
L_42f41b: /* 42f41b: mov ebx, esi */
  ebx = esi;
/* 42f41d: mov ecx, esi */
  ecx = esi;
/* 42f41f: sar ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 42f422: mov ebx, dword ptr [ebx*4 + 0x449240] */
  ebx = R32((uint32_t)(ebx*4 + 0x449240u));
/* 42f429: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 42f42c: lea ecx, [ecx + ecx*8] */
  ecx = (uint32_t)(ecx + ecx*8);
/* 42f42f: test byte ptr [ebx + ecx*4 + 4], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + ecx*4 + 0x4u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f434: je 0x42f449 */
  if (zf) goto L_42f449;
L_42f436: /* 42f436: mov ecx, edx */
  ecx = edx;
/* 42f438: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42f43a: jae 0x42f449 */
  if (!cf) goto L_42f449;
L_42f43c: /* 42f43c: cmp byte ptr [ecx], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f43f: jne 0x42f444 */
  if (!zf) goto L_42f444;
L_42f441: /* 42f441: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_42f444: /* 42f444: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42f445: cmp ecx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42f447: jb 0x42f43c */
  if (cf) goto L_42f43c;
L_42f449: /* 42f449: mov ebx, dword ptr [ebp - 0x10] */
  ebx = R32((uint32_t)(ebp + 0xfffffff0u));
L_42f44c: /* 42f44c: or ebx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ebx = r;
  }
/* 42f44f: jne 0x42f474 */
  if (!zf) goto L_42f474;
L_42f451: /* 42f451: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 42f454: xor edx, edx */
  edx = 0;
/* 42f456: jmp 0x42f53d */
  goto L_42f53d;
L_42f45b: /* 42f45b: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 42f45d: js 0x42f44c */
  if (sf) goto L_42f44c;
L_42f45f: /* 42f45f: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42f464u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42f464: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_42f46a: /* 42f46a: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 42f46d: mov eax, edx */
  eax = edx;
/* 42f46f: jmp 0x42f53d */
  goto L_42f53d;
L_42f474: /* 42f474: test byte ptr [edi + 0xc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f478: je 0x42f532 */
  if (zf) goto L_42f532;
L_42f47e: /* 42f47e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 42f481: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42f483: jne 0x42f48d */
  if (!zf) goto L_42f48d;
L_42f485: /* 42f485: and dword ptr [ebp - 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42f488: jmp 0x42f532 */
  goto L_42f532;
L_42f48d: /* 42f48d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42f48f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42f491: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 42f494: mov eax, esi */
  eax = esi;
/* 42f496: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 42f499: lea ebx, [eax*4 + 0x449240] */
  ebx = (uint32_t)(eax*4 + 0x449240u);
/* 42f4a0: mov eax, esi */
  eax = esi;
/* 42f4a2: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f4a5: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 42f4a8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 42f4aa: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 42f4ad: test byte ptr [esi + eax + 4], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax + 0x4u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f4b2: je 0x42f528 */
  if (zf) goto L_42f528;
L_42f4b4: /* 42f4b4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42f4b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42f4b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42f4ba: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 42f4bd: call 0x415dd0 */
  esp -= 4; W32(esp, 0x42f4c2u); SPILL(); f_415dd0(); if (g_unwind) return; RELOAD();
/* 42f4c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42f4c5: cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f4c8: jne 0x42f4ec */
  if (!zf) goto L_42f4ec;
L_42f4ca: /* 42f4ca: cmp edx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f4cd: jne 0x42f4ec */
  if (!zf) goto L_42f4ec;
L_42f4cf: /* 42f4cf: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 42f4d2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 42f4d5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 42f4d7: jmp 0x42f4e2 */
  goto L_42f4e2;
L_42f4d9: /* 42f4d9: cmp byte ptr [eax], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f4dc: jne 0x42f4e1 */
  if (!zf) goto L_42f4e1;
L_42f4de: /* 42f4de: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_42f4e1: /* 42f4e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_42f4e2: /* 42f4e2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42f4e4: jb 0x42f4d9 */
  if (cf) goto L_42f4d9;
L_42f4e6: /* 42f4e6: test byte ptr [edi + 0xd], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xdu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f4ea: jmp 0x42f523 */
  goto L_42f523;
L_42f4ec: /* 42f4ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42f4ee: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 42f4f1: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 42f4f4: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 42f4f7: call 0x415dd0 */
  esp -= 4; W32(esp, 0x42f4fcu); SPILL(); f_415dd0(); if (g_unwind) return; RELOAD();
/* 42f4fc: mov eax, 0x200 */
  eax = 0x200u;
/* 42f501: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42f504: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42f507: ja 0x42f516 */
  if ((!cf && !zf)) goto L_42f516;
L_42f509: /* 42f509: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 42f50c: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f50f: je 0x42f516 */
  if (zf) goto L_42f516;
L_42f511: /* 42f511: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f514: je 0x42f519 */
  if (zf) goto L_42f519;
L_42f516: /* 42f516: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
L_42f519: /* 42f519: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 42f51c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 42f51e: test byte ptr [esi + eax + 4], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax + 0x4u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
L_42f523: /* 42f523: je 0x42f528 */
  if (zf) goto L_42f528;
L_42f525: /* 42f525: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_42f528: /* 42f528: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42f52b: sub dword ptr [ebp - 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 42f52e: sbb dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
L_42f532: /* 42f532: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 42f535: xor edx, edx */
  edx = 0;
/* 42f537: add eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 42f53a: adc edx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
L_42f53d: /* 42f53d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42f53e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42f53f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42f540: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42f541: ret  */
  esp += 4; SPILL(); return;
}

void f_42f542(void) {
  LOAD_REGS();
L_42f542: /* 42f542: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42f544: push 0x441168 */
  { uint32_t v = 0x441168u; esp -= 4; W32(esp, v); }
/* 42f549: call 0x40101f */
  esp -= 4; W32(esp, 0x42f54eu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42f54e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f551: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42f556u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42f556: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f557: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42f55b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f55e: call 0x42f3ad */
  esp -= 4; W32(esp, 0x42f563u); SPILL(); f_42f3ad(); if (g_unwind) return; RELOAD();
/* 42f563: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f564: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42f567: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 42f56a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42f56e: call 0x42f57f */
  esp -= 4; W32(esp, 0x42f573u); SPILL(); f_42f57f(); if (g_unwind) return; RELOAD();
/* 42f573: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42f576: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42f579: call 0x40105a */
  esp -= 4; W32(esp, 0x42f57eu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42f57e: ret  */
  esp += 4; SPILL(); return;
}

void f_42f57f(void) {
  LOAD_REGS();
L_42f57f: /* 42f57f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f582: call 0x413925 */
  esp -= 4; W32(esp, 0x42f587u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42f587: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f588: ret  */
  esp += 4; SPILL(); return;
}

void f_42f589(void) {
  LOAD_REGS();
L_42f589: /* 42f589: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42f58a: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 42f58e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42f591: test al, 0x83 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f593: je 0x42f66e */
  if (zf) goto L_42f66e;
L_42f599: /* 42f599: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f59b: jne 0x42f66e */
  if (!zf) goto L_42f66e;
L_42f5a1: /* 42f5a1: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f5a3: je 0x42f5b0 */
  if (zf) goto L_42f5b0;
L_42f5a5: /* 42f5a5: or eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42f5a8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42f5ab: jmp 0x42f66e */
  goto L_42f66e;
L_42f5b0: /* 42f5b0: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42f5b3: test ax, 0x10c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x10cu);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42f5b7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42f5ba: jne 0x42f5c5 */
  if (!zf) goto L_42f5c5;
L_42f5bc: /* 42f5bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42f5bd: call 0x414589 */
  esp -= 4; W32(esp, 0x42f5c2u); SPILL(); f_414589(); if (g_unwind) return; RELOAD();
/* 42f5c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f5c3: jmp 0x42f5ca */
  goto L_42f5ca;
L_42f5c5: /* 42f5c5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 42f5c8: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_42f5ca: /* 42f5ca: push dword ptr [esi + 0x18] */
  { uint32_t v = R32((uint32_t)(esi + 0x18u)); esp -= 4; W32(esp, v); }
/* 42f5cd: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f5d0: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 42f5d3: call 0x4251e0 */
  esp -= 4; W32(esp, 0x42f5d8u); SPILL(); f_4251e0(); if (g_unwind) return; RELOAD();
/* 42f5d8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42f5db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42f5dd: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 42f5e0: je 0x42f65d */
  if (zf) goto L_42f65d;
L_42f5e2: /* 42f5e2: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f5e5: je 0x42f65d */
  if (zf) goto L_42f65d;
L_42f5e7: /* 42f5e7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f5ea: je 0x42f65d */
  if (zf) goto L_42f65d;
L_42f5ec: /* 42f5ec: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 42f5ef: test dl, 0x82 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x82u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f5f2: jne 0x42f62e */
  if (!zf) goto L_42f62e;
L_42f5f4: /* 42f5f4: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 42f5f7: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f5fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42f5fb: je 0x42f614 */
  if (zf) goto L_42f614;
L_42f5fd: /* 42f5fd: mov edi, ecx */
  edi = ecx;
/* 42f5ff: sar edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 42f602: mov edi, dword ptr [edi*4 + 0x449240] */
  edi = R32((uint32_t)(edi*4 + 0x449240u));
/* 42f609: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 42f60c: lea ecx, [ecx + ecx*8] */
  ecx = (uint32_t)(ecx + ecx*8);
/* 42f60f: lea edi, [edi + ecx*4] */
  edi = (uint32_t)(edi + ecx*4);
/* 42f612: jmp 0x42f619 */
  goto L_42f619;
L_42f614: /* 42f614: mov edi, 0x449008 */
  edi = 0x449008u;
L_42f619: /* 42f619: mov cl, byte ptr [edi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* 42f61c: and cl, 0x82 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x82u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42f61f: cmp cl, 0x82 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x82u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f622: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42f623: jne 0x42f62e */
  if (!zf) goto L_42f62e;
L_42f625: /* 42f625: or edx, 0x2000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 42f62b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
L_42f62e: /* 42f62e: cmp dword ptr [esi + 0x18], 0x200 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f635: jne 0x42f64b */
  if (!zf) goto L_42f64b;
L_42f637: /* 42f637: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 42f63a: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f63d: je 0x42f64b */
  if (zf) goto L_42f64b;
L_42f63f: /* 42f63f: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f642: jne 0x42f64b */
  if (!zf) goto L_42f64b;
L_42f644: /* 42f644: mov dword ptr [esi + 0x18], 0x1000 */
  W32((uint32_t)(esi + 0x18u), 0x1000u);
L_42f64b: /* 42f64b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 42f64d: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42f650: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 42f653: movzx eax, word ptr [ecx] */
  eax = (uint32_t)(R16((uint32_t)(ecx)));
/* 42f656: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 42f659: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 42f65b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42f65c: ret  */
  esp += 4; SPILL(); return;
L_42f65d: /* 42f65d: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 42f65f: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 42f661: and eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f664: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42f667: or dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 42f66a: and dword ptr [esi + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_42f66e: /* 42f66e: mov eax, 0xffff */
  eax = 0xffffu;
/* 42f673: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42f674: ret  */
  esp += 4; SPILL(); return;
}

void f_42f675(void) {
  LOAD_REGS();
L_42f675: /* 42f675: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42f676: mov ebp, esp */
  ebp = esp;
/* 42f678: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42f679: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42f67a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42f67b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42f67e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42f681: test al, 0x82 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x82u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f683: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 42f686: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 42f689: je 0x42f78e */
  if (zf) goto L_42f78e;
L_42f68f: /* 42f68f: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f691: jne 0x42f78e */
  if (!zf) goto L_42f78e;
L_42f697: /* 42f697: xor ebx, ebx */
  ebx = 0;
/* 42f699: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f69b: je 0x42f6b3 */
  if (zf) goto L_42f6b3;
L_42f69d: /* 42f69d: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f69f: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 42f6a2: je 0x42f78e */
  if (zf) goto L_42f78e;
L_42f6a8: /* 42f6a8: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 42f6ab: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f6ae: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 42f6b0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
L_42f6b3: /* 42f6b3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42f6b6: and eax, 0xffffffef */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f6b9: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42f6bc: test ax, 0x10c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x10cu);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42f6c0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42f6c3: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 42f6c6: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 42f6c9: jne 0x42f6f0 */
  if (!zf) goto L_42f6f0;
L_42f6cb: /* 42f6cb: cmp esi, 0x449588 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x449588u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f6d1: je 0x42f6db */
  if (zf) goto L_42f6db;
L_42f6d3: /* 42f6d3: cmp esi, 0x4495a8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4495a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f6d9: jne 0x42f6e6 */
  if (!zf) goto L_42f6e6;
L_42f6db: /* 42f6db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42f6dc: call 0x415ae6 */
  esp -= 4; W32(esp, 0x42f6e1u); SPILL(); f_415ae6(); if (g_unwind) return; RELOAD();
/* 42f6e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42f6e3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f6e4: jne 0x42f6ed */
  if (!zf) goto L_42f6ed;
L_42f6e6: /* 42f6e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42f6e7: call 0x414589 */
  esp -= 4; W32(esp, 0x42f6ecu); SPILL(); f_414589(); if (g_unwind) return; RELOAD();
/* 42f6ec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42f6ed: /* 42f6ed: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
L_42f6f0: /* 42f6f0: test word ptr [esi + 0xc], 0x108 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xcu))); uint16_t b = (uint16_t)(0x108u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42f6f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42f6f7: je 0x42f75e */
  if (zf) goto L_42f75e;
L_42f6f9: /* 42f6f9: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 42f6fc: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 42f6fe: lea edx, [eax + 2] */
  edx = (uint32_t)(eax + 0x2u);
/* 42f701: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 42f703: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 42f706: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 42f708: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 42f709: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 42f70a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42f70c: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 42f70f: jle 0x42f71e */
  if ((zf || sf != of)) goto L_42f71e;
L_42f711: /* 42f711: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42f712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42f713: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42f714: call 0x41597f */
  esp -= 4; W32(esp, 0x42f719u); SPILL(); f_41597f(); if (g_unwind) return; RELOAD();
/* 42f719: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 42f71c: jmp 0x42f750 */
  goto L_42f750;
L_42f71e: /* 42f71e: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f721: je 0x42f73c */
  if (zf) goto L_42f73c;
L_42f723: /* 42f723: mov edx, ecx */
  edx = ecx;
/* 42f725: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 42f728: mov edx, dword ptr [edx*4 + 0x449240] */
  edx = R32((uint32_t)(edx*4 + 0x449240u));
/* 42f72f: mov eax, ecx */
  eax = ecx;
/* 42f731: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f734: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 42f737: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 42f73a: jmp 0x42f741 */
  goto L_42f741;
L_42f73c: /* 42f73c: mov eax, 0x449008 */
  eax = 0x449008u;
L_42f741: /* 42f741: test byte ptr [eax + 4], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f745: je 0x42f753 */
  if (zf) goto L_42f753;
L_42f747: /* 42f747: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42f749: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42f74a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42f74b: call 0x415ca2 */
  esp -= 4; W32(esp, 0x42f750u); SPILL(); f_415ca2(); if (g_unwind) return; RELOAD();
L_42f750: /* 42f750: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_42f753: /* 42f753: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 42f756: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 42f759: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 42f75c: jmp 0x42f779 */
  goto L_42f779;
L_42f75e: /* 42f75e: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 42f761: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42f763: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42f764: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42f765: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 42f768: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42f769: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42f76a: mov word ptr [ebp + 0xc], bx */
  W16((uint32_t)(ebp + 0xcu), (ebx & 0xffffu));
/* 42f76e: call 0x41597f */
  esp -= 4; W32(esp, 0x42f773u); SPILL(); f_41597f(); if (g_unwind) return; RELOAD();
/* 42f773: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42f776: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_42f779: /* 42f779: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f77c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42f77d: je 0x42f785 */
  if (zf) goto L_42f785;
L_42f77f: /* 42f77f: or dword ptr [esi + 0xc], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 42f783: jmp 0x42f794 */
  goto L_42f794;
L_42f785: /* 42f785: mov eax, ebx */
  eax = ebx;
/* 42f787: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f78c: jmp 0x42f799 */
  goto L_42f799;
L_42f78e: /* 42f78e: or eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42f791: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
L_42f794: /* 42f794: mov eax, 0xffff */
  eax = 0xffffu;
L_42f799: /* 42f799: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42f79a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42f79b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42f79c: ret  */
  esp += 4; SPILL(); return;
}

void f_42f79d(void) {
  LOAD_REGS();
L_42f79d: /* 42f79d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42f79e: mov ebp, esp */
  ebp = esp;
/* 42f7a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42f7a1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42f7a4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42f7a7: test al, 0x83 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f7a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42f7aa: je 0x42f81e */
  if (zf) goto L_42f81e;
L_42f7ac: /* 42f7ac: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 42f7af: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42f7b1: je 0x42f7bd */
  if (zf) goto L_42f7bd;
L_42f7b3: /* 42f7b3: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f7b6: je 0x42f7bd */
  if (zf) goto L_42f7bd;
L_42f7b8: /* 42f7b8: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f7bb: jne 0x42f81e */
  if (!zf) goto L_42f81e;
L_42f7bd: /* 42f7bd: and eax, 0xffffffef */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f7c0: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f7c3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42f7c6: jne 0x42f7d7 */
  if (!zf) goto L_42f7d7;
L_42f7c8: /* 42f7c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42f7c9: call 0x42f3ad */
  esp -= 4; W32(esp, 0x42f7ceu); SPILL(); f_42f3ad(); if (g_unwind) return; RELOAD();
/* 42f7ce: add dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 42f7d1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f7d2: adc dword ptr [ebp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 42f7d5: xor edi, edi */
  edi = 0;
L_42f7d7: /* 42f7d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42f7d8: call 0x404333 */
  esp -= 4; W32(esp, 0x42f7ddu); SPILL(); f_404333(); if (g_unwind) return; RELOAD();
/* 42f7dd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42f7e0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 42f7e2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f7e3: jns 0x42f7ed */
  if (!sf) goto L_42f7ed;
L_42f7e5: /* 42f7e5: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f7e8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42f7eb: jmp 0x42f801 */
  goto L_42f801;
L_42f7ed: /* 42f7ed: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f7ef: je 0x42f801 */
  if (zf) goto L_42f801;
L_42f7f1: /* 42f7f1: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f7f3: je 0x42f801 */
  if (zf) goto L_42f801;
L_42f7f5: /* 42f7f5: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42f7f8: jne 0x42f801 */
  if (!zf) goto L_42f801;
L_42f7fa: /* 42f7fa: mov dword ptr [esi + 0x18], 0x200 */
  W32((uint32_t)(esi + 0x18u), 0x200u);
L_42f801: /* 42f801: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42f802: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42f805: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42f808: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 42f80b: call 0x415dd0 */
  esp -= 4; W32(esp, 0x42f810u); SPILL(); f_415dd0(); if (g_unwind) return; RELOAD();
/* 42f810: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f812: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42f815: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f818: je 0x42f829 */
  if (zf) goto L_42f829;
L_42f81a: /* 42f81a: xor eax, eax */
  eax = 0;
/* 42f81c: jmp 0x42f82c */
  goto L_42f82c;
L_42f81e: /* 42f81e: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42f823u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42f823: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_42f829: /* 42f829: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_42f82c: /* 42f82c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42f82d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42f82e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 42f82f: ret  */
  esp += 4; SPILL(); return;
}

void f_42f830(void) {
  LOAD_REGS();
L_42f830: /* 42f830: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42f832: push 0x441178 */
  { uint32_t v = 0x441178u; esp -= 4; W32(esp, v); }
/* 42f837: call 0x40101f */
  esp -= 4; W32(esp, 0x42f83cu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42f83c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f83f: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42f844u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42f844: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f845: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42f849: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42f84c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42f84f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42f852: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f855: call 0x42f79d */
  esp -= 4; W32(esp, 0x42f85au); SPILL(); f_42f79d(); if (g_unwind) return; RELOAD();
/* 42f85a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42f85d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42f860: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42f864: call 0x42f872 */
  esp -= 4; W32(esp, 0x42f869u); SPILL(); f_42f872(); if (g_unwind) return; RELOAD();
/* 42f869: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42f86c: call 0x40105a */
  esp -= 4; W32(esp, 0x42f871u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42f871: ret  */
  esp += 4; SPILL(); return;
}

void f_42f872(void) {
  LOAD_REGS();
L_42f872: /* 42f872: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f875: call 0x413925 */
  esp -= 4; W32(esp, 0x42f87au); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42f87a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42f87b: ret  */
  esp += 4; SPILL(); return;
}

void f_42f87c(void) {
  LOAD_REGS();
L_42f87c: /* 42f87c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42f87d: mov ebp, esp */
  ebp = esp;
/* 42f87f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42f880: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42f881: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42f885: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 42f889: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42f88a: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 42f88d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42f88e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42f88f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42f892: call 0x40137f */
  esp -= 4; W32(esp, 0x42f897u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42f897: mov esi, dword ptr [eax + 0x64] */
  esi = R32((uint32_t)(eax + 0x64u));
/* 42f89a: cmp esi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f8a0: je 0x42f8a9 */
  if (zf) goto L_42f8a9;
L_42f8a2: /* 42f8a2: call 0x4025f2 */
  esp -= 4; W32(esp, 0x42f8a7u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 42f8a7: mov esi, eax */
  esi = eax;
L_42f8a9: /* 42f8a9: cmp dword ptr [esi + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f8ad: jne 0x42f8ea */
  if (!zf) goto L_42f8ea;
L_42f8af: /* 42f8af: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42f8b2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42f8b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42f8b6: call 0x407e3c */
  esp -= 4; W32(esp, 0x42f8bbu); SPILL(); f_407e3c(); if (g_unwind) return; RELOAD();
/* 42f8bb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42f8be: jmp 0x42f8f6 */
  goto L_42f8f6;
L_42f8c0: /* 42f8c0: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 42f8c3: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 42f8c6: cmp eax, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f8c9: jne 0x42f8f0 */
  if (!zf) goto L_42f8f0;
L_42f8cb: /* 42f8cb: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* 42f8ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42f8cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42f8d0: call 0x401c2f */
  esp -= 4; W32(esp, 0x42f8d5u); SPILL(); f_401c2f(); if (g_unwind) return; RELOAD();
/* 42f8d5: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 42f8d8: movzx eax, byte ptr [ebx] */
  eax = (uint32_t)(R8((uint32_t)(ebx)));
/* 42f8db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42f8dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42f8dd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42f8de: call 0x401c2f */
  esp -= 4; W32(esp, 0x42f8e3u); SPILL(); f_401c2f(); if (g_unwind) return; RELOAD();
/* 42f8e3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42f8e6: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 42f8e9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_42f8ea: /* 42f8ea: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f8ee: jne 0x42f8c0 */
  if (!zf) goto L_42f8c0;
L_42f8f0: /* 42f8f0: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 42f8f3: sub eax, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_42f8f6: /* 42f8f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42f8f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42f8f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42f8f9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42f8fa: ret  */
  esp += 4; SPILL(); return;
}

void f_42f8fb(void) {
  LOAD_REGS();
L_42f8fb: /* 42f8fb: call 0x40137f */
  esp -= 4; W32(esp, 0x42f900u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42f900: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 42f903: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f909: je 0x42f910 */
  if (zf) goto L_42f910;
L_42f90b: /* 42f90b: call 0x4025f2 */
  esp -= 4; W32(esp, 0x42f910u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_42f910: /* 42f910: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 42f913: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42f915: je 0x401bd4 */
  if (zf) { SPILL(); f_401bd4(); return; }
L_42f91b: /* 42f91b: push dword ptr [eax + 8] */
  { uint32_t v = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f91e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42f920: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42f924: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42f926: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42f92a: push 0x1001 */
  { uint32_t v = 0x1001u; esp -= 4; W32(esp, v); }
/* 42f92f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42f930: call 0x4038f9 */
  esp -= 4; W32(esp, 0x42f935u); SPILL(); f_4038f9(); if (g_unwind) return; RELOAD();
/* 42f935: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42f938: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42f93a: jne 0x42f94d */
  if (!zf) goto L_42f94d;
L_42f93c: /* 42f93c: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42f941u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42f941: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 42f947: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 42f94c: ret  */
  esp += 4; SPILL(); return;
L_42f94d: /* 42f94d: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42f950: ret  */
  esp += 4; SPILL(); return;
}

void f_42f951(void) {
  LOAD_REGS();
L_42f951: /* 42f951: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 42f953: push 0x441188 */
  { uint32_t v = 0x441188u; esp -= 4; W32(esp, v); }
/* 42f958: call 0x40101f */
  esp -= 4; W32(esp, 0x42f95du); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42f95d: xor ebx, ebx */
  ebx = 0;
/* 42f95f: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 42f962: call 0x40137f */
  esp -= 4; W32(esp, 0x42f967u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42f967: mov esi, dword ptr [eax + 0x64] */
  esi = R32((uint32_t)(eax + 0x64u));
/* 42f96a: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 42f96d: cmp esi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f973: je 0x42f97f */
  if (zf) goto L_42f97f;
L_42f975: /* 42f975: call 0x4025f2 */
  esp -= 4; W32(esp, 0x42f97au); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 42f97a: mov esi, eax */
  esi = eax;
/* 42f97c: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
L_42f97f: /* 42f97f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 42f982: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f984: jne 0x42f9ae */
  if (!zf) goto L_42f9ae;
L_42f986: /* 42f986: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42f989: mov edx, eax */
  edx = eax;
/* 42f98b: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f98d: je 0x42fa5c */
  if (zf) goto L_42fa5c;
L_42f993: /* 42f993: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 42f995: cmp cl, 0x41 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42f998: jl 0x42f9a4 */
  if ((sf != of)) goto L_42f9a4;
L_42f99a: /* 42f99a: cmp cl, 0x5a */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42f99d: jg 0x42f9a4 */
  if ((!zf && sf == of)) goto L_42f9a4;
L_42f99f: /* 42f99f: add cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42f9a2: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
L_42f9a4: /* 42f9a4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 42f9a5: cmp byte ptr [edx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42f9a7: jne 0x42f993 */
  if (!zf) goto L_42f993;
L_42f9a9: /* 42f9a9: jmp 0x42fa5c */
  goto L_42fa5c;
L_42f9ae: /* 42f9ae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42f9b0: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42f9b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42f9b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42f9b5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42f9b7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42f9ba: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 42f9bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42f9c0: call 0x40462b */
  esp -= 4; W32(esp, 0x42f9c5u); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 42f9c5: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42f9c8: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42f9cb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42f9cd: je 0x42fa59 */
  if (zf) goto L_42fa59;
L_42f9d3: /* 42f9d3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42f9d6: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42f9d9: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42f9dc: call 0x4014ee */
  esp -= 4; W32(esp, 0x42f9e1u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 42f9e1: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 42f9e4: mov edi, esp */
  edi = esp;
/* 42f9e6: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 42f9e9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42f9ed: jmp 0x42fa06 */
  goto L_42fa06;
L_42fa06: /* 42fa06: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fa08: jne 0x42fa20 */
  if (!zf) goto L_42fa20;
L_42fa0a: /* 42fa0a: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42fa0d: call 0x4010eb */
  esp -= 4; W32(esp, 0x42fa12u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42fa12: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42fa13: mov edi, eax */
  edi = eax;
/* 42fa15: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 42fa1c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fa1e: je 0x42fa4d */
  if (zf) goto L_42fa4d;
L_42fa20: /* 42fa20: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42fa22: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42fa25: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42fa28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fa29: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42fa2b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fa2e: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 42fa33: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 42fa36: call 0x40462b */
  esp -= 4; W32(esp, 0x42fa3bu); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 42fa3b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fa3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fa40: je 0x42fa4d */
  if (zf) goto L_42fa4d;
L_42fa42: /* 42fa42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fa43: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fa46: call 0x404b3a */
  esp -= 4; W32(esp, 0x42fa4bu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 42fa4b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42fa4c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42fa4d: /* 42fa4d: cmp dword ptr [ebp - 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fa50: je 0x42fa59 */
  if (zf) goto L_42fa59;
L_42fa52: /* 42fa52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fa53: call 0x401156 */
  esp -= 4; W32(esp, 0x42fa58u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42fa58: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42fa59: /* 42fa59: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_42fa5c: /* 42fa5c: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 42fa5f: call 0x40105a */
  esp -= 4; W32(esp, 0x42fa64u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42fa64: ret  */
  esp += 4; SPILL(); return;
}
