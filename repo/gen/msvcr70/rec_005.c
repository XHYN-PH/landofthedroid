#include "recomp.h"
#include "rec_mod.h"

void f_415b93(void) {
  LOAD_REGS();
L_415b93: /* 415b93: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 415b95: push 0x43fba0 */
  { uint32_t v = 0x43fba0u; esp -= 4; W32(esp, v); }
/* 415b9a: call 0x40101f */
  esp -= 4; W32(esp, 0x415b9fu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 415b9f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 415ba2: cmp ebx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 415ba8: jae 0x415c12 */
  if (!cf) goto L_415c12;
L_415baa: /* 415baa: mov eax, ebx */
  eax = ebx;
/* 415bac: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 415baf: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 415bb6: mov eax, ebx */
  eax = ebx;
/* 415bb8: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415bbb: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 415bbe: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 415bc1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 415bc3: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415bc8: je 0x415c12 */
  if (zf) goto L_415c12;
L_415bca: /* 415bca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415bcb: call 0x415fca */
  esp -= 4; W32(esp, 0x415bd0u); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 415bd0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415bd1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 415bd5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 415bd7: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415bdc: je 0x415bea */
  if (zf) goto L_415bea;
L_415bde: /* 415bde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415bdf: call 0x415b10 */
  esp -= 4; W32(esp, 0x415be4u); SPILL(); f_415b10(); if (g_unwind) return; RELOAD();
/* 415be4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415be5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 415be8: jmp 0x415bf9 */
  goto L_415bf9;
L_415bea: /* 415bea: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415befu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415bef: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415bf5: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_415bf9: /* 415bf9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 415bfd: call 0x415c0a */
  esp -= 4; W32(esp, 0x415c02u); SPILL(); f_415c0a(); if (g_unwind) return; RELOAD();
/* 415c02: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 415c05: jmp 0x415c28 */
  goto L_415c28;
L_415c12: /* 415c12: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415c17u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415c17: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415c1d: call 0x4102ae */
  esp -= 4; W32(esp, 0x415c22u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 415c22: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 415c25: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_415c28: /* 415c28: call 0x40105a */
  esp -= 4; W32(esp, 0x415c2du); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 415c2d: ret  */
  esp += 4; SPILL(); return;
}

void f_415c07(void) {
  LOAD_REGS();
L_415c07: /* 415c07: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_415c0a(); return;
}

void f_415c0a(void) {
  LOAD_REGS();
L_415c0a: /* 415c0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415c0b: call 0x41603d */
  esp -= 4; W32(esp, 0x415c10u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 415c10: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415c11: ret  */
  esp += 4; SPILL(); return;
}

void f_415c2e(void) {
  LOAD_REGS();
L_415c2e: /* 415c2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415c2f: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 415c33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415c34: call 0x415f89 */
  esp -= 4; W32(esp, 0x415c39u); SPILL(); f_415f89(); if (g_unwind) return; RELOAD();
/* 415c39: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415c3c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415c3d: jne 0x415c4f */
  if (!zf) goto L_415c4f;
L_415c3f: /* 415c3f: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415c44u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415c44: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415c4a: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 415c4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 415c4e: ret  */
  esp += 4; SPILL(); return;
L_415c4f: /* 415c4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 415c50: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 415c54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 415c56: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 415c5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415c5b: call dword ptr [0x439148] */
  esp -= 4; W32(esp, 0x415c61u); SPILL(); call_ind(R32(0x439148u)); if (g_unwind) return; /* KERNEL32!SetFilePointer */ RELOAD();
/* 415c61: mov edi, eax */
  edi = eax;
/* 415c63: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415c66: jne 0x415c70 */
  if (!zf) goto L_415c70;
L_415c68: /* 415c68: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x415c6eu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 415c6e: jmp 0x415c72 */
  goto L_415c72;
L_415c70: /* 415c70: xor eax, eax */
  eax = 0;
L_415c72: /* 415c72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 415c74: je 0x415c82 */
  if (zf) goto L_415c82;
L_415c76: /* 415c76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415c77: call 0x4102b7 */
  esp -= 4; W32(esp, 0x415c7cu); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 415c7c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415c7d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 415c80: jmp 0x415c9f */
  goto L_415c9f;
L_415c82: /* 415c82: mov ecx, esi */
  ecx = esi;
/* 415c84: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 415c87: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 415c8a: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 415c91: mov eax, esi */
  eax = esi;
/* 415c93: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 415c96: lea eax, [ecx + eax*4 + 4] */
  eax = (uint32_t)(ecx + eax*4 + 0x4u);
/* 415c9a: and byte ptr [eax], 0xfd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0xfdu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 415c9d: mov eax, edi */
  eax = edi;
L_415c9f: /* 415c9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 415ca0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 415ca1: ret  */
  esp += 4; SPILL(); return;
}

void f_415ca2(void) {
  LOAD_REGS();
L_415ca2: /* 415ca2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 415ca4: push 0x43fbb0 */
  { uint32_t v = 0x43fbb0u; esp -= 4; W32(esp, v); }
/* 415ca9: call 0x40101f */
  esp -= 4; W32(esp, 0x415caeu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 415cae: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 415cb1: cmp ebx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 415cb7: jae 0x415d31 */
  if (!cf) goto L_415d31;
L_415cb9: /* 415cb9: mov eax, ebx */
  eax = ebx;
/* 415cbb: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 415cbe: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 415cc5: mov eax, ebx */
  eax = ebx;
/* 415cc7: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415cca: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 415ccd: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 415cd0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 415cd2: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415cd7: je 0x415d31 */
  if (zf) goto L_415d31;
L_415cd9: /* 415cd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415cda: call 0x415fca */
  esp -= 4; W32(esp, 0x415cdfu); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 415cdf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415ce0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 415ce4: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 415ce6: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415ceb: je 0x415d01 */
  if (zf) goto L_415d01;
L_415ced: /* 415ced: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 415cf0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 415cf3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415cf4: call 0x415c2e */
  esp -= 4; W32(esp, 0x415cf9u); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 415cf9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 415cfc: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 415cff: jmp 0x415d18 */
  goto L_415d18;
L_415d01: /* 415d01: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415d06u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415d06: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415d0c: call 0x4102ae */
  esp -= 4; W32(esp, 0x415d11u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 415d11: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 415d14: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_415d18: /* 415d18: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 415d1c: call 0x415d29 */
  esp -= 4; W32(esp, 0x415d21u); SPILL(); f_415d29(); if (g_unwind) return; RELOAD();
/* 415d21: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 415d24: jmp 0x415d47 */
  goto L_415d47;
L_415d31: /* 415d31: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415d36u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415d36: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415d3c: call 0x4102ae */
  esp -= 4; W32(esp, 0x415d41u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 415d41: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 415d44: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_415d47: /* 415d47: call 0x40105a */
  esp -= 4; W32(esp, 0x415d4cu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 415d4c: ret  */
  esp += 4; SPILL(); return;
}

void f_415d26(void) {
  LOAD_REGS();
L_415d26: /* 415d26: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_415d29(); return;
}

void f_415d29(void) {
  LOAD_REGS();
L_415d29: /* 415d29: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415d2a: call 0x41603d */
  esp -= 4; W32(esp, 0x415d2fu); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 415d2f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415d30: ret  */
  esp += 4; SPILL(); return;
}

void f_415d4d(void) {
  LOAD_REGS();
L_415d4d: /* 415d4d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 415d4e: mov ebp, esp */
  ebp = esp;
/* 415d50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 415d51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 415d52: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 415d55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415d56: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 415d59: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 415d5c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 415d5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 415d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415d61: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 415d64: call 0x415f89 */
  esp -= 4; W32(esp, 0x415d69u); SPILL(); f_415f89(); if (g_unwind) return; RELOAD();
/* 415d69: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 415d6c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415d6e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415d6f: jne 0x415d7e */
  if (!zf) goto L_415d7e;
L_415d71: /* 415d71: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415d76u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415d76: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415d7c: jmp 0x415da7 */
  goto L_415da7;
L_415d7e: /* 415d7e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 415d81: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 415d84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 415d85: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 415d88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415d89: call dword ptr [0x439148] */
  esp -= 4; W32(esp, 0x415d8fu); SPILL(); call_ind(R32(0x439148u)); if (g_unwind) return; /* KERNEL32!SetFilePointer */ RELOAD();
/* 415d8f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415d91: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 415d94: jne 0x415dad */
  if (!zf) goto L_415dad;
L_415d96: /* 415d96: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x415d9cu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 415d9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 415d9e: je 0x415dad */
  if (zf) goto L_415dad;
L_415da0: /* 415da0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415da1: call 0x4102b7 */
  esp -= 4; W32(esp, 0x415da6u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 415da6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_415da7: /* 415da7: mov eax, edi */
  eax = edi;
/* 415da9: mov edx, edi */
  edx = edi;
/* 415dab: jmp 0x415dcc */
  goto L_415dcc;
L_415dad: /* 415dad: mov eax, esi */
  eax = esi;
/* 415daf: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 415db2: mov eax, dword ptr [eax*4 + 0x449240] */
  eax = R32((uint32_t)(eax*4 + 0x449240u));
/* 415db9: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 415dbc: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 415dbf: lea eax, [eax + ecx*4 + 4] */
  eax = (uint32_t)(eax + ecx*4 + 0x4u);
/* 415dc3: and byte ptr [eax], 0xfd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0xfdu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 415dc6: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 415dc9: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
L_415dcc: /* 415dcc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 415dcd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 415dce: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 415dcf: ret  */
  esp += 4; SPILL(); return;
}

void f_415dd0(void) {
  LOAD_REGS();
L_415dd0: /* 415dd0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 415dd2: push 0x43fbc0 */
  { uint32_t v = 0x43fbc0u; esp -= 4; W32(esp, v); }
/* 415dd7: call 0x40101f */
  esp -= 4; W32(esp, 0x415ddcu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 415ddc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 415ddf: cmp ebx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 415de5: jae 0x415e70 */
  if (!cf) goto L_415e70;
L_415deb: /* 415deb: mov eax, ebx */
  eax = ebx;
/* 415ded: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 415df0: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 415df7: mov eax, ebx */
  eax = ebx;
/* 415df9: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415dfc: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 415dff: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 415e02: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 415e04: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415e09: je 0x415e70 */
  if (zf) goto L_415e70;
L_415e0b: /* 415e0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415e0c: call 0x415fca */
  esp -= 4; W32(esp, 0x415e11u); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 415e11: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415e12: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 415e16: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 415e18: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415e1d: je 0x415e39 */
  if (zf) goto L_415e39;
L_415e1f: /* 415e1f: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 415e22: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 415e25: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 415e28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415e29: call 0x415d4d */
  esp -= 4; W32(esp, 0x415e2eu); SPILL(); f_415d4d(); if (g_unwind) return; RELOAD();
/* 415e2e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 415e31: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 415e34: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 415e37: jmp 0x415e54 */
  goto L_415e54;
L_415e39: /* 415e39: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415e3eu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415e3e: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415e44: call 0x4102ae */
  esp -= 4; W32(esp, 0x415e49u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 415e49: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 415e4c: or dword ptr [ebp - 0x20], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 415e50: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_415e54: /* 415e54: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 415e58: call 0x415e68 */
  esp -= 4; W32(esp, 0x415e5du); SPILL(); f_415e68(); if (g_unwind) return; RELOAD();
/* 415e5d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 415e60: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 415e63: jmp 0x415e88 */
  goto L_415e88;
L_415e70: /* 415e70: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415e75u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415e75: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415e7b: call 0x4102ae */
  esp -= 4; W32(esp, 0x415e80u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 415e80: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 415e83: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 415e86: mov eax, edx */
  eax = edx;
L_415e88: /* 415e88: call 0x40105a */
  esp -= 4; W32(esp, 0x415e8du); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 415e8d: ret  */
  esp += 4; SPILL(); return;
}

void f_415e65(void) {
  LOAD_REGS();
L_415e65: /* 415e65: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_415e68(); return;
}

void f_415e68(void) {
  LOAD_REGS();
L_415e68: /* 415e68: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415e69: call 0x41603d */
  esp -= 4; W32(esp, 0x415e6eu); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 415e6e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415e6f: ret  */
  esp += 4; SPILL(); return;
}

void f_415e8e(void) {
  LOAD_REGS();
L_415e8e: /* 415e8e: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 415e92: cmp ecx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 415e98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415e99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 415e9a: jae 0x415ef1 */
  if (!cf) goto L_415ef1;
L_415e9c: /* 415e9c: mov eax, ecx */
  eax = ecx;
/* 415e9e: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 415ea1: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 415ea8: mov eax, ecx */
  eax = ecx;
/* 415eaa: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415ead: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 415eb0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 415eb2: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 415eb5: cmp dword ptr [esi + eax], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415eb9: jne 0x415ef1 */
  if (!zf) goto L_415ef1;
L_415ebb: /* 415ebb: cmp dword ptr [0x44afbc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44afbcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415ec2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415ec3: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 415ec7: jne 0x415ee7 */
  if (!zf) goto L_415ee7;
L_415ec9: /* 415ec9: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 415ecc: je 0x415ede */
  if (zf) goto L_415ede;
L_415ece: /* 415ece: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 415ecf: je 0x415ed9 */
  if (zf) goto L_415ed9;
L_415ed1: /* 415ed1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 415ed2: jne 0x415ee7 */
  if (!zf) goto L_415ee7;
L_415ed4: /* 415ed4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415ed5: push -0xc */
  { uint32_t v = 0xfffffff4u; esp -= 4; W32(esp, v); }
/* 415ed7: jmp 0x415ee1 */
  goto L_415ee1;
L_415ed9: /* 415ed9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415eda: push -0xb */
  { uint32_t v = 0xfffffff5u; esp -= 4; W32(esp, v); }
/* 415edc: jmp 0x415ee1 */
  goto L_415ee1;
L_415ede: /* 415ede: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415edf: push -0xa */
  { uint32_t v = 0xfffffff6u; esp -= 4; W32(esp, v); }
L_415ee1: /* 415ee1: call dword ptr [0x43914c] */
  esp -= 4; W32(esp, 0x415ee7u); SPILL(); call_ind(R32(0x43914cu)); if (g_unwind) return; /* KERNEL32!SetStdHandle */ RELOAD();
L_415ee7: /* 415ee7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 415ee9: mov dword ptr [esi + eax], ebx */
  W32((uint32_t)(esi + eax), ebx);
/* 415eec: xor eax, eax */
  eax = 0;
/* 415eee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 415eef: jmp 0x415f07 */
  goto L_415f07;
L_415ef1: /* 415ef1: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415ef6u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415ef6: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415efc: call 0x4102ae */
  esp -= 4; W32(esp, 0x415f01u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 415f01: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 415f04: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_415f07: /* 415f07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 415f08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 415f09: ret  */
  esp += 4; SPILL(); return;
}

void f_415f0a(void) {
  LOAD_REGS();
L_415f0a: /* 415f0a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 415f0e: cmp ecx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 415f14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415f15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 415f16: jae 0x415f70 */
  if (!cf) goto L_415f70;
L_415f18: /* 415f18: mov eax, ecx */
  eax = ecx;
/* 415f1a: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 415f1d: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 415f24: mov eax, ecx */
  eax = ecx;
/* 415f26: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415f29: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 415f2c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 415f2e: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 415f31: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 415f33: test byte ptr [eax + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415f37: je 0x415f70 */
  if (zf) goto L_415f70;
L_415f39: /* 415f39: cmp dword ptr [eax], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415f3c: je 0x415f70 */
  if (zf) goto L_415f70;
L_415f3e: /* 415f3e: cmp dword ptr [0x44afbc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44afbcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415f45: jne 0x415f66 */
  if (!zf) goto L_415f66;
L_415f47: /* 415f47: xor eax, eax */
  eax = 0;
/* 415f49: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 415f4b: je 0x415f5d */
  if (zf) goto L_415f5d;
L_415f4d: /* 415f4d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 415f4e: je 0x415f58 */
  if (zf) goto L_415f58;
L_415f50: /* 415f50: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 415f51: jne 0x415f66 */
  if (!zf) goto L_415f66;
L_415f53: /* 415f53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415f54: push -0xc */
  { uint32_t v = 0xfffffff4u; esp -= 4; W32(esp, v); }
/* 415f56: jmp 0x415f60 */
  goto L_415f60;
L_415f58: /* 415f58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415f59: push -0xb */
  { uint32_t v = 0xfffffff5u; esp -= 4; W32(esp, v); }
/* 415f5b: jmp 0x415f60 */
  goto L_415f60;
L_415f5d: /* 415f5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 415f5e: push -0xa */
  { uint32_t v = 0xfffffff6u; esp -= 4; W32(esp, v); }
L_415f60: /* 415f60: call dword ptr [0x43914c] */
  esp -= 4; W32(esp, 0x415f66u); SPILL(); call_ind(R32(0x43914cu)); if (g_unwind) return; /* KERNEL32!SetStdHandle */ RELOAD();
L_415f66: /* 415f66: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 415f68: or dword ptr [esi + eax], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + eax), r);
  }
/* 415f6c: xor eax, eax */
  eax = 0;
/* 415f6e: jmp 0x415f86 */
  goto L_415f86;
L_415f70: /* 415f70: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415f75u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415f75: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415f7b: call 0x4102ae */
  esp -= 4; W32(esp, 0x415f80u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 415f80: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 415f83: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_415f86: /* 415f86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 415f87: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 415f88: ret  */
  esp += 4; SPILL(); return;
}

void f_415f89(void) {
  LOAD_REGS();
L_415f89: /* 415f89: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 415f8d: cmp eax, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 415f93: jae 0x415fb3 */
  if (!cf) goto L_415fb3;
L_415f95: /* 415f95: mov ecx, eax */
  ecx = eax;
/* 415f97: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415f9a: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 415f9d: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 415fa4: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 415fa7: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 415faa: test byte ptr [eax + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 415fae: je 0x415fb3 */
  if (zf) goto L_415fb3;
L_415fb0: /* 415fb0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 415fb2: ret  */
  esp += 4; SPILL(); return;
L_415fb3: /* 415fb3: call 0x4102a5 */
  esp -= 4; W32(esp, 0x415fb8u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 415fb8: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 415fbe: call 0x4102ae */
  esp -= 4; W32(esp, 0x415fc3u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 415fc3: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 415fc6: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 415fc9: ret  */
  esp += 4; SPILL(); return;
}

void f_415fca(void) {
  LOAD_REGS();
L_415fca: /* 415fca: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 415fce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 415fcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 415fd0: mov ecx, eax */
  ecx = eax;
/* 415fd2: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 415fd5: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 415fd8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 415fd9: lea ebx, [ecx*4 + 0x449240] */
  ebx = (uint32_t)(ecx*4 + 0x449240u);
/* 415fe0: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 415fe2: lea edi, [eax + eax*8] */
  edi = (uint32_t)(eax + eax*8);
/* 415fe5: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 415fe8: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 415fea: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415fee: jne 0x416029 */
  if (!zf) goto L_416029;
L_415ff0: /* 415ff0: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 415ff2: call 0x4011b7 */
  esp -= 4; W32(esp, 0x415ff7u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 415ff7: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 415ffb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 415ffc: jne 0x416021 */
  if (!zf) goto L_416021;
L_415ffe: /* 415ffe: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 416001: push 0xfa0 */
  { uint32_t v = 0xfa0u; esp -= 4; W32(esp, v); }
/* 416006: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416007: call 0x404bf7 */
  esp -= 4; W32(esp, 0x41600cu); SPILL(); f_404bf7(); if (g_unwind) return; RELOAD();
/* 41600c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41600e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41600f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416010: jne 0x41601e */
  if (!zf) goto L_41601e;
L_416012: /* 416012: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 416014: call 0x4011d9 */
  esp -= 4; W32(esp, 0x416019u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 416019: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41601a: xor eax, eax */
  eax = 0;
/* 41601c: jmp 0x416039 */
  goto L_416039;
L_41601e: /* 41601e: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
L_416021: /* 416021: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 416023: call 0x4011d9 */
  esp -= 4; W32(esp, 0x416028u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 416028: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416029: /* 416029: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 41602b: lea eax, [eax + edi + 0xc] */
  eax = (uint32_t)(eax + edi + 0xcu);
/* 41602f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416030: call dword ptr [0x43903c] */
  esp -= 4; W32(esp, 0x416036u); SPILL(); call_ind(R32(0x43903cu)); if (g_unwind) return; /* KERNEL32!EnterCriticalSection */ RELOAD();
/* 416036: xor eax, eax */
  eax = 0;
/* 416038: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_416039: /* 416039: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41603a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41603b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41603c: ret  */
  esp += 4; SPILL(); return;
}

void f_41603d(void) {
  LOAD_REGS();
L_41603d: /* 41603d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 416041: mov ecx, eax */
  ecx = eax;
/* 416043: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 416046: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 416049: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 416050: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 416053: lea eax, [ecx + eax*4 + 0xc] */
  eax = (uint32_t)(ecx + eax*4 + 0xcu);
/* 416057: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416058: call dword ptr [0x439038] */
  esp -= 4; W32(esp, 0x41605eu); SPILL(); call_ind(R32(0x439038u)); if (g_unwind) return; /* KERNEL32!LeaveCriticalSection */ RELOAD();
/* 41605e: ret  */
  esp += 4; SPILL(); return;
}

void f_41605f(void) {
  LOAD_REGS();
L_41605f: /* 41605f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 416060: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 416061: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 416062: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 416064: or ebp, 0xffffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 416067: call 0x40fa82 */
  esp -= 4; W32(esp, 0x41606cu); SPILL(); f_40fa82(); if (g_unwind) return; RELOAD();
/* 41606c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41606e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41606f: je 0x4161a6 */
  if (zf) goto L_4161a6;
L_416075: /* 416075: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416077: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416078: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 41607a: call 0x4011b7 */
  esp -= 4; W32(esp, 0x41607fu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 41607f: xor ebx, ebx */
  ebx = 0;
/* 416081: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416082: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 416086: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 41608a: mov edi, 0x449240 */
  edi = 0x449240u;
L_41608f: /* 41608f: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 416091: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416093: je 0x416146 */
  if (zf) goto L_416146;
L_416099: /* 416099: lea eax, [esi + 0x480] */
  eax = (uint32_t)(esi + 0x480u);
/* 41609f: jmp 0x4160ff */
  goto L_4160ff;
L_4160a1: /* 4160a1: test byte ptr [esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4160a5: jne 0x4160f5 */
  if (!zf) goto L_4160f5;
L_4160a7: /* 4160a7: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4160ab: jne 0x4160da */
  if (!zf) goto L_4160da;
L_4160ad: /* 4160ad: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4160af: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4160b4u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4160b4: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4160b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4160b9: jne 0x4160d2 */
  if (!zf) goto L_4160d2;
L_4160bb: /* 4160bb: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 4160be: push 0xfa0 */
  { uint32_t v = 0xfa0u; esp -= 4; W32(esp, v); }
/* 4160c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4160c4: call 0x404bf7 */
  esp -= 4; W32(esp, 0x4160c9u); SPILL(); f_404bf7(); if (g_unwind) return; RELOAD();
/* 4160c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4160cb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4160cc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4160cd: je 0x41613c */
  if (zf) goto L_41613c;
L_4160cf: /* 4160cf: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
L_4160d2: /* 4160d2: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4160d4: call 0x4011d9 */
  esp -= 4; W32(esp, 0x4160d9u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 4160d9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4160da: /* 4160da: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
/* 4160dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4160de: call dword ptr [0x43903c] */
  esp -= 4; W32(esp, 0x4160e4u); SPILL(); call_ind(R32(0x43903cu)); if (g_unwind) return; /* KERNEL32!EnterCriticalSection */ RELOAD();
/* 4160e4: test byte ptr [esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4160e8: je 0x416105 */
  if (zf) goto L_416105;
L_4160ea: /* 4160ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4160eb: call dword ptr [0x439038] */
  esp -= 4; W32(esp, 0x4160f1u); SPILL(); call_ind(R32(0x439038u)); if (g_unwind) return; /* KERNEL32!LeaveCriticalSection */ RELOAD();
/* 4160f1: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_4160f5: /* 4160f5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4160f7: add esi, 0x24 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4160fa: add eax, 0x480 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_4160ff: /* 4160ff: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 416101: jb 0x4160a1 */
  if (cf) goto L_4160a1;
L_416103: /* 416103: jmp 0x416121 */
  goto L_416121;
L_416105: /* 416105: or dword ptr [esi], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 416108: mov eax, esi */
  eax = esi;
/* 41610a: sub eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41610c: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 41610e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 41610f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416110: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x416110);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 416112: mov ebp, eax */
  ebp = eax;
/* 416114: add ebp, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 416118: cmp ebp, -1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41611b: jne 0x41619b */
  if (!zf) goto L_41619b;
L_41611d: /* 41611d: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_416121: /* 416121: add dword ptr [esp + 0x14], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 416126: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 416127: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 41612a: cmp edi, 0x449340 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x449340u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 416130: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 416134: jl 0x41608f */
  if ((sf != of)) goto L_41608f;
L_41613a: /* 41613a: jmp 0x41619b */
  goto L_41619b;
L_41613c: /* 41613c: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 41613e: call 0x4011d9 */
  esp -= 4; W32(esp, 0x416143u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 416143: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416144: jmp 0x416198 */
  goto L_416198;
L_416146: /* 416146: mov esi, 0x480 */
  esi = 0x480u;
/* 41614b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41614c: call 0x4010eb */
  esp -= 4; W32(esp, 0x416151u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 416151: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416153: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416154: je 0x41619b */
  if (zf) goto L_41619b;
L_416156: /* 416156: add dword ptr [0x44b130], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b130u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0x44b130u), r);
  }
/* 41615d: lea ecx, [ebx*4 + 0x449240] */
  ecx = (uint32_t)(ebx*4 + 0x449240u);
/* 416164: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 416166: lea edx, [eax + 0x480] */
  edx = (uint32_t)(eax + 0x480u);
/* 41616c: jmp 0x416184 */
  goto L_416184;
L_41616e: /* 41616e: and byte ptr [eax + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + 0x4u), r);
  }
/* 416172: or dword ptr [eax], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 416175: and dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 416179: mov byte ptr [eax + 5], 0xa */
  W8((uint32_t)(eax + 0x5u), 0xau);
/* 41617d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 41617f: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 416182: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_416184: /* 416184: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 416186: jb 0x41616e */
  if (cf) goto L_41616e;
L_416188: /* 416188: shl ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 41618b: mov ebp, ebx */
  ebp = ebx;
/* 41618d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41618e: call 0x415fca */
  esp -= 4; W32(esp, 0x416193u); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 416193: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416195: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416196: jne 0x41619b */
  if (!zf) goto L_41619b;
L_416198: /* 416198: or ebp, 0xffffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
L_41619b: /* 41619b: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 41619d: call 0x4011d9 */
  esp -= 4; W32(esp, 0x4161a2u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 4161a2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4161a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4161a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4161a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4161a6: /* 4161a6: mov eax, ebp */
  eax = ebp;
/* 4161a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4161a9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4161aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4161ab: ret  */
  esp += 4; SPILL(); return;
}

void f_4161ac(void) {
  LOAD_REGS();
L_4161ac: /* 4161ac: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4161ad: mov ebp, esp */
  ebp = esp;
/* 4161af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4161b0: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 4161b2: test byte ptr [ebp + 0xc], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4161b6: je 0x4161bb */
  if (zf) goto L_4161bb;
L_4161b8: /* 4161b8: add bl, 0x20 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_4161bb: /* 4161bb: test byte ptr [ebp + 0xd], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xdu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4161bf: je 0x4161c4 */
  if (zf) goto L_4161c4;
L_4161c1: /* 4161c1: or bl, 0x80 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_4161c4: /* 4161c4: test byte ptr [ebp + 0xc], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4161c8: je 0x4161cd */
  if (zf) goto L_4161cd;
L_4161ca: /* 4161ca: or bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_4161cd: /* 4161cd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4161d0: call dword ptr [0x4390a4] */
  esp -= 4; W32(esp, 0x4161d6u); SPILL(); call_ind(R32(0x4390a4u)); if (g_unwind) return; /* KERNEL32!GetFileType */ RELOAD();
/* 4161d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4161d8: jne 0x4161ec */
  if (!zf) goto L_4161ec;
L_4161da: /* 4161da: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4161e0u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4161e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4161e1: call 0x4102b7 */
  esp -= 4; W32(esp, 0x4161e6u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 4161e6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4161e7: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4161ea: jmp 0x416252 */
  goto L_416252;
L_4161ec: /* 4161ec: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4161ef: jne 0x4161f6 */
  if (!zf) goto L_4161f6;
L_4161f1: /* 4161f1: or bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4161f4: jmp 0x4161fe */
  goto L_4161fe;
L_4161f6: /* 4161f6: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4161f9: jne 0x4161fe */
  if (!zf) goto L_4161fe;
L_4161fb: /* 4161fb: or bl, 8 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_4161fe: /* 4161fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4161ff: call 0x41605f */
  esp -= 4; W32(esp, 0x416204u); SPILL(); f_41605f(); if (g_unwind) return; RELOAD();
/* 416204: mov esi, eax */
  esi = eax;
/* 416206: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416209: jne 0x416222 */
  if (!zf) goto L_416222;
L_41620b: /* 41620b: call 0x4102a5 */
  esp -= 4; W32(esp, 0x416210u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 416210: mov dword ptr [eax], 0x18 */
  W32((uint32_t)(eax), 0x18u);
/* 416216: call 0x4102ae */
  esp -= 4; W32(esp, 0x41621bu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 41621b: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 41621e: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 416220: jmp 0x416251 */
  goto L_416251;
L_416222: /* 416222: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416225: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416226: call 0x415e8e */
  esp -= 4; W32(esp, 0x41622bu); SPILL(); f_415e8e(); if (g_unwind) return; RELOAD();
/* 41622b: mov ecx, esi */
  ecx = esi;
/* 41622d: mov eax, esi */
  eax = esi;
/* 41622f: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 416232: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 416239: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41623c: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 41623f: or bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 416242: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416243: mov byte ptr [ecx + eax*4 + 4], bl */
  W8((uint32_t)(ecx + eax*4 + 0x4u), (ebx & 0xffu));
/* 416247: call 0x41603d */
  esp -= 4; W32(esp, 0x41624cu); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 41624c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41624f: mov eax, esi */
  eax = esi;
L_416251: /* 416251: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_416252: /* 416252: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 416253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 416254: ret  */
  esp += 4; SPILL(); return;
}

void f_416255(void) {
  LOAD_REGS();
L_416255: /* 416255: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 416259: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41625b: je 0x41626a */
  if (zf) goto L_41626a;
L_41625d: /* 41625d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 41625e: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 416262: je 0x41626b */
  if (zf) goto L_41626b;
L_416264: /* 416264: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 416265: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 416266: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416268: jne 0x41625d */
  if (!zf) goto L_41625d;
L_41626a: /* 41626a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
L_41626b: /* 41626b: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41626f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 416271: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 416272: ret  */
  esp += 4; SPILL(); return;
}

void f_416273(void) {
  LOAD_REGS();
L_416273: /* 416273: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 416275: push 0x43fbd0 */
  { uint32_t v = 0x43fbd0u; esp -= 4; W32(esp, v); }
/* 41627a: call 0x40101f */
  esp -= 4; W32(esp, 0x41627fu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41627f: xor esi, esi */
  esi = 0;
/* 416281: xor ebx, ebx */
  ebx = 0;
/* 416283: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 416284: cmp dword ptr [0x44f450], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f450u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41628a: jne 0x4162be */
  if (!zf) goto L_4162be;
L_41628c: /* 41628c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41628d: mov eax, 0x43e0f4 */
  eax = 0x43e0f4u;
/* 416292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416293: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416294: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416295: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416296: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416297: call dword ptr [0x439154] */
  esp -= 4; W32(esp, 0x41629du); SPILL(); call_ind(R32(0x439154u)); if (g_unwind) return; /* KERNEL32!CompareStringW */ RELOAD();
/* 41629d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41629f: je 0x4162a9 */
  if (zf) goto L_4162a9;
L_4162a1: /* 4162a1: mov dword ptr [0x44f450], ebx */
  W32((uint32_t)(0x44f450u), ebx);
/* 4162a7: jmp 0x4162be */
  goto L_4162be;
L_4162a9: /* 4162a9: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4162afu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4162af: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4162b2: jne 0x4162be */
  if (!zf) goto L_4162be;
L_4162b4: /* 4162b4: mov dword ptr [0x44f450], 2 */
  W32((uint32_t)(0x44f450u), 0x2u);
L_4162be: /* 4162be: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 4162c1: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4162c3: jle 0x4162d4 */
  if ((zf || sf != of)) goto L_4162d4;
L_4162c5: /* 4162c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4162c6: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4162c9: call 0x416255 */
  esp -= 4; W32(esp, 0x4162ceu); SPILL(); f_416255(); if (g_unwind) return; RELOAD();
/* 4162ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4162cf: mov edi, eax */
  edi = eax;
/* 4162d1: mov dword ptr [ebp + 0x14], edi */
  W32((uint32_t)(ebp + 0x14u), edi);
L_4162d4: /* 4162d4: cmp dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4162d7: jle 0x4162e8 */
  if ((zf || sf != of)) goto L_4162e8;
L_4162d9: /* 4162d9: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4162dc: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4162df: call 0x416255 */
  esp -= 4; W32(esp, 0x4162e4u); SPILL(); f_416255(); if (g_unwind) return; RELOAD();
/* 4162e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4162e5: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
L_4162e8: /* 4162e8: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4162ea: je 0x4164a3 */
  if (zf) goto L_4164a3;
L_4162f0: /* 4162f0: cmp dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4162f3: je 0x4164a3 */
  if (zf) goto L_4164a3;
L_4162f9: /* 4162f9: mov eax, dword ptr [0x44f450] */
  eax = R32((uint32_t)(0x44f450u));
/* 4162fe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416300: jne 0x41631d */
  if (!zf) goto L_41631d;
L_416302: /* 416302: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 416305: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 416308: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416309: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41630c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41630f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416312: call dword ptr [0x439154] */
  esp -= 4; W32(esp, 0x416318u); SPILL(); call_ind(R32(0x439154u)); if (g_unwind) return; /* KERNEL32!CompareStringW */ RELOAD();
/* 416318: jmp 0x4164bc */
  goto L_4164bc;
L_41631d: /* 41631d: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416320: je 0x416326 */
  if (zf) goto L_416326;
L_416322: /* 416322: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416324: jne 0x416378 */
  if (!zf) goto L_416378;
L_416326: /* 416326: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 416329: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 41632c: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 41632f: cmp dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416332: jne 0x41633c */
  if (!zf) goto L_41633c;
L_416334: /* 416334: mov eax, dword ptr [0x449220] */
  eax = R32((uint32_t)(0x449220u));
/* 416339: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_41633c: /* 41633c: cmp dword ptr [ebp + 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41633f: jne 0x416349 */
  if (!zf) goto L_416349;
L_416341: /* 416341: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 416346: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
L_416349: /* 416349: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41634c: call 0x4136de */
  esp -= 4; W32(esp, 0x416351u); SPILL(); f_4136de(); if (g_unwind) return; RELOAD();
/* 416351: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416352: cmp dword ptr [ebp + 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416355: je 0x41635f */
  if (zf) goto L_41635f;
L_416357: /* 416357: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41635a: je 0x41635f */
  if (zf) goto L_41635f;
L_41635c: /* 41635c: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
L_41635f: /* 41635f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416361: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416362: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416363: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416364: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 416367: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416368: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 41636b: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x416371u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 416371: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 416374: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416376: jne 0x41637f */
  if (!zf) goto L_41637f;
L_416378: /* 416378: xor eax, eax */
  eax = 0;
/* 41637a: jmp 0x4164bc */
  goto L_4164bc;
L_41637f: /* 41637f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 416382: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 416385: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 416388: call 0x4014ee */
  esp -= 4; W32(esp, 0x41638du); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 41638d: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 416390: mov eax, esp */
  eax = esp;
/* 416392: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 416395: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 416399: jmp 0x4163b3 */
  goto L_4163b3;
L_4163b3: /* 4163b3: cmp dword ptr [ebp - 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4163b6: jne 0x4163cb */
  if (!zf) goto L_4163cb;
L_4163b8: /* 4163b8: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 4163bb: call 0x4010eb */
  esp -= 4; W32(esp, 0x4163c0u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4163c0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4163c1: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 4163c4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4163c6: je 0x416378 */
  if (zf) goto L_416378;
L_4163c8: /* 4163c8: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_4163cb: /* 4163cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163cd: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 4163d0: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4163d3: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4163d6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4163d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163da: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4163dd: mov edi, dword ptr [0x4390d0] */
  edi = R32((uint32_t)(0x4390d0u));
/* 4163e3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x4163e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4163e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4163e7: je 0x416490 */
  if (zf) goto L_416490;
L_4163ed: /* 4163ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163f1: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4163f4: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4163f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163f8: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4163fb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x4163fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4163fd: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 416400: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416402: je 0x416490 */
  if (zf) goto L_416490;
L_416408: /* 416408: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 41640b: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41640e: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 416411: call 0x4014ee */
  esp -= 4; W32(esp, 0x416416u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 416416: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 416419: mov edi, esp */
  edi = esp;
/* 41641b: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 41641e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 416422: jmp 0x41643b */
  goto L_41643b;
L_41643b: /* 41643b: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41643d: jne 0x416451 */
  if (!zf) goto L_416451;
L_41643f: /* 41643f: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 416442: call 0x4010eb */
  esp -= 4; W32(esp, 0x416447u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 416447: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416448: mov edi, eax */
  edi = eax;
/* 41644a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41644c: je 0x416490 */
  if (zf) goto L_416490;
L_41644e: /* 41644e: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
L_416451: /* 416451: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416452: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416453: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 416456: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416457: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 41645a: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41645d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41645e: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 416461: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x416467u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 416467: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416469: je 0x416484 */
  if (zf) goto L_416484;
L_41646b: /* 41646b: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 41646e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41646f: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 416472: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416475: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 416478: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41647b: call dword ptr [0x439150] */
  esp -= 4; W32(esp, 0x416481u); SPILL(); call_ind(R32(0x439150u)); if (g_unwind) return; /* KERNEL32!CompareStringA */ RELOAD();
/* 416481: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_416484: /* 416484: cmp dword ptr [ebp - 0x24], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416487: je 0x416490 */
  if (zf) goto L_416490;
L_416489: /* 416489: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41648a: call 0x401156 */
  esp -= 4; W32(esp, 0x41648fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41648f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416490: /* 416490: cmp dword ptr [ebp - 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416493: je 0x41649e */
  if (zf) goto L_41649e;
L_416495: /* 416495: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416498: call 0x401156 */
  esp -= 4; W32(esp, 0x41649du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41649d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41649e: /* 41649e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4164a1: jmp 0x4164bc */
  goto L_4164bc;
L_4164a3: /* 4164a3: mov eax, edi */
  eax = edi;
/* 4164a5: sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4164a8: jne 0x4164af */
  if (!zf) goto L_4164af;
L_4164aa: /* 4164aa: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4164ac: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4164ad: jmp 0x4164bc */
  goto L_4164bc;
L_4164af: /* 4164af: xor ecx, ecx */
  ecx = 0;
/* 4164b1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4164b3: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 4164b6: lea ecx, [ecx + ecx + 1] */
  ecx = (uint32_t)(ecx + ecx + 0x1u);
/* 4164ba: mov eax, ecx */
  eax = ecx;
L_4164bc: /* 4164bc: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 4164bf: call 0x40105a */
  esp -= 4; W32(esp, 0x4164c4u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4164c4: ret  */
  esp += 4; SPILL(); return;
}

void f_41637f(void) {
  LOAD_REGS();
  goto L_41637f;
L_416378: /* 416378: xor eax, eax */
  eax = 0;
/* 41637a: jmp 0x4164bc */
  goto L_4164bc;
L_41637f: /* 41637f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 416382: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 416385: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 416388: call 0x4014ee */
  esp -= 4; W32(esp, 0x41638du); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 41638d: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 416390: mov eax, esp */
  eax = esp;
/* 416392: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 416395: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 416399: jmp 0x4163b3 */
  goto L_4163b3;
L_4163b3: /* 4163b3: cmp dword ptr [ebp - 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4163b6: jne 0x4163cb */
  if (!zf) goto L_4163cb;
L_4163b8: /* 4163b8: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 4163bb: call 0x4010eb */
  esp -= 4; W32(esp, 0x4163c0u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4163c0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4163c1: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 4163c4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4163c6: je 0x416378 */
  if (zf) goto L_416378;
L_4163c8: /* 4163c8: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_4163cb: /* 4163cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163cd: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 4163d0: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4163d3: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4163d6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4163d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163da: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4163dd: mov edi, dword ptr [0x4390d0] */
  edi = R32((uint32_t)(0x4390d0u));
/* 4163e3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x4163e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4163e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4163e7: je 0x416490 */
  if (zf) goto L_416490;
L_4163ed: /* 4163ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163f1: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4163f4: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4163f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163f8: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4163fb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x4163fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4163fd: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 416400: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416402: je 0x416490 */
  if (zf) goto L_416490;
L_416408: /* 416408: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 41640b: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41640e: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 416411: call 0x4014ee */
  esp -= 4; W32(esp, 0x416416u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 416416: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 416419: mov edi, esp */
  edi = esp;
/* 41641b: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 41641e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 416422: jmp 0x41643b */
  goto L_41643b;
L_41643b: /* 41643b: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41643d: jne 0x416451 */
  if (!zf) goto L_416451;
L_41643f: /* 41643f: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 416442: call 0x4010eb */
  esp -= 4; W32(esp, 0x416447u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 416447: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416448: mov edi, eax */
  edi = eax;
/* 41644a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41644c: je 0x416490 */
  if (zf) goto L_416490;
L_41644e: /* 41644e: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
L_416451: /* 416451: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416452: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416453: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 416456: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416457: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 41645a: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41645d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41645e: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 416461: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x416467u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 416467: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416469: je 0x416484 */
  if (zf) goto L_416484;
L_41646b: /* 41646b: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 41646e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41646f: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 416472: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416475: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 416478: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41647b: call dword ptr [0x439150] */
  esp -= 4; W32(esp, 0x416481u); SPILL(); call_ind(R32(0x439150u)); if (g_unwind) return; /* KERNEL32!CompareStringA */ RELOAD();
/* 416481: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_416484: /* 416484: cmp dword ptr [ebp - 0x24], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416487: je 0x416490 */
  if (zf) goto L_416490;
L_416489: /* 416489: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41648a: call 0x401156 */
  esp -= 4; W32(esp, 0x41648fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41648f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416490: /* 416490: cmp dword ptr [ebp - 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416493: je 0x41649e */
  if (zf) goto L_41649e;
L_416495: /* 416495: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416498: call 0x401156 */
  esp -= 4; W32(esp, 0x41649du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41649d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41649e: /* 41649e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4164a1: jmp 0x4164bc */
  goto L_4164bc;
L_4164bc: /* 4164bc: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 4164bf: call 0x40105a */
  esp -= 4; W32(esp, 0x4164c4u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4164c4: ret  */
  esp += 4; SPILL(); return;
}

void f_41639b(void) {
  LOAD_REGS();
L_41639b: /* 41639b: xor eax, eax */
  eax = 0;
/* 41639d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41639e: ret  */
  esp += 4; SPILL(); return;
}

void f_41639f(void) {
  LOAD_REGS();
  goto L_41639f;
L_416378: /* 416378: xor eax, eax */
  eax = 0;
/* 41637a: jmp 0x4164bc */
  goto L_4164bc;
L_41639f: /* 41639f: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4163a2: call 0x415709 */
  esp -= 4; W32(esp, 0x4163a7u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 4163a7: xor esi, esi */
  esi = 0;
/* 4163a9: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 4163ac: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4163b0: xor ebx, ebx */
  ebx = 0;
/* 4163b2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4163b3: cmp dword ptr [ebp - 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4163b6: jne 0x4163cb */
  if (!zf) goto L_4163cb;
L_4163b8: /* 4163b8: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 4163bb: call 0x4010eb */
  esp -= 4; W32(esp, 0x4163c0u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4163c0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4163c1: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 4163c4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4163c6: je 0x416378 */
  if (zf) goto L_416378;
L_4163c8: /* 4163c8: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_4163cb: /* 4163cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163cd: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 4163d0: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4163d3: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4163d6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4163d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163da: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4163dd: mov edi, dword ptr [0x4390d0] */
  edi = R32((uint32_t)(0x4390d0u));
/* 4163e3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x4163e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4163e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4163e7: je 0x416490 */
  if (zf) goto L_416490;
L_4163ed: /* 4163ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163f1: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4163f4: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4163f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4163f8: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4163fb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x4163fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4163fd: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 416400: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416402: je 0x416490 */
  if (zf) goto L_416490;
L_416408: /* 416408: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 41640b: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41640e: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 416411: call 0x4014ee */
  esp -= 4; W32(esp, 0x416416u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 416416: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 416419: mov edi, esp */
  edi = esp;
/* 41641b: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 41641e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 416422: jmp 0x41643b */
  goto L_41643b;
L_41643b: /* 41643b: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41643d: jne 0x416451 */
  if (!zf) goto L_416451;
L_41643f: /* 41643f: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 416442: call 0x4010eb */
  esp -= 4; W32(esp, 0x416447u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 416447: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416448: mov edi, eax */
  edi = eax;
/* 41644a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41644c: je 0x416490 */
  if (zf) goto L_416490;
L_41644e: /* 41644e: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
L_416451: /* 416451: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416452: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416453: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 416456: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416457: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 41645a: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41645d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41645e: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 416461: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x416467u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 416467: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416469: je 0x416484 */
  if (zf) goto L_416484;
L_41646b: /* 41646b: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 41646e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41646f: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 416472: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416475: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 416478: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41647b: call dword ptr [0x439150] */
  esp -= 4; W32(esp, 0x416481u); SPILL(); call_ind(R32(0x439150u)); if (g_unwind) return; /* KERNEL32!CompareStringA */ RELOAD();
/* 416481: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_416484: /* 416484: cmp dword ptr [ebp - 0x24], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416487: je 0x416490 */
  if (zf) goto L_416490;
L_416489: /* 416489: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41648a: call 0x401156 */
  esp -= 4; W32(esp, 0x41648fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41648f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416490: /* 416490: cmp dword ptr [ebp - 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416493: je 0x41649e */
  if (zf) goto L_41649e;
L_416495: /* 416495: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416498: call 0x401156 */
  esp -= 4; W32(esp, 0x41649du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41649d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41649e: /* 41649e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4164a1: jmp 0x4164bc */
  goto L_4164bc;
L_4164bc: /* 4164bc: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 4164bf: call 0x40105a */
  esp -= 4; W32(esp, 0x4164c4u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4164c4: ret  */
  esp += 4; SPILL(); return;
}

void f_416424(void) {
  LOAD_REGS();
L_416424: /* 416424: xor eax, eax */
  eax = 0;
/* 416426: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 416427: ret  */
  esp += 4; SPILL(); return;
}

void f_416428(void) {
  LOAD_REGS();
L_416428: /* 416428: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 41642b: call 0x415709 */
  esp -= 4; W32(esp, 0x416430u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 416430: xor esi, esi */
  esi = 0;
/* 416432: xor edi, edi */
  edi = 0;
/* 416434: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 416438: xor ebx, ebx */
  ebx = 0;
/* 41643a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 41643b: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41643d: jne 0x416451 */
  if (!zf) goto L_416451;
L_41643f: /* 41643f: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 416442: call 0x4010eb */
  esp -= 4; W32(esp, 0x416447u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 416447: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416448: mov edi, eax */
  edi = eax;
/* 41644a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41644c: je 0x416490 */
  if (zf) goto L_416490;
L_41644e: /* 41644e: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
L_416451: /* 416451: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416452: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416453: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 416456: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416457: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 41645a: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41645d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41645e: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 416461: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x416467u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 416467: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416469: je 0x416484 */
  if (zf) goto L_416484;
L_41646b: /* 41646b: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 41646e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41646f: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 416472: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416475: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 416478: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41647b: call dword ptr [0x439150] */
  esp -= 4; W32(esp, 0x416481u); SPILL(); call_ind(R32(0x439150u)); if (g_unwind) return; /* KERNEL32!CompareStringA */ RELOAD();
/* 416481: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_416484: /* 416484: cmp dword ptr [ebp - 0x24], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416487: je 0x416490 */
  if (zf) goto L_416490;
L_416489: /* 416489: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41648a: call 0x401156 */
  esp -= 4; W32(esp, 0x41648fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41648f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416490: /* 416490: cmp dword ptr [ebp - 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416493: je 0x41649e */
  if (zf) goto L_41649e;
L_416495: /* 416495: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416498: call 0x401156 */
  esp -= 4; W32(esp, 0x41649du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41649d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41649e: /* 41649e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4164a1: jmp 0x4164bc */
  goto L_4164bc;
L_4164bc: /* 4164bc: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 4164bf: call 0x40105a */
  esp -= 4; W32(esp, 0x4164c4u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4164c4: ret  */
  esp += 4; SPILL(); return;
}

void f_4164c5(void) {
  LOAD_REGS();
L_4164c5: /* 4164c5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4164c7: push 0x43fbe8 */
  { uint32_t v = 0x43fbe8u; esp -= 4; W32(esp, v); }
/* 4164cc: call 0x40101f */
  esp -= 4; W32(esp, 0x4164d1u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4164d1: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 4164d3: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4164d8u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4164d8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4164d9: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4164dd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4164e0: call 0x403c3e */
  esp -= 4; W32(esp, 0x4164e5u); SPILL(); f_403c3e(); if (g_unwind) return; RELOAD();
/* 4164e5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4164e6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 4164e9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4164ed: call 0x4164fb */
  esp -= 4; W32(esp, 0x4164f2u); SPILL(); f_4164fb(); if (g_unwind) return; RELOAD();
/* 4164f2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4164f5: call 0x40105a */
  esp -= 4; W32(esp, 0x4164fau); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4164fa: ret  */
  esp += 4; SPILL(); return;
}

void f_4164fb(void) {
  LOAD_REGS();
L_4164fb: /* 4164fb: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 4164fd: call 0x4011d9 */
  esp -= 4; W32(esp, 0x416502u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 416502: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416503: ret  */
  esp += 4; SPILL(); return;
}

void f_416504(void) {
  LOAD_REGS();
L_416504: /* 416504: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 416506: push 0x43fbf8 */
  { uint32_t v = 0x43fbf8u; esp -= 4; W32(esp, v); }
/* 41650b: call 0x40101f */
  esp -= 4; W32(esp, 0x416510u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 416510: xor esi, esi */
  esi = 0;
/* 416512: xor edi, edi */
  edi = 0;
/* 416514: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 416515: cmp dword ptr [0x44f454], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f454u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41651b: jne 0x41654f */
  if (!zf) goto L_41654f;
L_41651d: /* 41651d: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 416520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416521: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416522: push 0x43e0f4 */
  { uint32_t v = 0x43e0f4u; esp -= 4; W32(esp, v); }
/* 416527: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416528: call dword ptr [0x4390ec] */
  esp -= 4; W32(esp, 0x41652eu); SPILL(); call_ind(R32(0x4390ecu)); if (g_unwind) return; /* KERNEL32!GetStringTypeW */ RELOAD();
/* 41652e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416530: je 0x41653a */
  if (zf) goto L_41653a;
L_416532: /* 416532: mov dword ptr [0x44f454], edi */
  W32((uint32_t)(0x44f454u), edi);
/* 416538: jmp 0x41654f */
  goto L_41654f;
L_41653a: /* 41653a: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x416540u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 416540: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416543: jne 0x41654f */
  if (!zf) goto L_41654f;
L_416545: /* 416545: mov dword ptr [0x44f454], 2 */
  W32((uint32_t)(0x44f454u), 0x2u);
L_41654f: /* 41654f: mov eax, dword ptr [0x44f454] */
  eax = R32((uint32_t)(0x44f454u));
/* 416554: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416556: jne 0x41656f */
  if (!zf) goto L_41656f;
L_416558: /* 416558: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41655b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41655e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 416561: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416564: call dword ptr [0x4390ec] */
  esp -= 4; W32(esp, 0x41656au); SPILL(); call_ind(R32(0x4390ecu)); if (g_unwind) return; /* KERNEL32!GetStringTypeW */ RELOAD();
/* 41656a: jmp 0x41671c */
  goto L_41671c;
L_41656f: /* 41656f: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416572: je 0x416578 */
  if (zf) goto L_416578;
L_416574: /* 416574: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416576: jne 0x4165cb */
  if (!zf) goto L_4165cb;
L_416578: /* 416578: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 41657b: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 41657e: cmp dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416581: jne 0x41658b */
  if (!zf) goto L_41658b;
L_416583: /* 416583: mov eax, dword ptr [0x449220] */
  eax = R32((uint32_t)(0x449220u));
/* 416588: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
L_41658b: /* 41658b: cmp dword ptr [ebp + 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41658e: jne 0x416598 */
  if (!zf) goto L_416598;
L_416590: /* 416590: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 416595: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
L_416598: /* 416598: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 41659b: call 0x4136de */
  esp -= 4; W32(esp, 0x4165a0u); SPILL(); f_4136de(); if (g_unwind) return; RELOAD();
/* 4165a0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4165a1: cmp dword ptr [ebp + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4165a4: je 0x4165ae */
  if (zf) goto L_4165ae;
L_4165a6: /* 4165a6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4165a9: je 0x4165ae */
  if (zf) goto L_4165ae;
L_4165ab: /* 4165ab: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
L_4165ae: /* 4165ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4165af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4165b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4165b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4165b2: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4165b5: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4165b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4165b9: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4165bc: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x4165c2u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 4165c2: mov ebx, eax */
  ebx = eax;
/* 4165c4: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 4165c7: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4165c9: jne 0x4165d2 */
  if (!zf) goto L_4165d2;
L_4165cb: /* 4165cb: xor eax, eax */
  eax = 0;
/* 4165cd: jmp 0x41671c */
  goto L_41671c;
L_4165d2: /* 4165d2: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 4165d5: mov eax, ebx */
  eax = ebx;
/* 4165d7: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4165da: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4165dd: call 0x4014ee */
  esp -= 4; W32(esp, 0x4165e2u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 4165e2: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 4165e5: mov eax, esp */
  eax = esp;
/* 4165e7: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 4165ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4165eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4165ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4165ed: call 0x4010fd */
  esp -= 4; W32(esp, 0x4165f2u); SPILL(); hle_memset(); RELOAD();
/* 4165f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4165f5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4165f9: jmp 0x416617 */
  goto L_416617;
L_416617: /* 416617: cmp dword ptr [ebp - 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41661a: jne 0x41662f */
  if (!zf) goto L_41662f;
L_41661c: /* 41661c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41661d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41661e: call 0x4016cb */
  esp -= 4; W32(esp, 0x416623u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 416623: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416624: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416625: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 416628: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41662a: je 0x4165cb */
  if (zf) goto L_4165cb;
L_41662c: /* 41662c: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
L_41662f: /* 41662f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416631: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416632: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416635: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 416638: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41663b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41663c: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41663f: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x416645u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 416645: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416647: je 0x41670b */
  if (zf) goto L_41670b;
L_41664d: /* 41664d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 416650: lea eax, [ebx + ebx + 2] */
  eax = (uint32_t)(ebx + ebx + 0x2u);
/* 416654: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 416657: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41665a: call 0x4014ee */
  esp -= 4; W32(esp, 0x41665fu); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 41665f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 416662: mov eax, esp */
  eax = esp;
/* 416664: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 416667: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41666b: jmp 0x416689 */
  goto L_416689;
L_416689: /* 416689: cmp dword ptr [ebp - 0x30], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41668c: jne 0x4166a3 */
  if (!zf) goto L_4166a3;
L_41668e: /* 41668e: lea eax, [ebx + ebx + 2] */
  eax = (uint32_t)(ebx + ebx + 0x2u);
/* 416692: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416693: call 0x4010eb */
  esp -= 4; W32(esp, 0x416698u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 416698: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416699: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 41669c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41669e: je 0x41670b */
  if (zf) goto L_41670b;
L_4166a0: /* 4166a0: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
L_4166a3: /* 4166a3: cmp dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4166a6: jne 0x4166b0 */
  if (!zf) goto L_4166b0;
L_4166a8: /* 4166a8: mov eax, dword ptr [0x449220] */
  eax = R32((uint32_t)(0x449220u));
/* 4166ad: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
L_4166b0: /* 4166b0: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 4166b3: add edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4166b5: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 4166b8: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 4166bb: or word ptr [esi], 0xffff */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi), r);
  }
/* 4166bf: or word ptr [esi - 2], 0xffff */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffeu))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi + 0xfffffffeu), r);
  }
/* 4166c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4166c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4166c6: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4166c9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4166cc: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4166cf: call dword ptr [0x4390e8] */
  esp -= 4; W32(esp, 0x4166d5u); SPILL(); call_ind(R32(0x4390e8u)); if (g_unwind) return; /* KERNEL32!GetStringTypeA */ RELOAD();
/* 4166d5: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 4166d8: cmp word ptr [esi - 2], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffeu))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4166dd: je 0x4166f6 */
  if (zf) goto L_4166f6;
L_4166df: /* 4166df: cmp word ptr [esi], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4166e3: jne 0x4166f6 */
  if (!zf) goto L_4166f6;
L_4166e5: /* 4166e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4166e6: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4166e9: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4166ec: call 0x403f12 */
  esp -= 4; W32(esp, 0x4166f1u); SPILL(); hle_memcpy(); RELOAD();
/* 4166f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4166f4: jmp 0x4166fa */
  goto L_4166fa;
L_4166f6: /* 4166f6: and dword ptr [ebp - 0x34], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
L_4166fa: /* 4166fa: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4166fe: je 0x416709 */
  if (zf) goto L_416709;
L_416700: /* 416700: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 416703: call 0x401156 */
  esp -= 4; W32(esp, 0x416708u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 416708: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416709: /* 416709: xor esi, esi */
  esi = 0;
L_41670b: /* 41670b: cmp dword ptr [ebp - 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41670e: je 0x416719 */
  if (zf) goto L_416719;
L_416710: /* 416710: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416713: call 0x401156 */
  esp -= 4; W32(esp, 0x416718u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 416718: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416719: /* 416719: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
L_41671c: /* 41671c: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 41671f: call 0x40105a */
  esp -= 4; W32(esp, 0x416724u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 416724: ret  */
  esp += 4; SPILL(); return;
}

void f_4165d2(void) {
  LOAD_REGS();
  goto L_4165d2;
L_4165cb: /* 4165cb: xor eax, eax */
  eax = 0;
/* 4165cd: jmp 0x41671c */
  goto L_41671c;
L_4165d2: /* 4165d2: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 4165d5: mov eax, ebx */
  eax = ebx;
/* 4165d7: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4165da: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4165dd: call 0x4014ee */
  esp -= 4; W32(esp, 0x4165e2u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 4165e2: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 4165e5: mov eax, esp */
  eax = esp;
/* 4165e7: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 4165ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4165eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4165ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4165ed: call 0x4010fd */
  esp -= 4; W32(esp, 0x4165f2u); SPILL(); hle_memset(); RELOAD();
/* 4165f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4165f5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4165f9: jmp 0x416617 */
  goto L_416617;
L_416617: /* 416617: cmp dword ptr [ebp - 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41661a: jne 0x41662f */
  if (!zf) goto L_41662f;
L_41661c: /* 41661c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41661d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41661e: call 0x4016cb */
  esp -= 4; W32(esp, 0x416623u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 416623: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416624: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416625: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 416628: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41662a: je 0x4165cb */
  if (zf) goto L_4165cb;
L_41662c: /* 41662c: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
L_41662f: /* 41662f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416631: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416632: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416635: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 416638: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41663b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41663c: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41663f: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x416645u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 416645: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416647: je 0x41670b */
  if (zf) goto L_41670b;
L_41664d: /* 41664d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 416650: lea eax, [ebx + ebx + 2] */
  eax = (uint32_t)(ebx + ebx + 0x2u);
/* 416654: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 416657: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41665a: call 0x4014ee */
  esp -= 4; W32(esp, 0x41665fu); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 41665f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 416662: mov eax, esp */
  eax = esp;
/* 416664: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 416667: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41666b: jmp 0x416689 */
  goto L_416689;
L_416689: /* 416689: cmp dword ptr [ebp - 0x30], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41668c: jne 0x4166a3 */
  if (!zf) goto L_4166a3;
L_41668e: /* 41668e: lea eax, [ebx + ebx + 2] */
  eax = (uint32_t)(ebx + ebx + 0x2u);
/* 416692: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416693: call 0x4010eb */
  esp -= 4; W32(esp, 0x416698u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 416698: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416699: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 41669c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41669e: je 0x41670b */
  if (zf) goto L_41670b;
L_4166a0: /* 4166a0: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
L_4166a3: /* 4166a3: cmp dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4166a6: jne 0x4166b0 */
  if (!zf) goto L_4166b0;
L_4166a8: /* 4166a8: mov eax, dword ptr [0x449220] */
  eax = R32((uint32_t)(0x449220u));
/* 4166ad: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
L_4166b0: /* 4166b0: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 4166b3: add edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4166b5: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 4166b8: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 4166bb: or word ptr [esi], 0xffff */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi), r);
  }
/* 4166bf: or word ptr [esi - 2], 0xffff */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffeu))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi + 0xfffffffeu), r);
  }
/* 4166c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4166c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4166c6: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4166c9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4166cc: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4166cf: call dword ptr [0x4390e8] */
  esp -= 4; W32(esp, 0x4166d5u); SPILL(); call_ind(R32(0x4390e8u)); if (g_unwind) return; /* KERNEL32!GetStringTypeA */ RELOAD();
/* 4166d5: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 4166d8: cmp word ptr [esi - 2], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffeu))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4166dd: je 0x4166f6 */
  if (zf) goto L_4166f6;
L_4166df: /* 4166df: cmp word ptr [esi], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4166e3: jne 0x4166f6 */
  if (!zf) goto L_4166f6;
L_4166e5: /* 4166e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4166e6: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4166e9: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4166ec: call 0x403f12 */
  esp -= 4; W32(esp, 0x4166f1u); SPILL(); hle_memcpy(); RELOAD();
/* 4166f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4166f4: jmp 0x4166fa */
  goto L_4166fa;
L_4166f6: /* 4166f6: and dword ptr [ebp - 0x34], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
L_4166fa: /* 4166fa: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4166fe: je 0x416709 */
  if (zf) goto L_416709;
L_416700: /* 416700: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 416703: call 0x401156 */
  esp -= 4; W32(esp, 0x416708u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 416708: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416709: /* 416709: xor esi, esi */
  esi = 0;
L_41670b: /* 41670b: cmp dword ptr [ebp - 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41670e: je 0x416719 */
  if (zf) goto L_416719;
L_416710: /* 416710: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416713: call 0x401156 */
  esp -= 4; W32(esp, 0x416718u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 416718: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416719: /* 416719: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
L_41671c: /* 41671c: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 41671f: call 0x40105a */
  esp -= 4; W32(esp, 0x416724u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 416724: ret  */
  esp += 4; SPILL(); return;
}

void f_4165fb(void) {
  LOAD_REGS();
L_4165fb: /* 4165fb: xor eax, eax */
  eax = 0;
/* 4165fd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4165fe: ret  */
  esp += 4; SPILL(); return;
}

void f_4165ff(void) {
  LOAD_REGS();
  goto L_4165ff;
L_4165cb: /* 4165cb: xor eax, eax */
  eax = 0;
/* 4165cd: jmp 0x41671c */
  goto L_41671c;
L_4165ff: /* 4165ff: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 416602: call 0x415709 */
  esp -= 4; W32(esp, 0x416607u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 416607: and dword ptr [ebp - 0x2c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 41660b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41660f: xor edi, edi */
  edi = 0;
/* 416611: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 416612: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 416615: xor esi, esi */
  esi = 0;
/* 416617: cmp dword ptr [ebp - 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41661a: jne 0x41662f */
  if (!zf) goto L_41662f;
L_41661c: /* 41661c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41661d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41661e: call 0x4016cb */
  esp -= 4; W32(esp, 0x416623u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 416623: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416624: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416625: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 416628: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41662a: je 0x4165cb */
  if (zf) goto L_4165cb;
L_41662c: /* 41662c: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
L_41662f: /* 41662f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416631: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416632: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416635: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 416638: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41663b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41663c: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41663f: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x416645u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 416645: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416647: je 0x41670b */
  if (zf) goto L_41670b;
L_41664d: /* 41664d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 416650: lea eax, [ebx + ebx + 2] */
  eax = (uint32_t)(ebx + ebx + 0x2u);
/* 416654: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 416657: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41665a: call 0x4014ee */
  esp -= 4; W32(esp, 0x41665fu); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 41665f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 416662: mov eax, esp */
  eax = esp;
/* 416664: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 416667: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41666b: jmp 0x416689 */
  goto L_416689;
L_416689: /* 416689: cmp dword ptr [ebp - 0x30], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41668c: jne 0x4166a3 */
  if (!zf) goto L_4166a3;
L_41668e: /* 41668e: lea eax, [ebx + ebx + 2] */
  eax = (uint32_t)(ebx + ebx + 0x2u);
/* 416692: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416693: call 0x4010eb */
  esp -= 4; W32(esp, 0x416698u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 416698: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416699: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 41669c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41669e: je 0x41670b */
  if (zf) goto L_41670b;
L_4166a0: /* 4166a0: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
L_4166a3: /* 4166a3: cmp dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4166a6: jne 0x4166b0 */
  if (!zf) goto L_4166b0;
L_4166a8: /* 4166a8: mov eax, dword ptr [0x449220] */
  eax = R32((uint32_t)(0x449220u));
/* 4166ad: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
L_4166b0: /* 4166b0: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 4166b3: add edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4166b5: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 4166b8: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 4166bb: or word ptr [esi], 0xffff */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi), r);
  }
/* 4166bf: or word ptr [esi - 2], 0xffff */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffeu))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi + 0xfffffffeu), r);
  }
/* 4166c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4166c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4166c6: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4166c9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4166cc: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4166cf: call dword ptr [0x4390e8] */
  esp -= 4; W32(esp, 0x4166d5u); SPILL(); call_ind(R32(0x4390e8u)); if (g_unwind) return; /* KERNEL32!GetStringTypeA */ RELOAD();
/* 4166d5: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 4166d8: cmp word ptr [esi - 2], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffeu))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4166dd: je 0x4166f6 */
  if (zf) goto L_4166f6;
L_4166df: /* 4166df: cmp word ptr [esi], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4166e3: jne 0x4166f6 */
  if (!zf) goto L_4166f6;
L_4166e5: /* 4166e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4166e6: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4166e9: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4166ec: call 0x403f12 */
  esp -= 4; W32(esp, 0x4166f1u); SPILL(); hle_memcpy(); RELOAD();
/* 4166f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4166f4: jmp 0x4166fa */
  goto L_4166fa;
L_4166f6: /* 4166f6: and dword ptr [ebp - 0x34], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
L_4166fa: /* 4166fa: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4166fe: je 0x416709 */
  if (zf) goto L_416709;
L_416700: /* 416700: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 416703: call 0x401156 */
  esp -= 4; W32(esp, 0x416708u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 416708: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416709: /* 416709: xor esi, esi */
  esi = 0;
L_41670b: /* 41670b: cmp dword ptr [ebp - 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41670e: je 0x416719 */
  if (zf) goto L_416719;
L_416710: /* 416710: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416713: call 0x401156 */
  esp -= 4; W32(esp, 0x416718u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 416718: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416719: /* 416719: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
L_41671c: /* 41671c: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 41671f: call 0x40105a */
  esp -= 4; W32(esp, 0x416724u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 416724: ret  */
  esp += 4; SPILL(); return;
}

void f_41666d(void) {
  LOAD_REGS();
L_41666d: /* 41666d: xor eax, eax */
  eax = 0;
/* 41666f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 416670: ret  */
  esp += 4; SPILL(); return;
}

void f_416671(void) {
  LOAD_REGS();
L_416671: /* 416671: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 416674: call 0x415709 */
  esp -= 4; W32(esp, 0x416679u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 416679: and dword ptr [ebp - 0x30], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 41667d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 416681: xor edi, edi */
  edi = 0;
/* 416683: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 416684: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 416687: xor esi, esi */
  esi = 0;
/* 416689: cmp dword ptr [ebp - 0x30], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41668c: jne 0x4166a3 */
  if (!zf) goto L_4166a3;
L_41668e: /* 41668e: lea eax, [ebx + ebx + 2] */
  eax = (uint32_t)(ebx + ebx + 0x2u);
/* 416692: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416693: call 0x4010eb */
  esp -= 4; W32(esp, 0x416698u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 416698: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416699: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 41669c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41669e: je 0x41670b */
  if (zf) goto L_41670b;
L_4166a0: /* 4166a0: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
L_4166a3: /* 4166a3: cmp dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4166a6: jne 0x4166b0 */
  if (!zf) goto L_4166b0;
L_4166a8: /* 4166a8: mov eax, dword ptr [0x449220] */
  eax = R32((uint32_t)(0x449220u));
/* 4166ad: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
L_4166b0: /* 4166b0: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 4166b3: add edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4166b5: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 4166b8: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 4166bb: or word ptr [esi], 0xffff */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi), r);
  }
/* 4166bf: or word ptr [esi - 2], 0xffff */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffeu))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi + 0xfffffffeu), r);
  }
/* 4166c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4166c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4166c6: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4166c9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4166cc: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4166cf: call dword ptr [0x4390e8] */
  esp -= 4; W32(esp, 0x4166d5u); SPILL(); call_ind(R32(0x4390e8u)); if (g_unwind) return; /* KERNEL32!GetStringTypeA */ RELOAD();
/* 4166d5: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 4166d8: cmp word ptr [esi - 2], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffeu))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4166dd: je 0x4166f6 */
  if (zf) goto L_4166f6;
L_4166df: /* 4166df: cmp word ptr [esi], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4166e3: jne 0x4166f6 */
  if (!zf) goto L_4166f6;
L_4166e5: /* 4166e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4166e6: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4166e9: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4166ec: call 0x403f12 */
  esp -= 4; W32(esp, 0x4166f1u); SPILL(); hle_memcpy(); RELOAD();
/* 4166f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4166f4: jmp 0x4166fa */
  goto L_4166fa;
L_4166f6: /* 4166f6: and dword ptr [ebp - 0x34], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
L_4166fa: /* 4166fa: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4166fe: je 0x416709 */
  if (zf) goto L_416709;
L_416700: /* 416700: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 416703: call 0x401156 */
  esp -= 4; W32(esp, 0x416708u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 416708: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416709: /* 416709: xor esi, esi */
  esi = 0;
L_41670b: /* 41670b: cmp dword ptr [ebp - 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41670e: je 0x416719 */
  if (zf) goto L_416719;
L_416710: /* 416710: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 416713: call 0x401156 */
  esp -= 4; W32(esp, 0x416718u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 416718: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416719: /* 416719: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 41671c: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 41671f: call 0x40105a */
  esp -= 4; W32(esp, 0x416724u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 416724: ret  */
  esp += 4; SPILL(); return;
}

void f_416725(void) {
  LOAD_REGS();
L_416725: /* 416725: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 416726: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416727: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 416728: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416729: mov esi, dword ptr [0x4491fc] */
  esi = R32((uint32_t)(0x4491fcu));
/* 41672f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 416731: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416732: xor edi, edi */
  edi = 0;
/* 416734: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416736: je 0x416783 */
  if (zf) goto L_416783;
L_416738: /* 416738: mov ebp, dword ptr [0x4390d0] */
  ebp = R32((uint32_t)(0x4390d0u));
L_41673e: /* 41673e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41673f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416740: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416741: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416742: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 416744: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416745: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416746: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416747: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x416749u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 416749: mov ebx, eax */
  ebx = eax;
/* 41674b: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41674d: je 0x41678b */
  if (zf) goto L_41678b;
L_41674f: /* 41674f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416750: call 0x4010eb */
  esp -= 4; W32(esp, 0x416755u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 416755: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416757: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416758: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 41675c: je 0x41678b */
  if (zf) goto L_41678b;
L_41675e: /* 41675e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41675f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416760: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416761: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416762: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 416764: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 416766: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416767: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416768: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x41676au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41676a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41676c: je 0x41678b */
  if (zf) goto L_41678b;
L_41676e: /* 41676e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41676f: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 416773: call 0x41683e */
  esp -= 4; W32(esp, 0x416778u); SPILL(); f_41683e(); if (g_unwind) return; RELOAD();
/* 416778: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 41677b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 41677d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41677f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416780: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416781: jne 0x41673e */
  if (!zf) goto L_41673e;
L_416783: /* 416783: xor eax, eax */
  eax = 0;
L_416785: /* 416785: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 416786: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 416787: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 416788: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 416789: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41678a: ret  */
  esp += 4; SPILL(); return;
L_41678b: /* 41678b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41678e: jmp 0x416785 */
  goto L_416785;
}

void f_41676e(void) {
  LOAD_REGS();
  goto L_41676e;
L_41673e: /* 41673e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41673f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416740: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416741: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416742: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 416744: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416745: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416746: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416747: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x416749u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 416749: mov ebx, eax */
  ebx = eax;
/* 41674b: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41674d: je 0x41678b */
  if (zf) goto L_41678b;
L_41674f: /* 41674f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416750: call 0x4010eb */
  esp -= 4; W32(esp, 0x416755u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 416755: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416757: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416758: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 41675c: je 0x41678b */
  if (zf) goto L_41678b;
L_41675e: /* 41675e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41675f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416760: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416761: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416762: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 416764: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 416766: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416767: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416768: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x41676au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41676a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41676c: je 0x41678b */
  if (zf) goto L_41678b;
L_41676e: /* 41676e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41676f: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 416773: call 0x41683e */
  esp -= 4; W32(esp, 0x416778u); SPILL(); f_41683e(); if (g_unwind) return; RELOAD();
/* 416778: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 41677b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 41677d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41677f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416780: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416781: jne 0x41673e */
  if (!zf) goto L_41673e;
L_416783: /* 416783: xor eax, eax */
  eax = 0;
L_416785: /* 416785: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 416786: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 416787: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 416788: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 416789: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41678a: ret  */
  esp += 4; SPILL(); return;
L_41678b: /* 41678b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41678e: jmp 0x416785 */
  goto L_416785;
}

void f_416790(void) {
  LOAD_REGS();
L_416790: /* 416790: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416791: mov esi, dword ptr [0x4491f4] */
  esi = R32((uint32_t)(0x4491f4u));
/* 416797: jmp 0x4167bb */
  goto L_4167bb;
L_416799: /* 416799: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41679a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41679b: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41679f: call 0x4038ae */
  esp -= 4; W32(esp, 0x4167a4u); SPILL(); f_4038ae(); if (g_unwind) return; RELOAD();
/* 4167a4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4167a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4167a9: jne 0x4167b8 */
  if (!zf) goto L_4167b8;
L_4167ab: /* 4167ab: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4167ad: mov al, byte ptr [edi + eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax))) & 0xffu);
/* 4167b0: cmp al, 0x3d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4167b2: je 0x4167d0 */
  if (zf) goto L_4167d0;
L_4167b4: /* 4167b4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4167b6: je 0x4167d0 */
  if (zf) goto L_4167d0;
L_4167b8: /* 4167b8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_4167bb: /* 4167bb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4167bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4167bf: jne 0x416799 */
  if (!zf) goto L_416799;
L_4167c1: /* 4167c1: mov eax, esi */
  eax = esi;
/* 4167c3: sub eax, dword ptr [0x4491f4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x4491f4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4167c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4167ca: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4167cd: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4167cf: ret  */
  esp += 4; SPILL(); return;
L_4167d0: /* 4167d0: mov eax, esi */
  eax = esi;
/* 4167d2: sub eax, dword ptr [0x4491f4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x4491f4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4167d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4167d9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4167dc: ret  */
  esp += 4; SPILL(); return;
}

void f_4167dd(void) {
  LOAD_REGS();
L_4167dd: /* 4167dd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4167de: mov ebp, esp */
  ebp = esp;
/* 4167e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4167e1: xor ecx, ecx */
  ecx = 0;
/* 4167e3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4167e5: mov eax, edi */
  eax = edi;
/* 4167e7: jne 0x4167eb */
  if (!zf) goto L_4167eb;
L_4167e9: /* 4167e9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4167ea: ret  */
  esp += 4; SPILL(); return;
L_4167eb: /* 4167eb: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4167ee: je 0x4167f9 */
  if (zf) goto L_4167f9;
L_4167f0: /* 4167f0: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4167f3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4167f4: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4167f7: jne 0x4167f0 */
  if (!zf) goto L_4167f0;
L_4167f9: /* 4167f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4167fa: lea eax, [ecx*4 + 4] */
  eax = (uint32_t)(ecx*4 + 0x4u);
/* 416801: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416803: call 0x4010eb */
  esp -= 4; W32(esp, 0x416808u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 416808: mov esi, eax */
  esi = eax;
/* 41680a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41680c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41680d: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 416810: jne 0x41681a */
  if (!zf) goto L_41681a;
L_416812: /* 416812: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 416814: call 0x40f95e */
  esp -= 4; W32(esp, 0x416819u); SPILL(); f_40f95e(); if (g_unwind) return; RELOAD();
/* 416819: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41681a: /* 41681a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 41681c: mov ebx, edi */
  ebx = edi;
/* 41681e: jmp 0x416831 */
  goto L_416831;
L_416820: /* 416820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416821: call 0x406e43 */
  esp -= 4; W32(esp, 0x416826u); SPILL(); f_406e43(); if (g_unwind) return; RELOAD();
/* 416826: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 416828: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 41682b: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 41682e: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 416830: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_416831: /* 416831: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416833: jne 0x416820 */
  if (!zf) goto L_416820;
L_416835: /* 416835: and dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 416837: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41683a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41683b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41683c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41683d: ret  */
  esp += 4; SPILL(); return;
}

void f_41683e(void) {
  LOAD_REGS();
L_41683e: /* 41683e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41683f: mov ebp, esp */
  ebp = esp;
/* 416841: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 416844: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416845: xor ebx, ebx */
  ebx = 0;
/* 416847: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41684a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41684b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41684c: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 41684f: je 0x4168a9 */
  if (zf) goto L_4168a9;
L_416851: /* 416851: push 0x3d */
  { uint32_t v = 0x3du; esp -= 4; W32(esp, v); }
/* 416853: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416856: call 0x4169f3 */
  esp -= 4; W32(esp, 0x41685bu); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 41685b: mov esi, eax */
  esi = eax;
/* 41685d: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41685f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416860: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416861: mov dword ptr [ebp - 0xc], esi */
  W32((uint32_t)(ebp + 0xfffffff4u), esi);
/* 416864: je 0x4168a9 */
  if (zf) goto L_4168a9;
L_416866: /* 416866: cmp dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416869: je 0x4168a9 */
  if (zf) goto L_4168a9;
L_41686b: /* 41686b: xor eax, eax */
  eax = 0;
/* 41686d: cmp byte ptr [esi + 1], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416870: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 416873: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 416876: mov eax, dword ptr [0x4491f4] */
  eax = R32((uint32_t)(0x4491f4u));
/* 41687b: cmp eax, dword ptr [0x4491f8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x4491f8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416881: jne 0x41688f */
  if (!zf) goto L_41688f;
L_416883: /* 416883: mov edi, eax */
  edi = eax;
/* 416885: call 0x4167dd */
  esp -= 4; W32(esp, 0x41688au); SPILL(); f_4167dd(); if (g_unwind) return; RELOAD();
/* 41688a: mov dword ptr [0x4491f4], eax */
  W32((uint32_t)(0x4491f4u), eax);
L_41688f: /* 41688f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416891: jne 0x4168e8 */
  if (!zf) goto L_4168e8;
L_416893: /* 416893: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416896: je 0x4168b1 */
  if (zf) goto L_4168b1;
L_416898: /* 416898: cmp dword ptr [0x4491fc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491fcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41689e: je 0x4168b1 */
  if (zf) goto L_4168b1;
L_4168a0: /* 4168a0: call 0x416725 */
  esp -= 4; W32(esp, 0x4168a5u); SPILL(); f_416725(); if (g_unwind) return; RELOAD();
/* 4168a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4168a7: je 0x4168e8 */
  if (zf) goto L_4168e8;
L_4168a9: /* 4168a9: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4168ac: /* 4168ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4168ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4168ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4168af: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4168b0: ret  */
  esp += 4; SPILL(); return;
L_4168b1: /* 4168b1: cmp dword ptr [ebp - 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4168b4: jne 0x4169ec */
  if (!zf) goto L_4169ec;
L_4168ba: /* 4168ba: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4168bc: call 0x4010eb */
  esp -= 4; W32(esp, 0x4168c1u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4168c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4168c3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4168c4: mov dword ptr [0x4491f4], eax */
  W32((uint32_t)(0x4491f4u), eax);
/* 4168c9: je 0x4168a9 */
  if (zf) goto L_4168a9;
L_4168cb: /* 4168cb: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 4168cd: cmp dword ptr [0x4491fc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491fcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4168d3: jne 0x4168e8 */
  if (!zf) goto L_4168e8;
L_4168d5: /* 4168d5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4168d7: call 0x4010eb */
  esp -= 4; W32(esp, 0x4168dcu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4168dc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4168de: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4168df: mov dword ptr [0x4491fc], eax */
  W32((uint32_t)(0x4491fcu), eax);
/* 4168e4: je 0x4168a9 */
  if (zf) goto L_4168a9;
L_4168e6: /* 4168e6: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_4168e8: /* 4168e8: mov ebx, dword ptr [0x4491f4] */
  ebx = R32((uint32_t)(0x4491f4u));
/* 4168ee: mov edi, esi */
  edi = esi;
/* 4168f0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4168f3: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4168f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4168f6: call 0x416790 */
  esp -= 4; W32(esp, 0x4168fbu); SPILL(); f_416790(); if (g_unwind) return; RELOAD();
/* 4168fb: mov edi, eax */
  edi = eax;
/* 4168fd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4168ff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416900: jl 0x416941 */
  if ((sf != of)) goto L_416941;
L_416902: /* 416902: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416905: je 0x416941 */
  if (zf) goto L_416941;
L_416907: /* 416907: lea esi, [ebx + edi*4] */
  esi = (uint32_t)(ebx + edi*4);
/* 41690a: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 41690c: call 0x401156 */
  esp -= 4; W32(esp, 0x416911u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 416911: xor eax, eax */
  eax = 0;
/* 416913: cmp dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416916: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416917: jne 0x416929 */
  if (!zf) goto L_416929;
L_416919: /* 416919: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41691c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41691e: jmp 0x416977 */
  goto L_416977;
L_416920: /* 416920: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 416923: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 416925: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 416926: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_416929: /* 416929: cmp dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41692b: jne 0x416920 */
  if (!zf) goto L_416920;
L_41692d: /* 41692d: mov eax, edi */
  eax = edi;
/* 41692f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 416932: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416933: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416934: call 0x401c76 */
  esp -= 4; W32(esp, 0x416939u); SPILL(); f_401c76(); if (g_unwind) return; RELOAD();
/* 416939: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41693b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41693c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41693d: je 0x416977 */
  if (zf) goto L_416977;
L_41693f: /* 41693f: jmp 0x416972 */
  goto L_416972;
L_416941: /* 416941: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416945: jne 0x4169e5 */
  if (!zf) goto L_4169e5;
L_41694b: /* 41694b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41694d: jge 0x416951 */
  if ((sf == of)) goto L_416951;
L_41694f: /* 41694f: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
L_416951: /* 416951: lea eax, [edi*4 + 8] */
  eax = (uint32_t)(edi*4 + 0x8u);
/* 416958: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416959: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41695a: call 0x401c76 */
  esp -= 4; W32(esp, 0x41695fu); SPILL(); f_401c76(); if (g_unwind) return; RELOAD();
/* 41695f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416961: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416962: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416963: je 0x4168a9 */
  if (zf) goto L_4168a9;
L_416969: /* 416969: lea ecx, [eax + edi*4] */
  ecx = (uint32_t)(eax + edi*4);
/* 41696c: and dword ptr [ecx + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 416970: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
L_416972: /* 416972: mov dword ptr [0x4491f4], eax */
  W32((uint32_t)(0x4491f4u), eax);
L_416977: /* 416977: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41697b: je 0x4169ce */
  if (zf) goto L_4169ce;
L_41697d: /* 41697d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416980: call 0x402493 */
  esp -= 4; W32(esp, 0x416985u); SPILL(); hle_strlen(); RELOAD();
/* 416985: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 416986: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 416987: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416988: call 0x4010eb */
  esp -= 4; W32(esp, 0x41698du); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 41698d: mov esi, eax */
  esi = eax;
/* 41698f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416991: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416992: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416993: je 0x4169ce */
  if (zf) goto L_4169ce;
L_416995: /* 416995: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416998: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416999: call 0x404b3a */
  esp -= 4; W32(esp, 0x41699eu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 41699e: mov eax, esi */
  eax = esi;
/* 4169a0: sub eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4169a3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4169a4: add eax, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4169a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4169a8: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 4169ab: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4169ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4169af: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 4169b1: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 4169b3: not ecx */
  ecx = ~ecx;
/* 4169b5: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4169b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4169b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4169b9: call dword ptr [0x439104] */
  esp -= 4; W32(esp, 0x4169bfu); SPILL(); call_ind(R32(0x439104u)); if (g_unwind) return; /* KERNEL32!SetEnvironmentVariableA */ RELOAD();
/* 4169bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4169c1: jne 0x4169c7 */
  if (!zf) goto L_4169c7;
L_4169c3: /* 4169c3: or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_4169c7: /* 4169c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4169c8: call 0x401156 */
  esp -= 4; W32(esp, 0x4169cdu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4169cd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4169ce: /* 4169ce: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4169d2: je 0x4169dd */
  if (zf) goto L_4169dd;
L_4169d4: /* 4169d4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4169d7: call 0x401156 */
  esp -= 4; W32(esp, 0x4169dcu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4169dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4169dd: /* 4169dd: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4169e0: jmp 0x4168ac */
  goto L_4168ac;
L_4169e5: /* 4169e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4169e6: call 0x401156 */
  esp -= 4; W32(esp, 0x4169ebu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4169eb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4169ec: /* 4169ec: xor eax, eax */
  eax = 0;
/* 4169ee: jmp 0x4168ac */
  goto L_4168ac;
}

void f_4169f3(void) {
  LOAD_REGS();
L_4169f3: /* 4169f3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4169f4: mov ebp, esp */
  ebp = esp;
/* 4169f6: call 0x40137f */
  esp -= 4; W32(esp, 0x4169fbu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4169fb: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 4169fe: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416a04: je 0x416a0b */
  if (zf) goto L_416a0b;
L_416a06: /* 416a06: call 0x403c88 */
  esp -= 4; W32(esp, 0x416a0bu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_416a0b: /* 416a0b: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416a0f: jne 0x416a17 */
  if (!zf) goto L_416a17;
L_416a11: /* 416a11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 416a12: jmp 0x407106 */
  SPILL(); f_407106(); return;
L_416a17: /* 416a17: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 416a1a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416a1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416a1c: jmp 0x416a4d */
  goto L_416a4d;
L_416a1e: /* 416a1e: movzx esi, dl */
  esi = (uint32_t)((edx & 0xffu));
/* 416a21: test byte ptr [esi + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416a26: je 0x416a44 */
  if (zf) goto L_416a44;
L_416a28: /* 416a28: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 416a29: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 416a2b: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416a2d: je 0x416a6a */
  if (zf) goto L_416a6a;
L_416a2f: /* 416a2f: movzx edx, dx */
  edx = (uint32_t)((edx & 0xffffu));
/* 416a32: movzx esi, bl */
  esi = (uint32_t)((ebx & 0xffu));
/* 416a35: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 416a38: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 416a3a: cmp dword ptr [ebp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416a3d: jne 0x416a4c */
  if (!zf) goto L_416a4c;
L_416a3f: /* 416a3f: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 416a42: jmp 0x416a66 */
  goto L_416a66;
L_416a44: /* 416a44: movzx esi, dx */
  esi = (uint32_t)((edx & 0xffffu));
/* 416a47: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416a4a: je 0x416a56 */
  if (zf) goto L_416a56;
L_416a4c: /* 416a4c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_416a4d: /* 416a4d: movzx dx, byte ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ecx)))) & 0xffffu);
/* 416a51: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 416a54: jne 0x416a1e */
  if (!zf) goto L_416a1e;
L_416a56: /* 416a56: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 416a59: movzx edx, dx */
  edx = (uint32_t)((edx & 0xffffu));
/* 416a5c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 416a5e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 416a60: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 416a62: not eax */
  eax = ~eax;
/* 416a64: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_416a66: /* 416a66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 416a67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 416a68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 416a69: ret  */
  esp += 4; SPILL(); return;
L_416a6a: /* 416a6a: xor eax, eax */
  eax = 0;
/* 416a6c: jmp 0x416a66 */
  goto L_416a66;
}

void f_416a6e(void) {
  LOAD_REGS();
L_416a6e: /* 416a6e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 416a6f: mov ebp, esp */
  ebp = esp;
/* 416a71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416a72: call 0x40137f */
  esp -= 4; W32(esp, 0x416a77u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 416a77: mov esi, eax */
  esi = eax;
/* 416a79: cmp dword ptr [esi + 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416a7d: jne 0x416a91 */
  if (!zf) goto L_416a91;
L_416a7f: /* 416a7f: push 0x15d */
  { uint32_t v = 0x15du; esp -= 4; W32(esp, v); }
/* 416a84: call 0x4010eb */
  esp -= 4; W32(esp, 0x416a89u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 416a89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416a8b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416a8c: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 416a8f: je 0x416ac8 */
  if (zf) goto L_416ac8;
L_416a91: /* 416a91: mov esi, dword ptr [esi + 0x48] */
  esi = R32((uint32_t)(esi + 0x48u));
/* 416a94: mov eax, 0x15b */
  eax = 0x15bu;
/* 416a99: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 416a9c: jg 0x416aa1 */
  if ((!zf && sf == of)) goto L_416aa1;
L_416a9e: /* 416a9e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_416aa1: /* 416aa1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416aa2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 416aa5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416aa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416aa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416aa8: call 0x417e2c */
  esp -= 4; W32(esp, 0x416aadu); SPILL(); f_417e2c(); if (g_unwind) return; RELOAD();
/* 416aad: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 416ab0: xor eax, eax */
  eax = 0;
/* 416ab2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 416ab5: cmp dword ptr [edi], 0x2d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416ab8: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 416abb: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 416abd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 416ac0: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 416ac3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 416ac5: mov eax, esi */
  eax = esi;
/* 416ac7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_416ac8: /* 416ac8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 416ac9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 416aca: ret  */
  esp += 4; SPILL(); return;
}

void f_416acb(void) {
  LOAD_REGS();
L_416acb: /* 416acb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 416acc: mov ebp, esp */
  ebp = esp;
/* 416ace: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 416ad1: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 416ad6: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 416ad9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 416adc: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 416adf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416ae0: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 416ae3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416ae4: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 416ae7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416aea: call 0x43202e */
  esp -= 4; W32(esp, 0x416aefu); SPILL(); f_43202e(); if (g_unwind) return; RELOAD();
/* 416aef: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 416af2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 416af5: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 416af8: add ecx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 416afb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 416afc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416afd: call 0x416a6e */
  esp -= 4; W32(esp, 0x416b02u); SPILL(); f_416a6e(); if (g_unwind) return; RELOAD();
/* 416b02: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 416b05: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 416b08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 416b0b: call 0x4013ab */
  esp -= 4; W32(esp, 0x416b10u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 416b10: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 416b11: ret  */
  esp += 4; SPILL(); return;
}

void f_416b12(void) {
  LOAD_REGS();
L_416b12: /* 416b12: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 416b13: mov ebp, esp */
  ebp = esp;
/* 416b15: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 416b18: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 416b1d: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 416b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416b21: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 416b24: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 416b27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416b28: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 416b2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416b2c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 416b2f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416b32: call 0x43202e */
  esp -= 4; W32(esp, 0x416b37u); SPILL(); f_43202e(); if (g_unwind) return; RELOAD();
/* 416b37: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 416b3a: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 416b3d: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 416b40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416b41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416b42: call 0x416a6e */
  esp -= 4; W32(esp, 0x416b47u); SPILL(); f_416a6e(); if (g_unwind) return; RELOAD();
/* 416b47: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* 416b4a: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 416b4d: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416b50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 416b51: je 0x416b56 */
  if (zf) goto L_416b56;
L_416b53: /* 416b53: and byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ecx), r);
  }
L_416b56: /* 416b56: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 416b59: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 416b5c: call 0x4013ab */
  esp -= 4; W32(esp, 0x416b61u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 416b61: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 416b62: ret  */
  esp += 4; SPILL(); return;
}

void f_416b63(void) {
  LOAD_REGS();
L_416b63: /* 416b63: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 416b64: mov ebp, esp */
  ebp = esp;
/* 416b66: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 416b69: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 416b6e: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 416b71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416b72: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 416b75: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 416b78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416b79: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 416b7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416b7d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 416b80: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416b83: call 0x43202e */
  esp -= 4; W32(esp, 0x416b88u); SPILL(); f_43202e(); if (g_unwind) return; RELOAD();
/* 416b88: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 416b8b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 416b8e: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 416b91: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 416b94: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 416b97: jl 0x416bb4 */
  if ((sf != of)) goto L_416bb4;
L_416b99: /* 416b99: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 416b9c: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 416b9e: jg 0x416bb4 */
  if ((!zf && sf == of)) goto L_416bb4;
L_416ba0: /* 416ba0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 416ba2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416ba3: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 416ba6: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 416ba9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416baa: call 0x43235a */
  esp -= 4; W32(esp, 0x416bafu); SPILL(); f_43235a(); if (g_unwind) return; RELOAD();
/* 416baf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 416bb2: jmp 0x416bc7 */
  goto L_416bc7;
L_416bb4: /* 416bb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 416bb6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 416bb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416bb8: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 416bbb: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 416bbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416bbf: call 0x43224a */
  esp -= 4; W32(esp, 0x416bc4u); SPILL(); f_43224a(); if (g_unwind) return; RELOAD();
/* 416bc4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_416bc7: /* 416bc7: mov esi, eax */
  esi = eax;
/* 416bc9: jmp 0x416bd4 */
  goto L_416bd4;
L_416bcb: /* 416bcb: cmp cl, byte ptr [0x44a9ac] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(0x44a9acu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416bd1: je 0x416bda */
  if (zf) goto L_416bda;
L_416bd3: /* 416bd3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_416bd4: /* 416bd4: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 416bd6: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416bd8: jne 0x416bcb */
  if (!zf) goto L_416bcb;
L_416bda: /* 416bda: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 416bdc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 416bdd: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416bdf: je 0x416c01 */
  if (zf) goto L_416c01;
L_416be1: /* 416be1: jmp 0x416be9 */
  goto L_416be9;
L_416be3: /* 416be3: cmp cl, 0x65 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x65u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416be6: je 0x416bef */
  if (zf) goto L_416bef;
L_416be8: /* 416be8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_416be9: /* 416be9: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 416beb: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416bed: jne 0x416be3 */
  if (!zf) goto L_416be3;
L_416bef: /* 416bef: mov edx, eax */
  edx = eax;
L_416bf1: /* 416bf1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 416bf2: cmp byte ptr [eax], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416bf5: je 0x416bf1 */
  if (zf) goto L_416bf1;
L_416bf7: /* 416bf7: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 416bf9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 416bfa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 416bfb: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416bfd: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 416bff: jne 0x416bf7 */
  if (!zf) goto L_416bf7;
L_416c01: /* 416c01: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 416c04: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 416c07: mov eax, esi */
  eax = esi;
/* 416c09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 416c0a: call 0x4013ab */
  esp -= 4; W32(esp, 0x416c0fu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 416c0f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 416c10: ret  */
  esp += 4; SPILL(); return;
}

void f_416c11(void) {
  LOAD_REGS();
L_416c11: /* 416c11: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 416c12: mov ebp, esp */
  ebp = esp;
/* 416c14: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 416c17: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 416c1c: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 416c1f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 416c22: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 416c25: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 416c28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416c29: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416c2c: call 0x406aa2 */
  esp -= 4; W32(esp, 0x416c31u); SPILL(); f_406aa2(); if (g_unwind) return; RELOAD();
/* 416c31: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 416c33: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 416c36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416c37: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 416c3a: call 0x4176f3 */
  esp -= 4; W32(esp, 0x416c3fu); SPILL(); f_4176f3(); if (g_unwind) return; RELOAD();
/* 416c3f: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 416c42: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 416c45: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 416c48: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 416c4b: call 0x4013ab */
  esp -= 4; W32(esp, 0x416c50u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 416c50: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 416c51: ret  */
  esp += 4; SPILL(); return;
}

void f_416c52(void) {
  LOAD_REGS();
L_416c52: /* 416c52: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 416c53: mov ebp, esp */
  ebp = esp;
/* 416c55: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 416c58: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 416c5d: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 416c60: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 416c63: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 416c66: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 416c69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416c6a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416c6d: call 0x41520a */
  esp -= 4; W32(esp, 0x416c72u); SPILL(); f_41520a(); if (g_unwind) return; RELOAD();
/* 416c72: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 416c74: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 416c77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416c78: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 416c7b: call 0x4176f3 */
  esp -= 4; W32(esp, 0x416c80u); SPILL(); f_4176f3(); if (g_unwind) return; RELOAD();
/* 416c80: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 416c83: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 416c86: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 416c89: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 416c8c: call 0x4013ab */
  esp -= 4; W32(esp, 0x416c91u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 416c91: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 416c92: ret  */
  esp += 4; SPILL(); return;
}

void f_416c93(void) {
  LOAD_REGS();
L_416c93: /* 416c93: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 416c94: mov ebp, esp */
  ebp = esp;
/* 416c96: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 416c99: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 416c9e: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 416ca1: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 416ca4: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 416ca7: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 416caa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416cab: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416cae: call 0x401df3 */
  esp -= 4; W32(esp, 0x416cb3u); SPILL(); f_401df3(); if (g_unwind) return; RELOAD();
/* 416cb3: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 416cb5: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 416cb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416cb9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 416cbc: call 0x4176f3 */
  esp -= 4; W32(esp, 0x416cc1u); SPILL(); f_4176f3(); if (g_unwind) return; RELOAD();
/* 416cc1: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 416cc4: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 416cc7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 416cca: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 416ccd: call 0x4013ab */
  esp -= 4; W32(esp, 0x416cd2u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 416cd2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 416cd3: ret  */
  esp += 4; SPILL(); return;
}

void f_416cd4(void) {
  LOAD_REGS();
L_416cd4: /* 416cd4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 416cd5: mov ebp, esp */
  ebp = esp;
/* 416cd7: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 416cda: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 416cdf: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 416ce2: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 416ce5: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 416ce8: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 416ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416cec: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 416cef: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416cf2: call 0x41529e */
  esp -= 4; W32(esp, 0x416cf7u); SPILL(); f_41529e(); if (g_unwind) return; RELOAD();
/* 416cf7: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 416cf9: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 416cfc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416cfd: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 416d00: call 0x4176f3 */
  esp -= 4; W32(esp, 0x416d05u); SPILL(); f_4176f3(); if (g_unwind) return; RELOAD();
/* 416d05: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 416d08: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 416d0b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 416d0e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 416d11: call 0x4013ab */
  esp -= 4; W32(esp, 0x416d16u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 416d16: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 416d17: ret  */
  esp += 4; SPILL(); return;
}

void f_416d18(void) {
  LOAD_REGS();
L_416d18: /* 416d18: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 416d19: mov ebp, esp */
  ebp = esp;
/* 416d1b: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 416d1e: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 416d23: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 416d26: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 416d29: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 416d2c: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 416d2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416d30: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 416d33: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 416d36: call 0x4152cf */
  esp -= 4; W32(esp, 0x416d3bu); SPILL(); f_4152cf(); if (g_unwind) return; RELOAD();
/* 416d3b: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 416d3d: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 416d40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416d41: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 416d44: call 0x4176f3 */
  esp -= 4; W32(esp, 0x416d49u); SPILL(); f_4176f3(); if (g_unwind) return; RELOAD();
/* 416d49: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 416d4c: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 416d4f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 416d52: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 416d55: call 0x4013ab */
  esp -= 4; W32(esp, 0x416d5au); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 416d5a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 416d5b: ret  */
  esp += 4; SPILL(); return;
}

void f_416d5c(void) {
  LOAD_REGS();
L_416d5c: /* 416d5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416d5d: call 0x40137f */
  esp -= 4; W32(esp, 0x416d62u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 416d62: mov edi, dword ptr [eax + 0x64] */
  edi = R32((uint32_t)(eax + 0x64u));
/* 416d65: cmp edi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416d6b: je 0x416d74 */
  if (zf) goto L_416d74;
L_416d6d: /* 416d6d: call 0x4025f2 */
  esp -= 4; W32(esp, 0x416d72u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 416d72: mov edi, eax */
  edi = eax;
L_416d74: /* 416d74: cmp dword ptr [edi + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416d78: jne 0x416d80 */
  if (!zf) goto L_416d80;
L_416d7a: /* 416d7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 416d7b: jmp 0x402493 */
  SPILL(); hle_strlen(); return;
L_416d80: /* 416d80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416d81: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 416d85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 416d87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 416d89: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 416d8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416d8c: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 416d8e: push dword ptr [edi + 4] */
  { uint32_t v = R32((uint32_t)(edi + 0x4u)); esp -= 4; W32(esp, v); }
/* 416d91: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x416d97u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 416d97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416d99: jne 0x416da0 */
  if (!zf) goto L_416da0;
L_416d9b: /* 416d9b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 416d9e: jmp 0x416dc3 */
  goto L_416dc3;
L_416da0: /* 416da0: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 416da2: xor eax, eax */
  eax = 0;
/* 416da4: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416da6: je 0x416dc3 */
  if (zf) goto L_416dc3;
L_416da8: /* 416da8: mov edi, dword ptr [edi + 0x48] */
  edi = R32((uint32_t)(edi + 0x48u));
L_416dab: /* 416dab: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 416dae: test byte ptr [edi + ecx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + ecx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416db3: je 0x416dbb */
  if (zf) goto L_416dbb;
L_416db5: /* 416db5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 416db6: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416db9: je 0x416dc3 */
  if (zf) goto L_416dc3;
L_416dbb: /* 416dbb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 416dbc: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 416dbd: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 416dbf: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416dc1: jne 0x416dab */
  if (!zf) goto L_416dab;
L_416dc3: /* 416dc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 416dc4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 416dc5: ret  */
  esp += 4; SPILL(); return;
}

void f_416dc6(void) {
  LOAD_REGS();
L_416dc6: /* 416dc6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 416dc7: mov ebp, esp */
  ebp = esp;
/* 416dc9: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 416dcc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 416dcd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416dce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416dcf: call 0x40137f */
  esp -= 4; W32(esp, 0x416dd4u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 416dd4: mov esi, dword ptr [eax + 0x64] */
  esi = R32((uint32_t)(eax + 0x64u));
/* 416dd7: cmp esi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416ddd: je 0x416de6 */
  if (zf) goto L_416de6;
L_416ddf: /* 416ddf: call 0x4025f2 */
  esp -= 4; W32(esp, 0x416de4u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 416de4: mov esi, eax */
  esi = eax;
L_416de6: /* 416de6: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 416de9: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 416ded: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 416df1: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 416df3: lea edi, [ebx + 1] */
  edi = (uint32_t)(ebx + 0x1u);
/* 416df6: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
L_416df9: /* 416df9: cmp dword ptr [esi + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 416dfd: mov byte ptr [ebp - 1], al */
  W8((uint32_t)(ebp + 0xffffffffu), (eax & 0xffu));
/* 416e00: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 416e03: jle 0x416e13 */
  if ((zf || sf != of)) goto L_416e13;
L_416e05: /* 416e05: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 416e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416e08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416e09: call 0x415666 */
  esp -= 4; W32(esp, 0x416e0eu); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 416e0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 416e11: jmp 0x416e1d */
  goto L_416e1d;
L_416e13: /* 416e13: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 416e16: movzx eax, byte ptr [ecx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(ecx + eax*2)));
/* 416e1a: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_416e1d: /* 416e1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416e1f: je 0x416e26 */
  if (zf) goto L_416e26;
L_416e21: /* 416e21: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 416e23: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 416e24: jmp 0x416df9 */
  goto L_416df9;
L_416e26: /* 416e26: cmp byte ptr [ebp - 1], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416e2a: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 416e2d: jne 0x416e35 */
  if (!zf) goto L_416e35;
L_416e2f: /* 416e2f: or dword ptr [ebp + 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 416e33: jmp 0x416e3b */
  goto L_416e3b;
L_416e35: /* 416e35: cmp byte ptr [ebp - 1], 0x2b */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416e39: jne 0x416e44 */
  if (!zf) goto L_416e44;
L_416e3b: /* 416e3b: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 416e3d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 416e3e: mov byte ptr [ebp - 1], al */
  W8((uint32_t)(ebp + 0xffffffffu), (eax & 0xffu));
/* 416e41: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
L_416e44: /* 416e44: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 416e47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 416e49: jl 0x417014 */
  if ((sf != of)) goto L_417014;
L_416e4f: /* 416e4f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416e52: je 0x417014 */
  if (zf) goto L_417014;
L_416e58: /* 416e58: cmp eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 416e5b: jg 0x417014 */
  if ((!zf && sf == of)) goto L_417014;
L_416e61: /* 416e61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416e63: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 416e65: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416e66: jne 0x416e8d */
  if (!zf) goto L_416e8d;
L_416e68: /* 416e68: cmp byte ptr [ebp - 1], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416e6c: je 0x416e77 */
  if (zf) goto L_416e77;
L_416e6e: /* 416e6e: mov dword ptr [ebp + 0x10], 0xa */
  W32((uint32_t)(ebp + 0x10u), 0xau);
/* 416e75: jmp 0x416eac */
  goto L_416eac;
L_416e77: /* 416e77: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 416e79: cmp al, 0x78 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416e7b: je 0x416e8a */
  if (zf) goto L_416e8a;
L_416e7d: /* 416e7d: cmp al, 0x58 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416e7f: je 0x416e8a */
  if (zf) goto L_416e8a;
L_416e81: /* 416e81: mov dword ptr [ebp + 0x10], 8 */
  W32((uint32_t)(ebp + 0x10u), 0x8u);
/* 416e88: jmp 0x416eac */
  goto L_416eac;
L_416e8a: /* 416e8a: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
L_416e8d: /* 416e8d: cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416e90: jne 0x416eac */
  if (!zf) goto L_416eac;
L_416e92: /* 416e92: cmp byte ptr [ebp - 1], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416e96: jne 0x416eac */
  if (!zf) goto L_416eac;
L_416e98: /* 416e98: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 416e9a: cmp al, 0x78 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416e9c: je 0x416ea2 */
  if (zf) goto L_416ea2;
L_416e9e: /* 416e9e: cmp al, 0x58 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 416ea0: jne 0x416eac */
  if (!zf) goto L_416eac;
L_416ea2: /* 416ea2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 416ea3: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 416ea5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 416ea6: mov byte ptr [ebp - 1], al */
  W8((uint32_t)(ebp + 0xffffffffu), (eax & 0xffu));
/* 416ea9: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
L_416eac: /* 416eac: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 416eaf: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 416eb0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 416eb1: mov edi, eax */
  edi = eax;
/* 416eb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416eb4: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 416eb6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 416eb8: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 416ebb: call 0x40233d */
  esp -= 4; W32(esp, 0x416ec0u); SPILL(); f_40233d(); if (g_unwind) return; RELOAD();
/* 416ec0: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 416ec3: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 416ec6: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 416ec9: mov ebx, edx */
  ebx = edx;
L_416ecb: /* 416ecb: movzx esi, byte ptr [ebp - 1] */
  esi = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* 416ecf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416ed0: call 0x40152b */
  esp -= 4; W32(esp, 0x416ed5u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 416ed5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416ed7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416ed8: je 0x416ee3 */
  if (zf) goto L_416ee3;
L_416eda: /* 416eda: movsx esi, byte ptr [ebp - 1] */
  esi = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* 416ede: sub esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 416ee1: jmp 0x416efe */
  goto L_416efe;
L_416ee3: /* 416ee3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 416ee4: call 0x415396 */
  esp -= 4; W32(esp, 0x416ee9u); SPILL(); f_415396(); if (g_unwind) return; RELOAD();
/* 416ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416eeb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416eec: je 0x416f62 */
  if (zf) goto L_416f62;
L_416eee: /* 416eee: movsx eax, byte ptr [ebp - 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* 416ef2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 416ef3: call 0x406e75 */
  esp -= 4; W32(esp, 0x416ef8u); SPILL(); f_406e75(); if (g_unwind) return; RELOAD();
/* 416ef8: mov esi, eax */
  esi = eax;
/* 416efa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 416efb: sub esi, 0x37 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x37u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_416efe: /* 416efe: cmp esi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 416f01: jae 0x416f62 */
  if (!cf) goto L_416f62;
L_416f03: /* 416f03: or dword ptr [ebp + 0x14], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 416f07: cmp dword ptr [ebp - 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 416f0a: jb 0x416f37 */
  if (cf) goto L_416f37;
L_416f0c: /* 416f0c: ja 0x416f16 */
  if ((!cf && !zf)) goto L_416f16;
L_416f0e: /* 416f0e: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 416f11: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 416f14: jb 0x416f37 */
  if (cf) goto L_416f37;
L_416f16: /* 416f16: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 416f19: cmp dword ptr [ebp - 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416f1c: jne 0x416f31 */
  if (!zf) goto L_416f31;
L_416f1e: /* 416f1e: cmp dword ptr [ebp - 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416f21: jne 0x416f31 */
  if (!zf) goto L_416f31;
L_416f23: /* 416f23: xor eax, eax */
  eax = 0;
/* 416f25: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 416f28: jb 0x416f37 */
  if (cf) goto L_416f37;
L_416f2a: /* 416f2a: ja 0x416f31 */
  if ((!cf && !zf)) goto L_416f31;
L_416f2c: /* 416f2c: cmp esi, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 416f2f: jbe 0x416f37 */
  if ((cf | zf)) goto L_416f37;
L_416f31: /* 416f31: or dword ptr [ebp + 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 416f35: jmp 0x416f52 */
  goto L_416f52;
L_416f37: /* 416f37: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 416f3a: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 416f3d: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 416f40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 416f41: call 0x40518c */
  esp -= 4; W32(esp, 0x416f46u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 416f46: xor ecx, ecx */
  ecx = 0;
/* 416f48: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 416f4a: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 416f4c: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 416f4f: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
L_416f52: /* 416f52: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 416f55: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 416f57: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 416f5a: mov byte ptr [ebp - 1], al */
  W8((uint32_t)(ebp + 0xffffffffu), (eax & 0xffu));
/* 416f5d: jmp 0x416ecb */
  goto L_416ecb;
L_416f62: /* 416f62: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 416f65: dec dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 416f68: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416f6a: jne 0x416f81 */
  if (!zf) goto L_416f81;
L_416f6c: /* 416f6c: xor eax, eax */
  eax = 0;
/* 416f6e: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 416f71: je 0x416f79 */
  if (zf) goto L_416f79;
L_416f73: /* 416f73: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 416f76: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
L_416f79: /* 416f79: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 416f7c: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 416f7f: jmp 0x416fe7 */
  goto L_416fe7;
L_416f81: /* 416f81: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416f83: mov esi, 0x7fffffff */
  esi = 0x7fffffffu;
/* 416f88: mov ebx, 0x80000000 */
  ebx = 0x80000000u;
/* 416f8d: jne 0x416fb6 */
  if (!zf) goto L_416fb6;
L_416f8f: /* 416f8f: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416f91: jne 0x416fe7 */
  if (!zf) goto L_416fe7;
L_416f93: /* 416f93: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 416f96: je 0x416fa5 */
  if (zf) goto L_416fa5;
L_416f98: /* 416f98: cmp dword ptr [ebp - 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 416f9b: ja 0x416fb6 */
  if ((!cf && !zf)) goto L_416fb6;
L_416f9d: /* 416f9d: jb 0x416fa5 */
  if (cf) goto L_416fa5;
L_416f9f: /* 416f9f: cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 416fa3: ja 0x416fb6 */
  if ((!cf && !zf)) goto L_416fb6;
L_416fa5: /* 416fa5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416fa7: jne 0x416fe7 */
  if (!zf) goto L_416fe7;
L_416fa9: /* 416fa9: cmp dword ptr [ebp - 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 416fac: jb 0x416fe7 */
  if (cf) goto L_416fe7;
L_416fae: /* 416fae: ja 0x416fb6 */
  if ((!cf && !zf)) goto L_416fb6;
L_416fb0: /* 416fb0: cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 416fb4: jbe 0x416fe7 */
  if ((cf | zf)) goto L_416fe7;
L_416fb6: /* 416fb6: call 0x4102a5 */
  esp -= 4; W32(esp, 0x416fbbu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 416fbb: test byte ptr [ebp + 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416fbf: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
/* 416fc5: je 0x416fd1 */
  if (zf) goto L_416fd1;
L_416fc7: /* 416fc7: or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 416fcb: or dword ptr [ebp - 0xc], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 416fcf: jmp 0x416fe7 */
  goto L_416fe7;
L_416fd1: /* 416fd1: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416fd5: je 0x416fe0 */
  if (zf) goto L_416fe0;
L_416fd7: /* 416fd7: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 416fdb: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* 416fde: jmp 0x416fe7 */
  goto L_416fe7;
L_416fe0: /* 416fe0: or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 416fe4: mov dword ptr [ebp - 0xc], esi */
  W32((uint32_t)(ebp + 0xfffffff4u), esi);
L_416fe7: /* 416fe7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 416fea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 416fec: je 0x416ff3 */
  if (zf) goto L_416ff3;
L_416fee: /* 416fee: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 416ff1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_416ff3: /* 416ff3: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 416ff7: je 0x41700c */
  if (zf) goto L_41700c;
L_416ff9: /* 416ff9: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 416ffc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 416fff: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 417001: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 417004: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 417006: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 417009: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
L_41700c: /* 41700c: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 41700f: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 417012: jmp 0x417021 */
  goto L_417021;
L_417014: /* 417014: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 417017: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417019: je 0x41701d */
  if (zf) goto L_41701d;
L_41701b: /* 41701b: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_41701d: /* 41701d: xor eax, eax */
  eax = 0;
/* 41701f: xor edx, edx */
  edx = 0;
L_417021: /* 417021: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 417022: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 417023: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 417024: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 417025: ret  */
  esp += 4; SPILL(); return;
}

void f_417026(void) {
  LOAD_REGS();
L_417026: /* 417026: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 417028: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41702c: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417030: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417034: call 0x416dc6 */
  esp -= 4; W32(esp, 0x417039u); SPILL(); f_416dc6(); if (g_unwind) return; RELOAD();
/* 417039: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41703c: ret  */
  esp += 4; SPILL(); return;
}

void f_41703d(void) {
  LOAD_REGS();
L_41703d: /* 41703d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41703f: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417043: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417047: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41704b: call 0x416dc6 */
  esp -= 4; W32(esp, 0x417050u); SPILL(); f_416dc6(); if (g_unwind) return; RELOAD();
/* 417050: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 417053: ret  */
  esp += 4; SPILL(); return;
}

void f_417054(void) {
  LOAD_REGS();
L_417054: /* 417054: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 417058: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41705b: jle 0x41707e */
  if ((zf || sf != of)) goto L_41707e;
L_41705d: /* 41705d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 417061: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417062: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417063: lea esi, [eax - 2] */
  esi = (uint32_t)(eax + 0xfffffffeu);
/* 417066: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 41706a: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 41706c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_41706d: /* 41706d: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41706f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 417070: mov bl, byte ptr [eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 417072: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 417073: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 417075: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 417076: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 417078: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 417079: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 41707a: jne 0x41706d */
  if (!zf) goto L_41706d;
L_41707c: /* 41707c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41707d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41707e: /* 41707e: ret  */
  esp += 4; SPILL(); return;
}

void f_41707f(void) {
  LOAD_REGS();
L_41707f: /* 41707f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 417083: add eax, -0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 417086: ret  */
  esp += 4; SPILL(); return;
}

void f_417087(void) {
  LOAD_REGS();
L_417087: /* 417087: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 417088: mov ebp, esp */
  ebp = esp;
/* 41708a: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41708d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41708e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41708f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 417090: call 0x40137f */
  esp -= 4; W32(esp, 0x417095u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 417095: mov ebx, dword ptr [eax + 0x64] */
  ebx = R32((uint32_t)(eax + 0x64u));
/* 417098: cmp ebx, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41709e: je 0x4170a7 */
  if (zf) goto L_4170a7;
L_4170a0: /* 4170a0: call 0x4025f2 */
  esp -= 4; W32(esp, 0x4170a5u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 4170a5: mov ebx, eax */
  ebx = eax;
L_4170a7: /* 4170a7: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4170aa: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4170ae: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4170b2: xor esi, esi */
  esi = 0;
/* 4170b4: mov si, word ptr [edi] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 4170b7: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4170ba: jmp 0x4170c3 */
  goto L_4170c3;
L_4170bc: /* 4170bc: xor esi, esi */
  esi = 0;
/* 4170be: mov si, word ptr [edi] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 4170c1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4170c2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_4170c3: /* 4170c3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4170c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4170c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4170c7: call 0x4018eb */
  esp -= 4; W32(esp, 0x4170ccu); SPILL(); f_4018eb(); if (g_unwind) return; RELOAD();
/* 4170cc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4170cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4170d1: jne 0x4170bc */
  if (!zf) goto L_4170bc;
L_4170d3: /* 4170d3: cmp si, 0x2d */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4170d7: jne 0x4170df */
  if (!zf) goto L_4170df;
L_4170d9: /* 4170d9: or dword ptr [ebp + 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 4170dd: jmp 0x4170e5 */
  goto L_4170e5;
L_4170df: /* 4170df: cmp si, 0x2b */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4170e3: jne 0x4170ea */
  if (!zf) goto L_4170ea;
L_4170e5: /* 4170e5: mov si, word ptr [edi] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 4170e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4170e9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_4170ea: /* 4170ea: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4170ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4170ef: jl 0x4172c5 */
  if ((sf != of)) goto L_4172c5;
L_4170f5: /* 4170f5: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4170f8: je 0x4172c5 */
  if (zf) goto L_4172c5;
L_4170fe: /* 4170fe: cmp eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 417101: jg 0x4172c5 */
  if ((!zf && sf == of)) goto L_4172c5;
L_417107: /* 417107: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417109: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 41710b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41710c: jne 0x41713d */
  if (!zf) goto L_41713d;
L_41710e: /* 41710e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41710f: call 0x401b27 */
  esp -= 4; W32(esp, 0x417114u); SPILL(); f_401b27(); if (g_unwind) return; RELOAD();
/* 417114: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417116: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417117: je 0x417122 */
  if (zf) goto L_417122;
L_417119: /* 417119: mov dword ptr [ebp + 0x10], 0xa */
  W32((uint32_t)(ebp + 0x10u), 0xau);
/* 417120: jmp 0x417163 */
  goto L_417163;
L_417122: /* 417122: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 417125: cmp ax, 0x78 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 417129: je 0x41713a */
  if (zf) goto L_41713a;
L_41712b: /* 41712b: cmp ax, 0x58 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41712f: je 0x41713a */
  if (zf) goto L_41713a;
L_417131: /* 417131: mov dword ptr [ebp + 0x10], 8 */
  W32((uint32_t)(ebp + 0x10u), 0x8u);
/* 417138: jmp 0x417163 */
  goto L_417163;
L_41713a: /* 41713a: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
L_41713d: /* 41713d: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417140: jne 0x417163 */
  if (!zf) goto L_417163;
L_417142: /* 417142: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417143: call 0x401b27 */
  esp -= 4; W32(esp, 0x417148u); SPILL(); f_401b27(); if (g_unwind) return; RELOAD();
/* 417148: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41714a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41714b: jne 0x417163 */
  if (!zf) goto L_417163;
L_41714d: /* 41714d: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 417150: cmp ax, 0x78 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 417154: je 0x41715c */
  if (zf) goto L_41715c;
L_417156: /* 417156: cmp ax, 0x58 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41715a: jne 0x417163 */
  if (!zf) goto L_417163;
L_41715c: /* 41715c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 41715d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 41715e: mov si, word ptr [edi] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 417161: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 417162: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_417163: /* 417163: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 417166: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 417167: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 417168: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417169: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 41716b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 41716d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 417170: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 417173: call 0x40233d */
  esp -= 4; W32(esp, 0x417178u); SPILL(); f_40233d(); if (g_unwind) return; RELOAD();
/* 417178: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 41717b: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 41717e: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 417181: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
L_417184: /* 417184: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417185: call 0x401b27 */
  esp -= 4; W32(esp, 0x41718au); SPILL(); f_401b27(); if (g_unwind) return; RELOAD();
/* 41718a: mov ebx, eax */
  ebx = eax;
/* 41718c: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41718f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417190: jne 0x4171b9 */
  if (!zf) goto L_4171b9;
L_417192: /* 417192: cmp si, 0x41 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 417196: jb 0x41719e */
  if (cf) goto L_41719e;
L_417198: /* 417198: cmp si, 0x5a */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41719c: jbe 0x4171aa */
  if ((cf | zf)) goto L_4171aa;
L_41719e: /* 41719e: cmp si, 0x61 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 4171a2: jb 0x41721a */
  if (cf) goto L_41721a;
L_4171a4: /* 4171a4: cmp si, 0x7a */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4171a8: ja 0x41721a */
  if ((!cf && !zf)) goto L_41721a;
L_4171aa: /* 4171aa: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
/* 4171ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4171ae: call 0x406e75 */
  esp -= 4; W32(esp, 0x4171b3u); SPILL(); f_406e75(); if (g_unwind) return; RELOAD();
/* 4171b3: mov ebx, eax */
  ebx = eax;
/* 4171b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4171b6: sub ebx, 0x37 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x37u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_4171b9: /* 4171b9: cmp ebx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4171bc: jae 0x41721a */
  if (!cf) goto L_41721a;
L_4171be: /* 4171be: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4171c1: or dword ptr [ebp + 0x14], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 4171c5: cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4171c8: jb 0x4171f5 */
  if (cf) goto L_4171f5;
L_4171ca: /* 4171ca: ja 0x4171d4 */
  if ((!cf && !zf)) goto L_4171d4;
L_4171cc: /* 4171cc: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4171cf: cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4171d2: jb 0x4171f5 */
  if (cf) goto L_4171f5;
L_4171d4: /* 4171d4: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4171d7: cmp dword ptr [ebp - 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4171da: jne 0x4171ef */
  if (!zf) goto L_4171ef;
L_4171dc: /* 4171dc: cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4171df: jne 0x4171ef */
  if (!zf) goto L_4171ef;
L_4171e1: /* 4171e1: xor eax, eax */
  eax = 0;
/* 4171e3: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4171e6: jb 0x4171f5 */
  if (cf) goto L_4171f5;
L_4171e8: /* 4171e8: ja 0x4171ef */
  if ((!cf && !zf)) goto L_4171ef;
L_4171ea: /* 4171ea: cmp ebx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4171ed: jbe 0x4171f5 */
  if ((cf | zf)) goto L_4171f5;
L_4171ef: /* 4171ef: or dword ptr [ebp + 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 4171f3: jmp 0x417210 */
  goto L_417210;
L_4171f5: /* 4171f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4171f6: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 4171f9: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 4171fc: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 4171ff: call 0x40518c */
  esp -= 4; W32(esp, 0x417204u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 417204: xor ecx, ecx */
  ecx = 0;
/* 417206: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 417208: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 41720a: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 41720d: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
L_417210: /* 417210: mov si, word ptr [edi] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 417213: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 417214: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 417215: jmp 0x417184 */
  goto L_417184;
L_41721a: /* 41721a: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 41721d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 41721e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 41721f: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417221: jne 0x417235 */
  if (!zf) goto L_417235;
L_417223: /* 417223: xor eax, eax */
  eax = 0;
/* 417225: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417228: je 0x41722d */
  if (zf) goto L_41722d;
L_41722a: /* 41722a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_41722d: /* 41722d: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 417230: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 417233: jmp 0x41729b */
  goto L_41729b;
L_417235: /* 417235: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417237: mov esi, 0x7fffffff */
  esi = 0x7fffffffu;
/* 41723c: mov ebx, 0x80000000 */
  ebx = 0x80000000u;
/* 417241: jne 0x41726a */
  if (!zf) goto L_41726a;
L_417243: /* 417243: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417245: jne 0x41729b */
  if (!zf) goto L_41729b;
L_417247: /* 417247: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 41724a: je 0x417259 */
  if (zf) goto L_417259;
L_41724c: /* 41724c: cmp dword ptr [ebp - 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41724f: ja 0x41726a */
  if ((!cf && !zf)) goto L_41726a;
L_417251: /* 417251: jb 0x417259 */
  if (cf) goto L_417259;
L_417253: /* 417253: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417257: ja 0x41726a */
  if ((!cf && !zf)) goto L_41726a;
L_417259: /* 417259: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41725b: jne 0x41729b */
  if (!zf) goto L_41729b;
L_41725d: /* 41725d: cmp dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417260: jb 0x41729b */
  if (cf) goto L_41729b;
L_417262: /* 417262: ja 0x41726a */
  if ((!cf && !zf)) goto L_41726a;
L_417264: /* 417264: cmp dword ptr [ebp - 8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417268: jbe 0x41729b */
  if ((cf | zf)) goto L_41729b;
L_41726a: /* 41726a: call 0x4102a5 */
  esp -= 4; W32(esp, 0x41726fu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 41726f: test byte ptr [ebp + 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417273: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
/* 417279: je 0x417285 */
  if (zf) goto L_417285;
L_41727b: /* 41727b: or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 41727f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 417283: jmp 0x41729b */
  goto L_41729b;
L_417285: /* 417285: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417289: je 0x417294 */
  if (zf) goto L_417294;
L_41728b: /* 41728b: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 41728f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 417292: jmp 0x41729b */
  goto L_41729b;
L_417294: /* 417294: or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 417298: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
L_41729b: /* 41729b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41729e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4172a0: je 0x4172a4 */
  if (zf) goto L_4172a4;
L_4172a2: /* 4172a2: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_4172a4: /* 4172a4: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4172a8: je 0x4172bd */
  if (zf) goto L_4172bd;
L_4172aa: /* 4172aa: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4172ad: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4172b0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4172b2: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 4172b5: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 4172b7: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 4172ba: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
L_4172bd: /* 4172bd: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4172c0: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4172c3: jmp 0x4172d5 */
  goto L_4172d5;
L_4172c5: /* 4172c5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4172c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4172ca: je 0x4172d1 */
  if (zf) goto L_4172d1;
L_4172cc: /* 4172cc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4172cf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_4172d1: /* 4172d1: xor eax, eax */
  eax = 0;
/* 4172d3: xor edx, edx */
  edx = 0;
L_4172d5: /* 4172d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4172d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4172d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4172d8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4172d9: ret  */
  esp += 4; SPILL(); return;
}

void f_4172da(void) {
  LOAD_REGS();
L_4172da: /* 4172da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4172dc: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4172e0: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4172e4: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4172e8: call 0x417087 */
  esp -= 4; W32(esp, 0x4172edu); SPILL(); f_417087(); if (g_unwind) return; RELOAD();
/* 4172ed: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4172f0: ret  */
  esp += 4; SPILL(); return;
}

void f_4172f1(void) {
  LOAD_REGS();
L_4172f1: /* 4172f1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4172f3: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4172f7: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4172fb: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4172ff: call 0x417087 */
  esp -= 4; W32(esp, 0x417304u); SPILL(); f_417087(); if (g_unwind) return; RELOAD();
/* 417304: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 417307: ret  */
  esp += 4; SPILL(); return;
}

void f_417308(void) {
  LOAD_REGS();
L_417308: /* 417308: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 41730a: push 0x43fc18 */
  { uint32_t v = 0x43fc18u; esp -= 4; W32(esp, v); }
/* 41730f: call 0x40101f */
  esp -= 4; W32(esp, 0x417314u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 417314: xor ebx, ebx */
  ebx = 0;
/* 417316: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 417318: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 41731b: xor eax, eax */
  eax = 0;
/* 41731d: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 417320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417321: call 0x401414 */
  esp -= 4; W32(esp, 0x417326u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 417326: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417327: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417328: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41732a: je 0x417344 */
  if (zf) goto L_417344;
L_41732c: /* 41732c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41732d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41732e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 417330: xor eax, eax */
  eax = 0;
/* 417332: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 417335: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417336: call 0x401414 */
  esp -= 4; W32(esp, 0x41733bu); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 41733b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41733c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41733d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41733f: jne 0x41732c */
  if (!zf) goto L_41732c;
L_417341: /* 417341: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
L_417344: /* 417344: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417345: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417346: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417347: call 0x417e01 */
  esp -= 4; W32(esp, 0x41734cu); SPILL(); f_417e01(); if (g_unwind) return; RELOAD();
/* 41734c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41734f: mov esi, eax */
  esi = eax;
/* 417351: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 417354: wait  */
/* 417355: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 417358: lea eax, [esi + esi + 2] */
  eax = (uint32_t)(esi + esi + 0x2u);
/* 41735c: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41735f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 417362: call 0x4014ee */
  esp -= 4; W32(esp, 0x417367u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 417367: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 41736a: mov edi, esp */
  edi = esp;
/* 41736c: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 41736f: wait  */
/* 417370: jmp 0x4173ad */
  goto L_4173ad;
L_4173ad: /* 4173ad: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4173b1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4173b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4173b3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4173b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4173b7: call 0x417e01 */
  esp -= 4; W32(esp, 0x4173bcu); SPILL(); f_417e01(); if (g_unwind) return; RELOAD();
/* 4173bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4173bd: call 0x417472 */
  esp -= 4; W32(esp, 0x4173c2u); SPILL(); f_417472(); if (g_unwind) return; RELOAD();
/* 4173c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4173c5: fstp qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 4173c8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4173ca: je 0x4173d3 */
  if (zf) goto L_4173d3;
L_4173cc: /* 4173cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4173cd: call 0x401156 */
  esp -= 4; W32(esp, 0x4173d2u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4173d2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4173d3: /* 4173d3: fld qword ptr [ebp - 0x28] */
  { double v = F64((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 4173d6: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 4173d9: call 0x40105a */
  esp -= 4; W32(esp, 0x4173deu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4173de: ret  */
  esp += 4; SPILL(); return;
}

void f_417367(void) {
  LOAD_REGS();
L_417367: /* 417367: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 41736a: mov edi, esp */
  edi = esp;
/* 41736c: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 41736f: wait  */
/* 417370: jmp 0x4173ad */
  goto L_4173ad;
L_4173ad: /* 4173ad: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4173b1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4173b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4173b3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4173b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4173b7: call 0x417e01 */
  esp -= 4; W32(esp, 0x4173bcu); SPILL(); f_417e01(); if (g_unwind) return; RELOAD();
/* 4173bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4173bd: call 0x417472 */
  esp -= 4; W32(esp, 0x4173c2u); SPILL(); f_417472(); if (g_unwind) return; RELOAD();
/* 4173c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4173c5: fstp qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 4173c8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4173ca: je 0x4173d3 */
  if (zf) goto L_4173d3;
L_4173cc: /* 4173cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4173cd: call 0x401156 */
  esp -= 4; W32(esp, 0x4173d2u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4173d2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4173d3: /* 4173d3: fld qword ptr [ebp - 0x28] */
  { double v = F64((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 4173d6: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 4173d9: call 0x40105a */
  esp -= 4; W32(esp, 0x4173deu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4173de: ret  */
  esp += 4; SPILL(); return;
}

void f_417372(void) {
  LOAD_REGS();
L_417372: /* 417372: xor eax, eax */
  eax = 0;
/* 417374: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 417375: ret  */
  esp += 4; SPILL(); return;
}

void f_417376(void) {
  LOAD_REGS();
L_417376: /* 417376: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 417379: call 0x415709 */
  esp -= 4; W32(esp, 0x41737eu); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 41737e: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 417381: lea eax, [esi + esi + 2] */
  eax = (uint32_t)(esi + esi + 0x2u);
/* 417385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417386: call 0x4010eb */
  esp -= 4; W32(esp, 0x41738bu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 41738b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41738c: mov edi, eax */
  edi = eax;
/* 41738e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417390: jne 0x4173aa */
  if (!zf) goto L_4173aa;
L_417392: /* 417392: call 0x4102a5 */
  esp -= 4; W32(esp, 0x417397u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 417397: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 41739d: wait  */
/* 41739e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4173a2: fld qword ptr [0x43fc10] */
  { double v = F64((uint32_t)(0x43fc10u)); FPUSH(v); }
/* 4173a8: jmp 0x4173d6 */
  goto L_4173d6;
L_4173aa: /* 4173aa: xor ebx, ebx */
  ebx = 0;
/* 4173ac: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4173ad: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4173b1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4173b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4173b3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4173b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4173b7: call 0x417e01 */
  esp -= 4; W32(esp, 0x4173bcu); SPILL(); f_417e01(); if (g_unwind) return; RELOAD();
/* 4173bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4173bd: call 0x417472 */
  esp -= 4; W32(esp, 0x4173c2u); SPILL(); f_417472(); if (g_unwind) return; RELOAD();
/* 4173c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4173c5: fstp qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 4173c8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4173ca: je 0x4173d3 */
  if (zf) goto L_4173d3;
L_4173cc: /* 4173cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4173cd: call 0x401156 */
  esp -= 4; W32(esp, 0x4173d2u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4173d2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4173d3: /* 4173d3: fld qword ptr [ebp - 0x28] */
  { double v = F64((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
L_4173d6: /* 4173d6: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 4173d9: call 0x40105a */
  esp -= 4; W32(esp, 0x4173deu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4173de: ret  */
  esp += 4; SPILL(); return;
}

void f_4173df(void) {
  LOAD_REGS();
L_4173df: /* 4173df: jmp 0x401adc */
  SPILL(); f_401adc(); return;
}

void f_4173e4(void) {
  LOAD_REGS();
L_4173e4: /* 4173e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4173e5: mov ebp, esp */
  ebp = esp;
/* 4173e7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4173ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4173eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4173ec: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4173ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4173f0: jmp 0x4173f4 */
  goto L_4173f4;
L_4173f2: /* 4173f2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4173f3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4173f4: /* 4173f4: xor eax, eax */
  eax = 0;
/* 4173f6: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 4173f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4173fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4173fc: call 0x401414 */
  esp -= 4; W32(esp, 0x417401u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 417401: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417403: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417404: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417405: jne 0x4173f2 */
  if (!zf) goto L_4173f2;
L_417407: /* 417407: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 41740a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41740b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41740c: cmp eax, 0x2d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41740f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 417412: je 0x417419 */
  if (zf) goto L_417419;
L_417414: /* 417414: cmp eax, 0x2b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417417: jne 0x41741e */
  if (!zf) goto L_41741e;
L_417419: /* 417419: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 41741c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41741d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_41741e: /* 41741e: xor ebx, ebx */
  ebx = 0;
/* 417420: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 417423: jmp 0x41744d */
  goto L_41744d;
L_417425: /* 417425: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 417427: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 417429: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 41742c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41742d: call 0x40518c */
  esp -= 4; W32(esp, 0x417432u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 417432: mov ecx, eax */
  ecx = eax;
/* 417434: mov eax, edx */
  eax = edx;
/* 417436: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 417439: mov eax, edi */
  eax = edi;
/* 41743b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 41743c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 41743e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 417441: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 417443: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 417446: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 417449: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41744a: mov ebx, ecx */
  ebx = ecx;
/* 41744c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_41744d: /* 41744d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41744e: call 0x401b27 */
  esp -= 4; W32(esp, 0x417453u); SPILL(); f_401b27(); if (g_unwind) return; RELOAD();
/* 417453: mov edi, eax */
  edi = eax;
/* 417455: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417458: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417459: jne 0x417425 */
  if (!zf) goto L_417425;
L_41745b: /* 41745b: cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41745f: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 417462: mov eax, ebx */
  eax = ebx;
/* 417464: jne 0x41746d */
  if (!zf) goto L_41746d;
L_417466: /* 417466: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 417468: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 41746b: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
L_41746d: /* 41746d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41746e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41746f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 417470: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 417471: ret  */
  esp += 4; SPILL(); return;
}

void f_417472(void) {
  LOAD_REGS();
L_417472: /* 417472: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 417473: mov ebp, esp */
  ebp = esp;
/* 417475: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 417478: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417479: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 41747c: jmp 0x41747f */
  goto L_41747f;
L_41747e: /* 41747e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_41747f: /* 41747f: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 417482: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417483: call 0x415488 */
  esp -= 4; W32(esp, 0x417488u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 417488: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41748a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41748b: jne 0x41747e */
  if (!zf) goto L_41747e;
L_41748d: /* 41748d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41748e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41748f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417490: call 0x402493 */
  esp -= 4; W32(esp, 0x417495u); SPILL(); hle_strlen(); RELOAD();
/* 417495: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417497: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41749a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41749b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41749c: call 0x402ac1 */
  esp -= 4; W32(esp, 0x4174a1u); SPILL(); f_402ac1(); if (g_unwind) return; RELOAD();
/* 4174a1: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 4174a4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4174a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4174a8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4174a9: ret  */
  esp += 4; SPILL(); return;
}

void f_417475(void) {
  LOAD_REGS();
L_417475: /* 417475: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 417478: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417479: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 41747c: jmp 0x41747f */
  goto L_41747f;
L_41747e: /* 41747e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_41747f: /* 41747f: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 417482: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417483: call 0x415488 */
  esp -= 4; W32(esp, 0x417488u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 417488: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41748a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41748b: jne 0x41747e */
  if (!zf) goto L_41747e;
L_41748d: /* 41748d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41748e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41748f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417490: call 0x402493 */
  esp -= 4; W32(esp, 0x417495u); SPILL(); hle_strlen(); RELOAD();
/* 417495: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417497: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41749a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41749b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41749c: call 0x402ac1 */
  esp -= 4; W32(esp, 0x4174a1u); SPILL(); f_402ac1(); if (g_unwind) return; RELOAD();
/* 4174a1: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 4174a4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4174a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4174a8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4174a9: ret  */
  esp += 4; SPILL(); return;
}

void f_4174aa(void) {
  LOAD_REGS();
L_4174aa: /* 4174aa: movzx eax, byte ptr [esp + 4] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x4u)));
/* 4174af: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 4174b5: movzx eax, word ptr [ecx + eax*2] */
  eax = (uint32_t)(R16((uint32_t)(ecx + eax*2)));
/* 4174b9: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4174be: ret  */
  esp += 4; SPILL(); return;
}

void f_4174bf(void) {
  LOAD_REGS();
L_4174bf: /* 4174bf: push 0x103 */
  { uint32_t v = 0x103u; esp -= 4; W32(esp, v); }
/* 4174c4: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4174c8: call 0x401414 */
  esp -= 4; W32(esp, 0x4174cdu); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 4174cd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4174ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4174cf: ret  */
  esp += 4; SPILL(); return;
}

void f_4174d0(void) {
  LOAD_REGS();
L_4174d0: /* 4174d0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4174d2: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4174d6: call 0x401414 */
  esp -= 4; W32(esp, 0x4174dbu); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 4174db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4174dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4174dd: ret  */
  esp += 4; SPILL(); return;
}

void f_4174de(void) {
  LOAD_REGS();
L_4174de: /* 4174de: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4174e0: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4174e4: call 0x401414 */
  esp -= 4; W32(esp, 0x4174e9u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 4174e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4174ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4174eb: ret  */
  esp += 4; SPILL(); return;
}

void f_4174ec(void) {
  LOAD_REGS();
L_4174ec: /* 4174ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4174ee: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4174f2: call 0x401414 */
  esp -= 4; W32(esp, 0x4174f7u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 4174f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4174f8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4174f9: ret  */
  esp += 4; SPILL(); return;
}

void f_4174fa(void) {
  LOAD_REGS();
L_4174fa: /* 4174fa: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 4174ff: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 417503: call 0x401414 */
  esp -= 4; W32(esp, 0x417508u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 417508: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417509: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41750a: ret  */
  esp += 4; SPILL(); return;
}

void f_41750b(void) {
  LOAD_REGS();
L_41750b: /* 41750b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41750d: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 417511: call 0x401414 */
  esp -= 4; W32(esp, 0x417516u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 417516: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417517: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417518: ret  */
  esp += 4; SPILL(); return;
}

void f_417519(void) {
  LOAD_REGS();
L_417519: /* 417519: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 41751b: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41751f: call 0x401414 */
  esp -= 4; W32(esp, 0x417524u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 417524: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417525: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417526: ret  */
  esp += 4; SPILL(); return;
}

void f_417527(void) {
  LOAD_REGS();
L_417527: /* 417527: push 0x107 */
  { uint32_t v = 0x107u; esp -= 4; W32(esp, v); }
/* 41752c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 417530: call 0x401414 */
  esp -= 4; W32(esp, 0x417535u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 417535: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417536: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417537: ret  */
  esp += 4; SPILL(); return;
}

void f_417538(void) {
  LOAD_REGS();
L_417538: /* 417538: push 0x157 */
  { uint32_t v = 0x157u; esp -= 4; W32(esp, v); }
/* 41753d: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 417541: call 0x401414 */
  esp -= 4; W32(esp, 0x417546u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 417546: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417547: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417548: ret  */
  esp += 4; SPILL(); return;
}

void f_417549(void) {
  LOAD_REGS();
L_417549: /* 417549: push 0x117 */
  { uint32_t v = 0x117u; esp -= 4; W32(esp, v); }
/* 41754e: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 417552: call 0x401414 */
  esp -= 4; W32(esp, 0x417557u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 417557: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417558: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417559: ret  */
  esp += 4; SPILL(); return;
}

void f_41755a(void) {
  LOAD_REGS();
L_41755a: /* 41755a: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 41755c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 417560: call 0x401414 */
  esp -= 4; W32(esp, 0x417565u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 417565: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417566: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417567: ret  */
  esp += 4; SPILL(); return;
}

void f_417568(void) {
  LOAD_REGS();
L_417568: /* 417568: cmp word ptr [esp + 4], 0x80 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x4u))); uint16_t b = (uint16_t)(0x80u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 41756f: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 417571: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 417573: ret  */
  esp += 4; SPILL(); return;
}

void f_417574(void) {
  LOAD_REGS();
L_417574: /* 417574: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417575: call 0x40137f */
  esp -= 4; W32(esp, 0x41757au); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41757a: mov esi, dword ptr [eax + 0x64] */
  esi = R32((uint32_t)(eax + 0x64u));
/* 41757d: cmp esi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417583: je 0x41758c */
  if (zf) goto L_41758c;
L_417585: /* 417585: call 0x4025f2 */
  esp -= 4; W32(esp, 0x41758au); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 41758a: mov esi, eax */
  esi = eax;
L_41758c: /* 41758c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 417590: xor edx, edx */
  edx = 0;
/* 417592: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417594: je 0x4175f9 */
  if (zf) goto L_4175f9;
L_417596: /* 417596: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 417598: cmp al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41759a: je 0x4175f9 */
  if (zf) goto L_4175f9;
L_41759c: /* 41759c: cmp dword ptr [esp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4175a0: je 0x4175f9 */
  if (zf) goto L_4175f9;
L_4175a2: /* 4175a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4175a3: mov edi, dword ptr [esi + 0x48] */
  edi = R32((uint32_t)(esi + 0x48u));
/* 4175a6: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 4175a9: test byte ptr [edi + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4175ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4175af: je 0x4175dc */
  if (zf) goto L_4175dc;
L_4175b1: /* 4175b1: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 4175b4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4175b7: jle 0x4175d7 */
  if ((zf || sf != of)) goto L_4175d7;
L_4175b9: /* 4175b9: cmp dword ptr [esp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4175bd: jl 0x4175d7 */
  if ((sf != of)) goto L_4175d7;
L_4175bf: /* 4175bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4175c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4175c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4175c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4175c3: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 4175c5: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 4175c8: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x4175ceu); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 4175ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4175d0: je 0x4175d7 */
  if (zf) goto L_4175d7;
L_4175d2: /* 4175d2: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 4175d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4175d6: ret  */
  esp += 4; SPILL(); return;
L_4175d7: /* 4175d7: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4175da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4175db: ret  */
  esp += 4; SPILL(); return;
L_4175dc: /* 4175dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4175dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4175de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4175e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4175e1: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 4175e3: push dword ptr [0x449230] */
  { uint32_t v = R32((uint32_t)(0x449230u)); esp -= 4; W32(esp, v); }
/* 4175e9: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x4175efu); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 4175ef: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4175f1: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4175f3: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4175f6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4175f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4175f8: ret  */
  esp += 4; SPILL(); return;
L_4175f9: /* 4175f9: xor eax, eax */
  eax = 0;
/* 4175fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4175fc: ret  */
  esp += 4; SPILL(); return;
}

void f_4175fd(void) {
  LOAD_REGS();
L_4175fd: /* 4175fd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4175fe: mov ebp, esp */
  ebp = esp;
/* 417600: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 417601: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 417604: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417605: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417606: xor esi, esi */
  esi = 0;
/* 417608: xor eax, eax */
  eax = 0;
/* 41760a: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41760c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41760d: je 0x4176c4 */
  if (zf) goto L_4176c4;
L_417613: /* 417613: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 417616: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417618: je 0x4176ee */
  if (zf) goto L_4176ee;
L_41761e: /* 41761e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 417621: cmp dword ptr [edi + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417624: jne 0x41764f */
  if (!zf) goto L_41764f;
L_417626: /* 417626: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417628: jbe 0x4176ee */
  if ((cf | zf)) goto L_4176ee;
L_41762e: /* 41762e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 417631: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 417633: movzx si, byte ptr [ecx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ecx)))) & 0xffffu);
/* 417637: mov word ptr [edx], si */
  W16((uint32_t)(edx), (esi & 0xffffu));
/* 41763a: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41763d: je 0x4176ee */
  if (zf) goto L_4176ee;
L_417643: /* 417643: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 417644: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 417645: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 417646: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 417648: jb 0x41762e */
  if (cf) goto L_41762e;
L_41764a: /* 41764a: jmp 0x4176ee */
  goto L_4176ee;
L_41764f: /* 41764f: mov esi, dword ptr [0x4390bc] */
  esi = R32((uint32_t)(0x4390bcu));
/* 417655: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417656: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 417659: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 41765a: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 41765c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41765d: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 41765f: push dword ptr [edi + 4] */
  { uint32_t v = R32((uint32_t)(edi + 0x4u)); esp -= 4; W32(esp, v); }
/* 417662: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x417664u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 417664: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417666: jne 0x4176ed */
  if (!zf) goto L_4176ed;
L_41766c: /* 41766c: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x417672u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 417672: cmp eax, 0x7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417675: je 0x417687 */
  if (zf) goto L_417687;
L_417677: /* 417677: call 0x4102a5 */
  esp -= 4; W32(esp, 0x41767cu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 41767c: mov dword ptr [eax], 0x2a */
  W32((uint32_t)(eax), 0x2au);
/* 417682: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 417685: jmp 0x4176ee */
  goto L_4176ee;
L_417687: /* 417687: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 41768a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41768d: mov eax, ebx */
  eax = ebx;
L_41768f: /* 41768f: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 417691: dec dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 417694: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417696: je 0x4176ad */
  if (zf) goto L_4176ad;
L_417698: /* 417698: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 41769b: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 41769e: test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ecx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4176a3: je 0x4176a6 */
  if (zf) goto L_4176a6;
L_4176a5: /* 4176a5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_4176a6: /* 4176a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4176a7: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4176ab: jne 0x41768f */
  if (!zf) goto L_41768f;
L_4176ad: /* 4176ad: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4176b0: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4176b2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4176b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4176b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4176b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4176b9: push dword ptr [edi + 4] */
  { uint32_t v = R32((uint32_t)(edi + 0x4u)); esp -= 4; W32(esp, v); }
/* 4176bc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x4176beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4176be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4176c0: jne 0x4176ee */
  if (!zf) goto L_4176ee;
L_4176c2: /* 4176c2: jmp 0x417677 */
  goto L_417677;
L_4176c4: /* 4176c4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4176c7: cmp dword ptr [eax + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4176ca: jne 0x4176d7 */
  if (!zf) goto L_4176d7;
L_4176cc: /* 4176cc: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4176cf: call 0x402493 */
  esp -= 4; W32(esp, 0x4176d4u); SPILL(); hle_strlen(); RELOAD();
/* 4176d4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4176d5: jmp 0x4176ee */
  goto L_4176ee;
L_4176d7: /* 4176d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4176d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4176d9: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4176db: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4176de: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 4176e0: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 4176e3: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x4176e9u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 4176e9: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4176eb: je 0x417677 */
  if (zf) goto L_417677;
L_4176ed: /* 4176ed: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_4176ee: /* 4176ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4176ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4176f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4176f1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4176f2: ret  */
  esp += 4; SPILL(); return;
}

void f_4176f3(void) {
  LOAD_REGS();
L_4176f3: /* 4176f3: call 0x40137f */
  esp -= 4; W32(esp, 0x4176f8u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4176f8: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 4176fb: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417701: je 0x417708 */
  if (zf) goto L_417708;
L_417703: /* 417703: call 0x4025f2 */
  esp -= 4; W32(esp, 0x417708u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_417708: /* 417708: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41770c: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 417710: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 417714: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417715: call 0x4175fd */
  esp -= 4; W32(esp, 0x41771au); SPILL(); f_4175fd(); if (g_unwind) return; RELOAD();
/* 41771a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41771d: ret  */
  esp += 4; SPILL(); return;
}

void f_41771e(void) {
  LOAD_REGS();
L_41771e: /* 41771e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41771f: mov ebp, esp */
  ebp = esp;
/* 417721: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 417724: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417725: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 417726: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 417729: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* 41772c: mov esi, edi */
  esi = edi;
/* 41772e: jmp 0x417734 */
  goto L_417734;
L_417730: /* 417730: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 417731: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
L_417734: /* 417734: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417735: call 0x415488 */
  esp -= 4; W32(esp, 0x41773au); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 41773a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41773c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41773d: jne 0x417730 */
  if (!zf) goto L_417730;
L_41773f: /* 41773f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417740: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417741: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417742: call 0x402493 */
  esp -= 4; W32(esp, 0x417747u); SPILL(); hle_strlen(); RELOAD();
/* 417747: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417748: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417749: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41774c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41774d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41774e: call 0x402ac1 */
  esp -= 4; W32(esp, 0x417753u); SPILL(); f_402ac1(); if (g_unwind) return; RELOAD();
/* 417753: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 417756: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 417759: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41775b: je 0x417764 */
  if (zf) goto L_417764;
L_41775d: /* 41775d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 417760: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 417762: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_417764: /* 417764: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 417766: test dx, 0x240 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x240u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 41776b: je 0x417777 */
  if (zf) goto L_417777;
L_41776d: /* 41776d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41776f: fldz  */
  FPUSH(0.0);
/* 417771: je 0x4177a8 */
  if (zf) goto L_4177a8;
L_417773: /* 417773: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 417775: jmp 0x4177a8 */
  goto L_4177a8;
L_417777: /* 417777: test dl, 0x81 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x81u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41777a: je 0x41779c */
  if (zf) goto L_41779c;
L_41777c: /* 41777c: cmp byte ptr [esi], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41777f: fld qword ptr [0x4491cc] */
  { double v = F64((uint32_t)(0x4491ccu)); FPUSH(v); }
/* 417785: jne 0x417789 */
  if (!zf) goto L_417789;
L_417787: /* 417787: fchs  */
  ST0 = -ST0;
L_417789: /* 417789: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 41778c: call 0x4102a5 */
  esp -= 4; W32(esp, 0x417791u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 417791: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 417794: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
/* 41779a: jmp 0x4177a8 */
  goto L_4177a8;
L_41779c: /* 41779c: test dh, 1 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41779f: je 0x4177a5 */
  if (zf) goto L_4177a5;
L_4177a1: /* 4177a1: fldz  */
  FPUSH(0.0);
/* 4177a3: jmp 0x417789 */
  goto L_417789;
L_4177a5: /* 4177a5: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
L_4177a8: /* 4177a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4177a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4177aa: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4177ab: ret  */
  esp += 4; SPILL(); return;
}

void f_4177ac(void) {
  LOAD_REGS();
L_4177ac: /* 4177ac: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4177ad: mov ebp, esp */
  ebp = esp;
/* 4177af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4177b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4177b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4177b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4177b3: call 0x40137f */
  esp -= 4; W32(esp, 0x4177b8u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4177b8: mov esi, dword ptr [eax + 0x64] */
  esi = R32((uint32_t)(eax + 0x64u));
/* 4177bb: cmp esi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4177c1: je 0x4177ca */
  if (zf) goto L_4177ca;
L_4177c3: /* 4177c3: call 0x4025f2 */
  esp -= 4; W32(esp, 0x4177c8u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 4177c8: mov esi, eax */
  esi = eax;
L_4177ca: /* 4177ca: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4177cd: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4177d1: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 4177d3: lea edi, [ecx + 1] */
  edi = (uint32_t)(ecx + 0x1u);
L_4177d6: /* 4177d6: cmp dword ptr [esi + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4177da: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 4177dd: jle 0x4177f0 */
  if ((zf || sf != of)) goto L_4177f0;
L_4177df: /* 4177df: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4177e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4177e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4177e3: call 0x415666 */
  esp -= 4; W32(esp, 0x4177e8u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 4177e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4177eb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4177ee: jmp 0x4177fa */
  goto L_4177fa;
L_4177f0: /* 4177f0: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 4177f3: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 4177f7: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_4177fa: /* 4177fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4177fc: je 0x417803 */
  if (zf) goto L_417803;
L_4177fe: /* 4177fe: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 417800: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 417801: jmp 0x4177d6 */
  goto L_4177d6;
L_417803: /* 417803: cmp bl, 0x2d */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 417806: jne 0x41780e */
  if (!zf) goto L_41780e;
L_417808: /* 417808: or dword ptr [ebp + 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 41780c: jmp 0x417813 */
  goto L_417813;
L_41780e: /* 41780e: cmp bl, 0x2b */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 417811: jne 0x417816 */
  if (!zf) goto L_417816;
L_417813: /* 417813: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 417815: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_417816: /* 417816: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 417819: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41781b: jl 0x41795b */
  if ((sf != of)) goto L_41795b;
L_417821: /* 417821: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417824: je 0x41795b */
  if (zf) goto L_41795b;
L_41782a: /* 41782a: cmp eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41782d: jg 0x41795b */
  if ((!zf && sf == of)) goto L_41795b;
L_417833: /* 417833: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417835: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 417837: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417838: jne 0x41785e */
  if (!zf) goto L_41785e;
L_41783a: /* 41783a: cmp bl, 0x30 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41783d: je 0x417848 */
  if (zf) goto L_417848;
L_41783f: /* 41783f: mov dword ptr [ebp + 0x10], 0xa */
  W32((uint32_t)(ebp + 0x10u), 0xau);
/* 417846: jmp 0x417876 */
  goto L_417876;
L_417848: /* 417848: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 41784a: cmp al, 0x78 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41784c: je 0x41785b */
  if (zf) goto L_41785b;
L_41784e: /* 41784e: cmp al, 0x58 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 417850: je 0x41785b */
  if (zf) goto L_41785b;
L_417852: /* 417852: mov dword ptr [ebp + 0x10], 8 */
  W32((uint32_t)(ebp + 0x10u), 0x8u);
/* 417859: jmp 0x417876 */
  goto L_417876;
L_41785b: /* 41785b: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
L_41785e: /* 41785e: cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417861: jne 0x417876 */
  if (!zf) goto L_417876;
L_417863: /* 417863: cmp bl, 0x30 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 417866: jne 0x417876 */
  if (!zf) goto L_417876;
L_417868: /* 417868: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 41786a: cmp al, 0x78 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41786c: je 0x417872 */
  if (zf) goto L_417872;
L_41786e: /* 41786e: cmp al, 0x58 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 417870: jne 0x417876 */
  if (!zf) goto L_417876;
L_417872: /* 417872: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 417873: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 417875: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_417876: /* 417876: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 417879: xor edx, edx */
  edx = 0;
/* 41787b: div dword ptr [ebp + 0x10] */
  { uint32_t d = R32((uint32_t)(ebp + 0x10u)); if (!d) d = guest_divzero(0x41787b);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_41787e: /* 41787e: mov esi, dword ptr [0x449030] */
  esi = R32((uint32_t)(0x449030u));
/* 417884: movzx ecx, bl */
  ecx = (uint32_t)((ebx & 0xffu));
/* 417887: mov cx, word ptr [esi + ecx*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + ecx*2))) & 0xffffu);
/* 41788b: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41788e: je 0x417898 */
  if (zf) goto L_417898;
L_417890: /* 417890: movsx ecx, bl */
  ecx = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 417893: sub ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 417896: jmp 0x4178b7 */
  goto L_4178b7;
L_417898: /* 417898: test cx, 0x103 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x103u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 41789d: je 0x4178e2 */
  if (zf) goto L_4178e2;
L_41789f: /* 41789f: cmp bl, 0x61 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x61u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 4178a2: jl 0x4178b1 */
  if ((sf != of)) goto L_4178b1;
L_4178a4: /* 4178a4: cmp bl, 0x7a */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x7au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 4178a7: jg 0x4178b1 */
  if ((!zf && sf == of)) goto L_4178b1;
L_4178a9: /* 4178a9: movsx ecx, bl */
  ecx = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 4178ac: sub ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4178af: jmp 0x4178b4 */
  goto L_4178b4;
L_4178b1: /* 4178b1: movsx ecx, bl */
  ecx = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
L_4178b4: /* 4178b4: add ecx, -0x37 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc9u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_4178b7: /* 4178b7: cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4178ba: jae 0x4178e2 */
  if (!cf) goto L_4178e2;
L_4178bc: /* 4178bc: or dword ptr [ebp + 0x14], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 4178c0: cmp dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4178c3: jb 0x4178d1 */
  if (cf) goto L_4178d1;
L_4178c5: /* 4178c5: jne 0x4178cb */
  if (!zf) goto L_4178cb;
L_4178c7: /* 4178c7: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4178c9: jbe 0x4178d1 */
  if ((cf | zf)) goto L_4178d1;
L_4178cb: /* 4178cb: or dword ptr [ebp + 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 4178cf: jmp 0x4178dd */
  goto L_4178dd;
L_4178d1: /* 4178d1: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4178d4: imul esi, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  esi = (uint32_t)r;
  }
/* 4178d8: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4178da: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
L_4178dd: /* 4178dd: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 4178df: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4178e0: jmp 0x41787e */
  goto L_41787e;
L_4178e2: /* 4178e2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4178e5: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 4178e6: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4178e8: jne 0x4178f9 */
  if (!zf) goto L_4178f9;
L_4178ea: /* 4178ea: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4178ee: je 0x4178f3 */
  if (zf) goto L_4178f3;
L_4178f0: /* 4178f0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_4178f3: /* 4178f3: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4178f7: jmp 0x417944 */
  goto L_417944;
L_4178f9: /* 4178f9: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4178fb: mov esi, 0x7fffffff */
  esi = 0x7fffffffu;
/* 417900: jne 0x41791d */
  if (!zf) goto L_41791d;
L_417902: /* 417902: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417904: jne 0x417944 */
  if (!zf) goto L_417944;
L_417906: /* 417906: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 417909: je 0x417914 */
  if (zf) goto L_417914;
L_41790b: /* 41790b: cmp dword ptr [ebp - 4], 0x80000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417912: ja 0x41791d */
  if ((!cf && !zf)) goto L_41791d;
L_417914: /* 417914: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417916: jne 0x417944 */
  if (!zf) goto L_417944;
L_417918: /* 417918: cmp dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41791b: jbe 0x417944 */
  if ((cf | zf)) goto L_417944;
L_41791d: /* 41791d: call 0x4102a5 */
  esp -= 4; W32(esp, 0x417922u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 417922: test byte ptr [ebp + 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417926: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
/* 41792c: je 0x417934 */
  if (zf) goto L_417934;
L_41792e: /* 41792e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 417932: jmp 0x417944 */
  goto L_417944;
L_417934: /* 417934: mov al, byte ptr [ebp + 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x14u))) & 0xffu);
/* 417937: and al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 417939: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41793b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41793d: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 41793f: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 417941: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_417944: /* 417944: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 417947: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417949: je 0x41794d */
  if (zf) goto L_41794d;
L_41794b: /* 41794b: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_41794d: /* 41794d: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417951: je 0x417956 */
  if (zf) goto L_417956;
L_417953: /* 417953: neg dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_417956: /* 417956: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 417959: jmp 0x417966 */
  goto L_417966;
L_41795b: /* 41795b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41795e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417960: je 0x417964 */
  if (zf) goto L_417964;
L_417962: /* 417962: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_417964: /* 417964: xor eax, eax */
  eax = 0;
L_417966: /* 417966: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 417967: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 417968: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 417969: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41796a: ret  */
  esp += 4; SPILL(); return;
}

void f_41796b(void) {
  LOAD_REGS();
L_41796b: /* 41796b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41796d: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417971: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417975: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417979: call 0x4177ac */
  esp -= 4; W32(esp, 0x41797eu); SPILL(); f_4177ac(); if (g_unwind) return; RELOAD();
/* 41797e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 417981: ret  */
  esp += 4; SPILL(); return;
}

void f_417982(void) {
  LOAD_REGS();
L_417982: /* 417982: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 417984: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417988: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41798c: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417990: call 0x4177ac */
  esp -= 4; W32(esp, 0x417995u); SPILL(); f_4177ac(); if (g_unwind) return; RELOAD();
/* 417995: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 417998: ret  */
  esp += 4; SPILL(); return;
}

void f_417999(void) {
  LOAD_REGS();
L_417999: /* 417999: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41799a: mov ebp, esp */
  ebp = esp;
/* 41799c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41799d: mov eax, 0xffff */
  eax = 0xffffu;
/* 4179a2: cmp word ptr [ebp + 0xc], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xcu))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4179a6: je 0x4179f8 */
  if (zf) goto L_4179f8;
L_4179a8: /* 4179a8: cmp word ptr [ebp + 0xc], 0x100 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xcu))); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 4179ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4179af: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4179b2: jae 0x4179cc */
  if (!cf) goto L_4179cc;
L_4179b4: /* 4179b4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4179b6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4179b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4179ba: call 0x4018eb */
  esp -= 4; W32(esp, 0x4179bfu); SPILL(); f_4018eb(); if (g_unwind) return; RELOAD();
/* 4179bf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4179c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4179c4: jne 0x4179cc */
  if (!zf) goto L_4179cc;
L_4179c6: /* 4179c6: mov ax, word ptr [ebp + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xcu))) & 0xffffu);
/* 4179ca: jmp 0x4179f7 */
  goto L_4179f7;
L_4179cc: /* 4179cc: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 4179cf: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 4179d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4179d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4179d5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4179d7: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 4179da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4179db: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 4179e0: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 4179e3: call 0x401944 */
  esp -= 4; W32(esp, 0x4179e8u); SPILL(); f_401944(); if (g_unwind) return; RELOAD();
/* 4179e8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4179eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4179ed: mov ax, word ptr [ebp + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xcu))) & 0xffffu);
/* 4179f1: je 0x4179f7 */
  if (zf) goto L_4179f7;
L_4179f3: /* 4179f3: mov ax, word ptr [ebp - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu))) & 0xffffu);
L_4179f7: /* 4179f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4179f8: /* 4179f8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4179f9: ret  */
  esp += 4; SPILL(); return;
}

void f_4179fa(void) {
  LOAD_REGS();
L_4179fa: /* 4179fa: call 0x40137f */
  esp -= 4; W32(esp, 0x4179ffu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4179ff: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 417a02: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417a08: je 0x417a0f */
  if (zf) goto L_417a0f;
L_417a0a: /* 417a0a: call 0x4025f2 */
  esp -= 4; W32(esp, 0x417a0fu); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_417a0f: /* 417a0f: cmp dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417a13: jne 0x417a30 */
  if (!zf) goto L_417a30;
L_417a15: /* 417a15: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 417a19: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 417a1d: jb 0x417a2c */
  if (cf) goto L_417a2c;
L_417a1f: /* 417a1f: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417a23: ja 0x417a2c */
  if ((!cf && !zf)) goto L_417a2c;
L_417a25: /* 417a25: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 417a28: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 417a2b: ret  */
  esp += 4; SPILL(); return;
L_417a2c: /* 417a2c: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 417a2f: ret  */
  esp += 4; SPILL(); return;
L_417a30: /* 417a30: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 417a34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417a35: call 0x417999 */
  esp -= 4; W32(esp, 0x417a3au); SPILL(); f_417999(); if (g_unwind) return; RELOAD();
/* 417a3a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417a3b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417a3c: ret  */
  esp += 4; SPILL(); return;
}

void f_417a3d(void) {
  LOAD_REGS();
L_417a3d: /* 417a3d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 417a3e: mov ebp, esp */
  ebp = esp;
/* 417a40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 417a41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 417a42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417a43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417a44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 417a45: call 0x40137f */
  esp -= 4; W32(esp, 0x417a4au); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 417a4a: mov edi, dword ptr [eax + 0x64] */
  edi = R32((uint32_t)(eax + 0x64u));
/* 417a4d: cmp edi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417a53: je 0x417a5c */
  if (zf) goto L_417a5c;
L_417a55: /* 417a55: call 0x4025f2 */
  esp -= 4; W32(esp, 0x417a5au); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 417a5a: mov edi, eax */
  edi = eax;
L_417a5c: /* 417a5c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 417a5f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 417a63: xor esi, esi */
  esi = 0;
/* 417a65: mov si, word ptr [ebx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 417a68: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 417a6b: jmp 0x417a74 */
  goto L_417a74;
L_417a6d: /* 417a6d: xor esi, esi */
  esi = 0;
/* 417a6f: mov si, word ptr [ebx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 417a72: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 417a73: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_417a74: /* 417a74: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 417a76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417a77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 417a78: call 0x4018eb */
  esp -= 4; W32(esp, 0x417a7du); SPILL(); f_4018eb(); if (g_unwind) return; RELOAD();
/* 417a7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 417a80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417a82: jne 0x417a6d */
  if (!zf) goto L_417a6d;
L_417a84: /* 417a84: cmp si, 0x2d */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 417a88: jne 0x417a90 */
  if (!zf) goto L_417a90;
L_417a8a: /* 417a8a: or dword ptr [ebp + 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 417a8e: jmp 0x417a96 */
  goto L_417a96;
L_417a90: /* 417a90: cmp si, 0x2b */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 417a94: jne 0x417a9b */
  if (!zf) goto L_417a9b;
L_417a96: /* 417a96: mov si, word ptr [ebx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 417a99: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 417a9a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_417a9b: /* 417a9b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 417a9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 417aa0: jl 0x417c09 */
  if ((sf != of)) goto L_417c09;
L_417aa6: /* 417aa6: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417aa9: je 0x417c09 */
  if (zf) goto L_417c09;
L_417aaf: /* 417aaf: cmp eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 417ab2: jg 0x417c09 */
  if ((!zf && sf == of)) goto L_417c09;
L_417ab8: /* 417ab8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417aba: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 417abc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 417abd: jne 0x417aee */
  if (!zf) goto L_417aee;
L_417abf: /* 417abf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417ac0: call 0x401b27 */
  esp -= 4; W32(esp, 0x417ac5u); SPILL(); f_401b27(); if (g_unwind) return; RELOAD();
/* 417ac5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417ac7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417ac8: je 0x417ad3 */
  if (zf) goto L_417ad3;
L_417aca: /* 417aca: mov dword ptr [ebp + 0x10], 0xa */
  W32((uint32_t)(ebp + 0x10u), 0xau);
/* 417ad1: jmp 0x417b16 */
  goto L_417b16;
L_417ad3: /* 417ad3: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 417ad6: cmp ax, 0x78 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 417ada: je 0x417aeb */
  if (zf) goto L_417aeb;
L_417adc: /* 417adc: cmp ax, 0x58 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 417ae0: je 0x417aeb */
  if (zf) goto L_417aeb;
L_417ae2: /* 417ae2: mov dword ptr [ebp + 0x10], 8 */
  W32((uint32_t)(ebp + 0x10u), 0x8u);
/* 417ae9: jmp 0x417b16 */
  goto L_417b16;
L_417aeb: /* 417aeb: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
L_417aee: /* 417aee: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417af1: jne 0x417b16 */
  if (!zf) goto L_417b16;
L_417af3: /* 417af3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417af4: call 0x401b27 */
  esp -= 4; W32(esp, 0x417af9u); SPILL(); f_401b27(); if (g_unwind) return; RELOAD();
/* 417af9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417afb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417afc: jne 0x417b16 */
  if (!zf) goto L_417b16;
L_417afe: /* 417afe: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 417b01: cmp ax, 0x78 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 417b05: je 0x417b0d */
  if (zf) goto L_417b0d;
L_417b07: /* 417b07: cmp ax, 0x58 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 417b0b: jne 0x417b16 */
  if (!zf) goto L_417b16;
L_417b0d: /* 417b0d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 417b0e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 417b0f: xor esi, esi */
  esi = 0;
/* 417b11: mov si, word ptr [ebx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 417b14: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 417b15: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_417b16: /* 417b16: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 417b19: xor edx, edx */
  edx = 0;
/* 417b1b: div dword ptr [ebp + 0x10] */
  { uint32_t d = R32((uint32_t)(ebp + 0x10u)); if (!d) d = guest_divzero(0x417b1b);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 417b1e: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 417b21: mov edi, eax */
  edi = eax;
L_417b23: /* 417b23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417b24: call 0x401b27 */
  esp -= 4; W32(esp, 0x417b29u); SPILL(); f_401b27(); if (g_unwind) return; RELOAD();
/* 417b29: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417b2c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417b2d: jne 0x417b61 */
  if (!zf) goto L_417b61;
L_417b2f: /* 417b2f: cmp si, 0x41 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 417b33: jb 0x417b3b */
  if (cf) goto L_417b3b;
L_417b35: /* 417b35: cmp si, 0x5a */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417b39: jbe 0x417b47 */
  if ((cf | zf)) goto L_417b47;
L_417b3b: /* 417b3b: cmp si, 0x61 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 417b3f: jb 0x417b8f */
  if (cf) goto L_417b8f;
L_417b41: /* 417b41: cmp si, 0x7a */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417b45: ja 0x417b8f */
  if ((!cf && !zf)) goto L_417b8f;
L_417b47: /* 417b47: cmp si, 0x61 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 417b4b: jb 0x417b5b */
  if (cf) goto L_417b5b;
L_417b4d: /* 417b4d: cmp si, 0x7a */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417b51: ja 0x417b5b */
  if ((!cf && !zf)) goto L_417b5b;
L_417b53: /* 417b53: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
/* 417b56: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 417b59: jmp 0x417b5e */
  goto L_417b5e;
L_417b5b: /* 417b5b: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
L_417b5e: /* 417b5e: add eax, -0x37 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffc9u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_417b61: /* 417b61: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 417b64: jae 0x417b8f */
  if (!cf) goto L_417b8f;
L_417b66: /* 417b66: or dword ptr [ebp + 0x14], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 417b6a: cmp dword ptr [ebp - 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417b6d: jb 0x417b7c */
  if (cf) goto L_417b7c;
L_417b6f: /* 417b6f: jne 0x417b76 */
  if (!zf) goto L_417b76;
L_417b71: /* 417b71: cmp eax, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417b74: jbe 0x417b7c */
  if ((cf | zf)) goto L_417b7c;
L_417b76: /* 417b76: or dword ptr [ebp + 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 417b7a: jmp 0x417b88 */
  goto L_417b88;
L_417b7c: /* 417b7c: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 417b7f: imul ecx, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  ecx = (uint32_t)r;
  }
/* 417b83: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 417b85: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
L_417b88: /* 417b88: mov si, word ptr [ebx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 417b8b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 417b8c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 417b8d: jmp 0x417b23 */
  goto L_417b23;
L_417b8f: /* 417b8f: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 417b92: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 417b93: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 417b94: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417b96: jne 0x417ba7 */
  if (!zf) goto L_417ba7;
L_417b98: /* 417b98: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417b9c: je 0x417ba1 */
  if (zf) goto L_417ba1;
L_417b9e: /* 417b9e: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_417ba1: /* 417ba1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 417ba5: jmp 0x417bf2 */
  goto L_417bf2;
L_417ba7: /* 417ba7: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417ba9: mov esi, 0x7fffffff */
  esi = 0x7fffffffu;
/* 417bae: jne 0x417bcb */
  if (!zf) goto L_417bcb;
L_417bb0: /* 417bb0: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417bb2: jne 0x417bf2 */
  if (!zf) goto L_417bf2;
L_417bb4: /* 417bb4: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 417bb7: je 0x417bc2 */
  if (zf) goto L_417bc2;
L_417bb9: /* 417bb9: cmp dword ptr [ebp - 4], 0x80000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417bc0: ja 0x417bcb */
  if ((!cf && !zf)) goto L_417bcb;
L_417bc2: /* 417bc2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417bc4: jne 0x417bf2 */
  if (!zf) goto L_417bf2;
L_417bc6: /* 417bc6: cmp dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417bc9: jbe 0x417bf2 */
  if ((cf | zf)) goto L_417bf2;
L_417bcb: /* 417bcb: call 0x4102a5 */
  esp -= 4; W32(esp, 0x417bd0u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 417bd0: test byte ptr [ebp + 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417bd4: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
/* 417bda: je 0x417be2 */
  if (zf) goto L_417be2;
L_417bdc: /* 417bdc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 417be0: jmp 0x417bf2 */
  goto L_417bf2;
L_417be2: /* 417be2: mov al, byte ptr [ebp + 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x14u))) & 0xffu);
/* 417be5: and al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 417be7: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 417be9: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 417beb: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 417bed: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 417bef: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_417bf2: /* 417bf2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 417bf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417bf7: je 0x417bfb */
  if (zf) goto L_417bfb;
L_417bf9: /* 417bf9: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_417bfb: /* 417bfb: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417bff: je 0x417c04 */
  if (zf) goto L_417c04;
L_417c01: /* 417c01: neg dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_417c04: /* 417c04: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 417c07: jmp 0x417c17 */
  goto L_417c17;
L_417c09: /* 417c09: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 417c0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417c0e: je 0x417c15 */
  if (zf) goto L_417c15;
L_417c10: /* 417c10: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 417c13: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_417c15: /* 417c15: xor eax, eax */
  eax = 0;
L_417c17: /* 417c17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 417c18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 417c19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 417c1a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 417c1b: ret  */
  esp += 4; SPILL(); return;
}

void f_417c1c(void) {
  LOAD_REGS();
L_417c1c: /* 417c1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 417c1e: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417c22: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417c26: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417c2a: call 0x417a3d */
  esp -= 4; W32(esp, 0x417c2fu); SPILL(); f_417a3d(); if (g_unwind) return; RELOAD();
/* 417c2f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 417c32: ret  */
  esp += 4; SPILL(); return;
}

void f_417c33(void) {
  LOAD_REGS();
L_417c33: /* 417c33: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 417c35: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417c39: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417c3d: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417c41: call 0x417a3d */
  esp -= 4; W32(esp, 0x417c46u); SPILL(); f_417a3d(); if (g_unwind) return; RELOAD();
/* 417c46: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 417c49: ret  */
  esp += 4; SPILL(); return;
}

void f_417c4a(void) {
  LOAD_REGS();
L_417c4a: /* 417c4a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 417c4b: mov ebp, esp */
  ebp = esp;
/* 417c4d: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 417c50: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 417c55: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 417c58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417c59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417c5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 417c5b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 417c5e: xor ebx, ebx */
  ebx = 0;
/* 417c60: xor esi, esi */
  esi = 0;
/* 417c62: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417c64: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 417c67: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 417c6a: je 0x417dc1 */
  if (zf) goto L_417dc1;
L_417c70: /* 417c70: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 417c73: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417c75: jne 0x417c7e */
  if (!zf) goto L_417c7e;
L_417c77: /* 417c77: xor eax, eax */
  eax = 0;
/* 417c79: jmp 0x417d58 */
  goto L_417d58;
L_417c7e: /* 417c7e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 417c81: cmp dword ptr [ecx + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417c84: jne 0x417cb9 */
  if (!zf) goto L_417cb9;
L_417c86: /* 417c86: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417c88: jbe 0x417dbd */
  if ((cf | zf)) goto L_417dbd;
L_417c8e: /* 417c8e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
L_417c91: /* 417c91: cmp word ptr [ecx], 0xff */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417c96: ja 0x417d4a */
  if ((!cf && !zf)) goto L_417d4a;
L_417c9c: /* 417c9c: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 417c9e: mov byte ptr [esi + edi], al */
  W8((uint32_t)(esi + edi), (eax & 0xffu));
/* 417ca1: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 417ca4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 417ca5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 417ca6: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 417ca9: je 0x417dbd */
  if (zf) goto L_417dbd;
L_417caf: /* 417caf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 417cb0: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 417cb2: jb 0x417c91 */
  if (cf) goto L_417c91;
L_417cb4: /* 417cb4: jmp 0x417dbd */
  goto L_417dbd;
L_417cb9: /* 417cb9: cmp dword ptr [0x44902c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44902cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417cc0: jne 0x417d12 */
  if (!zf) goto L_417d12;
L_417cc2: /* 417cc2: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417cc4: jbe 0x417ce9 */
  if ((cf | zf)) goto L_417ce9;
L_417cc6: /* 417cc6: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 417cc9: mov esi, edx */
  esi = edx;
L_417ccb: /* 417ccb: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 417cce: je 0x417cd5 */
  if (zf) goto L_417cd5;
L_417cd0: /* 417cd0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 417cd1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 417cd2: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 417cd3: jne 0x417ccb */
  if (!zf) goto L_417ccb;
L_417cd5: /* 417cd5: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417cd7: je 0x417ce9 */
  if (zf) goto L_417ce9;
L_417cd9: /* 417cd9: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 417cdc: jne 0x417ce9 */
  if (!zf) goto L_417ce9;
L_417cde: /* 417cde: sub eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 417ce1: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 417ce3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 417ce4: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 417ce7: mov edx, eax */
  edx = eax;
L_417ce9: /* 417ce9: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 417cec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417ced: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417cee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 417cef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 417cf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 417cf1: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417cf4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417cf5: push dword ptr [ecx + 4] */
  { uint32_t v = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, v); }
/* 417cf8: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x417cfeu); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 417cfe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417d00: je 0x417d4a */
  if (zf) goto L_417d4a;
L_417d02: /* 417d02: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417d05: jne 0x417d4a */
  if (!zf) goto L_417d4a;
L_417d07: /* 417d07: cmp byte ptr [eax + edi - 1], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + edi + 0xffffffffu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 417d0b: jne 0x417d58 */
  if (!zf) goto L_417d58;
L_417d0d: /* 417d0d: jmp 0x417dfb */
  goto L_417dfb;
L_417d12: /* 417d12: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 417d15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417d16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417d17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 417d18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 417d19: mov edi, dword ptr [0x4390d0] */
  edi = R32((uint32_t)(0x4390d0u));
/* 417d1f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 417d21: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417d24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417d25: push dword ptr [ecx + 4] */
  { uint32_t v = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, v); }
/* 417d28: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x417d2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 417d2a: mov esi, eax */
  esi = eax;
/* 417d2c: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417d2e: je 0x417d3a */
  if (zf) goto L_417d3a;
L_417d30: /* 417d30: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417d33: jne 0x417d4a */
  if (!zf) goto L_417d4a;
L_417d35: /* 417d35: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 417d38: jmp 0x417d58 */
  goto L_417d58;
L_417d3a: /* 417d3a: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417d3d: jne 0x417d4a */
  if (!zf) goto L_417d4a;
L_417d3f: /* 417d3f: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x417d45u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 417d45: cmp eax, 0x7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417d48: je 0x417db8 */
  if (zf) goto L_417db8;
L_417d4a: /* 417d4a: call 0x4102a5 */
  esp -= 4; W32(esp, 0x417d4fu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 417d4f: mov dword ptr [eax], 0x2a */
  W32((uint32_t)(eax), 0x2au);
/* 417d55: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_417d58: /* 417d58: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 417d5b: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 417d5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 417d5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 417d60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 417d61: call 0x4013ab */
  esp -= 4; W32(esp, 0x417d66u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 417d66: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 417d67: ret  */
  esp += 4; SPILL(); return;
L_417d68: /* 417d68: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 417d6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417d6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417d6d: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 417d73: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 417d76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417d77: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 417d7a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 417d7c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417d7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417d80: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 417d83: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x417d85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 417d85: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417d87: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 417d8a: je 0x417d4a */
  if (zf) goto L_417d4a;
L_417d8c: /* 417d8c: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417d8f: jne 0x417d4a */
  if (!zf) goto L_417d4a;
L_417d91: /* 417d91: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* 417d94: cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417d97: ja 0x417dbd */
  if ((!cf && !zf)) goto L_417dbd;
L_417d99: /* 417d99: xor edx, edx */
  edx = 0;
/* 417d9b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 417d9d: jle 0x417db4 */
  if ((zf || sf != of)) goto L_417db4;
L_417d9f: /* 417d9f: mov cl, byte ptr [ebp + edx - 0x14] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + edx + 0xffffffecu))) & 0xffu);
/* 417da3: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 417da5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 417da8: mov byte ptr [esi + eax], cl */
  W8((uint32_t)(esi + eax), (ecx & 0xffu));
/* 417dab: je 0x417dbd */
  if (zf) goto L_417dbd;
L_417dad: /* 417dad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 417dae: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 417daf: cmp edx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 417db2: jl 0x417d9f */
  if ((sf != of)) goto L_417d9f;
L_417db4: /* 417db4: add dword ptr [ebp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
L_417db8: /* 417db8: cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 417dbb: jb 0x417d68 */
  if (cf) goto L_417d68;
L_417dbd: /* 417dbd: mov eax, esi */
  eax = esi;
/* 417dbf: jmp 0x417d58 */
  goto L_417d58;
L_417dc1: /* 417dc1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 417dc4: cmp dword ptr [eax + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417dc7: jne 0x417dd4 */
  if (!zf) goto L_417dd4;
L_417dc9: /* 417dc9: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417dcc: call 0x4013b8 */
  esp -= 4; W32(esp, 0x417dd1u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 417dd1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 417dd2: jmp 0x417d58 */
  goto L_417d58;
L_417dd4: /* 417dd4: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 417dd7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 417dd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417dd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417dda: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417ddb: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 417ddd: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 417de0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417de1: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 417de4: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x417deau); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 417dea: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417dec: je 0x417d4a */
  if (zf) goto L_417d4a;
L_417df2: /* 417df2: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417df5: jne 0x417d4a */
  if (!zf) goto L_417d4a;
L_417dfb: /* 417dfb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 417dfc: jmp 0x417d58 */
  goto L_417d58;
}

void f_417e01(void) {
  LOAD_REGS();
L_417e01: /* 417e01: call 0x40137f */
  esp -= 4; W32(esp, 0x417e06u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 417e06: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 417e09: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417e0f: je 0x417e16 */
  if (zf) goto L_417e16;
L_417e11: /* 417e11: call 0x4025f2 */
  esp -= 4; W32(esp, 0x417e16u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_417e16: /* 417e16: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 417e1a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 417e1e: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 417e22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417e23: call 0x417c4a */
  esp -= 4; W32(esp, 0x417e28u); SPILL(); f_417c4a(); if (g_unwind) return; RELOAD();
/* 417e28: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 417e2b: ret  */
  esp += 4; SPILL(); return;
}

void f_417e2c(void) {
  LOAD_REGS();
L_417e2c: /* 417e2c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 417e2d: mov ebp, esp */
  ebp = esp;
/* 417e2f: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 417e32: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 417e35: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 417e36: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 417e39: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 417e3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417e3c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 417e3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 417e40: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 417e43: mov byte ptr [esi], 0x30 */
  W8((uint32_t)(esi), 0x30u);
/* 417e46: mov eax, edi */
  eax = edi;
/* 417e48: jle 0x417e69 */
  if ((zf || sf != of)) goto L_417e69;
L_417e4a: /* 417e4a: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 417e4d: xor ebx, ebx */
  ebx = 0;
L_417e4f: /* 417e4f: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 417e51: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 417e53: je 0x417e5b */
  if (zf) goto L_417e5b;
L_417e55: /* 417e55: movsx edx, dl */
  edx = (uint32_t)(int32_t)(int8_t)((edx & 0xffu));
/* 417e58: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 417e59: jmp 0x417e5e */
  goto L_417e5e;
L_417e5b: /* 417e5b: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 417e5d: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
L_417e5e: /* 417e5e: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 417e60: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 417e61: dec dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 417e64: jne 0x417e4f */
  if (!zf) goto L_417e4f;
L_417e66: /* 417e66: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
L_417e69: /* 417e69: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 417e6c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 417e6e: jl 0x417e82 */
  if ((sf != of)) goto L_417e82;
L_417e70: /* 417e70: cmp byte ptr [ecx], 0x35 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x35u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 417e73: jl 0x417e82 */
  if ((sf != of)) goto L_417e82;
L_417e75: /* 417e75: jmp 0x417e7a */
  goto L_417e7a;
L_417e77: /* 417e77: mov byte ptr [eax], 0x30 */
  W8((uint32_t)(eax), 0x30u);
L_417e7a: /* 417e7a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 417e7b: cmp byte ptr [eax], 0x39 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 417e7e: je 0x417e77 */
  if (zf) goto L_417e77;
L_417e80: /* 417e80: inc byte ptr [eax] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(eax), r);
  }
L_417e82: /* 417e82: cmp byte ptr [esi], 0x31 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 417e85: jne 0x417e8c */
  if (!zf) goto L_417e8c;
L_417e87: /* 417e87: inc dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edx + 0x4u), r);
  }
/* 417e8a: jmp 0x417e9e */
  goto L_417e9e;
L_417e8c: /* 417e8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 417e8d: call 0x402493 */
  esp -= 4; W32(esp, 0x417e92u); SPILL(); hle_strlen(); RELOAD();
/* 417e92: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 417e93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417e94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 417e95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417e96: call 0x403f12 */
  esp -= 4; W32(esp, 0x417e9bu); SPILL(); hle_memcpy(); RELOAD();
/* 417e9b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_417e9e: /* 417e9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 417e9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 417ea0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 417ea1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 417ea2: ret  */
  esp += 4; SPILL(); return;
}

void f_417ea3(void) {
  LOAD_REGS();
L_417ea3: /* 417ea3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 417ea7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417ea9: jne 0x417eac */
  if (!zf) goto L_417eac;
L_417eab: /* 417eab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_417eac: /* 417eac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417ead: call dword ptr [0x439158] */
  esp -= 4; W32(esp, 0x417eb3u); SPILL(); call_ind(R32(0x439158u)); if (g_unwind) return; /* KERNEL32!Sleep */ RELOAD();
/* 417eb3: ret  */
  esp += 4; SPILL(); return;
}

void f_417eb4(void) {
  LOAD_REGS();
L_417eb4: /* 417eb4: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 417eb8: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 417ebc: call dword ptr [0x43915c] */
  esp -= 4; W32(esp, 0x417ec2u); SPILL(); call_ind(R32(0x43915cu)); if (g_unwind) return; /* KERNEL32!Beep */ RELOAD();
/* 417ec2: ret  */
  esp += 4; SPILL(); return;
}

void f_417ec3(void) {
  LOAD_REGS();
L_417ec3: /* 417ec3: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 417ec7: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x417ecdu); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
/* 417ecd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417ecf: jne 0x417ee0 */
  if (!zf) goto L_417ee0;
L_417ed1: /* 417ed1: call 0x4102a5 */
  esp -= 4; W32(esp, 0x417ed6u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 417ed6: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 417edc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 417edf: ret  */
  esp += 4; SPILL(); return;
L_417ee0: /* 417ee0: xor eax, eax */
  eax = 0;
/* 417ee2: ret  */
  esp += 4; SPILL(); return;
}

void f_417ee3(void) {
  LOAD_REGS();
L_417ee3: /* 417ee3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 417ee4: mov ebp, esp */
  ebp = esp;
/* 417ee6: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 417ee9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 417eec: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417eef: jne 0x417ef7 */
  if (!zf) goto L_417ef7;
L_417ef1: /* 417ef1: cmp dword ptr [eax + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417ef5: je 0x417f42 */
  if (zf) goto L_417f42;
L_417ef7: /* 417ef7: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 417efa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 417efb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417efc: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x417f02u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 417f02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417f04: je 0x417f42 */
  if (zf) goto L_417f42;
L_417f06: /* 417f06: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 417f09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417f0a: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 417f0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417f0e: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x417f14u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 417f14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 417f16: je 0x417f42 */
  if (zf) goto L_417f42;
L_417f18: /* 417f18: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 417f1c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 417f1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417f1f: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 417f23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417f24: movzx eax, word ptr [ebp - 0x10] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff0u)));
/* 417f28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417f29: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 417f2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417f2e: movzx eax, word ptr [ebp - 0x16] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeau)));
/* 417f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417f33: movzx eax, word ptr [ebp - 0x18] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffe8u)));
/* 417f37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417f38: call 0x431816 */
  esp -= 4; W32(esp, 0x417f3du); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 417f3d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 417f40: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 417f41: ret  */
  esp += 4; SPILL(); return;
L_417f42: /* 417f42: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 417f45: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 417f46: ret  */
  esp += 4; SPILL(); return;
}

void f_417f47(void) {
  LOAD_REGS();
L_417f47: /* 417f47: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 417f48: mov ebp, esp */
  ebp = esp;
/* 417f4a: sub esp, 0x144 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x144u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 417f50: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 417f55: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 417f58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 417f59: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 417f5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 417f5d: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 417f63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417f64: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 417f67: call dword ptr [0x43906c] */
  esp -= 4; W32(esp, 0x417f6du); SPILL(); call_ind(R32(0x43906cu)); if (g_unwind) return; /* KERNEL32!FindFirstFileA */ RELOAD();
/* 417f6d: mov edi, eax */
  edi = eax;
/* 417f6f: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417f72: jne 0x417fb6 */
  if (!zf) goto L_417fb6;
L_417f74: /* 417f74: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x417f7au); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 417f7a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 417f7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 417f7d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 417f7f: jb 0x417f90 */
  if (cf) goto L_417f90;
L_417f81: /* 417f81: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 417f84: jbe 0x417fad */
  if ((cf | zf)) goto L_417fad;
L_417f86: /* 417f86: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417f89: je 0x417fa0 */
  if (zf) goto L_417fa0;
L_417f8b: /* 417f8b: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 417f8e: je 0x417fad */
  if (zf) goto L_417fad;
L_417f90: /* 417f90: call 0x4102a5 */
  esp -= 4; W32(esp, 0x417f95u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 417f95: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_417f9b: /* 417f9b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 417f9e: jmp 0x41801b */
  goto L_41801b;
L_417fa0: /* 417fa0: call 0x4102a5 */
  esp -= 4; W32(esp, 0x417fa5u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 417fa5: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 417fab: jmp 0x417f9b */
  goto L_417f9b;
L_417fad: /* 417fad: call 0x4102a5 */
  esp -= 4; W32(esp, 0x417fb2u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 417fb2: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 417fb4: jmp 0x417f9b */
  goto L_417f9b;
L_417fb6: /* 417fb6: mov eax, dword ptr [ebp - 0x144] */
  eax = R32((uint32_t)(ebp + 0xfffffebcu));
/* 417fbc: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 417fbf: sub eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 417fc4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 417fc6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 417fc8: and eax, dword ptr [ebp - 0x144] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffebcu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 417fce: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 417fd0: lea eax, [ebp - 0x140] */
  eax = (uint32_t)(ebp + 0xfffffec0u);
/* 417fd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417fd7: call 0x417ee3 */
  esp -= 4; W32(esp, 0x417fdcu); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 417fdc: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 417fdf: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 417fe5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417fe6: call 0x417ee3 */
  esp -= 4; W32(esp, 0x417febu); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 417feb: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 417fee: lea eax, [ebp - 0x130] */
  eax = (uint32_t)(ebp + 0xfffffed0u);
/* 417ff4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 417ff5: call 0x417ee3 */
  esp -= 4; W32(esp, 0x417ffau); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 417ffa: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 417ffd: mov eax, dword ptr [ebp - 0x124] */
  eax = R32((uint32_t)(ebp + 0xfffffedcu));
/* 418003: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 418006: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 41800c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41800d: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 418010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 418011: call 0x404b3a */
  esp -= 4; W32(esp, 0x418016u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 418016: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 418019: mov eax, edi */
  eax = edi;
L_41801b: /* 41801b: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41801e: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 418021: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 418022: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 418023: call 0x4013ab */
  esp -= 4; W32(esp, 0x418028u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 418028: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 418029: ret  */
  esp += 4; SPILL(); return;
}

void f_41802a(void) {
  LOAD_REGS();
L_41802a: /* 41802a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41802b: mov ebp, esp */
  ebp = esp;
/* 41802d: sub esp, 0x144 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x144u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 418033: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 418038: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41803b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41803c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41803f: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 418045: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418046: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 418049: call dword ptr [0x439068] */
  esp -= 4; W32(esp, 0x41804fu); SPILL(); call_ind(R32(0x439068u)); if (g_unwind) return; /* KERNEL32!FindNextFileA */ RELOAD();
/* 41804f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418051: jne 0x418095 */
  if (!zf) goto L_418095;
L_418053: /* 418053: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x418059u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 418059: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41805b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41805c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41805e: jb 0x41806f */
  if (cf) goto L_41806f;
L_418060: /* 418060: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 418063: jbe 0x41808c */
  if ((cf | zf)) goto L_41808c;
L_418065: /* 418065: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418068: je 0x41807f */
  if (zf) goto L_41807f;
L_41806a: /* 41806a: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41806d: je 0x41808c */
  if (zf) goto L_41808c;
L_41806f: /* 41806f: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418074u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418074: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_41807a: /* 41807a: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41807d: jmp 0x4180fa */
  goto L_4180fa;
L_41807f: /* 41807f: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418084u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418084: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 41808a: jmp 0x41807a */
  goto L_41807a;
L_41808c: /* 41808c: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418091u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418091: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 418093: jmp 0x41807a */
  goto L_41807a;
L_418095: /* 418095: mov eax, dword ptr [ebp - 0x144] */
  eax = R32((uint32_t)(ebp + 0xfffffebcu));
/* 41809b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41809e: sub eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4180a3: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4180a5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4180a7: and eax, dword ptr [ebp - 0x144] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffebcu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4180ad: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4180af: lea eax, [ebp - 0x140] */
  eax = (uint32_t)(ebp + 0xfffffec0u);
/* 4180b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4180b6: call 0x417ee3 */
  esp -= 4; W32(esp, 0x4180bbu); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 4180bb: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4180be: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 4180c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4180c5: call 0x417ee3 */
  esp -= 4; W32(esp, 0x4180cau); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 4180ca: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4180cd: lea eax, [ebp - 0x130] */
  eax = (uint32_t)(ebp + 0xfffffed0u);
/* 4180d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4180d4: call 0x417ee3 */
  esp -= 4; W32(esp, 0x4180d9u); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 4180d9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 4180dc: mov eax, dword ptr [ebp - 0x124] */
  eax = R32((uint32_t)(ebp + 0xfffffedcu));
/* 4180e2: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 4180e5: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 4180eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4180ec: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4180ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4180f0: call 0x404b3a */
  esp -= 4; W32(esp, 0x4180f5u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 4180f5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4180f8: xor eax, eax */
  eax = 0;
L_4180fa: /* 4180fa: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4180fd: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 418100: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 418101: call 0x4013ab */
  esp -= 4; W32(esp, 0x418106u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 418106: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 418107: ret  */
  esp += 4; SPILL(); return;
}

void f_418108(void) {
  LOAD_REGS();
L_418108: /* 418108: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 418109: mov ebp, esp */
  ebp = esp;
/* 41810b: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41810e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 418111: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418114: jne 0x41811c */
  if (!zf) goto L_41811c;
L_418116: /* 418116: cmp dword ptr [eax + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41811a: je 0x418167 */
  if (zf) goto L_418167;
L_41811c: /* 41811c: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41811f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 418120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418121: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x418127u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 418127: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418129: je 0x418167 */
  if (zf) goto L_418167;
L_41812b: /* 41812b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41812e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41812f: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 418132: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418133: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x418139u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 418139: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41813b: je 0x418167 */
  if (zf) goto L_418167;
L_41813d: /* 41813d: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 418141: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 418143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418144: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 418148: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418149: movzx eax, word ptr [ebp - 0x10] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff0u)));
/* 41814d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41814e: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 418152: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418153: movzx eax, word ptr [ebp - 0x16] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeau)));
/* 418157: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418158: movzx eax, word ptr [ebp - 0x18] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffe8u)));
/* 41815c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41815d: call 0x431924 */
  esp -= 4; W32(esp, 0x418162u); SPILL(); f_431924(); if (g_unwind) return; RELOAD();
/* 418162: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 418165: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 418166: ret  */
  esp += 4; SPILL(); return;
L_418167: /* 418167: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 41816a: mov eax, edx */
  eax = edx;
/* 41816c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41816d: ret  */
  esp += 4; SPILL(); return;
}

void f_41816e(void) {
  LOAD_REGS();
L_41816e: /* 41816e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41816f: mov ebp, esp */
  ebp = esp;
/* 418171: sub esp, 0x144 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x144u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 418177: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 41817c: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41817f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 418180: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 418183: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 418184: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 41818a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41818b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41818e: call dword ptr [0x43906c] */
  esp -= 4; W32(esp, 0x418194u); SPILL(); call_ind(R32(0x43906cu)); if (g_unwind) return; /* KERNEL32!FindFirstFileA */ RELOAD();
/* 418194: mov edi, eax */
  edi = eax;
/* 418196: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418199: jne 0x4181e0 */
  if (!zf) goto L_4181e0;
L_41819b: /* 41819b: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4181a1u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4181a1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4181a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4181a4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4181a6: jb 0x4181b7 */
  if (cf) goto L_4181b7;
L_4181a8: /* 4181a8: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4181ab: jbe 0x4181d7 */
  if ((cf | zf)) goto L_4181d7;
L_4181ad: /* 4181ad: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4181b0: je 0x4181ca */
  if (zf) goto L_4181ca;
L_4181b2: /* 4181b2: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4181b5: je 0x4181d7 */
  if (zf) goto L_4181d7;
L_4181b7: /* 4181b7: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4181bcu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4181bc: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_4181c2: /* 4181c2: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4181c5: jmp 0x41826c */
  goto L_41826c;
L_4181ca: /* 4181ca: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4181cfu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4181cf: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 4181d5: jmp 0x4181c2 */
  goto L_4181c2;
L_4181d7: /* 4181d7: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4181dcu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4181dc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4181de: jmp 0x4181c2 */
  goto L_4181c2;
L_4181e0: /* 4181e0: mov eax, dword ptr [ebp - 0x144] */
  eax = R32((uint32_t)(ebp + 0xfffffebcu));
/* 4181e6: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4181e9: sub eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4181ee: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4181f0: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4181f2: and eax, dword ptr [ebp - 0x144] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffebcu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4181f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4181f9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4181fb: lea eax, [ebp - 0x140] */
  eax = (uint32_t)(ebp + 0xfffffec0u);
/* 418201: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418202: call 0x418108 */
  esp -= 4; W32(esp, 0x418207u); SPILL(); f_418108(); if (g_unwind) return; RELOAD();
/* 418207: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 41820a: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 418210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418211: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 418214: call 0x418108 */
  esp -= 4; W32(esp, 0x418219u); SPILL(); f_418108(); if (g_unwind) return; RELOAD();
/* 418219: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 41821c: lea eax, [ebp - 0x130] */
  eax = (uint32_t)(ebp + 0xfffffed0u);
/* 418222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418223: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 418226: call 0x418108 */
  esp -= 4; W32(esp, 0x41822bu); SPILL(); f_418108(); if (g_unwind) return; RELOAD();
/* 41822b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41822e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 418230: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418232: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418234: push dword ptr [ebp - 0x128] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffed8u)); esp -= 4; W32(esp, v); }
/* 41823a: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 41823d: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 418240: call 0x40518c */
  esp -= 4; W32(esp, 0x418245u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 418245: mov ecx, dword ptr [ebp - 0x124] */
  ecx = R32((uint32_t)(ebp + 0xfffffedcu));
/* 41824b: xor ebx, ebx */
  ebx = 0;
/* 41824d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 41824f: adc edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 418251: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 418254: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 41825a: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 41825d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41825e: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 418261: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 418262: call 0x404b3a */
  esp -= 4; W32(esp, 0x418267u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 418267: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418268: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418269: mov eax, edi */
  eax = edi;
/* 41826b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41826c: /* 41826c: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41826f: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 418272: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 418273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 418274: call 0x4013ab */
  esp -= 4; W32(esp, 0x418279u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 418279: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41827a: ret  */
  esp += 4; SPILL(); return;
}

void f_41827b(void) {
  LOAD_REGS();
L_41827b: /* 41827b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41827c: mov ebp, esp */
  ebp = esp;
/* 41827e: sub esp, 0x144 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x144u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 418284: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 418289: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41828c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41828d: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 418290: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 418296: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418297: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41829a: call dword ptr [0x439068] */
  esp -= 4; W32(esp, 0x4182a0u); SPILL(); call_ind(R32(0x439068u)); if (g_unwind) return; /* KERNEL32!FindNextFileA */ RELOAD();
/* 4182a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4182a2: jne 0x4182e9 */
  if (!zf) goto L_4182e9;
L_4182a4: /* 4182a4: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4182aau); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4182aa: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4182ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4182ad: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4182af: jb 0x4182c0 */
  if (cf) goto L_4182c0;
L_4182b1: /* 4182b1: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4182b4: jbe 0x4182e0 */
  if ((cf | zf)) goto L_4182e0;
L_4182b6: /* 4182b6: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4182b9: je 0x4182d3 */
  if (zf) goto L_4182d3;
L_4182bb: /* 4182bb: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4182be: je 0x4182e0 */
  if (zf) goto L_4182e0;
L_4182c0: /* 4182c0: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4182c5u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4182c5: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_4182cb: /* 4182cb: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4182ce: jmp 0x418375 */
  goto L_418375;
L_4182d3: /* 4182d3: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4182d8u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4182d8: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 4182de: jmp 0x4182cb */
  goto L_4182cb;
L_4182e0: /* 4182e0: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4182e5u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4182e5: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4182e7: jmp 0x4182cb */
  goto L_4182cb;
L_4182e9: /* 4182e9: mov eax, dword ptr [ebp - 0x144] */
  eax = R32((uint32_t)(ebp + 0xfffffebcu));
/* 4182ef: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4182f2: sub eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4182f7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4182f9: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4182fb: and eax, dword ptr [ebp - 0x144] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffebcu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 418301: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 418302: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 418304: lea eax, [ebp - 0x140] */
  eax = (uint32_t)(ebp + 0xfffffec0u);
/* 41830a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41830b: call 0x418108 */
  esp -= 4; W32(esp, 0x418310u); SPILL(); f_418108(); if (g_unwind) return; RELOAD();
/* 418310: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 418313: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 418319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41831a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 41831d: call 0x418108 */
  esp -= 4; W32(esp, 0x418322u); SPILL(); f_418108(); if (g_unwind) return; RELOAD();
/* 418322: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 418325: lea eax, [ebp - 0x130] */
  eax = (uint32_t)(ebp + 0xfffffed0u);
/* 41832b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41832c: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 41832f: call 0x418108 */
  esp -= 4; W32(esp, 0x418334u); SPILL(); f_418108(); if (g_unwind) return; RELOAD();
/* 418334: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 418337: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 418339: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41833b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41833d: push dword ptr [ebp - 0x128] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffed8u)); esp -= 4; W32(esp, v); }
/* 418343: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 418346: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 418349: call 0x40518c */
  esp -= 4; W32(esp, 0x41834eu); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 41834e: mov ecx, dword ptr [ebp - 0x124] */
  ecx = R32((uint32_t)(ebp + 0xfffffedcu));
/* 418354: xor edi, edi */
  edi = 0;
/* 418356: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 418358: adc edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 41835a: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 41835d: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 418363: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 418366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418367: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 41836a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41836b: call 0x404b3a */
  esp -= 4; W32(esp, 0x418370u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 418370: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418371: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418372: xor eax, eax */
  eax = 0;
/* 418374: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_418375: /* 418375: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 418378: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41837b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41837c: call 0x4013ab */
  esp -= 4; W32(esp, 0x418381u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 418381: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 418382: ret  */
  esp += 4; SPILL(); return;
}

void f_418383(void) {
  LOAD_REGS();
L_418383: /* 418383: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 418384: mov ebp, esp */
  ebp = esp;
/* 418386: sub esp, 0x144 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x144u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41838c: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 418391: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 418394: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 418395: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 418398: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 418399: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 41839f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4183a0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4183a3: call dword ptr [0x43906c] */
  esp -= 4; W32(esp, 0x4183a9u); SPILL(); call_ind(R32(0x43906cu)); if (g_unwind) return; /* KERNEL32!FindFirstFileA */ RELOAD();
/* 4183a9: mov edi, eax */
  edi = eax;
/* 4183ab: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4183ae: jne 0x4183f5 */
  if (!zf) goto L_4183f5;
L_4183b0: /* 4183b0: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4183b6u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4183b6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4183b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4183b9: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4183bb: jb 0x4183cc */
  if (cf) goto L_4183cc;
L_4183bd: /* 4183bd: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4183c0: jbe 0x4183ec */
  if ((cf | zf)) goto L_4183ec;
L_4183c2: /* 4183c2: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4183c5: je 0x4183df */
  if (zf) goto L_4183df;
L_4183c7: /* 4183c7: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4183ca: je 0x4183ec */
  if (zf) goto L_4183ec;
L_4183cc: /* 4183cc: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4183d1u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4183d1: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_4183d7: /* 4183d7: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4183da: jmp 0x418478 */
  goto L_418478;
L_4183df: /* 4183df: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4183e4u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4183e4: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 4183ea: jmp 0x4183d7 */
  goto L_4183d7;
L_4183ec: /* 4183ec: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4183f1u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4183f1: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4183f3: jmp 0x4183d7 */
  goto L_4183d7;
L_4183f5: /* 4183f5: mov eax, dword ptr [ebp - 0x144] */
  eax = R32((uint32_t)(ebp + 0xfffffebcu));
/* 4183fb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4183fe: sub eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 418403: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 418405: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 418407: and eax, dword ptr [ebp - 0x144] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffebcu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41840d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41840e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 418410: lea eax, [ebp - 0x140] */
  eax = (uint32_t)(ebp + 0xfffffec0u);
/* 418416: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418417: call 0x417ee3 */
  esp -= 4; W32(esp, 0x41841cu); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 41841c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 41841f: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 418425: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418426: call 0x417ee3 */
  esp -= 4; W32(esp, 0x41842bu); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 41842b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 41842e: lea eax, [ebp - 0x130] */
  eax = (uint32_t)(ebp + 0xfffffed0u);
/* 418434: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418435: call 0x417ee3 */
  esp -= 4; W32(esp, 0x41843au); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 41843a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41843d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41843f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418441: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418443: push dword ptr [ebp - 0x128] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffed8u)); esp -= 4; W32(esp, v); }
/* 418449: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 41844c: call 0x40518c */
  esp -= 4; W32(esp, 0x418451u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 418451: mov ecx, dword ptr [ebp - 0x124] */
  ecx = R32((uint32_t)(ebp + 0xfffffedcu));
/* 418457: xor ebx, ebx */
  ebx = 0;
/* 418459: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 41845b: adc edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 41845d: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 418460: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 418466: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 418469: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41846a: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 41846d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41846e: call 0x404b3a */
  esp -= 4; W32(esp, 0x418473u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 418473: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418474: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418475: mov eax, edi */
  eax = edi;
/* 418477: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_418478: /* 418478: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41847b: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41847e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41847f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 418480: call 0x4013ab */
  esp -= 4; W32(esp, 0x418485u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 418485: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 418486: ret  */
  esp += 4; SPILL(); return;
}

void f_418487(void) {
  LOAD_REGS();
L_418487: /* 418487: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 418488: mov ebp, esp */
  ebp = esp;
/* 41848a: sub esp, 0x144 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x144u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 418490: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 418495: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 418498: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 418499: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41849c: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 4184a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4184a3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4184a6: call dword ptr [0x439068] */
  esp -= 4; W32(esp, 0x4184acu); SPILL(); call_ind(R32(0x439068u)); if (g_unwind) return; /* KERNEL32!FindNextFileA */ RELOAD();
/* 4184ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4184ae: jne 0x4184f5 */
  if (!zf) goto L_4184f5;
L_4184b0: /* 4184b0: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4184b6u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4184b6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4184b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4184b9: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4184bb: jb 0x4184cc */
  if (cf) goto L_4184cc;
L_4184bd: /* 4184bd: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4184c0: jbe 0x4184ec */
  if ((cf | zf)) goto L_4184ec;
L_4184c2: /* 4184c2: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4184c5: je 0x4184df */
  if (zf) goto L_4184df;
L_4184c7: /* 4184c7: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4184ca: je 0x4184ec */
  if (zf) goto L_4184ec;
L_4184cc: /* 4184cc: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4184d1u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4184d1: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_4184d7: /* 4184d7: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4184da: jmp 0x418578 */
  goto L_418578;
L_4184df: /* 4184df: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4184e4u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4184e4: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 4184ea: jmp 0x4184d7 */
  goto L_4184d7;
L_4184ec: /* 4184ec: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4184f1u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4184f1: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4184f3: jmp 0x4184d7 */
  goto L_4184d7;
L_4184f5: /* 4184f5: mov eax, dword ptr [ebp - 0x144] */
  eax = R32((uint32_t)(ebp + 0xfffffebcu));
/* 4184fb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4184fe: sub eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 418503: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 418505: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 418507: and eax, dword ptr [ebp - 0x144] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffebcu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41850d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41850e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 418510: lea eax, [ebp - 0x140] */
  eax = (uint32_t)(ebp + 0xfffffec0u);
/* 418516: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418517: call 0x417ee3 */
  esp -= 4; W32(esp, 0x41851cu); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 41851c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 41851f: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 418525: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418526: call 0x417ee3 */
  esp -= 4; W32(esp, 0x41852bu); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 41852b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 41852e: lea eax, [ebp - 0x130] */
  eax = (uint32_t)(ebp + 0xfffffed0u);
/* 418534: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418535: call 0x417ee3 */
  esp -= 4; W32(esp, 0x41853au); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 41853a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41853d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41853f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418541: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418543: push dword ptr [ebp - 0x128] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffed8u)); esp -= 4; W32(esp, v); }
/* 418549: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 41854c: call 0x40518c */
  esp -= 4; W32(esp, 0x418551u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 418551: mov ecx, dword ptr [ebp - 0x124] */
  ecx = R32((uint32_t)(ebp + 0xfffffedcu));
/* 418557: xor edi, edi */
  edi = 0;
/* 418559: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 41855b: adc edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 41855d: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 418560: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 418566: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 418569: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41856a: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 41856d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41856e: call 0x404b3a */
  esp -= 4; W32(esp, 0x418573u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 418573: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418574: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418575: xor eax, eax */
  eax = 0;
/* 418577: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_418578: /* 418578: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41857b: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41857e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41857f: call 0x4013ab */
  esp -= 4; W32(esp, 0x418584u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 418584: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 418585: ret  */
  esp += 4; SPILL(); return;
}

void f_418586(void) {
  LOAD_REGS();
L_418586: /* 418586: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 418587: mov ebp, esp */
  ebp = esp;
/* 418589: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41858c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41858e: jne 0x418594 */
  if (!zf) goto L_418594;
L_418590: /* 418590: xor ecx, ecx */
  ecx = 0;
/* 418592: jmp 0x4185b2 */
  goto L_4185b2;
L_418594: /* 418594: cmp eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 418597: jbe 0x41859e */
  if ((cf | zf)) goto L_41859e;
L_418599: /* 418599: push 0x57 */
  { uint32_t v = 0x57u; esp -= 4; W32(esp, v); }
/* 41859b: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 41859c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41859d: ret  */
  esp += 4; SPILL(); return;
L_41859e: /* 41859e: add al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4185a0: and byte ptr [ebp + 0xb], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xbu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xbu), r);
  }
/* 4185a4: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 4185a7: mov byte ptr [ebp + 8], al */
  W8((uint32_t)(ebp + 0x8u), (eax & 0xffu));
/* 4185aa: mov byte ptr [ebp + 9], 0x3a */
  W8((uint32_t)(ebp + 0x9u), 0x3au);
/* 4185ae: mov byte ptr [ebp + 0xa], 0x5c */
  W8((uint32_t)(ebp + 0xau), 0x5cu);
L_4185b2: /* 4185b2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4185b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4185b6: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 4185b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4185ba: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 4185bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4185be: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4185c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4185c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4185c3: call dword ptr [0x439168] */
  esp -= 4; W32(esp, 0x4185c9u); SPILL(); call_ind(R32(0x439168u)); if (g_unwind) return; /* KERNEL32!GetDiskFreeSpaceA */ RELOAD();
/* 4185c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4185cb: jne 0x4185d4 */
  if (!zf) goto L_4185d4;
L_4185cd: /* 4185cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4185ce: jmp dword ptr [0x43904c] */
  SPILL(); call_ind(R32(0x43904cu)); return; /* KERNEL32!GetLastError */
L_4185d4: /* 4185d4: xor eax, eax */
  eax = 0;
/* 4185d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4185d7: ret  */
  esp += 4; SPILL(); return;
}

void f_4185d8(void) {
  LOAD_REGS();
L_4185d8: /* 4185d8: jmp dword ptr [0x43916c] */
  SPILL(); call_ind(R32(0x43916cu)); return; /* KERNEL32!GetLogicalDrives */
}

void f_4185de(void) {
  LOAD_REGS();
L_4185de: /* 4185de: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 4185e2: call dword ptr [0x439170] */
  esp -= 4; W32(esp, 0x4185e8u); SPILL(); call_ind(R32(0x439170u)); if (g_unwind) return; /* KERNEL32!SetErrorMode */ RELOAD();
/* 4185e8: ret  */
  esp += 4; SPILL(); return;
}

void f_4185e9(void) {
  LOAD_REGS();
L_4185e9: /* 4185e9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4185ea: mov ebp, esp */
  ebp = esp;
/* 4185ec: sub esp, 0x254 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4185f2: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4185f7: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4185fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4185fb: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4185fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4185ff: lea eax, [ebp - 0x254] */
  eax = (uint32_t)(ebp + 0xfffffdacu);
/* 418605: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418606: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 418609: call dword ptr [0x439078] */
  esp -= 4; W32(esp, 0x41860fu); SPILL(); call_ind(R32(0x439078u)); if (g_unwind) return; /* KERNEL32!FindFirstFileW */ RELOAD();
/* 41860f: mov edi, eax */
  edi = eax;
/* 418611: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418614: jne 0x418658 */
  if (!zf) goto L_418658;
L_418616: /* 418616: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x41861cu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 41861c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41861e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41861f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 418621: jb 0x418632 */
  if (cf) goto L_418632;
L_418623: /* 418623: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 418626: jbe 0x41864f */
  if ((cf | zf)) goto L_41864f;
L_418628: /* 418628: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41862b: je 0x418642 */
  if (zf) goto L_418642;
L_41862d: /* 41862d: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418630: je 0x41864f */
  if (zf) goto L_41864f;
L_418632: /* 418632: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418637u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418637: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_41863d: /* 41863d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 418640: jmp 0x4186bd */
  goto L_4186bd;
L_418642: /* 418642: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418647u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418647: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 41864d: jmp 0x41863d */
  goto L_41863d;
L_41864f: /* 41864f: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418654u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418654: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 418656: jmp 0x41863d */
  goto L_41863d;
L_418658: /* 418658: mov eax, dword ptr [ebp - 0x254] */
  eax = R32((uint32_t)(ebp + 0xfffffdacu));
/* 41865e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 418661: sub eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 418666: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 418668: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41866a: and eax, dword ptr [ebp - 0x254] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffdacu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 418670: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 418672: lea eax, [ebp - 0x250] */
  eax = (uint32_t)(ebp + 0xfffffdb0u);
/* 418678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418679: call 0x417ee3 */
  esp -= 4; W32(esp, 0x41867eu); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 41867e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 418681: lea eax, [ebp - 0x248] */
  eax = (uint32_t)(ebp + 0xfffffdb8u);
/* 418687: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418688: call 0x417ee3 */
  esp -= 4; W32(esp, 0x41868du); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 41868d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 418690: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 418696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418697: call 0x417ee3 */
  esp -= 4; W32(esp, 0x41869cu); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 41869c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 41869f: mov eax, dword ptr [ebp - 0x234] */
  eax = R32((uint32_t)(ebp + 0xfffffdccu));
/* 4186a5: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 4186a8: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 4186ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4186af: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4186b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4186b3: call 0x4013ce */
  esp -= 4; W32(esp, 0x4186b8u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 4186b8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4186bb: mov eax, edi */
  eax = edi;
L_4186bd: /* 4186bd: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4186c0: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4186c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4186c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4186c5: call 0x4013ab */
  esp -= 4; W32(esp, 0x4186cau); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4186ca: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4186cb: ret  */
  esp += 4; SPILL(); return;
}

void f_4186cc(void) {
  LOAD_REGS();
L_4186cc: /* 4186cc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4186cd: mov ebp, esp */
  ebp = esp;
/* 4186cf: sub esp, 0x254 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4186d5: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4186da: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4186dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4186de: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4186e1: lea eax, [ebp - 0x254] */
  eax = (uint32_t)(ebp + 0xfffffdacu);
/* 4186e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4186e8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4186eb: call dword ptr [0x439074] */
  esp -= 4; W32(esp, 0x4186f1u); SPILL(); call_ind(R32(0x439074u)); if (g_unwind) return; /* KERNEL32!FindNextFileW */ RELOAD();
/* 4186f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4186f3: jne 0x418737 */
  if (!zf) goto L_418737;
L_4186f5: /* 4186f5: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4186fbu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4186fb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4186fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4186fe: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 418700: jb 0x418711 */
  if (cf) goto L_418711;
L_418702: /* 418702: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 418705: jbe 0x41872e */
  if ((cf | zf)) goto L_41872e;
L_418707: /* 418707: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41870a: je 0x418721 */
  if (zf) goto L_418721;
L_41870c: /* 41870c: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41870f: je 0x41872e */
  if (zf) goto L_41872e;
L_418711: /* 418711: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418716u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418716: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_41871c: /* 41871c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41871f: jmp 0x41879c */
  goto L_41879c;
L_418721: /* 418721: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418726u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418726: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 41872c: jmp 0x41871c */
  goto L_41871c;
L_41872e: /* 41872e: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418733u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418733: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 418735: jmp 0x41871c */
  goto L_41871c;
L_418737: /* 418737: mov eax, dword ptr [ebp - 0x254] */
  eax = R32((uint32_t)(ebp + 0xfffffdacu));
/* 41873d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 418740: sub eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 418745: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 418747: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 418749: and eax, dword ptr [ebp - 0x254] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffdacu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41874f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 418751: lea eax, [ebp - 0x250] */
  eax = (uint32_t)(ebp + 0xfffffdb0u);
/* 418757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418758: call 0x417ee3 */
  esp -= 4; W32(esp, 0x41875du); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 41875d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 418760: lea eax, [ebp - 0x248] */
  eax = (uint32_t)(ebp + 0xfffffdb8u);
/* 418766: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418767: call 0x417ee3 */
  esp -= 4; W32(esp, 0x41876cu); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 41876c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 41876f: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 418775: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418776: call 0x417ee3 */
  esp -= 4; W32(esp, 0x41877bu); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 41877b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 41877e: mov eax, dword ptr [ebp - 0x234] */
  eax = R32((uint32_t)(ebp + 0xfffffdccu));
/* 418784: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 418787: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 41878d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41878e: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 418791: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 418792: call 0x4013ce */
  esp -= 4; W32(esp, 0x418797u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 418797: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41879a: xor eax, eax */
  eax = 0;
L_41879c: /* 41879c: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41879f: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4187a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4187a3: call 0x4013ab */
  esp -= 4; W32(esp, 0x4187a8u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4187a8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4187a9: ret  */
  esp += 4; SPILL(); return;
}

void f_4187aa(void) {
  LOAD_REGS();
L_4187aa: /* 4187aa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4187ab: mov ebp, esp */
  ebp = esp;
/* 4187ad: sub esp, 0x254 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4187b3: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4187b8: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4187bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4187bc: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4187bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4187c0: lea eax, [ebp - 0x254] */
  eax = (uint32_t)(ebp + 0xfffffdacu);
/* 4187c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4187c7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4187ca: call dword ptr [0x439078] */
  esp -= 4; W32(esp, 0x4187d0u); SPILL(); call_ind(R32(0x439078u)); if (g_unwind) return; /* KERNEL32!FindFirstFileW */ RELOAD();
/* 4187d0: mov edi, eax */
  edi = eax;
/* 4187d2: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4187d5: jne 0x41881c */
  if (!zf) goto L_41881c;
L_4187d7: /* 4187d7: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4187ddu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4187dd: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4187df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4187e0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4187e2: jb 0x4187f3 */
  if (cf) goto L_4187f3;
L_4187e4: /* 4187e4: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4187e7: jbe 0x418813 */
  if ((cf | zf)) goto L_418813;
L_4187e9: /* 4187e9: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4187ec: je 0x418806 */
  if (zf) goto L_418806;
L_4187ee: /* 4187ee: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4187f1: je 0x418813 */
  if (zf) goto L_418813;
L_4187f3: /* 4187f3: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4187f8u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4187f8: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_4187fe: /* 4187fe: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 418801: jmp 0x4188a8 */
  goto L_4188a8;
L_418806: /* 418806: call 0x4102a5 */
  esp -= 4; W32(esp, 0x41880bu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 41880b: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 418811: jmp 0x4187fe */
  goto L_4187fe;
L_418813: /* 418813: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418818u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418818: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41881a: jmp 0x4187fe */
  goto L_4187fe;
L_41881c: /* 41881c: mov eax, dword ptr [ebp - 0x254] */
  eax = R32((uint32_t)(ebp + 0xfffffdacu));
/* 418822: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 418825: sub eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41882a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41882c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41882e: and eax, dword ptr [ebp - 0x254] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffdacu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 418834: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 418835: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 418837: lea eax, [ebp - 0x250] */
  eax = (uint32_t)(ebp + 0xfffffdb0u);
/* 41883d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41883e: call 0x418108 */
  esp -= 4; W32(esp, 0x418843u); SPILL(); f_418108(); if (g_unwind) return; RELOAD();
/* 418843: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 418846: lea eax, [ebp - 0x248] */
  eax = (uint32_t)(ebp + 0xfffffdb8u);
/* 41884c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41884d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 418850: call 0x418108 */
  esp -= 4; W32(esp, 0x418855u); SPILL(); f_418108(); if (g_unwind) return; RELOAD();
/* 418855: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 418858: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 41885e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41885f: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 418862: call 0x418108 */
  esp -= 4; W32(esp, 0x418867u); SPILL(); f_418108(); if (g_unwind) return; RELOAD();
/* 418867: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41886a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41886c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41886e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418870: push dword ptr [ebp - 0x238] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffdc8u)); esp -= 4; W32(esp, v); }
/* 418876: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 418879: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 41887c: call 0x40518c */
  esp -= 4; W32(esp, 0x418881u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 418881: mov ecx, dword ptr [ebp - 0x234] */
  ecx = R32((uint32_t)(ebp + 0xfffffdccu));
/* 418887: xor ebx, ebx */
  ebx = 0;
/* 418889: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 41888b: adc edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 41888d: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 418890: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 418896: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 418899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41889a: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 41889d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41889e: call 0x4013ce */
  esp -= 4; W32(esp, 0x4188a3u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 4188a3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4188a4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4188a5: mov eax, edi */
  eax = edi;
/* 4188a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4188a8: /* 4188a8: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4188ab: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4188ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4188af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4188b0: call 0x4013ab */
  esp -= 4; W32(esp, 0x4188b5u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4188b5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4188b6: ret  */
  esp += 4; SPILL(); return;
}

void f_4188b7(void) {
  LOAD_REGS();
L_4188b7: /* 4188b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4188b8: mov ebp, esp */
  ebp = esp;
/* 4188ba: sub esp, 0x254 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4188c0: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4188c5: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4188c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4188c9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4188cc: lea eax, [ebp - 0x254] */
  eax = (uint32_t)(ebp + 0xfffffdacu);
/* 4188d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4188d3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4188d6: call dword ptr [0x439074] */
  esp -= 4; W32(esp, 0x4188dcu); SPILL(); call_ind(R32(0x439074u)); if (g_unwind) return; /* KERNEL32!FindNextFileW */ RELOAD();
/* 4188dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4188de: jne 0x418925 */
  if (!zf) goto L_418925;
L_4188e0: /* 4188e0: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4188e6u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4188e6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4188e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4188e9: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4188eb: jb 0x4188fc */
  if (cf) goto L_4188fc;
L_4188ed: /* 4188ed: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4188f0: jbe 0x41891c */
  if ((cf | zf)) goto L_41891c;
L_4188f2: /* 4188f2: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4188f5: je 0x41890f */
  if (zf) goto L_41890f;
L_4188f7: /* 4188f7: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4188fa: je 0x41891c */
  if (zf) goto L_41891c;
L_4188fc: /* 4188fc: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418901u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418901: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_418907: /* 418907: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41890a: jmp 0x4189b1 */
  goto L_4189b1;
L_41890f: /* 41890f: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418914u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418914: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 41891a: jmp 0x418907 */
  goto L_418907;
L_41891c: /* 41891c: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418921u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418921: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 418923: jmp 0x418907 */
  goto L_418907;
L_418925: /* 418925: mov eax, dword ptr [ebp - 0x254] */
  eax = R32((uint32_t)(ebp + 0xfffffdacu));
/* 41892b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41892e: sub eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 418933: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 418935: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 418937: and eax, dword ptr [ebp - 0x254] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffdacu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41893d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41893e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 418940: lea eax, [ebp - 0x250] */
  eax = (uint32_t)(ebp + 0xfffffdb0u);
/* 418946: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418947: call 0x418108 */
  esp -= 4; W32(esp, 0x41894cu); SPILL(); f_418108(); if (g_unwind) return; RELOAD();
/* 41894c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 41894f: lea eax, [ebp - 0x248] */
  eax = (uint32_t)(ebp + 0xfffffdb8u);
/* 418955: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418956: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 418959: call 0x418108 */
  esp -= 4; W32(esp, 0x41895eu); SPILL(); f_418108(); if (g_unwind) return; RELOAD();
/* 41895e: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 418961: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 418967: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418968: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 41896b: call 0x418108 */
  esp -= 4; W32(esp, 0x418970u); SPILL(); f_418108(); if (g_unwind) return; RELOAD();
/* 418970: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 418973: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 418975: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418977: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418979: push dword ptr [ebp - 0x238] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffdc8u)); esp -= 4; W32(esp, v); }
/* 41897f: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 418982: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 418985: call 0x40518c */
  esp -= 4; W32(esp, 0x41898au); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 41898a: mov ecx, dword ptr [ebp - 0x234] */
  ecx = R32((uint32_t)(ebp + 0xfffffdccu));
/* 418990: xor edi, edi */
  edi = 0;
/* 418992: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 418994: adc edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 418996: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 418999: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 41899f: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 4189a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4189a3: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4189a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4189a7: call 0x4013ce */
  esp -= 4; W32(esp, 0x4189acu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 4189ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4189ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4189ae: xor eax, eax */
  eax = 0;
/* 4189b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4189b1: /* 4189b1: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4189b4: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4189b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4189b8: call 0x4013ab */
  esp -= 4; W32(esp, 0x4189bdu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4189bd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4189be: ret  */
  esp += 4; SPILL(); return;
}

void f_4189bf(void) {
  LOAD_REGS();
L_4189bf: /* 4189bf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4189c0: mov ebp, esp */
  ebp = esp;
/* 4189c2: sub esp, 0x254 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4189c8: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4189cd: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4189d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4189d1: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4189d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4189d5: lea eax, [ebp - 0x254] */
  eax = (uint32_t)(ebp + 0xfffffdacu);
/* 4189db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4189dc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4189df: call dword ptr [0x439078] */
  esp -= 4; W32(esp, 0x4189e5u); SPILL(); call_ind(R32(0x439078u)); if (g_unwind) return; /* KERNEL32!FindFirstFileW */ RELOAD();
/* 4189e5: mov edi, eax */
  edi = eax;
/* 4189e7: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4189ea: jne 0x418a31 */
  if (!zf) goto L_418a31;
L_4189ec: /* 4189ec: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4189f2u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4189f2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4189f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4189f5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4189f7: jb 0x418a08 */
  if (cf) goto L_418a08;
L_4189f9: /* 4189f9: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4189fc: jbe 0x418a28 */
  if ((cf | zf)) goto L_418a28;
L_4189fe: /* 4189fe: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418a01: je 0x418a1b */
  if (zf) goto L_418a1b;
L_418a03: /* 418a03: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418a06: je 0x418a28 */
  if (zf) goto L_418a28;
L_418a08: /* 418a08: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418a0du); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418a0d: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_418a13: /* 418a13: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 418a16: jmp 0x418ab4 */
  goto L_418ab4;
L_418a1b: /* 418a1b: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418a20u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418a20: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 418a26: jmp 0x418a13 */
  goto L_418a13;
L_418a28: /* 418a28: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418a2du); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418a2d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 418a2f: jmp 0x418a13 */
  goto L_418a13;
L_418a31: /* 418a31: mov eax, dword ptr [ebp - 0x254] */
  eax = R32((uint32_t)(ebp + 0xfffffdacu));
/* 418a37: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 418a3a: sub eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 418a3f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 418a41: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 418a43: and eax, dword ptr [ebp - 0x254] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffdacu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 418a49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 418a4a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 418a4c: lea eax, [ebp - 0x250] */
  eax = (uint32_t)(ebp + 0xfffffdb0u);
/* 418a52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418a53: call 0x417ee3 */
  esp -= 4; W32(esp, 0x418a58u); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 418a58: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 418a5b: lea eax, [ebp - 0x248] */
  eax = (uint32_t)(ebp + 0xfffffdb8u);
/* 418a61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418a62: call 0x417ee3 */
  esp -= 4; W32(esp, 0x418a67u); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 418a67: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 418a6a: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 418a70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418a71: call 0x417ee3 */
  esp -= 4; W32(esp, 0x418a76u); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 418a76: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 418a79: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 418a7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418a7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418a7f: push dword ptr [ebp - 0x238] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffdc8u)); esp -= 4; W32(esp, v); }
/* 418a85: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 418a88: call 0x40518c */
  esp -= 4; W32(esp, 0x418a8du); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 418a8d: mov ecx, dword ptr [ebp - 0x234] */
  ecx = R32((uint32_t)(ebp + 0xfffffdccu));
/* 418a93: xor ebx, ebx */
  ebx = 0;
/* 418a95: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 418a97: adc edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 418a99: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 418a9c: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 418aa2: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 418aa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418aa6: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 418aa9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 418aaa: call 0x4013ce */
  esp -= 4; W32(esp, 0x418aafu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 418aaf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418ab0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418ab1: mov eax, edi */
  eax = edi;
/* 418ab3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_418ab4: /* 418ab4: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 418ab7: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 418aba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 418abb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 418abc: call 0x4013ab */
  esp -= 4; W32(esp, 0x418ac1u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 418ac1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 418ac2: ret  */
  esp += 4; SPILL(); return;
}

void f_418ac3(void) {
  LOAD_REGS();
L_418ac3: /* 418ac3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 418ac4: mov ebp, esp */
  ebp = esp;
/* 418ac6: sub esp, 0x254 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 418acc: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 418ad1: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 418ad4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 418ad5: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 418ad8: lea eax, [ebp - 0x254] */
  eax = (uint32_t)(ebp + 0xfffffdacu);
/* 418ade: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418adf: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 418ae2: call dword ptr [0x439074] */
  esp -= 4; W32(esp, 0x418ae8u); SPILL(); call_ind(R32(0x439074u)); if (g_unwind) return; /* KERNEL32!FindNextFileW */ RELOAD();
/* 418ae8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418aea: jne 0x418b31 */
  if (!zf) goto L_418b31;
L_418aec: /* 418aec: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x418af2u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 418af2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 418af4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 418af5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 418af7: jb 0x418b08 */
  if (cf) goto L_418b08;
L_418af9: /* 418af9: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 418afc: jbe 0x418b28 */
  if ((cf | zf)) goto L_418b28;
L_418afe: /* 418afe: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418b01: je 0x418b1b */
  if (zf) goto L_418b1b;
L_418b03: /* 418b03: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418b06: je 0x418b28 */
  if (zf) goto L_418b28;
L_418b08: /* 418b08: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418b0du); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418b0d: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_418b13: /* 418b13: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 418b16: jmp 0x418bb4 */
  goto L_418bb4;
L_418b1b: /* 418b1b: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418b20u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418b20: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 418b26: jmp 0x418b13 */
  goto L_418b13;
L_418b28: /* 418b28: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418b2du); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418b2d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 418b2f: jmp 0x418b13 */
  goto L_418b13;
L_418b31: /* 418b31: mov eax, dword ptr [ebp - 0x254] */
  eax = R32((uint32_t)(ebp + 0xfffffdacu));
/* 418b37: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 418b3a: sub eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 418b3f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 418b41: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 418b43: and eax, dword ptr [ebp - 0x254] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffdacu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 418b49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 418b4a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 418b4c: lea eax, [ebp - 0x250] */
  eax = (uint32_t)(ebp + 0xfffffdb0u);
/* 418b52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418b53: call 0x417ee3 */
  esp -= 4; W32(esp, 0x418b58u); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 418b58: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 418b5b: lea eax, [ebp - 0x248] */
  eax = (uint32_t)(ebp + 0xfffffdb8u);
/* 418b61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418b62: call 0x417ee3 */
  esp -= 4; W32(esp, 0x418b67u); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 418b67: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 418b6a: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 418b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418b71: call 0x417ee3 */
  esp -= 4; W32(esp, 0x418b76u); SPILL(); f_417ee3(); if (g_unwind) return; RELOAD();
/* 418b76: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 418b79: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 418b7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418b7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418b7f: push dword ptr [ebp - 0x238] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffdc8u)); esp -= 4; W32(esp, v); }
/* 418b85: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 418b88: call 0x40518c */
  esp -= 4; W32(esp, 0x418b8du); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 418b8d: mov ecx, dword ptr [ebp - 0x234] */
  ecx = R32((uint32_t)(ebp + 0xfffffdccu));
/* 418b93: xor edi, edi */
  edi = 0;
/* 418b95: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 418b97: adc edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 418b99: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 418b9c: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 418ba2: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 418ba5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418ba6: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 418ba9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 418baa: call 0x4013ce */
  esp -= 4; W32(esp, 0x418bafu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 418baf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418bb0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418bb1: xor eax, eax */
  eax = 0;
/* 418bb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_418bb4: /* 418bb4: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 418bb7: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 418bba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 418bbb: call 0x4013ab */
  esp -= 4; W32(esp, 0x418bc0u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 418bc0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 418bc1: ret  */
  esp += 4; SPILL(); return;
}

void f_418bc2(void) {
  LOAD_REGS();
L_418bc2: /* 418bc2: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 418bc6: call dword ptr [0x439174] */
  esp -= 4; W32(esp, 0x418bccu); SPILL(); call_ind(R32(0x439174u)); if (g_unwind) return; /* KERNEL32!GetFileAttributesA */ RELOAD();
/* 418bcc: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418bcf: jne 0x418be2 */
  if (!zf) goto L_418be2;
L_418bd1: /* 418bd1: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x418bd7u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 418bd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418bd8: call 0x4102b7 */
  esp -= 4; W32(esp, 0x418bddu); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 418bdd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_418bde: /* 418bde: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 418be1: ret  */
  esp += 4; SPILL(); return;
L_418be2: /* 418be2: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 418be4: je 0x418c05 */
  if (zf) goto L_418c05;
L_418be6: /* 418be6: test byte ptr [esp + 8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 418beb: je 0x418c05 */
  if (zf) goto L_418c05;
L_418bed: /* 418bed: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418bf2u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418bf2: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
/* 418bf8: call 0x4102ae */
  esp -= 4; W32(esp, 0x418bfdu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 418bfd: mov dword ptr [eax], 5 */
  W32((uint32_t)(eax), 0x5u);
/* 418c03: jmp 0x418bde */
  goto L_418bde;
L_418c05: /* 418c05: xor eax, eax */
  eax = 0;
/* 418c07: ret  */
  esp += 4; SPILL(); return;
}

void f_418c08(void) {
  LOAD_REGS();
L_418c08: /* 418c08: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 418c09: mov ebp, esp */
  ebp = esp;
/* 418c0b: sub esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 418c11: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 418c16: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 418c19: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 418c1c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 418c1f: call dword ptr [0x43917c] */
  esp -= 4; W32(esp, 0x418c25u); SPILL(); call_ind(R32(0x43917cu)); if (g_unwind) return; /* KERNEL32!SetCurrentDirectoryA */ RELOAD();
/* 418c25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418c27: je 0x418c87 */
  if (zf) goto L_418c87;
L_418c29: /* 418c29: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* 418c2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418c30: push 0x105 */
  { uint32_t v = 0x105u; esp -= 4; W32(esp, v); }
/* 418c35: call dword ptr [0x439178] */
  esp -= 4; W32(esp, 0x418c3bu); SPILL(); call_ind(R32(0x439178u)); if (g_unwind) return; /* KERNEL32!GetCurrentDirectoryA */ RELOAD();
/* 418c3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418c3d: je 0x418c87 */
  if (zf) goto L_418c87;
L_418c3f: /* 418c3f: mov al, byte ptr [ebp - 0x110] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xfffffef0u))) & 0xffu);
/* 418c45: cmp al, 0x5c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 418c47: je 0x418c4d */
  if (zf) goto L_418c4d;
L_418c49: /* 418c49: cmp al, 0x2f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 418c4b: jne 0x418c55 */
  if (!zf) goto L_418c55;
L_418c4d: /* 418c4d: cmp al, byte ptr [ebp - 0x10f] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0xfffffef1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 418c53: je 0x418c83 */
  if (zf) goto L_418c83;
L_418c55: /* 418c55: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 418c58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418c59: mov byte ptr [ebp - 8], 0x3d */
  W8((uint32_t)(ebp + 0xfffffff8u), 0x3du);
/* 418c5d: call 0x4263f2 */
  esp -= 4; W32(esp, 0x418c62u); SPILL(); f_4263f2(); if (g_unwind) return; RELOAD();
/* 418c62: and byte ptr [ebp - 5], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffbu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffbu), r);
  }
/* 418c66: mov byte ptr [ebp - 7], al */
  W8((uint32_t)(ebp + 0xfffffff9u), (eax & 0xffu));
/* 418c69: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418c6a: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* 418c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418c71: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 418c74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418c75: mov byte ptr [ebp - 6], 0x3a */
  W8((uint32_t)(ebp + 0xfffffffau), 0x3au);
/* 418c79: call dword ptr [0x439104] */
  esp -= 4; W32(esp, 0x418c7fu); SPILL(); call_ind(R32(0x439104u)); if (g_unwind) return; /* KERNEL32!SetEnvironmentVariableA */ RELOAD();
/* 418c7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418c81: je 0x418c87 */
  if (zf) goto L_418c87;
L_418c83: /* 418c83: xor eax, eax */
  eax = 0;
/* 418c85: jmp 0x418c97 */
  goto L_418c97;
L_418c87: /* 418c87: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x418c8du); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 418c8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418c8e: call 0x4102b7 */
  esp -= 4; W32(esp, 0x418c93u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 418c93: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418c94: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_418c97: /* 418c97: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 418c9a: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 418c9d: call 0x4013ab */
  esp -= 4; W32(esp, 0x418ca2u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 418ca2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 418ca3: ret  */
  esp += 4; SPILL(); return;
}

void f_418ca4(void) {
  LOAD_REGS();
L_418ca4: /* 418ca4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 418ca5: mov ebp, esp */
  ebp = esp;
/* 418ca7: sub esp, 0x108 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 418cad: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 418cb2: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 418cb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 418cb6: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 418cb9: lea eax, [ebp - 0x108] */
  eax = (uint32_t)(ebp + 0xfffffef8u);
/* 418cbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418cc0: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 418cc5: xor esi, esi */
  esi = 0;
/* 418cc7: call dword ptr [0x439178] */
  esp -= 4; W32(esp, 0x418ccdu); SPILL(); call_ind(R32(0x439178u)); if (g_unwind) return; /* KERNEL32!GetCurrentDirectoryA */ RELOAD();
/* 418ccd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418ccf: je 0x418ced */
  if (zf) goto L_418ced;
L_418cd1: /* 418cd1: cmp byte ptr [ebp - 0x107], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffef9u))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 418cd8: jne 0x418ced */
  if (!zf) goto L_418ced;
L_418cda: /* 418cda: movzx eax, byte ptr [ebp - 0x108] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xfffffef8u)));
/* 418ce1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418ce2: call 0x406e75 */
  esp -= 4; W32(esp, 0x418ce7u); SPILL(); f_406e75(); if (g_unwind) return; RELOAD();
/* 418ce7: mov esi, eax */
  esi = eax;
/* 418ce9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418cea: sub esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_418ced: /* 418ced: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 418cf0: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 418cf3: mov eax, esi */
  eax = esi;
/* 418cf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 418cf6: call 0x4013ab */
  esp -= 4; W32(esp, 0x418cfbu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 418cfb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 418cfc: ret  */
  esp += 4; SPILL(); return;
}

void f_418cfd(void) {
  LOAD_REGS();
L_418cfd: /* 418cfd: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 418cff: push 0x43fc28 */
  { uint32_t v = 0x43fc28u; esp -= 4; W32(esp, v); }
/* 418d04: call 0x40101f */
  esp -= 4; W32(esp, 0x418d09u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 418d09: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 418d0c: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 418d0f: jl 0x418d6c */
  if ((sf != of)) goto L_418d6c;
L_418d11: /* 418d11: cmp ebx, 0x1f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 418d14: jg 0x418d6c */
  if ((!zf && sf == of)) goto L_418d6c;
L_418d16: /* 418d16: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 418d18: call 0x4011b7 */
  esp -= 4; W32(esp, 0x418d1du); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 418d1d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418d1e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 418d22: add ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 418d25: mov byte ptr [ebp - 0x1c], bl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ebx & 0xffu));
/* 418d28: mov byte ptr [ebp - 0x1b], 0x3a */
  W8((uint32_t)(ebp + 0xffffffe5u), 0x3au);
/* 418d2c: and byte ptr [ebp - 0x1a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe6u), r);
  }
/* 418d30: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 418d33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418d34: call dword ptr [0x43917c] */
  esp -= 4; W32(esp, 0x418d3au); SPILL(); call_ind(R32(0x43917cu)); if (g_unwind) return; /* KERNEL32!SetCurrentDirectoryA */ RELOAD();
/* 418d3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418d3c: je 0x418d44 */
  if (zf) goto L_418d44;
L_418d3e: /* 418d3e: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 418d42: jmp 0x418d55 */
  goto L_418d55;
L_418d44: /* 418d44: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x418d4au); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 418d4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418d4b: call 0x4102b7 */
  esp -= 4; W32(esp, 0x418d50u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 418d50: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418d51: or dword ptr [ebp - 0x20], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
L_418d55: /* 418d55: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 418d59: call 0x418d63 */
  esp -= 4; W32(esp, 0x418d5eu); SPILL(); f_418d63(); if (g_unwind) return; RELOAD();
/* 418d5e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 418d61: jmp 0x418d85 */
  goto L_418d85;
L_418d6c: /* 418d6c: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418d71u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418d71: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
/* 418d77: call 0x4102ae */
  esp -= 4; W32(esp, 0x418d7cu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 418d7c: mov dword ptr [eax], 0xf */
  W32((uint32_t)(eax), 0xfu);
/* 418d82: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_418d85: /* 418d85: call 0x40105a */
  esp -= 4; W32(esp, 0x418d8au); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 418d8a: ret  */
  esp += 4; SPILL(); return;
}

void f_418d63(void) {
  LOAD_REGS();
L_418d63: /* 418d63: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 418d65: call 0x4011d9 */
  esp -= 4; W32(esp, 0x418d6au); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 418d6a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418d6b: ret  */
  esp += 4; SPILL(); return;
}

void f_418d8b(void) {
  LOAD_REGS();
L_418d8b: /* 418d8b: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 418d8f: call dword ptr [0x439174] */
  esp -= 4; W32(esp, 0x418d95u); SPILL(); call_ind(R32(0x439174u)); if (g_unwind) return; /* KERNEL32!GetFileAttributesA */ RELOAD();
/* 418d95: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418d98: je 0x418db8 */
  if (zf) goto L_418db8;
L_418d9a: /* 418d9a: test byte ptr [esp + 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 418d9f: je 0x418da6 */
  if (zf) goto L_418da6;
L_418da1: /* 418da1: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 418da4: jmp 0x418da9 */
  goto L_418da9;
L_418da6: /* 418da6: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_418da9: /* 418da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418daa: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 418dae: call dword ptr [0x439180] */
  esp -= 4; W32(esp, 0x418db4u); SPILL(); call_ind(R32(0x439180u)); if (g_unwind) return; /* KERNEL32!SetFileAttributesA */ RELOAD();
/* 418db4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418db6: jne 0x418dc9 */
  if (!zf) goto L_418dc9;
L_418db8: /* 418db8: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x418dbeu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 418dbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418dbf: call 0x4102b7 */
  esp -= 4; W32(esp, 0x418dc4u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 418dc4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418dc5: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 418dc8: ret  */
  esp += 4; SPILL(); return;
L_418dc9: /* 418dc9: xor eax, eax */
  eax = 0;
/* 418dcb: ret  */
  esp += 4; SPILL(); return;
}

void f_418dcc(void) {
  LOAD_REGS();
L_418dcc: /* 418dcc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 418dcd: mov ebp, esp */
  ebp = esp;
/* 418dcf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 418dd0: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 418dd3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418dd5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 418dd6: je 0x418e65 */
  if (zf) goto L_418e65;
L_418ddc: /* 418ddc: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 418ddf: je 0x418e65 */
  if (zf) goto L_418e65;
L_418de5: /* 418de5: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 418de8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418dea: jne 0x418e11 */
  if (!zf) goto L_418e11;
L_418dec: /* 418dec: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 418df1: call 0x4010eb */
  esp -= 4; W32(esp, 0x418df6u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 418df6: mov edi, eax */
  edi = eax;
/* 418df8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418dfa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418dfb: jne 0x418e0a */
  if (!zf) goto L_418e0a;
L_418dfd: /* 418dfd: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418e02u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418e02: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 418e08: jmp 0x418e3d */
  goto L_418e3d;
L_418e0a: /* 418e0a: mov dword ptr [ebp + 0x10], 0x104 */
  W32((uint32_t)(ebp + 0x10u), 0x104u);
L_418e11: /* 418e11: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 418e14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418e15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 418e16: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 418e19: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 418e1a: call dword ptr [0x439184] */
  esp -= 4; W32(esp, 0x418e20u); SPILL(); call_ind(R32(0x439184u)); if (g_unwind) return; /* KERNEL32!GetFullPathNameA */ RELOAD();
/* 418e20: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 418e23: jb 0x418e41 */
  if (cf) goto L_418e41;
L_418e25: /* 418e25: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418e29: jne 0x418e32 */
  if (!zf) goto L_418e32;
L_418e2b: /* 418e2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 418e2c: call 0x401156 */
  esp -= 4; W32(esp, 0x418e31u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 418e31: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_418e32: /* 418e32: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418e37u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418e37: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
L_418e3d: /* 418e3d: xor eax, eax */
  eax = 0;
/* 418e3f: jmp 0x418e72 */
  goto L_418e72;
L_418e41: /* 418e41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418e43: jne 0x418e61 */
  if (!zf) goto L_418e61;
L_418e45: /* 418e45: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418e48: jne 0x418e51 */
  if (!zf) goto L_418e51;
L_418e4a: /* 418e4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 418e4b: call 0x401156 */
  esp -= 4; W32(esp, 0x418e50u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 418e50: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_418e51: /* 418e51: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x418e57u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 418e57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418e58: call 0x4102b7 */
  esp -= 4; W32(esp, 0x418e5du); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 418e5d: xor eax, eax */
  eax = 0;
/* 418e5f: jmp 0x418e71 */
  goto L_418e71;
L_418e61: /* 418e61: mov eax, edi */
  eax = edi;
/* 418e63: jmp 0x418e72 */
  goto L_418e72;
L_418e65: /* 418e65: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 418e68: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 418e6b: call 0x418f9b */
  esp -= 4; W32(esp, 0x418e70u); SPILL(); f_418f9b(); if (g_unwind) return; RELOAD();
/* 418e70: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_418e71: /* 418e71: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_418e72: /* 418e72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 418e73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 418e74: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 418e75: ret  */
  esp += 4; SPILL(); return;
}

void f_418e76(void) {
  LOAD_REGS();
L_418e76: /* 418e76: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 418e77: mov ebp, esp */
  ebp = esp;
/* 418e79: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 418e7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418e7e: je 0x418ea4 */
  if (zf) goto L_418ea4;
L_418e80: /* 418e80: and byte ptr [ebp + 0xb], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xbu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xbu), r);
  }
/* 418e84: add al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 418e86: mov byte ptr [ebp + 8], al */
  W8((uint32_t)(ebp + 0x8u), (eax & 0xffu));
/* 418e89: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 418e8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418e8d: mov byte ptr [ebp + 9], 0x3a */
  W8((uint32_t)(ebp + 0x9u), 0x3au);
/* 418e91: mov byte ptr [ebp + 0xa], 0x5c */
  W8((uint32_t)(ebp + 0xau), 0x5cu);
/* 418e95: call dword ptr [0x439188] */
  esp -= 4; W32(esp, 0x418e9bu); SPILL(); call_ind(R32(0x439188u)); if (g_unwind) return; /* KERNEL32!GetDriveTypeA */ RELOAD();
/* 418e9b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418e9d: je 0x418ea9 */
  if (zf) goto L_418ea9;
L_418e9f: /* 418e9f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 418ea2: je 0x418ea9 */
  if (zf) goto L_418ea9;
L_418ea4: /* 418ea4: xor eax, eax */
  eax = 0;
/* 418ea6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 418ea7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 418ea8: ret  */
  esp += 4; SPILL(); return;
L_418ea9: /* 418ea9: xor eax, eax */
  eax = 0;
/* 418eab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 418eac: ret  */
  esp += 4; SPILL(); return;
}

void f_418ead(void) {
  LOAD_REGS();
L_418ead: /* 418ead: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 418eae: mov ebp, esp */
  ebp = esp;
/* 418eb0: sub esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 418eb6: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 418ebb: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 418ebe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 418ebf: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 418ec2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418ec4: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 418ec7: je 0x418f28 */
  if (zf) goto L_418f28;
L_418ec9: /* 418ec9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 418eca: call 0x418e76 */
  esp -= 4; W32(esp, 0x418ecfu); SPILL(); f_418e76(); if (g_unwind) return; RELOAD();
/* 418ecf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418ed1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418ed2: jne 0x418efa */
  if (!zf) goto L_418efa;
L_418ed4: /* 418ed4: call 0x4102ae */
  esp -= 4; W32(esp, 0x418ed9u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 418ed9: mov dword ptr [eax], 0xf */
  W32((uint32_t)(eax), 0xfu);
/* 418edf: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418ee4u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418ee4: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
L_418eea: /* 418eea: xor eax, eax */
  eax = 0;
L_418eec: /* 418eec: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 418eef: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 418ef2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 418ef3: call 0x4013ab */
  esp -= 4; W32(esp, 0x418ef8u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 418ef8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 418ef9: ret  */
  esp += 4; SPILL(); return;
L_418efa: /* 418efa: and byte ptr [ebp + 0xb], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xbu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xbu), r);
  }
/* 418efe: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 418f01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418f02: lea eax, [ebp - 0x10c] */
  eax = (uint32_t)(ebp + 0xfffffef4u);
/* 418f08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418f09: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 418f0e: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 418f11: add bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 418f14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418f15: mov byte ptr [ebp + 8], bl */
  W8((uint32_t)(ebp + 0x8u), (ebx & 0xffu));
/* 418f18: mov byte ptr [ebp + 9], 0x3a */
  W8((uint32_t)(ebp + 0x9u), 0x3au);
/* 418f1c: mov byte ptr [ebp + 0xa], 0x2e */
  W8((uint32_t)(ebp + 0xau), 0x2eu);
/* 418f20: call dword ptr [0x439184] */
  esp -= 4; W32(esp, 0x418f26u); SPILL(); call_ind(R32(0x439184u)); if (g_unwind) return; /* KERNEL32!GetFullPathNameA */ RELOAD();
/* 418f26: jmp 0x418f3a */
  goto L_418f3a;
L_418f28: /* 418f28: lea eax, [ebp - 0x10c] */
  eax = (uint32_t)(ebp + 0xfffffef4u);
/* 418f2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418f2f: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 418f34: call dword ptr [0x439178] */
  esp -= 4; W32(esp, 0x418f3au); SPILL(); call_ind(R32(0x439178u)); if (g_unwind) return; /* KERNEL32!GetCurrentDirectoryA */ RELOAD();
L_418f3a: /* 418f3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418f3c: je 0x418eea */
  if (zf) goto L_418eea;
L_418f3e: /* 418f3e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 418f3f: cmp eax, 0x104 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 418f44: ja 0x418eea */
  if ((!cf && !zf)) goto L_418eea;
L_418f46: /* 418f46: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 418f49: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418f4b: jne 0x418f72 */
  if (!zf) goto L_418f72;
L_418f4d: /* 418f4d: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 418f50: jg 0x418f55 */
  if ((!zf && sf == of)) goto L_418f55;
L_418f52: /* 418f52: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
L_418f55: /* 418f55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418f56: call 0x4010eb */
  esp -= 4; W32(esp, 0x418f5bu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 418f5b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418f5c: mov ecx, eax */
  ecx = eax;
/* 418f5e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 418f60: jne 0x418f87 */
  if (!zf) goto L_418f87;
L_418f62: /* 418f62: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418f67u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418f67: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 418f6d: jmp 0x418eea */
  goto L_418eea;
L_418f72: /* 418f72: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 418f75: jle 0x418f87 */
  if ((zf || sf != of)) goto L_418f87;
L_418f77: /* 418f77: call 0x4102a5 */
  esp -= 4; W32(esp, 0x418f7cu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 418f7c: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
/* 418f82: jmp 0x418eea */
  goto L_418eea;
L_418f87: /* 418f87: lea eax, [ebp - 0x10c] */
  eax = (uint32_t)(ebp + 0xfffffef4u);
/* 418f8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 418f8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 418f8f: call 0x404b3a */
  esp -= 4; W32(esp, 0x418f94u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 418f94: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418f95: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418f96: jmp 0x418eec */
  goto L_418eec;
}

void f_418f9b(void) {
  LOAD_REGS();
L_418f9b: /* 418f9b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 418f9d: push 0x43fc38 */
  { uint32_t v = 0x43fc38u; esp -= 4; W32(esp, v); }
/* 418fa2: call 0x40101f */
  esp -= 4; W32(esp, 0x418fa7u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 418fa7: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 418fa9: call 0x4011b7 */
  esp -= 4; W32(esp, 0x418faeu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 418fae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418faf: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 418fb3: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 418fb6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 418fb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 418fbb: call 0x418ead */
  esp -= 4; W32(esp, 0x418fc0u); SPILL(); f_418ead(); if (g_unwind) return; RELOAD();
/* 418fc0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 418fc3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 418fc6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 418fca: call 0x418fd8 */
  esp -= 4; W32(esp, 0x418fcfu); SPILL(); f_418fd8(); if (g_unwind) return; RELOAD();
/* 418fcf: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 418fd2: call 0x40105a */
  esp -= 4; W32(esp, 0x418fd7u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 418fd7: ret  */
  esp += 4; SPILL(); return;
}

void f_418fd8(void) {
  LOAD_REGS();
L_418fd8: /* 418fd8: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 418fda: call 0x4011d9 */
  esp -= 4; W32(esp, 0x418fdfu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 418fdf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418fe0: ret  */
  esp += 4; SPILL(); return;
}

void f_418fe1(void) {
  LOAD_REGS();
L_418fe1: /* 418fe1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 418fe3: push 0x43fc48 */
  { uint32_t v = 0x43fc48u; esp -= 4; W32(esp, v); }
/* 418fe8: call 0x40101f */
  esp -= 4; W32(esp, 0x418fedu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 418fed: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 418fef: call 0x4011b7 */
  esp -= 4; W32(esp, 0x418ff4u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 418ff4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 418ff5: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 418ff9: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 418ffc: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 418fff: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 419002: call 0x418ead */
  esp -= 4; W32(esp, 0x419007u); SPILL(); f_418ead(); if (g_unwind) return; RELOAD();
/* 419007: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41900a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 41900d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 419011: call 0x41901f */
  esp -= 4; W32(esp, 0x419016u); SPILL(); f_41901f(); if (g_unwind) return; RELOAD();
/* 419016: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 419019: call 0x40105a */
  esp -= 4; W32(esp, 0x41901eu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41901e: ret  */
  esp += 4; SPILL(); return;
}

void f_41901f(void) {
  LOAD_REGS();
L_41901f: /* 41901f: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 419021: call 0x4011d9 */
  esp -= 4; W32(esp, 0x419026u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 419026: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419027: ret  */
  esp += 4; SPILL(); return;
}

void f_419028(void) {
  LOAD_REGS();
L_419028: /* 419028: jmp dword ptr [0x4390fc] */
  SPILL(); call_ind(R32(0x4390fcu)); return; /* KERNEL32!GetCurrentProcessId */
}

void f_41902e(void) {
  LOAD_REGS();
L_41902e: /* 41902e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 419030: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 419034: call dword ptr [0x43918c] */
  esp -= 4; W32(esp, 0x41903au); SPILL(); call_ind(R32(0x43918cu)); if (g_unwind) return; /* KERNEL32!CreateDirectoryA */ RELOAD();
/* 41903a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41903c: jne 0x419046 */
  if (!zf) goto L_419046;
L_41903e: /* 41903e: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x419044u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 419044: jmp 0x419048 */
  goto L_419048;
L_419046: /* 419046: xor eax, eax */
  eax = 0;
L_419048: /* 419048: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41904a: je 0x419057 */
  if (zf) goto L_419057;
L_41904c: /* 41904c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41904d: call 0x4102b7 */
  esp -= 4; W32(esp, 0x419052u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 419052: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419053: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419056: ret  */
  esp += 4; SPILL(); return;
L_419057: /* 419057: xor eax, eax */
  eax = 0;
/* 419059: ret  */
  esp += 4; SPILL(); return;
}

void f_41905a(void) {
  LOAD_REGS();
L_41905a: /* 41905a: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 41905e: call dword ptr [0x439190] */
  esp -= 4; W32(esp, 0x419064u); SPILL(); call_ind(R32(0x439190u)); if (g_unwind) return; /* KERNEL32!RemoveDirectoryA */ RELOAD();
/* 419064: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419066: jne 0x419070 */
  if (!zf) goto L_419070;
L_419068: /* 419068: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x41906eu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 41906e: jmp 0x419072 */
  goto L_419072;
L_419070: /* 419070: xor eax, eax */
  eax = 0;
L_419072: /* 419072: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419074: je 0x419081 */
  if (zf) goto L_419081;
L_419076: /* 419076: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419077: call 0x4102b7 */
  esp -= 4; W32(esp, 0x41907cu); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 41907c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41907d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419080: ret  */
  esp += 4; SPILL(); return;
L_419081: /* 419081: xor eax, eax */
  eax = 0;
/* 419083: ret  */
  esp += 4; SPILL(); return;
}

void f_419084(void) {
  LOAD_REGS();
L_419084: /* 419084: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 419088: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419089: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 41908d: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 419092: cmp byte ptr [esi + 1], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1u))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 419096: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 419097: mov ecx, esi */
  ecx = esi;
/* 419099: jne 0x41909e */
  if (!zf) goto L_41909e;
L_41909b: /* 41909b: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
L_41909e: /* 41909e: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 4190a0: cmp dl, 0x5c */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4190a3: je 0x4190aa */
  if (zf) goto L_4190aa;
L_4190a5: /* 4190a5: cmp dl, 0x2f */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4190a8: jne 0x4190b0 */
  if (!zf) goto L_4190b0;
L_4190aa: /* 4190aa: cmp byte ptr [ecx + 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4190ae: je 0x4190bd */
  if (zf) goto L_4190bd;
L_4190b0: /* 4190b0: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4190b2: jne 0x4190bd */
  if (!zf) goto L_4190bd;
L_4190b4: /* 4190b4: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4190b6: mov edi, 0x8000 */
  edi = 0x8000u;
/* 4190bb: jne 0x4190c2 */
  if (!zf) goto L_4190c2;
L_4190bd: /* 4190bd: mov edi, 0x4040 */
  edi = 0x4040u;
L_4190c2: /* 4190c2: shl eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4190c5: not al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(~(eax & 0xffu)) & 0xffu);
/* 4190c7: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 4190c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4190ca: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4190cf: or eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4190d4: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4190d6: call 0x427075 */
  esp -= 4; W32(esp, 0x4190dbu); SPILL(); f_427075(); if (g_unwind) return; RELOAD();
/* 4190db: mov esi, eax */
  esi = eax;
/* 4190dd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4190df: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4190e0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4190e1: je 0x41912a */
  if (zf) goto L_41912a;
L_4190e3: /* 4190e3: push 0x43fc6c */
  { uint32_t v = 0x43fc6cu; esp -= 4; W32(esp, v); }
/* 4190e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4190e9: call 0x411cb8 */
  esp -= 4; W32(esp, 0x4190eeu); SPILL(); f_411cb8(); if (g_unwind) return; RELOAD();
/* 4190ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4190f0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4190f1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4190f2: je 0x419127 */
  if (zf) goto L_419127;
L_4190f4: /* 4190f4: push 0x43fc64 */
  { uint32_t v = 0x43fc64u; esp -= 4; W32(esp, v); }
/* 4190f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4190fa: call 0x411cb8 */
  esp -= 4; W32(esp, 0x4190ffu); SPILL(); f_411cb8(); if (g_unwind) return; RELOAD();
/* 4190ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419101: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419102: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419103: je 0x419127 */
  if (zf) goto L_419127;
L_419105: /* 419105: push 0x43fc5c */
  { uint32_t v = 0x43fc5cu; esp -= 4; W32(esp, v); }
/* 41910a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41910b: call 0x411cb8 */
  esp -= 4; W32(esp, 0x419110u); SPILL(); f_411cb8(); if (g_unwind) return; RELOAD();
/* 419110: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419112: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419113: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419114: je 0x419127 */
  if (zf) goto L_419127;
L_419116: /* 419116: push 0x43fc54 */
  { uint32_t v = 0x43fc54u; esp -= 4; W32(esp, v); }
/* 41911b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41911c: call 0x411cb8 */
  esp -= 4; W32(esp, 0x419121u); SPILL(); f_411cb8(); if (g_unwind) return; RELOAD();
/* 419121: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419123: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419124: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419125: jne 0x41912a */
  if (!zf) goto L_41912a;
L_419127: /* 419127: or edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_41912a: /* 41912a: mov eax, edi */
  eax = edi;
/* 41912c: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41912f: and eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 419132: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 419134: mov eax, edi */
  eax = edi;
/* 419136: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 419139: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41913c: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41913e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41913f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 419140: ret  */
  esp += 4; SPILL(); return;
}

void f_419141(void) {
  LOAD_REGS();
L_419141: /* 419141: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419142: call 0x402493 */
  esp -= 4; W32(esp, 0x419147u); SPILL(); hle_strlen(); RELOAD();
/* 419147: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41914a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41914b: jb 0x4191ab */
  if (cf) goto L_4191ab;
L_41914d: /* 41914d: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 41914f: cmp al, 0x5c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 419151: je 0x419157 */
  if (zf) goto L_419157;
L_419153: /* 419153: cmp al, 0x2f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 419155: jne 0x4191ab */
  if (!zf) goto L_4191ab;
L_419157: /* 419157: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 41915a: cmp al, 0x5c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41915c: je 0x419162 */
  if (zf) goto L_419162;
L_41915e: /* 41915e: cmp al, 0x2f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 419160: jne 0x4191ab */
  if (!zf) goto L_4191ab;
L_419162: /* 419162: lea eax, [esi + 3] */
  eax = (uint32_t)(esi + 0x3u);
/* 419165: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 419167: xor dl, dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 419169: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41916b: je 0x4191ab */
  if (zf) goto L_4191ab;
L_41916d: /* 41916d: cmp cl, 0x5c */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 419170: je 0x41917e */
  if (zf) goto L_41917e;
L_419172: /* 419172: cmp cl, 0x2f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 419175: je 0x41917e */
  if (zf) goto L_41917e;
L_419177: /* 419177: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 419178: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41917a: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41917c: jne 0x41916d */
  if (!zf) goto L_41916d;
L_41917e: /* 41917e: cmp byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 419180: je 0x4191ab */
  if (zf) goto L_4191ab;
L_419182: /* 419182: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 419183: cmp byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 419185: je 0x4191ab */
  if (zf) goto L_4191ab;
L_419187: /* 419187: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 419189: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41918b: je 0x4191a7 */
  if (zf) goto L_4191a7;
L_41918d: /* 41918d: cmp cl, 0x5c */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 419190: je 0x41919e */
  if (zf) goto L_41919e;
L_419192: /* 419192: cmp cl, 0x2f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 419195: je 0x41919e */
  if (zf) goto L_41919e;
L_419197: /* 419197: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 419198: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41919a: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41919c: jne 0x41918d */
  if (!zf) goto L_41918d;
L_41919e: /* 41919e: cmp byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4191a0: je 0x4191a7 */
  if (zf) goto L_4191a7;
L_4191a2: /* 4191a2: cmp byte ptr [eax + 1], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4191a5: jne 0x4191ab */
  if (!zf) goto L_4191ab;
L_4191a7: /* 4191a7: xor eax, eax */
  eax = 0;
/* 4191a9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4191aa: ret  */
  esp += 4; SPILL(); return;
L_4191ab: /* 4191ab: xor eax, eax */
  eax = 0;
/* 4191ad: ret  */
  esp += 4; SPILL(); return;
}

void f_4191ae(void) {
  LOAD_REGS();
L_4191ae: /* 4191ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4191af: mov ebp, esp */
  ebp = esp;
/* 4191b1: sub esp, 0x268 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x268u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4191b7: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4191bc: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4191bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4191c0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4191c3: push 0x43fc78 */
  { uint32_t v = 0x43fc78u; esp -= 4; W32(esp, v); }
/* 4191c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4191c9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4191cc: call 0x412004 */
  esp -= 4; W32(esp, 0x4191d1u); SPILL(); f_412004(); if (g_unwind) return; RELOAD();
/* 4191d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4191d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4191d4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4191d5: je 0x4191f0 */
  if (zf) goto L_4191f0;
L_4191d7: /* 4191d7: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4191dcu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4191dc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4191de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4191df: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4191e1: call 0x4102ae */
  esp -= 4; W32(esp, 0x4191e6u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4191e6: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4191e8: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4191eb: jmp 0x419484 */
  goto L_419484;
L_4191f0: /* 4191f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4191f1: xor ebx, ebx */
  ebx = 0;
/* 4191f3: cmp byte ptr [esi + 1], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1u))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4191f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4191f8: jne 0x41922d */
  if (!zf) goto L_41922d;
L_4191fa: /* 4191fa: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4191fc: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4191fe: je 0x41921e */
  if (zf) goto L_41921e;
L_419200: /* 419200: cmp byte ptr [esi + 2], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x2u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 419203: jne 0x41921e */
  if (!zf) goto L_41921e;
L_419205: /* 419205: call 0x4102a5 */
  esp -= 4; W32(esp, 0x41920au); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 41920a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41920c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41920d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41920f: call 0x4102ae */
  esp -= 4; W32(esp, 0x419214u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 419214: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 419216: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419219: jmp 0x419482 */
  goto L_419482;
L_41921e: /* 41921e: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 419221: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419222: call 0x42636d */
  esp -= 4; W32(esp, 0x419227u); SPILL(); f_42636d(); if (g_unwind) return; RELOAD();
/* 419227: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419228: sub eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41922b: jmp 0x419232 */
  goto L_419232;
L_41922d: /* 41922d: call 0x418ca4 */
  esp -= 4; W32(esp, 0x419232u); SPILL(); f_418ca4(); if (g_unwind) return; RELOAD();
L_419232: /* 419232: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 419235: lea eax, [ebp - 0x164] */
  eax = (uint32_t)(ebp + 0xfffffe9cu);
/* 41923b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41923c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41923d: call dword ptr [0x43906c] */
  esp -= 4; W32(esp, 0x419243u); SPILL(); call_ind(R32(0x43906cu)); if (g_unwind) return; /* KERNEL32!FindFirstFileA */ RELOAD();
/* 419243: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 419246: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 419248: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 41924b: jne 0x4192f6 */
  if (!zf) goto L_4192f6;
L_419251: /* 419251: push 0x43fc74 */
  { uint32_t v = 0x43fc74u; esp -= 4; W32(esp, v); }
/* 419256: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419257: call 0x412004 */
  esp -= 4; W32(esp, 0x41925cu); SPILL(); f_412004(); if (g_unwind) return; RELOAD();
/* 41925c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41925e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41925f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419260: je 0x4192e0 */
  if (zf) goto L_4192e0;
L_419262: /* 419262: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 419267: lea eax, [ebp - 0x268] */
  eax = (uint32_t)(ebp + 0xfffffd98u);
/* 41926d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41926e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41926f: call 0x418dcc */
  esp -= 4; W32(esp, 0x419274u); SPILL(); f_418dcc(); if (g_unwind) return; RELOAD();
/* 419274: mov esi, eax */
  esi = eax;
/* 419276: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 419279: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41927b: je 0x4192e0 */
  if (zf) goto L_4192e0;
L_41927d: /* 41927d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41927e: call 0x402493 */
  esp -= 4; W32(esp, 0x419283u); SPILL(); hle_strlen(); RELOAD();
/* 419283: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 419286: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419287: je 0x419292 */
  if (zf) goto L_419292;
L_419289: /* 419289: call 0x419141 */
  esp -= 4; W32(esp, 0x41928eu); SPILL(); f_419141(); if (g_unwind) return; RELOAD();
/* 41928e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419290: je 0x4192e0 */
  if (zf) goto L_4192e0;
L_419292: /* 419292: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419293: call dword ptr [0x439188] */
  esp -= 4; W32(esp, 0x419299u); SPILL(); call_ind(R32(0x439188u)); if (g_unwind) return; /* KERNEL32!GetDriveTypeA */ RELOAD();
/* 419299: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41929c: jbe 0x4192e0 */
  if ((cf | zf)) goto L_4192e0;
L_41929e: /* 41929e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41929f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4192a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4192a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4192a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4192a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4192a6: push 0x7bc */
  { uint32_t v = 0x7bcu; esp -= 4; W32(esp, v); }
/* 4192ab: mov dword ptr [ebp - 0x164], 0x10 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x10u);
/* 4192b5: mov dword ptr [ebp - 0x148], ebx */
  W32((uint32_t)(ebp + 0xfffffeb8u), ebx);
/* 4192bb: mov dword ptr [ebp - 0x144], ebx */
  W32((uint32_t)(ebp + 0xfffffebcu), ebx);
/* 4192c1: mov byte ptr [ebp - 0x138], bl */
  W8((uint32_t)(ebp + 0xfffffec8u), (ebx & 0xffu));
/* 4192c7: call 0x431816 */
  esp -= 4; W32(esp, 0x4192ccu); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 4192cc: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4192cf: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4192d2: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 4192d5: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 4192d8: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 4192db: jmp 0x41942e */
  goto L_41942e;
L_4192e0: /* 4192e0: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4192e5u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4192e5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4192e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4192e8: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4192ea: call 0x4102ae */
  esp -= 4; W32(esp, 0x4192efu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4192ef: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4192f1: jmp 0x419480 */
  goto L_419480;
L_4192f6: /* 4192f6: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4192f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4192fa: lea eax, [ebp - 0x150] */
  eax = (uint32_t)(ebp + 0xfffffeb0u);
/* 419300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419301: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x419307u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 419307: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419309: je 0x41946a */
  if (zf) goto L_41946a;
L_41930f: /* 41930f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 419312: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419313: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 419316: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419317: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x41931du); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 41931d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41931f: je 0x41946a */
  if (zf) goto L_41946a;
L_419325: /* 419325: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 419329: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41932a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41932b: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 41932f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419330: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 419334: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419335: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 419339: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41933a: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 41933e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41933f: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 419343: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419344: call 0x431816 */
  esp -= 4; W32(esp, 0x419349u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 419349: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41934c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41934f: cmp dword ptr [ebp - 0x158], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffea8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 419355: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 419358: jne 0x419362 */
  if (!zf) goto L_419362;
L_41935a: /* 41935a: cmp dword ptr [ebp - 0x154], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffeacu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 419360: je 0x4193b8 */
  if (zf) goto L_4193b8;
L_419362: /* 419362: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 419365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419366: lea eax, [ebp - 0x158] */
  eax = (uint32_t)(ebp + 0xfffffea8u);
/* 41936c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41936d: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x419373u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 419373: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419375: je 0x41946a */
  if (zf) goto L_41946a;
L_41937b: /* 41937b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41937e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41937f: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 419382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419383: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x419389u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 419389: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41938b: je 0x41946a */
  if (zf) goto L_41946a;
L_419391: /* 419391: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 419395: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 419396: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419397: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 41939b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41939c: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 4193a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4193a1: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 4193a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4193a6: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 4193aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4193ab: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 4193af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4193b0: call 0x431816 */
  esp -= 4; W32(esp, 0x4193b5u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 4193b5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4193b8: /* 4193b8: cmp dword ptr [ebp - 0x160], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffea0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4193be: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 4193c1: jne 0x4193d0 */
  if (!zf) goto L_4193d0;
L_4193c3: /* 4193c3: cmp dword ptr [ebp - 0x15c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffea4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4193c9: jne 0x4193d0 */
  if (!zf) goto L_4193d0;
L_4193cb: /* 4193cb: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 4193ce: jmp 0x419422 */
  goto L_419422;
L_4193d0: /* 4193d0: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4193d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4193d4: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 4193da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4193db: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x4193e1u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 4193e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4193e3: je 0x41946a */
  if (zf) goto L_41946a;
L_4193e9: /* 4193e9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 4193ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4193ed: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4193f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4193f1: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x4193f7u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 4193f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4193f9: je 0x41946a */
  if (zf) goto L_41946a;
L_4193fb: /* 4193fb: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 4193ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 419400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419401: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 419405: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419406: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 41940a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41940b: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 41940f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419410: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 419414: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419415: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 419419: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41941a: call 0x431816 */
  esp -= 4; W32(esp, 0x41941fu); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 41941f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_419422: /* 419422: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 419425: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 419428: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x41942eu); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
L_41942e: /* 41942e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 419431: push dword ptr [ebp - 0x164] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffe9cu)); esp -= 4; W32(esp, v); }
/* 419437: call 0x419084 */
  esp -= 4; W32(esp, 0x41943cu); SPILL(); f_419084(); if (g_unwind) return; RELOAD();
/* 41943c: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 419440: mov eax, dword ptr [ebp - 0x144] */
  eax = R32((uint32_t)(ebp + 0xfffffebcu));
/* 419446: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 419449: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 41944c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41944d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41944e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 419450: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 419453: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419454: mov word ptr [esi + 8], 1 */
  W16((uint32_t)(esi + 0x8u), 0x1u);
/* 41945a: mov word ptr [esi + 4], bx */
  W16((uint32_t)(esi + 0x4u), (ebx & 0xffffu));
/* 41945e: mov word ptr [esi + 0xc], bx */
  W16((uint32_t)(esi + 0xcu), (ebx & 0xffffu));
/* 419462: mov word ptr [esi + 0xa], bx */
  W16((uint32_t)(esi + 0xau), (ebx & 0xffffu));
/* 419466: xor eax, eax */
  eax = 0;
/* 419468: jmp 0x419482 */
  goto L_419482;
L_41946a: /* 41946a: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x419470u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 419470: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419471: call 0x4102b7 */
  esp -= 4; W32(esp, 0x419476u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 419476: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419477: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 41947a: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x419480u); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
L_419480: /* 419480: mov eax, edi */
  eax = edi;
L_419482: /* 419482: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 419483: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_419484: /* 419484: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 419487: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41948a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41948b: call 0x4013ab */
  esp -= 4; W32(esp, 0x419490u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 419490: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 419491: ret  */
  esp += 4; SPILL(); return;
}

void f_419492(void) {
  LOAD_REGS();
L_419492: /* 419492: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 419493: mov ebp, esp */
  ebp = esp;
/* 419495: sub esp, 0x268 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x268u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41949b: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4194a0: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4194a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4194a4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4194a7: push 0x43fc78 */
  { uint32_t v = 0x43fc78u; esp -= 4; W32(esp, v); }
/* 4194ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4194ad: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4194b0: call 0x412004 */
  esp -= 4; W32(esp, 0x4194b5u); SPILL(); f_412004(); if (g_unwind) return; RELOAD();
/* 4194b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4194b7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4194b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4194b9: je 0x4194d4 */
  if (zf) goto L_4194d4;
L_4194bb: /* 4194bb: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4194c0u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4194c0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4194c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4194c3: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4194c5: call 0x4102ae */
  esp -= 4; W32(esp, 0x4194cau); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4194ca: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4194cc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4194cf: jmp 0x4197af */
  goto L_4197af;
L_4194d4: /* 4194d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4194d5: xor ebx, ebx */
  ebx = 0;
/* 4194d7: cmp byte ptr [esi + 1], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1u))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4194db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4194dc: jne 0x419511 */
  if (!zf) goto L_419511;
L_4194de: /* 4194de: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4194e0: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4194e2: je 0x419502 */
  if (zf) goto L_419502;
L_4194e4: /* 4194e4: cmp byte ptr [esi + 2], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x2u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4194e7: jne 0x419502 */
  if (!zf) goto L_419502;
L_4194e9: /* 4194e9: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4194eeu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4194ee: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4194f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4194f1: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4194f3: call 0x4102ae */
  esp -= 4; W32(esp, 0x4194f8u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4194f8: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4194fa: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4194fd: jmp 0x4197ad */
  goto L_4197ad;
L_419502: /* 419502: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 419505: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419506: call 0x42636d */
  esp -= 4; W32(esp, 0x41950bu); SPILL(); f_42636d(); if (g_unwind) return; RELOAD();
/* 41950b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41950c: sub eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41950f: jmp 0x419516 */
  goto L_419516;
L_419511: /* 419511: call 0x418ca4 */
  esp -= 4; W32(esp, 0x419516u); SPILL(); f_418ca4(); if (g_unwind) return; RELOAD();
L_419516: /* 419516: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 419519: lea eax, [ebp - 0x164] */
  eax = (uint32_t)(ebp + 0xfffffe9cu);
/* 41951f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419521: call dword ptr [0x43906c] */
  esp -= 4; W32(esp, 0x419527u); SPILL(); call_ind(R32(0x43906cu)); if (g_unwind) return; /* KERNEL32!FindFirstFileA */ RELOAD();
/* 419527: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 41952a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41952c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 41952f: jne 0x4195e9 */
  if (!zf) goto L_4195e9;
L_419535: /* 419535: push 0x43fc74 */
  { uint32_t v = 0x43fc74u; esp -= 4; W32(esp, v); }
/* 41953a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41953b: call 0x412004 */
  esp -= 4; W32(esp, 0x419540u); SPILL(); f_412004(); if (g_unwind) return; RELOAD();
/* 419540: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419542: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419543: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419544: je 0x4195d3 */
  if (zf) goto L_4195d3;
L_41954a: /* 41954a: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 41954f: lea eax, [ebp - 0x268] */
  eax = (uint32_t)(ebp + 0xfffffd98u);
/* 419555: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419556: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419557: call 0x418dcc */
  esp -= 4; W32(esp, 0x41955cu); SPILL(); f_418dcc(); if (g_unwind) return; RELOAD();
/* 41955c: mov esi, eax */
  esi = eax;
/* 41955e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 419561: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 419563: je 0x4195d3 */
  if (zf) goto L_4195d3;
L_419565: /* 419565: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419566: call 0x402493 */
  esp -= 4; W32(esp, 0x41956bu); SPILL(); hle_strlen(); RELOAD();
/* 41956b: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41956e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41956f: je 0x41957a */
  if (zf) goto L_41957a;
L_419571: /* 419571: call 0x419141 */
  esp -= 4; W32(esp, 0x419576u); SPILL(); f_419141(); if (g_unwind) return; RELOAD();
/* 419576: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419578: je 0x4195d3 */
  if (zf) goto L_4195d3;
L_41957a: /* 41957a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41957b: call dword ptr [0x439188] */
  esp -= 4; W32(esp, 0x419581u); SPILL(); call_ind(R32(0x439188u)); if (g_unwind) return; /* KERNEL32!GetDriveTypeA */ RELOAD();
/* 419581: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 419584: jbe 0x4195d3 */
  if ((cf | zf)) goto L_4195d3;
L_419586: /* 419586: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 419589: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41958a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41958b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41958c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41958d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41958f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 419591: push 0x7bc */
  { uint32_t v = 0x7bcu; esp -= 4; W32(esp, v); }
/* 419596: mov dword ptr [ebp - 0x164], 0x10 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x10u);
/* 4195a0: mov dword ptr [ebp - 0x148], ebx */
  W32((uint32_t)(ebp + 0xfffffeb8u), ebx);
/* 4195a6: mov dword ptr [ebp - 0x144], ebx */
  W32((uint32_t)(ebp + 0xfffffebcu), ebx);
/* 4195ac: mov byte ptr [ebp - 0x138], bl */
  W8((uint32_t)(ebp + 0xfffffec8u), (ebx & 0xffu));
/* 4195b2: call 0x431924 */
  esp -= 4; W32(esp, 0x4195b7u); SPILL(); f_431924(); if (g_unwind) return; RELOAD();
/* 4195b7: mov ecx, edx */
  ecx = edx;
/* 4195b9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4195bc: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 4195bf: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 4195c2: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 4195c5: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 4195c8: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 4195cb: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 4195ce: jmp 0x419741 */
  goto L_419741;
L_4195d3: /* 4195d3: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4195d8u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4195d8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4195da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4195db: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4195dd: call 0x4102ae */
  esp -= 4; W32(esp, 0x4195e2u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4195e2: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4195e4: jmp 0x4197ab */
  goto L_4197ab;
L_4195e9: /* 4195e9: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4195ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4195ed: lea eax, [ebp - 0x150] */
  eax = (uint32_t)(ebp + 0xfffffeb0u);
/* 4195f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4195f4: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x4195fau); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 4195fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4195fc: je 0x419795 */
  if (zf) goto L_419795;
L_419602: /* 419602: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 419605: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419606: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 419609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41960a: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x419610u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 419610: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419612: je 0x419795 */
  if (zf) goto L_419795;
L_419618: /* 419618: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 41961c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41961d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41961e: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 419622: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 419625: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419626: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 41962a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41962b: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 41962f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419630: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 419634: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419635: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 419639: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41963a: call 0x431924 */
  esp -= 4; W32(esp, 0x41963fu); SPILL(); f_431924(); if (g_unwind) return; RELOAD();
/* 41963f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 419642: cmp dword ptr [ebp - 0x158], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffea8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 419648: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 41964b: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 41964e: jne 0x419662 */
  if (!zf) goto L_419662;
L_419650: /* 419650: cmp dword ptr [ebp - 0x154], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffeacu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 419656: jne 0x419662 */
  if (!zf) goto L_419662;
L_419658: /* 419658: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 41965b: mov eax, edx */
  eax = edx;
/* 41965d: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 419660: jmp 0x4196be */
  goto L_4196be;
L_419662: /* 419662: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 419665: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419666: lea eax, [ebp - 0x158] */
  eax = (uint32_t)(ebp + 0xfffffea8u);
/* 41966c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41966d: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x419673u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 419673: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419675: je 0x419795 */
  if (zf) goto L_419795;
L_41967b: /* 41967b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41967e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41967f: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 419682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419683: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x419689u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 419689: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41968b: je 0x419795 */
  if (zf) goto L_419795;
L_419691: /* 419691: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 419695: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 419696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419697: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 41969b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41969c: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 4196a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4196a1: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 4196a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4196a6: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 4196aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4196ab: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 4196af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4196b0: call 0x431924 */
  esp -= 4; W32(esp, 0x4196b5u); SPILL(); f_431924(); if (g_unwind) return; RELOAD();
/* 4196b5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4196b8: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 4196bb: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
L_4196be: /* 4196be: cmp dword ptr [ebp - 0x160], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffea0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4196c4: jne 0x4196dc */
  if (!zf) goto L_4196dc;
L_4196c6: /* 4196c6: cmp dword ptr [ebp - 0x15c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffea4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4196cc: jne 0x4196dc */
  if (!zf) goto L_4196dc;
L_4196ce: /* 4196ce: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 4196d1: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 4196d4: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 4196d7: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 4196da: jmp 0x419738 */
  goto L_419738;
L_4196dc: /* 4196dc: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4196df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4196e0: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 4196e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4196e7: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x4196edu); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 4196ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4196ef: je 0x419795 */
  if (zf) goto L_419795;
L_4196f5: /* 4196f5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 4196f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4196f9: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4196fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4196fd: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x419703u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 419703: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419705: je 0x419795 */
  if (zf) goto L_419795;
L_41970b: /* 41970b: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 41970f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 419710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419711: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 419715: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419716: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 41971a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41971b: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 41971f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419720: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 419724: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419725: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 419729: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41972a: call 0x431924 */
  esp -= 4; W32(esp, 0x41972fu); SPILL(); f_431924(); if (g_unwind) return; RELOAD();
/* 41972f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 419732: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 419735: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
L_419738: /* 419738: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 41973b: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x419741u); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
L_419741: /* 419741: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 419744: push dword ptr [ebp - 0x164] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffe9cu)); esp -= 4; W32(esp, v); }
/* 41974a: call 0x419084 */
  esp -= 4; W32(esp, 0x41974fu); SPILL(); f_419084(); if (g_unwind) return; RELOAD();
/* 41974f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419750: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419751: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 419753: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 419754: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 419755: push dword ptr [ebp - 0x148] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffeb8u)); esp -= 4; W32(esp, v); }
/* 41975b: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 41975f: mov word ptr [esi + 8], 1 */
  W16((uint32_t)(esi + 0x8u), 0x1u);
/* 419765: call 0x40518c */
  esp -= 4; W32(esp, 0x41976au); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 41976a: mov ecx, dword ptr [ebp - 0x144] */
  ecx = R32((uint32_t)(ebp + 0xfffffebcu));
/* 419770: xor edi, edi */
  edi = 0;
/* 419772: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 419774: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 419777: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 41977a: adc edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 41977c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41977d: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41977f: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 419782: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 419785: mov word ptr [esi + 4], bx */
  W16((uint32_t)(esi + 0x4u), (ebx & 0xffffu));
/* 419789: mov word ptr [esi + 0xc], bx */
  W16((uint32_t)(esi + 0xcu), (ebx & 0xffffu));
/* 41978d: mov word ptr [esi + 0xa], bx */
  W16((uint32_t)(esi + 0xau), (ebx & 0xffffu));
/* 419791: xor eax, eax */
  eax = 0;
/* 419793: jmp 0x4197ad */
  goto L_4197ad;
L_419795: /* 419795: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x41979bu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 41979b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41979c: call 0x4102b7 */
  esp -= 4; W32(esp, 0x4197a1u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 4197a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4197a2: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4197a5: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x4197abu); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
L_4197ab: /* 4197ab: mov eax, edi */
  eax = edi;
L_4197ad: /* 4197ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4197ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4197af: /* 4197af: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4197b2: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4197b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4197b6: call 0x4013ab */
  esp -= 4; W32(esp, 0x4197bbu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4197bb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4197bc: ret  */
  esp += 4; SPILL(); return;
}
