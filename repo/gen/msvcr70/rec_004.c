#include "recomp.h"
#include "rec_mod.h"

void f_411c04(void) {
  LOAD_REGS();
L_411c04: /* 411c04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 411c05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 411c06: mov esi, 0x449240 */
  esi = 0x449240u;
L_411c0b: /* 411c0b: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 411c0d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 411c0f: je 0x411c42 */
  if (zf) goto L_411c42;
L_411c11: /* 411c11: lea eax, [edi + 0x480] */
  eax = (uint32_t)(edi + 0x480u);
/* 411c17: jmp 0x411c33 */
  goto L_411c33;
L_411c19: /* 411c19: cmp dword ptr [edi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411c1d: je 0x411c29 */
  if (zf) goto L_411c29;
L_411c1f: /* 411c1f: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 411c22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 411c23: call dword ptr [0x439034] */
  esp -= 4; W32(esp, 0x411c29u); SPILL(); call_ind(R32(0x439034u)); if (g_unwind) return; /* KERNEL32!DeleteCriticalSection */ RELOAD();
L_411c29: /* 411c29: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 411c2b: add edi, 0x24 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 411c2e: add eax, 0x480 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_411c33: /* 411c33: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411c35: jb 0x411c19 */
  if (cf) goto L_411c19;
L_411c37: /* 411c37: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 411c39: call 0x401156 */
  esp -= 4; W32(esp, 0x411c3eu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 411c3e: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 411c41: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_411c42: /* 411c42: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 411c45: cmp esi, 0x449340 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x449340u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 411c4b: jl 0x411c0b */
  if ((sf != of)) goto L_411c0b;
L_411c4d: /* 411c4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 411c4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 411c4f: ret  */
  esp += 4; SPILL(); return;
}

void f_411c50(void) {
  LOAD_REGS();
L_411c50: /* 411c50: sub eax, 0x3a4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 411c55: je 0x411c79 */
  if (zf) goto L_411c79;
L_411c57: /* 411c57: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 411c5a: je 0x411c73 */
  if (zf) goto L_411c73;
L_411c5c: /* 411c5c: sub eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 411c5f: je 0x411c6d */
  if (zf) goto L_411c6d;
L_411c61: /* 411c61: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 411c62: je 0x411c67 */
  if (zf) goto L_411c67;
L_411c64: /* 411c64: xor eax, eax */
  eax = 0;
/* 411c66: ret  */
  esp += 4; SPILL(); return;
L_411c67: /* 411c67: mov eax, 0x404 */
  eax = 0x404u;
/* 411c6c: ret  */
  esp += 4; SPILL(); return;
L_411c6d: /* 411c6d: mov eax, 0x412 */
  eax = 0x412u;
/* 411c72: ret  */
  esp += 4; SPILL(); return;
L_411c73: /* 411c73: mov eax, 0x804 */
  eax = 0x804u;
/* 411c78: ret  */
  esp += 4; SPILL(); return;
L_411c79: /* 411c79: mov eax, 0x411 */
  eax = 0x411u;
/* 411c7e: ret  */
  esp += 4; SPILL(); return;
}

void f_411c7f(void) {
  LOAD_REGS();
L_411c7f: /* 411c7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 411c80: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 411c82: xor eax, eax */
  eax = 0;
/* 411c84: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 411c85: mov edi, 0x449340 */
  edi = 0x449340u;
/* 411c8a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 411c8c: stosb byte ptr es:[edi], al */
  W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1);
/* 411c8d: xor eax, eax */
  eax = 0;
/* 411c8f: mov dword ptr [0x44b13c], eax */
  W32((uint32_t)(0x44b13cu), eax);
/* 411c94: mov dword ptr [0x44b138], eax */
  W32((uint32_t)(0x44b138u), eax);
/* 411c99: mov dword ptr [0x44b134], eax */
  W32((uint32_t)(0x44b134u), eax);
/* 411c9e: mov edi, 0x44b140 */
  edi = 0x44b140u;
/* 411ca3: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 411ca4: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 411ca5: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 411ca6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 411ca7: ret  */
  esp += 4; SPILL(); return;
}

void f_411ca8(void) {
  LOAD_REGS();
L_411ca8: /* 411ca8: mov eax, dword ptr [0x44b138] */
  eax = R32((uint32_t)(0x44b138u));
/* 411cad: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 411caf: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 411cb1: and eax, dword ptr [0x44b13c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b13cu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 411cb7: ret  */
  esp += 4; SPILL(); return;
}

void f_411cb8(void) {
  LOAD_REGS();
L_411cb8: /* 411cb8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 411cb9: mov ebp, esp */
  ebp = esp;
/* 411cbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 411cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 411cbd: call 0x40137f */
  esp -= 4; W32(esp, 0x411cc2u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 411cc2: mov esi, dword ptr [eax + 0x60] */
  esi = R32((uint32_t)(eax + 0x60u));
/* 411cc5: cmp esi, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411ccb: je 0x411cd4 */
  if (zf) goto L_411cd4;
L_411ccd: /* 411ccd: call 0x403c88 */
  esp -= 4; W32(esp, 0x411cd2u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 411cd2: mov esi, eax */
  esi = eax;
L_411cd4: /* 411cd4: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411cd8: jne 0x411cec */
  if (!zf) goto L_411cec;
L_411cda: /* 411cda: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 411cdd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 411ce0: call 0x401bd4 */
  esp -= 4; W32(esp, 0x411ce5u); SPILL(); f_401bd4(); if (g_unwind) return; RELOAD();
/* 411ce5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 411ce6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 411ce7: jmp 0x411df1 */
  goto L_411df1;
L_411cec: /* 411cec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 411ced: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 411cee: mov ebx, 0x200 */
  ebx = 0x200u;
L_411cf3: /* 411cf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 411cf6: movzx ax, byte ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ecx)))) & 0xffffu);
/* 411cfa: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 411cfd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 411cfe: test byte ptr [edx + esi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + esi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411d03: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 411d06: je 0x411d55 */
  if (zf) goto L_411d55;
L_411d08: /* 411d08: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 411d0b: jne 0x411d11 */
  if (!zf) goto L_411d11;
L_411d0d: /* 411d0d: xor edi, edi */
  edi = 0;
/* 411d0f: jmp 0x411d6d */
  goto L_411d6d;
L_411d11: /* 411d11: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 411d13: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 411d16: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 411d19: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 411d1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 411d1c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 411d1e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 411d1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 411d20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 411d21: push dword ptr [esi + 0xc] */
  { uint32_t v = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, v); }
/* 411d24: call 0x40462b */
  esp -= 4; W32(esp, 0x411d29u); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 411d29: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 411d2c: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411d2f: jne 0x411d38 */
  if (!zf) goto L_411d38;
L_411d31: /* 411d31: movzx di, byte ptr [ebp - 4] */
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu)))) & 0xffffu);
/* 411d36: jmp 0x411d50 */
  goto L_411d50;
L_411d38: /* 411d38: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411d3b: jne 0x411df4 */
  if (!zf) goto L_411df4;
L_411d41: /* 411d41: movzx di, byte ptr [ebp - 4] */
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu)))) & 0xffffu);
/* 411d46: movzx ax, byte ptr [ebp - 3] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ebp + 0xfffffffdu)))) & 0xffffu);
/* 411d4b: shl edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 411d4e: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_411d50: /* 411d50: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 411d53: jmp 0x411d6d */
  goto L_411d6d;
L_411d55: /* 411d55: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 411d58: lea eax, [ecx + esi] */
  eax = (uint32_t)(ecx + esi);
/* 411d5b: test byte ptr [eax + 0x1d], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1du))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411d5f: je 0x411d6b */
  if (zf) goto L_411d6b;
L_411d61: /* 411d61: movsx di, byte ptr [eax + 0x11d] */
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0x11du)))) & 0xffffu);
/* 411d69: jmp 0x411d6d */
  goto L_411d6d;
L_411d6b: /* 411d6b: mov edi, ecx */
  edi = ecx;
L_411d6d: /* 411d6d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 411d70: movzx ax, byte ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ecx)))) & 0xffffu);
/* 411d74: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 411d77: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 411d78: test byte ptr [edx + esi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + esi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411d7d: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 411d80: je 0x411dcb */
  if (zf) goto L_411dcb;
L_411d82: /* 411d82: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 411d85: jne 0x411d8b */
  if (!zf) goto L_411d8b;
L_411d87: /* 411d87: xor eax, eax */
  eax = 0;
/* 411d89: jmp 0x411ddf */
  goto L_411ddf;
L_411d8b: /* 411d8b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 411d8d: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 411d90: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 411d93: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 411d95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 411d96: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 411d98: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 411d99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 411d9a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 411d9b: push dword ptr [esi + 0xc] */
  { uint32_t v = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, v); }
/* 411d9e: call 0x40462b */
  esp -= 4; W32(esp, 0x411da3u); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 411da3: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 411da6: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411da9: jne 0x411db2 */
  if (!zf) goto L_411db2;
L_411dab: /* 411dab: movzx ax, byte ptr [ebp - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu)))) & 0xffffu);
/* 411db0: jmp 0x411dc6 */
  goto L_411dc6;
L_411db2: /* 411db2: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411db5: jne 0x411df4 */
  if (!zf) goto L_411df4;
L_411db7: /* 411db7: movzx ax, byte ptr [ebp - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu)))) & 0xffffu);
/* 411dbc: movzx cx, byte ptr [ebp - 3] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ebp + 0xfffffffdu)))) & 0xffffu);
/* 411dc1: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 411dc4: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_411dc6: /* 411dc6: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 411dc9: jmp 0x411ddf */
  goto L_411ddf;
L_411dcb: /* 411dcb: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 411dce: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* 411dd1: test byte ptr [ecx + 0x1d], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1du))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411dd5: je 0x411ddf */
  if (zf) goto L_411ddf;
L_411dd7: /* 411dd7: movsx ax, byte ptr [ecx + 0x11d] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + 0x11du)))) & 0xffffu);
L_411ddf: /* 411ddf: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 411de2: jne 0x411dfb */
  if (!zf) goto L_411dfb;
L_411de4: /* 411de4: test di, di */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 411de7: jne 0x411cf3 */
  if (!zf) goto L_411cf3;
L_411ded: /* 411ded: xor eax, eax */
  eax = 0;
L_411def: /* 411def: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 411df0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_411df1: /* 411df1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 411df2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 411df3: ret  */
  esp += 4; SPILL(); return;
L_411df4: /* 411df4: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 411df9: jmp 0x411def */
  goto L_411def;
L_411dfb: /* 411dfb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 411dfd: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 411e00: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 411e01: jmp 0x411def */
  goto L_411def;
}

void f_411e03(void) {
  LOAD_REGS();
L_411e03: /* 411e03: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 411e04: mov ebp, esp */
  ebp = esp;
/* 411e06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 411e07: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 411e0a: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 411e0d: call 0x40137f */
  esp -= 4; W32(esp, 0x411e12u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 411e12: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 411e15: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411e1b: je 0x411e22 */
  if (zf) goto L_411e22;
L_411e1d: /* 411e1d: call 0x403c88 */
  esp -= 4; W32(esp, 0x411e22u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_411e22: /* 411e22: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411e26: jne 0x411e39 */
  if (!zf) goto L_411e39;
L_411e28: /* 411e28: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 411e2b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 411e2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 411e2f: call 0x4053f1 */
  esp -= 4; W32(esp, 0x411e34u); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 411e34: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 411e37: jmp 0x411e81 */
  goto L_411e81;
L_411e39: /* 411e39: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 411e3c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 411e3e: je 0x411e7e */
  if (zf) goto L_411e7e;
L_411e40: /* 411e40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 411e41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 411e42: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_411e45: /* 411e45: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 411e47: movzx ebx, dl */
  ebx = (uint32_t)((edx & 0xffu));
/* 411e4a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 411e4b: test byte ptr [ebx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411e50: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 411e52: je 0x411e84 */
  if (zf) goto L_411e84;
L_411e54: /* 411e54: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 411e55: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 411e56: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 411e58: je 0x411e90 */
  if (zf) goto L_411e90;
L_411e5a: /* 411e5a: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 411e5c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 411e5d: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 411e5f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 411e60: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 411e61: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411e63: jne 0x411e8a */
  if (!zf) goto L_411e8a;
L_411e65: /* 411e65: and byte ptr [edi - 2], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xfffffffeu))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(edi + 0xfffffffeu), r);
  }
L_411e68: /* 411e68: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 411e6a: je 0x411e7c */
  if (zf) goto L_411e7c;
L_411e6c: /* 411e6c: mov edx, ecx */
  edx = ecx;
/* 411e6e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 411e71: xor eax, eax */
  eax = 0;
/* 411e73: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 411e75: mov ecx, edx */
  ecx = edx;
/* 411e77: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 411e7a: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
L_411e7c: /* 411e7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 411e7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_411e7e: /* 411e7e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_411e81: /* 411e81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 411e82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 411e83: ret  */
  esp += 4; SPILL(); return;
L_411e84: /* 411e84: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 411e85: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 411e86: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411e88: je 0x411e68 */
  if (zf) goto L_411e68;
L_411e8a: /* 411e8a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 411e8c: jne 0x411e45 */
  if (!zf) goto L_411e45;
L_411e8e: /* 411e8e: jmp 0x411e7c */
  goto L_411e7c;
L_411e90: /* 411e90: and byte ptr [edi - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(edi + 0xffffffffu), r);
  }
/* 411e94: jmp 0x411e7c */
  goto L_411e7c;
}

void f_411e96(void) {
  LOAD_REGS();
L_411e96: /* 411e96: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 411e97: mov ebp, esp */
  ebp = esp;
/* 411e99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 411e9a: call 0x40137f */
  esp -= 4; W32(esp, 0x411e9fu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 411e9f: mov esi, dword ptr [eax + 0x60] */
  esi = R32((uint32_t)(eax + 0x60u));
/* 411ea2: cmp esi, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411ea8: je 0x411eb1 */
  if (zf) goto L_411eb1;
L_411eaa: /* 411eaa: call 0x403c88 */
  esp -= 4; W32(esp, 0x411eafu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 411eaf: mov esi, eax */
  esi = eax;
L_411eb1: /* 411eb1: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411eb5: jne 0x411ebe */
  if (!zf) goto L_411ebe;
L_411eb7: /* 411eb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 411eb8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 411eb9: jmp 0x406182 */
  SPILL(); f_406182(); return;
L_411ebe: /* 411ebe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 411ebf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 411ec0: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_411ec3: /* 411ec3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 411ec6: movzx ax, byte ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax)))) & 0xffffu);
/* 411eca: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 411ecd: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 411ed0: test byte ptr [ecx + esi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + esi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411ed5: je 0x411eef */
  if (zf) goto L_411eef;
L_411ed7: /* 411ed7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 411eda: mov cl, byte ptr [ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 411edc: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411ede: jne 0x411ee4 */
  if (!zf) goto L_411ee4;
L_411ee0: /* 411ee0: xor eax, eax */
  eax = 0;
/* 411ee2: jmp 0x411eef */
  goto L_411eef;
L_411ee4: /* 411ee4: xor edx, edx */
  edx = 0;
/* 411ee6: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 411ee9: mov dh, al */
  edx = (edx & 0xffff00ffu) | (((uint32_t)((eax & 0xffu)) & 0xffu) << 8);
/* 411eeb: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 411eed: mov eax, edx */
  eax = edx;
L_411eef: /* 411eef: movzx cx, byte ptr [edi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edi)))) & 0xffffu);
/* 411ef3: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 411ef6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 411ef7: test byte ptr [edx + esi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + esi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411efc: je 0x411f11 */
  if (zf) goto L_411f11;
L_411efe: /* 411efe: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 411f00: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411f02: jne 0x411f08 */
  if (!zf) goto L_411f08;
L_411f04: /* 411f04: xor ecx, ecx */
  ecx = 0;
/* 411f06: jmp 0x411f11 */
  goto L_411f11;
L_411f08: /* 411f08: xor ebx, ebx */
  ebx = 0;
/* 411f0a: mov bh, cl */
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)((ecx & 0xffu)) & 0xffu) << 8);
/* 411f0c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 411f0d: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 411f0f: mov ecx, ebx */
  ecx = ebx;
L_411f11: /* 411f11: cmp cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 411f14: jne 0x411f22 */
  if (!zf) goto L_411f22;
L_411f16: /* 411f16: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 411f19: jne 0x411ec3 */
  if (!zf) goto L_411ec3;
L_411f1b: /* 411f1b: xor eax, eax */
  eax = 0;
L_411f1d: /* 411f1d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 411f1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 411f1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 411f20: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 411f21: ret  */
  esp += 4; SPILL(); return;
L_411f22: /* 411f22: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 411f24: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 411f27: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 411f28: jmp 0x411f1d */
  goto L_411f1d;
}

void f_411f2a(void) {
  LOAD_REGS();
L_411f2a: /* 411f2a: call 0x40137f */
  esp -= 4; W32(esp, 0x411f2fu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 411f2f: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 411f32: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411f38: je 0x411f3f */
  if (zf) goto L_411f3f;
L_411f3a: /* 411f3a: call 0x403c88 */
  esp -= 4; W32(esp, 0x411f3fu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_411f3f: /* 411f3f: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 411f43: cmp dword ptr [esp + 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411f47: jb 0x411f4c */
  if (cf) goto L_411f4c;
L_411f49: /* 411f49: xor eax, eax */
  eax = 0;
/* 411f4b: ret  */
  esp += 4; SPILL(); return;
L_411f4c: /* 411f4c: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411f50: jne 0x411f56 */
  if (!zf) goto L_411f56;
L_411f52: /* 411f52: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 411f55: ret  */
  esp += 4; SPILL(); return;
L_411f56: /* 411f56: lea ecx, [edx - 1] */
  ecx = (uint32_t)(edx + 0xffffffffu);
/* 411f59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 411f5a: movzx esi, byte ptr [ecx] */
  esi = (uint32_t)(R8((uint32_t)(ecx)));
/* 411f5d: test byte ptr [esi + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411f62: je 0x411f69 */
  if (zf) goto L_411f69;
L_411f64: /* 411f64: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 411f67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 411f68: ret  */
  esp += 4; SPILL(); return;
L_411f69: /* 411f69: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 411f6a: cmp dword ptr [esp + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 411f6e: ja 0x411f7a */
  if ((!cf && !zf)) goto L_411f7a;
L_411f70: /* 411f70: movzx esi, byte ptr [ecx] */
  esi = (uint32_t)(R8((uint32_t)(ecx)));
/* 411f73: test byte ptr [esi + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411f78: jne 0x411f69 */
  if (!zf) goto L_411f69;
L_411f7a: /* 411f7a: mov esi, edx */
  esi = edx;
/* 411f7c: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 411f7e: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 411f81: mov eax, edx */
  eax = edx;
/* 411f83: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 411f85: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 411f86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 411f87: ret  */
  esp += 4; SPILL(); return;
}

void f_411f88(void) {
  LOAD_REGS();
L_411f88: /* 411f88: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 411f89: mov ebp, esp */
  ebp = esp;
/* 411f8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 411f8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 411f8d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 411f90: xor ebx, ebx */
  ebx = 0;
/* 411f92: cmp dword ptr [esi + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411f95: jne 0x411fa6 */
  if (!zf) goto L_411fa6;
L_411f97: /* 411f97: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 411f9a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 411f9d: call 0x4074ce */
  esp -= 4; W32(esp, 0x411fa2u); SPILL(); f_4074ce(); if (g_unwind) return; RELOAD();
/* 411fa2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 411fa3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 411fa4: jmp 0x412000 */
  goto L_412000;
L_411fa6: /* 411fa6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 411fa9: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 411fab: je 0x411ff8 */
  if (zf) goto L_411ff8;
L_411fad: /* 411fad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_411fae: /* 411fae: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 411fb1: jmp 0x411fdb */
  goto L_411fdb;
L_411fb3: /* 411fb3: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 411fb5: movzx edi, dl */
  edi = (uint32_t)((edx & 0xffu));
/* 411fb8: test byte ptr [edi + esi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + esi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411fbd: je 0x411fd6 */
  if (zf) goto L_411fd6;
L_411fbf: /* 411fbf: cmp dl, byte ptr [ecx] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 411fc1: jne 0x411fcb */
  if (!zf) goto L_411fcb;
L_411fc3: /* 411fc3: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 411fc6: cmp dl, byte ptr [ecx + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 411fc9: je 0x411fdf */
  if (zf) goto L_411fdf;
L_411fcb: /* 411fcb: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 411fce: cmp byte ptr [edx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 411fd0: je 0x411fdf */
  if (zf) goto L_411fdf;
L_411fd2: /* 411fd2: mov eax, edx */
  eax = edx;
/* 411fd4: jmp 0x411fda */
  goto L_411fda;
L_411fd6: /* 411fd6: cmp dl, byte ptr [ecx] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 411fd8: je 0x411fdf */
  if (zf) goto L_411fdf;
L_411fda: /* 411fda: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_411fdb: /* 411fdb: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 411fdd: jne 0x411fb3 */
  if (!zf) goto L_411fb3;
L_411fdf: /* 411fdf: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 411fe1: jne 0x411ff7 */
  if (!zf) goto L_411ff7;
L_411fe3: /* 411fe3: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 411fe6: test byte ptr [esi + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 411feb: je 0x411ff2 */
  if (zf) goto L_411ff2;
L_411fed: /* 411fed: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 411fee: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 411ff0: je 0x411ff7 */
  if (zf) goto L_411ff7;
L_411ff2: /* 411ff2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 411ff3: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 411ff5: jne 0x411fae */
  if (!zf) goto L_411fae;
L_411ff7: /* 411ff7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_411ff8: /* 411ff8: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 411ffa: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 411ffc: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 411ffe: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_412000: /* 412000: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 412001: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 412002: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 412003: ret  */
  esp += 4; SPILL(); return;
}

void f_412004(void) {
  LOAD_REGS();
L_412004: /* 412004: call 0x40137f */
  esp -= 4; W32(esp, 0x412009u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 412009: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 41200c: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412012: je 0x412019 */
  if (zf) goto L_412019;
L_412014: /* 412014: call 0x403c88 */
  esp -= 4; W32(esp, 0x412019u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_412019: /* 412019: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41201d: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 412021: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412022: call 0x411f88 */
  esp -= 4; W32(esp, 0x412027u); SPILL(); f_411f88(); if (g_unwind) return; RELOAD();
/* 412027: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41202a: ret  */
  esp += 4; SPILL(); return;
}

void f_41202b(void) {
  LOAD_REGS();
L_41202b: /* 41202b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41202c: mov ebp, esp */
  ebp = esp;
/* 41202e: sub esp, 0x32c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x32cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 412034: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 412039: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41203c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41203d: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 412040: mov eax, dword ptr [0x44f3e8] */
  eax = R32((uint32_t)(0x44f3e8u));
/* 412045: xor ebx, ebx */
  ebx = 0;
/* 412047: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41204a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41204b: je 0x4123cd */
  if (zf) goto L_4123cd;
L_412051: /* 412051: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412053: jne 0x412062 */
  if (!zf) goto L_412062;
L_412055: /* 412055: cmp dword ptr [0x44afbc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44afbcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41205c: je 0x4123cd */
  if (zf) goto L_4123cd;
L_412062: /* 412062: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412068: push 0x43ea34 */
  { uint32_t v = 0x43ea34u; esp -= 4; W32(esp, v); }
/* 41206d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41206e: call 0x404b3a */
  esp -= 4; W32(esp, 0x412073u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 412073: push dword ptr [0x44dce0] */
  { uint32_t v = R32((uint32_t)(0x44dce0u)); esp -= 4; W32(esp, v); }
/* 412079: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 41207f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412080: call 0x401d57 */
  esp -= 4; W32(esp, 0x412085u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412085: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 41208b: push 0x43ea28 */
  { uint32_t v = 0x43ea28u; esp -= 4; W32(esp, v); }
/* 412090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412091: call 0x401d57 */
  esp -= 4; W32(esp, 0x412096u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412096: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 412099: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 41209e: lea eax, [ebp - 0x32c] */
  eax = (uint32_t)(ebp + 0xfffffcd4u);
/* 4120a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4120a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4120a6: mov byte ptr [ebp - 0x228], bl */
  W8((uint32_t)(ebp + 0xfffffdd8u), (ebx & 0xffu));
/* 4120ac: call dword ptr [0x439000] */
  esp -= 4; W32(esp, 0x4120b2u); SPILL(); call_ind(R32(0x439000u)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameA */ RELOAD();
/* 4120b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4120b4: jne 0x4120c9 */
  if (!zf) goto L_4120c9;
L_4120b6: /* 4120b6: lea eax, [ebp - 0x32c] */
  eax = (uint32_t)(ebp + 0xfffffcd4u);
/* 4120bc: push 0x43e8f4 */
  { uint32_t v = 0x43e8f4u; esp -= 4; W32(esp, v); }
/* 4120c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4120c2: call 0x404b3a */
  esp -= 4; W32(esp, 0x4120c7u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 4120c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4120c8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4120c9: /* 4120c9: lea eax, [ebp - 0x32c] */
  eax = (uint32_t)(ebp + 0xfffffcd4u);
/* 4120cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4120d0: lea esi, [ebp - 0x32c] */
  esi = (uint32_t)(ebp + 0xfffffcd4u);
/* 4120d6: call 0x402493 */
  esp -= 4; W32(esp, 0x4120dbu); SPILL(); hle_strlen(); RELOAD();
/* 4120db: add eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4120de: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4120e1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4120e2: jbe 0x41210e */
  if ((cf | zf)) goto L_41210e;
L_4120e4: /* 4120e4: lea eax, [ebp - 0x32c] */
  eax = (uint32_t)(ebp + 0xfffffcd4u);
/* 4120ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4120eb: call 0x402493 */
  esp -= 4; W32(esp, 0x4120f0u); SPILL(); hle_strlen(); RELOAD();
/* 4120f0: mov esi, eax */
  esi = eax;
/* 4120f2: lea eax, [ebp - 0x32c] */
  eax = (uint32_t)(ebp + 0xfffffcd4u);
/* 4120f8: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4120fa: push dword ptr [0x44dcd8] */
  { uint32_t v = R32((uint32_t)(0x44dcd8u)); esp -= 4; W32(esp, v); }
/* 412100: sub eax, 0x31 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x31u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 412103: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 412105: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412106: call 0x4053f1 */
  esp -= 4; W32(esp, 0x41210bu); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 41210b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_41210e: /* 41210e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41210f: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412115: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412116: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412117: call 0x401d57 */
  esp -= 4; W32(esp, 0x41211cu); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 41211c: push dword ptr [0x44dcdc] */
  { uint32_t v = R32((uint32_t)(0x44dcdcu)); esp -= 4; W32(esp, v); }
/* 412122: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412128: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412129: call 0x401d57 */
  esp -= 4; W32(esp, 0x41212eu); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 41212e: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412134: push 0x43ea20 */
  { uint32_t v = 0x43ea20u; esp -= 4; W32(esp, v); }
/* 412139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41213a: call 0x401d57 */
  esp -= 4; W32(esp, 0x41213fu); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 41213f: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 412142: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412143: call 0x402493 */
  esp -= 4; W32(esp, 0x412148u); SPILL(); hle_strlen(); RELOAD();
/* 412148: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41214b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41214e: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 412151: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412152: jbe 0x412257 */
  if ((cf | zf)) goto L_412257;
L_412158: /* 412158: call 0x402493 */
  esp -= 4; W32(esp, 0x41215du); SPILL(); hle_strlen(); RELOAD();
/* 41215d: mov esi, eax */
  esi = eax;
/* 41215f: mov al, byte ptr [esi + edi - 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + edi + 0xffffffffu))) & 0xffu);
/* 412163: xor edx, edx */
  edx = 0;
/* 412165: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 412166: cmp al, 0x5c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 412168: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412169: je 0x41217f */
  if (zf) goto L_41217f;
L_41216b: /* 41216b: lea ecx, [esi + edi - 1] */
  ecx = (uint32_t)(esi + edi + 0xffffffffu);
L_41216f: /* 41216f: cmp al, 0x2f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 412171: je 0x41217f */
  if (zf) goto L_41217f;
L_412173: /* 412173: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 412175: jae 0x41217f */
  if (!cf) goto L_41217f;
L_412177: /* 412177: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 412178: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 412179: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 41217b: cmp al, 0x5c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41217d: jne 0x41216f */
  if (!zf) goto L_41216f;
L_41217f: /* 41217f: mov ebx, esi */
  ebx = esi;
/* 412181: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 412183: cmp ebx, 0x23 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x23u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 412186: jbe 0x4121ba */
  if ((cf | zf)) goto L_4121ba;
L_412188: /* 412188: cmp edx, 0x11 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41218b: jae 0x4121b7 */
  if (!cf) goto L_4121b7;
L_41218d: /* 41218d: push 0x31 */
  { uint32_t v = 0x31u; esp -= 4; W32(esp, v); }
/* 41218f: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 412190: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 412192: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412193: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412199: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41219a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41219b: call 0x40750d */
  esp -= 4; W32(esp, 0x4121a0u); SPILL(); f_40750d(); if (g_unwind) return; RELOAD();
/* 4121a0: push dword ptr [0x44dcd8] */
  { uint32_t v = R32((uint32_t)(0x44dcd8u)); esp -= 4; W32(esp, v); }
/* 4121a6: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 4121ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4121ad: call 0x401d57 */
  esp -= 4; W32(esp, 0x4121b2u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 4121b2: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4121b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4121b5: jmp 0x4121ec */
  goto L_4121ec;
L_4121b7: /* 4121b7: cmp ebx, 0x23 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x23u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
L_4121ba: /* 4121ba: jae 0x4121fd */
  if (!cf) goto L_4121fd;
L_4121bc: /* 4121bc: push 0x31 */
  { uint32_t v = 0x31u; esp -= 4; W32(esp, v); }
/* 4121be: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4121bf: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 4121c1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4121c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4121c4: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 4121ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4121cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4121cc: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 4121cf: call 0x40750d */
  esp -= 4; W32(esp, 0x4121d4u); SPILL(); f_40750d(); if (g_unwind) return; RELOAD();
/* 4121d4: push dword ptr [0x44dcd8] */
  { uint32_t v = R32((uint32_t)(0x44dcd8u)); esp -= 4; W32(esp, v); }
/* 4121da: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 4121e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4121e1: call 0x401d57 */
  esp -= 4; W32(esp, 0x4121e6u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 4121e6: sub esi, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4121e9: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4121eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_4121ec: /* 4121ec: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 4121f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4121f3: call 0x401d57 */
  esp -= 4; W32(esp, 0x4121f8u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 4121f8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4121fb: jmp 0x412265 */
  goto L_412265;
L_4121fd: /* 4121fd: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4121ff: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412205: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412206: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412207: call 0x40750d */
  esp -= 4; W32(esp, 0x41220cu); SPILL(); f_40750d(); if (g_unwind) return; RELOAD();
/* 41220c: push dword ptr [0x44dcd8] */
  { uint32_t v = R32((uint32_t)(0x44dcd8u)); esp -= 4; W32(esp, v); }
/* 412212: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412218: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412219: call 0x401d57 */
  esp -= 4; W32(esp, 0x41221eu); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 41221e: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 412220: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 412222: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412228: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 412229: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41222a: call 0x40750d */
  esp -= 4; W32(esp, 0x41222fu); SPILL(); f_40750d(); if (g_unwind) return; RELOAD();
/* 41222f: push dword ptr [0x44dcd8] */
  { uint32_t v = R32((uint32_t)(0x44dcd8u)); esp -= 4; W32(esp, v); }
/* 412235: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 41223b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41223c: call 0x401d57 */
  esp -= 4; W32(esp, 0x412241u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412241: lea eax, [esi + edi - 7] */
  eax = (uint32_t)(esi + edi + 0xfffffff9u);
/* 412245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412246: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 41224c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41224d: call 0x401d57 */
  esp -= 4; W32(esp, 0x412252u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412252: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 412255: jmp 0x412265 */
  goto L_412265;
L_412257: /* 412257: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 41225d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41225e: call 0x401d57 */
  esp -= 4; W32(esp, 0x412263u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412263: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412264: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412265: /* 412265: push dword ptr [0x44dcdc] */
  { uint32_t v = R32((uint32_t)(0x44dcdcu)); esp -= 4; W32(esp, v); }
/* 41226b: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412272: call 0x401d57 */
  esp -= 4; W32(esp, 0x412277u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412277: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 41227d: push 0x43ea18 */
  { uint32_t v = 0x43ea18u; esp -= 4; W32(esp, v); }
/* 412282: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412283: call 0x401d57 */
  esp -= 4; W32(esp, 0x412288u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412288: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41228b: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412291: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 412293: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412294: call 0x402493 */
  esp -= 4; W32(esp, 0x412299u); SPILL(); hle_strlen(); RELOAD();
/* 412299: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41229a: lea eax, [ebp + eax - 0x224] */
  eax = (uint32_t)(ebp + eax + 0xfffffddcu);
/* 4122a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4122a2: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4122a5: call 0x406aa2 */
  esp -= 4; W32(esp, 0x4122aau); SPILL(); f_406aa2(); if (g_unwind) return; RELOAD();
/* 4122aa: push dword ptr [0x44dce0] */
  { uint32_t v = R32((uint32_t)(0x44dce0u)); esp -= 4; W32(esp, v); }
/* 4122b0: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 4122b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4122b7: call 0x401d57 */
  esp -= 4; W32(esp, 0x4122bcu); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 4122bc: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 4122c2: push 0x43ea08 */
  { uint32_t v = 0x43ea08u; esp -= 4; W32(esp, v); }
/* 4122c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4122c8: call 0x401d57 */
  esp -= 4; W32(esp, 0x4122cdu); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 4122cd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4122d0: call 0x402493 */
  esp -= 4; W32(esp, 0x4122d5u); SPILL(); hle_strlen(); RELOAD();
/* 4122d5: mov esi, eax */
  esi = eax;
/* 4122d7: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 4122dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4122de: call 0x402493 */
  esp -= 4; W32(esp, 0x4122e3u); SPILL(); hle_strlen(); RELOAD();
/* 4122e3: lea eax, [esi + eax + 0xb0] */
  eax = (uint32_t)(esi + eax + 0xb0u);
/* 4122ea: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4122ed: cmp eax, 0x21c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x21cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4122f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4122f3: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 4122f9: jbe 0x41232f */
  if ((cf | zf)) goto L_41232f;
L_4122fb: /* 4122fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4122fc: call 0x402493 */
  esp -= 4; W32(esp, 0x412301u); SPILL(); hle_strlen(); RELOAD();
/* 412301: mov ecx, 0x169 */
  ecx = 0x169u;
/* 412306: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 412308: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 412309: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41230c: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412312: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412313: call 0x40750d */
  esp -= 4; W32(esp, 0x412318u); SPILL(); f_40750d(); if (g_unwind) return; RELOAD();
/* 412318: push dword ptr [0x44dcd8] */
  { uint32_t v = R32((uint32_t)(0x44dcd8u)); esp -= 4; W32(esp, v); }
/* 41231e: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412324: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412325: call 0x401d57 */
  esp -= 4; W32(esp, 0x41232au); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 41232a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41232d: jmp 0x41233a */
  goto L_41233a;
L_41232f: /* 41232f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 412332: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412333: call 0x401d57 */
  esp -= 4; W32(esp, 0x412338u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412338: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412339: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41233a: /* 41233a: push dword ptr [0x44dce0] */
  { uint32_t v = R32((uint32_t)(0x44dce0u)); esp -= 4; W32(esp, v); }
/* 412340: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412346: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412347: call 0x401d57 */
  esp -= 4; W32(esp, 0x41234cu); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 41234c: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412352: push 0x43e998 */
  { uint32_t v = 0x43e998u; esp -= 4; W32(esp, v); }
/* 412357: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412358: call 0x401d57 */
  esp -= 4; W32(esp, 0x41235du); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 41235d: push dword ptr [0x44dce0] */
  { uint32_t v = R32((uint32_t)(0x44dce0u)); esp -= 4; W32(esp, v); }
/* 412363: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412369: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41236a: call 0x401d57 */
  esp -= 4; W32(esp, 0x41236fu); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 41236f: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 412375: push 0x43e954 */
  { uint32_t v = 0x43e954u; esp -= 4; W32(esp, v); }
/* 41237a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41237b: call 0x401d57 */
  esp -= 4; W32(esp, 0x412380u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412380: push 0x12012 */
  { uint32_t v = 0x12012u; esp -= 4; W32(esp, v); }
/* 412385: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 41238b: push 0x43e8a8 */
  { uint32_t v = 0x43e8a8u; esp -= 4; W32(esp, v); }
/* 412390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412391: call 0x41240c */
  esp -= 4; W32(esp, 0x412396u); SPILL(); f_41240c(); if (g_unwind) return; RELOAD();
/* 412396: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 412399: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41239c: jne 0x4123ad */
  if (!zf) goto L_4123ad;
L_41239e: /* 41239e: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* 4123a0: call 0x412a1a */
  esp -= 4; W32(esp, 0x4123a5u); SPILL(); f_412a1a(); if (g_unwind) return; RELOAD();
/* 4123a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4123a6: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4123a8: call 0x40f783 */
  esp -= 4; W32(esp, 0x4123adu); SPILL(); f_40f783(); if (g_unwind) return; RELOAD();
L_4123ad: /* 4123ad: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4123b0: jne 0x4123c2 */
  if (!zf) goto L_4123c2;
L_4123b2: guest_badaddr(0x4123b2); return;
L_4123b3: /* 4123b3: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4123b6: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4123b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4123ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4123bb: call 0x4013ab */
  esp -= 4; W32(esp, 0x4123c0u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4123c0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4123c1: ret  */
  esp += 4; SPILL(); return;
L_4123c2: /* 4123c2: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4123c5: jne 0x41278b */
  if (!zf) { SPILL(); f_41278b(); return; }
L_4123cb: /* 4123cb: jmp 0x4123b3 */
  goto L_4123b3;
L_4123cd: /* 4123cd: test word ptr [0x4495b4], 0x10c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x4495b4u))); uint16_t b = (uint16_t)(0x10cu);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4123d6: mov esi, 0x4495a8 */
  esi = 0x4495a8u;
/* 4123db: jne 0x4123ea */
  if (!zf) goto L_4123ea;
L_4123dd: /* 4123dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4123de: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4123e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4123e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4123e2: call 0x413a02 */
  esp -= 4; W32(esp, 0x4123e7u); SPILL(); f_413a02(); if (g_unwind) return; RELOAD();
/* 4123e7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4123ea: /* 4123ea: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4123ed: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4123f0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4123f3: push 0x44dcb0 */
  { uint32_t v = 0x44dcb0u; esp -= 4; W32(esp, v); }
/* 4123f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4123f9: call 0x4139a4 */
  esp -= 4; W32(esp, 0x4123feu); SPILL(); f_4139a4(); if (g_unwind) return; RELOAD();
/* 4123fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4123ff: call 0x413954 */
  esp -= 4; W32(esp, 0x412404u); SPILL(); f_413954(); if (g_unwind) return; RELOAD();
/* 412404: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 412407: jmp 0x41278b */
  SPILL(); f_41278b(); return;
}

void f_41240c(void) {
  LOAD_REGS();
L_41240c: /* 41240c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41240d: mov ebp, esp */
  ebp = esp;
/* 41240f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 412412: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 412413: xor ebx, ebx */
  ebx = 0;
/* 412415: cmp dword ptr [0x44f410], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f410u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41241b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41241c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41241d: jne 0x41248c */
  if (!zf) goto L_41248c;
L_41241f: /* 41241f: push 0x43eaac */
  { uint32_t v = 0x43eaacu; esp -= 4; W32(esp, v); }
/* 412424: call dword ptr [0x4390b8] */
  esp -= 4; W32(esp, 0x41242au); SPILL(); call_ind(R32(0x4390b8u)); if (g_unwind) return; /* KERNEL32!LoadLibraryA */ RELOAD();
/* 41242a: mov edi, eax */
  edi = eax;
/* 41242c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41242e: je 0x4124c7 */
  if (zf) goto L_4124c7;
L_412434: /* 412434: mov esi, dword ptr [0x43900c] */
  esi = R32((uint32_t)(0x43900cu));
/* 41243a: push 0x43eaa0 */
  { uint32_t v = 0x43eaa0u; esp -= 4; W32(esp, v); }
/* 41243f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412440: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x412442u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 412442: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 412444: mov dword ptr [0x44f410], eax */
  W32((uint32_t)(0x44f410u), eax);
/* 412449: je 0x4124c7 */
  if (zf) goto L_4124c7;
L_41244b: /* 41244b: push 0x43ea90 */
  { uint32_t v = 0x43ea90u; esp -= 4; W32(esp, v); }
/* 412450: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412451: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x412453u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 412453: push 0x43ea7c */
  { uint32_t v = 0x43ea7cu; esp -= 4; W32(esp, v); }
/* 412458: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412459: mov dword ptr [0x44f414], eax */
  W32((uint32_t)(0x44f414u), eax);
/* 41245e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x412460u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 412460: cmp dword ptr [0x4491d4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491d4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412467: mov dword ptr [0x44f418], eax */
  W32((uint32_t)(0x44f418u), eax);
/* 41246c: jne 0x41248c */
  if (!zf) goto L_41248c;
L_41246e: /* 41246e: push 0x43ea60 */
  { uint32_t v = 0x43ea60u; esp -= 4; W32(esp, v); }
/* 412473: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412474: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x412476u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 412476: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 412478: mov dword ptr [0x44f420], eax */
  W32((uint32_t)(0x44f420u), eax);
/* 41247d: je 0x41248c */
  if (zf) goto L_41248c;
L_41247f: /* 41247f: push 0x43ea48 */
  { uint32_t v = 0x43ea48u; esp -= 4; W32(esp, v); }
/* 412484: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412485: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x412487u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 412487: mov dword ptr [0x44f41c], eax */
  W32((uint32_t)(0x44f41cu), eax);
L_41248c: /* 41248c: mov eax, dword ptr [0x44f41c] */
  eax = R32((uint32_t)(0x44f41cu));
/* 412491: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 412493: je 0x4124d1 */
  if (zf) goto L_4124d1;
L_412495: /* 412495: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x412497u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 412497: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 412499: je 0x4124b8 */
  if (zf) goto L_4124b8;
L_41249b: /* 41249b: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 41249e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41249f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4124a1: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4124a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4124a5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4124a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4124a8: call dword ptr [0x44f420] */
  { uint32_t t = R32((uint32_t)(0x44f420u)); esp -= 4; W32(esp, 0x4124aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4124ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4124b0: je 0x4124b8 */
  if (zf) goto L_4124b8;
L_4124b2: /* 4124b2: test byte ptr [ebp - 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4124b6: jne 0x4124d1 */
  if (!zf) goto L_4124d1;
L_4124b8: /* 4124b8: cmp dword ptr [0x4491e0], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491e0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4124bf: jb 0x4124cb */
  if (cf) goto L_4124cb;
L_4124c1: /* 4124c1: or byte ptr [ebp + 0x12], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x12u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0x12u), r);
  }
/* 4124c5: jmp 0x4124f0 */
  goto L_4124f0;
L_4124c7: /* 4124c7: xor eax, eax */
  eax = 0;
/* 4124c9: jmp 0x412500 */
  goto L_412500;
L_4124cb: /* 4124cb: or byte ptr [ebp + 0x12], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x12u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0x12u), r);
  }
/* 4124cf: jmp 0x4124f0 */
  goto L_4124f0;
L_4124d1: /* 4124d1: mov eax, dword ptr [0x44f414] */
  eax = R32((uint32_t)(0x44f414u));
/* 4124d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4124d8: je 0x4124f0 */
  if (zf) goto L_4124f0;
L_4124da: /* 4124da: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x4124dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4124dc: mov ebx, eax */
  ebx = eax;
/* 4124de: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4124e0: je 0x4124f0 */
  if (zf) goto L_4124f0;
L_4124e2: /* 4124e2: mov eax, dword ptr [0x44f418] */
  eax = R32((uint32_t)(0x44f418u));
/* 4124e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4124e9: je 0x4124f0 */
  if (zf) goto L_4124f0;
L_4124eb: /* 4124eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4124ec: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x4124eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4124ee: mov ebx, eax */
  ebx = eax;
L_4124f0: /* 4124f0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4124f3: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4124f6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4124f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4124fa: call dword ptr [0x44f410] */
  { uint32_t t = R32((uint32_t)(0x44f410u)); esp -= 4; W32(esp, 0x412500u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_412500: /* 412500: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 412501: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 412502: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 412503: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 412504: ret  */
  esp += 4; SPILL(); return;
}

void f_412522(void) {
  LOAD_REGS();
L_412522: /* 412522: xor eax, eax */
  eax = 0;
/* 412524: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 412525: ret  */
  esp += 4; SPILL(); return;
}

void f_412526(void) {
  LOAD_REGS();
L_412526: /* 412526: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 412529: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41252d: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 41252f: call dword ptr [0x439008] */
  esp -= 4; W32(esp, 0x412535u); SPILL(); call_ind(R32(0x439008u)); if (g_unwind) return; /* KERNEL32!ExitProcess */ RELOAD();
  SPILL(); f_412535(); return;
}

void f_412535(void) {
  LOAD_REGS();
L_412535: /* 412535: mov eax, dword ptr [0x449034] */
  eax = R32((uint32_t)(0x449034u));
/* 41253a: ret  */
  esp += 4; SPILL(); return;
}

void f_41253b(void) {
  LOAD_REGS();
L_41253b: /* 41253b: mov eax, dword ptr [0x449030] */
  eax = R32((uint32_t)(0x449030u));
/* 412540: ret  */
  esp += 4; SPILL(); return;
}

void f_412541(void) {
  LOAD_REGS();
L_412541: /* 412541: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 412545: call dword ptr [0x4390d8] */
  esp -= 4; W32(esp, 0x41254bu); SPILL(); call_ind(R32(0x4390d8u)); if (g_unwind) return; /* KERNEL32!InitializeCriticalSection */ RELOAD();
/* 41254b: xor eax, eax */
  eax = 0;
/* 41254d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41254e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_412551(void) {
  LOAD_REGS();
L_412551: /* 412551: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 412552: mov ebp, esp */
  ebp = esp;
/* 412554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 412555: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 412556: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412557: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412558: call 0x40137f */
  esp -= 4; W32(esp, 0x41255du); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41255d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 412560: mov esi, eax */
  esi = eax;
/* 412562: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 412565: mov eax, dword ptr [0x44dcf0] */
  eax = R32((uint32_t)(0x44dcf0u));
/* 41256a: mov ecx, edx */
  ecx = edx;
L_41256c: /* 41256c: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41256e: je 0x41257d */
  if (zf) goto L_41257d;
L_412570: /* 412570: lea ebx, [eax + eax*2] */
  ebx = (uint32_t)(eax + eax*2);
/* 412573: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 412576: lea ebx, [edx + ebx*4] */
  ebx = (uint32_t)(edx + ebx*4);
/* 412579: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41257b: jb 0x41256c */
  if (cf) goto L_41256c;
L_41257d: /* 41257d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 412580: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 412583: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 412585: jae 0x41258b */
  if (!cf) goto L_41258b;
L_412587: /* 412587: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412589: je 0x41258d */
  if (zf) goto L_41258d;
L_41258b: /* 41258b: xor ecx, ecx */
  ecx = 0;
L_41258d: /* 41258d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41258f: je 0x4126a7 */
  if (zf) goto L_4126a7;
L_412595: /* 412595: mov ebx, dword ptr [ecx + 8] */
  ebx = R32((uint32_t)(ecx + 0x8u));
/* 412598: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41259a: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 41259d: je 0x4126a7 */
  if (zf) goto L_4126a7;
L_4125a3: /* 4125a3: cmp ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4125a6: jne 0x4125b4 */
  if (!zf) goto L_4125b4;
L_4125a8: /* 4125a8: and dword ptr [ecx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x8u), r);
  }
/* 4125ac: xor eax, eax */
  eax = 0;
/* 4125ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4125af: jmp 0x4126b0 */
  goto L_4126b0;
L_4125b4: /* 4125b4: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4125b7: je 0x4126a2 */
  if (zf) goto L_4126a2;
L_4125bd: /* 4125bd: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 4125c0: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4125c3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4125c6: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 4125c9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4125cc: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4125cf: jne 0x412694 */
  if (!zf) goto L_412694;
L_4125d5: /* 4125d5: mov edx, dword ptr [0x44dce4] */
  edx = R32((uint32_t)(0x44dce4u));
/* 4125db: mov eax, dword ptr [0x44dce8] */
  eax = R32((uint32_t)(0x44dce8u));
/* 4125e0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4125e2: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4125e4: jge 0x41260d */
  if ((sf == of)) goto L_41260d;
L_4125e6: /* 4125e6: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 4125e9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
L_4125ec: /* 4125ec: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 4125ef: and dword ptr [eax + edi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + edi + 0x8u), r);
  }
/* 4125f4: mov edi, dword ptr [0x44dce4] */
  edi = R32((uint32_t)(0x44dce4u));
/* 4125fa: mov ebx, dword ptr [0x44dce8] */
  ebx = R32((uint32_t)(0x44dce8u));
/* 412600: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 412601: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 412603: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 412606: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 412608: jl 0x4125ec */
  if ((sf != of)) goto L_4125ec;
L_41260a: /* 41260a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_41260d: /* 41260d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 41260f: cmp ecx, 0xc000008e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc000008eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412615: mov edi, dword ptr [esi + 0x5c] */
  edi = R32((uint32_t)(esi + 0x5cu));
/* 412618: jne 0x412623 */
  if (!zf) goto L_412623;
L_41261a: /* 41261a: mov dword ptr [esi + 0x5c], 0x83 */
  W32((uint32_t)(esi + 0x5cu), 0x83u);
/* 412621: jmp 0x412687 */
  goto L_412687;
L_412623: /* 412623: cmp ecx, 0xc0000090 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0000090u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412629: jne 0x412634 */
  if (!zf) goto L_412634;
L_41262b: /* 41262b: mov dword ptr [esi + 0x5c], 0x81 */
  W32((uint32_t)(esi + 0x5cu), 0x81u);
/* 412632: jmp 0x412687 */
  goto L_412687;
L_412634: /* 412634: cmp ecx, 0xc0000091 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0000091u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41263a: jne 0x412645 */
  if (!zf) goto L_412645;
L_41263c: /* 41263c: mov dword ptr [esi + 0x5c], 0x84 */
  W32((uint32_t)(esi + 0x5cu), 0x84u);
/* 412643: jmp 0x412687 */
  goto L_412687;
L_412645: /* 412645: cmp ecx, 0xc0000093 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0000093u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41264b: jne 0x412656 */
  if (!zf) goto L_412656;
L_41264d: /* 41264d: mov dword ptr [esi + 0x5c], 0x85 */
  W32((uint32_t)(esi + 0x5cu), 0x85u);
/* 412654: jmp 0x412687 */
  goto L_412687;
L_412656: /* 412656: cmp ecx, 0xc000008d */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc000008du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41265c: jne 0x412667 */
  if (!zf) goto L_412667;
L_41265e: /* 41265e: mov dword ptr [esi + 0x5c], 0x82 */
  W32((uint32_t)(esi + 0x5cu), 0x82u);
/* 412665: jmp 0x412687 */
  goto L_412687;
L_412667: /* 412667: cmp ecx, 0xc000008f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc000008fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41266d: jne 0x412678 */
  if (!zf) goto L_412678;
L_41266f: /* 41266f: mov dword ptr [esi + 0x5c], 0x86 */
  W32((uint32_t)(esi + 0x5cu), 0x86u);
/* 412676: jmp 0x412687 */
  goto L_412687;
L_412678: /* 412678: cmp ecx, 0xc0000092 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0000092u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41267e: jne 0x412687 */
  if (!zf) goto L_412687;
L_412680: /* 412680: mov dword ptr [esi + 0x5c], 0x8a */
  W32((uint32_t)(esi + 0x5cu), 0x8au);
L_412687: /* 412687: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 41268a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41268c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x41268eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41268e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41268f: mov dword ptr [esi + 0x5c], edi */
  W32((uint32_t)(esi + 0x5cu), edi);
/* 412692: jmp 0x41269b */
  goto L_41269b;
L_412694: /* 412694: and dword ptr [ecx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x8u), r);
  }
/* 412698: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412699: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x41269bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_41269b: /* 41269b: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41269e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41269f: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
L_4126a2: /* 4126a2: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4126a5: jmp 0x4126b0 */
  goto L_4126b0;
L_4126a7: /* 4126a7: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4126aa: call dword ptr [0x4390dc] */
  esp -= 4; W32(esp, 0x4126b0u); SPILL(); call_ind(R32(0x4390dcu)); if (g_unwind) return; /* KERNEL32!UnhandledExceptionFilter */ RELOAD();
L_4126b0: /* 4126b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4126b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4126b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4126b3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4126b4: ret  */
  esp += 4; SPILL(); return;
}

void f_4126b5(void) {
  LOAD_REGS();
L_4126b5: /* 4126b5: mov eax, dword ptr [0x449560] */
  eax = R32((uint32_t)(0x449560u));
/* 4126ba: ret  */
  esp += 4; SPILL(); return;
}

void f_4126bb(void) {
  LOAD_REGS();
L_4126bb: /* 4126bb: mov eax, 0x449564 */
  eax = 0x449564u;
/* 4126c0: ret  */
  esp += 4; SPILL(); return;
}

void f_4126c1(void) {
  LOAD_REGS();
L_4126c1: /* 4126c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4126c2: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4126c6: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 4126c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4126ca: xor edi, edi */
  edi = 0;
/* 4126cc: cmp eax, dword ptr [0x44b9c4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b9c4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4126d2: je 0x412737 */
  if (zf) goto L_412737;
L_4126d4: /* 4126d4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4126d6: je 0x412737 */
  if (zf) goto L_412737;
L_4126d8: /* 4126d8: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 4126db: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4126dd: jne 0x412737 */
  if (!zf) goto L_412737;
L_4126df: /* 4126df: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 4126e2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4126e4: je 0x412702 */
  if (zf) goto L_412702;
L_4126e6: /* 4126e6: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4126e8: jne 0x412702 */
  if (!zf) goto L_412702;
L_4126ea: /* 4126ea: cmp eax, dword ptr [0x44ba1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44ba1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4126f0: je 0x412702 */
  if (zf) goto L_412702;
L_4126f2: /* 4126f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4126f3: call 0x401156 */
  esp -= 4; W32(esp, 0x4126f8u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4126f8: push dword ptr [esi + 0x3c] */
  { uint32_t v = R32((uint32_t)(esi + 0x3cu)); esp -= 4; W32(esp, v); }
/* 4126fb: call 0x412eed */
  esp -= 4; W32(esp, 0x412700u); SPILL(); f_412eed(); if (g_unwind) return; RELOAD();
/* 412700: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412701: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412702: /* 412702: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 412705: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412707: je 0x412725 */
  if (zf) goto L_412725;
L_412709: /* 412709: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41270b: jne 0x412725 */
  if (!zf) goto L_412725;
L_41270d: /* 41270d: cmp eax, dword ptr [0x44ba24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44ba24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412713: je 0x412725 */
  if (zf) goto L_412725;
L_412715: /* 412715: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412716: call 0x401156 */
  esp -= 4; W32(esp, 0x41271bu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41271b: push dword ptr [esi + 0x3c] */
  { uint32_t v = R32((uint32_t)(esi + 0x3cu)); esp -= 4; W32(esp, v); }
/* 41271e: call 0x412e8e */
  esp -= 4; W32(esp, 0x412723u); SPILL(); f_412e8e(); if (g_unwind) return; RELOAD();
/* 412723: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412724: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412725: /* 412725: push dword ptr [esi + 0x2c] */
  { uint32_t v = R32((uint32_t)(esi + 0x2cu)); esp -= 4; W32(esp, v); }
/* 412728: call 0x401156 */
  esp -= 4; W32(esp, 0x41272du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41272d: push dword ptr [esi + 0x3c] */
  { uint32_t v = R32((uint32_t)(esi + 0x3cu)); esp -= 4; W32(esp, v); }
/* 412730: call 0x401156 */
  esp -= 4; W32(esp, 0x412735u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412735: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412736: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412737: /* 412737: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 41273a: cmp eax, dword ptr [0x44ba18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44ba18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412740: je 0x41275a */
  if (zf) goto L_41275a;
L_412742: /* 412742: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412744: je 0x41275a */
  if (zf) goto L_41275a;
L_412746: /* 412746: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412748: jne 0x41275a */
  if (!zf) goto L_41275a;
L_41274a: /* 41274a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41274b: call 0x401156 */
  esp -= 4; W32(esp, 0x412750u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412750: push dword ptr [esi + 0x44] */
  { uint32_t v = R32((uint32_t)(esi + 0x44u)); esp -= 4; W32(esp, v); }
/* 412753: call 0x401156 */
  esp -= 4; W32(esp, 0x412758u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412758: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412759: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41275a: /* 41275a: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 41275d: cmp eax, dword ptr [0x44b9c0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b9c0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412763: je 0x412781 */
  if (zf) goto L_412781;
L_412765: /* 412765: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412767: je 0x412781 */
  if (zf) goto L_412781;
L_412769: /* 412769: cmp dword ptr [eax + 0xb4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xb4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41276f: jne 0x412781 */
  if (!zf) goto L_412781;
L_412771: /* 412771: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412772: call 0x412cfe */
  esp -= 4; W32(esp, 0x412777u); SPILL(); f_412cfe(); if (g_unwind) return; RELOAD();
/* 412777: push dword ptr [esi + 0x50] */
  { uint32_t v = R32((uint32_t)(esi + 0x50u)); esp -= 4; W32(esp, v); }
/* 41277a: call 0x401156 */
  esp -= 4; W32(esp, 0x41277fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41277f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412780: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412781: /* 412781: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412782: call 0x401156 */
  esp -= 4; W32(esp, 0x412787u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412787: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412788: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 412789: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41278a: ret  */
  esp += 4; SPILL(); return;
}

void f_41278b(void) {
  LOAD_REGS();
L_41278b: /* 41278b: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 41278d: call 0x40f7ae */
  esp -= 4; W32(esp, 0x412792u); SPILL(); f_40f7ae(); if (g_unwind) return; RELOAD();
/* 412792: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* 412794: call 0x412a1a */
  esp -= 4; W32(esp, 0x412799u); SPILL(); f_412a1a(); if (g_unwind) return; RELOAD();
/* 412799: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41279a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41279b: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 41279d: call 0x40f783 */
  esp -= 4; W32(esp, 0x4127a2u); SPILL(); f_40f783(); if (g_unwind) return; RELOAD();
/* 4127a2: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 4127a4: push 0x43ead0 */
  { uint32_t v = 0x43ead0u; esp -= 4; W32(esp, v); }
/* 4127a9: call 0x40101f */
  esp -= 4; W32(esp, 0x4127aeu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4127ae: xor edi, edi */
  edi = 0;
/* 4127b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4127b1: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4127b6u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4127b6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4127b7: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4127ba: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4127bd: jne 0x4127d8 */
  if (!zf) goto L_4127d8;
L_4127bf: /* 4127bf: mov dword ptr [ebp - 0x1c], 0x44f424 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x44f424u);
/* 4127c6: mov esi, dword ptr [0x44f424] */
  esi = R32((uint32_t)(0x44f424u));
/* 4127cc: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 4127cf: mov dword ptr [ebp - 0x24], 2 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x2u);
/* 4127d6: jmp 0x4127ef */
  goto L_4127ef;
L_4127d8: /* 4127d8: mov dword ptr [ebp - 0x1c], 0x44f428 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x44f428u);
/* 4127df: mov esi, dword ptr [0x44f428] */
  esi = R32((uint32_t)(0x44f428u));
/* 4127e5: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 4127e8: mov dword ptr [ebp - 0x24], 0x15 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x15u);
L_4127ef: /* 4127ef: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4127f1: je 0x4127fd */
  if (zf) goto L_4127fd;
L_4127f3: /* 4127f3: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4127f6: je 0x4127fd */
  if (zf) goto L_4127fd;
L_4127f8: /* 4127f8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4127fb: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_4127fd: /* 4127fd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 412801: call 0x412813 */
  esp -= 4; W32(esp, 0x412806u); SPILL(); f_412813(); if (g_unwind) return; RELOAD();
/* 412806: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412808: jne 0x41281b */
  if (!zf) goto L_41281b;
L_41280a: /* 41280a: xor eax, eax */
  eax = 0;
/* 41280c: jmp 0x412829 */
  goto L_412829;
L_41281b: /* 41281b: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41281e: je 0x412826 */
  if (zf) goto L_412826;
L_412820: /* 412820: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 412823: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x412825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 412825: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412826: /* 412826: xor eax, eax */
  eax = 0;
/* 412828: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_412829: /* 412829: call 0x40105a */
  esp -= 4; W32(esp, 0x41282eu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41282e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41280e(void) {
  LOAD_REGS();
L_41280e: /* 41280e: xor edi, edi */
  edi = 0;
/* 412810: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
  SPILL(); f_412813(); return;
}

void f_412813(void) {
  LOAD_REGS();
L_412813: /* 412813: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412814: call 0x4011d9 */
  esp -= 4; W32(esp, 0x412819u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 412819: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41281a: ret  */
  esp += 4; SPILL(); return;
}

void f_412831(void) {
  LOAD_REGS();
L_412831: /* 412831: mov ecx, dword ptr [0x44dcf0] */
  ecx = R32((uint32_t)(0x44dcf0u));
/* 412837: mov eax, edx */
  eax = edx;
/* 412839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_41283a: /* 41283a: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41283d: je 0x41284c */
  if (zf) goto L_41284c;
L_41283f: /* 41283f: lea edi, [ecx + ecx*2] */
  edi = (uint32_t)(ecx + ecx*2);
/* 412842: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 412845: lea edi, [edx + edi*4] */
  edi = (uint32_t)(edx + edi*4);
/* 412848: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41284a: jb 0x41283a */
  if (cf) goto L_41283a;
L_41284c: /* 41284c: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 41284f: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 412852: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 412854: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 412855: jae 0x41285c */
  if (!cf) goto L_41285c;
L_412857: /* 412857: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41285a: je 0x41285e */
  if (zf) goto L_41285e;
L_41285c: /* 41285c: xor eax, eax */
  eax = 0;
L_41285e: /* 41285e: ret  */
  esp += 4; SPILL(); return;
}

void f_41285f(void) {
  LOAD_REGS();
L_41285f: /* 41285f: call 0x40137f */
  esp -= 4; W32(esp, 0x412864u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 412864: add eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 412867: ret  */
  esp += 4; SPILL(); return;
}

void f_412868(void) {
  LOAD_REGS();
L_412868: /* 412868: call 0x40137f */
  esp -= 4; W32(esp, 0x41286du); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41286d: add eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 412870: ret  */
  esp += 4; SPILL(); return;
}

void f_412871(void) {
  LOAD_REGS();
L_412871: /* 412871: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 412873: push 0x43eae0 */
  { uint32_t v = 0x43eae0u; esp -= 4; W32(esp, v); }
/* 412878: call 0x40101f */
  esp -= 4; W32(esp, 0x41287du); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41287d: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 412880: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412883: je 0x4129bf */
  if (zf) goto L_4129bf;
L_412889: /* 412889: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41288c: je 0x4129bf */
  if (zf) goto L_4129bf;
L_412892: /* 412892: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 412895: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412898: je 0x412943 */
  if (zf) goto L_412943;
L_41289e: /* 41289e: cmp esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4128a1: je 0x412943 */
  if (zf) goto L_412943;
L_4128a7: /* 4128a7: cmp esi, 0x16 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4128aa: je 0x412943 */
  if (zf) goto L_412943;
L_4128b0: /* 4128b0: cmp esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4128b3: je 0x412943 */
  if (zf) goto L_412943;
L_4128b9: /* 4128b9: cmp esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4128bc: je 0x4128cc */
  if (zf) goto L_4128cc;
L_4128be: /* 4128be: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4128c1: je 0x4128cc */
  if (zf) goto L_4128cc;
L_4128c3: /* 4128c3: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4128c6: jne 0x4129bf */
  if (!zf) goto L_4129bf;
L_4128cc: /* 4128cc: call 0x40137f */
  esp -= 4; W32(esp, 0x4128d1u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4128d1: mov edi, eax */
  edi = eax;
/* 4128d3: mov ebx, 0x44aae8 */
  ebx = 0x44aae8u;
/* 4128d8: cmp dword ptr [edi + 0x54], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x54u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4128db: jne 0x412904 */
  if (!zf) goto L_412904;
L_4128dd: /* 4128dd: push dword ptr [0x44dcec] */
  { uint32_t v = R32((uint32_t)(0x44dcecu)); esp -= 4; W32(esp, v); }
/* 4128e3: call 0x4010eb */
  esp -= 4; W32(esp, 0x4128e8u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4128e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4128e9: mov dword ptr [edi + 0x54], eax */
  W32((uint32_t)(edi + 0x54u), eax);
/* 4128ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4128ee: je 0x4129bf */
  if (zf) goto L_4129bf;
L_4128f4: /* 4128f4: push dword ptr [0x44dcec] */
  { uint32_t v = R32((uint32_t)(0x44dcecu)); esp -= 4; W32(esp, v); }
/* 4128fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4128fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4128fc: call 0x40126b */
  esp -= 4; W32(esp, 0x412901u); SPILL(); hle_memcpy(); RELOAD();
/* 412901: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_412904: /* 412904: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 412907: call 0x412831 */
  esp -= 4; W32(esp, 0x41290cu); SPILL(); f_412831(); if (g_unwind) return; RELOAD();
/* 41290c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41290e: je 0x4129bf */
  if (zf) goto L_4129bf;
L_412914: /* 412914: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 412917: jmp 0x412939 */
  goto L_412939;
L_412919: /* 412919: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 41291c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 41291f: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 412922: mov ecx, dword ptr [0x44dcf0] */
  ecx = R32((uint32_t)(0x44dcf0u));
/* 412928: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 41292b: mov ebx, dword ptr [edi + 0x54] */
  ebx = R32((uint32_t)(edi + 0x54u));
/* 41292e: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 412931: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 412933: jae 0x412a0d */
  if (!cf) goto L_412a0d;
L_412939: /* 412939: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41293c: je 0x412919 */
  if (zf) goto L_412919;
L_41293e: /* 41293e: jmp 0x412a0d */
  goto L_412a0d;
L_412943: /* 412943: xor edi, edi */
  edi = 0;
/* 412945: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412946: call 0x4011b7 */
  esp -= 4; W32(esp, 0x41294bu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 41294b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41294c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 41294f: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412952: je 0x412959 */
  if (zf) goto L_412959;
L_412954: /* 412954: cmp esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412957: jne 0x41297a */
  if (!zf) goto L_41297a;
L_412959: /* 412959: cmp dword ptr [0x44f434], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f434u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41295f: jne 0x41297a */
  if (!zf) goto L_41297a;
L_412961: /* 412961: xor edi, edi */
  edi = 0;
/* 412963: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 412964: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412965: push 0x4127a2 */
  { uint32_t v = 0x4127a2u; esp -= 4; W32(esp, v); }
/* 41296a: call dword ptr [0x4390f0] */
  esp -= 4; W32(esp, 0x412970u); SPILL(); call_ind(R32(0x4390f0u)); if (g_unwind) return; /* KERNEL32!SetConsoleCtrlHandler */ RELOAD();
/* 412970: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412972: jne 0x41299b */
  if (!zf) goto L_41299b;
L_412974: /* 412974: mov dword ptr [0x44f434], edi */
  W32((uint32_t)(0x44f434u), edi);
L_41297a: /* 41297a: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 41297b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 41297c: je 0x4129f3 */
  if (zf) goto L_4129f3;
L_41297e: /* 41297e: sub esi, 0xd */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  esi = r;
  }
/* 412981: je 0x4129e3 */
  if (zf) goto L_4129e3;
L_412983: /* 412983: sub esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  esi = r;
  }
/* 412986: je 0x4129d3 */
  if (zf) goto L_4129d3;
L_412988: /* 412988: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 412989: jne 0x412a01 */
  if (!zf) goto L_412a01;
L_41298b: /* 41298b: mov eax, dword ptr [0x44f42c] */
  eax = R32((uint32_t)(0x44f42cu));
/* 412990: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 412993: mov dword ptr [0x44f42c], ebx */
  W32((uint32_t)(0x44f42cu), ebx);
/* 412999: jmp 0x412a01 */
  goto L_412a01;
L_41299b: /* 41299b: call 0x4102ae */
  esp -= 4; W32(esp, 0x4129a0u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4129a0: mov esi, eax */
  esi = eax;
/* 4129a2: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4129a8u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4129a8: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4129aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4129ac: call 0x4011d9 */
  esp -= 4; W32(esp, 0x4129b1u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 4129b1: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4129b3: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 4129b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4129b7: call 0x406fd7 */
  esp -= 4; W32(esp, 0x4129bcu); SPILL(); f_406fd7(); if (g_unwind) return; RELOAD();
/* 4129bc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4129bf: /* 4129bf: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4129c4u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4129c4: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 4129ca: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4129cd: /* 4129cd: call 0x40105a */
  esp -= 4; W32(esp, 0x4129d2u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4129d2: ret  */
  esp += 4; SPILL(); return;
L_4129d3: /* 4129d3: mov eax, dword ptr [0x44f428] */
  eax = R32((uint32_t)(0x44f428u));
/* 4129d8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 4129db: mov dword ptr [0x44f428], ebx */
  W32((uint32_t)(0x44f428u), ebx);
/* 4129e1: jmp 0x412a01 */
  goto L_412a01;
L_4129e3: /* 4129e3: mov eax, dword ptr [0x44f430] */
  eax = R32((uint32_t)(0x44f430u));
/* 4129e8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 4129eb: mov dword ptr [0x44f430], ebx */
  W32((uint32_t)(0x44f430u), ebx);
/* 4129f1: jmp 0x412a01 */
  goto L_412a01;
L_4129f3: /* 4129f3: mov eax, dword ptr [0x44f424] */
  eax = R32((uint32_t)(0x44f424u));
/* 4129f8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 4129fb: mov dword ptr [0x44f424], ebx */
  W32((uint32_t)(0x44f424u), ebx);
L_412a01: /* 412a01: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 412a05: call 0x412a11 */
  esp -= 4; W32(esp, 0x412a0au); SPILL(); f_412a11(); if (g_unwind) return; RELOAD();
/* 412a0a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
L_412a0d: /* 412a0d: mov eax, edx */
  eax = edx;
/* 412a0f: jmp 0x4129cd */
  goto L_4129cd;
}

void f_412a11(void) {
  LOAD_REGS();
L_412a11: /* 412a11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 412a13: call 0x4011d9 */
  esp -= 4; W32(esp, 0x412a18u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 412a18: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412a19: ret  */
  esp += 4; SPILL(); return;
}

void f_412a1a(void) {
  LOAD_REGS();
L_412a1a: /* 412a1a: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 412a1c: push 0x43eaf0 */
  { uint32_t v = 0x43eaf0u; esp -= 4; W32(esp, v); }
/* 412a21: call 0x40101f */
  esp -= 4; W32(esp, 0x412a26u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 412a26: xor ecx, ecx */
  ecx = 0;
/* 412a28: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 412a2b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 412a2e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 412a2f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 412a30: je 0x412a9c */
  if (zf) goto L_412a9c;
L_412a32: /* 412a32: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 412a33: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 412a34: je 0x412a7c */
  if (zf) goto L_412a7c;
L_412a36: /* 412a36: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 412a39: je 0x412a7c */
  if (zf) goto L_412a7c;
L_412a3b: /* 412a3b: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 412a3e: je 0x412a7c */
  if (zf) goto L_412a7c;
L_412a40: /* 412a40: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 412a43: je 0x412a6f */
  if (zf) goto L_412a6f;
L_412a45: /* 412a45: sub eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 412a48: je 0x412a62 */
  if (zf) goto L_412a62;
L_412a4a: /* 412a4a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 412a4b: je 0x412a55 */
  if (zf) goto L_412a55;
L_412a4d: /* 412a4d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 412a50: jmp 0x412b8d */
  goto L_412b8d;
L_412a55: /* 412a55: mov esi, 0x44f42c */
  esi = 0x44f42cu;
/* 412a5a: mov edi, dword ptr [0x44f42c] */
  edi = R32((uint32_t)(0x44f42cu));
/* 412a60: jmp 0x412aa7 */
  goto L_412aa7;
L_412a62: /* 412a62: mov esi, 0x44f428 */
  esi = 0x44f428u;
/* 412a67: mov edi, dword ptr [0x44f428] */
  edi = R32((uint32_t)(0x44f428u));
/* 412a6d: jmp 0x412aa7 */
  goto L_412aa7;
L_412a6f: /* 412a6f: mov esi, 0x44f430 */
  esi = 0x44f430u;
/* 412a74: mov edi, dword ptr [0x44f430] */
  edi = R32((uint32_t)(0x44f430u));
/* 412a7a: jmp 0x412aa7 */
  goto L_412aa7;
L_412a7c: /* 412a7c: call 0x40137f */
  esp -= 4; W32(esp, 0x412a81u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 412a81: mov ebx, eax */
  ebx = eax;
/* 412a83: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 412a86: mov edx, dword ptr [ebx + 0x54] */
  edx = R32((uint32_t)(ebx + 0x54u));
/* 412a89: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 412a8c: call 0x412831 */
  esp -= 4; W32(esp, 0x412a91u); SPILL(); f_412831(); if (g_unwind) return; RELOAD();
/* 412a91: mov esi, eax */
  esi = eax;
/* 412a93: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 412a96: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 412a98: xor ecx, ecx */
  ecx = 0;
/* 412a9a: jmp 0x412ab1 */
  goto L_412ab1;
L_412a9c: /* 412a9c: mov esi, 0x44f424 */
  esi = 0x44f424u;
/* 412aa1: mov edi, dword ptr [0x44f424] */
  edi = R32((uint32_t)(0x44f424u));
L_412aa7: /* 412aa7: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 412aae: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
L_412ab1: /* 412ab1: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 412ab4: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412ab7: je 0x412b8b */
  if (zf) goto L_412b8b;
L_412abd: /* 412abd: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412abf: jne 0x412ac8 */
  if (!zf) goto L_412ac8;
L_412ac1: /* 412ac1: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 412ac3: call 0x40f783 */
  esp -= 4; W32(esp, 0x412ac8u); SPILL(); f_40f783(); if (g_unwind) return; RELOAD();
L_412ac8: /* 412ac8: cmp dword ptr [ebp - 0x1c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412acb: je 0x412ad6 */
  if (zf) goto L_412ad6;
L_412acd: /* 412acd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 412ace: call 0x4011b7 */
  esp -= 4; W32(esp, 0x412ad3u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 412ad3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412ad4: xor ecx, ecx */
  ecx = 0;
L_412ad6: /* 412ad6: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 412ad9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 412adc: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412adf: je 0x412aeb */
  if (zf) goto L_412aeb;
L_412ae1: /* 412ae1: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412ae4: je 0x412aeb */
  if (zf) goto L_412aeb;
L_412ae6: /* 412ae6: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412ae9: jne 0x412b06 */
  if (!zf) goto L_412b06;
L_412aeb: /* 412aeb: mov edx, dword ptr [ebx + 0x58] */
  edx = R32((uint32_t)(ebx + 0x58u));
/* 412aee: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 412af1: mov dword ptr [ebx + 0x58], ecx */
  W32((uint32_t)(ebx + 0x58u), ecx);
/* 412af4: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412af7: jne 0x412b32 */
  if (!zf) goto L_412b32;
L_412af9: /* 412af9: mov edx, dword ptr [ebx + 0x5c] */
  edx = R32((uint32_t)(ebx + 0x5cu));
/* 412afc: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 412aff: mov dword ptr [ebx + 0x5c], 0x8c */
  W32((uint32_t)(ebx + 0x5cu), 0x8cu);
L_412b06: /* 412b06: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412b09: jne 0x412b32 */
  if (!zf) goto L_412b32;
L_412b0b: /* 412b0b: mov eax, dword ptr [0x44dce4] */
  eax = R32((uint32_t)(0x44dce4u));
L_412b10: /* 412b10: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 412b13: mov edx, dword ptr [0x44dce8] */
  edx = R32((uint32_t)(0x44dce8u));
/* 412b19: mov esi, dword ptr [0x44dce4] */
  esi = R32((uint32_t)(0x44dce4u));
/* 412b1f: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 412b21: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 412b23: jge 0x412b34 */
  if ((sf == of)) goto L_412b34;
L_412b25: /* 412b25: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 412b28: mov esi, dword ptr [ebx + 0x54] */
  esi = R32((uint32_t)(ebx + 0x54u));
/* 412b2b: mov dword ptr [esi + edx*4 + 8], ecx */
  W32((uint32_t)(esi + edx*4 + 0x8u), ecx);
/* 412b2f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 412b30: jmp 0x412b10 */
  goto L_412b10;
L_412b32: /* 412b32: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_412b34: /* 412b34: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 412b38: call 0x412b55 */
  esp -= 4; W32(esp, 0x412b3du); SPILL(); f_412b55(); if (g_unwind) return; RELOAD();
/* 412b3d: cmp dword ptr [ebp + 8], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412b41: jne 0x412b62 */
  if (!zf) goto L_412b62;
L_412b43: /* 412b43: push dword ptr [ebx + 0x5c] */
  { uint32_t v = R32((uint32_t)(ebx + 0x5cu)); esp -= 4; W32(esp, v); }
/* 412b46: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 412b48: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x412b4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 412b4a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412b4b: jmp 0x412b67 */
  goto L_412b67;
L_412b62: /* 412b62: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 412b65: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x412b67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_412b67: /* 412b67: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412b68: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 412b6b: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412b6e: je 0x412b7a */
  if (zf) goto L_412b7a;
L_412b70: /* 412b70: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412b73: je 0x412b7a */
  if (zf) goto L_412b7a;
L_412b75: /* 412b75: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412b78: jne 0x412b8b */
  if (!zf) goto L_412b8b;
L_412b7a: /* 412b7a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 412b7d: mov dword ptr [ebx + 0x58], ecx */
  W32((uint32_t)(ebx + 0x58u), ecx);
/* 412b80: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412b83: jne 0x412b8b */
  if (!zf) goto L_412b8b;
L_412b85: /* 412b85: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 412b88: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
L_412b8b: /* 412b8b: xor eax, eax */
  eax = 0;
L_412b8d: /* 412b8d: call 0x40105a */
  esp -= 4; W32(esp, 0x412b92u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 412b92: ret  */
  esp += 4; SPILL(); return;
}

void f_412b4d(void) {
  LOAD_REGS();
L_412b4d: /* 412b4d: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 412b50: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 412b53: xor ecx, ecx */
  ecx = 0;
  SPILL(); f_412b55(); return;
}

void f_412b55(void) {
  LOAD_REGS();
L_412b55: /* 412b55: cmp dword ptr [ebp - 0x1c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412b58: je 0x412b61 */
  if (zf) goto L_412b61;
L_412b5a: /* 412b5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 412b5b: call 0x4011d9 */
  esp -= 4; W32(esp, 0x412b60u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 412b60: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412b61: /* 412b61: ret  */
  esp += 4; SPILL(); return;
}

void f_412b93(void) {
  LOAD_REGS();
L_412b93: /* 412b93: push 0x118 */
  { uint32_t v = 0x118u; esp -= 4; W32(esp, v); }
/* 412b98: push 0x43ec98 */
  { uint32_t v = 0x43ec98u; esp -= 4; W32(esp, v); }
/* 412b9d: call 0x40101f */
  esp -= 4; W32(esp, 0x412ba2u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 412ba2: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 412ba7: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 412baa: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 412bad: mov eax, dword ptr [0x44f438] */
  eax = R32((uint32_t)(0x44f438u));
/* 412bb2: xor ecx, ecx */
  ecx = 0;
/* 412bb4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412bb6: je 0x412bd7 */
  if (zf) goto L_412bd7;
L_412bb8: /* 412bb8: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 412bbb: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 412bbe: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 412bc1: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x412bc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 412bc3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412bc4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412bc5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 412bc9: jmp 0x412cd5 */
  goto L_412cd5;
L_412bd7: /* 412bd7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 412bda: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 412bdb: je 0x412bf0 */
  if (zf) goto L_412bf0;
L_412bdd: /* 412bdd: mov edi, 0x43ec74 */
  edi = 0x43ec74u;
/* 412be2: mov dword ptr [ebp - 0x20], 0x43ebc0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x43ebc0u);
/* 412be9: mov esi, 0xd4 */
  esi = 0xd4u;
/* 412bee: jmp 0x412c01 */
  goto L_412c01;
L_412bf0: /* 412bf0: mov edi, 0x43eba0 */
  edi = 0x43eba0u;
/* 412bf5: mov dword ptr [ebp - 0x20], 0x43eb00 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x43eb00u);
/* 412bfc: mov esi, 0xb9 */
  esi = 0xb9u;
L_412c01: /* 412c01: mov byte ptr [ebp - 0x24], cl */
  W8((uint32_t)(ebp + 0xffffffdcu), (ecx & 0xffu));
/* 412c04: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 412c09: lea eax, [ebp - 0x128] */
  eax = (uint32_t)(ebp + 0xfffffed8u);
/* 412c0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412c10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 412c11: call dword ptr [0x439000] */
  esp -= 4; W32(esp, 0x412c17u); SPILL(); call_ind(R32(0x439000u)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameA */ RELOAD();
/* 412c17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 412c19: jne 0x412c2e */
  if (!zf) goto L_412c2e;
L_412c1b: /* 412c1b: push 0x43e8f4 */
  { uint32_t v = 0x43e8f4u; esp -= 4; W32(esp, v); }
/* 412c20: lea eax, [ebp - 0x128] */
  eax = (uint32_t)(ebp + 0xfffffed8u);
/* 412c26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412c27: call 0x404b3a */
  esp -= 4; W32(esp, 0x412c2cu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 412c2c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412c2d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412c2e: /* 412c2e: lea ebx, [ebp - 0x128] */
  ebx = (uint32_t)(ebp + 0xfffffed8u);
/* 412c34: lea eax, [ebp - 0x128] */
  eax = (uint32_t)(ebp + 0xfffffed8u);
/* 412c3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412c3b: call 0x402493 */
  esp -= 4; W32(esp, 0x412c40u); SPILL(); hle_strlen(); RELOAD();
/* 412c40: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412c41: add eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 412c44: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 412c47: jbe 0x412c72 */
  if ((cf | zf)) goto L_412c72;
L_412c49: /* 412c49: lea eax, [ebp - 0x128] */
  eax = (uint32_t)(ebp + 0xfffffed8u);
/* 412c4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412c50: call 0x402493 */
  esp -= 4; W32(esp, 0x412c55u); SPILL(); hle_strlen(); RELOAD();
/* 412c55: mov ebx, eax */
  ebx = eax;
/* 412c57: lea eax, [ebp - 0x128] */
  eax = (uint32_t)(ebp + 0xfffffed8u);
/* 412c5d: sub eax, 0x31 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x31u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 412c60: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 412c62: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 412c64: push 0x43e8f0 */
  { uint32_t v = 0x43e8f0u; esp -= 4; W32(esp, v); }
/* 412c69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 412c6a: call 0x4053f1 */
  esp -= 4; W32(esp, 0x412c6fu); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 412c6f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_412c72: /* 412c72: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 412c73: call 0x402493 */
  esp -= 4; W32(esp, 0x412c78u); SPILL(); hle_strlen(); RELOAD();
/* 412c78: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412c79: lea eax, [eax + esi + 0xc] */
  eax = (uint32_t)(eax + esi + 0xcu);
/* 412c7d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 412c80: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 412c83: call 0x4014ee */
  esp -= 4; W32(esp, 0x412c88u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 412c88: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 412c8b: mov esi, esp */
  esi = esp;
/* 412c8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412c8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412c8f: call 0x404b3a */
  esp -= 4; W32(esp, 0x412c94u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 412c94: mov edi, 0x43e8d0 */
  edi = 0x43e8d0u;
/* 412c99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412c9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412c9b: call 0x401d57 */
  esp -= 4; W32(esp, 0x412ca0u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412ca0: push 0x43ea28 */
  { uint32_t v = 0x43ea28u; esp -= 4; W32(esp, v); }
/* 412ca5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412ca6: call 0x401d57 */
  esp -= 4; W32(esp, 0x412cabu); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412cab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 412cac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412cad: call 0x401d57 */
  esp -= 4; W32(esp, 0x412cb2u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412cb2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 412cb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412cb4: call 0x401d57 */
  esp -= 4; W32(esp, 0x412cb9u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412cb9: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 412cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412cbd: call 0x401d57 */
  esp -= 4; W32(esp, 0x412cc2u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 412cc2: push 0x12010 */
  { uint32_t v = 0x12010u; esp -= 4; W32(esp, v); }
/* 412cc7: push 0x43e8a8 */
  { uint32_t v = 0x43e8a8u; esp -= 4; W32(esp, v); }
/* 412ccc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412ccd: call 0x41240c */
  esp -= 4; W32(esp, 0x412cd2u); SPILL(); f_41240c(); if (g_unwind) return; RELOAD();
/* 412cd2: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_412cd5: /* 412cd5: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 412cd7: call 0x40f783 */
  esp -= 4; W32(esp, 0x412cdcu); SPILL(); f_40f783(); if (g_unwind) return; RELOAD();
  SPILL(); f_412cdc(); return;
}

void f_412bce(void) {
  LOAD_REGS();
L_412bce: /* 412bce: xor eax, eax */
  eax = 0;
/* 412bd0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 412bd1: ret  */
  esp += 4; SPILL(); return;
}

void f_412bd2(void) {
  LOAD_REGS();
  goto L_412bd2;
L_412bc5: /* 412bc5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 412bc9: jmp 0x412cd5 */
  goto L_412cd5;
L_412bd2: /* 412bd2: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 412bd5: jmp 0x412bc5 */
  goto L_412bc5;
L_412cd5: /* 412cd5: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 412cd7: call 0x40f783 */
  esp -= 4; W32(esp, 0x412cdcu); SPILL(); f_40f783(); if (g_unwind) return; RELOAD();
  SPILL(); f_412cdc(); return;
}

void f_412cdc(void) {
  LOAD_REGS();
L_412cdc: /* 412cdc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 412cde: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 412ce0: call 0x412b93 */
  esp -= 4; W32(esp, 0x412ce5u); SPILL(); f_412b93(); if (g_unwind) return; RELOAD();
/* 412ce5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412ce6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412ce7: ret  */
  esp += 4; SPILL(); return;
}

void f_412ce8(void) {
  LOAD_REGS();
L_412ce8: /* 412ce8: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 412cec: mov eax, dword ptr [0x44f438] */
  eax = R32((uint32_t)(0x44f438u));
/* 412cf1: mov dword ptr [0x44f438], ecx */
  W32((uint32_t)(0x44f438u), ecx);
/* 412cf7: ret  */
  esp += 4; SPILL(); return;
}

void f_412cf8(void) {
  LOAD_REGS();
L_412cf8: /* 412cf8: mov eax, dword ptr [0x44b39c] */
  eax = R32((uint32_t)(0x44b39cu));
/* 412cfd: ret  */
  esp += 4; SPILL(); return;
}

void f_412cfe(void) {
  LOAD_REGS();
L_412cfe: /* 412cfe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412cff: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 412d03: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 412d05: je 0x412e8c */
  if (zf) goto L_412e8c;
L_412d0b: /* 412d0b: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 412d0e: call 0x401156 */
  esp -= 4; W32(esp, 0x412d13u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d13: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 412d16: call 0x401156 */
  esp -= 4; W32(esp, 0x412d1bu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d1b: push dword ptr [esi + 0xc] */
  { uint32_t v = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, v); }
/* 412d1e: call 0x401156 */
  esp -= 4; W32(esp, 0x412d23u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d23: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 412d26: call 0x401156 */
  esp -= 4; W32(esp, 0x412d2bu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d2b: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 412d2e: call 0x401156 */
  esp -= 4; W32(esp, 0x412d33u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d33: push dword ptr [esi + 0x18] */
  { uint32_t v = R32((uint32_t)(esi + 0x18u)); esp -= 4; W32(esp, v); }
/* 412d36: call 0x401156 */
  esp -= 4; W32(esp, 0x412d3bu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d3b: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 412d3d: call 0x401156 */
  esp -= 4; W32(esp, 0x412d42u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d42: push dword ptr [esi + 0x20] */
  { uint32_t v = R32((uint32_t)(esi + 0x20u)); esp -= 4; W32(esp, v); }
/* 412d45: call 0x401156 */
  esp -= 4; W32(esp, 0x412d4au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d4a: push dword ptr [esi + 0x24] */
  { uint32_t v = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, v); }
/* 412d4d: call 0x401156 */
  esp -= 4; W32(esp, 0x412d52u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d52: push dword ptr [esi + 0x28] */
  { uint32_t v = R32((uint32_t)(esi + 0x28u)); esp -= 4; W32(esp, v); }
/* 412d55: call 0x401156 */
  esp -= 4; W32(esp, 0x412d5au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d5a: push dword ptr [esi + 0x2c] */
  { uint32_t v = R32((uint32_t)(esi + 0x2cu)); esp -= 4; W32(esp, v); }
/* 412d5d: call 0x401156 */
  esp -= 4; W32(esp, 0x412d62u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d62: push dword ptr [esi + 0x30] */
  { uint32_t v = R32((uint32_t)(esi + 0x30u)); esp -= 4; W32(esp, v); }
/* 412d65: call 0x401156 */
  esp -= 4; W32(esp, 0x412d6au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d6a: push dword ptr [esi + 0x34] */
  { uint32_t v = R32((uint32_t)(esi + 0x34u)); esp -= 4; W32(esp, v); }
/* 412d6d: call 0x401156 */
  esp -= 4; W32(esp, 0x412d72u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d72: push dword ptr [esi + 0x1c] */
  { uint32_t v = R32((uint32_t)(esi + 0x1cu)); esp -= 4; W32(esp, v); }
/* 412d75: call 0x401156 */
  esp -= 4; W32(esp, 0x412d7au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d7a: push dword ptr [esi + 0x38] */
  { uint32_t v = R32((uint32_t)(esi + 0x38u)); esp -= 4; W32(esp, v); }
/* 412d7d: call 0x401156 */
  esp -= 4; W32(esp, 0x412d82u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d82: push dword ptr [esi + 0x3c] */
  { uint32_t v = R32((uint32_t)(esi + 0x3cu)); esp -= 4; W32(esp, v); }
/* 412d85: call 0x401156 */
  esp -= 4; W32(esp, 0x412d8au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d8a: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 412d8d: push dword ptr [esi + 0x40] */
  { uint32_t v = R32((uint32_t)(esi + 0x40u)); esp -= 4; W32(esp, v); }
/* 412d90: call 0x401156 */
  esp -= 4; W32(esp, 0x412d95u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d95: push dword ptr [esi + 0x44] */
  { uint32_t v = R32((uint32_t)(esi + 0x44u)); esp -= 4; W32(esp, v); }
/* 412d98: call 0x401156 */
  esp -= 4; W32(esp, 0x412d9du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412d9d: push dword ptr [esi + 0x48] */
  { uint32_t v = R32((uint32_t)(esi + 0x48u)); esp -= 4; W32(esp, v); }
/* 412da0: call 0x401156 */
  esp -= 4; W32(esp, 0x412da5u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412da5: push dword ptr [esi + 0x4c] */
  { uint32_t v = R32((uint32_t)(esi + 0x4cu)); esp -= 4; W32(esp, v); }
/* 412da8: call 0x401156 */
  esp -= 4; W32(esp, 0x412dadu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412dad: push dword ptr [esi + 0x50] */
  { uint32_t v = R32((uint32_t)(esi + 0x50u)); esp -= 4; W32(esp, v); }
/* 412db0: call 0x401156 */
  esp -= 4; W32(esp, 0x412db5u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412db5: push dword ptr [esi + 0x54] */
  { uint32_t v = R32((uint32_t)(esi + 0x54u)); esp -= 4; W32(esp, v); }
/* 412db8: call 0x401156 */
  esp -= 4; W32(esp, 0x412dbdu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412dbd: push dword ptr [esi + 0x58] */
  { uint32_t v = R32((uint32_t)(esi + 0x58u)); esp -= 4; W32(esp, v); }
/* 412dc0: call 0x401156 */
  esp -= 4; W32(esp, 0x412dc5u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412dc5: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 412dc8: call 0x401156 */
  esp -= 4; W32(esp, 0x412dcdu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412dcd: push dword ptr [esi + 0x60] */
  { uint32_t v = R32((uint32_t)(esi + 0x60u)); esp -= 4; W32(esp, v); }
/* 412dd0: call 0x401156 */
  esp -= 4; W32(esp, 0x412dd5u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412dd5: push dword ptr [esi + 0x64] */
  { uint32_t v = R32((uint32_t)(esi + 0x64u)); esp -= 4; W32(esp, v); }
/* 412dd8: call 0x401156 */
  esp -= 4; W32(esp, 0x412dddu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412ddd: push dword ptr [esi + 0x68] */
  { uint32_t v = R32((uint32_t)(esi + 0x68u)); esp -= 4; W32(esp, v); }
/* 412de0: call 0x401156 */
  esp -= 4; W32(esp, 0x412de5u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412de5: push dword ptr [esi + 0x6c] */
  { uint32_t v = R32((uint32_t)(esi + 0x6cu)); esp -= 4; W32(esp, v); }
/* 412de8: call 0x401156 */
  esp -= 4; W32(esp, 0x412dedu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412ded: push dword ptr [esi + 0x70] */
  { uint32_t v = R32((uint32_t)(esi + 0x70u)); esp -= 4; W32(esp, v); }
/* 412df0: call 0x401156 */
  esp -= 4; W32(esp, 0x412df5u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412df5: push dword ptr [esi + 0x74] */
  { uint32_t v = R32((uint32_t)(esi + 0x74u)); esp -= 4; W32(esp, v); }
/* 412df8: call 0x401156 */
  esp -= 4; W32(esp, 0x412dfdu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412dfd: push dword ptr [esi + 0x78] */
  { uint32_t v = R32((uint32_t)(esi + 0x78u)); esp -= 4; W32(esp, v); }
/* 412e00: call 0x401156 */
  esp -= 4; W32(esp, 0x412e05u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412e05: push dword ptr [esi + 0x7c] */
  { uint32_t v = R32((uint32_t)(esi + 0x7cu)); esp -= 4; W32(esp, v); }
/* 412e08: call 0x401156 */
  esp -= 4; W32(esp, 0x412e0du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412e0d: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 412e10: push dword ptr [esi + 0x80] */
  { uint32_t v = R32((uint32_t)(esi + 0x80u)); esp -= 4; W32(esp, v); }
/* 412e16: call 0x401156 */
  esp -= 4; W32(esp, 0x412e1bu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412e1b: push dword ptr [esi + 0x84] */
  { uint32_t v = R32((uint32_t)(esi + 0x84u)); esp -= 4; W32(esp, v); }
/* 412e21: call 0x401156 */
  esp -= 4; W32(esp, 0x412e26u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412e26: push dword ptr [esi + 0x88] */
  { uint32_t v = R32((uint32_t)(esi + 0x88u)); esp -= 4; W32(esp, v); }
/* 412e2c: call 0x401156 */
  esp -= 4; W32(esp, 0x412e31u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412e31: push dword ptr [esi + 0x8c] */
  { uint32_t v = R32((uint32_t)(esi + 0x8cu)); esp -= 4; W32(esp, v); }
/* 412e37: call 0x401156 */
  esp -= 4; W32(esp, 0x412e3cu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412e3c: push dword ptr [esi + 0x90] */
  { uint32_t v = R32((uint32_t)(esi + 0x90u)); esp -= 4; W32(esp, v); }
/* 412e42: call 0x401156 */
  esp -= 4; W32(esp, 0x412e47u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412e47: push dword ptr [esi + 0x94] */
  { uint32_t v = R32((uint32_t)(esi + 0x94u)); esp -= 4; W32(esp, v); }
/* 412e4d: call 0x401156 */
  esp -= 4; W32(esp, 0x412e52u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412e52: push dword ptr [esi + 0x98] */
  { uint32_t v = R32((uint32_t)(esi + 0x98u)); esp -= 4; W32(esp, v); }
/* 412e58: call 0x401156 */
  esp -= 4; W32(esp, 0x412e5du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412e5d: push dword ptr [esi + 0x9c] */
  { uint32_t v = R32((uint32_t)(esi + 0x9cu)); esp -= 4; W32(esp, v); }
/* 412e63: call 0x401156 */
  esp -= 4; W32(esp, 0x412e68u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412e68: push dword ptr [esi + 0xa0] */
  { uint32_t v = R32((uint32_t)(esi + 0xa0u)); esp -= 4; W32(esp, v); }
/* 412e6e: call 0x401156 */
  esp -= 4; W32(esp, 0x412e73u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412e73: push dword ptr [esi + 0xa4] */
  { uint32_t v = R32((uint32_t)(esi + 0xa4u)); esp -= 4; W32(esp, v); }
/* 412e79: call 0x401156 */
  esp -= 4; W32(esp, 0x412e7eu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412e7e: push dword ptr [esi + 0xa8] */
  { uint32_t v = R32((uint32_t)(esi + 0xa8u)); esp -= 4; W32(esp, v); }
/* 412e84: call 0x401156 */
  esp -= 4; W32(esp, 0x412e89u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412e89: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_412e8c: /* 412e8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 412e8d: ret  */
  esp += 4; SPILL(); return;
}

void f_412e8e(void) {
  LOAD_REGS();
L_412e8e: /* 412e8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412e8f: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 412e93: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 412e95: je 0x412eeb */
  if (zf) goto L_412eeb;
L_412e97: /* 412e97: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 412e99: mov ecx, dword ptr [0x44b39c] */
  ecx = R32((uint32_t)(0x44b39cu));
/* 412e9f: cmp eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412ea1: je 0x412eb2 */
  if (zf) goto L_412eb2;
L_412ea3: /* 412ea3: cmp eax, dword ptr [0x44a974] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a974u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412ea9: je 0x412eb2 */
  if (zf) goto L_412eb2;
L_412eab: /* 412eab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412eac: call 0x401156 */
  esp -= 4; W32(esp, 0x412eb1u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412eb1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412eb2: /* 412eb2: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 412eb5: mov ecx, dword ptr [0x44b39c] */
  ecx = R32((uint32_t)(0x44b39cu));
/* 412ebb: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412ebe: je 0x412ecf */
  if (zf) goto L_412ecf;
L_412ec0: /* 412ec0: cmp eax, dword ptr [0x44a978] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a978u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412ec6: je 0x412ecf */
  if (zf) goto L_412ecf;
L_412ec8: /* 412ec8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412ec9: call 0x401156 */
  esp -= 4; W32(esp, 0x412eceu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412ece: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412ecf: /* 412ecf: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 412ed2: mov eax, dword ptr [0x44b39c] */
  eax = R32((uint32_t)(0x44b39cu));
/* 412ed7: cmp esi, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412eda: je 0x412eeb */
  if (zf) goto L_412eeb;
L_412edc: /* 412edc: cmp esi, dword ptr [0x44a97c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a97cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412ee2: je 0x412eeb */
  if (zf) goto L_412eeb;
L_412ee4: /* 412ee4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412ee5: call 0x401156 */
  esp -= 4; W32(esp, 0x412eeau); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412eea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412eeb: /* 412eeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 412eec: ret  */
  esp += 4; SPILL(); return;
}

void f_412eed(void) {
  LOAD_REGS();
L_412eed: /* 412eed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412eee: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 412ef2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 412ef4: je 0x412fc4 */
  if (zf) goto L_412fc4;
L_412efa: /* 412efa: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 412efd: mov ecx, dword ptr [0x44b39c] */
  ecx = R32((uint32_t)(0x44b39cu));
/* 412f03: cmp eax, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412f06: je 0x412f17 */
  if (zf) goto L_412f17;
L_412f08: /* 412f08: cmp eax, dword ptr [0x44a980] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a980u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412f0e: je 0x412f17 */
  if (zf) goto L_412f17;
L_412f10: /* 412f10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412f11: call 0x401156 */
  esp -= 4; W32(esp, 0x412f16u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412f16: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412f17: /* 412f17: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 412f1a: mov ecx, dword ptr [0x44b39c] */
  ecx = R32((uint32_t)(0x44b39cu));
/* 412f20: cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412f23: je 0x412f34 */
  if (zf) goto L_412f34;
L_412f25: /* 412f25: cmp eax, dword ptr [0x44a984] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a984u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412f2b: je 0x412f34 */
  if (zf) goto L_412f34;
L_412f2d: /* 412f2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412f2e: call 0x401156 */
  esp -= 4; W32(esp, 0x412f33u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412f33: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412f34: /* 412f34: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 412f37: mov ecx, dword ptr [0x44b39c] */
  ecx = R32((uint32_t)(0x44b39cu));
/* 412f3d: cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412f40: je 0x412f51 */
  if (zf) goto L_412f51;
L_412f42: /* 412f42: cmp eax, dword ptr [0x44a988] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a988u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412f48: je 0x412f51 */
  if (zf) goto L_412f51;
L_412f4a: /* 412f4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412f4b: call 0x401156 */
  esp -= 4; W32(esp, 0x412f50u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412f50: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412f51: /* 412f51: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 412f54: mov ecx, dword ptr [0x44b39c] */
  ecx = R32((uint32_t)(0x44b39cu));
/* 412f5a: cmp eax, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412f5d: je 0x412f6e */
  if (zf) goto L_412f6e;
L_412f5f: /* 412f5f: cmp eax, dword ptr [0x44a98c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a98cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412f65: je 0x412f6e */
  if (zf) goto L_412f6e;
L_412f67: /* 412f67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412f68: call 0x401156 */
  esp -= 4; W32(esp, 0x412f6du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412f6d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412f6e: /* 412f6e: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 412f71: mov ecx, dword ptr [0x44b39c] */
  ecx = R32((uint32_t)(0x44b39cu));
/* 412f77: cmp eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412f7a: je 0x412f8b */
  if (zf) goto L_412f8b;
L_412f7c: /* 412f7c: cmp eax, dword ptr [0x44a990] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a990u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412f82: je 0x412f8b */
  if (zf) goto L_412f8b;
L_412f84: /* 412f84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412f85: call 0x401156 */
  esp -= 4; W32(esp, 0x412f8au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412f8a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412f8b: /* 412f8b: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 412f8e: mov ecx, dword ptr [0x44b39c] */
  ecx = R32((uint32_t)(0x44b39cu));
/* 412f94: cmp eax, dword ptr [ecx + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412f97: je 0x412fa8 */
  if (zf) goto L_412fa8;
L_412f99: /* 412f99: cmp eax, dword ptr [0x44a994] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a994u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412f9f: je 0x412fa8 */
  if (zf) goto L_412fa8;
L_412fa1: /* 412fa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 412fa2: call 0x401156 */
  esp -= 4; W32(esp, 0x412fa7u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412fa7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412fa8: /* 412fa8: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 412fab: mov eax, dword ptr [0x44b39c] */
  eax = R32((uint32_t)(0x44b39cu));
/* 412fb0: cmp esi, dword ptr [eax + 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412fb3: je 0x412fc4 */
  if (zf) goto L_412fc4;
L_412fb5: /* 412fb5: cmp esi, dword ptr [0x44a998] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a998u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412fbb: je 0x412fc4 */
  if (zf) goto L_412fc4;
L_412fbd: /* 412fbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 412fbe: call 0x401156 */
  esp -= 4; W32(esp, 0x412fc3u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 412fc3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_412fc4: /* 412fc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 412fc5: ret  */
  esp += 4; SPILL(); return;
}

void f_412fc6(void) {
  LOAD_REGS();
L_412fc6: /* 412fc6: mov eax, dword ptr [0x44902c] */
  eax = R32((uint32_t)(0x44902cu));
/* 412fcb: ret  */
  esp += 4; SPILL(); return;
}

void f_412fcc(void) {
  LOAD_REGS();
L_412fcc: /* 412fcc: call 0x40137f */
  esp -= 4; W32(esp, 0x412fd1u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 412fd1: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 412fd4: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412fda: je 0x412fe1 */
  if (zf) goto L_412fe1;
L_412fdc: /* 412fdc: call 0x4025f2 */
  esp -= 4; W32(esp, 0x412fe1u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_412fe1: /* 412fe1: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 412fe4: ret  */
  esp += 4; SPILL(); return;
}

void f_412fe5(void) {
  LOAD_REGS();
L_412fe5: /* 412fe5: call 0x40137f */
  esp -= 4; W32(esp, 0x412feau); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 412fea: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 412fed: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 412ff3: je 0x412ffa */
  if (zf) goto L_412ffa;
L_412ff5: /* 412ff5: call 0x4025f2 */
  esp -= 4; W32(esp, 0x412ffau); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_412ffa: /* 412ffa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 412ffd: ret  */
  esp += 4; SPILL(); return;
}

void f_412ffe(void) {
  LOAD_REGS();
L_412ffe: /* 412ffe: call 0x40137f */
  esp -= 4; W32(esp, 0x413003u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 413003: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 413006: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41300c: je 0x413013 */
  if (zf) goto L_413013;
L_41300e: /* 41300e: call 0x4025f2 */
  esp -= 4; W32(esp, 0x413013u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_413013: /* 413013: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 413016: ret  */
  esp += 4; SPILL(); return;
}

void f_413017(void) {
  LOAD_REGS();
L_413017: /* 413017: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 413018: mov ebp, esp */
  ebp = esp;
/* 41301a: xor eax, eax */
  eax = 0;
/* 41301c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41301d: xor ebx, ebx */
  ebx = 0;
/* 41301f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 413020: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 413023: jl 0x41306b */
  if ((sf != of)) goto L_41306b;
L_413025: /* 413025: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413026: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_413027: /* 413027: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413029: je 0x413069 */
  if (zf) goto L_413069;
L_41302b: /* 41302b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41302e: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 413030: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 413031: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 413033: mov esi, eax */
  esi = eax;
/* 413035: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 413038: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 41303a: lea edi, [eax + esi*8] */
  edi = (uint32_t)(eax + esi*8);
/* 41303d: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 41303f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 413042: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 413044: call 0x401bd4 */
  esp -= 4; W32(esp, 0x413049u); SPILL(); f_401bd4(); if (g_unwind) return; RELOAD();
/* 413049: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41304b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41304c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41304d: jne 0x413059 */
  if (!zf) goto L_413059;
L_41304f: /* 41304f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 413052: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 413055: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 413057: jmp 0x413064 */
  goto L_413064;
L_413059: /* 413059: jge 0x413061 */
  if ((sf == of)) goto L_413061;
L_41305b: /* 41305b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 41305c: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 41305f: jmp 0x413064 */
  goto L_413064;
L_413061: /* 413061: lea ebx, [esi + 1] */
  ebx = (uint32_t)(esi + 0x1u);
L_413064: /* 413064: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 413067: jle 0x413027 */
  if ((zf || sf != of)) goto L_413027;
L_413069: /* 413069: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41306a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_41306b: /* 41306b: xor ecx, ecx */
  ecx = 0;
/* 41306d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41306f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 413072: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 413073: mov eax, ecx */
  eax = ecx;
/* 413075: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 413076: ret  */
  esp += 4; SPILL(); return;
}

void f_413077(void) {
  LOAD_REGS();
L_413077: /* 413077: xor eax, eax */
  eax = 0;
L_413079: /* 413079: mov cx, word ptr [esp + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 41307e: cmp cx, word ptr [eax + 0x43f2c4] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x43f2c4u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 413085: je 0x413092 */
  if (zf) goto L_413092;
L_413087: /* 413087: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 413088: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 413089: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41308c: jb 0x413079 */
  if (cf) goto L_413079;
L_41308e: /* 41308e: xor eax, eax */
  eax = 0;
/* 413090: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 413091: ret  */
  esp += 4; SPILL(); return;
L_413092: /* 413092: xor eax, eax */
  eax = 0;
/* 413094: ret  */
  esp += 4; SPILL(); return;
}

void f_413095(void) {
  LOAD_REGS();
L_413095: /* 413095: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 413096: mov ebp, esp */
  ebp = esp;
/* 413098: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 413099: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41309a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41309b: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* 41309d: xor esi, esi */
  esi = 0;
/* 41309f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4130a0: /* 4130a0: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 4130a3: lea eax, [edi + esi] */
  eax = (uint32_t)(edi + esi);
/* 4130a6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4130a7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4130a9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4130ab: mov ecx, eax */
  ecx = eax;
/* 4130ad: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 4130b0: mov ecx, dword ptr [ecx + 0x43eca8] */
  ecx = R32((uint32_t)(ecx + 0x43eca8u));
/* 4130b6: cmp dword ptr [ebp + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4130b9: je 0x4130e0 */
  if (zf) goto L_4130e0;
L_4130bb: /* 4130bb: jae 0x4130c2 */
  if (!cf) goto L_4130c2;
L_4130bd: /* 4130bd: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 4130c0: jmp 0x4130c5 */
  goto L_4130c5;
L_4130c2: /* 4130c2: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
L_4130c5: /* 4130c5: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4130c7: jle 0x4130a0 */
  if ((zf || sf != of)) goto L_4130a0;
L_4130c9: /* 4130c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4130ca: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4130cd: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4130d0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4130d3: call dword ptr [0x439110] */
  esp -= 4; W32(esp, 0x4130d9u); SPILL(); call_ind(R32(0x439110u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoA */ RELOAD();
L_4130d9: /* 4130d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4130da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4130db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4130dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4130dd: ret 0x10 */
  esp += 20; SPILL(); return;
L_4130e0: /* 4130e0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4130e3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 4130e4: je 0x413141 */
  if (zf) goto L_413141;
L_4130e6: /* 4130e6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4130e7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 4130e8: je 0x413137 */
  if (zf) goto L_413137;
L_4130ea: /* 4130ea: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 4130ed: je 0x41312d */
  if (zf) goto L_41312d;
L_4130ef: /* 4130ef: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 4130f2: je 0x413123 */
  if (zf) goto L_413123;
L_4130f4: /* 4130f4: sub ecx, 0xff6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xff6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 4130fa: je 0x413118 */
  if (zf) goto L_413118;
L_4130fc: /* 4130fc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 4130fd: je 0x41310d */
  if (zf) goto L_41310d;
L_4130ff: /* 4130ff: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 413100: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 413101: jne 0x4130c9 */
  if (!zf) goto L_4130c9;
L_413103: /* 413103: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 413106: add eax, 0x43eccc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x43ecccu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41310b: jmp 0x413149 */
  goto L_413149;
L_41310d: /* 41310d: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 413110: mov eax, dword ptr [eax + 0x43ecbc] */
  eax = R32((uint32_t)(eax + 0x43ecbcu));
/* 413116: jmp 0x413149 */
  goto L_413149;
L_413118: /* 413118: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 41311b: mov eax, dword ptr [eax + 0x43ecb4] */
  eax = R32((uint32_t)(eax + 0x43ecb4u));
/* 413121: jmp 0x413149 */
  goto L_413149;
L_413123: /* 413123: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 413126: add eax, 0x43ecc4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x43ecc4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41312b: jmp 0x413149 */
  goto L_413149;
L_41312d: /* 41312d: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 413130: add eax, 0x43ecc0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x43ecc0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 413135: jmp 0x413149 */
  goto L_413149;
L_413137: /* 413137: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 41313a: add eax, 0x43ecb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x43ecb8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41313f: jmp 0x413149 */
  goto L_413149;
L_413141: /* 413141: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 413144: add eax, 0x43ecac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x43ecacu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_413149: /* 413149: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41314b: je 0x4130c9 */
  if (zf) goto L_4130c9;
L_413151: /* 413151: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 413154: jl 0x4130c9 */
  if ((sf != of)) goto L_4130c9;
L_41315a: /* 41315a: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 41315d: lea ecx, [ebx - 1] */
  ecx = (uint32_t)(ebx + 0xffffffffu);
/* 413160: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 413161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413162: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413163: call 0x4053f1 */
  esp -= 4; W32(esp, 0x413168u); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 413168: and byte ptr [esi + ebx - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ebx + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + ebx + 0xffffffffu), r);
  }
/* 41316d: xor eax, eax */
  eax = 0;
/* 41316f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 413172: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 413173: jmp 0x4130d9 */
  goto L_4130d9;
}

void f_413178(void) {
  LOAD_REGS();
L_413178: /* 413178: xor eax, eax */
  eax = 0;
/* 41317a: jmp 0x4131a6 */
  goto L_4131a6;
L_41317c: /* 41317c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 41317d: cmp cl, 0x61 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x61u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 413180: jl 0x41318c */
  if ((sf != of)) goto L_41318c;
L_413182: /* 413182: cmp cl, 0x66 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x66u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 413185: jg 0x41318c */
  if ((!zf && sf == of)) goto L_41318c;
L_413187: /* 413187: add cl, 0xd9 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xd9u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41318a: jmp 0x413199 */
  goto L_413199;
L_41318c: /* 41318c: cmp cl, 0x41 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41318f: jl 0x413199 */
  if ((sf != of)) goto L_413199;
L_413191: /* 413191: cmp cl, 0x46 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x46u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 413194: jg 0x413199 */
  if ((!zf && sf == of)) goto L_413199;
L_413196: /* 413196: add cl, 0xf9 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf9u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_413199: /* 413199: add eax, 0xffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffdu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41319e: movsx ecx, cl */
  ecx = (uint32_t)(int32_t)(int8_t)((ecx & 0xffu));
/* 4131a1: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4131a4: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_4131a6: /* 4131a6: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 4131a8: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4131aa: jne 0x41317c */
  if (!zf) goto L_41317c;
L_4131ac: /* 4131ac: ret  */
  esp += 4; SPILL(); return;
}

void f_4131ad(void) {
  LOAD_REGS();
L_4131ad: /* 4131ad: xor eax, eax */
  eax = 0;
L_4131af: /* 4131af: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 4131b1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4131b2: cmp cl, 0x41 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 4131b5: jl 0x4131bc */
  if ((sf != of)) goto L_4131bc;
L_4131b7: /* 4131b7: cmp cl, 0x5a */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 4131ba: jle 0x4131c6 */
  if ((zf || sf != of)) goto L_4131c6;
L_4131bc: /* 4131bc: cmp cl, 0x61 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x61u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 4131bf: jl 0x4131c9 */
  if ((sf != of)) goto L_4131c9;
L_4131c1: /* 4131c1: cmp cl, 0x7a */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x7au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 4131c4: jg 0x4131c9 */
  if ((!zf && sf == of)) goto L_4131c9;
L_4131c6: /* 4131c6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4131c7: jmp 0x4131af */
  goto L_4131af;
L_4131c9: /* 4131c9: ret  */
  esp += 4; SPILL(); return;
}

void f_4131ca(void) {
  LOAD_REGS();
L_4131ca: /* 4131ca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4131cb: mov ebp, esp */
  ebp = esp;
/* 4131cd: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4131d0: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4131d5: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4131d8: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 4131db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4131dc: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4131df: call 0x413178 */
  esp -= 4; W32(esp, 0x4131e4u); SPILL(); f_413178(); if (g_unwind) return; RELOAD();
/* 4131e4: mov esi, eax */
  esi = eax;
/* 4131e6: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 4131e8: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 4131eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4131ec: mov eax, dword ptr [0x44f440] */
  eax = R32((uint32_t)(0x44f440u));
/* 4131f1: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4131f3: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4131f5: and eax, 0xfffff005 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff005u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4131fa: add eax, 0x1002 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1002u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4131ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413201: call dword ptr [0x44b9dc] */
  { uint32_t t = R32((uint32_t)(0x44b9dcu)); esp -= 4; W32(esp, 0x413207u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 413207: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413209: jne 0x413214 */
  if (!zf) goto L_413214;
L_41320b: /* 41320b: and dword ptr [0x44b9c8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44b9c8u), r);
  }
/* 413211: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 413212: jmp 0x413254 */
  goto L_413254;
L_413214: /* 413214: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 413217: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413218: push dword ptr [0x44b9d4] */
  { uint32_t v = R32((uint32_t)(0x44b9d4u)); esp -= 4; W32(esp, v); }
/* 41321e: call 0x401bd4 */
  esp -= 4; W32(esp, 0x413223u); SPILL(); f_401bd4(); if (g_unwind) return; RELOAD();
/* 413223: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413225: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413226: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413227: jne 0x413247 */
  if (!zf) goto L_413247;
L_413229: /* 413229: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41322a: call 0x413077 */
  esp -= 4; W32(esp, 0x41322fu); SPILL(); f_413077(); if (g_unwind) return; RELOAD();
/* 41322f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413231: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413232: je 0x413247 */
  if (zf) goto L_413247;
L_413234: /* 413234: or dword ptr [0x44b9c8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x44b9c8u), r);
  }
/* 41323b: mov dword ptr [0x44b9d0], esi */
  W32((uint32_t)(0x44b9d0u), esi);
/* 413241: mov dword ptr [0x44b9cc], esi */
  W32((uint32_t)(0x44b9ccu), esi);
L_413247: /* 413247: mov eax, dword ptr [0x44b9c8] */
  eax = R32((uint32_t)(0x44b9c8u));
/* 41324c: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41324f: not eax */
  eax = ~eax;
/* 413251: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_413254: /* 413254: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 413257: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41325a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41325b: call 0x4013ab */
  esp -= 4; W32(esp, 0x413260u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 413260: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 413261: ret 4 */
  esp += 8; SPILL(); return;
}

void f_413264(void) {
  LOAD_REGS();
L_413264: /* 413264: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 413265: mov ebp, esp */
  ebp = esp;
/* 413267: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41326a: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 41326f: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 413272: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 413274: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 413277: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 41327a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41327b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41327e: and eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 413283: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 413285: or eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41328a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41328b: call dword ptr [0x44b9dc] */
  { uint32_t t = R32((uint32_t)(0x44b9dcu)); esp -= 4; W32(esp, 0x413291u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 413291: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413293: je 0x4132c7 */
  if (zf) goto L_4132c7;
L_413295: /* 413295: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 413298: call 0x413178 */
  esp -= 4; W32(esp, 0x41329du); SPILL(); f_413178(); if (g_unwind) return; RELOAD();
/* 41329d: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4132a0: je 0x4132cb */
  if (zf) goto L_4132cb;
L_4132a2: /* 4132a2: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4132a6: je 0x4132cb */
  if (zf) goto L_4132cb;
L_4132a8: /* 4132a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4132a9: push dword ptr [0x44b9d8] */
  { uint32_t v = R32((uint32_t)(0x44b9d8u)); esp -= 4; W32(esp, v); }
/* 4132af: call 0x402493 */
  esp -= 4; W32(esp, 0x4132b4u); SPILL(); hle_strlen(); RELOAD();
/* 4132b4: mov edx, dword ptr [0x44b9d8] */
  edx = R32((uint32_t)(0x44b9d8u));
/* 4132ba: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4132bb: mov esi, eax */
  esi = eax;
/* 4132bd: call 0x4131ad */
  esp -= 4; W32(esp, 0x4132c2u); SPILL(); f_4131ad(); if (g_unwind) return; RELOAD();
/* 4132c2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4132c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4132c5: jne 0x4132cb */
  if (!zf) goto L_4132cb;
L_4132c7: /* 4132c7: xor eax, eax */
  eax = 0;
/* 4132c9: jmp 0x4132ce */
  goto L_4132ce;
L_4132cb: /* 4132cb: xor eax, eax */
  eax = 0;
/* 4132cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_4132ce: /* 4132ce: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4132d1: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4132d4: call 0x4013ab */
  esp -= 4; W32(esp, 0x4132d9u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4132d9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4132da: ret  */
  esp += 4; SPILL(); return;
}

void f_4132db(void) {
  LOAD_REGS();
L_4132db: /* 4132db: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4132dc: mov ebp, esp */
  ebp = esp;
/* 4132de: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4132e1: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4132e6: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4132e9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 4132ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4132ed: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4132f0: call 0x413178 */
  esp -= 4; W32(esp, 0x4132f5u); SPILL(); f_413178(); if (g_unwind) return; RELOAD();
/* 4132f5: mov esi, eax */
  esi = eax;
/* 4132f7: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 4132f9: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 4132fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4132fd: mov eax, dword ptr [0x44f440] */
  eax = R32((uint32_t)(0x44f440u));
/* 413302: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 413304: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 413306: and eax, 0xfffff005 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff005u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41330b: add eax, 0x1002 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1002u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 413310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413311: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413312: call dword ptr [0x44b9dc] */
  { uint32_t t = R32((uint32_t)(0x44b9dcu)); esp -= 4; W32(esp, 0x413318u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 413318: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41331a: jne 0x413328 */
  if (!zf) goto L_413328;
L_41331c: /* 41331c: and dword ptr [0x44b9c8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44b9c8u), r);
  }
/* 413322: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 413323: jmp 0x4134eb */
  goto L_4134eb;
L_413328: /* 413328: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 413329: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41332a: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 41332d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41332e: push dword ptr [0x44b9d4] */
  { uint32_t v = R32((uint32_t)(0x44b9d4u)); esp -= 4; W32(esp, v); }
/* 413334: call 0x401bd4 */
  esp -= 4; W32(esp, 0x413339u); SPILL(); f_401bd4(); if (g_unwind) return; RELOAD();
/* 413339: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41333b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41333c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41333d: mov ebx, 0xfffff002 */
  ebx = 0xfffff002u;
/* 413342: mov edi, 0x1001 */
  edi = 0x1001u;
/* 413347: jne 0x413414 */
  if (!zf) goto L_413414;
L_41334d: /* 41334d: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 41334f: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 413352: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413353: mov eax, dword ptr [0x44f43c] */
  eax = R32((uint32_t)(0x44f43cu));
/* 413358: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41335a: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41335c: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41335e: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 413360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413361: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413362: call dword ptr [0x44b9dc] */
  { uint32_t t = R32((uint32_t)(0x44b9dcu)); esp -= 4; W32(esp, 0x413368u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 413368: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41336a: jne 0x41337b */
  if (!zf) goto L_41337b;
L_41336c: /* 41336c: and dword ptr [0x44b9c8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44b9c8u), r);
  }
/* 413373: xor eax, eax */
  eax = 0;
/* 413375: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 413376: jmp 0x4134e9 */
  goto L_4134e9;
L_41337b: /* 41337b: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 41337e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41337f: push dword ptr [0x44b9d8] */
  { uint32_t v = R32((uint32_t)(0x44b9d8u)); esp -= 4; W32(esp, v); }
/* 413385: call 0x401bd4 */
  esp -= 4; W32(esp, 0x41338au); SPILL(); f_401bd4(); if (g_unwind) return; RELOAD();
/* 41338a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41338c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41338d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41338e: jne 0x4133a1 */
  if (!zf) goto L_4133a1;
L_413390: /* 413390: or word ptr [0x44b9c8], 0x304 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x44b9c8u))); uint16_t b = (uint16_t)(0x304u);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(0x44b9c8u), r);
  }
/* 413399: mov dword ptr [0x44b9cc], esi */
  W32((uint32_t)(0x44b9ccu), esi);
/* 41339f: jmp 0x41340e */
  goto L_41340e;
L_4133a1: /* 4133a1: test byte ptr [0x44b9c8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44b9c8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4133a8: jne 0x413414 */
  if (!zf) goto L_413414;
L_4133aa: /* 4133aa: mov eax, dword ptr [0x44f444] */
  eax = R32((uint32_t)(0x44f444u));
/* 4133af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4133b1: je 0x4133f3 */
  if (zf) goto L_4133f3;
L_4133b3: /* 4133b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4133b4: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 4133b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4133b8: push dword ptr [0x44b9d8] */
  { uint32_t v = R32((uint32_t)(0x44b9d8u)); esp -= 4; W32(esp, v); }
/* 4133be: call 0x4145c7 */
  esp -= 4; W32(esp, 0x4133c3u); SPILL(); f_4145c7(); if (g_unwind) return; RELOAD();
/* 4133c3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4133c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4133c8: jne 0x4133f3 */
  if (!zf) goto L_4133f3;
L_4133ca: /* 4133ca: push dword ptr [0x44b9d8] */
  { uint32_t v = R32((uint32_t)(0x44b9d8u)); esp -= 4; W32(esp, v); }
/* 4133d0: or dword ptr [0x44b9c8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x44b9c8u), r);
  }
/* 4133d7: mov dword ptr [0x44b9d0], esi */
  W32((uint32_t)(0x44b9d0u), esi);
/* 4133dd: call 0x402493 */
  esp -= 4; W32(esp, 0x4133e2u); SPILL(); hle_strlen(); RELOAD();
/* 4133e2: cmp eax, dword ptr [0x44f444] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f444u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4133e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4133e9: jne 0x413414 */
  if (!zf) goto L_413414;
L_4133eb: /* 4133eb: mov dword ptr [0x44b9cc], esi */
  W32((uint32_t)(0x44b9ccu), esi);
/* 4133f1: jmp 0x413414 */
  goto L_413414;
L_4133f3: /* 4133f3: test byte ptr [0x44b9c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44b9c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4133fa: jne 0x413414 */
  if (!zf) goto L_413414;
L_4133fc: /* 4133fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4133fd: call 0x413077 */
  esp -= 4; W32(esp, 0x413402u); SPILL(); f_413077(); if (g_unwind) return; RELOAD();
/* 413402: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413404: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413405: je 0x413414 */
  if (zf) goto L_413414;
L_413407: /* 413407: or dword ptr [0x44b9c8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x44b9c8u), r);
  }
L_41340e: /* 41340e: mov dword ptr [0x44b9d0], esi */
  W32((uint32_t)(0x44b9d0u), esi);
L_413414: /* 413414: mov ecx, dword ptr [0x44b9c8] */
  ecx = R32((uint32_t)(0x44b9c8u));
/* 41341a: mov eax, 0x300 */
  eax = 0x300u;
/* 41341f: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 413421: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413423: je 0x4134dc */
  if (zf) goto L_4134dc;
L_413429: /* 413429: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 41342b: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 41342e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41342f: mov eax, dword ptr [0x44f43c] */
  eax = R32((uint32_t)(0x44f43cu));
/* 413434: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 413436: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 413438: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41343a: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41343c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41343d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41343e: call dword ptr [0x44b9dc] */
  { uint32_t t = R32((uint32_t)(0x44b9dcu)); esp -= 4; W32(esp, 0x413444u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 413444: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413446: je 0x41336c */
  if (zf) goto L_41336c;
L_41344c: /* 41344c: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 41344f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413450: push dword ptr [0x44b9d8] */
  { uint32_t v = R32((uint32_t)(0x44b9d8u)); esp -= 4; W32(esp, v); }
/* 413456: call 0x401bd4 */
  esp -= 4; W32(esp, 0x41345bu); SPILL(); f_401bd4(); if (g_unwind) return; RELOAD();
/* 41345b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41345c: xor edi, edi */
  edi = 0;
/* 41345e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413460: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413461: jne 0x413492 */
  if (!zf) goto L_413492;
L_413463: /* 413463: or byte ptr [0x44b9c9], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44b9c9u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(0x44b9c9u), r);
  }
/* 41346a: cmp dword ptr [0x44f43c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f43cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413470: jne 0x4134c7 */
  if (!zf) goto L_4134c7;
L_413472: /* 413472: cmp dword ptr [0x44f444], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f444u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413478: je 0x4134c7 */
  if (zf) goto L_4134c7;
L_41347a: /* 41347a: push dword ptr [0x44b9d8] */
  { uint32_t v = R32((uint32_t)(0x44b9d8u)); esp -= 4; W32(esp, v); }
/* 413480: call 0x402493 */
  esp -= 4; W32(esp, 0x413485u); SPILL(); hle_strlen(); RELOAD();
/* 413485: cmp eax, dword ptr [0x44f444] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f444u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41348b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41348c: jne 0x4134c7 */
  if (!zf) goto L_4134c7;
L_41348e: /* 41348e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 413490: jmp 0x4134bb */
  goto L_4134bb;
L_413492: /* 413492: cmp dword ptr [0x44f43c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f43cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413498: jne 0x4134dc */
  if (!zf) goto L_4134dc;
L_41349a: /* 41349a: mov eax, dword ptr [0x44f444] */
  eax = R32((uint32_t)(0x44f444u));
/* 41349f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4134a1: je 0x4134dc */
  if (zf) goto L_4134dc;
L_4134a3: /* 4134a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4134a4: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 4134a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4134a8: push dword ptr [0x44b9d8] */
  { uint32_t v = R32((uint32_t)(0x44b9d8u)); esp -= 4; W32(esp, v); }
/* 4134ae: call 0x4145c7 */
  esp -= 4; W32(esp, 0x4134b3u); SPILL(); f_4145c7(); if (g_unwind) return; RELOAD();
/* 4134b3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4134b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4134b8: jne 0x4134dc */
  if (!zf) goto L_4134dc;
L_4134ba: /* 4134ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4134bb: /* 4134bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4134bc: call 0x413264 */
  esp -= 4; W32(esp, 0x4134c1u); SPILL(); f_413264(); if (g_unwind) return; RELOAD();
/* 4134c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4134c3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4134c4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4134c5: je 0x4134dc */
  if (zf) goto L_4134dc;
L_4134c7: /* 4134c7: or byte ptr [0x44b9c9], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44b9c9u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(0x44b9c9u), r);
  }
/* 4134ce: cmp dword ptr [0x44b9cc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9ccu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4134d4: jne 0x4134dc */
  if (!zf) goto L_4134dc;
L_4134d6: /* 4134d6: mov dword ptr [0x44b9cc], esi */
  W32((uint32_t)(0x44b9ccu), esi);
L_4134dc: /* 4134dc: mov eax, dword ptr [0x44b9c8] */
  eax = R32((uint32_t)(0x44b9c8u));
/* 4134e1: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4134e4: not eax */
  eax = ~eax;
/* 4134e6: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_4134e9: /* 4134e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4134ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4134eb: /* 4134eb: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4134ee: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4134f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4134f2: call 0x4013ab */
  esp -= 4; W32(esp, 0x4134f7u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4134f7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4134f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4134fb(void) {
  LOAD_REGS();
L_4134fb: /* 4134fb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4134fc: mov ebp, esp */
  ebp = esp;
/* 4134fe: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 413501: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 413506: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 413509: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 41350c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41350d: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 413510: call 0x413178 */
  esp -= 4; W32(esp, 0x413515u); SPILL(); f_413178(); if (g_unwind) return; RELOAD();
/* 413515: mov esi, eax */
  esi = eax;
/* 413517: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 413519: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 41351c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41351d: mov eax, dword ptr [0x44f43c] */
  eax = R32((uint32_t)(0x44f43cu));
/* 413522: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 413524: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 413526: and eax, 0xfffff002 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff002u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41352b: add eax, 0x1001 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1001u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 413530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413531: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413532: call dword ptr [0x44b9dc] */
  { uint32_t t = R32((uint32_t)(0x44b9dcu)); esp -= 4; W32(esp, 0x413538u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 413538: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41353a: jne 0x413545 */
  if (!zf) goto L_413545;
L_41353c: /* 41353c: and dword ptr [0x44b9c8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44b9c8u), r);
  }
/* 413542: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 413543: jmp 0x4135bc */
  goto L_4135bc;
L_413545: /* 413545: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 413548: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413549: push dword ptr [0x44b9d8] */
  { uint32_t v = R32((uint32_t)(0x44b9d8u)); esp -= 4; W32(esp, v); }
/* 41354f: call 0x401bd4 */
  esp -= 4; W32(esp, 0x413554u); SPILL(); f_401bd4(); if (g_unwind) return; RELOAD();
/* 413554: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413556: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413557: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413558: jne 0x413566 */
  if (!zf) goto L_413566;
L_41355a: /* 41355a: cmp dword ptr [0x44f43c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f43cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413560: jne 0x41359c */
  if (!zf) goto L_41359c;
L_413562: /* 413562: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 413564: jmp 0x413590 */
  goto L_413590;
L_413566: /* 413566: cmp dword ptr [0x44f43c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f43cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41356d: jne 0x4135af */
  if (!zf) goto L_4135af;
L_41356f: /* 41356f: mov eax, dword ptr [0x44f444] */
  eax = R32((uint32_t)(0x44f444u));
/* 413574: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413576: je 0x4135af */
  if (zf) goto L_4135af;
L_413578: /* 413578: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413579: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 41357c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41357d: push dword ptr [0x44b9d8] */
  { uint32_t v = R32((uint32_t)(0x44b9d8u)); esp -= 4; W32(esp, v); }
/* 413583: call 0x4145c7 */
  esp -= 4; W32(esp, 0x413588u); SPILL(); f_4145c7(); if (g_unwind) return; RELOAD();
/* 413588: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41358b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41358d: jne 0x4135af */
  if (!zf) goto L_4135af;
L_41358f: /* 41358f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_413590: /* 413590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413591: call 0x413264 */
  esp -= 4; W32(esp, 0x413596u); SPILL(); f_413264(); if (g_unwind) return; RELOAD();
/* 413596: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413598: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413599: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41359a: je 0x4135af */
  if (zf) goto L_4135af;
L_41359c: /* 41359c: or dword ptr [0x44b9c8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x44b9c8u), r);
  }
/* 4135a3: mov dword ptr [0x44b9d0], esi */
  W32((uint32_t)(0x44b9d0u), esi);
/* 4135a9: mov dword ptr [0x44b9cc], esi */
  W32((uint32_t)(0x44b9ccu), esi);
L_4135af: /* 4135af: mov eax, dword ptr [0x44b9c8] */
  eax = R32((uint32_t)(0x44b9c8u));
/* 4135b4: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4135b7: not eax */
  eax = ~eax;
/* 4135b9: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_4135bc: /* 4135bc: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4135bf: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4135c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4135c3: call 0x4013ab */
  esp -= 4; W32(esp, 0x4135c8u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4135c8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4135c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4135cc(void) {
  LOAD_REGS();
L_4135cc: /* 4135cc: push dword ptr [0x44b9d4] */
  { uint32_t v = R32((uint32_t)(0x44b9d4u)); esp -= 4; W32(esp, v); }
/* 4135d2: call 0x402493 */
  esp -= 4; W32(esp, 0x4135d7u); SPILL(); hle_strlen(); RELOAD();
/* 4135d7: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4135da: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4135dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4135dd: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4135df: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4135e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4135e2: push 0x4131ca */
  { uint32_t v = 0x4131cau; esp -= 4; W32(esp, v); }
/* 4135e7: mov dword ptr [0x44f440], eax */
  W32((uint32_t)(0x44f440u), eax);
/* 4135ec: call dword ptr [0x439114] */
  esp -= 4; W32(esp, 0x4135f2u); SPILL(); call_ind(R32(0x439114u)); if (g_unwind) return; /* KERNEL32!EnumSystemLocalesA */ RELOAD();
/* 4135f2: test byte ptr [0x44b9c8], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44b9c8u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4135f9: jne 0x413602 */
  if (!zf) goto L_413602;
L_4135fb: /* 4135fb: and dword ptr [0x44b9c8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44b9c8u), r);
  }
L_413602: /* 413602: ret  */
  esp += 4; SPILL(); return;
}

void f_413603(void) {
  LOAD_REGS();
L_413603: /* 413603: push dword ptr [0x44b9d8] */
  { uint32_t v = R32((uint32_t)(0x44b9d8u)); esp -= 4; W32(esp, v); }
/* 413609: call 0x402493 */
  esp -= 4; W32(esp, 0x41360eu); SPILL(); hle_strlen(); RELOAD();
/* 41360e: push dword ptr [0x44b9d4] */
  { uint32_t v = R32((uint32_t)(0x44b9d4u)); esp -= 4; W32(esp, v); }
/* 413614: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 413617: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 413619: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41361b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41361c: mov dword ptr [0x44f43c], eax */
  W32((uint32_t)(0x44f43cu), eax);
/* 413621: call 0x402493 */
  esp -= 4; W32(esp, 0x413626u); SPILL(); hle_strlen(); RELOAD();
/* 413626: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 413629: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41362b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41362d: and dword ptr [0x44b9cc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9ccu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44b9ccu), r);
  }
/* 413634: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 413635: cmp dword ptr [0x44f43c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f43cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41363c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41363d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41363e: mov dword ptr [0x44f440], eax */
  W32((uint32_t)(0x44f440u), eax);
/* 413643: je 0x413651 */
  if (zf) goto L_413651;
L_413645: /* 413645: mov dword ptr [0x44f444], 2 */
  W32((uint32_t)(0x44f444u), 0x2u);
/* 41364f: jmp 0x413661 */
  goto L_413661;
L_413651: /* 413651: mov edx, dword ptr [0x44b9d8] */
  edx = R32((uint32_t)(0x44b9d8u));
/* 413657: call 0x4131ad */
  esp -= 4; W32(esp, 0x41365cu); SPILL(); f_4131ad(); if (g_unwind) return; RELOAD();
/* 41365c: mov dword ptr [0x44f444], eax */
  W32((uint32_t)(0x44f444u), eax);
L_413661: /* 413661: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 413663: push 0x4132db */
  { uint32_t v = 0x4132dbu; esp -= 4; W32(esp, v); }
/* 413668: call dword ptr [0x439114] */
  esp -= 4; W32(esp, 0x41366eu); SPILL(); call_ind(R32(0x439114u)); if (g_unwind) return; /* KERNEL32!EnumSystemLocalesA */ RELOAD();
/* 41366e: mov eax, dword ptr [0x44b9c8] */
  eax = R32((uint32_t)(0x44b9c8u));
/* 413673: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 413676: je 0x413681 */
  if (zf) goto L_413681;
L_413678: /* 413678: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41367b: je 0x413681 */
  if (zf) goto L_413681;
L_41367d: /* 41367d: test al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41367f: jne 0x413688 */
  if (!zf) goto L_413688;
L_413681: /* 413681: and dword ptr [0x44b9c8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44b9c8u), r);
  }
L_413688: /* 413688: ret  */
  esp += 4; SPILL(); return;
}

void f_413689(void) {
  LOAD_REGS();
L_413689: /* 413689: push dword ptr [0x44b9d8] */
  { uint32_t v = R32((uint32_t)(0x44b9d8u)); esp -= 4; W32(esp, v); }
/* 41368f: call 0x402493 */
  esp -= 4; W32(esp, 0x413694u); SPILL(); hle_strlen(); RELOAD();
/* 413694: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 413697: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 413699: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41369b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
/* 41369c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41369d: mov dword ptr [0x44f43c], eax */
  W32((uint32_t)(0x44f43cu), eax);
/* 4136a2: je 0x4136b0 */
  if (zf) goto L_4136b0;
L_4136a4: /* 4136a4: mov dword ptr [0x44f444], 2 */
  W32((uint32_t)(0x44f444u), 0x2u);
/* 4136ae: jmp 0x4136c0 */
  goto L_4136c0;
L_4136b0: /* 4136b0: mov edx, dword ptr [0x44b9d8] */
  edx = R32((uint32_t)(0x44b9d8u));
/* 4136b6: call 0x4131ad */
  esp -= 4; W32(esp, 0x4136bbu); SPILL(); f_4131ad(); if (g_unwind) return; RELOAD();
/* 4136bb: mov dword ptr [0x44f444], eax */
  W32((uint32_t)(0x44f444u), eax);
L_4136c0: /* 4136c0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4136c2: push 0x4134fb */
  { uint32_t v = 0x4134fbu; esp -= 4; W32(esp, v); }
/* 4136c7: call dword ptr [0x439114] */
  esp -= 4; W32(esp, 0x4136cdu); SPILL(); call_ind(R32(0x439114u)); if (g_unwind) return; /* KERNEL32!EnumSystemLocalesA */ RELOAD();
/* 4136cd: test byte ptr [0x44b9c8], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44b9c8u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4136d4: jne 0x4136dd */
  if (!zf) goto L_4136dd;
L_4136d6: /* 4136d6: and dword ptr [0x44b9c8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44b9c8u), r);
  }
L_4136dd: /* 4136dd: ret  */
  esp += 4; SPILL(); return;
}

void f_4136de(void) {
  LOAD_REGS();
L_4136de: /* 4136de: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4136df: mov ebp, esp */
  ebp = esp;
/* 4136e1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4136e4: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4136e9: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4136ec: and byte ptr [ebp - 6], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffau))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffau), r);
  }
/* 4136f0: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 4136f2: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4136f5: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 4136f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4136f9: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* 4136fe: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 413701: call dword ptr [0x439110] */
  esp -= 4; W32(esp, 0x413707u); SPILL(); call_ind(R32(0x439110u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoA */ RELOAD();
/* 413707: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413709: jne 0x413710 */
  if (!zf) goto L_413710;
L_41370b: /* 41370b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41370e: jmp 0x41371a */
  goto L_41371a;
L_413710: /* 413710: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 413713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413714: call 0x40643e */
  esp -= 4; W32(esp, 0x413719u); SPILL(); f_40643e(); if (g_unwind) return; RELOAD();
/* 413719: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41371a: /* 41371a: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41371d: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 413720: call 0x4013ab */
  esp -= 4; W32(esp, 0x413725u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 413725: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 413726: ret  */
  esp += 4; SPILL(); return;
}

void f_413727(void) {
  LOAD_REGS();
L_413727: /* 413727: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 413729: push 0x43fac0 */
  { uint32_t v = 0x43fac0u; esp -= 4; W32(esp, v); }
/* 41372e: call 0x40101f */
  esp -= 4; W32(esp, 0x413733u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 413733: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 413738: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41373b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 41373e: xor edi, edi */
  edi = 0;
/* 413740: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 413743: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 413746: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 413749: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 41374b: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 41374e: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 413751: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 413754: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413757: je 0x4138d0 */
  if (zf) goto L_4138d0;
L_41375d: /* 41375d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 413760: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 413761: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413762: mov esi, dword ptr [0x4390b4] */
  esi = R32((uint32_t)(0x4390b4u));
/* 413768: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x41376au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41376a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41376c: je 0x41378e */
  if (zf) goto L_41378e;
L_41376e: /* 41376e: cmp dword ptr [ebp - 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413772: jne 0x41378e */
  if (!zf) goto L_41378e;
L_413774: /* 413774: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 413777: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413778: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41377b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x41377du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41377d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41377f: je 0x41378e */
  if (zf) goto L_41378e;
L_413781: /* 413781: cmp dword ptr [ebp - 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413785: jne 0x41378e */
  if (!zf) goto L_41378e;
L_413787: /* 413787: mov dword ptr [ebp - 0x2c], 1 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x1u);
L_41378e: /* 41378e: cmp dword ptr [ebp - 0x2c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413791: je 0x4137ad */
  if (zf) goto L_4137ad;
L_413793: /* 413793: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413796: je 0x41379c */
  if (zf) goto L_41379c;
L_413798: /* 413798: mov esi, ebx */
  esi = ebx;
/* 41379a: jmp 0x4137a8 */
  goto L_4137a8;
L_41379c: /* 41379c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41379f: call 0x402493 */
  esp -= 4; W32(esp, 0x4137a4u); SPILL(); hle_strlen(); RELOAD();
/* 4137a4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4137a5: mov esi, eax */
  esi = eax;
/* 4137a7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4137a8: /* 4137a8: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 4137ab: jmp 0x4137b0 */
  goto L_4137b0;
L_4137ad: /* 4137ad: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
L_4137b0: /* 4137b0: cmp dword ptr [ebp - 0x2c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4137b3: jne 0x4137cf */
  if (!zf) goto L_4137cf;
L_4137b5: /* 4137b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4137b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4137b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4137b8: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4137bb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4137bd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4137c0: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x4137c6u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 4137c6: mov esi, eax */
  esi = eax;
/* 4137c8: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 4137cb: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4137cd: je 0x413827 */
  if (zf) goto L_413827;
L_4137cf: /* 4137cf: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4137d2: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 4137d5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4137d8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4137db: call 0x4014ee */
  esp -= 4; W32(esp, 0x4137e0u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 4137e0: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 4137e3: mov ebx, esp */
  ebx = esp;
/* 4137e5: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 4137e8: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 4137eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4137ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4137ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4137ee: call 0x4010fd */
  esp -= 4; W32(esp, 0x4137f3u); SPILL(); hle_memset(); RELOAD();
/* 4137f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4137f6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4137fa: jmp 0x413813 */
  goto L_413813;
L_413813: /* 413813: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413815: jne 0x413835 */
  if (!zf) goto L_413835;
L_413817: /* 413817: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413818: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41381a: call 0x4016cb */
  esp -= 4; W32(esp, 0x41381fu); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 41381f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413820: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413821: mov ebx, eax */
  ebx = eax;
/* 413823: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413825: jne 0x41382e */
  if (!zf) goto L_41382e;
L_413827: /* 413827: xor eax, eax */
  eax = 0;
/* 413829: jmp 0x4138e2 */
  goto L_4138e2;
L_41382e: /* 41382e: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
L_413835: /* 413835: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413836: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 413837: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 41383a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41383d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41383f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 413842: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x413848u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 413848: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41384a: je 0x4138d3 */
  if (zf) goto L_4138d3;
L_413850: /* 413850: cmp dword ptr [ebp + 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413853: je 0x413875 */
  if (zf) goto L_413875;
L_413855: /* 413855: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 413856: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 413857: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 41385a: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41385d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41385e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41385f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 413860: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 413863: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x413869u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 413869: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41386b: je 0x4138d3 */
  if (zf) goto L_4138d3;
L_41386d: /* 41386d: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 413870: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 413873: jmp 0x4138d3 */
  goto L_4138d3;
L_413875: /* 413875: cmp dword ptr [ebp - 0x2c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413878: jne 0x413890 */
  if (!zf) goto L_413890;
L_41387a: /* 41387a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41387b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41387c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41387d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41387e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41387f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 413880: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 413881: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 413884: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x41388au); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 41388a: mov esi, eax */
  esi = eax;
/* 41388c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41388e: je 0x4138d3 */
  if (zf) goto L_4138d3;
L_413890: /* 413890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413891: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 413893: call 0x4016cb */
  esp -= 4; W32(esp, 0x413898u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 413898: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413899: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41389a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 41389d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41389f: je 0x4138d3 */
  if (zf) goto L_4138d3;
L_4138a1: /* 4138a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4138a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4138a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4138a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4138a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4138a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4138a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4138a8: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4138ab: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x4138b1u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 4138b1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4138b3: jne 0x4138c3 */
  if (!zf) goto L_4138c3;
L_4138b5: /* 4138b5: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 4138b8: call 0x401156 */
  esp -= 4; W32(esp, 0x4138bdu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4138bd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4138be: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 4138c1: jmp 0x4138d3 */
  goto L_4138d3;
L_4138c3: /* 4138c3: cmp dword ptr [ebp - 0x28], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4138c7: je 0x4138d3 */
  if (zf) goto L_4138d3;
L_4138c9: /* 4138c9: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 4138cc: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4138ce: jmp 0x4138d3 */
  goto L_4138d3;
L_4138d0: /* 4138d0: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
L_4138d3: /* 4138d3: cmp dword ptr [ebp - 0x24], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4138d6: je 0x4138df */
  if (zf) goto L_4138df;
L_4138d8: /* 4138d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4138d9: call 0x401156 */
  esp -= 4; W32(esp, 0x4138deu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4138de: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4138df: /* 4138df: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_4138e2: /* 4138e2: lea esp, [ebp - 0x54] */
  esp = (uint32_t)(ebp + 0xffffffacu);
/* 4138e5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4138e8: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4138eb: call 0x4013ab */
  esp -= 4; W32(esp, 0x4138f0u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4138f0: call 0x40105a */
  esp -= 4; W32(esp, 0x4138f5u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4138f5: ret  */
  esp += 4; SPILL(); return;
}

void f_4137fc(void) {
  LOAD_REGS();
L_4137fc: /* 4137fc: xor eax, eax */
  eax = 0;
/* 4137fe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4137ff: ret  */
  esp += 4; SPILL(); return;
}

void f_413800(void) {
  LOAD_REGS();
L_413800: /* 413800: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 413803: call 0x415709 */
  esp -= 4; W32(esp, 0x413808u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 413808: xor edi, edi */
  edi = 0;
/* 41380a: xor ebx, ebx */
  ebx = 0;
/* 41380c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 413810: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 413813: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413815: jne 0x413835 */
  if (!zf) goto L_413835;
L_413817: /* 413817: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413818: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41381a: call 0x4016cb */
  esp -= 4; W32(esp, 0x41381fu); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 41381f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413820: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413821: mov ebx, eax */
  ebx = eax;
/* 413823: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413825: jne 0x41382e */
  if (!zf) goto L_41382e;
L_413827: /* 413827: xor eax, eax */
  eax = 0;
/* 413829: jmp 0x4138e2 */
  goto L_4138e2;
L_41382e: /* 41382e: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
L_413835: /* 413835: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413836: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 413837: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 41383a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41383d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41383f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 413842: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x413848u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 413848: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41384a: je 0x4138d3 */
  if (zf) goto L_4138d3;
L_413850: /* 413850: cmp dword ptr [ebp + 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413853: je 0x413875 */
  if (zf) goto L_413875;
L_413855: /* 413855: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 413856: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 413857: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 41385a: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41385d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41385e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41385f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 413860: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 413863: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x413869u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 413869: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41386b: je 0x4138d3 */
  if (zf) goto L_4138d3;
L_41386d: /* 41386d: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 413870: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 413873: jmp 0x4138d3 */
  goto L_4138d3;
L_413875: /* 413875: cmp dword ptr [ebp - 0x2c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413878: jne 0x413890 */
  if (!zf) goto L_413890;
L_41387a: /* 41387a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41387b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41387c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41387d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41387e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41387f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 413880: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 413881: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 413884: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x41388au); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 41388a: mov esi, eax */
  esi = eax;
/* 41388c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41388e: je 0x4138d3 */
  if (zf) goto L_4138d3;
L_413890: /* 413890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413891: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 413893: call 0x4016cb */
  esp -= 4; W32(esp, 0x413898u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 413898: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413899: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41389a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 41389d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41389f: je 0x4138d3 */
  if (zf) goto L_4138d3;
L_4138a1: /* 4138a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4138a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4138a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4138a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4138a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4138a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4138a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4138a8: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4138ab: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x4138b1u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 4138b1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4138b3: jne 0x4138c3 */
  if (!zf) goto L_4138c3;
L_4138b5: /* 4138b5: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 4138b8: call 0x401156 */
  esp -= 4; W32(esp, 0x4138bdu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4138bd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4138be: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 4138c1: jmp 0x4138d3 */
  goto L_4138d3;
L_4138c3: /* 4138c3: cmp dword ptr [ebp - 0x28], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4138c7: je 0x4138d3 */
  if (zf) goto L_4138d3;
L_4138c9: /* 4138c9: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 4138cc: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4138ce: jmp 0x4138d3 */
  goto L_4138d3;
L_4138d3: /* 4138d3: cmp dword ptr [ebp - 0x24], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4138d6: je 0x4138df */
  if (zf) goto L_4138df;
L_4138d8: /* 4138d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4138d9: call 0x401156 */
  esp -= 4; W32(esp, 0x4138deu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4138de: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4138df: /* 4138df: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_4138e2: /* 4138e2: lea esp, [ebp - 0x54] */
  esp = (uint32_t)(ebp + 0xffffffacu);
/* 4138e5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4138e8: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4138eb: call 0x4013ab */
  esp -= 4; W32(esp, 0x4138f0u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4138f0: call 0x40105a */
  esp -= 4; W32(esp, 0x4138f5u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4138f5: ret  */
  esp += 4; SPILL(); return;
}

void f_4138f6(void) {
  LOAD_REGS();
L_4138f6: /* 4138f6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4138fa: mov ecx, 0x449568 */
  ecx = 0x449568u;
/* 4138ff: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 413901: jb 0x41391a */
  if (cf) goto L_41391a;
L_413903: /* 413903: cmp eax, 0x4497c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4497c8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 413908: ja 0x41391a */
  if ((!cf && !zf)) goto L_41391a;
L_41390a: /* 41390a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41390c: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 41390f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 413912: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413913: call 0x4011b7 */
  esp -= 4; W32(esp, 0x413918u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 413918: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413919: ret  */
  esp += 4; SPILL(); return;
L_41391a: /* 41391a: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41391d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41391e: call dword ptr [0x43903c] */
  esp -= 4; W32(esp, 0x413924u); SPILL(); call_ind(R32(0x43903cu)); if (g_unwind) return; /* KERNEL32!EnterCriticalSection */ RELOAD();
/* 413924: ret  */
  esp += 4; SPILL(); return;
}

void f_413925(void) {
  LOAD_REGS();
L_413925: /* 413925: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 413929: mov ecx, 0x449568 */
  ecx = 0x449568u;
/* 41392e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 413930: jb 0x413949 */
  if (cf) goto L_413949;
L_413932: /* 413932: cmp eax, 0x4497c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4497c8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 413937: ja 0x413949 */
  if ((!cf && !zf)) goto L_413949;
L_413939: /* 413939: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41393b: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 41393e: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 413941: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413942: call 0x4011d9 */
  esp -= 4; W32(esp, 0x413947u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 413947: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413948: ret  */
  esp += 4; SPILL(); return;
L_413949: /* 413949: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41394c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41394d: call dword ptr [0x439038] */
  esp -= 4; W32(esp, 0x413953u); SPILL(); call_ind(R32(0x439038u)); if (g_unwind) return; /* KERNEL32!LeaveCriticalSection */ RELOAD();
/* 413953: ret  */
  esp += 4; SPILL(); return;
}

void f_413954(void) {
  LOAD_REGS();
L_413954: /* 413954: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 413956: push 0x43fad0 */
  { uint32_t v = 0x43fad0u; esp -= 4; W32(esp, v); }
/* 41395b: call 0x40101f */
  esp -= 4; W32(esp, 0x413960u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 413960: xor esi, esi */
  esi = 0;
/* 413962: cmp dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413965: jne 0x413970 */
  if (!zf) goto L_413970;
L_413967: /* 413967: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413968: call 0x4041d6 */
  esp -= 4; W32(esp, 0x41396du); SPILL(); f_4041d6(); if (g_unwind) return; RELOAD();
/* 41396d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41396e: jmp 0x413994 */
  goto L_413994;
L_413970: /* 413970: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 413973: call 0x4138f6 */
  esp -= 4; W32(esp, 0x413978u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 413978: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413979: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 41397c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41397f: call 0x404311 */
  esp -= 4; W32(esp, 0x413984u); SPILL(); f_404311(); if (g_unwind) return; RELOAD();
/* 413984: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413985: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 413988: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41398c: call 0x41399a */
  esp -= 4; W32(esp, 0x413991u); SPILL(); f_41399a(); if (g_unwind) return; RELOAD();
/* 413991: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_413994: /* 413994: call 0x40105a */
  esp -= 4; W32(esp, 0x413999u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 413999: ret  */
  esp += 4; SPILL(); return;
}

void f_41399a(void) {
  LOAD_REGS();
L_41399a: /* 41399a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41399d: call 0x413925 */
  esp -= 4; W32(esp, 0x4139a2u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 4139a2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4139a3: ret  */
  esp += 4; SPILL(); return;
}

void f_4139a4(void) {
  LOAD_REGS();
L_4139a4: /* 4139a4: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 4139a6: push 0x43fae0 */
  { uint32_t v = 0x43fae0u; esp -= 4; W32(esp, v); }
/* 4139ab: call 0x40101f */
  esp -= 4; W32(esp, 0x4139b0u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4139b0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4139b3: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 4139b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4139b7: call 0x4138f6 */
  esp -= 4; W32(esp, 0x4139bcu); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 4139bc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4139bd: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4139c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4139c2: call 0x413ad8 */
  esp -= 4; W32(esp, 0x4139c7u); SPILL(); f_413ad8(); if (g_unwind) return; RELOAD();
/* 4139c7: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 4139ca: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 4139cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4139ce: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4139d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4139d2: call 0x413c12 */
  esp -= 4; W32(esp, 0x4139d7u); SPILL(); f_413c12(); if (g_unwind) return; RELOAD();
/* 4139d7: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 4139da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4139db: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 4139de: call 0x413b5a */
  esp -= 4; W32(esp, 0x4139e3u); SPILL(); f_413b5a(); if (g_unwind) return; RELOAD();
/* 4139e3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4139e6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4139ea: call 0x4139f8 */
  esp -= 4; W32(esp, 0x4139efu); SPILL(); f_4139f8(); if (g_unwind) return; RELOAD();
/* 4139ef: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 4139f2: call 0x40105a */
  esp -= 4; W32(esp, 0x4139f7u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4139f7: ret  */
  esp += 4; SPILL(); return;
}

void f_4139f8(void) {
  LOAD_REGS();
L_4139f8: /* 4139f8: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 4139fb: call 0x413925 */
  esp -= 4; W32(esp, 0x413a00u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 413a00: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413a01: ret  */
  esp += 4; SPILL(); return;
}

void f_413a02(void) {
  LOAD_REGS();
L_413a02: /* 413a02: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 413a04: push 0x43faf0 */
  { uint32_t v = 0x43faf0u; esp -= 4; W32(esp, v); }
/* 413a09: call 0x40101f */
  esp -= 4; W32(esp, 0x413a0eu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 413a0e: xor edi, edi */
  edi = 0;
/* 413a10: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 413a13: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 413a16: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413a19: je 0x413a3b */
  if (zf) goto L_413a3b;
L_413a1b: /* 413a1b: cmp dword ptr [ebp + 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 413a1f: jb 0x413a33 */
  if (cf) goto L_413a33;
L_413a21: /* 413a21: cmp dword ptr [ebp + 0x14], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 413a28: ja 0x413a33 */
  if ((!cf && !zf)) goto L_413a33;
L_413a2a: /* 413a2a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413a2c: je 0x413a3b */
  if (zf) goto L_413a3b;
L_413a2e: /* 413a2e: cmp ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413a31: je 0x413a3b */
  if (zf) goto L_413a3b;
L_413a33: /* 413a33: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 413a36: jmp 0x413ac8 */
  goto L_413ac8;
L_413a3b: /* 413a3b: and dword ptr [ebp + 0x14], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 413a3f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 413a42: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 413a45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413a46: call 0x4138f6 */
  esp -= 4; W32(esp, 0x413a4bu); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 413a4b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413a4c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 413a4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413a50: call 0x404333 */
  esp -= 4; W32(esp, 0x413a55u); SPILL(); f_404333(); if (g_unwind) return; RELOAD();
/* 413a55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413a56: call 0x4143a8 */
  esp -= 4; W32(esp, 0x413a5bu); SPILL(); f_4143a8(); if (g_unwind) return; RELOAD();
/* 413a5b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413a5c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413a5d: and word ptr [esi + 0xc], 0xc2f3 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xcu))); uint16_t b = (uint16_t)(0xc2f3u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0xcu), r);
  }
/* 413a63: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 413a66: test bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 413a69: je 0x413a80 */
  if (zf) goto L_413a80;
L_413a6b: /* 413a6b: or ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 413a6e: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 413a71: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 413a74: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 413a77: mov dword ptr [ebp + 0x14], 2 */
  W32((uint32_t)(ebp + 0x14u), 0x2u);
/* 413a7e: jmp 0x413aae */
  goto L_413aae;
L_413a80: /* 413a80: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 413a83: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413a85: jne 0x413aa5 */
  if (!zf) goto L_413aa5;
L_413a87: /* 413a87: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 413a8a: call 0x4010eb */
  esp -= 4; W32(esp, 0x413a8fu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 413a8f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413a90: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 413a93: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413a95: jne 0x413a9d */
  if (!zf) goto L_413a9d;
L_413a97: /* 413a97: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 413a9b: jmp 0x413abc */
  goto L_413abc;
L_413a9d: /* 413a9d: or word ptr [esi + 0xc], 0x408 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xcu))); uint16_t b = (uint16_t)(0x408u);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi + 0xcu), r);
  }
/* 413aa3: jmp 0x413aae */
  goto L_413aae;
L_413aa5: /* 413aa5: or ecx, 0x500 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x500u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 413aab: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_413aae: /* 413aae: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 413ab1: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 413ab4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 413ab7: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 413ab9: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
L_413abc: /* 413abc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 413ac0: call 0x413ace */
  esp -= 4; W32(esp, 0x413ac5u); SPILL(); f_413ace(); if (g_unwind) return; RELOAD();
/* 413ac5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_413ac8: /* 413ac8: call 0x40105a */
  esp -= 4; W32(esp, 0x413acdu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 413acd: ret  */
  esp += 4; SPILL(); return;
}

void f_413ace(void) {
  LOAD_REGS();
L_413ace: /* 413ace: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 413ad1: call 0x413925 */
  esp -= 4; W32(esp, 0x413ad6u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 413ad6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413ad7: ret  */
  esp += 4; SPILL(); return;
}

void f_413ad8(void) {
  LOAD_REGS();
L_413ad8: /* 413ad8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413ad9: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 413add: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 413ae0: call 0x415ae6 */
  esp -= 4; W32(esp, 0x413ae5u); SPILL(); f_415ae6(); if (g_unwind) return; RELOAD();
/* 413ae5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413ae7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413ae8: je 0x413b56 */
  if (zf) goto L_413b56;
L_413aea: /* 413aea: cmp esi, 0x449588 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x449588u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413af0: jne 0x413af6 */
  if (!zf) goto L_413af6;
L_413af2: /* 413af2: xor eax, eax */
  eax = 0;
/* 413af4: jmp 0x413b01 */
  goto L_413b01;
L_413af6: /* 413af6: cmp esi, 0x4495a8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4495a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413afc: jne 0x413b56 */
  if (!zf) goto L_413b56;
L_413afe: /* 413afe: xor eax, eax */
  eax = 0;
/* 413b00: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_413b01: /* 413b01: test word ptr [esi + 0xc], 0x10c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xcu))); uint16_t b = (uint16_t)(0x10cu);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 413b07: jne 0x413b56 */
  if (!zf) goto L_413b56;
L_413b09: /* 413b09: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 413b0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 413b0b: lea edi, [eax*4 + 0x44f448] */
  edi = (uint32_t)(eax*4 + 0x44f448u);
/* 413b12: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413b15: mov ebx, 0x1000 */
  ebx = 0x1000u;
/* 413b1a: jne 0x413b3c */
  if (!zf) goto L_413b3c;
L_413b1c: /* 413b1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 413b1d: call 0x4010eb */
  esp -= 4; W32(esp, 0x413b22u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 413b22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413b24: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413b25: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 413b27: jne 0x413b3c */
  if (!zf) goto L_413b3c;
L_413b29: /* 413b29: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 413b2c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 413b2e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 413b31: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 413b33: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 413b34: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 413b37: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 413b3a: jmp 0x413b49 */
  goto L_413b49;
L_413b3c: /* 413b3c: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 413b3e: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 413b41: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 413b43: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* 413b46: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
L_413b49: /* 413b49: or word ptr [esi + 0xc], 0x1102 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xcu))); uint16_t b = (uint16_t)(0x1102u);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi + 0xcu), r);
  }
/* 413b4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 413b50: xor eax, eax */
  eax = 0;
/* 413b52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 413b53: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 413b54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 413b55: ret  */
  esp += 4; SPILL(); return;
L_413b56: /* 413b56: xor eax, eax */
  eax = 0;
/* 413b58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 413b59: ret  */
  esp += 4; SPILL(); return;
}

void f_413b5a(void) {
  LOAD_REGS();
L_413b5a: /* 413b5a: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413b5f: je 0x413b83 */
  if (zf) goto L_413b83;
L_413b61: /* 413b61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413b62: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 413b66: test byte ptr [esi + 0xd], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xdu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 413b6a: je 0x413b82 */
  if (zf) goto L_413b82;
L_413b6c: /* 413b6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413b6d: call 0x404333 */
  esp -= 4; W32(esp, 0x413b72u); SPILL(); f_404333(); if (g_unwind) return; RELOAD();
/* 413b72: and byte ptr [esi + 0xd], 0xee */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xdu))); uint8_t b = (uint8_t)(0xeeu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0xdu), r);
  }
/* 413b76: and dword ptr [esi + 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x18u), r);
  }
/* 413b7a: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 413b7d: and dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 413b81: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_413b82: /* 413b82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_413b83: /* 413b83: ret  */
  esp += 4; SPILL(); return;
}

void f_413b84(void) {
  LOAD_REGS();
L_413b84: /* 413b84: test byte ptr [ecx + 0xc], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0xcu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 413b88: je 0x413b90 */
  if (zf) goto L_413b90;
L_413b8a: /* 413b8a: cmp dword ptr [ecx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413b8e: je 0x413bb4 */
  if (zf) goto L_413bb4;
L_413b90: /* 413b90: dec dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 413b93: js 0x413ba0 */
  if (sf) goto L_413ba0;
L_413b95: /* 413b95: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 413b97: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 413b99: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
/* 413b9b: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 413b9e: jmp 0x413bac */
  goto L_413bac;
L_413ba0: /* 413ba0: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 413ba3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 413ba4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413ba5: call 0x414470 */
  esp -= 4; W32(esp, 0x413baau); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 413baa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413bab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_413bac: /* 413bac: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413baf: jne 0x413bb4 */
  if (!zf) goto L_413bb4;
L_413bb1: /* 413bb1: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 413bb3: ret  */
  esp += 4; SPILL(); return;
L_413bb4: /* 413bb4: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 413bb6: ret  */
  esp += 4; SPILL(); return;
}

void f_413bb7(void) {
  LOAD_REGS();
L_413bb7: /* 413bb7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 413bb8: mov ebp, esp */
  ebp = esp;
/* 413bba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413bbb: mov esi, eax */
  esi = eax;
/* 413bbd: jmp 0x413bd2 */
  goto L_413bd2;
L_413bbf: /* 413bbf: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 413bc2: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 413bc5: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 413bc8: call 0x413b84 */
  esp -= 4; W32(esp, 0x413bcdu); SPILL(); f_413b84(); if (g_unwind) return; RELOAD();
/* 413bcd: cmp dword ptr [esi], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413bd0: je 0x413bd8 */
  if (zf) goto L_413bd8;
L_413bd2: /* 413bd2: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 413bd6: jg 0x413bbf */
  if ((!zf && sf == of)) goto L_413bbf;
L_413bd8: /* 413bd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 413bd9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 413bda: ret  */
  esp += 4; SPILL(); return;
}

void f_413bdb(void) {
  LOAD_REGS();
L_413bdb: /* 413bdb: test byte ptr [edi + 0xc], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xcu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 413bdf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 413be0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413be1: mov esi, eax */
  esi = eax;
/* 413be3: mov ebx, ecx */
  ebx = ecx;
/* 413be5: je 0x413c08 */
  if (zf) goto L_413c08;
L_413be7: /* 413be7: cmp dword ptr [edi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413beb: jne 0x413c08 */
  if (!zf) goto L_413c08;
L_413bed: /* 413bed: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 413bf1: add dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 413bf3: jmp 0x413c0f */
  goto L_413c0f;
L_413bf5: /* 413bf5: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 413bf7: dec dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 413bfb: mov ecx, edi */
  ecx = edi;
/* 413bfd: call 0x413b84 */
  esp -= 4; W32(esp, 0x413c02u); SPILL(); f_413b84(); if (g_unwind) return; RELOAD();
/* 413c02: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 413c03: cmp dword ptr [esi], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413c06: je 0x413c0f */
  if (zf) goto L_413c0f;
L_413c08: /* 413c08: cmp dword ptr [esp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 413c0d: jg 0x413bf5 */
  if ((!zf && sf == of)) goto L_413bf5;
L_413c0f: /* 413c0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 413c10: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 413c11: ret  */
  esp += 4; SPILL(); return;
}

void f_413c12(void) {
  LOAD_REGS();
L_413c12: /* 413c12: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 413c13: mov ebp, esp */
  ebp = esp;
/* 413c15: sub esp, 0x254 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 413c1b: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 413c20: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 413c23: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 413c24: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 413c27: xor eax, eax */
  eax = 0;
/* 413c29: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 413c2c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 413c2f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 413c32: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 413c35: mov bl, byte ptr [eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 413c37: xor ecx, ecx */
  ecx = 0;
/* 413c39: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 413c3b: je 0x414377 */
  if (zf) goto L_414377;
L_413c41: /* 413c41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 413c42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 413c43: mov edi, eax */
  edi = eax;
/* 413c45: jmp 0x413c4a */
  goto L_413c4a;
L_413c47: /* 413c47: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
L_413c4a: /* 413c4a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 413c4b: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 413c4f: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 413c52: jl 0x414375 */
  if ((sf != of)) goto L_414375;
L_413c58: /* 413c58: cmp bl, 0x20 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 413c5b: jl 0x413c72 */
  if ((sf != of)) goto L_413c72;
L_413c5d: /* 413c5d: cmp bl, 0x78 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 413c60: jg 0x413c72 */
  if ((!zf && sf == of)) goto L_413c72;
L_413c62: /* 413c62: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 413c65: movsx eax, byte ptr [eax + 0x43e158] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0x43e158u)));
/* 413c6c: nop  */
/* 413c6d: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 413c70: jmp 0x413c74 */
  goto L_413c74;
L_413c72: /* 413c72: xor eax, eax */
  eax = 0;
L_413c74: /* 413c74: movsx eax, byte ptr [ecx + eax*8 + 0x43e178] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + eax*8 + 0x43e178u)));
/* 413c7c: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 413c7e: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 413c81: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413c82: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 413c84: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 413c87: ja 0x414368 */
  if ((!cf && !zf)) goto L_414368;
L_413c8d: /* 413c8d: jmp dword ptr [eax*4 + 0x414388] */
  switch (R32((uint32_t)(eax*4 + 0x414388u))) {
    case 0x413c94u: goto L_413c94;
    case 0x413cb1u: goto L_413cb1;
    case 0x413cfdu: goto L_413cfd;
    case 0x413d38u: goto L_413d38;
    case 0x413d41u: goto L_413d41;
    case 0x413d79u: goto L_413d79;
    case 0x413e12u: goto L_413e12;
    case 0x413e4bu: goto L_413e4b;
    default: guest_badjump(0x413c8d, R32((uint32_t)(eax*4 + 0x414388u))); return;
  }
L_413c94: /* 413c94: xor eax, eax */
  eax = 0;
/* 413c96: or dword ptr [ebp - 0xc], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 413c9a: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 413c9d: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 413ca0: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 413ca3: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 413ca6: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 413ca9: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 413cac: jmp 0x414368 */
  goto L_414368;
L_413cb1: /* 413cb1: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 413cb4: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 413cb7: je 0x413cf4 */
  if (zf) goto L_413cf4;
L_413cb9: /* 413cb9: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 413cbc: je 0x413ceb */
  if (zf) goto L_413ceb;
L_413cbe: /* 413cbe: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 413cc1: je 0x413ce2 */
  if (zf) goto L_413ce2;
L_413cc3: /* 413cc3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 413cc4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 413cc5: je 0x413cd9 */
  if (zf) goto L_413cd9;
L_413cc7: /* 413cc7: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 413cca: jne 0x414368 */
  if (!zf) goto L_414368;
L_413cd0: /* 413cd0: or dword ptr [ebp - 8], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 413cd4: jmp 0x414368 */
  goto L_414368;
L_413cd9: /* 413cd9: or dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 413cdd: jmp 0x414368 */
  goto L_414368;
L_413ce2: /* 413ce2: or dword ptr [ebp - 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 413ce6: jmp 0x414368 */
  goto L_414368;
L_413ceb: /* 413ceb: or byte ptr [ebp - 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 413cef: jmp 0x414368 */
  goto L_414368;
L_413cf4: /* 413cf4: or dword ptr [ebp - 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 413cf8: jmp 0x414368 */
  goto L_414368;
L_413cfd: /* 413cfd: cmp bl, 0x2a */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413d00: jne 0x413d23 */
  if (!zf) goto L_413d23;
L_413d02: /* 413d02: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 413d06: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 413d09: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 413d0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 413d0e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 413d11: jge 0x414368 */
  if ((sf == of)) goto L_414368;
L_413d17: /* 413d17: or dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 413d1b: neg dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 413d1e: jmp 0x414368 */
  goto L_414368;
L_413d23: /* 413d23: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 413d26: movsx ecx, bl */
  ecx = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 413d29: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 413d2c: lea eax, [ecx + eax*2 - 0x30] */
  eax = (uint32_t)(ecx + eax*2 + 0xffffffd0u);
/* 413d30: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 413d33: jmp 0x414368 */
  goto L_414368;
L_413d38: /* 413d38: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 413d3c: jmp 0x414368 */
  goto L_414368;
L_413d41: /* 413d41: cmp bl, 0x2a */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413d44: jne 0x413d64 */
  if (!zf) goto L_413d64;
L_413d46: /* 413d46: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 413d4a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 413d4d: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 413d50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 413d52: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 413d55: jge 0x414368 */
  if ((sf == of)) goto L_414368;
L_413d5b: /* 413d5b: or dword ptr [ebp - 0xc], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 413d5f: jmp 0x414368 */
  goto L_414368;
L_413d64: /* 413d64: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 413d67: movsx ecx, bl */
  ecx = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 413d6a: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 413d6d: lea eax, [ecx + eax*2 - 0x30] */
  eax = (uint32_t)(ecx + eax*2 + 0xffffffd0u);
/* 413d71: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 413d74: jmp 0x414368 */
  goto L_414368;
L_413d79: /* 413d79: cmp bl, 0x49 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x49u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413d7c: je 0x413dac */
  if (zf) goto L_413dac;
L_413d7e: /* 413d7e: cmp bl, 0x68 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x68u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413d81: je 0x413da3 */
  if (zf) goto L_413da3;
L_413d83: /* 413d83: cmp bl, 0x6c */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x6cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413d86: je 0x413d9a */
  if (zf) goto L_413d9a;
L_413d88: /* 413d88: cmp bl, 0x77 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x77u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413d8b: jne 0x414368 */
  if (!zf) goto L_414368;
L_413d91: /* 413d91: or byte ptr [ebp - 7], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 413d95: jmp 0x414368 */
  goto L_414368;
L_413d9a: /* 413d9a: or dword ptr [ebp - 8], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 413d9e: jmp 0x414368 */
  goto L_414368;
L_413da3: /* 413da3: or dword ptr [ebp - 8], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 413da7: jmp 0x414368 */
  goto L_414368;
L_413dac: /* 413dac: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 413dae: cmp al, 0x36 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x36u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413db0: jne 0x413dc6 */
  if (!zf) goto L_413dc6;
L_413db2: /* 413db2: cmp byte ptr [edi + 1], 0x34 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1u))); uint8_t b = (uint8_t)(0x34u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413db6: jne 0x413dc6 */
  if (!zf) goto L_413dc6;
L_413db8: /* 413db8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 413db9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 413dba: or byte ptr [ebp - 7], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 413dbe: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 413dc1: jmp 0x414368 */
  goto L_414368;
L_413dc6: /* 413dc6: cmp al, 0x33 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x33u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413dc8: jne 0x413dde */
  if (!zf) goto L_413dde;
L_413dca: /* 413dca: cmp byte ptr [edi + 1], 0x32 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1u))); uint8_t b = (uint8_t)(0x32u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413dce: jne 0x413dde */
  if (!zf) goto L_413dde;
L_413dd0: /* 413dd0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 413dd1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 413dd2: and byte ptr [ebp - 7], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 413dd6: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 413dd9: jmp 0x414368 */
  goto L_414368;
L_413dde: /* 413dde: cmp al, 0x64 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x64u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413de0: je 0x414368 */
  if (zf) goto L_414368;
L_413de6: /* 413de6: cmp al, 0x69 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x69u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413de8: je 0x414368 */
  if (zf) goto L_414368;
L_413dee: /* 413dee: cmp al, 0x6f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413df0: je 0x414368 */
  if (zf) goto L_414368;
L_413df6: /* 413df6: cmp al, 0x75 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x75u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413df8: je 0x414368 */
  if (zf) goto L_414368;
L_413dfe: /* 413dfe: cmp al, 0x78 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413e00: je 0x414368 */
  if (zf) goto L_414368;
L_413e06: /* 413e06: cmp al, 0x58 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413e08: je 0x414368 */
  if (zf) goto L_414368;
L_413e0e: /* 413e0e: and dword ptr [ebp - 0x38], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
L_413e12: /* 413e12: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 413e18: and dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 413e1c: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 413e1f: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 413e24: je 0x413e39 */
  if (zf) goto L_413e39;
L_413e26: /* 413e26: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 413e29: lea esi, [ebp - 0x18] */
  esi = (uint32_t)(ebp + 0xffffffe8u);
/* 413e2c: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 413e2e: call 0x413b84 */
  esp -= 4; W32(esp, 0x413e33u); SPILL(); f_413b84(); if (g_unwind) return; RELOAD();
/* 413e33: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 413e35: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 413e36: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
L_413e39: /* 413e39: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 413e3c: lea esi, [ebp - 0x18] */
  esi = (uint32_t)(ebp + 0xffffffe8u);
/* 413e3f: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 413e41: call 0x413b84 */
  esp -= 4; W32(esp, 0x413e46u); SPILL(); f_413b84(); if (g_unwind) return; RELOAD();
/* 413e46: jmp 0x414368 */
  goto L_414368;
L_413e4b: /* 413e4b: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 413e4e: cmp eax, 0x67 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 413e51: jg 0x41409d */
  if ((!zf && sf == of)) goto L_41409d;
L_413e57: /* 413e57: cmp eax, 0x65 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 413e5a: jge 0x413ee0 */
  if ((sf == of)) goto L_413ee0;
L_413e60: /* 413e60: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 413e63: jg 0x413f41 */
  if ((!zf && sf == of)) goto L_413f41;
L_413e69: /* 413e69: je 0x41411e */
  if (zf) goto L_41411e;
L_413e6f: /* 413e6f: sub eax, 0x43 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x43u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 413e72: je 0x413f03 */
  if (zf) goto L_413f03;
L_413e78: /* 413e78: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 413e79: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 413e7a: je 0x413ed6 */
  if (zf) goto L_413ed6;
L_413e7c: /* 413e7c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 413e7d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 413e7e: je 0x413ed6 */
  if (zf) goto L_413ed6;
L_413e80: /* 413e80: sub eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 413e83: jne 0x414266 */
  if (!zf) goto L_414266;
L_413e89: /* 413e89: test word ptr [ebp - 8], 0x830 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff8u))); uint16_t b = (uint16_t)(0x830u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 413e8f: jne 0x413e95 */
  if (!zf) goto L_413e95;
L_413e91: /* 413e91: or byte ptr [ebp - 7], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
L_413e95: /* 413e95: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 413e98: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 413e9b: jne 0x413ea2 */
  if (!zf) goto L_413ea2;
L_413e9d: /* 413e9d: mov ecx, 0x7fffffff */
  ecx = 0x7fffffffu;
L_413ea2: /* 413ea2: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 413ea6: test word ptr [ebp - 8], 0x810 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff8u))); uint16_t b = (uint16_t)(0x810u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 413eac: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 413eaf: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 413eb2: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 413eb5: je 0x4140f3 */
  if (zf) goto L_4140f3;
L_413ebb: /* 413ebb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413ebd: jne 0x413ec7 */
  if (!zf) goto L_413ec7;
L_413ebf: /* 413ebf: mov eax, dword ptr [0x44dd0c] */
  eax = R32((uint32_t)(0x44dd0cu));
/* 413ec4: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
L_413ec7: /* 413ec7: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 413eca: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
/* 413ed1: jmp 0x4140e5 */
  goto L_4140e5;
L_413ed6: /* 413ed6: mov dword ptr [ebp - 0x3c], 1 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x1u);
/* 413edd: add bl, 0x20 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_413ee0: /* 413ee0: or dword ptr [ebp - 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 413ee4: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 413ee8: lea esi, [ebp - 0x254] */
  esi = (uint32_t)(ebp + 0xfffffdacu);
/* 413eee: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 413ef1: jge 0x413fe7 */
  if ((sf == of)) goto L_413fe7;
L_413ef7: /* 413ef7: mov dword ptr [ebp - 0xc], 6 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x6u);
/* 413efe: jmp 0x41402e */
  goto L_41402e;
L_413f03: /* 413f03: test word ptr [ebp - 8], 0x830 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff8u))); uint16_t b = (uint16_t)(0x830u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 413f09: jne 0x413f0f */
  if (!zf) goto L_413f0f;
L_413f0b: /* 413f0b: or byte ptr [ebp - 7], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
L_413f0f: /* 413f0f: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 413f13: test word ptr [ebp - 8], 0x810 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff8u))); uint16_t b = (uint16_t)(0x810u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 413f19: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 413f1c: je 0x413f80 */
  if (zf) goto L_413f80;
L_413f1e: /* 413f1e: movsx eax, word ptr [eax - 4] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0xfffffffcu)));
/* 413f22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413f23: lea eax, [ebp - 0x254] */
  eax = (uint32_t)(ebp + 0xfffffdacu);
/* 413f29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413f2a: call 0x402a4e */
  esp -= 4; W32(esp, 0x413f2fu); SPILL(); f_402a4e(); if (g_unwind) return; RELOAD();
/* 413f2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 413f31: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413f32: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 413f33: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 413f36: jge 0x413f90 */
  if ((sf == of)) goto L_413f90;
L_413f38: /* 413f38: mov dword ptr [ebp - 0x34], 1 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1u);
/* 413f3f: jmp 0x413f90 */
  goto L_413f90;
L_413f41: /* 413f41: sub eax, 0x5a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 413f44: je 0x413f9e */
  if (zf) goto L_413f9e;
L_413f46: /* 413f46: sub eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 413f49: je 0x413f0f */
  if (zf) goto L_413f0f;
L_413f4b: /* 413f4b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 413f4c: jne 0x414266 */
  if (!zf) goto L_414266;
L_413f52: /* 413f52: or dword ptr [ebp - 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_413f56: /* 413f56: mov dword ptr [ebp - 0x14], 0xa */
  W32((uint32_t)(ebp + 0xffffffecu), 0xau);
L_413f5d: /* 413f5d: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 413f60: mov esi, 0x8000 */
  esi = 0x8000u;
/* 413f65: test esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413f67: je 0x41418e */
  if (zf) goto L_41418e;
L_413f6d: /* 413f6d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 413f70: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 413f72: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 413f75: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 413f78: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 413f7b: jmp 0x4141b6 */
  goto L_4141b6;
L_413f80: /* 413f80: mov al, byte ptr [eax - 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xfffffffcu))) & 0xffu);
/* 413f83: mov byte ptr [ebp - 0x254], al */
  W8((uint32_t)(ebp + 0xfffffdacu), (eax & 0xffu));
/* 413f89: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_413f90: /* 413f90: lea eax, [ebp - 0x254] */
  eax = (uint32_t)(ebp + 0xfffffdacu);
/* 413f96: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 413f99: jmp 0x414266 */
  goto L_414266;
L_413f9e: /* 413f9e: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 413fa2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 413fa5: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 413fa8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413faa: je 0x413fd9 */
  if (zf) goto L_413fd9;
L_413fac: /* 413fac: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 413faf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 413fb1: je 0x413fd9 */
  if (zf) goto L_413fd9;
L_413fb3: /* 413fb3: test byte ptr [ebp - 7], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 413fb7: movsx eax, word ptr [eax] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax)));
/* 413fba: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 413fbd: je 0x413fd0 */
  if (zf) goto L_413fd0;
L_413fbf: /* 413fbf: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 413fc0: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 413fc2: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 413fc4: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
/* 413fcb: jmp 0x414263 */
  goto L_414263;
L_413fd0: /* 413fd0: and dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 413fd4: jmp 0x414263 */
  goto L_414263;
L_413fd9: /* 413fd9: mov eax, dword ptr [0x44dd08] */
  eax = R32((uint32_t)(0x44dd08u));
/* 413fde: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 413fe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 413fe2: jmp 0x414092 */
  goto L_414092;
L_413fe7: /* 413fe7: jne 0x413ff7 */
  if (!zf) goto L_413ff7;
L_413fe9: /* 413fe9: cmp bl, 0x67 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x67u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 413fec: jne 0x41402e */
  if (!zf) goto L_41402e;
L_413fee: /* 413fee: mov dword ptr [ebp - 0xc], 1 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x1u);
/* 413ff5: jmp 0x41402e */
  goto L_41402e;
L_413ff7: /* 413ff7: mov eax, 0x200 */
  eax = 0x200u;
/* 413ffc: cmp dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 413fff: jle 0x414004 */
  if ((zf || sf != of)) goto L_414004;
L_414001: /* 414001: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_414004: /* 414004: mov edi, 0xa3 */
  edi = 0xa3u;
/* 414009: cmp dword ptr [ebp - 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41400c: jle 0x41402e */
  if ((zf || sf != of)) goto L_41402e;
L_41400e: /* 41400e: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 414011: add eax, 0x15d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15du);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 414016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414017: call 0x4010eb */
  esp -= 4; W32(esp, 0x41401cu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 41401c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41401e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41401f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 414022: je 0x41402b */
  if (zf) goto L_41402b;
L_414024: /* 414024: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 414027: mov esi, eax */
  esi = eax;
/* 414029: jmp 0x41402e */
  goto L_41402e;
L_41402b: /* 41402b: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
L_41402e: /* 41402e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 414031: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 414033: push dword ptr [ebp - 0x3c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc4u)); esp -= 4; W32(esp, v); }
/* 414036: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 414039: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 41403c: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 41403f: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 414042: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 414045: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 414048: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414049: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 41404c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41404d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41404e: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 414051: call dword ptr [0x44afa0] */
  { uint32_t t = R32((uint32_t)(0x44afa0u)); esp -= 4; W32(esp, 0x414057u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 414057: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 41405a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41405d: and edi, 0x80 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 414063: je 0x414073 */
  if (zf) goto L_414073;
L_414065: /* 414065: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414069: jne 0x414073 */
  if (!zf) goto L_414073;
L_41406b: /* 41406b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41406c: call dword ptr [0x44afac] */
  { uint32_t t = R32((uint32_t)(0x44afacu)); esp -= 4; W32(esp, 0x414072u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 414072: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_414073: /* 414073: cmp bl, 0x67 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x67u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 414076: jne 0x414084 */
  if (!zf) goto L_414084;
L_414078: /* 414078: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41407a: jne 0x414084 */
  if (!zf) goto L_414084;
L_41407c: /* 41407c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41407d: call dword ptr [0x44afa4] */
  { uint32_t t = R32((uint32_t)(0x44afa4u)); esp -= 4; W32(esp, 0x414083u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 414083: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_414084: /* 414084: cmp byte ptr [esi], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 414087: jne 0x414091 */
  if (!zf) goto L_414091;
L_414089: /* 414089: or byte ptr [ebp - 7], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 41408d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41408e: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
L_414091: /* 414091: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_414092: /* 414092: call 0x402493 */
  esp -= 4; W32(esp, 0x414097u); SPILL(); hle_strlen(); RELOAD();
/* 414097: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414098: jmp 0x414263 */
  goto L_414263;
L_41409d: /* 41409d: sub eax, 0x69 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4140a0: je 0x413f52 */
  if (zf) goto L_413f52;
L_4140a6: /* 4140a6: sub eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4140a9: je 0x414164 */
  if (zf) goto L_414164;
L_4140af: /* 4140af: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4140b0: je 0x41414a */
  if (zf) goto L_41414a;
L_4140b6: /* 4140b6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4140b7: je 0x414117 */
  if (zf) goto L_414117;
L_4140b9: /* 4140b9: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4140bc: je 0x413e95 */
  if (zf) goto L_413e95;
L_4140c2: /* 4140c2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4140c3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4140c4: je 0x413f56 */
  if (zf) goto L_413f56;
L_4140ca: /* 4140ca: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4140cd: jne 0x414266 */
  if (!zf) goto L_414266;
L_4140d3: /* 4140d3: mov dword ptr [ebp - 0x30], 0x27 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x27u);
/* 4140da: jmp 0x414121 */
  goto L_414121;
L_4140dc: /* 4140dc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4140dd: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4140e1: je 0x4140e9 */
  if (zf) goto L_4140e9;
L_4140e3: /* 4140e3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4140e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_4140e5: /* 4140e5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4140e7: jne 0x4140dc */
  if (!zf) goto L_4140dc;
L_4140e9: /* 4140e9: sub eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4140ec: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4140ee: jmp 0x414263 */
  goto L_414263;
L_4140f3: /* 4140f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4140f5: jne 0x4140ff */
  if (!zf) goto L_4140ff;
L_4140f7: /* 4140f7: mov eax, dword ptr [0x44dd08] */
  eax = R32((uint32_t)(0x44dd08u));
/* 4140fc: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
L_4140ff: /* 4140ff: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 414102: jmp 0x41410b */
  goto L_41410b;
L_414104: /* 414104: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 414105: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 414108: je 0x41410f */
  if (zf) goto L_41410f;
L_41410a: /* 41410a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_41410b: /* 41410b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41410d: jne 0x414104 */
  if (!zf) goto L_414104;
L_41410f: /* 41410f: sub eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 414112: jmp 0x414263 */
  goto L_414263;
L_414117: /* 414117: mov dword ptr [ebp - 0xc], 8 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x8u);
L_41411e: /* 41411e: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
L_414121: /* 414121: test byte ptr [ebp - 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414125: mov dword ptr [ebp - 0x14], 0x10 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x10u);
/* 41412c: je 0x413f5d */
  if (zf) goto L_413f5d;
L_414132: /* 414132: mov al, byte ptr [ebp - 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffd0u))) & 0xffu);
/* 414135: add al, 0x51 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x51u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 414137: mov byte ptr [ebp - 0x1c], 0x30 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x30u);
/* 41413b: mov byte ptr [ebp - 0x1b], al */
  W8((uint32_t)(ebp + 0xffffffe5u), (eax & 0xffu));
/* 41413e: mov dword ptr [ebp - 0x20], 2 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x2u);
/* 414145: jmp 0x413f5d */
  goto L_413f5d;
L_41414a: /* 41414a: test byte ptr [ebp - 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41414e: mov dword ptr [ebp - 0x14], 8 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x8u);
/* 414155: je 0x413f5d */
  if (zf) goto L_413f5d;
L_41415b: /* 41415b: or byte ptr [ebp - 7], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 41415f: jmp 0x413f5d */
  goto L_413f5d;
L_414164: /* 414164: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 414168: test byte ptr [ebp - 8], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41416c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 41416f: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 414172: je 0x41417d */
  if (zf) goto L_41417d;
L_414174: /* 414174: mov cx, word ptr [ebp - 0x18] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe8u))) & 0xffffu);
/* 414178: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 41417b: jmp 0x414182 */
  goto L_414182;
L_41417d: /* 41417d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 414180: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_414182: /* 414182: mov dword ptr [ebp - 0x34], 1 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1u);
/* 414189: jmp 0x414355 */
  goto L_414355;
L_41418e: /* 41418e: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 414192: test bl, 0x20 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414195: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 414198: je 0x4141ac */
  if (zf) goto L_4141ac;
L_41419a: /* 41419a: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41419d: je 0x4141a6 */
  if (zf) goto L_4141a6;
L_41419f: /* 41419f: movsx eax, word ptr [eax - 4] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0xfffffffcu)));
L_4141a3: /* 4141a3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4141a4: jmp 0x4141b6 */
  goto L_4141b6;
L_4141a6: /* 4141a6: movzx eax, word ptr [eax - 4] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0xfffffffcu)));
/* 4141aa: jmp 0x4141a3 */
  goto L_4141a3;
L_4141ac: /* 4141ac: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4141af: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 4141b2: jne 0x4141a3 */
  if (!zf) goto L_4141a3;
L_4141b4: /* 4141b4: xor edx, edx */
  edx = 0;
L_4141b6: /* 4141b6: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4141b9: je 0x4141d0 */
  if (zf) goto L_4141d0;
L_4141bb: /* 4141bb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4141bd: jg 0x4141d0 */
  if ((!zf && sf == of)) goto L_4141d0;
L_4141bf: /* 4141bf: jl 0x4141c5 */
  if ((sf != of)) goto L_4141c5;
L_4141c1: /* 4141c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 4141c3: jae 0x4141d0 */
  if (!cf) goto L_4141d0;
L_4141c5: /* 4141c5: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4141c7: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 4141ca: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 4141cc: or byte ptr [ebp - 7], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
L_4141d0: /* 4141d0: test dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4141d3: mov ebx, eax */
  ebx = eax;
/* 4141d5: mov edi, edx */
  edi = edx;
/* 4141d7: jne 0x4141db */
  if (!zf) goto L_4141db;
L_4141d9: /* 4141d9: xor edi, edi */
  edi = 0;
L_4141db: /* 4141db: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4141df: jge 0x4141ea */
  if ((sf == of)) goto L_4141ea;
L_4141e1: /* 4141e1: mov dword ptr [ebp - 0xc], 1 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x1u);
/* 4141e8: jmp 0x4141fb */
  goto L_4141fb;
L_4141ea: /* 4141ea: and dword ptr [ebp - 8], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4141ee: mov eax, 0x200 */
  eax = 0x200u;
/* 4141f3: cmp dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4141f6: jle 0x4141fb */
  if ((zf || sf != of)) goto L_4141fb;
L_4141f8: /* 4141f8: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_4141fb: /* 4141fb: mov eax, ebx */
  eax = ebx;
/* 4141fd: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 4141ff: jne 0x414205 */
  if (!zf) goto L_414205;
L_414201: /* 414201: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
L_414205: /* 414205: lea esi, [ebp - 0x55] */
  esi = (uint32_t)(ebp + 0xffffffabu);
L_414208: /* 414208: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 41420b: dec dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41420e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 414210: jg 0x414218 */
  if ((!zf && sf == of)) goto L_414218;
L_414212: /* 414212: mov eax, ebx */
  eax = ebx;
/* 414214: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 414216: je 0x41423c */
  if (zf) goto L_41423c;
L_414218: /* 414218: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 41421b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 41421c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 41421d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41421e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41421f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414220: call 0x40233d */
  esp -= 4; W32(esp, 0x414225u); SPILL(); f_40233d(); if (g_unwind) return; RELOAD();
/* 414225: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 414228: cmp ecx, 0x39 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x39u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41422b: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 41422e: mov ebx, eax */
  ebx = eax;
/* 414230: mov edi, edx */
  edi = edx;
/* 414232: jle 0x414237 */
  if ((zf || sf != of)) goto L_414237;
L_414234: /* 414234: add ecx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_414237: /* 414237: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 414239: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 41423a: jmp 0x414208 */
  goto L_414208;
L_41423c: /* 41423c: lea eax, [ebp - 0x55] */
  eax = (uint32_t)(ebp + 0xffffffabu);
/* 41423f: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 414241: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 414242: test byte ptr [ebp - 7], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414246: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 414249: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 41424c: je 0x414266 */
  if (zf) goto L_414266;
L_41424e: /* 41424e: mov ecx, esi */
  ecx = esi;
/* 414250: cmp byte ptr [ecx], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 414253: jne 0x414259 */
  if (!zf) goto L_414259;
L_414255: /* 414255: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 414257: jne 0x414266 */
  if (!zf) goto L_414266;
L_414259: /* 414259: dec dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 41425c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 41425f: mov byte ptr [ecx], 0x30 */
  W8((uint32_t)(ecx), 0x30u);
/* 414262: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_414263: /* 414263: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_414266: /* 414266: cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41426a: jne 0x414355 */
  if (!zf) goto L_414355;
L_414270: /* 414270: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 414273: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414276: je 0x41429e */
  if (zf) goto L_41429e;
L_414278: /* 414278: test bh, 1 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41427b: je 0x414283 */
  if (zf) goto L_414283;
L_41427d: /* 41427d: mov byte ptr [ebp - 0x1c], 0x2d */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x2du);
/* 414281: jmp 0x414297 */
  goto L_414297;
L_414283: /* 414283: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414286: je 0x41428e */
  if (zf) goto L_41428e;
L_414288: /* 414288: mov byte ptr [ebp - 0x1c], 0x2b */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x2bu);
/* 41428c: jmp 0x414297 */
  goto L_414297;
L_41428e: /* 41428e: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414291: je 0x41429e */
  if (zf) goto L_41429e;
L_414293: /* 414293: mov byte ptr [ebp - 0x1c], 0x20 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x20u);
L_414297: /* 414297: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_41429e: /* 41429e: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 4142a1: sub esi, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4142a4: sub esi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4142a7: test bl, 0xc */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4142aa: jne 0x4142bd */
  if (!zf) goto L_4142bd;
L_4142ac: /* 4142ac: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4142af: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4142b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4142b3: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4142b5: call 0x413bb7 */
  esp -= 4; W32(esp, 0x4142bau); SPILL(); f_413bb7(); if (g_unwind) return; RELOAD();
/* 4142ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4142bd: /* 4142bd: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 4142c0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4142c3: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4142c6: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4142c9: call 0x413bdb */
  esp -= 4; W32(esp, 0x4142ceu); SPILL(); f_413bdb(); if (g_unwind) return; RELOAD();
/* 4142ce: test bl, 8 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4142d1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4142d2: je 0x4142e8 */
  if (zf) goto L_4142e8;
L_4142d4: /* 4142d4: test bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4142d7: jne 0x4142e8 */
  if (!zf) goto L_4142e8;
L_4142d9: /* 4142d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4142da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4142db: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 4142dd: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4142e0: call 0x413bb7 */
  esp -= 4; W32(esp, 0x4142e5u); SPILL(); f_413bb7(); if (g_unwind) return; RELOAD();
/* 4142e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4142e8: /* 4142e8: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4142ec: je 0x41432f */
  if (zf) goto L_41432f;
L_4142ee: /* 4142ee: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4142f2: jle 0x41432f */
  if ((zf || sf != of)) goto L_41432f;
L_4142f4: /* 4142f4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4142f7: mov ebx, dword ptr [ebp - 0x10] */
  ebx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4142fa: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
L_4142fd: /* 4142fd: dec dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 414300: xor eax, eax */
  eax = 0;
/* 414302: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 414305: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414306: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 414309: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41430a: call 0x402a4e */
  esp -= 4; W32(esp, 0x41430fu); SPILL(); f_402a4e(); if (g_unwind) return; RELOAD();
/* 41430f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 414310: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414311: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 414312: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 414314: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414315: jle 0x41433e */
  if ((zf || sf != of)) goto L_41433e;
L_414317: /* 414317: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 41431a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41431b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41431e: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 414321: call 0x413bdb */
  esp -= 4; W32(esp, 0x414326u); SPILL(); f_413bdb(); if (g_unwind) return; RELOAD();
/* 414326: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41432a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41432b: jne 0x4142fd */
  if (!zf) goto L_4142fd;
L_41432d: /* 41432d: jmp 0x41433e */
  goto L_41433e;
L_41432f: /* 41432f: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 414332: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 414335: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 414338: call 0x413bdb */
  esp -= 4; W32(esp, 0x41433du); SPILL(); f_413bdb(); if (g_unwind) return; RELOAD();
/* 41433d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41433e: /* 41433e: test byte ptr [ebp - 8], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414342: je 0x414355 */
  if (zf) goto L_414355;
L_414344: /* 414344: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 414347: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41434a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41434b: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 41434d: call 0x413bb7 */
  esp -= 4; W32(esp, 0x414352u); SPILL(); f_413bb7(); if (g_unwind) return; RELOAD();
/* 414352: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_414355: /* 414355: cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414359: je 0x414368 */
  if (zf) goto L_414368;
L_41435b: /* 41435b: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 41435e: call 0x401156 */
  esp -= 4; W32(esp, 0x414363u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 414363: and dword ptr [ebp - 0x2c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 414367: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_414368: /* 414368: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 41436b: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 41436d: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41436f: jne 0x413c47 */
  if (!zf) goto L_413c47;
L_414375: /* 414375: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 414376: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_414377: /* 414377: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41437a: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41437d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 414380: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 414381: call 0x4013ab */
  esp -= 4; W32(esp, 0x414386u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 414386: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 414387: ret  */
  esp += 4; SPILL(); return;
}

void f_4143a8(void) {
  LOAD_REGS();
L_4143a8: /* 4143a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4143a9: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4143ad: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 4143b0: test al, 0x83 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4143b2: je 0x4143d1 */
  if (zf) goto L_4143d1;
L_4143b4: /* 4143b4: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4143b6: je 0x4143d1 */
  if (zf) goto L_4143d1;
L_4143b8: /* 4143b8: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 4143bb: call 0x401156 */
  esp -= 4; W32(esp, 0x4143c0u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4143c0: and word ptr [esi + 0xc], 0xfbf7 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xcu))); uint16_t b = (uint16_t)(0xfbf7u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0xcu), r);
  }
/* 4143c6: xor eax, eax */
  eax = 0;
/* 4143c8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4143c9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4143cb: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4143ce: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_4143d1: /* 4143d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4143d2: ret  */
  esp += 4; SPILL(); return;
}

void f_4143d3(void) {
  LOAD_REGS();
L_4143d3: /* 4143d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4143d4: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4143d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4143d9: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4143dc: test byte ptr [esi + 0xc], 0x83 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xcu))); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4143e0: je 0x414416 */
  if (zf) goto L_414416;
L_4143e2: /* 4143e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4143e3: call 0x404333 */
  esp -= 4; W32(esp, 0x4143e8u); SPILL(); f_404333(); if (g_unwind) return; RELOAD();
/* 4143e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4143e9: mov edi, eax */
  edi = eax;
/* 4143eb: call 0x4143a8 */
  esp -= 4; W32(esp, 0x4143f0u); SPILL(); f_4143a8(); if (g_unwind) return; RELOAD();
/* 4143f0: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 4143f3: call 0x415b93 */
  esp -= 4; W32(esp, 0x4143f8u); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 4143f8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4143fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4143fd: jge 0x414404 */
  if ((sf == of)) goto L_414404;
L_4143ff: /* 4143ff: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 414402: jmp 0x414416 */
  goto L_414416;
L_414404: /* 414404: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 414407: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 414409: je 0x414416 */
  if (zf) goto L_414416;
L_41440b: /* 41440b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41440c: call 0x401156 */
  esp -= 4; W32(esp, 0x414411u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 414411: and dword ptr [esi + 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x1cu), r);
  }
/* 414415: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_414416: /* 414416: and dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 41441a: mov eax, edi */
  eax = edi;
/* 41441c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41441d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41441e: ret  */
  esp += 4; SPILL(); return;
}

void f_41441f(void) {
  LOAD_REGS();
L_41441f: /* 41441f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 414421: push 0x43fb18 */
  { uint32_t v = 0x43fb18u; esp -= 4; W32(esp, v); }
/* 414426: call 0x40101f */
  esp -= 4; W32(esp, 0x41442bu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41442b: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 41442f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 414432: test byte ptr [esi + 0xc], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xcu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414436: je 0x414445 */
  if (zf) goto L_414445;
L_414438: /* 414438: and dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0xcu), r);
  }
L_41443c: /* 41443c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 41443f: call 0x40105a */
  esp -= 4; W32(esp, 0x414444u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 414444: ret  */
  esp += 4; SPILL(); return;
L_414445: /* 414445: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414446: call 0x4138f6 */
  esp -= 4; W32(esp, 0x41444bu); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 41444b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41444c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 414450: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414451: call 0x4143d3 */
  esp -= 4; W32(esp, 0x414456u); SPILL(); f_4143d3(); if (g_unwind) return; RELOAD();
/* 414456: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414457: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 41445a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41445e: call 0x414468 */
  esp -= 4; W32(esp, 0x414463u); SPILL(); f_414468(); if (g_unwind) return; RELOAD();
/* 414463: jmp 0x41443c */
  goto L_41443c;
}

void f_414465(void) {
  LOAD_REGS();
L_414465: /* 414465: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_414468(); return;
}

void f_414468(void) {
  LOAD_REGS();
L_414468: /* 414468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414469: call 0x413925 */
  esp -= 4; W32(esp, 0x41446eu); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 41446e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41446f: ret  */
  esp += 4; SPILL(); return;
}

void f_414470(void) {
  LOAD_REGS();
L_414470: /* 414470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 414471: mov ebp, esp */
  ebp = esp;
/* 414473: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414474: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414475: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 414478: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 41447b: test al, 0x82 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x82u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41447d: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* 414480: je 0x41457c */
  if (zf) goto L_41457c;
L_414486: /* 414486: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414488: jne 0x41457c */
  if (!zf) goto L_41457c;
L_41448e: /* 41448e: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414490: je 0x4144a9 */
  if (zf) goto L_4144a9;
L_414492: /* 414492: and dword ptr [esi + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 414496: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414498: je 0x41457c */
  if (zf) goto L_41457c;
L_41449e: /* 41449e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 4144a1: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4144a4: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 4144a6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
L_4144a9: /* 4144a9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 4144ac: and dword ptr [esi + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4144b0: and dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 4144b4: and eax, 0xffffffef */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4144b7: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4144ba: test ax, 0x10c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x10cu);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4144be: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 4144c1: jne 0x4144e5 */
  if (!zf) goto L_4144e5;
L_4144c3: /* 4144c3: cmp esi, 0x449588 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x449588u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4144c9: je 0x4144d3 */
  if (zf) goto L_4144d3;
L_4144cb: /* 4144cb: cmp esi, 0x4495a8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4495a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4144d1: jne 0x4144de */
  if (!zf) goto L_4144de;
L_4144d3: /* 4144d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4144d4: call 0x415ae6 */
  esp -= 4; W32(esp, 0x4144d9u); SPILL(); f_415ae6(); if (g_unwind) return; RELOAD();
/* 4144d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4144db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4144dc: jne 0x4144e5 */
  if (!zf) goto L_4144e5;
L_4144de: /* 4144de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4144df: call 0x414589 */
  esp -= 4; W32(esp, 0x4144e4u); SPILL(); f_414589(); if (g_unwind) return; RELOAD();
/* 4144e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4144e5: /* 4144e5: test word ptr [esi + 0xc], 0x108 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xcu))); uint16_t b = (uint16_t)(0x108u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4144eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4144ec: je 0x414552 */
  if (zf) goto L_414552;
L_4144ee: /* 4144ee: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4144f1: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 4144f3: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 4144f6: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 4144f8: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 4144fb: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4144fd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4144fe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 414500: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 414503: jle 0x414512 */
  if ((zf || sf != of)) goto L_414512;
L_414505: /* 414505: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414507: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414508: call 0x41597f */
  esp -= 4; W32(esp, 0x41450du); SPILL(); f_41597f(); if (g_unwind) return; RELOAD();
/* 41450d: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 414510: jmp 0x414545 */
  goto L_414545;
L_414512: /* 414512: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414515: je 0x414530 */
  if (zf) goto L_414530;
L_414517: /* 414517: mov ecx, ebx */
  ecx = ebx;
/* 414519: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 41451c: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 414523: mov eax, ebx */
  eax = ebx;
/* 414525: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 414528: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 41452b: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 41452e: jmp 0x414535 */
  goto L_414535;
L_414530: /* 414530: mov eax, 0x449008 */
  eax = 0x449008u;
L_414535: /* 414535: test byte ptr [eax + 4], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414539: je 0x414548 */
  if (zf) goto L_414548;
L_41453b: /* 41453b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41453d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41453f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414540: call 0x415ca2 */
  esp -= 4; W32(esp, 0x414545u); SPILL(); f_415ca2(); if (g_unwind) return; RELOAD();
L_414545: /* 414545: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_414548: /* 414548: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 41454b: mov cl, byte ptr [ebp + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 41454e: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 414550: jmp 0x414566 */
  goto L_414566;
L_414552: /* 414552: xor edi, edi */
  edi = 0;
/* 414554: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 414555: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414556: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 414559: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41455a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41455b: call 0x41597f */
  esp -= 4; W32(esp, 0x414560u); SPILL(); f_41597f(); if (g_unwind) return; RELOAD();
/* 414560: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 414563: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_414566: /* 414566: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414569: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41456a: je 0x414572 */
  if (zf) goto L_414572;
L_41456c: /* 41456c: or dword ptr [esi + 0xc], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 414570: jmp 0x414582 */
  goto L_414582;
L_414572: /* 414572: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 414575: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41457a: jmp 0x414585 */
  goto L_414585;
L_41457c: /* 41457c: or eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41457f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
L_414582: /* 414582: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_414585: /* 414585: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 414586: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 414587: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 414588: ret  */
  esp += 4; SPILL(); return;
}

void f_414589(void) {
  LOAD_REGS();
L_414589: /* 414589: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 41458e: call 0x4010eb */
  esp -= 4; W32(esp, 0x414593u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 414593: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 414595: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414596: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 41459a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 41459d: je 0x4145ac */
  if (zf) goto L_4145ac;
L_41459f: /* 41459f: or dword ptr [ecx + 0xc], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 4145a3: mov dword ptr [ecx + 0x18], 0x1000 */
  W32((uint32_t)(ecx + 0x18u), 0x1000u);
/* 4145aa: jmp 0x4145bd */
  goto L_4145bd;
L_4145ac: /* 4145ac: or dword ptr [ecx + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 4145b0: lea eax, [ecx + 0x14] */
  eax = (uint32_t)(ecx + 0x14u);
/* 4145b3: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4145b6: mov dword ptr [ecx + 0x18], 2 */
  W32((uint32_t)(ecx + 0x18u), 0x2u);
L_4145bd: /* 4145bd: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 4145c0: and dword ptr [ecx + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 4145c4: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4145c6: ret  */
  esp += 4; SPILL(); return;
}

void f_4145c7(void) {
  LOAD_REGS();
L_4145c7: /* 4145c7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4145c8: mov ebp, esp */
  ebp = esp;
/* 4145ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4145cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4145cc: call 0x40137f */
  esp -= 4; W32(esp, 0x4145d1u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4145d1: mov ebx, dword ptr [eax + 0x64] */
  ebx = R32((uint32_t)(eax + 0x64u));
/* 4145d4: cmp ebx, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4145da: je 0x4145e3 */
  if (zf) goto L_4145e3;
L_4145dc: /* 4145dc: call 0x4025f2 */
  esp -= 4; W32(esp, 0x4145e1u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 4145e1: mov ebx, eax */
  ebx = eax;
L_4145e3: /* 4145e3: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4145e7: je 0x414641 */
  if (zf) goto L_414641;
L_4145e9: /* 4145e9: cmp dword ptr [ebx + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4145ed: jne 0x414602 */
  if (!zf) goto L_414602;
L_4145ef: /* 4145ef: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4145f2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4145f5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4145f8: call 0x407955 */
  esp -= 4; W32(esp, 0x4145fdu); SPILL(); f_407955(); if (g_unwind) return; RELOAD();
/* 4145fd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 414600: jmp 0x414643 */
  goto L_414643;
L_414602: /* 414602: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414603: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 414606: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414607: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_41460a: /* 41460a: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 41460d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41460e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41460f: call 0x401c2f */
  esp -= 4; W32(esp, 0x414614u); SPILL(); f_401c2f(); if (g_unwind) return; RELOAD();
/* 414614: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 414617: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* 41461a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41461b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41461c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41461d: call 0x401c2f */
  esp -= 4; W32(esp, 0x414622u); SPILL(); f_401c2f(); if (g_unwind) return; RELOAD();
/* 414622: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 414625: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 414626: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 414629: mov ecx, eax */
  ecx = eax;
/* 41462b: je 0x414638 */
  if (zf) goto L_414638;
L_41462d: /* 41462d: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414631: je 0x414638 */
  if (zf) goto L_414638;
L_414633: /* 414633: cmp dword ptr [ebp - 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414636: je 0x41460a */
  if (zf) goto L_41460a;
L_414638: /* 414638: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41463b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41463c: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41463e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41463f: jmp 0x414643 */
  goto L_414643;
L_414641: /* 414641: xor eax, eax */
  eax = 0;
L_414643: /* 414643: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 414644: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 414645: ret  */
  esp += 4; SPILL(); return;
}

void f_414646(void) {
  LOAD_REGS();
L_414646: /* 414646: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414647: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 414648: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414649: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41464a: mov edi, dword ptr [0x44b3a0] */
  edi = R32((uint32_t)(0x44b3a0u));
/* 414650: xor esi, esi */
  esi = 0;
/* 414652: xor ebx, ebx */
  ebx = 0;
L_414654: /* 414654: push dword ptr [edi + ebx*4 + 0x1c] */
  { uint32_t v = R32((uint32_t)(edi + ebx*4 + 0x1cu)); esp -= 4; W32(esp, v); }
/* 414658: call 0x402493 */
  esp -= 4; W32(esp, 0x41465du); SPILL(); hle_strlen(); RELOAD();
/* 41465d: push dword ptr [edi + ebx*4] */
  { uint32_t v = R32((uint32_t)(edi + ebx*4)); esp -= 4; W32(esp, v); }
/* 414660: mov ebp, eax */
  ebp = eax;
/* 414662: call 0x402493 */
  esp -= 4; W32(esp, 0x414667u); SPILL(); hle_strlen(); RELOAD();
/* 414667: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 414669: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 41466a: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41466d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41466e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41466f: lea esi, [eax + ebp + 2] */
  esi = (uint32_t)(eax + ebp + 0x2u);
/* 414673: jb 0x414654 */
  if (cf) goto L_414654;
L_414675: /* 414675: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 414676: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414677: call 0x4010eb */
  esp -= 4; W32(esp, 0x41467cu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 41467c: mov ebp, eax */
  ebp = eax;
/* 41467e: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 414680: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414681: je 0x4146be */
  if (zf) goto L_4146be;
L_414683: /* 414683: mov esi, ebp */
  esi = ebp;
/* 414685: xor ebx, ebx */
  ebx = 0;
L_414687: /* 414687: mov byte ptr [esi], 0x3a */
  W8((uint32_t)(esi), 0x3au);
/* 41468a: push dword ptr [edi + ebx*4] */
  { uint32_t v = R32((uint32_t)(edi + ebx*4)); esp -= 4; W32(esp, v); }
/* 41468d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41468e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41468f: call 0x404b3a */
  esp -= 4; W32(esp, 0x414694u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 414694: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414695: call 0x402493 */
  esp -= 4; W32(esp, 0x41469au); SPILL(); hle_strlen(); RELOAD();
/* 41469a: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 41469c: mov byte ptr [esi], 0x3a */
  W8((uint32_t)(esi), 0x3au);
/* 41469f: push dword ptr [edi + ebx*4 + 0x1c] */
  { uint32_t v = R32((uint32_t)(edi + ebx*4 + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4146a3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4146a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4146a5: call 0x404b3a */
  esp -= 4; W32(esp, 0x4146aau); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 4146aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4146ab: call 0x402493 */
  esp -= 4; W32(esp, 0x4146b0u); SPILL(); hle_strlen(); RELOAD();
/* 4146b0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4146b3: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4146b5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4146b6: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4146b9: jb 0x414687 */
  if (cf) goto L_414687;
L_4146bb: /* 4146bb: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
L_4146be: /* 4146be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4146bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4146c0: mov eax, ebp */
  eax = ebp;
/* 4146c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4146c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4146c4: ret  */
  esp += 4; SPILL(); return;
}

void f_4146c5(void) {
  LOAD_REGS();
L_4146c5: /* 4146c5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4146c6: mov ebp, esp */
  ebp = esp;
/* 4146c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4146c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4146ca: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4146ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4146cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4146d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4146d1: mov edi, dword ptr [0x44b3a0] */
  edi = R32((uint32_t)(0x44b3a0u));
/* 4146d7: lea esi, [edi + 0x38] */
  esi = (uint32_t)(edi + 0x38u);
/* 4146da: mov dword ptr [ebp - 8], 0xc */
  W32((uint32_t)(ebp + 0xfffffff8u), 0xcu);
L_4146e1: /* 4146e1: push dword ptr [esi + 0x30] */
  { uint32_t v = R32((uint32_t)(esi + 0x30u)); esp -= 4; W32(esp, v); }
/* 4146e4: call 0x402493 */
  esp -= 4; W32(esp, 0x4146e9u); SPILL(); hle_strlen(); RELOAD();
/* 4146e9: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4146eb: mov ebx, eax */
  ebx = eax;
/* 4146ed: call 0x402493 */
  esp -= 4; W32(esp, 0x4146f2u); SPILL(); hle_strlen(); RELOAD();
/* 4146f2: add eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4146f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4146f6: lea eax, [eax + ebx + 2] */
  eax = (uint32_t)(eax + ebx + 0x2u);
/* 4146fa: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4146fd: dec dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 414700: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414701: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 414704: jne 0x4146e1 */
  if (!zf) goto L_4146e1;
L_414706: /* 414706: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 414707: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414708: call 0x4010eb */
  esp -= 4; W32(esp, 0x41470du); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 41470d: mov esi, eax */
  esi = eax;
/* 41470f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 414711: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414712: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 414715: je 0x414752 */
  if (zf) goto L_414752;
L_414717: /* 414717: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 414719: add edi, 0x68 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 41471c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41471d: /* 41471d: mov byte ptr [esi], 0x3a */
  W8((uint32_t)(esi), 0x3au);
/* 414720: push dword ptr [edi - 0x30] */
  { uint32_t v = R32((uint32_t)(edi + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 414723: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 414724: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414725: call 0x404b3a */
  esp -= 4; W32(esp, 0x41472au); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 41472a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41472b: call 0x402493 */
  esp -= 4; W32(esp, 0x414730u); SPILL(); hle_strlen(); RELOAD();
/* 414730: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 414732: mov byte ptr [esi], 0x3a */
  W8((uint32_t)(esi), 0x3au);
/* 414735: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 414737: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 414738: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414739: call 0x404b3a */
  esp -= 4; W32(esp, 0x41473eu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 41473e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41473f: call 0x402493 */
  esp -= 4; W32(esp, 0x414744u); SPILL(); hle_strlen(); RELOAD();
/* 414744: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 414747: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 414749: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 41474c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 41474d: jne 0x41471d */
  if (!zf) goto L_41471d;
L_41474f: /* 41474f: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
L_414752: /* 414752: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 414755: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 414756: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 414757: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 414758: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 414759: ret  */
  esp += 4; SPILL(); return;
}

void f_41475a(void) {
  LOAD_REGS();
L_41475a: /* 41475a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41475b: mov ebp, esp */
  ebp = esp;
/* 41475d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 414760: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414761: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414762: mov esi, dword ptr [0x44b3a0] */
  esi = R32((uint32_t)(0x44b3a0u));
/* 414768: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414769: xor edi, edi */
  edi = 0;
/* 41476b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
L_41476e: /* 41476e: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 414771: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 414774: push dword ptr [ebx + esi + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebx + esi + 0x1cu)); esp -= 4; W32(esp, v); }
/* 414778: call 0x402493 */
  esp -= 4; W32(esp, 0x41477du); SPILL(); hle_strlen(); RELOAD();
/* 41477d: push dword ptr [ebx + esi] */
  { uint32_t v = R32((uint32_t)(ebx + esi)); esp -= 4; W32(esp, v); }
/* 414780: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 414783: call 0x402493 */
  esp -= 4; W32(esp, 0x414788u); SPILL(); hle_strlen(); RELOAD();
/* 414788: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41478a: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41478d: cmp dword ptr [ebp - 4], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 414791: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414792: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414793: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 414796: lea edi, [eax + ecx + 2] */
  edi = (uint32_t)(eax + ecx + 0x2u);
/* 41479a: jb 0x41476e */
  if (cf) goto L_41476e;
L_41479c: /* 41479c: lea eax, [esi + 0x38] */
  eax = (uint32_t)(esi + 0x38u);
/* 41479f: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 4147a2: mov dword ptr [ebp - 8], 0xc */
  W32((uint32_t)(ebp + 0xfffffff8u), 0xcu);
L_4147a9: /* 4147a9: mov ebx, dword ptr [ebp - 0xc] */
  ebx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4147ac: push dword ptr [ebx + 0x30] */
  { uint32_t v = R32((uint32_t)(ebx + 0x30u)); esp -= 4; W32(esp, v); }
/* 4147af: call 0x402493 */
  esp -= 4; W32(esp, 0x4147b4u); SPILL(); hle_strlen(); RELOAD();
/* 4147b4: push dword ptr [ebx] */
  { uint32_t v = R32((uint32_t)(ebx)); esp -= 4; W32(esp, v); }
/* 4147b6: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4147b9: call 0x402493 */
  esp -= 4; W32(esp, 0x4147beu); SPILL(); hle_strlen(); RELOAD();
/* 4147be: add dword ptr [ebp - 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 4147c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4147c3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4147c4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4147c7: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4147c9: dec dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4147cc: lea edi, [eax + ecx + 2] */
  edi = (uint32_t)(eax + ecx + 0x2u);
/* 4147d0: jne 0x4147a9 */
  if (!zf) goto L_4147a9;
L_4147d2: /* 4147d2: push dword ptr [esi + 0x98] */
  { uint32_t v = R32((uint32_t)(esi + 0x98u)); esp -= 4; W32(esp, v); }
/* 4147d8: call 0x402493 */
  esp -= 4; W32(esp, 0x4147ddu); SPILL(); hle_strlen(); RELOAD();
/* 4147dd: push dword ptr [esi + 0x9c] */
  { uint32_t v = R32((uint32_t)(esi + 0x9cu)); esp -= 4; W32(esp, v); }
/* 4147e3: mov ebx, eax */
  ebx = eax;
/* 4147e5: call 0x402493 */
  esp -= 4; W32(esp, 0x4147eau); SPILL(); hle_strlen(); RELOAD();
/* 4147ea: push dword ptr [esi + 0xa0] */
  { uint32_t v = R32((uint32_t)(esi + 0xa0u)); esp -= 4; W32(esp, v); }
/* 4147f0: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4147f2: lea edi, [eax + ebx + 2] */
  edi = (uint32_t)(eax + ebx + 0x2u);
/* 4147f6: call 0x402493 */
  esp -= 4; W32(esp, 0x4147fbu); SPILL(); hle_strlen(); RELOAD();
/* 4147fb: push dword ptr [esi + 0xa4] */
  { uint32_t v = R32((uint32_t)(esi + 0xa4u)); esp -= 4; W32(esp, v); }
/* 414801: lea edi, [edi + eax + 1] */
  edi = (uint32_t)(edi + eax + 0x1u);
/* 414805: call 0x402493 */
  esp -= 4; W32(esp, 0x41480au); SPILL(); hle_strlen(); RELOAD();
/* 41480a: push dword ptr [esi + 0xa8] */
  { uint32_t v = R32((uint32_t)(esi + 0xa8u)); esp -= 4; W32(esp, v); }
/* 414810: lea edi, [edi + eax + 1] */
  edi = (uint32_t)(edi + eax + 0x1u);
/* 414814: call 0x402493 */
  esp -= 4; W32(esp, 0x414819u); SPILL(); hle_strlen(); RELOAD();
/* 414819: lea eax, [edi + eax + 1] */
  eax = (uint32_t)(edi + eax + 0x1u);
/* 41481d: add eax, 0xb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 414822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414823: call 0x4010eb */
  esp -= 4; W32(esp, 0x414828u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 414828: mov ebx, eax */
  ebx = eax;
/* 41482a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41482d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41482f: je 0x414986 */
  if (zf) goto L_414986;
L_414835: /* 414835: push 0xb8 */
  { uint32_t v = 0xb8u; esp -= 4; W32(esp, v); }
/* 41483a: push dword ptr [0x44b3a0] */
  { uint32_t v = R32((uint32_t)(0x44b3a0u)); esp -= 4; W32(esp, v); }
/* 414840: lea edi, [ebx + 0xb8] */
  edi = (uint32_t)(ebx + 0xb8u);
/* 414846: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414847: call 0x40126b */
  esp -= 4; W32(esp, 0x41484cu); SPILL(); hle_memcpy(); RELOAD();
/* 41484c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 414850: lea eax, [esi + 0x1c] */
  eax = (uint32_t)(esi + 0x1cu);
/* 414853: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* 414856: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 414859: sub dword ptr [ebp - 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41485c: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_41485f: /* 41485f: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 414862: mov dword ptr [ebx + eax*4], edi */
  W32((uint32_t)(ebx + eax*4), edi);
/* 414865: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 414868: push dword ptr [eax - 0x1c] */
  { uint32_t v = R32((uint32_t)(eax + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 41486b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41486c: call 0x404b3a */
  esp -= 4; W32(esp, 0x414871u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 414871: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414872: call 0x402493 */
  esp -= 4; W32(esp, 0x414877u); SPILL(); hle_strlen(); RELOAD();
/* 414877: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 41487a: lea edi, [edi + eax + 1] */
  edi = (uint32_t)(edi + eax + 0x1u);
/* 41487e: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 414881: mov dword ptr [ecx + eax], edi */
  W32((uint32_t)(ecx + eax), edi);
/* 414884: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 414886: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414887: call 0x404b3a */
  esp -= 4; W32(esp, 0x41488cu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 41488c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41488d: call 0x402493 */
  esp -= 4; W32(esp, 0x414892u); SPILL(); hle_strlen(); RELOAD();
/* 414892: add dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 414896: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 414899: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41489c: cmp dword ptr [ebp - 4], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4148a0: lea edi, [edi + eax + 1] */
  edi = (uint32_t)(edi + eax + 0x1u);
/* 4148a4: jb 0x41485f */
  if (cf) goto L_41485f;
L_4148a6: /* 4148a6: lea eax, [ebx + 0x68] */
  eax = (uint32_t)(ebx + 0x68u);
/* 4148a9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4148ac: lea eax, [esi + 0x38] */
  eax = (uint32_t)(esi + 0x38u);
/* 4148af: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 4148b2: mov dword ptr [ebp - 0x10], 0xc */
  W32((uint32_t)(ebp + 0xfffffff0u), 0xcu);
/* 4148b9: jmp 0x4148be */
  goto L_4148be;
L_4148bb: /* 4148bb: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
L_4148be: /* 4148be: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4148c1: mov dword ptr [ecx + eax], edi */
  W32((uint32_t)(ecx + eax), edi);
/* 4148c4: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 4148c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4148c7: call 0x404b3a */
  esp -= 4; W32(esp, 0x4148ccu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 4148cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4148cd: call 0x402493 */
  esp -= 4; W32(esp, 0x4148d2u); SPILL(); hle_strlen(); RELOAD();
/* 4148d2: lea edi, [edi + eax + 1] */
  edi = (uint32_t)(edi + eax + 0x1u);
/* 4148d6: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4148d9: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4148db: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4148de: push dword ptr [eax + 0x30] */
  { uint32_t v = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, v); }
/* 4148e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4148e2: call 0x404b3a */
  esp -= 4; W32(esp, 0x4148e7u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 4148e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4148e8: call 0x402493 */
  esp -= 4; W32(esp, 0x4148edu); SPILL(); hle_strlen(); RELOAD();
/* 4148ed: add dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4148f1: add dword ptr [ebp - 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4148f5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4148f8: dec dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 4148fb: lea edi, [edi + eax + 1] */
  edi = (uint32_t)(edi + eax + 0x1u);
/* 4148ff: jne 0x4148bb */
  if (!zf) goto L_4148bb;
L_414901: /* 414901: mov dword ptr [ebx + 0x98], edi */
  W32((uint32_t)(ebx + 0x98u), edi);
/* 414907: push dword ptr [esi + 0x98] */
  { uint32_t v = R32((uint32_t)(esi + 0x98u)); esp -= 4; W32(esp, v); }
/* 41490d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41490e: call 0x404b3a */
  esp -= 4; W32(esp, 0x414913u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 414913: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414914: call 0x402493 */
  esp -= 4; W32(esp, 0x414919u); SPILL(); hle_strlen(); RELOAD();
/* 414919: lea edi, [edi + eax + 1] */
  edi = (uint32_t)(edi + eax + 0x1u);
/* 41491d: mov dword ptr [ebx + 0x9c], edi */
  W32((uint32_t)(ebx + 0x9cu), edi);
/* 414923: push dword ptr [esi + 0x9c] */
  { uint32_t v = R32((uint32_t)(esi + 0x9cu)); esp -= 4; W32(esp, v); }
/* 414929: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41492a: call 0x404b3a */
  esp -= 4; W32(esp, 0x41492fu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 41492f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414930: call 0x402493 */
  esp -= 4; W32(esp, 0x414935u); SPILL(); hle_strlen(); RELOAD();
/* 414935: lea edi, [edi + eax + 1] */
  edi = (uint32_t)(edi + eax + 0x1u);
/* 414939: mov dword ptr [ebx + 0xa0], edi */
  W32((uint32_t)(ebx + 0xa0u), edi);
/* 41493f: push dword ptr [esi + 0xa0] */
  { uint32_t v = R32((uint32_t)(esi + 0xa0u)); esp -= 4; W32(esp, v); }
/* 414945: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414946: call 0x404b3a */
  esp -= 4; W32(esp, 0x41494bu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 41494b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41494c: call 0x402493 */
  esp -= 4; W32(esp, 0x414951u); SPILL(); hle_strlen(); RELOAD();
/* 414951: lea edi, [edi + eax + 1] */
  edi = (uint32_t)(edi + eax + 0x1u);
/* 414955: mov dword ptr [ebx + 0xa4], edi */
  W32((uint32_t)(ebx + 0xa4u), edi);
/* 41495b: push dword ptr [esi + 0xa4] */
  { uint32_t v = R32((uint32_t)(esi + 0xa4u)); esp -= 4; W32(esp, v); }
/* 414961: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414962: call 0x404b3a */
  esp -= 4; W32(esp, 0x414967u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 414967: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414968: call 0x402493 */
  esp -= 4; W32(esp, 0x41496du); SPILL(); hle_strlen(); RELOAD();
/* 41496d: lea eax, [edi + eax + 1] */
  eax = (uint32_t)(edi + eax + 0x1u);
/* 414971: mov dword ptr [ebx + 0xa8], eax */
  W32((uint32_t)(ebx + 0xa8u), eax);
/* 414977: push dword ptr [esi + 0xa8] */
  { uint32_t v = R32((uint32_t)(esi + 0xa8u)); esp -= 4; W32(esp, v); }
/* 41497d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41497e: call 0x404b3a */
  esp -= 4; W32(esp, 0x414983u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 414983: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_414986: /* 414986: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 414987: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 414988: mov eax, ebx */
  eax = ebx;
/* 41498a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41498b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41498c: ret  */
  esp += 4; SPILL(); return;
}

void f_4149ad(void) {
  LOAD_REGS();
L_4149ad: /* 4149ad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4149ae: mov ebp, esp */
  ebp = esp;
/* 4149b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4149b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4149b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4149b3: mov esi, edx */
  esi = edx;
/* 4149b5: xor edx, edx */
  edx = 0;
/* 4149b7: cmp dword ptr [ebp + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4149ba: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 4149bd: je 0x4149f4 */
  if (zf) goto L_4149f4;
L_4149bf: /* 4149bf: cmp dword ptr [ecx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4149c2: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 4149c4: jbe 0x4149df */
  if ((cf | zf)) goto L_4149df;
L_4149c6: /* 4149c6: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4149c8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4149c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4149ca: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x4149ca);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4149cc: add dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4149cf: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 4149d1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4149d2: dec dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx), r);
  }
/* 4149d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4149d6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4149d8: jle 0x4149df */
  if ((zf || sf != of)) goto L_4149df;
L_4149da: /* 4149da: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4149dd: ja 0x4149c6 */
  if ((!cf && !zf)) goto L_4149c6;
L_4149df: /* 4149df: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4149e1: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 4149e3: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_4149e4: /* 4149e4: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4149e6: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4149e8: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 4149ea: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 4149eb: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 4149ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4149ee: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4149f0: jb 0x4149e4 */
  if (cf) goto L_4149e4;
L_4149f2: /* 4149f2: jmp 0x414a22 */
  goto L_414a22;
L_4149f4: /* 4149f4: cmp esi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4149f6: jae 0x414a20 */
  if (!cf) goto L_414a20;
L_4149f8: /* 4149f8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 4149f9: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 4149fc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4149fe: je 0x414a17 */
  if (zf) goto L_414a17;
L_414a00: /* 414a00: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 414a02: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 414a03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 414a04: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x414a04);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 414a06: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 414a08: add dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 414a0b: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 414a0e: mov byte ptr [esi + ebx], dl */
  W8((uint32_t)(esi + ebx), (edx & 0xffu));
/* 414a11: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 414a12: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414a15: jne 0x414a00 */
  if (!zf) goto L_414a00;
L_414a17: /* 414a17: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 414a1a: add dword ptr [edi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
/* 414a1c: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 414a1e: jmp 0x414a22 */
  goto L_414a22;
L_414a20: /* 414a20: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_414a22: /* 414a22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 414a23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 414a24: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 414a25: ret  */
  esp += 4; SPILL(); return;
}

void f_414a26(void) {
  LOAD_REGS();
  goto L_414a26;
L_41498d: /* 41498d: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414990: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414991: mov esi, edx */
  esi = edx;
/* 414993: je 0x4149ab */
  if (zf) goto L_4149ab;
L_414995: /* 414995: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_414996: /* 414996: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 414998: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41499a: je 0x4149aa */
  if (zf) goto L_4149aa;
L_41499c: /* 41499c: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 41499e: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 4149a0: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
/* 4149a2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4149a3: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 4149a5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4149a8: jne 0x414996 */
  if (!zf) goto L_414996;
L_4149aa: /* 4149aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4149ab: /* 4149ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4149ac: ret  */
  esp += 4; SPILL(); return;
L_414a26: /* 414a26: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 414a27: mov ebp, esp */
  ebp = esp;
/* 414a29: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 414a2c: cmp eax, 0x5a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414a2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414a30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414a31: mov edi, ecx */
  edi = ecx;
/* 414a33: mov esi, edx */
  esi = edx;
/* 414a35: jg 0x414b31 */
  if ((!zf && sf == of)) goto L_414b31;
L_414a3b: /* 414a3b: je 0x414bea */
  if (zf) goto L_414bea;
L_414a41: /* 414a41: cmp eax, 0x4d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414a44: jg 0x414ab9 */
  if ((!zf && sf == of)) goto L_414ab9;
L_414a46: /* 414a46: je 0x414aaf */
  if (zf) goto L_414aaf;
L_414a48: /* 414a48: sub eax, 0x25 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x25u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 414a4b: je 0x414aa2 */
  if (zf) goto L_414aa2;
L_414a4d: /* 414a4d: sub eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 414a50: je 0x414a96 */
  if (zf) goto L_414a96;
L_414a52: /* 414a52: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 414a53: je 0x414a81 */
  if (zf) goto L_414a81;
L_414a55: /* 414a55: sub eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 414a58: je 0x414a77 */
  if (zf) goto L_414a77;
L_414a5a: /* 414a5a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 414a5b: jne 0x414aab */
  if (!zf) goto L_414aab;
L_414a5d: /* 414a5d: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 414a60: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 414a61: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 414a63: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414a64: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x414a64);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 414a66: mov eax, edx */
  eax = edx;
/* 414a68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 414a6a: jne 0x414bc9 */
  if (!zf) goto L_414bc9;
L_414a70: /* 414a70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 414a71: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 414a72: jmp 0x414bc9 */
  goto L_414bc9;
L_414a77: /* 414a77: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 414a7a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 414a7d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 414a7f: jmp 0x414ae6 */
  goto L_414ae6;
L_414a81: /* 414a81: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 414a84: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 414a87: mov edx, dword ptr [esi + edx*4 + 0x68] */
  edx = R32((uint32_t)(esi + edx*4 + 0x68u));
L_414a8b: /* 414a8b: mov ecx, edi */
  ecx = edi;
/* 414a8d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 414a8e: mov eax, ebx */
  eax = ebx;
/* 414a90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 414a91: jmp 0x414c60 */
  goto L_414c60;
L_414a96: /* 414a96: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 414a99: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 414a9c: mov edx, dword ptr [esi + edx*4 + 0x1c] */
  edx = R32((uint32_t)(esi + edx*4 + 0x1cu));
/* 414aa0: jmp 0x414a8b */
  goto L_414a8b;
L_414aa2: /* 414aa2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 414aa4: mov byte ptr [eax], 0x25 */
  W8((uint32_t)(eax), 0x25u);
/* 414aa7: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* 414aa9: dec dword ptr [ebx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebx), r);
  }
L_414aab: /* 414aab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 414aac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 414aad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 414aae: ret  */
  esp += 4; SPILL(); return;
L_414aaf: /* 414aaf: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 414ab2: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 414ab5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 414ab7: jmp 0x414ae6 */
  goto L_414ae6;
L_414ab9: /* 414ab9: sub eax, 0x53 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x53u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 414abc: je 0x414b28 */
  if (zf) goto L_414b28;
L_414abe: /* 414abe: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 414abf: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 414ac0: je 0x414b02 */
  if (zf) goto L_414b02;
L_414ac2: /* 414ac2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 414ac3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 414ac4: je 0x414af1 */
  if (zf) goto L_414af1;
L_414ac6: /* 414ac6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 414ac7: je 0x414b9e */
  if (zf) goto L_414b9e;
L_414acd: /* 414acd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 414ace: jne 0x414aab */
  if (!zf) goto L_414aab;
L_414ad0: /* 414ad0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 414ad3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 414ad4: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 414ad6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414ad7: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x414ad7);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 414ad9: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 414adc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 414ade: add eax, 0x13 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 414ae1: imul eax, eax, 0x64 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x64u);
  eax = (uint32_t)r;
  }
/* 414ae4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_414ae6: /* 414ae6: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
L_414ae7: /* 414ae7: mov ecx, ebx */
  ecx = ebx;
/* 414ae9: call 0x4149ad */
  esp -= 4; W32(esp, 0x414aeeu); SPILL(); f_4149ad(); if (g_unwind) return; RELOAD();
/* 414aee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414aef: jmp 0x414aab */
  goto L_414aab;
L_414af1: /* 414af1: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 414af4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 414af6: jne 0x414afd */
  if (!zf) goto L_414afd;
L_414af8: /* 414af8: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 414afa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414afb: jmp 0x414b05 */
  goto L_414b05;
L_414afd: /* 414afd: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 414b00: jmp 0x414b05 */
  goto L_414b05;
L_414b02: /* 414b02: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
L_414b05: /* 414b05: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 414b08: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414b0a: jge 0x414b13 */
  if ((sf == of)) goto L_414b13;
L_414b0c: /* 414b0c: xor eax, eax */
  eax = 0;
/* 414b0e: jmp 0x414bc9 */
  goto L_414bc9;
L_414b13: /* 414b13: mov eax, esi */
  eax = esi;
/* 414b15: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 414b17: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 414b18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 414b19: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x414b19);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 414b1b: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414b1d: jl 0x414bc9 */
  if ((sf != of)) goto L_414bc9;
L_414b23: /* 414b23: jmp 0x414bc8 */
  goto L_414bc8;
L_414b28: /* 414b28: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 414b2b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 414b2d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 414b2f: jmp 0x414ae6 */
  goto L_414ae6;
L_414b31: /* 414b31: cmp eax, 0x6d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414b34: jg 0x414bd3 */
  if ((!zf && sf == of)) goto L_414bd3;
L_414b3a: /* 414b3a: je 0x414bc5 */
  if (zf) goto L_414bc5;
L_414b40: /* 414b40: sub eax, 0x61 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 414b43: je 0x414bb7 */
  if (zf) goto L_414bb7;
L_414b45: /* 414b45: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 414b46: je 0x414ba8 */
  if (zf) goto L_414ba8;
L_414b48: /* 414b48: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 414b49: je 0x414b6f */
  if (zf) goto L_414b6f;
L_414b4b: /* 414b4b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 414b4c: je 0x414b62 */
  if (zf) goto L_414b62;
L_414b4e: /* 414b4e: sub eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 414b51: jne 0x414aab */
  if (!zf) goto L_414aab;
L_414b57: /* 414b57: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 414b5a: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 414b5d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 414b5e: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 414b60: jmp 0x414ae6 */
  goto L_414ae6;
L_414b62: /* 414b62: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 414b65: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 414b68: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 414b6a: jmp 0x414ae6 */
  goto L_414ae6;
L_414b6f: /* 414b6f: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414b73: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 414b76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414b77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414b78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414b79: je 0x414b7f */
  if (zf) goto L_414b7f;
L_414b7b: /* 414b7b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 414b7d: jmp 0x414b81 */
  goto L_414b81;
L_414b7f: /* 414b7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_414b81: /* 414b81: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 414b84: call 0x414c66 */
  esp -= 4; W32(esp, 0x414b89u); SPILL(); f_414c66(); if (g_unwind) return; RELOAD();
/* 414b89: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 414b8c: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414b8f: je 0x414aab */
  if (zf) goto L_414aab;
L_414b95: /* 414b95: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 414b97: mov byte ptr [eax], 0x20 */
  W8((uint32_t)(eax), 0x20u);
/* 414b9a: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* 414b9c: dec dword ptr [ebx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebx), r);
  }
L_414b9e: /* 414b9e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 414ba1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414ba2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414ba3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414ba4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 414ba6: jmp 0x414c21 */
  goto L_414c21;
L_414ba8: /* 414ba8: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 414bab: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 414bae: mov edx, dword ptr [esi + edx*4 + 0x38] */
  edx = R32((uint32_t)(esi + edx*4 + 0x38u));
/* 414bb2: jmp 0x414a8b */
  goto L_414a8b;
L_414bb7: /* 414bb7: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 414bba: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 414bbd: mov edx, dword ptr [esi + edx*4] */
  edx = R32((uint32_t)(esi + edx*4));
/* 414bc0: jmp 0x414a8b */
  goto L_414a8b;
L_414bc5: /* 414bc5: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
L_414bc8: /* 414bc8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_414bc9: /* 414bc9: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
L_414bcc: /* 414bcc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 414bce: jmp 0x414ae6 */
  goto L_414ae6;
L_414bd3: /* 414bd3: sub eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 414bd6: je 0x414c43 */
  if (zf) goto L_414c43;
L_414bd8: /* 414bd8: sub eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 414bdb: je 0x414c35 */
  if (zf) goto L_414c35;
L_414bdd: /* 414bdd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 414bde: je 0x414c13 */
  if (zf) goto L_414c13;
L_414be0: /* 414be0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 414be1: je 0x414c03 */
  if (zf) goto L_414c03;
L_414be3: /* 414be3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 414be4: jne 0x414aab */
  if (!zf) goto L_414aab;
L_414bea: /* 414bea: call 0x403ad5 */
  esp -= 4; W32(esp, 0x414befu); SPILL(); f_403ad5(); if (g_unwind) return; RELOAD();
/* 414bef: xor edx, edx */
  edx = 0;
/* 414bf1: cmp dword ptr [esi + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414bf4: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 414bf7: mov edx, dword ptr [edx*4 + 0x44a800] */
  edx = R32((uint32_t)(edx*4 + 0x44a800u));
/* 414bfe: jmp 0x414a8b */
  goto L_414a8b;
L_414c03: /* 414c03: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 414c06: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 414c09: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 414c0a: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 414c0c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414c0d: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x414c0d);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 414c0f: mov eax, edx */
  eax = edx;
/* 414c11: jmp 0x414bcc */
  goto L_414bcc;
L_414c13: /* 414c13: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414c17: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 414c1a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414c1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414c1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414c1d: je 0x414c31 */
  if (zf) goto L_414c31;
L_414c1f: /* 414c1f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_414c21: /* 414c21: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 414c24: call 0x414c66 */
  esp -= 4; W32(esp, 0x414c29u); SPILL(); f_414c66(); if (g_unwind) return; RELOAD();
/* 414c29: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 414c2c: jmp 0x414aab */
  goto L_414aab;
L_414c31: /* 414c31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 414c33: jmp 0x414c21 */
  goto L_414c21;
L_414c35: /* 414c35: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 414c38: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 414c3b: xor edx, edx */
  edx = 0;
/* 414c3d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 414c3e: jmp 0x414ae7 */
  goto L_414ae7;
L_414c43: /* 414c43: cmp dword ptr [esi + 8], 0xb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414c47: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 414c4a: mov ecx, edi */
  ecx = edi;
/* 414c4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 414c4d: mov eax, ebx */
  eax = ebx;
/* 414c4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 414c50: jg 0x414c5a */
  if ((!zf && sf == of)) goto L_414c5a;
L_414c52: /* 414c52: mov edx, dword ptr [edx + 0x98] */
  edx = R32((uint32_t)(edx + 0x98u));
/* 414c58: jmp 0x414c60 */
  goto L_414c60;
L_414c5a: /* 414c5a: mov edx, dword ptr [edx + 0x9c] */
  edx = R32((uint32_t)(edx + 0x9cu));
L_414c60: /* 414c60: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 414c61: jmp 0x41498d */
  goto L_41498d;
}

void f_414c66(void) {
  LOAD_REGS();
L_414c66: /* 414c66: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 414c68: push 0x43fb70 */
  { uint32_t v = 0x43fb70u; esp -= 4; W32(esp, v); }
/* 414c6d: call 0x40101f */
  esp -= 4; W32(esp, 0x414c72u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 414c72: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 414c75: xor esi, esi */
  esi = 0;
/* 414c77: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 414c79: je 0x414c91 */
  if (zf) goto L_414c91;
L_414c7b: /* 414c7b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 414c7c: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 414c7f: je 0x414c89 */
  if (zf) goto L_414c89;
L_414c81: /* 414c81: mov ebx, dword ptr [eax + 0xa8] */
  ebx = R32((uint32_t)(eax + 0xa8u));
/* 414c87: jmp 0x414c9a */
  goto L_414c9a;
L_414c89: /* 414c89: mov ebx, dword ptr [eax + 0xa4] */
  ebx = R32((uint32_t)(eax + 0xa4u));
/* 414c8f: jmp 0x414c9a */
  goto L_414c9a;
L_414c91: /* 414c91: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 414c94: mov ebx, dword ptr [eax + 0xa0] */
  ebx = R32((uint32_t)(eax + 0xa0u));
L_414c9a: /* 414c9a: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 414c9d: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 414ca0: cmp dword ptr [edx + 0xb0], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xb0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414ca7: je 0x414dbe */
  if (zf) goto L_414dbe;
L_414cad: /* 414cad: cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414cb1: mov ecx, dword ptr [0x43912c] */
  ecx = R32((uint32_t)(0x43912cu));
/* 414cb7: jne 0x414cbf */
  if (!zf) goto L_414cbf;
L_414cb9: /* 414cb9: mov ecx, dword ptr [0x439128] */
  ecx = R32((uint32_t)(0x439128u));
L_414cbf: /* 414cbf: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 414cc2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 414cc5: mov di, word ptr [eax + 0x14] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x14u))) & 0xffffu);
/* 414cc9: add di, 0x76c */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0x76cu);
  uint16_t r = (uint16_t)(a + b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 414cce: mov word ptr [ebp - 0x30], di */
  W16((uint32_t)(ebp + 0xffffffd0u), (edi & 0xffffu));
/* 414cd2: mov di, word ptr [eax + 0x10] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x10u))) & 0xffffu);
/* 414cd6: inc di */
  { uint16_t a = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 414cd8: mov word ptr [ebp - 0x2e], di */
  W16((uint32_t)(ebp + 0xffffffd2u), (edi & 0xffffu));
/* 414cdc: mov di, word ptr [eax + 0xc] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
/* 414ce0: mov word ptr [ebp - 0x2a], di */
  W16((uint32_t)(ebp + 0xffffffd6u), (edi & 0xffffu));
/* 414ce4: mov di, word ptr [eax + 8] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 414ce8: mov word ptr [ebp - 0x28], di */
  W16((uint32_t)(ebp + 0xffffffd8u), (edi & 0xffffu));
/* 414cec: mov di, word ptr [eax + 4] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 414cf0: mov word ptr [ebp - 0x26], di */
  W16((uint32_t)(ebp + 0xffffffdau), (edi & 0xffffu));
/* 414cf4: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 414cf7: mov word ptr [ebp - 0x24], ax */
  W16((uint32_t)(ebp + 0xffffffdcu), (eax & 0xffffu));
/* 414cfb: mov word ptr [ebp - 0x22], si */
  W16((uint32_t)(ebp + 0xffffffdeu), (esi & 0xffffu));
/* 414cff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414d00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414d01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414d02: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 414d05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414d06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414d07: push dword ptr [edx + 0xac] */
  { uint32_t v = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, v); }
/* 414d0d: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0x414d0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 414d0f: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 414d12: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414d14: je 0x414dbe */
  if (zf) goto L_414dbe;
L_414d1a: /* 414d1a: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 414d1d: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 414d20: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 414d23: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 414d26: call 0x4014ee */
  esp -= 4; W32(esp, 0x414d2bu); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 414d2b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 414d2e: mov edi, esp */
  edi = esp;
/* 414d30: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 414d33: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 414d37: jmp 0x414d50 */
  goto L_414d50;
L_414d50: /* 414d50: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414d52: jne 0x414d6a */
  if (!zf) goto L_414d6a;
L_414d54: /* 414d54: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 414d57: call 0x4010eb */
  esp -= 4; W32(esp, 0x414d5cu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 414d5c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414d5d: mov edi, eax */
  edi = eax;
/* 414d5f: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414d61: je 0x414dbe */
  if (zf) goto L_414dbe;
L_414d63: /* 414d63: mov dword ptr [ebp - 0x38], 1 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x1u);
L_414d6a: /* 414d6a: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 414d6d: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 414d70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414d71: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414d72: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 414d75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414d76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414d77: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 414d7a: push dword ptr [eax + 0xac] */
  { uint32_t v = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, v); }
/* 414d80: call dword ptr [ebp - 0x20] */
  { uint32_t t = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, 0x414d83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 414d83: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 414d84: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414d86: jle 0x414da8 */
  if ((zf || sf != of)) goto L_414da8;
L_414d88: /* 414d88: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 414d8b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
L_414d8e: /* 414d8e: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 414d91: jbe 0x414da8 */
  if ((cf | zf)) goto L_414da8;
L_414d93: /* 414d93: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 414d95: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 414d98: mov bl, byte ptr [ebx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 414d9a: mov byte ptr [edx], bl */
  W8((uint32_t)(edx), (ebx & 0xffu));
/* 414d9c: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
/* 414d9e: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 414da1: dec dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi), r);
  }
/* 414da3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 414da4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 414da6: jg 0x414d8e */
  if ((!zf && sf == of)) goto L_414d8e;
L_414da8: /* 414da8: cmp dword ptr [ebp - 0x38], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414dac: je 0x41506f */
  if (zf) goto L_41506f;
L_414db2: /* 414db2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414db3: call 0x401156 */
  esp -= 4; W32(esp, 0x414db8u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 414db8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414db9: jmp 0x41506f */
  goto L_41506f;
L_414dbe: /* 414dbe: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 414dc0: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414dc2: je 0x41506f */
  if (zf) goto L_41506f;
L_414dc8: /* 414dc8: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 414dcb: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
L_414dce: /* 414dce: xor edx, edx */
  edx = 0;
/* 414dd0: cmp dword ptr [edi], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414dd2: je 0x41506f */
  if (zf) goto L_41506f;
L_414dd8: /* 414dd8: and byte ptr [ebp - 0x41], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffbfu))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffbfu), r);
  }
/* 414ddb: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 414dde: mov eax, ebx */
  eax = ebx;
L_414de0: /* 414de0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 414de1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 414de2: cmp byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 414de4: je 0x414de0 */
  if (zf) goto L_414de0;
L_414de6: /* 414de6: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 414de9: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 414dec: movsx ecx, cl */
  ecx = (uint32_t)(int32_t)(int8_t)((ecx & 0xffu));
/* 414def: cmp ecx, 0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414df2: jg 0x414f2e */
  if ((!zf && sf == of)) goto L_414f2e;
L_414df8: /* 414df8: je 0x414efa */
  if (zf) goto L_414efa;
L_414dfe: /* 414dfe: cmp ecx, 0x27 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x27u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414e01: je 0x414ea4 */
  if (zf) goto L_414ea4;
L_414e07: /* 414e07: cmp ecx, 0x41 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414e0a: je 0x414e1f */
  if (zf) goto L_414e1f;
L_414e0c: /* 414e0c: cmp ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414e0f: je 0x414e69 */
  if (zf) goto L_414e69;
L_414e11: /* 414e11: cmp ecx, 0x4d */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414e14: je 0x414e35 */
  if (zf) goto L_414e35;
L_414e16: /* 414e16: cmp ecx, 0x61 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414e19: jne 0x415019 */
  if (!zf) goto L_415019;
L_414e1f: /* 414e1f: push 0x43fb68 */
  { uint32_t v = 0x43fb68u; esp -= 4; W32(esp, v); }
/* 414e24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414e25: call 0x407907 */
  esp -= 4; W32(esp, 0x414e2au); SPILL(); f_407907(); if (g_unwind) return; RELOAD();
/* 414e2a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414e2b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414e2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 414e2e: jne 0x414e84 */
  if (!zf) goto L_414e84;
L_414e30: /* 414e30: lea eax, [ebx + 5] */
  eax = (uint32_t)(ebx + 0x5u);
/* 414e33: jmp 0x414e98 */
  goto L_414e98;
L_414e35: /* 414e35: mov ecx, edx */
  ecx = edx;
/* 414e37: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414e38: je 0x414e59 */
  if (zf) goto L_414e59;
L_414e3a: /* 414e3a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414e3b: je 0x414e60 */
  if (zf) goto L_414e60;
L_414e3d: /* 414e3d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414e3e: je 0x414e50 */
  if (zf) goto L_414e50;
L_414e40: /* 414e40: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414e41: jne 0x415019 */
  if (!zf) goto L_415019;
L_414e47: /* 414e47: mov byte ptr [ebp - 0x41], 0x42 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x42u);
/* 414e4b: jmp 0x415019 */
  goto L_415019;
L_414e50: /* 414e50: mov byte ptr [ebp - 0x41], 0x62 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x62u);
/* 414e54: jmp 0x415019 */
  goto L_415019;
L_414e59: /* 414e59: mov dword ptr [ebp - 0x48], 1 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x1u);
L_414e60: /* 414e60: mov byte ptr [ebp - 0x41], 0x6d */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x6du);
/* 414e64: jmp 0x415019 */
  goto L_415019;
L_414e69: /* 414e69: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 414e6a: je 0x414e74 */
  if (zf) goto L_414e74;
L_414e6c: /* 414e6c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 414e6d: je 0x414e7b */
  if (zf) goto L_414e7b;
L_414e6f: /* 414e6f: jmp 0x415019 */
  goto L_415019;
L_414e74: /* 414e74: mov dword ptr [ebp - 0x48], 1 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x1u);
L_414e7b: /* 414e7b: mov byte ptr [ebp - 0x41], 0x48 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x48u);
/* 414e7f: jmp 0x415019 */
  goto L_415019;
L_414e84: /* 414e84: push 0x43fb64 */
  { uint32_t v = 0x43fb64u; esp -= 4; W32(esp, v); }
/* 414e89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414e8a: call 0x407907 */
  esp -= 4; W32(esp, 0x414e8fu); SPILL(); f_407907(); if (g_unwind) return; RELOAD();
/* 414e8f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414e90: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414e91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 414e93: jne 0x414e9b */
  if (!zf) goto L_414e9b;
L_414e95: /* 414e95: lea eax, [ebx + 3] */
  eax = (uint32_t)(ebx + 0x3u);
L_414e98: /* 414e98: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
L_414e9b: /* 414e9b: mov byte ptr [ebp - 0x41], 0x70 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x70u);
/* 414e9f: jmp 0x415019 */
  goto L_415019;
L_414ea4: /* 414ea4: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 414ea6: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414ea9: je 0x415065 */
  if (zf) goto L_415065;
L_414eaf: /* 414eaf: jmp 0x414ee9 */
  goto L_414ee9;
L_414eb1: /* 414eb1: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414eb4: je 0x415065 */
  if (zf) goto L_415065;
L_414eba: /* 414eba: cmp al, 0x27 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x27u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 414ebc: je 0x414ef4 */
  if (zf) goto L_414ef4;
L_414ebe: /* 414ebe: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 414ec1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 414ec4: mov edx, dword ptr [edx + 0x48] */
  edx = R32((uint32_t)(edx + 0x48u));
/* 414ec7: test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ecx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414ecc: je 0x414ede */
  if (zf) goto L_414ede;
L_414ece: /* 414ece: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 414ed0: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 414ed3: jbe 0x414ede */
  if ((cf | zf)) goto L_414ede;
L_414ed5: /* 414ed5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 414ed7: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 414ed9: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 414edb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 414edc: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
L_414ede: /* 414ede: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 414ee0: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 414ee2: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 414ee4: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 414ee6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 414ee7: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
L_414ee9: /* 414ee9: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 414eeb: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414eed: jne 0x414eb1 */
  if (!zf) goto L_414eb1;
L_414eef: /* 414eef: jmp 0x415065 */
  goto L_415065;
L_414ef4: /* 414ef4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 414ef5: jmp 0x415065 */
  goto L_415065;
L_414efa: /* 414efa: mov ecx, edx */
  ecx = edx;
/* 414efc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414efd: je 0x414f1e */
  if (zf) goto L_414f1e;
L_414eff: /* 414eff: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f00: je 0x414f25 */
  if (zf) goto L_414f25;
L_414f02: /* 414f02: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f03: je 0x414f15 */
  if (zf) goto L_414f15;
L_414f05: /* 414f05: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f06: jne 0x415019 */
  if (!zf) goto L_415019;
L_414f0c: /* 414f0c: mov byte ptr [ebp - 0x41], 0x41 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x41u);
/* 414f10: jmp 0x415019 */
  goto L_415019;
L_414f15: /* 414f15: mov byte ptr [ebp - 0x41], 0x61 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x61u);
/* 414f19: jmp 0x415019 */
  goto L_415019;
L_414f1e: /* 414f1e: mov dword ptr [ebp - 0x48], 1 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x1u);
L_414f25: /* 414f25: mov byte ptr [ebp - 0x41], 0x64 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x64u);
/* 414f29: jmp 0x415019 */
  goto L_415019;
L_414f2e: /* 414f2e: sub ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f31: je 0x415004 */
  if (zf) goto L_415004;
L_414f37: /* 414f37: sub ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f3a: je 0x414fed */
  if (zf) goto L_414fed;
L_414f40: /* 414f40: sub ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f43: je 0x414fd6 */
  if (zf) goto L_414fd6;
L_414f49: /* 414f49: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f4a: je 0x414f75 */
  if (zf) goto L_414f75;
L_414f4c: /* 414f4c: sub ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f4f: jne 0x415019 */
  if (!zf) goto L_415019;
L_414f55: /* 414f55: mov ecx, edx */
  ecx = edx;
/* 414f57: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 414f58: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f59: je 0x414f6c */
  if (zf) goto L_414f6c;
L_414f5b: /* 414f5b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 414f5c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f5d: jne 0x415019 */
  if (!zf) goto L_415019;
L_414f63: /* 414f63: mov byte ptr [ebp - 0x41], 0x59 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x59u);
/* 414f67: jmp 0x415019 */
  goto L_415019;
L_414f6c: /* 414f6c: mov byte ptr [ebp - 0x41], 0x79 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x79u);
/* 414f70: jmp 0x415019 */
  goto L_415019;
L_414f75: /* 414f75: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 414f78: cmp dword ptr [eax + 8], 0xb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414f7c: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 414f7f: jg 0x414f89 */
  if ((!zf && sf == of)) goto L_414f89;
L_414f81: /* 414f81: mov eax, dword ptr [eax + 0x98] */
  eax = R32((uint32_t)(eax + 0x98u));
/* 414f87: jmp 0x414f8f */
  goto L_414f8f;
L_414f89: /* 414f89: mov eax, dword ptr [eax + 0x9c] */
  eax = R32((uint32_t)(eax + 0x9cu));
L_414f8f: /* 414f8f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 414f91: jle 0x414fce */
  if ((zf || sf != of)) goto L_414fce;
L_414f93: /* 414f93: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 414f96: jbe 0x414fce */
  if ((cf | zf)) goto L_414fce;
L_414f98: /* 414f98: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 414f9a: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 414f9d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 414fa0: mov ebx, dword ptr [ebx + 0x48] */
  ebx = R32((uint32_t)(ebx + 0x48u));
/* 414fa3: test byte ptr [ebx + edx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + edx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414fa8: je 0x414fba */
  if (zf) goto L_414fba;
L_414faa: /* 414faa: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 414fac: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 414faf: jbe 0x414fba */
  if ((cf | zf)) goto L_414fba;
L_414fb1: /* 414fb1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 414fb3: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 414fb5: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 414fb7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 414fb8: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
L_414fba: /* 414fba: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 414fbc: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 414fbe: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 414fc0: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 414fc2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 414fc3: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
/* 414fc5: dec dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 414fc8: cmp dword ptr [ebp - 0x4c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414fcc: jg 0x414f93 */
  if ((!zf && sf == of)) goto L_414f93;
L_414fce: /* 414fce: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 414fd1: jmp 0x415065 */
  goto L_415065;
L_414fd6: /* 414fd6: mov ecx, edx */
  ecx = edx;
/* 414fd8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414fd9: je 0x414fe0 */
  if (zf) goto L_414fe0;
L_414fdb: /* 414fdb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414fdc: je 0x414fe7 */
  if (zf) goto L_414fe7;
L_414fde: /* 414fde: jmp 0x415019 */
  goto L_415019;
L_414fe0: /* 414fe0: mov dword ptr [ebp - 0x48], 1 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x1u);
L_414fe7: /* 414fe7: mov byte ptr [ebp - 0x41], 0x53 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x53u);
/* 414feb: jmp 0x415019 */
  goto L_415019;
L_414fed: /* 414fed: mov ecx, edx */
  ecx = edx;
/* 414fef: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414ff0: je 0x414ff7 */
  if (zf) goto L_414ff7;
L_414ff2: /* 414ff2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414ff3: je 0x414ffe */
  if (zf) goto L_414ffe;
L_414ff5: /* 414ff5: jmp 0x415019 */
  goto L_415019;
L_414ff7: /* 414ff7: mov dword ptr [ebp - 0x48], 1 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x1u);
L_414ffe: /* 414ffe: mov byte ptr [ebp - 0x41], 0x4d */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x4du);
/* 415002: jmp 0x415019 */
  goto L_415019;
L_415004: /* 415004: mov ecx, edx */
  ecx = edx;
/* 415006: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 415007: je 0x41500e */
  if (zf) goto L_41500e;
L_415009: /* 415009: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 41500a: je 0x415015 */
  if (zf) goto L_415015;
L_41500c: /* 41500c: jmp 0x415019 */
  goto L_415019;
L_41500e: /* 41500e: mov dword ptr [ebp - 0x48], 1 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x1u);
L_415015: /* 415015: mov byte ptr [ebp - 0x41], 0x49 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x49u);
L_415019: /* 415019: mov al, byte ptr [ebp - 0x41] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbfu))) & 0xffu);
/* 41501c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41501e: je 0x41503a */
  if (zf) goto L_41503a;
L_415020: /* 415020: push dword ptr [ebp - 0x48] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb8u)); esp -= 4; W32(esp, v); }
/* 415023: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 415026: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 415029: mov ebx, edi */
  ebx = edi;
/* 41502b: mov ecx, esi */
  ecx = esi;
/* 41502d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 415030: call 0x414a26 */
  esp -= 4; W32(esp, 0x415035u); SPILL(); f_414a26(); if (g_unwind) return; RELOAD();
/* 415035: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 415038: jmp 0x414fce */
  goto L_414fce;
L_41503a: /* 41503a: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 41503c: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 41503f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 415042: mov edx, dword ptr [edx + 0x48] */
  edx = R32((uint32_t)(edx + 0x48u));
/* 415045: test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ecx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41504a: je 0x41505a */
  if (zf) goto L_41505a;
L_41504c: /* 41504c: cmp dword ptr [edi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41504f: jbe 0x41505a */
  if ((cf | zf)) goto L_41505a;
L_415051: /* 415051: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 415053: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 415055: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 415057: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 415058: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
L_41505a: /* 41505a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 41505c: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 41505e: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 415060: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 415062: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 415063: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
L_415065: /* 415065: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 415067: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415069: jne 0x414dce */
  if (!zf) goto L_414dce;
L_41506f: /* 41506f: lea esp, [ebp - 0x58] */
  esp = (uint32_t)(ebp + 0xffffffa8u);
/* 415072: call 0x40105a */
  esp -= 4; W32(esp, 0x415077u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 415077: ret  */
  esp += 4; SPILL(); return;
}

void f_414d39(void) {
  LOAD_REGS();
L_414d39: /* 414d39: xor eax, eax */
  eax = 0;
/* 414d3b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 414d3c: ret  */
  esp += 4; SPILL(); return;
}

void f_414d3d(void) {
  LOAD_REGS();
L_414d3d: /* 414d3d: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 414d40: call 0x415709 */
  esp -= 4; W32(esp, 0x414d45u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 414d45: xor edi, edi */
  edi = 0;
/* 414d47: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 414d4b: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 414d4e: xor esi, esi */
  esi = 0;
/* 414d50: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414d52: jne 0x414d6a */
  if (!zf) goto L_414d6a;
L_414d54: /* 414d54: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 414d57: call 0x4010eb */
  esp -= 4; W32(esp, 0x414d5cu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 414d5c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414d5d: mov edi, eax */
  edi = eax;
/* 414d5f: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414d61: je 0x414dbe */
  if (zf) goto L_414dbe;
L_414d63: /* 414d63: mov dword ptr [ebp - 0x38], 1 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x1u);
L_414d6a: /* 414d6a: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 414d6d: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 414d70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414d71: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414d72: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 414d75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 414d76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 414d77: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 414d7a: push dword ptr [eax + 0xac] */
  { uint32_t v = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, v); }
/* 414d80: call dword ptr [ebp - 0x20] */
  { uint32_t t = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, 0x414d83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 414d83: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 414d84: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414d86: jle 0x414da8 */
  if ((zf || sf != of)) goto L_414da8;
L_414d88: /* 414d88: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 414d8b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
L_414d8e: /* 414d8e: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 414d91: jbe 0x414da8 */
  if ((cf | zf)) goto L_414da8;
L_414d93: /* 414d93: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 414d95: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 414d98: mov bl, byte ptr [ebx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 414d9a: mov byte ptr [edx], bl */
  W8((uint32_t)(edx), (ebx & 0xffu));
/* 414d9c: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
/* 414d9e: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 414da1: dec dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi), r);
  }
/* 414da3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 414da4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 414da6: jg 0x414d8e */
  if ((!zf && sf == of)) goto L_414d8e;
L_414da8: /* 414da8: cmp dword ptr [ebp - 0x38], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414dac: je 0x41506f */
  if (zf) goto L_41506f;
L_414db2: /* 414db2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 414db3: call 0x401156 */
  esp -= 4; W32(esp, 0x414db8u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 414db8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414db9: jmp 0x41506f */
  goto L_41506f;
L_414dbe: /* 414dbe: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 414dc0: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414dc2: je 0x41506f */
  if (zf) goto L_41506f;
L_414dc8: /* 414dc8: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 414dcb: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
L_414dce: /* 414dce: xor edx, edx */
  edx = 0;
/* 414dd0: cmp dword ptr [edi], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414dd2: je 0x41506f */
  if (zf) goto L_41506f;
L_414dd8: /* 414dd8: and byte ptr [ebp - 0x41], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffbfu))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffbfu), r);
  }
/* 414ddb: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 414dde: mov eax, ebx */
  eax = ebx;
L_414de0: /* 414de0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 414de1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 414de2: cmp byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 414de4: je 0x414de0 */
  if (zf) goto L_414de0;
L_414de6: /* 414de6: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 414de9: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 414dec: movsx ecx, cl */
  ecx = (uint32_t)(int32_t)(int8_t)((ecx & 0xffu));
/* 414def: cmp ecx, 0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414df2: jg 0x414f2e */
  if ((!zf && sf == of)) goto L_414f2e;
L_414df8: /* 414df8: je 0x414efa */
  if (zf) goto L_414efa;
L_414dfe: /* 414dfe: cmp ecx, 0x27 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x27u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414e01: je 0x414ea4 */
  if (zf) goto L_414ea4;
L_414e07: /* 414e07: cmp ecx, 0x41 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414e0a: je 0x414e1f */
  if (zf) goto L_414e1f;
L_414e0c: /* 414e0c: cmp ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414e0f: je 0x414e69 */
  if (zf) goto L_414e69;
L_414e11: /* 414e11: cmp ecx, 0x4d */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414e14: je 0x414e35 */
  if (zf) goto L_414e35;
L_414e16: /* 414e16: cmp ecx, 0x61 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414e19: jne 0x415019 */
  if (!zf) goto L_415019;
L_414e1f: /* 414e1f: push 0x43fb68 */
  { uint32_t v = 0x43fb68u; esp -= 4; W32(esp, v); }
/* 414e24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414e25: call 0x407907 */
  esp -= 4; W32(esp, 0x414e2au); SPILL(); f_407907(); if (g_unwind) return; RELOAD();
/* 414e2a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414e2b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414e2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 414e2e: jne 0x414e84 */
  if (!zf) goto L_414e84;
L_414e30: /* 414e30: lea eax, [ebx + 5] */
  eax = (uint32_t)(ebx + 0x5u);
/* 414e33: jmp 0x414e98 */
  goto L_414e98;
L_414e35: /* 414e35: mov ecx, edx */
  ecx = edx;
/* 414e37: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414e38: je 0x414e59 */
  if (zf) goto L_414e59;
L_414e3a: /* 414e3a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414e3b: je 0x414e60 */
  if (zf) goto L_414e60;
L_414e3d: /* 414e3d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414e3e: je 0x414e50 */
  if (zf) goto L_414e50;
L_414e40: /* 414e40: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414e41: jne 0x415019 */
  if (!zf) goto L_415019;
L_414e47: /* 414e47: mov byte ptr [ebp - 0x41], 0x42 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x42u);
/* 414e4b: jmp 0x415019 */
  goto L_415019;
L_414e50: /* 414e50: mov byte ptr [ebp - 0x41], 0x62 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x62u);
/* 414e54: jmp 0x415019 */
  goto L_415019;
L_414e59: /* 414e59: mov dword ptr [ebp - 0x48], 1 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x1u);
L_414e60: /* 414e60: mov byte ptr [ebp - 0x41], 0x6d */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x6du);
/* 414e64: jmp 0x415019 */
  goto L_415019;
L_414e69: /* 414e69: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 414e6a: je 0x414e74 */
  if (zf) goto L_414e74;
L_414e6c: /* 414e6c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 414e6d: je 0x414e7b */
  if (zf) goto L_414e7b;
L_414e6f: /* 414e6f: jmp 0x415019 */
  goto L_415019;
L_414e74: /* 414e74: mov dword ptr [ebp - 0x48], 1 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x1u);
L_414e7b: /* 414e7b: mov byte ptr [ebp - 0x41], 0x48 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x48u);
/* 414e7f: jmp 0x415019 */
  goto L_415019;
L_414e84: /* 414e84: push 0x43fb64 */
  { uint32_t v = 0x43fb64u; esp -= 4; W32(esp, v); }
/* 414e89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 414e8a: call 0x407907 */
  esp -= 4; W32(esp, 0x414e8fu); SPILL(); f_407907(); if (g_unwind) return; RELOAD();
/* 414e8f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414e90: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 414e91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 414e93: jne 0x414e9b */
  if (!zf) goto L_414e9b;
L_414e95: /* 414e95: lea eax, [ebx + 3] */
  eax = (uint32_t)(ebx + 0x3u);
L_414e98: /* 414e98: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
L_414e9b: /* 414e9b: mov byte ptr [ebp - 0x41], 0x70 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x70u);
/* 414e9f: jmp 0x415019 */
  goto L_415019;
L_414ea4: /* 414ea4: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 414ea6: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414ea9: je 0x415065 */
  if (zf) goto L_415065;
L_414eaf: /* 414eaf: jmp 0x414ee9 */
  goto L_414ee9;
L_414eb1: /* 414eb1: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 414eb4: je 0x415065 */
  if (zf) goto L_415065;
L_414eba: /* 414eba: cmp al, 0x27 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x27u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 414ebc: je 0x414ef4 */
  if (zf) goto L_414ef4;
L_414ebe: /* 414ebe: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 414ec1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 414ec4: mov edx, dword ptr [edx + 0x48] */
  edx = R32((uint32_t)(edx + 0x48u));
/* 414ec7: test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ecx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414ecc: je 0x414ede */
  if (zf) goto L_414ede;
L_414ece: /* 414ece: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 414ed0: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 414ed3: jbe 0x414ede */
  if ((cf | zf)) goto L_414ede;
L_414ed5: /* 414ed5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 414ed7: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 414ed9: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 414edb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 414edc: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
L_414ede: /* 414ede: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 414ee0: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 414ee2: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 414ee4: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 414ee6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 414ee7: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
L_414ee9: /* 414ee9: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 414eeb: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414eed: jne 0x414eb1 */
  if (!zf) goto L_414eb1;
L_414eef: /* 414eef: jmp 0x415065 */
  goto L_415065;
L_414ef4: /* 414ef4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 414ef5: jmp 0x415065 */
  goto L_415065;
L_414efa: /* 414efa: mov ecx, edx */
  ecx = edx;
/* 414efc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414efd: je 0x414f1e */
  if (zf) goto L_414f1e;
L_414eff: /* 414eff: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f00: je 0x414f25 */
  if (zf) goto L_414f25;
L_414f02: /* 414f02: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f03: je 0x414f15 */
  if (zf) goto L_414f15;
L_414f05: /* 414f05: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f06: jne 0x415019 */
  if (!zf) goto L_415019;
L_414f0c: /* 414f0c: mov byte ptr [ebp - 0x41], 0x41 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x41u);
/* 414f10: jmp 0x415019 */
  goto L_415019;
L_414f15: /* 414f15: mov byte ptr [ebp - 0x41], 0x61 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x61u);
/* 414f19: jmp 0x415019 */
  goto L_415019;
L_414f1e: /* 414f1e: mov dword ptr [ebp - 0x48], 1 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x1u);
L_414f25: /* 414f25: mov byte ptr [ebp - 0x41], 0x64 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x64u);
/* 414f29: jmp 0x415019 */
  goto L_415019;
L_414f2e: /* 414f2e: sub ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f31: je 0x415004 */
  if (zf) goto L_415004;
L_414f37: /* 414f37: sub ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f3a: je 0x414fed */
  if (zf) goto L_414fed;
L_414f40: /* 414f40: sub ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f43: je 0x414fd6 */
  if (zf) goto L_414fd6;
L_414f49: /* 414f49: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f4a: je 0x414f75 */
  if (zf) goto L_414f75;
L_414f4c: /* 414f4c: sub ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f4f: jne 0x415019 */
  if (!zf) goto L_415019;
L_414f55: /* 414f55: mov ecx, edx */
  ecx = edx;
/* 414f57: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 414f58: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f59: je 0x414f6c */
  if (zf) goto L_414f6c;
L_414f5b: /* 414f5b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 414f5c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414f5d: jne 0x415019 */
  if (!zf) goto L_415019;
L_414f63: /* 414f63: mov byte ptr [ebp - 0x41], 0x59 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x59u);
/* 414f67: jmp 0x415019 */
  goto L_415019;
L_414f6c: /* 414f6c: mov byte ptr [ebp - 0x41], 0x79 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x79u);
/* 414f70: jmp 0x415019 */
  goto L_415019;
L_414f75: /* 414f75: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 414f78: cmp dword ptr [eax + 8], 0xb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414f7c: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 414f7f: jg 0x414f89 */
  if ((!zf && sf == of)) goto L_414f89;
L_414f81: /* 414f81: mov eax, dword ptr [eax + 0x98] */
  eax = R32((uint32_t)(eax + 0x98u));
/* 414f87: jmp 0x414f8f */
  goto L_414f8f;
L_414f89: /* 414f89: mov eax, dword ptr [eax + 0x9c] */
  eax = R32((uint32_t)(eax + 0x9cu));
L_414f8f: /* 414f8f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 414f91: jle 0x414fce */
  if ((zf || sf != of)) goto L_414fce;
L_414f93: /* 414f93: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 414f96: jbe 0x414fce */
  if ((cf | zf)) goto L_414fce;
L_414f98: /* 414f98: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 414f9a: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 414f9d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 414fa0: mov ebx, dword ptr [ebx + 0x48] */
  ebx = R32((uint32_t)(ebx + 0x48u));
/* 414fa3: test byte ptr [ebx + edx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + edx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 414fa8: je 0x414fba */
  if (zf) goto L_414fba;
L_414faa: /* 414faa: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 414fac: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 414faf: jbe 0x414fba */
  if ((cf | zf)) goto L_414fba;
L_414fb1: /* 414fb1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 414fb3: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 414fb5: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 414fb7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 414fb8: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
L_414fba: /* 414fba: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 414fbc: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 414fbe: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 414fc0: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 414fc2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 414fc3: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
/* 414fc5: dec dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 414fc8: cmp dword ptr [ebp - 0x4c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 414fcc: jg 0x414f93 */
  if ((!zf && sf == of)) goto L_414f93;
L_414fce: /* 414fce: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 414fd1: jmp 0x415065 */
  goto L_415065;
L_414fd6: /* 414fd6: mov ecx, edx */
  ecx = edx;
/* 414fd8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414fd9: je 0x414fe0 */
  if (zf) goto L_414fe0;
L_414fdb: /* 414fdb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414fdc: je 0x414fe7 */
  if (zf) goto L_414fe7;
L_414fde: /* 414fde: jmp 0x415019 */
  goto L_415019;
L_414fe0: /* 414fe0: mov dword ptr [ebp - 0x48], 1 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x1u);
L_414fe7: /* 414fe7: mov byte ptr [ebp - 0x41], 0x53 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x53u);
/* 414feb: jmp 0x415019 */
  goto L_415019;
L_414fed: /* 414fed: mov ecx, edx */
  ecx = edx;
/* 414fef: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414ff0: je 0x414ff7 */
  if (zf) goto L_414ff7;
L_414ff2: /* 414ff2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 414ff3: je 0x414ffe */
  if (zf) goto L_414ffe;
L_414ff5: /* 414ff5: jmp 0x415019 */
  goto L_415019;
L_414ff7: /* 414ff7: mov dword ptr [ebp - 0x48], 1 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x1u);
L_414ffe: /* 414ffe: mov byte ptr [ebp - 0x41], 0x4d */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x4du);
/* 415002: jmp 0x415019 */
  goto L_415019;
L_415004: /* 415004: mov ecx, edx */
  ecx = edx;
/* 415006: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 415007: je 0x41500e */
  if (zf) goto L_41500e;
L_415009: /* 415009: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 41500a: je 0x415015 */
  if (zf) goto L_415015;
L_41500c: /* 41500c: jmp 0x415019 */
  goto L_415019;
L_41500e: /* 41500e: mov dword ptr [ebp - 0x48], 1 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x1u);
L_415015: /* 415015: mov byte ptr [ebp - 0x41], 0x49 */
  W8((uint32_t)(ebp + 0xffffffbfu), 0x49u);
L_415019: /* 415019: mov al, byte ptr [ebp - 0x41] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffbfu))) & 0xffu);
/* 41501c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41501e: je 0x41503a */
  if (zf) goto L_41503a;
L_415020: /* 415020: push dword ptr [ebp - 0x48] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb8u)); esp -= 4; W32(esp, v); }
/* 415023: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 415026: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 415029: mov ebx, edi */
  ebx = edi;
/* 41502b: mov ecx, esi */
  ecx = esi;
/* 41502d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 415030: call 0x414a26 */
  esp -= 4; W32(esp, 0x415035u); SPILL(); f_414a26(); if (g_unwind) return; RELOAD();
/* 415035: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 415038: jmp 0x414fce */
  goto L_414fce;
L_41503a: /* 41503a: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 41503c: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 41503f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 415042: mov edx, dword ptr [edx + 0x48] */
  edx = R32((uint32_t)(edx + 0x48u));
/* 415045: test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ecx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41504a: je 0x41505a */
  if (zf) goto L_41505a;
L_41504c: /* 41504c: cmp dword ptr [edi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41504f: jbe 0x41505a */
  if ((cf | zf)) goto L_41505a;
L_415051: /* 415051: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 415053: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 415055: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 415057: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 415058: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
L_41505a: /* 41505a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 41505c: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 41505e: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 415060: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 415062: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 415063: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
L_415065: /* 415065: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 415067: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415069: jne 0x414dce */
  if (!zf) goto L_414dce;
L_41506f: /* 41506f: lea esp, [ebp - 0x58] */
  esp = (uint32_t)(ebp + 0xffffffa8u);
/* 415072: call 0x40105a */
  esp -= 4; W32(esp, 0x415077u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 415077: ret  */
  esp += 4; SPILL(); return;
}

void f_415078(void) {
  LOAD_REGS();
L_415078: /* 415078: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 415079: mov ebp, esp */
  ebp = esp;
/* 41507b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41507c: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 41507f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 415081: jne 0x415089 */
  if (!zf) goto L_415089;
L_415083: /* 415083: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 415086: mov edi, dword ptr [eax + 0x4c] */
  edi = R32((uint32_t)(eax + 0x4cu));
L_415089: /* 415089: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 41508c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 41508e: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 415091: jbe 0x415117 */
  if ((cf | zf)) goto L_415117;
L_415097: /* 415097: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415099: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
L_41509c: /* 41509c: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 41509e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4150a0: je 0x415101 */
  if (zf) goto L_415101;
L_4150a2: /* 4150a2: cmp al, 0x25 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x25u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4150a4: je 0x4150d8 */
  if (zf) goto L_4150d8;
L_4150a6: /* 4150a6: mov edx, dword ptr [0x449030] */
  edx = R32((uint32_t)(0x449030u));
/* 4150ac: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 4150af: test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ecx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4150b4: je 0x4150c8 */
  if (zf) goto L_4150c8;
L_4150b6: /* 4150b6: cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4150ba: jbe 0x4150c8 */
  if ((cf | zf)) goto L_4150c8;
L_4150bc: /* 4150bc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4150bf: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 4150c1: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 4150c4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4150c5: dec dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x1cu), r);
  }
L_4150c8: /* 4150c8: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4150ca: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4150cd: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 4150cf: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 4150d2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4150d3: dec dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x1cu), r);
  }
/* 4150d6: jmp 0x4150fb */
  goto L_4150fb;
L_4150d8: /* 4150d8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4150d9: xor eax, eax */
  eax = 0;
/* 4150db: cmp byte ptr [esi], 0x23 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x23u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4150de: jne 0x4150e2 */
  if (!zf) goto L_4150e2;
L_4150e0: /* 4150e0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4150e1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4150e2: /* 4150e2: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 4150e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4150e6: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4150e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4150e9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4150ec: lea ebx, [ebp + 0x1c] */
  ebx = (uint32_t)(ebp + 0x1cu);
/* 4150ef: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 4150f2: call 0x414a26 */
  esp -= 4; W32(esp, 0x4150f7u); SPILL(); f_414a26(); if (g_unwind) return; RELOAD();
/* 4150f7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4150fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4150fb: /* 4150fb: cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4150ff: ja 0x41509c */
  if ((!cf && !zf)) goto L_41509c;
L_415101: /* 415101: cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 415105: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 415106: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 415107: jbe 0x415117 */
  if ((cf | zf)) goto L_415117;
L_415109: /* 415109: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41510c: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 41510f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 415112: sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 415115: jmp 0x415119 */
  goto L_415119;
L_415117: /* 415117: xor eax, eax */
  eax = 0;
L_415119: /* 415119: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41511a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41511b: ret  */
  esp += 4; SPILL(); return;
}

void f_41511c(void) {
  LOAD_REGS();
L_41511c: /* 41511c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41511d: mov ebp, esp */
  ebp = esp;
/* 41511f: call 0x40137f */
  esp -= 4; W32(esp, 0x415124u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 415124: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 415127: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41512d: je 0x415134 */
  if (zf) goto L_415134;
L_41512f: /* 41512f: call 0x4025f2 */
  esp -= 4; W32(esp, 0x415134u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_415134: /* 415134: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 415137: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41513a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41513d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 415140: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 415143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415144: call 0x415078 */
  esp -= 4; W32(esp, 0x415149u); SPILL(); f_415078(); if (g_unwind) return; RELOAD();
/* 415149: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41514c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41514d: ret  */
  esp += 4; SPILL(); return;
}

void f_41514e(void) {
  LOAD_REGS();
L_41514e: /* 41514e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 415150: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 415154: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 415158: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41515c: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 415160: call 0x41511c */
  esp -= 4; W32(esp, 0x415165u); SPILL(); f_41511c(); if (g_unwind) return; RELOAD();
/* 415165: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 415168: ret  */
  esp += 4; SPILL(); return;
}

void f_415169(void) {
  LOAD_REGS();
L_415169: /* 415169: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 41516b: call 0x4011b7 */
  esp -= 4; W32(esp, 0x415170u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 415170: call 0x403b05 */
  esp -= 4; W32(esp, 0x415175u); SPILL(); f_403b05(); if (g_unwind) return; RELOAD();
/* 415175: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 415177: call 0x4011d9 */
  esp -= 4; W32(esp, 0x41517cu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 41517c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41517d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41517e: ret  */
  esp += 4; SPILL(); return;
}

void f_41517f(void) {
  LOAD_REGS();
L_41517f: /* 41517f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415180: call 0x412868 */
  esp -= 4; W32(esp, 0x415185u); SPILL(); f_412868(); if (g_unwind) return; RELOAD();
/* 415185: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 415187: fninit  */
  fpu_init();
/* 415189: call 0x404d18 */
  esp -= 4; W32(esp, 0x41518eu); SPILL(); f_404d18(); if (g_unwind) return; RELOAD();
/* 41518e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 415190: je 0x4151a8 */
  if (zf) goto L_4151a8;
L_415192: /* 415192: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 415195: test dword ptr [eax], 0x10008 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x10008u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41519b: je 0x4151a8 */
  if (zf) goto L_4151a8;
L_41519d: /* 41519d: and dword ptr [eax + 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x20u), r);
  }
/* 4151a1: mov dword ptr [eax + 0x24], 0xffff */
  W32((uint32_t)(eax + 0x24u), 0xffffu);
L_4151a8: /* 4151a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4151a9: ret  */
  esp += 4; SPILL(); return;
}

void f_4151aa(void) {
  LOAD_REGS();
L_4151aa: /* 4151aa: mov cl, byte ptr [esp + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 4151ae: xor eax, eax */
  eax = 0;
/* 4151b0: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4151b3: je 0x4151b8 */
  if (zf) goto L_4151b8;
L_4151b5: /* 4151b5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 4151b7: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
L_4151b8: /* 4151b8: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4151bb: je 0x4151c0 */
  if (zf) goto L_4151c0;
L_4151bd: /* 4151bd: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4151c0: /* 4151c0: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4151c3: je 0x4151c8 */
  if (zf) goto L_4151c8;
L_4151c5: /* 4151c5: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4151c8: /* 4151c8: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4151cb: je 0x4151d0 */
  if (zf) goto L_4151d0;
L_4151cd: /* 4151cd: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4151d0: /* 4151d0: test cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4151d3: je 0x4151d8 */
  if (zf) goto L_4151d8;
L_4151d5: /* 4151d5: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4151d8: /* 4151d8: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4151db: je 0x4151e2 */
  if (zf) goto L_4151e2;
L_4151dd: /* 4151dd: or eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4151e2: /* 4151e2: ret  */
  esp += 4; SPILL(); return;
}

void f_4151e3(void) {
  LOAD_REGS();
L_4151e3: /* 4151e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4151e4: wait  */
/* 4151e5: fnstsw word ptr [esp] */
  W16((uint32_t)(esp), fpu_sw());
/* 4151e8: push dword ptr [esp] */
  { uint32_t v = R32((uint32_t)(esp)); esp -= 4; W32(esp, v); }
/* 4151eb: call 0x4151aa */
  esp -= 4; W32(esp, 0x4151f0u); SPILL(); f_4151aa(); if (g_unwind) return; RELOAD();
/* 4151f0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4151f1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4151f2: ret  */
  esp += 4; SPILL(); return;
}

void f_4151f3(void) {
  LOAD_REGS();
L_4151f3: /* 4151f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4151f4: fnstsw word ptr [esp] */
  W16((uint32_t)(esp), fpu_sw());
/* 4151f7: fnclex  */
  FSW_CC = 0;
/* 4151f9: push dword ptr [esp] */
  { uint32_t v = R32((uint32_t)(esp)); esp -= 4; W32(esp, v); }
/* 4151fc: call 0x4151aa */
  esp -= 4; W32(esp, 0x415201u); SPILL(); f_4151aa(); if (g_unwind) return; RELOAD();
/* 415201: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415202: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415203: ret  */
  esp += 4; SPILL(); return;
}

void f_415204(void) {
  LOAD_REGS();
L_415204: /* 415204: jmp dword ptr [0x439120] */
  SPILL(); call_ind(R32(0x439120u)); return; /* KERNEL32!RtlUnwind */
}

void f_41520a(void) {
  LOAD_REGS();
L_41520a: /* 41520a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41520b: mov ebp, esp */
  ebp = esp;
/* 41520d: xor eax, eax */
  eax = 0;
/* 41520f: cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415213: jne 0x41521b */
  if (!zf) goto L_41521b;
L_415215: /* 415215: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 415218: jge 0x41521b */
  if ((sf == of)) goto L_41521b;
L_41521a: /* 41521a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_41521b: /* 41521b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 41521e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41521f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 415222: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 415225: call 0x401cd9 */
  esp -= 4; W32(esp, 0x41522au); SPILL(); f_401cd9(); if (g_unwind) return; RELOAD();
/* 41522a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41522d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41522e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41522f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 415230: ret  */
  esp += 4; SPILL(); return;
}

void f_415231(void) {
  LOAD_REGS();
L_415231: /* 415231: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 415232: mov ebp, esp */
  ebp = esp;
/* 415234: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 415235: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 415236: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415237: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 41523a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41523b: xor ecx, ecx */
  ecx = 0;
/* 41523d: cmp dword ptr [ebp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415240: mov esi, eax */
  esi = eax;
/* 415242: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 415245: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 415246: je 0x415252 */
  if (zf) goto L_415252;
L_415248: /* 415248: mov byte ptr [esi], 0x2d */
  W8((uint32_t)(esi), 0x2du);
/* 41524b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41524c: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ebx = r;
  }
/* 41524e: adc eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 415250: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_415252: /* 415252: mov edi, esi */
  edi = esi;
/* 415254: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
L_415257: /* 415257: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41525a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41525d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41525e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41525f: call 0x40233d */
  esp -= 4; W32(esp, 0x415264u); SPILL(); f_40233d(); if (g_unwind) return; RELOAD();
/* 415264: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 415267: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 41526a: mov ebx, eax */
  ebx = eax;
/* 41526c: mov eax, edx */
  eax = edx;
/* 41526e: jbe 0x415275 */
  if ((cf | zf)) goto L_415275;
L_415270: /* 415270: add cl, 0x57 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x57u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 415273: jmp 0x415278 */
  goto L_415278;
L_415275: /* 415275: add cl, 0x30 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_415278: /* 415278: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 41527a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41527b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 41527d: ja 0x415257 */
  if ((!cf && !zf)) goto L_415257;
L_41527f: /* 41527f: jb 0x415285 */
  if (cf) goto L_415285;
L_415281: /* 415281: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 415283: ja 0x415257 */
  if ((!cf && !zf)) goto L_415257;
L_415285: /* 415285: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 415288: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_415289: /* 415289: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 41528b: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 41528d: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 41528f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 415290: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 415292: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 415293: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 415295: jb 0x415289 */
  if (cf) goto L_415289;
L_415297: /* 415297: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 415298: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 415299: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41529a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41529b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_415246(void) {
  LOAD_REGS();
L_415246: /* 415246: je 0x415252 */
  if (zf) goto L_415252;
L_415248: /* 415248: mov byte ptr [esi], 0x2d */
  W8((uint32_t)(esi), 0x2du);
/* 41524b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41524c: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ebx = r;
  }
/* 41524e: adc eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 415250: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_415252: /* 415252: mov edi, esi */
  edi = esi;
/* 415254: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
L_415257: /* 415257: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41525a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41525d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41525e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41525f: call 0x40233d */
  esp -= 4; W32(esp, 0x415264u); SPILL(); f_40233d(); if (g_unwind) return; RELOAD();
/* 415264: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 415267: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 41526a: mov ebx, eax */
  ebx = eax;
/* 41526c: mov eax, edx */
  eax = edx;
/* 41526e: jbe 0x415275 */
  if ((cf | zf)) goto L_415275;
L_415270: /* 415270: add cl, 0x57 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x57u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 415273: jmp 0x415278 */
  goto L_415278;
L_415275: /* 415275: add cl, 0x30 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_415278: /* 415278: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 41527a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41527b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 41527d: ja 0x415257 */
  if ((!cf && !zf)) goto L_415257;
L_41527f: /* 41527f: jb 0x415285 */
  if (cf) goto L_415285;
L_415281: /* 415281: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 415283: ja 0x415257 */
  if ((!cf && !zf)) goto L_415257;
L_415285: /* 415285: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 415288: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_415289: /* 415289: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 41528b: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 41528d: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 41528f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 415290: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 415292: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 415293: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 415295: jb 0x415289 */
  if (cf) goto L_415289;
L_415297: /* 415297: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 415298: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 415299: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41529a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41529b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_41529e(void) {
  LOAD_REGS();
L_41529e: /* 41529e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41529f: mov ebp, esp */
  ebp = esp;
/* 4152a1: xor eax, eax */
  eax = 0;
/* 4152a3: cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4152a7: jne 0x4152b8 */
  if (!zf) goto L_4152b8;
L_4152a9: /* 4152a9: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4152ac: jg 0x4152b8 */
  if ((!zf && sf == of)) goto L_4152b8;
L_4152ae: /* 4152ae: jl 0x4152b5 */
  if ((sf != of)) goto L_4152b5;
L_4152b0: /* 4152b0: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4152b3: jae 0x4152b8 */
  if (!cf) goto L_4152b8;
L_4152b5: /* 4152b5: xor eax, eax */
  eax = 0;
/* 4152b7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_4152b8: /* 4152b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4152b9: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4152bc: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4152bf: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4152c2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4152c5: call 0x415231 */
  esp -= 4; W32(esp, 0x4152cau); SPILL(); f_415231(); if (g_unwind) return; RELOAD();
/* 4152ca: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4152cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4152ce: ret  */
  esp += 4; SPILL(); return;
}

void f_4152cf(void) {
  LOAD_REGS();
L_4152cf: /* 4152cf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4152d0: mov ebp, esp */
  ebp = esp;
/* 4152d2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4152d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4152d7: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4152da: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4152dd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4152e0: call 0x415231 */
  esp -= 4; W32(esp, 0x4152e5u); SPILL(); f_415231(); if (g_unwind) return; RELOAD();
/* 4152e5: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4152e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4152e9: ret  */
  esp += 4; SPILL(); return;
}

void f_4152ea(void) {
  LOAD_REGS();
L_4152ea: /* 4152ea: jmp 0x40643e */
  SPILL(); f_40643e(); return;
}

void f_4152ef(void) {
  LOAD_REGS();
L_4152ef: /* 4152ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4152f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4152f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4152f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4152f3: call 0x40137f */
  esp -= 4; W32(esp, 0x4152f8u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4152f8: mov edi, dword ptr [eax + 0x64] */
  edi = R32((uint32_t)(eax + 0x64u));
/* 4152fb: cmp edi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415301: je 0x41530a */
  if (zf) goto L_41530a;
L_415303: /* 415303: call 0x4025f2 */
  esp -= 4; W32(esp, 0x415308u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 415308: mov edi, eax */
  edi = eax;
L_41530a: /* 41530a: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
L_41530e: /* 41530e: cmp dword ptr [edi + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 415312: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 415315: jle 0x415325 */
  if ((zf || sf != of)) goto L_415325;
L_415317: /* 415317: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 415319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41531a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41531b: call 0x415666 */
  esp -= 4; W32(esp, 0x415320u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 415320: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 415323: jmp 0x41532f */
  goto L_41532f;
L_415325: /* 415325: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 415328: movzx eax, byte ptr [ecx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(ecx + eax*2)));
/* 41532c: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41532f: /* 41532f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 415331: je 0x415336 */
  if (zf) goto L_415336;
L_415333: /* 415333: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 415334: jmp 0x41530e */
  goto L_41530e;
L_415336: /* 415336: movzx edi, byte ptr [esi] */
  edi = (uint32_t)(R8((uint32_t)(esi)));
/* 415339: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41533a: cmp edi, 0x2d */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41533d: mov ebx, edi */
  ebx = edi;
/* 41533f: je 0x415346 */
  if (zf) goto L_415346;
L_415341: /* 415341: cmp edi, 0x2b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415344: jne 0x41534a */
  if (!zf) goto L_41534a;
L_415346: /* 415346: movzx edi, byte ptr [esi] */
  edi = (uint32_t)(R8((uint32_t)(esi)));
/* 415349: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_41534a: /* 41534a: xor eax, eax */
  eax = 0;
/* 41534c: xor edx, edx */
  edx = 0;
L_41534e: /* 41534e: cmp edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 415351: jl 0x41535d */
  if ((sf != of)) goto L_41535d;
L_415353: /* 415353: cmp edi, 0x39 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x39u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 415356: jg 0x41535d */
  if ((!zf && sf == of)) goto L_41535d;
L_415358: /* 415358: sub edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 41535b: jmp 0x415360 */
  goto L_415360;
L_41535d: /* 41535d: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_415360: /* 415360: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415363: je 0x415385 */
  if (zf) goto L_415385;
L_415365: /* 415365: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 415367: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 415369: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 41536a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41536b: call 0x40518c */
  esp -= 4; W32(esp, 0x415370u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 415370: mov ecx, eax */
  ecx = eax;
/* 415372: mov ebp, edx */
  ebp = edx;
/* 415374: mov eax, edi */
  eax = edi;
/* 415376: movzx edi, byte ptr [esi] */
  edi = (uint32_t)(R8((uint32_t)(esi)));
/* 415379: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 41537a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 41537c: adc ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebp = r;
  }
/* 41537e: mov eax, ecx */
  eax = ecx;
/* 415380: mov edx, ebp */
  edx = ebp;
/* 415382: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 415383: jmp 0x41534e */
  goto L_41534e;
L_415385: /* 415385: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 415386: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 415387: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 415388: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41538b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41538c: jne 0x415395 */
  if (!zf) goto L_415395;
L_41538e: /* 41538e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 415390: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 415393: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
L_415395: /* 415395: ret  */
  esp += 4; SPILL(); return;
}

void f_415396(void) {
  LOAD_REGS();
L_415396: /* 415396: call 0x40137f */
  esp -= 4; W32(esp, 0x41539bu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41539b: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 41539e: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4153a4: je 0x4153ab */
  if (zf) goto L_4153ab;
L_4153a6: /* 4153a6: call 0x4025f2 */
  esp -= 4; W32(esp, 0x4153abu); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_4153ab: /* 4153ab: cmp dword ptr [eax + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4153af: jle 0x4153c4 */
  if ((zf || sf != of)) goto L_4153c4;
L_4153b1: /* 4153b1: push 0x103 */
  { uint32_t v = 0x103u; esp -= 4; W32(esp, v); }
/* 4153b6: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4153ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4153bb: call 0x415666 */
  esp -= 4; W32(esp, 0x4153c0u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 4153c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4153c3: ret  */
  esp += 4; SPILL(); return;
L_4153c4: /* 4153c4: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 4153c7: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4153cb: movzx eax, word ptr [eax + ecx*2] */
  eax = (uint32_t)(R16((uint32_t)(eax + ecx*2)));
/* 4153cf: and eax, 0x103 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x103u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4153d4: ret  */
  esp += 4; SPILL(); return;
}

void f_4153d5(void) {
  LOAD_REGS();
L_4153d5: /* 4153d5: call 0x40137f */
  esp -= 4; W32(esp, 0x4153dau); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4153da: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 4153dd: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4153e3: je 0x4153ea */
  if (zf) goto L_4153ea;
L_4153e5: /* 4153e5: call 0x4025f2 */
  esp -= 4; W32(esp, 0x4153eau); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_4153ea: /* 4153ea: cmp dword ptr [eax + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4153ee: jle 0x415400 */
  if ((zf || sf != of)) goto L_415400;
L_4153f0: /* 4153f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4153f2: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4153f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4153f7: call 0x415666 */
  esp -= 4; W32(esp, 0x4153fcu); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 4153fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4153ff: ret  */
  esp += 4; SPILL(); return;
L_415400: /* 415400: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 415403: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 415407: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 41540b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41540e: ret  */
  esp += 4; SPILL(); return;
}

void f_41540f(void) {
  LOAD_REGS();
L_41540f: /* 41540f: call 0x40137f */
  esp -= 4; W32(esp, 0x415414u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 415414: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 415417: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41541d: je 0x415424 */
  if (zf) goto L_415424;
L_41541f: /* 41541f: call 0x4025f2 */
  esp -= 4; W32(esp, 0x415424u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_415424: /* 415424: cmp dword ptr [eax + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 415428: jle 0x41543a */
  if ((zf || sf != of)) goto L_41543a;
L_41542a: /* 41542a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41542c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 415430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415431: call 0x415666 */
  esp -= 4; W32(esp, 0x415436u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 415436: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 415439: ret  */
  esp += 4; SPILL(); return;
L_41543a: /* 41543a: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 41543d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 415441: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 415445: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415448: ret  */
  esp += 4; SPILL(); return;
}

void f_415449(void) {
  LOAD_REGS();
L_415449: /* 415449: call 0x40137f */
  esp -= 4; W32(esp, 0x41544eu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41544e: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 415451: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415457: je 0x41545e */
  if (zf) goto L_41545e;
L_415459: /* 415459: call 0x4025f2 */
  esp -= 4; W32(esp, 0x41545eu); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_41545e: /* 41545e: cmp dword ptr [eax + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 415462: jle 0x415477 */
  if ((zf || sf != of)) goto L_415477;
L_415464: /* 415464: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 415469: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41546d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41546e: call 0x415666 */
  esp -= 4; W32(esp, 0x415473u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 415473: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 415476: ret  */
  esp += 4; SPILL(); return;
L_415477: /* 415477: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 41547a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 41547e: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 415482: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415487: ret  */
  esp += 4; SPILL(); return;
}

void f_415488(void) {
  LOAD_REGS();
L_415488: /* 415488: call 0x40137f */
  esp -= 4; W32(esp, 0x41548du); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41548d: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 415490: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415496: je 0x41549d */
  if (zf) goto L_41549d;
L_415498: /* 415498: call 0x4025f2 */
  esp -= 4; W32(esp, 0x41549du); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_41549d: /* 41549d: cmp dword ptr [eax + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4154a1: jle 0x4154b3 */
  if ((zf || sf != of)) goto L_4154b3;
L_4154a3: /* 4154a3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4154a5: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4154a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4154aa: call 0x415666 */
  esp -= 4; W32(esp, 0x4154afu); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 4154af: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4154b2: ret  */
  esp += 4; SPILL(); return;
L_4154b3: /* 4154b3: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 4154b6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4154ba: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 4154be: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4154c1: ret  */
  esp += 4; SPILL(); return;
}

void f_4154c2(void) {
  LOAD_REGS();
L_4154c2: /* 4154c2: call 0x40137f */
  esp -= 4; W32(esp, 0x4154c7u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4154c7: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 4154ca: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4154d0: je 0x4154d7 */
  if (zf) goto L_4154d7;
L_4154d2: /* 4154d2: call 0x4025f2 */
  esp -= 4; W32(esp, 0x4154d7u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_4154d7: /* 4154d7: cmp dword ptr [eax + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4154db: jle 0x4154ed */
  if ((zf || sf != of)) goto L_4154ed;
L_4154dd: /* 4154dd: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 4154df: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4154e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4154e4: call 0x415666 */
  esp -= 4; W32(esp, 0x4154e9u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 4154e9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4154ec: ret  */
  esp += 4; SPILL(); return;
L_4154ed: /* 4154ed: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 4154f0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4154f4: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 4154f8: and eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4154fb: ret  */
  esp += 4; SPILL(); return;
}

void f_4154fc(void) {
  LOAD_REGS();
L_4154fc: /* 4154fc: call 0x40137f */
  esp -= 4; W32(esp, 0x415501u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 415501: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 415504: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41550a: je 0x415511 */
  if (zf) goto L_415511;
L_41550c: /* 41550c: call 0x4025f2 */
  esp -= 4; W32(esp, 0x415511u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_415511: /* 415511: cmp dword ptr [eax + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 415515: jle 0x41552a */
  if ((zf || sf != of)) goto L_41552a;
L_415517: /* 415517: push 0x107 */
  { uint32_t v = 0x107u; esp -= 4; W32(esp, v); }
/* 41551c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 415520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415521: call 0x415666 */
  esp -= 4; W32(esp, 0x415526u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 415526: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 415529: ret  */
  esp += 4; SPILL(); return;
L_41552a: /* 41552a: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 41552d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 415531: movzx eax, word ptr [eax + ecx*2] */
  eax = (uint32_t)(R16((uint32_t)(eax + ecx*2)));
/* 415535: and eax, 0x107 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x107u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41553a: ret  */
  esp += 4; SPILL(); return;
}

void f_41553b(void) {
  LOAD_REGS();
L_41553b: /* 41553b: call 0x40137f */
  esp -= 4; W32(esp, 0x415540u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 415540: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 415543: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415549: je 0x415550 */
  if (zf) goto L_415550;
L_41554b: /* 41554b: call 0x4025f2 */
  esp -= 4; W32(esp, 0x415550u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_415550: /* 415550: cmp dword ptr [eax + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 415554: jle 0x415569 */
  if ((zf || sf != of)) goto L_415569;
L_415556: /* 415556: push 0x157 */
  { uint32_t v = 0x157u; esp -= 4; W32(esp, v); }
/* 41555b: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41555f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415560: call 0x415666 */
  esp -= 4; W32(esp, 0x415565u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 415565: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 415568: ret  */
  esp += 4; SPILL(); return;
L_415569: /* 415569: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 41556c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 415570: movzx eax, word ptr [eax + ecx*2] */
  eax = (uint32_t)(R16((uint32_t)(eax + ecx*2)));
/* 415574: and eax, 0x157 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x157u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415579: ret  */
  esp += 4; SPILL(); return;
}

void f_41557a(void) {
  LOAD_REGS();
L_41557a: /* 41557a: call 0x40137f */
  esp -= 4; W32(esp, 0x41557fu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41557f: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 415582: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415588: je 0x41558f */
  if (zf) goto L_41558f;
L_41558a: /* 41558a: call 0x4025f2 */
  esp -= 4; W32(esp, 0x41558fu); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_41558f: /* 41558f: cmp dword ptr [eax + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 415593: jle 0x4155a8 */
  if ((zf || sf != of)) goto L_4155a8;
L_415595: /* 415595: push 0x117 */
  { uint32_t v = 0x117u; esp -= 4; W32(esp, v); }
/* 41559a: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41559e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41559f: call 0x415666 */
  esp -= 4; W32(esp, 0x4155a4u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 4155a4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4155a7: ret  */
  esp += 4; SPILL(); return;
L_4155a8: /* 4155a8: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 4155ab: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4155af: movzx eax, word ptr [eax + ecx*2] */
  eax = (uint32_t)(R16((uint32_t)(eax + ecx*2)));
/* 4155b3: and eax, 0x117 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x117u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4155b8: ret  */
  esp += 4; SPILL(); return;
}

void f_4155b9(void) {
  LOAD_REGS();
L_4155b9: /* 4155b9: call 0x40137f */
  esp -= 4; W32(esp, 0x4155beu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4155be: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 4155c1: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4155c7: je 0x4155ce */
  if (zf) goto L_4155ce;
L_4155c9: /* 4155c9: call 0x4025f2 */
  esp -= 4; W32(esp, 0x4155ceu); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_4155ce: /* 4155ce: cmp dword ptr [eax + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4155d2: jle 0x4155e4 */
  if ((zf || sf != of)) goto L_4155e4;
L_4155d4: /* 4155d4: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4155d6: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4155da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4155db: call 0x415666 */
  esp -= 4; W32(esp, 0x4155e0u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 4155e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4155e3: ret  */
  esp += 4; SPILL(); return;
L_4155e4: /* 4155e4: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 4155e7: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4155eb: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 4155ef: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4155f2: ret  */
  esp += 4; SPILL(); return;
}

void f_4155f3(void) {
  LOAD_REGS();
L_4155f3: /* 4155f3: cmp dword ptr [esp + 4], 0x80 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4155fb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4155fd: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4155ff: ret  */
  esp += 4; SPILL(); return;
}

void f_415600(void) {
  LOAD_REGS();
L_415600: /* 415600: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 415604: and eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415607: ret  */
  esp += 4; SPILL(); return;
}

void f_415608(void) {
  LOAD_REGS();
L_415608: /* 415608: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 41560c: call 0x415396 */
  esp -= 4; W32(esp, 0x415611u); SPILL(); f_415396(); if (g_unwind) return; RELOAD();
/* 415611: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 415613: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415614: jne 0x41561e */
  if (!zf) goto L_41561e;
L_415616: /* 415616: cmp dword ptr [esp + 4], 0x5f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x5fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41561b: je 0x41561e */
  if (zf) goto L_41561e;
L_41561d: /* 41561d: ret  */
  esp += 4; SPILL(); return;
L_41561e: /* 41561e: xor eax, eax */
  eax = 0;
/* 415620: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 415621: ret  */
  esp += 4; SPILL(); return;
}

void f_415622(void) {
  LOAD_REGS();
L_415622: /* 415622: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 415626: call 0x4154fc */
  esp -= 4; W32(esp, 0x41562bu); SPILL(); f_4154fc(); if (g_unwind) return; RELOAD();
/* 41562b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41562d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41562e: jne 0x415638 */
  if (!zf) goto L_415638;
L_415630: /* 415630: cmp dword ptr [esp + 4], 0x5f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x5fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415635: je 0x415638 */
  if (zf) goto L_415638;
L_415637: /* 415637: ret  */
  esp += 4; SPILL(); return;
L_415638: /* 415638: xor eax, eax */
  eax = 0;
/* 41563a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41563b: ret  */
  esp += 4; SPILL(); return;
}

void f_41563c(void) {
  LOAD_REGS();
L_41563c: /* 41563c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 415640: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 415643: ret  */
  esp += 4; SPILL(); return;
}

void f_415644(void) {
  LOAD_REGS();
L_415644: /* 415644: call 0x40137f */
  esp -= 4; W32(esp, 0x415649u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 415649: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 41564c: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415652: je 0x415659 */
  if (zf) goto L_415659;
L_415654: /* 415654: call 0x4025f2 */
  esp -= 4; W32(esp, 0x415659u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_415659: /* 415659: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 41565d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41565e: call 0x401c2f */
  esp -= 4; W32(esp, 0x415663u); SPILL(); f_401c2f(); if (g_unwind) return; RELOAD();
/* 415663: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415664: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415665: ret  */
  esp += 4; SPILL(); return;
}

void f_415666(void) {
  LOAD_REGS();
L_415666: /* 415666: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 415667: mov ebp, esp */
  ebp = esp;
/* 415669: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41566a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41566d: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 415670: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 415676: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 415679: ja 0x415684 */
  if ((!cf && !zf)) goto L_415684;
L_41567b: /* 41567b: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* 41567e: movzx eax, word ptr [ecx + eax*2] */
  eax = (uint32_t)(R16((uint32_t)(ecx + eax*2)));
/* 415682: jmp 0x4156d8 */
  goto L_4156d8;
L_415684: /* 415684: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415685: mov edx, eax */
  edx = eax;
/* 415687: sar edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 41568a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41568b: mov edi, dword ptr [ecx + 0x48] */
  edi = R32((uint32_t)(ecx + 0x48u));
/* 41568e: movzx esi, dl */
  esi = (uint32_t)((edx & 0xffu));
/* 415691: test byte ptr [edi + esi*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + esi*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415696: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 415697: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 415698: je 0x4156a9 */
  if (zf) goto L_4156a9;
L_41569a: /* 41569a: and byte ptr [ebp - 2], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffeu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffeu), r);
  }
/* 41569e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4156a0: mov byte ptr [ebp - 3], al */
  W8((uint32_t)(ebp + 0xfffffffdu), (eax & 0xffu));
/* 4156a3: mov byte ptr [ebp - 4], dl */
  W8((uint32_t)(ebp + 0xfffffffcu), (edx & 0xffu));
/* 4156a6: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4156a7: jmp 0x4156b3 */
  goto L_4156b3;
L_4156a9: /* 4156a9: and byte ptr [ebp - 3], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffdu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffdu), r);
  }
/* 4156ad: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 4156b0: xor eax, eax */
  eax = 0;
/* 4156b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_4156b3: /* 4156b3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4156b5: push dword ptr [ecx + 0x14] */
  { uint32_t v = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, v); }
/* 4156b8: push dword ptr [ecx + 4] */
  { uint32_t v = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, v); }
/* 4156bb: lea ecx, [ebp + 0xe] */
  ecx = (uint32_t)(ebp + 0xeu);
/* 4156be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4156bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4156c0: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 4156c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4156c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4156c6: call 0x40528d */
  esp -= 4; W32(esp, 0x4156cbu); SPILL(); f_40528d(); if (g_unwind) return; RELOAD();
/* 4156cb: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4156ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4156d0: jne 0x4156d4 */
  if (!zf) goto L_4156d4;
L_4156d2: /* 4156d2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4156d3: ret  */
  esp += 4; SPILL(); return;
L_4156d4: /* 4156d4: movzx eax, word ptr [ebp + 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xeu)));
L_4156d8: /* 4156d8: and eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4156db: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4156dc: ret  */
  esp += 4; SPILL(); return;
}

void f_4156dd(void) {
  LOAD_REGS();
L_4156dd: /* 4156dd: call 0x40137f */
  esp -= 4; W32(esp, 0x4156e2u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4156e2: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 4156e5: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4156eb: je 0x4156f2 */
  if (zf) goto L_4156f2;
L_4156ed: /* 4156ed: call 0x4025f2 */
  esp -= 4; W32(esp, 0x4156f2u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_4156f2: /* 4156f2: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4156f6: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4156fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4156fb: call 0x415666 */
  esp -= 4; W32(esp, 0x415700u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 415700: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 415703: ret  */
  esp += 4; SPILL(); return;
}

void f_415704(void) {
  LOAD_REGS();
L_415704: /* 415704: jmp 0x401414 */
  SPILL(); f_401414(); return;
}

void f_415709(void) {
  LOAD_REGS();
L_415709: /* 415709: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41570a: mov ebp, esp */
  ebp = esp;
/* 41570c: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41570f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415711: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 415712: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 415714: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 415715: call 0x4014ee */
  esp -= 4; W32(esp, 0x41571au); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 41571a: mov ebx, esp */
  ebx = esp;
/* 41571c: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 41571e: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 415721: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415722: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415723: call dword ptr [0x439140] */
  esp -= 4; W32(esp, 0x415729u); SPILL(); call_ind(R32(0x439140u)); if (g_unwind) return; /* KERNEL32!VirtualQuery */ RELOAD();
/* 415729: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41572b: je 0x41579e */
  if (zf) goto L_41579e;
L_41572d: /* 41572d: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 415730: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 415733: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415734: call dword ptr [0x43913c] */
  esp -= 4; W32(esp, 0x41573au); SPILL(); call_ind(R32(0x43913cu)); if (g_unwind) return; /* KERNEL32!GetSystemInfo */ RELOAD();
/* 41573a: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 41573d: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 415740: not esi */
  esi = ~esi;
/* 415742: and esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 415744: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 415746: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 415749: mov eax, dword ptr [0x4491d4] */
  eax = R32((uint32_t)(0x4491d4u));
/* 41574e: mov ecx, eax */
  ecx = eax;
/* 415750: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 415751: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 415753: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 415755: and ecx, 0xffff1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffff1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 41575b: add ecx, 0x11000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11000u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 415761: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 415763: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 415765: jb 0x41579e */
  if (cf) goto L_41579e;
L_415767: /* 415767: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41576a: je 0x4157b6 */
  if (zf) goto L_4157b6;
L_41576c: /* 41576c: mov ebx, edi */
  ebx = edi;
/* 41576e: mov edi, 0x1000 */
  edi = 0x1000u;
L_415773: /* 415773: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 415775: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 415778: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415779: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41577a: call dword ptr [0x439140] */
  esp -= 4; W32(esp, 0x415780u); SPILL(); call_ind(R32(0x439140u)); if (g_unwind) return; /* KERNEL32!VirtualQuery */ RELOAD();
/* 415780: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 415782: je 0x41579e */
  if (zf) goto L_41579e;
L_415784: /* 415784: add ebx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 415787: test dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41578a: je 0x415773 */
  if (zf) goto L_415773;
L_41578c: /* 41578c: test byte ptr [ebp - 0xf], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff1u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415790: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 415793: je 0x41579a */
  if (zf) goto L_41579a;
L_415795: /* 415795: xor eax, eax */
  eax = 0;
/* 415797: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 415798: jmp 0x4157d2 */
  goto L_4157d2;
L_41579a: /* 41579a: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41579c: jae 0x4157a2 */
  if (!cf) goto L_4157a2;
L_41579e: /* 41579e: xor eax, eax */
  eax = 0;
/* 4157a0: jmp 0x4157d2 */
  goto L_4157d2;
L_4157a2: /* 4157a2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4157a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4157a5: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4157a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4157a9: call dword ptr [0x439094] */
  esp -= 4; W32(esp, 0x4157afu); SPILL(); call_ind(R32(0x439094u)); if (g_unwind) return; /* KERNEL32!VirtualAlloc */ RELOAD();
/* 4157af: mov eax, dword ptr [0x4491d4] */
  eax = R32((uint32_t)(0x4491d4u));
/* 4157b4: jmp 0x4157b8 */
  goto L_4157b8;
L_4157b6: /* 4157b6: mov ebx, esi */
  ebx = esi;
L_4157b8: /* 4157b8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4157b9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4157bb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4157bd: and eax, 0x103 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x103u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4157c2: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4157c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4157c6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4157c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4157c8: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4157cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4157cc: call dword ptr [0x439138] */
  esp -= 4; W32(esp, 0x4157d2u); SPILL(); call_ind(R32(0x439138u)); if (g_unwind) return; /* KERNEL32!VirtualProtect */ RELOAD();
L_4157d2: /* 4157d2: lea esp, [ebp - 0x54] */
  esp = (uint32_t)(ebp + 0xffffffacu);
/* 4157d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4157d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4157d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4157d8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4157d9: ret  */
  esp += 4; SPILL(); return;
}

void f_4157da(void) {
  LOAD_REGS();
L_4157da: /* 4157da: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4157db: mov ebp, esp */
  ebp = esp;
/* 4157dd: sub esp, 0x420 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x420u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4157e3: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4157e8: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4157eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4157ec: xor edi, edi */
  edi = 0;
/* 4157ee: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4157f1: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4157f4: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 4157f7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 4157fa: jne 0x415803 */
  if (!zf) goto L_415803;
L_4157fc: /* 4157fc: xor eax, eax */
  eax = 0;
/* 4157fe: jmp 0x415971 */
  goto L_415971;
L_415803: /* 415803: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 415806: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415807: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 41580a: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41580d: sar ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 415810: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415811: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 415814: lea ebx, [ebx*4 + 0x449240] */
  ebx = (uint32_t)(ebx*4 + 0x449240u);
/* 41581b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 41581d: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 415820: test byte ptr [eax + esi + 4], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415825: je 0x415836 */
  if (zf) goto L_415836;
L_415827: /* 415827: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 415829: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41582a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41582b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41582e: call 0x415d4d */
  esp -= 4; W32(esp, 0x415833u); SPILL(); f_415d4d(); if (g_unwind) return; RELOAD();
/* 415833: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_415836: /* 415836: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 415838: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41583a: test byte ptr [eax + 4], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41583e: je 0x415908 */
  if (zf) goto L_415908;
L_415844: /* 415844: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 415847: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41584a: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 41584d: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 415850: jbe 0x415943 */
  if ((cf | zf)) goto L_415943;
L_415856: /* 415856: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 415859: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 41585c: lea eax, [ebp - 0x420] */
  eax = (uint32_t)(ebp + 0xfffffbe0u);
/* 415862: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
L_415865: /* 415865: cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 415868: jae 0x415891 */
  if (!cf) goto L_415891;
L_41586a: /* 41586a: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 41586d: inc dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 415870: mov dl, byte ptr [edx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 415872: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 415873: cmp dl, 0xa */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 415876: jne 0x415882 */
  if (!zf) goto L_415882;
L_415878: /* 415878: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 41587b: mov byte ptr [eax], 0xd */
  W8((uint32_t)(eax), 0xdu);
/* 41587e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41587f: inc dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
L_415882: /* 415882: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 415884: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 415885: inc dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 415888: cmp dword ptr [ebp - 0xc], 0x400 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41588f: jl 0x415865 */
  if ((sf != of)) goto L_415865;
L_415891: /* 415891: mov edi, eax */
  edi = eax;
/* 415893: lea eax, [ebp - 0x420] */
  eax = (uint32_t)(ebp + 0xfffffbe0u);
/* 415899: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 41589b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41589d: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4158a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4158a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4158a2: lea eax, [ebp - 0x420] */
  eax = (uint32_t)(ebp + 0xfffffbe0u);
/* 4158a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4158a9: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 4158ab: push dword ptr [esi + eax] */
  { uint32_t v = R32((uint32_t)(esi + eax)); esp -= 4; W32(esp, v); }
/* 4158ae: call dword ptr [0x43901c] */
  esp -= 4; W32(esp, 0x4158b4u); SPILL(); call_ind(R32(0x43901cu)); if (g_unwind) return; /* KERNEL32!WriteFile */ RELOAD();
/* 4158b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4158b6: je 0x4158d1 */
  if (zf) goto L_4158d1;
L_4158b8: /* 4158b8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4158bb: add dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 4158be: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4158c0: jl 0x4158da */
  if ((sf != of)) goto L_4158da;
L_4158c2: /* 4158c2: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4158c5: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4158c8: xor edi, edi */
  edi = 0;
/* 4158ca: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4158cd: jb 0x415856 */
  if (cf) goto L_415856;
L_4158cf: /* 4158cf: jmp 0x4158dc */
  goto L_4158dc;
L_4158d1: /* 4158d1: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4158d7u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4158d7: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_4158da: /* 4158da: xor edi, edi */
  edi = 0;
L_4158dc: /* 4158dc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4158df: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4158e1: jne 0x41596c */
  if (!zf) goto L_41596c;
L_4158e7: /* 4158e7: cmp dword ptr [ebp - 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4158ea: je 0x415943 */
  if (zf) goto L_415943;
L_4158ec: /* 4158ec: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 4158ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4158ef: cmp dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4158f2: jne 0x415935 */
  if (!zf) goto L_415935;
L_4158f4: /* 4158f4: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4158f9u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4158f9: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 4158ff: call 0x4102ae */
  esp -= 4; W32(esp, 0x415904u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 415904: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 415906: jmp 0x41593e */
  goto L_41593e;
L_415908: /* 415908: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 415909: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 41590c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41590d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 415910: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 415913: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 415915: call dword ptr [0x43901c] */
  esp -= 4; W32(esp, 0x41591bu); SPILL(); call_ind(R32(0x43901cu)); if (g_unwind) return; /* KERNEL32!WriteFile */ RELOAD();
/* 41591b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41591d: je 0x41592a */
  if (zf) goto L_41592a;
L_41591f: /* 41591f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 415922: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 415925: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 415928: jmp 0x4158dc */
  goto L_4158dc;
L_41592a: /* 41592a: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x415930u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 415930: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 415933: jmp 0x4158dc */
  goto L_4158dc;
L_415935: /* 415935: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 415938: call 0x4102b7 */
  esp -= 4; W32(esp, 0x41593du); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 41593d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41593e: /* 41593e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 415941: jmp 0x41596f */
  goto L_41596f;
L_415943: /* 415943: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 415945: test byte ptr [eax + esi + 4], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41594a: je 0x415958 */
  if (zf) goto L_415958;
L_41594c: /* 41594c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41594f: cmp byte ptr [eax], 0x1a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x1au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 415952: jne 0x415958 */
  if (!zf) goto L_415958;
L_415954: /* 415954: xor eax, eax */
  eax = 0;
/* 415956: jmp 0x41596f */
  goto L_41596f;
L_415958: /* 415958: call 0x4102a5 */
  esp -= 4; W32(esp, 0x41595du); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 41595d: mov dword ptr [eax], 0x1c */
  W32((uint32_t)(eax), 0x1cu);
/* 415963: call 0x4102ae */
  esp -= 4; W32(esp, 0x415968u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 415968: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 41596a: jmp 0x41593e */
  goto L_41593e;
L_41596c: /* 41596c: sub eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_41596f: /* 41596f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 415970: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_415971: /* 415971: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 415974: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 415977: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 415978: call 0x4013ab */
  esp -= 4; W32(esp, 0x41597du); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 41597d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41597e: ret  */
  esp += 4; SPILL(); return;
}

void f_41597f(void) {
  LOAD_REGS();
L_41597f: /* 41597f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 415981: push 0x43fb80 */
  { uint32_t v = 0x43fb80u; esp -= 4; W32(esp, v); }
/* 415986: call 0x40101f */
  esp -= 4; W32(esp, 0x41598bu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41598b: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 41598e: cmp ebx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 415994: jae 0x415a0e */
  if (!cf) goto L_415a0e;
L_415996: /* 415996: mov eax, ebx */
  eax = ebx;
/* 415998: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 41599b: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 4159a2: mov eax, ebx */
  eax = ebx;
/* 4159a4: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4159a7: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 4159aa: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 4159ad: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4159af: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4159b4: je 0x415a0e */
  if (zf) goto L_415a0e;
L_4159b6: /* 4159b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4159b7: call 0x415fca */
  esp -= 4; W32(esp, 0x4159bcu); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 4159bc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4159bd: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4159c1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4159c3: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4159c8: je 0x4159de */
  if (zf) goto L_4159de;
L_4159ca: /* 4159ca: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4159cd: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4159d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4159d1: call 0x4157da */
  esp -= 4; W32(esp, 0x4159d6u); SPILL(); f_4157da(); if (g_unwind) return; RELOAD();
/* 4159d6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4159d9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 4159dc: jmp 0x4159f5 */
  goto L_4159f5;
L_4159de: /* 4159de: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4159e3u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4159e3: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 4159e9: call 0x4102ae */
  esp -= 4; W32(esp, 0x4159eeu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4159ee: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 4159f1: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_4159f5: /* 4159f5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4159f9: call 0x415a06 */
  esp -= 4; W32(esp, 0x4159feu); SPILL(); f_415a06(); if (g_unwind) return; RELOAD();
/* 4159fe: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 415a01: jmp 0x415a24 */
  goto L_415a24;
L_415a0e: /* 415a0e: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415a13u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415a13: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415a19: call 0x4102ae */
  esp -= 4; W32(esp, 0x415a1eu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 415a1e: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 415a21: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_415a24: /* 415a24: call 0x40105a */
  esp -= 4; W32(esp, 0x415a29u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 415a29: ret  */
  esp += 4; SPILL(); return;
}

void f_415a03(void) {
  LOAD_REGS();
L_415a03: /* 415a03: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_415a06(); return;
}

void f_415a06(void) {
  LOAD_REGS();
L_415a06: /* 415a06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415a07: call 0x41603d */
  esp -= 4; W32(esp, 0x415a0cu); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 415a0c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415a0d: ret  */
  esp += 4; SPILL(); return;
}

void f_415a2a(void) {
  LOAD_REGS();
L_415a2a: /* 415a2a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 415a2c: push 0x43fb90 */
  { uint32_t v = 0x43fb90u; esp -= 4; W32(esp, v); }
/* 415a31: call 0x40101f */
  esp -= 4; W32(esp, 0x415a36u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 415a36: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 415a39: cmp ebx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 415a3f: jae 0x415ad2 */
  if (!cf) goto L_415ad2;
L_415a45: /* 415a45: mov eax, ebx */
  eax = ebx;
/* 415a47: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 415a4a: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 415a51: mov eax, ebx */
  eax = ebx;
/* 415a53: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415a56: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 415a59: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 415a5c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 415a5e: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415a63: je 0x415ad2 */
  if (zf) goto L_415ad2;
L_415a65: /* 415a65: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415a66: call 0x415fca */
  esp -= 4; W32(esp, 0x415a6bu); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 415a6b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415a6c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 415a70: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 415a72: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415a77: je 0x415aaa */
  if (zf) goto L_415aaa;
L_415a79: /* 415a79: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415a7a: call 0x415f89 */
  esp -= 4; W32(esp, 0x415a7fu); SPILL(); f_415f89(); if (g_unwind) return; RELOAD();
/* 415a7f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415a80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415a81: call dword ptr [0x439144] */
  esp -= 4; W32(esp, 0x415a87u); SPILL(); call_ind(R32(0x439144u)); if (g_unwind) return; /* KERNEL32!FlushFileBuffers */ RELOAD();
/* 415a87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 415a89: jne 0x415a96 */
  if (!zf) goto L_415a96;
L_415a8b: /* 415a8b: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x415a91u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 415a91: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 415a94: jmp 0x415a9a */
  goto L_415a9a;
L_415a96: /* 415a96: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_415a9a: /* 415a9a: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415a9e: je 0x415ab9 */
  if (zf) goto L_415ab9;
L_415aa0: /* 415aa0: call 0x4102ae */
  esp -= 4; W32(esp, 0x415aa5u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 415aa5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 415aa8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_415aaa: /* 415aaa: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415aafu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415aaf: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415ab5: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_415ab9: /* 415ab9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 415abd: call 0x415aca */
  esp -= 4; W32(esp, 0x415ac2u); SPILL(); f_415aca(); if (g_unwind) return; RELOAD();
/* 415ac2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 415ac5: jmp 0x415ae0 */
  goto L_415ae0;
L_415ad2: /* 415ad2: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415ad7u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415ad7: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415add: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_415ae0: /* 415ae0: call 0x40105a */
  esp -= 4; W32(esp, 0x415ae5u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 415ae5: ret  */
  esp += 4; SPILL(); return;
}

void f_415ac7(void) {
  LOAD_REGS();
L_415ac7: /* 415ac7: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_415aca(); return;
}

void f_415aca(void) {
  LOAD_REGS();
L_415aca: /* 415aca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415acb: call 0x41603d */
  esp -= 4; W32(esp, 0x415ad0u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 415ad0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415ad1: ret  */
  esp += 4; SPILL(); return;
}

void f_415ae6(void) {
  LOAD_REGS();
L_415ae6: /* 415ae6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 415aea: cmp eax, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 415af0: jb 0x415af5 */
  if (cf) goto L_415af5;
L_415af2: /* 415af2: xor eax, eax */
  eax = 0;
/* 415af4: ret  */
  esp += 4; SPILL(); return;
L_415af5: /* 415af5: mov ecx, eax */
  ecx = eax;
/* 415af7: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415afa: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 415afd: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 415b04: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 415b07: movsx eax, byte ptr [ecx + eax*4 + 4] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + eax*4 + 0x4u)));
/* 415b0c: and eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415b0f: ret  */
  esp += 4; SPILL(); return;
}

void f_415b10(void) {
  LOAD_REGS();
L_415b10: /* 415b10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415b11: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 415b15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 415b16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415b17: call 0x415f89 */
  esp -= 4; W32(esp, 0x415b1cu); SPILL(); f_415f89(); if (g_unwind) return; RELOAD();
/* 415b1c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415b1f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415b20: je 0x415b5e */
  if (zf) goto L_415b5e;
L_415b22: /* 415b22: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415b25: je 0x415b2c */
  if (zf) goto L_415b2c;
L_415b27: /* 415b27: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415b2a: jne 0x415b42 */
  if (!zf) goto L_415b42;
L_415b2c: /* 415b2c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 415b2e: call 0x415f89 */
  esp -= 4; W32(esp, 0x415b33u); SPILL(); f_415f89(); if (g_unwind) return; RELOAD();
/* 415b33: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 415b35: mov edi, eax */
  edi = eax;
/* 415b37: call 0x415f89 */
  esp -= 4; W32(esp, 0x415b3cu); SPILL(); f_415f89(); if (g_unwind) return; RELOAD();
/* 415b3c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415b3e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415b3f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415b40: je 0x415b5e */
  if (zf) goto L_415b5e;
L_415b42: /* 415b42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415b43: call 0x415f89 */
  esp -= 4; W32(esp, 0x415b48u); SPILL(); f_415f89(); if (g_unwind) return; RELOAD();
/* 415b48: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415b49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415b4a: call dword ptr [0x439044] */
  esp -= 4; W32(esp, 0x415b50u); SPILL(); call_ind(R32(0x439044u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
/* 415b50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 415b52: jne 0x415b5e */
  if (!zf) goto L_415b5e;
L_415b54: /* 415b54: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x415b5au); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 415b5a: mov edi, eax */
  edi = eax;
/* 415b5c: jmp 0x415b60 */
  goto L_415b60;
L_415b5e: /* 415b5e: xor edi, edi */
  edi = 0;
L_415b60: /* 415b60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415b61: call 0x415f0a */
  esp -= 4; W32(esp, 0x415b66u); SPILL(); f_415f0a(); if (g_unwind) return; RELOAD();
/* 415b66: mov eax, esi */
  eax = esi;
/* 415b68: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 415b6b: mov eax, dword ptr [eax*4 + 0x449240] */
  eax = R32((uint32_t)(eax*4 + 0x449240u));
/* 415b72: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 415b75: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415b76: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 415b79: and byte ptr [eax + ecx*4 + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx*4 + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + ecx*4 + 0x4u), r);
  }
/* 415b7e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 415b80: je 0x415b8e */
  if (zf) goto L_415b8e;
L_415b82: /* 415b82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 415b83: call 0x4102b7 */
  esp -= 4; W32(esp, 0x415b88u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 415b88: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415b89: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 415b8c: jmp 0x415b90 */
  goto L_415b90;
L_415b8e: /* 415b8e: xor eax, eax */
  eax = 0;
L_415b90: /* 415b90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 415b91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 415b92: ret  */
  esp += 4; SPILL(); return;
}
