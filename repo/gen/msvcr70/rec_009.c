#include "recomp.h"
#include "rec_mod.h"

void f_425cea(void) {
  LOAD_REGS();
L_425cea: /* 425cea: call 0x40137f */
  esp -= 4; W32(esp, 0x425cefu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 425cef: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 425cf2: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425cf8: je 0x425cff */
  if (zf) goto L_425cff;
L_425cfa: /* 425cfa: call 0x403c88 */
  esp -= 4; W32(esp, 0x425cffu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_425cff: /* 425cff: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 425d03: shr ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 425d06: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 425d09: test byte ptr [ecx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425d0e: je 0x425d20 */
  if (zf) goto L_425d20;
L_425d10: /* 425d10: movzx ecx, byte ptr [esp + 4] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0x4u)));
/* 425d15: test byte ptr [ecx + eax + 0x1d], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax + 0x1du))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425d1a: je 0x425d20 */
  if (zf) goto L_425d20;
L_425d1c: /* 425d1c: xor eax, eax */
  eax = 0;
/* 425d1e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425d1f: ret  */
  esp += 4; SPILL(); return;
L_425d20: /* 425d20: xor eax, eax */
  eax = 0;
/* 425d22: ret  */
  esp += 4; SPILL(); return;
}

void f_425d23(void) {
  LOAD_REGS();
L_425d23: /* 425d23: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 425d24: mov ebp, esp */
  ebp = esp;
/* 425d26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 425d27: call 0x40137f */
  esp -= 4; W32(esp, 0x425d2cu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 425d2c: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 425d2f: cmp ecx, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425d35: je 0x425d3e */
  if (zf) goto L_425d3e;
L_425d37: /* 425d37: call 0x403c88 */
  esp -= 4; W32(esp, 0x425d3cu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 425d3c: mov ecx, eax */
  ecx = eax;
L_425d3e: /* 425d3e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 425d41: cmp edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 425d47: jbe 0x425d9e */
  if ((cf | zf)) goto L_425d9e;
L_425d49: /* 425d49: and word ptr [ebp - 4], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 425d4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 425d4f: xor eax, eax */
  eax = 0;
/* 425d51: lea edi, [ebp - 2] */
  edi = (uint32_t)(ebp + 0xfffffffeu);
/* 425d54: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 425d56: mov eax, edx */
  eax = edx;
/* 425d58: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 425d5b: cmp dword ptr [ecx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425d5f: mov byte ptr [ebp + 0xa], al */
  W8((uint32_t)(ebp + 0xau), (eax & 0xffu));
/* 425d62: mov byte ptr [ebp + 0xb], dl */
  W8((uint32_t)(ebp + 0xbu), (edx & 0xffu));
/* 425d65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 425d66: jne 0x425d6c */
  if (!zf) goto L_425d6c;
L_425d68: /* 425d68: xor eax, eax */
  eax = 0;
/* 425d6a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425d6b: ret  */
  esp += 4; SPILL(); return;
L_425d6c: /* 425d6c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425d6e: push dword ptr [ecx + 0xc] */
  { uint32_t v = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, v); }
/* 425d71: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 425d74: push dword ptr [ecx + 4] */
  { uint32_t v = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, v); }
/* 425d77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425d78: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 425d7a: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 425d7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425d7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425d80: call 0x40528d */
  esp -= 4; W32(esp, 0x425d85u); SPILL(); f_40528d(); if (g_unwind) return; RELOAD();
/* 425d85: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425d88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425d8a: je 0x425d68 */
  if (zf) goto L_425d68;
L_425d8c: /* 425d8c: cmp word ptr [ebp - 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffeu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 425d91: jne 0x425d68 */
  if (!zf) goto L_425d68;
L_425d93: /* 425d93: test byte ptr [ebp - 4], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425d97: je 0x425d68 */
  if (zf) goto L_425d68;
L_425d99: /* 425d99: xor eax, eax */
  eax = 0;
/* 425d9b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425d9c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425d9d: ret  */
  esp += 4; SPILL(); return;
L_425d9e: /* 425d9e: mov al, byte ptr [ecx + edx + 0x1d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx + 0x1du))) & 0xffu);
/* 425da2: and al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 425da4: sub al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 425da6: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 425da8: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 425daa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425dab: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425dac: ret  */
  esp += 4; SPILL(); return;
}

void f_425dad(void) {
  LOAD_REGS();
L_425dad: /* 425dad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 425dae: mov ebp, esp */
  ebp = esp;
/* 425db0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 425db1: call 0x40137f */
  esp -= 4; W32(esp, 0x425db6u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 425db6: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 425db9: cmp ecx, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425dbf: je 0x425dc8 */
  if (zf) goto L_425dc8;
L_425dc1: /* 425dc1: call 0x403c88 */
  esp -= 4; W32(esp, 0x425dc6u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 425dc6: mov ecx, eax */
  ecx = eax;
L_425dc8: /* 425dc8: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 425dcb: cmp edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 425dd1: jbe 0x425e26 */
  if ((cf | zf)) goto L_425e26;
L_425dd3: /* 425dd3: and word ptr [ebp - 4], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 425dd8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 425dd9: xor eax, eax */
  eax = 0;
/* 425ddb: lea edi, [ebp - 2] */
  edi = (uint32_t)(ebp + 0xfffffffeu);
/* 425dde: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 425de0: mov eax, edx */
  eax = edx;
/* 425de2: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 425de5: cmp dword ptr [ecx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425de9: mov byte ptr [ebp + 0xa], al */
  W8((uint32_t)(ebp + 0xau), (eax & 0xffu));
/* 425dec: mov byte ptr [ebp + 0xb], dl */
  W8((uint32_t)(ebp + 0xbu), (edx & 0xffu));
/* 425def: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 425df0: je 0x425e3c */
  if (zf) goto L_425e3c;
L_425df2: /* 425df2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425df4: push dword ptr [ecx + 0xc] */
  { uint32_t v = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, v); }
/* 425df7: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 425dfa: push dword ptr [ecx + 4] */
  { uint32_t v = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, v); }
/* 425dfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425dfe: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 425e00: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 425e03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425e04: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425e06: call 0x40528d */
  esp -= 4; W32(esp, 0x425e0bu); SPILL(); f_40528d(); if (g_unwind) return; RELOAD();
/* 425e0b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425e0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425e10: je 0x425e3c */
  if (zf) goto L_425e3c;
L_425e12: /* 425e12: cmp word ptr [ebp - 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffeu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 425e17: jne 0x425e3c */
  if (!zf) goto L_425e3c;
L_425e19: /* 425e19: test word ptr [ebp - 4], 0x157 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x157u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 425e1f: je 0x425e3c */
  if (zf) goto L_425e3c;
L_425e21: /* 425e21: xor eax, eax */
  eax = 0;
/* 425e23: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425e24: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425e25: ret  */
  esp += 4; SPILL(); return;
L_425e26: /* 425e26: movzx eax, dl */
  eax = (uint32_t)((edx & 0xffu));
/* 425e29: test word ptr [eax*2 + 0x43926a], 0x157 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax*2 + 0x43926au))); uint16_t b = (uint16_t)(0x157u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 425e33: jne 0x425e21 */
  if (!zf) goto L_425e21;
L_425e35: /* 425e35: test byte ptr [eax + ecx + 0x1d], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx + 0x1du))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425e3a: jne 0x425e21 */
  if (!zf) goto L_425e21;
L_425e3c: /* 425e3c: xor eax, eax */
  eax = 0;
/* 425e3e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425e3f: ret  */
  esp += 4; SPILL(); return;
}

void f_425e40(void) {
  LOAD_REGS();
L_425e40: /* 425e40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 425e41: mov ebp, esp */
  ebp = esp;
/* 425e43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 425e44: call 0x40137f */
  esp -= 4; W32(esp, 0x425e49u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 425e49: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 425e4c: cmp ecx, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425e52: je 0x425e5b */
  if (zf) goto L_425e5b;
L_425e54: /* 425e54: call 0x403c88 */
  esp -= 4; W32(esp, 0x425e59u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 425e59: mov ecx, eax */
  ecx = eax;
L_425e5b: /* 425e5b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 425e5e: cmp edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 425e64: jbe 0x425eb7 */
  if ((cf | zf)) goto L_425eb7;
L_425e66: /* 425e66: and word ptr [ebp - 4], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 425e6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 425e6c: xor eax, eax */
  eax = 0;
/* 425e6e: lea edi, [ebp - 2] */
  edi = (uint32_t)(ebp + 0xfffffffeu);
/* 425e71: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 425e73: mov eax, edx */
  eax = edx;
/* 425e75: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 425e78: cmp dword ptr [ecx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425e7c: mov byte ptr [ebp + 0xa], al */
  W8((uint32_t)(ebp + 0xau), (eax & 0xffu));
/* 425e7f: mov byte ptr [ebp + 0xb], dl */
  W8((uint32_t)(ebp + 0xbu), (edx & 0xffu));
/* 425e82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 425e83: je 0x425ecb */
  if (zf) goto L_425ecb;
L_425e85: /* 425e85: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425e87: push dword ptr [ecx + 0xc] */
  { uint32_t v = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, v); }
/* 425e8a: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 425e8d: push dword ptr [ecx + 4] */
  { uint32_t v = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, v); }
/* 425e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425e91: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 425e93: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 425e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425e97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425e99: call 0x40528d */
  esp -= 4; W32(esp, 0x425e9eu); SPILL(); f_40528d(); if (g_unwind) return; RELOAD();
/* 425e9e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425ea1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425ea3: je 0x425ecb */
  if (zf) goto L_425ecb;
L_425ea5: /* 425ea5: cmp word ptr [ebp - 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffeu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 425eaa: jne 0x425ecb */
  if (!zf) goto L_425ecb;
L_425eac: /* 425eac: test byte ptr [ebp - 4], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425eb0: je 0x425ecb */
  if (zf) goto L_425ecb;
L_425eb2: /* 425eb2: xor eax, eax */
  eax = 0;
/* 425eb4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425eb5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425eb6: ret  */
  esp += 4; SPILL(); return;
L_425eb7: /* 425eb7: movzx eax, dl */
  eax = (uint32_t)((edx & 0xffu));
/* 425eba: test byte ptr [eax*2 + 0x43926a], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax*2 + 0x43926au))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425ec2: jne 0x425eb2 */
  if (!zf) goto L_425eb2;
L_425ec4: /* 425ec4: test byte ptr [eax + ecx + 0x1d], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx + 0x1du))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425ec9: jne 0x425eb2 */
  if (!zf) goto L_425eb2;
L_425ecb: /* 425ecb: xor eax, eax */
  eax = 0;
/* 425ecd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425ece: ret  */
  esp += 4; SPILL(); return;
}

void f_425ecf(void) {
  LOAD_REGS();
L_425ecf: /* 425ecf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 425ed0: mov ebp, esp */
  ebp = esp;
/* 425ed2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 425ed3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 425ed4: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 425ed7: cmp ebx, 0xff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 425edd: jbe 0x425f49 */
  if ((cf | zf)) goto L_425f49;
L_425edf: /* 425edf: and word ptr [ebp - 4], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 425ee4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 425ee5: xor eax, eax */
  eax = 0;
/* 425ee7: lea edi, [ebp - 2] */
  edi = (uint32_t)(ebp + 0xfffffffeu);
/* 425eea: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 425eec: call 0x40137f */
  esp -= 4; W32(esp, 0x425ef1u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 425ef1: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 425ef4: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425efa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 425efb: je 0x425f02 */
  if (zf) goto L_425f02;
L_425efd: /* 425efd: call 0x403c88 */
  esp -= 4; W32(esp, 0x425f02u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_425f02: /* 425f02: mov ecx, ebx */
  ecx = ebx;
/* 425f04: shr ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 425f07: mov byte ptr [ebp + 0xa], cl */
  W8((uint32_t)(ebp + 0xau), (ecx & 0xffu));
/* 425f0a: mov byte ptr [ebp + 0xb], bl */
  W8((uint32_t)(ebp + 0xbu), (ebx & 0xffu));
/* 425f0d: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425f11: jne 0x425f17 */
  if (!zf) goto L_425f17;
L_425f13: /* 425f13: xor eax, eax */
  eax = 0;
/* 425f15: jmp 0x425f50 */
  goto L_425f50;
L_425f17: /* 425f17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425f19: push dword ptr [eax + 0xc] */
  { uint32_t v = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, v); }
/* 425f1c: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 425f1f: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 425f22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425f23: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 425f25: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 425f28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425f29: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425f2b: call 0x40528d */
  esp -= 4; W32(esp, 0x425f30u); SPILL(); f_40528d(); if (g_unwind) return; RELOAD();
/* 425f30: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425f33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425f35: je 0x425f13 */
  if (zf) goto L_425f13;
L_425f37: /* 425f37: cmp word ptr [ebp - 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffeu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 425f3c: jne 0x425f13 */
  if (!zf) goto L_425f13;
L_425f3e: /* 425f3e: test byte ptr [ebp - 4], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425f42: je 0x425f13 */
  if (zf) goto L_425f13;
L_425f44: /* 425f44: xor eax, eax */
  eax = 0;
/* 425f46: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425f47: jmp 0x425f50 */
  goto L_425f50;
L_425f49: /* 425f49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 425f4a: call 0x415488 */
  esp -= 4; W32(esp, 0x425f4fu); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 425f4f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_425f50: /* 425f50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 425f51: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425f52: ret  */
  esp += 4; SPILL(); return;
}

void f_425f53(void) {
  LOAD_REGS();
L_425f53: /* 425f53: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 425f54: mov ebp, esp */
  ebp = esp;
/* 425f56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 425f57: call 0x40137f */
  esp -= 4; W32(esp, 0x425f5cu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 425f5c: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 425f5f: cmp ecx, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425f65: je 0x425f6e */
  if (zf) goto L_425f6e;
L_425f67: /* 425f67: call 0x403c88 */
  esp -= 4; W32(esp, 0x425f6cu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 425f6c: mov ecx, eax */
  ecx = eax;
L_425f6e: /* 425f6e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 425f71: cmp edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 425f77: jbe 0x425fce */
  if ((cf | zf)) goto L_425fce;
L_425f79: /* 425f79: and word ptr [ebp - 4], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 425f7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 425f7f: xor eax, eax */
  eax = 0;
/* 425f81: lea edi, [ebp - 2] */
  edi = (uint32_t)(ebp + 0xfffffffeu);
/* 425f84: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 425f86: mov eax, edx */
  eax = edx;
/* 425f88: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 425f8b: cmp dword ptr [ecx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425f8f: mov byte ptr [ebp + 0xa], al */
  W8((uint32_t)(ebp + 0xau), (eax & 0xffu));
/* 425f92: mov byte ptr [ebp + 0xb], dl */
  W8((uint32_t)(ebp + 0xbu), (edx & 0xffu));
/* 425f95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 425f96: jne 0x425f9c */
  if (!zf) goto L_425f9c;
L_425f98: /* 425f98: xor eax, eax */
  eax = 0;
/* 425f9a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425f9b: ret  */
  esp += 4; SPILL(); return;
L_425f9c: /* 425f9c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425f9e: push dword ptr [ecx + 0xc] */
  { uint32_t v = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, v); }
/* 425fa1: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 425fa4: push dword ptr [ecx + 4] */
  { uint32_t v = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, v); }
/* 425fa7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425fa8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 425faa: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 425fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425fae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425fb0: call 0x40528d */
  esp -= 4; W32(esp, 0x425fb5u); SPILL(); f_40528d(); if (g_unwind) return; RELOAD();
/* 425fb5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425fb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425fba: je 0x425f98 */
  if (zf) goto L_425f98;
L_425fbc: /* 425fbc: cmp word ptr [ebp - 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffeu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 425fc1: jne 0x425f98 */
  if (!zf) goto L_425f98;
L_425fc3: /* 425fc3: test byte ptr [ebp - 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425fc7: je 0x425f98 */
  if (zf) goto L_425f98;
L_425fc9: /* 425fc9: xor eax, eax */
  eax = 0;
/* 425fcb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425fcc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425fcd: ret  */
  esp += 4; SPILL(); return;
L_425fce: /* 425fce: mov al, byte ptr [ecx + edx + 0x1d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx + 0x1du))) & 0xffu);
/* 425fd2: and al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 425fd4: sub al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 425fd6: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 425fd8: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 425fda: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425fdb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425fdc: ret  */
  esp += 4; SPILL(); return;
}

void f_425fdd(void) {
  LOAD_REGS();
L_425fdd: /* 425fdd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 425fde: mov ebp, esp */
  ebp = esp;
/* 425fe0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 425fe3: cmp dword ptr [edx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425fe7: je 0x426011 */
  if (zf) goto L_426011;
L_425fe9: /* 425fe9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 425fec: jmp 0x42600c */
  goto L_42600c;
L_425fee: /* 425fee: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 425ff0: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425ff2: je 0x426011 */
  if (zf) goto L_426011;
L_425ff4: /* 425ff4: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 425ff7: test byte ptr [ecx + edx + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + edx + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425ffc: je 0x42600b */
  if (zf) goto L_42600b;
L_425ffe: /* 425ffe: mov ecx, eax */
  ecx = eax;
/* 426000: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 426001: cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426004: je 0x426015 */
  if (zf) goto L_426015;
L_426006: /* 426006: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426009: je 0x426011 */
  if (zf) goto L_426011;
L_42600b: /* 42600b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_42600c: /* 42600c: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42600f: jbe 0x425fee */
  if ((cf | zf)) goto L_425fee;
L_426011: /* 426011: xor eax, eax */
  eax = 0;
/* 426013: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 426014: ret  */
  esp += 4; SPILL(); return;
L_426015: /* 426015: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 426018: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 426019: ret  */
  esp += 4; SPILL(); return;
}

void f_42601a(void) {
  LOAD_REGS();
L_42601a: /* 42601a: call 0x40137f */
  esp -= 4; W32(esp, 0x42601fu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42601f: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 426022: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426028: je 0x42602f */
  if (zf) goto L_42602f;
L_42602a: /* 42602a: call 0x403c88 */
  esp -= 4; W32(esp, 0x42602fu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_42602f: /* 42602f: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 426033: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 426037: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 426038: call 0x425fdd */
  esp -= 4; W32(esp, 0x42603du); SPILL(); f_425fdd(); if (g_unwind) return; RELOAD();
/* 42603d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426040: ret  */
  esp += 4; SPILL(); return;
}

void f_426041(void) {
  LOAD_REGS();
L_426041: /* 426041: call 0x40137f */
  esp -= 4; W32(esp, 0x426046u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 426046: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 426049: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42604f: je 0x426056 */
  if (zf) goto L_426056;
L_426051: /* 426051: call 0x403c88 */
  esp -= 4; W32(esp, 0x426056u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_426056: /* 426056: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42605a: je 0x426085 */
  if (zf) goto L_426085;
L_42605c: /* 42605c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 426060: jmp 0x42607f */
  goto L_42607f;
L_426062: /* 426062: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 426064: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426066: je 0x426085 */
  if (zf) goto L_426085;
L_426068: /* 426068: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 42606b: test byte ptr [edx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426070: je 0x42607e */
  if (zf) goto L_42607e;
L_426072: /* 426072: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 426073: cmp ecx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426077: je 0x426088 */
  if (zf) goto L_426088;
L_426079: /* 426079: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42607c: je 0x426085 */
  if (zf) goto L_426085;
L_42607e: /* 42607e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_42607f: /* 42607f: cmp ecx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426083: jbe 0x426062 */
  if ((cf | zf)) goto L_426062;
L_426085: /* 426085: xor eax, eax */
  eax = 0;
/* 426087: ret  */
  esp += 4; SPILL(); return;
L_426088: /* 426088: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42608b: ret  */
  esp += 4; SPILL(); return;
}

void f_42608c(void) {
  LOAD_REGS();
L_42608c: /* 42608c: cmp dword ptr [0x44b13c], 0x3a4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b13cu))); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426096: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 42609a: jne 0x4260f0 */
  if (!zf) goto L_4260f0;
L_42609c: /* 42609c: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42609f: jb 0x4260af */
  if (cf) goto L_4260af;
L_4260a1: /* 4260a1: cmp eax, 0x7e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4260a4: ja 0x4260af */
  if ((!cf && !zf)) goto L_4260af;
L_4260a6: /* 4260a6: movzx eax, word ptr [eax*2 + 0x44dd28] */
  eax = (uint32_t)(R16((uint32_t)(eax*2 + 0x44dd28u)));
/* 4260ae: ret  */
  esp += 4; SPILL(); return;
L_4260af: /* 4260af: cmp eax, 0xdc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4260b4: jne 0x4260bc */
  if (!zf) goto L_4260bc;
L_4260b6: /* 4260b6: mov eax, 0x838f */
  eax = 0x838fu;
/* 4260bb: ret  */
  esp += 4; SPILL(); return;
L_4260bc: /* 4260bc: cmp eax, 0xa1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4260c1: jb 0x4260f0 */
  if (cf) goto L_4260f0;
L_4260c3: /* 4260c3: cmp eax, 0xdf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4260c8: ja 0x4260f0 */
  if ((!cf && !zf)) goto L_4260f0;
L_4260ca: /* 4260ca: mov cl, byte ptr [0x44de28] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0x44de28u))) & 0xffu);
/* 4260d0: xor edx, edx */
  edx = 0;
/* 4260d2: jmp 0x4260e3 */
  goto L_4260e3;
L_4260d4: /* 4260d4: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 4260d7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4260d9: je 0x4260e8 */
  if (zf) goto L_4260e8;
L_4260db: /* 4260db: mov cl, byte ptr [edx*4 + 0x44de2c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx*4 + 0x44de2cu))) & 0xffu);
/* 4260e2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_4260e3: /* 4260e3: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4260e5: jne 0x4260d4 */
  if (!zf) goto L_4260d4;
L_4260e7: /* 4260e7: ret  */
  esp += 4; SPILL(); return;
L_4260e8: /* 4260e8: movzx eax, word ptr [edx*4 + 0x44de2a] */
  eax = (uint32_t)(R16((uint32_t)(edx*4 + 0x44de2au)));
L_4260f0: /* 4260f0: ret  */
  esp += 4; SPILL(); return;
}

void f_4260f1(void) {
  LOAD_REGS();
L_4260f1: /* 4260f1: cmp dword ptr [0x44b13c], 0x3a4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b13cu))); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4260fb: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4260ff: jne 0x426167 */
  if (!zf) goto L_426167;
L_426101: /* 426101: xor ecx, ecx */
  ecx = 0;
L_426103: /* 426103: movzx edx, word ptr [ecx*2 + 0x44dd68] */
  edx = (uint32_t)(R16((uint32_t)(ecx*2 + 0x44dd68u)));
/* 42610b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42610d: je 0x42615a */
  if (zf) goto L_42615a;
L_42610f: /* 42610f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 426110: cmp ecx, 0x5e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 426113: jle 0x426103 */
  if ((zf || sf != of)) goto L_426103;
L_426115: /* 426115: cmp eax, 0x8396 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8396u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42611a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42611b: ja 0x426166 */
  if ((!cf && !zf)) goto L_426166;
L_42611d: /* 42611d: xor esi, esi */
  esi = 0;
/* 42611f: cmp byte ptr [0x44de28], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44de28u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426126: je 0x426166 */
  if (zf) goto L_426166;
L_426128: /* 426128: movzx edx, word ptr [esi*4 + 0x44de2a] */
  edx = (uint32_t)(R16((uint32_t)(esi*4 + 0x44de2au)));
/* 426130: mov ecx, eax */
  ecx = eax;
/* 426132: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 426134: je 0x42615e */
  if (zf) goto L_42615e;
L_426136: /* 426136: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 426138: test dh, 0xff */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42613b: jne 0x42614d */
  if (!zf) goto L_42614d;
L_42613d: /* 42613d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 42613f: jle 0x42614d */
  if ((zf || sf != of)) goto L_42614d;
L_426141: /* 426141: movsx edx, byte ptr [esi*4 + 0x44de29] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi*4 + 0x44de29u)));
/* 426149: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 42614b: js 0x42615e */
  if (sf) goto L_42615e;
L_42614d: /* 42614d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42614e: cmp byte ptr [esi*4 + 0x44de28], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi*4 + 0x44de28u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426156: jne 0x426128 */
  if (!zf) goto L_426128;
L_426158: /* 426158: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426159: ret  */
  esp += 4; SPILL(); return;
L_42615a: /* 42615a: lea eax, [ecx + 0x20] */
  eax = (uint32_t)(ecx + 0x20u);
/* 42615d: ret  */
  esp += 4; SPILL(); return;
L_42615e: /* 42615e: movzx eax, byte ptr [esi*4 + 0x44de28] */
  eax = (uint32_t)(R8((uint32_t)(esi*4 + 0x44de28u)));
L_426166: /* 426166: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_426167: /* 426167: ret  */
  esp += 4; SPILL(); return;
}

void f_426168(void) {
  LOAD_REGS();
L_426168: /* 426168: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 426169: mov ebp, esp */
  ebp = esp;
/* 42616b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 42616e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 426171: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 426172: movzx eax, byte ptr [ebp + 0xc] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xcu)));
/* 426176: je 0x4261a0 */
  if (zf) goto L_4261a0;
L_426178: /* 426178: mov cl, byte ptr [eax + ecx + 0x1d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x1du))) & 0xffu);
/* 42617c: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42617f: je 0x426186 */
  if (zf) goto L_426186;
L_426181: /* 426181: xor eax, eax */
  eax = 0;
/* 426183: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 426184: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 426185: ret  */
  esp += 4; SPILL(); return;
L_426186: /* 426186: test word ptr [eax*2 + 0x43926a], 0x157 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax*2 + 0x43926au))); uint16_t b = (uint16_t)(0x157u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 426190: jne 0x42619c */
  if (!zf) goto L_42619c;
L_426192: /* 426192: test cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426195: jne 0x42619c */
  if (!zf) goto L_42619c;
L_426197: /* 426197: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42619a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 42619b: ret  */
  esp += 4; SPILL(); return;
L_42619c: /* 42619c: xor eax, eax */
  eax = 0;
/* 42619e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 42619f: ret  */
  esp += 4; SPILL(); return;
L_4261a0: /* 4261a0: mov al, byte ptr [eax + ecx + 0x1d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x1du))) & 0xffu);
/* 4261a4: and al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4261a6: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4261a8: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4261aa: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4261ad: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4261ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4261af: ret  */
  esp += 4; SPILL(); return;
}

void f_4261b0(void) {
  LOAD_REGS();
L_4261b0: /* 4261b0: call 0x40137f */
  esp -= 4; W32(esp, 0x4261b5u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4261b5: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 4261b8: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4261be: je 0x4261c5 */
  if (zf) goto L_4261c5;
L_4261c0: /* 4261c0: call 0x403c88 */
  esp -= 4; W32(esp, 0x4261c5u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_4261c5: /* 4261c5: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4261c9: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4261cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4261ce: call 0x426168 */
  esp -= 4; W32(esp, 0x4261d3u); SPILL(); f_426168(); if (g_unwind) return; RELOAD();
/* 4261d3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4261d6: ret  */
  esp += 4; SPILL(); return;
}

void f_4261d7(void) {
  LOAD_REGS();
L_4261d7: /* 4261d7: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4261db: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4261dd: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4261e1: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 4261e3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 4261e6: test byte ptr [edx + 0x449341], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x449341u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4261ed: je 0x4261f5 */
  if (zf) goto L_4261f5;
L_4261ef: /* 4261ef: mov al, byte ptr [eax + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 4261f2: mov byte ptr [ecx + 1], al */
  W8((uint32_t)(ecx + 0x1u), (eax & 0xffu));
L_4261f5: /* 4261f5: ret  */
  esp += 4; SPILL(); return;
}

void f_4261f6(void) {
  LOAD_REGS();
L_4261f6: /* 4261f6: cmp dword ptr [0x44b13c], 0x3a4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b13cu))); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426200: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 426204: jne 0x426257 */
  if (!zf) goto L_426257;
L_426206: /* 426206: movzx ecx, ah */
  ecx = (uint32_t)(((eax >> 8) & 0xffu));
/* 426209: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42620e: cmp ecx, 0x21 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x21u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 426211: mov edx, eax */
  edx = eax;
/* 426213: jb 0x426255 */
  if (cf) goto L_426255;
L_426215: /* 426215: cmp ecx, 0x7e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426218: ja 0x426255 */
  if ((!cf && !zf)) goto L_426255;
L_42621a: /* 42621a: cmp edx, 0x21 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x21u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42621d: jb 0x426255 */
  if (cf) goto L_426255;
L_42621f: /* 42621f: cmp edx, 0x7e */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426222: ja 0x426255 */
  if ((!cf && !zf)) goto L_426255;
L_426224: /* 426224: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426227: je 0x426238 */
  if (zf) goto L_426238;
L_426229: /* 426229: cmp edx, 0x5f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42622c: ja 0x426233 */
  if ((!cf && !zf)) goto L_426233;
L_42622e: /* 42622e: add edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 426231: jmp 0x42623b */
  goto L_42623b;
L_426233: /* 426233: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 426236: jmp 0x42623b */
  goto L_42623b;
L_426238: /* 426238: add edx, 0x7e */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7eu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_42623b: /* 42623b: lea eax, [ecx - 0x21] */
  eax = (uint32_t)(ecx + 0xffffffdfu);
/* 42623e: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 426240: add eax, 0x81 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x81u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 426245: cmp eax, 0x9f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42624a: jbe 0x42624f */
  if ((cf | zf)) goto L_42624f;
L_42624c: /* 42624c: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_42624f: /* 42624f: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 426252: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 426254: ret  */
  esp += 4; SPILL(); return;
L_426255: /* 426255: xor eax, eax */
  eax = 0;
L_426257: /* 426257: ret  */
  esp += 4; SPILL(); return;
}

void f_426258(void) {
  LOAD_REGS();
L_426258: /* 426258: call 0x40137f */
  esp -= 4; W32(esp, 0x42625du); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42625d: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 426260: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426266: je 0x42626d */
  if (zf) goto L_42626d;
L_426268: /* 426268: call 0x403c88 */
  esp -= 4; W32(esp, 0x42626du); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_42626d: /* 42626d: cmp dword ptr [eax + 4], 0x3a4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426274: je 0x42627b */
  if (zf) goto L_42627b;
L_426276: /* 426276: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 42627a: ret  */
  esp += 4; SPILL(); return;
L_42627b: /* 42627b: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 42627f: movzx ecx, dh */
  ecx = (uint32_t)(((edx >> 8) & 0xffu));
/* 426282: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426283: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426284: movzx edi, cl */
  edi = (uint32_t)((ecx & 0xffu));
/* 426287: mov esi, 0xff */
  esi = 0xffu;
/* 42628c: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 42628e: test byte ptr [edi + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426293: je 0x4262fd */
  if (zf) goto L_4262fd;
L_426295: /* 426295: movzx edi, dl */
  edi = (uint32_t)((edx & 0xffu));
/* 426298: test byte ptr [edi + eax + 0x1d], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + eax + 0x1du))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42629d: je 0x4262fd */
  if (zf) goto L_4262fd;
L_42629f: /* 42629f: cmp ecx, 0xa0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4262a5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4262a7: and eax, 0xffffffc0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4262aa: add eax, 0xc1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4262af: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4262b1: cmp edx, 0x9f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x9fu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4262b7: jb 0x4262c6 */
  if (cf) goto L_4262c6;
L_4262b9: /* 4262b9: lea eax, [ecx + 0x11] */
  eax = (uint32_t)(ecx + 0x11u);
/* 4262bc: shl eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4262bf: add edx, -0x7e */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffff82u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4262c2: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4262c4: jmp 0x4262e1 */
  goto L_4262e1;
L_4262c6: /* 4262c6: push 0x7e */
  { uint32_t v = 0x7eu; esp -= 4; W32(esp, v); }
/* 4262c8: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4262c9: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4262cb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4262cd: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4262cf: add eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4262d2: shl ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 4262d5: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 4262d7: add ecx, 0x2100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4262dd: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 4262df: mov eax, edx */
  eax = edx;
L_4262e1: /* 4262e1: cmp eax, 0x7e7e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7e7eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4262e6: ja 0x4262fd */
  if ((!cf && !zf)) goto L_4262fd;
L_4262e8: /* 4262e8: cmp eax, 0x2121 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2121u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4262ed: jb 0x4262fd */
  if (cf) goto L_4262fd;
L_4262ef: /* 4262ef: mov ecx, eax */
  ecx = eax;
/* 4262f1: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4262f3: cmp ecx, 0x7e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4262f6: ja 0x4262fd */
  if ((!cf && !zf)) goto L_4262fd;
L_4262f8: /* 4262f8: cmp ecx, 0x21 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x21u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4262fb: jae 0x4262ff */
  if (!cf) goto L_4262ff;
L_4262fd: /* 4262fd: xor eax, eax */
  eax = 0;
L_4262ff: /* 4262ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 426300: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426301: ret  */
  esp += 4; SPILL(); return;
}

void f_426302(void) {
  LOAD_REGS();
L_426302: /* 426302: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 426306: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 426309: test byte ptr [eax + 0x449341], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x449341u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426310: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 426312: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 426313: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 426316: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 426317: ret  */
  esp += 4; SPILL(); return;
}

void f_426318(void) {
  LOAD_REGS();
L_426318: /* 426318: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426319: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 42631d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42631e: call 0x425ba4 */
  esp -= 4; W32(esp, 0x426323u); SPILL(); f_425ba4(); if (g_unwind) return; RELOAD();
/* 426323: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426325: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 426326: je 0x426346 */
  if (zf) goto L_426346;
L_426328: /* 426328: cmp esi, 0x8393 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8393u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42632e: ja 0x426346 */
  if ((!cf && !zf)) goto L_426346;
L_426330: /* 426330: cmp esi, 0x837f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x837fu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 426336: jae 0x426340 */
  if (!cf) goto L_426340;
L_426338: /* 426338: sub esi, 0xa1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xa1u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 42633e: jmp 0x426346 */
  goto L_426346;
L_426340: /* 426340: sub esi, 0xa2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xa2u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_426346: /* 426346: mov eax, esi */
  eax = esi;
/* 426348: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426349: ret  */
  esp += 4; SPILL(); return;
}

void f_42634a(void) {
  LOAD_REGS();
L_42634a: /* 42634a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42634b: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 42634f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426350: call 0x425b7d */
  esp -= 4; W32(esp, 0x426355u); SPILL(); f_425b7d(); if (g_unwind) return; RELOAD();
/* 426355: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426357: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 426358: je 0x426369 */
  if (zf) goto L_426369;
L_42635a: /* 42635a: add esi, 0xa1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xa1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 426360: cmp esi, 0x837f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x837fu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 426366: jb 0x426369 */
  if (cf) goto L_426369;
L_426368: /* 426368: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_426369: /* 426369: mov eax, esi */
  eax = esi;
/* 42636b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42636c: ret  */
  esp += 4; SPILL(); return;
}

void f_42636d(void) {
  LOAD_REGS();
L_42636d: /* 42636d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42636e: mov ebp, esp */
  ebp = esp;
/* 426370: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 426371: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 426372: call 0x40137f */
  esp -= 4; W32(esp, 0x426377u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 426377: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 42637a: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426380: je 0x426387 */
  if (zf) goto L_426387;
L_426382: /* 426382: call 0x403c88 */
  esp -= 4; W32(esp, 0x426387u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_426387: /* 426387: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 426388: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 42638b: cmp ebx, 0xff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426391: jbe 0x4263dc */
  if ((cf | zf)) goto L_4263dc;
L_426393: /* 426393: mov ecx, ebx */
  ecx = ebx;
/* 426395: shr ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 426398: mov byte ptr [ebp - 4], cl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ecx & 0xffu));
/* 42639b: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 42639e: mov byte ptr [ebp - 3], bl */
  W8((uint32_t)(ebp + 0xfffffffdu), (ebx & 0xffu));
/* 4263a1: test byte ptr [ecx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4263a6: je 0x4263ed */
  if (zf) goto L_4263ed;
L_4263a8: /* 4263a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4263aa: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 4263ad: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4263b0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4263b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4263b3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4263b5: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 4263b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4263b9: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 4263be: push dword ptr [eax + 0xc] */
  { uint32_t v = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, v); }
/* 4263c1: call 0x40462b */
  esp -= 4; W32(esp, 0x4263c6u); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 4263c6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4263c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4263cb: je 0x4263ed */
  if (zf) goto L_4263ed;
L_4263cd: /* 4263cd: movzx eax, byte ptr [ebp - 8] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xfffffff8u)));
/* 4263d1: movzx ecx, byte ptr [ebp - 7] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffff9u)));
/* 4263d5: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4263d8: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4263da: jmp 0x4263ef */
  goto L_4263ef;
L_4263dc: /* 4263dc: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4263de: test byte ptr [eax + 0x1d], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1du))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4263e2: je 0x4263ed */
  if (zf) goto L_4263ed;
L_4263e4: /* 4263e4: movsx eax, byte ptr [eax + 0x11d] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0x11du)));
/* 4263eb: jmp 0x4263ef */
  goto L_4263ef;
L_4263ed: /* 4263ed: mov eax, ebx */
  eax = ebx;
L_4263ef: /* 4263ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4263f0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4263f1: ret  */
  esp += 4; SPILL(); return;
}

void f_4263f2(void) {
  LOAD_REGS();
L_4263f2: /* 4263f2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4263f3: mov ebp, esp */
  ebp = esp;
/* 4263f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4263f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4263f7: call 0x40137f */
  esp -= 4; W32(esp, 0x4263fcu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4263fc: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 4263ff: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426405: je 0x42640c */
  if (zf) goto L_42640c;
L_426407: /* 426407: call 0x403c88 */
  esp -= 4; W32(esp, 0x42640cu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_42640c: /* 42640c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42640d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 426410: cmp ebx, 0xff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426416: jbe 0x426461 */
  if ((cf | zf)) goto L_426461;
L_426418: /* 426418: mov ecx, ebx */
  ecx = ebx;
/* 42641a: shr ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 42641d: mov byte ptr [ebp - 4], cl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ecx & 0xffu));
/* 426420: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 426423: mov byte ptr [ebp - 3], bl */
  W8((uint32_t)(ebp + 0xfffffffdu), (ebx & 0xffu));
/* 426426: test byte ptr [ecx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42642b: je 0x426472 */
  if (zf) goto L_426472;
L_42642d: /* 42642d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42642f: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 426432: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 426435: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 426437: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 426438: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42643a: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 42643d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42643e: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 426443: push dword ptr [eax + 0xc] */
  { uint32_t v = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, v); }
/* 426446: call 0x40462b */
  esp -= 4; W32(esp, 0x42644bu); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 42644b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42644e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426450: je 0x426472 */
  if (zf) goto L_426472;
L_426452: /* 426452: movzx eax, byte ptr [ebp - 8] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xfffffff8u)));
/* 426456: movzx ecx, byte ptr [ebp - 7] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffff9u)));
/* 42645a: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42645d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42645f: jmp 0x426474 */
  goto L_426474;
L_426461: /* 426461: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 426463: test byte ptr [eax + 0x1d], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1du))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426467: je 0x426472 */
  if (zf) goto L_426472;
L_426469: /* 426469: movsx eax, byte ptr [eax + 0x11d] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0x11du)));
/* 426470: jmp 0x426474 */
  goto L_426474;
L_426472: /* 426472: mov eax, ebx */
  eax = ebx;
L_426474: /* 426474: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 426475: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 426476: ret  */
  esp += 4; SPILL(); return;
}

void f_426477(void) {
  LOAD_REGS();
L_426477: /* 426477: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426478: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 42647c: cmp dword ptr [edi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426480: jne 0x426486 */
  if (!zf) goto L_426486;
L_426482: /* 426482: xor eax, eax */
  eax = 0;
/* 426484: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 426485: ret  */
  esp += 4; SPILL(); return;
L_426486: /* 426486: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426487: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 42648b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_42648e: /* 42648e: xor ecx, ecx */
  ecx = 0;
/* 426490: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 426492: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426494: je 0x4264b0 */
  if (zf) goto L_4264b0;
L_426496: /* 426496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 426497: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 426498: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426499: call 0x426168 */
  esp -= 4; W32(esp, 0x42649eu); SPILL(); f_426168(); if (g_unwind) return; RELOAD();
/* 42649e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 4264a2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4264a5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4264a6: dec dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 4264aa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4264ac: jne 0x42648e */
  if (!zf) goto L_42648e;
L_4264ae: /* 4264ae: jmp 0x4264b3 */
  goto L_4264b3;
L_4264b0: /* 4264b0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4264b3: /* 4264b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4264b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4264b5: ret  */
  esp += 4; SPILL(); return;
}

void f_4264b6(void) {
  LOAD_REGS();
L_4264b6: /* 4264b6: call 0x40137f */
  esp -= 4; W32(esp, 0x4264bbu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4264bb: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 4264be: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4264c4: je 0x4264cb */
  if (zf) goto L_4264cb;
L_4264c6: /* 4264c6: call 0x403c88 */
  esp -= 4; W32(esp, 0x4264cbu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_4264cb: /* 4264cb: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4264cf: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4264d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4264d4: call 0x426477 */
  esp -= 4; W32(esp, 0x4264d9u); SPILL(); f_426477(); if (g_unwind) return; RELOAD();
/* 4264d9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4264dc: ret  */
  esp += 4; SPILL(); return;
}

void f_4264dd(void) {
  LOAD_REGS();
L_4264dd: /* 4264dd: call 0x40137f */
  esp -= 4; W32(esp, 0x4264e2u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4264e2: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 4264e5: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4264eb: je 0x4264f2 */
  if (zf) goto L_4264f2;
L_4264ed: /* 4264ed: call 0x403c88 */
  esp -= 4; W32(esp, 0x4264f2u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_4264f2: /* 4264f2: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 4264f5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4264f7: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4264fb: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4264fd: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 426501: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 426503: push dword ptr [eax + 0xc] */
  { uint32_t v = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, v); }
/* 426506: call 0x4038f9 */
  esp -= 4; W32(esp, 0x42650bu); SPILL(); f_4038f9(); if (g_unwind) return; RELOAD();
/* 42650b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42650e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426510: jne 0x426518 */
  if (!zf) goto L_426518;
L_426512: /* 426512: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 426517: ret  */
  esp += 4; SPILL(); return;
L_426518: /* 426518: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42651b: ret  */
  esp += 4; SPILL(); return;
}

void f_42651c(void) {
  LOAD_REGS();
L_42651c: /* 42651c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42651d: mov ebp, esp */
  ebp = esp;
/* 42651f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 426520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426521: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 426524: xor ebx, ebx */
  ebx = 0;
/* 426526: cmp dword ptr [esi + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426529: jne 0x42653a */
  if (!zf) goto L_42653a;
L_42652b: /* 42652b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42652e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 426531: call 0x407848 */
  esp -= 4; W32(esp, 0x426536u); SPILL(); f_407848(); if (g_unwind) return; RELOAD();
/* 426536: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 426537: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 426538: jmp 0x42658f */
  goto L_42658f;
L_42653a: /* 42653a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42653d: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42653f: je 0x42658c */
  if (zf) goto L_42658c;
L_426541: /* 426541: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_426542: /* 426542: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 426545: jmp 0x42656f */
  goto L_42656f;
L_426547: /* 426547: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 426549: movzx edi, dl */
  edi = (uint32_t)((edx & 0xffu));
/* 42654c: test byte ptr [edi + esi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + esi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426551: je 0x42656a */
  if (zf) goto L_42656a;
L_426553: /* 426553: cmp dl, byte ptr [eax] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426555: jne 0x42655f */
  if (!zf) goto L_42655f;
L_426557: /* 426557: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 42655a: cmp dl, byte ptr [eax + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42655d: je 0x426573 */
  if (zf) goto L_426573;
L_42655f: /* 42655f: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 426562: cmp byte ptr [edx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426564: je 0x426573 */
  if (zf) goto L_426573;
L_426566: /* 426566: mov ecx, edx */
  ecx = edx;
/* 426568: jmp 0x42656e */
  goto L_42656e;
L_42656a: /* 42656a: cmp dl, byte ptr [eax] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42656c: je 0x426573 */
  if (zf) goto L_426573;
L_42656e: /* 42656e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_42656f: /* 42656f: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426571: jne 0x426547 */
  if (!zf) goto L_426547;
L_426573: /* 426573: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426575: jne 0x42658b */
  if (!zf) goto L_42658b;
L_426577: /* 426577: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 42657a: test byte ptr [ecx + esi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + esi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42657f: je 0x426586 */
  if (zf) goto L_426586;
L_426581: /* 426581: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 426582: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426584: je 0x42658b */
  if (zf) goto L_42658b;
L_426586: /* 426586: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 426587: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426589: jne 0x426542 */
  if (!zf) goto L_426542;
L_42658b: /* 42658b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_42658c: /* 42658c: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_42658f: /* 42658f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426590: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 426591: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 426592: ret  */
  esp += 4; SPILL(); return;
}

void f_426593(void) {
  LOAD_REGS();
L_426593: /* 426593: call 0x40137f */
  esp -= 4; W32(esp, 0x426598u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 426598: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 42659b: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4265a1: je 0x4265a8 */
  if (zf) goto L_4265a8;
L_4265a3: /* 4265a3: call 0x403c88 */
  esp -= 4; W32(esp, 0x4265a8u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_4265a8: /* 4265a8: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4265ac: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4265b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4265b1: call 0x42651c */
  esp -= 4; W32(esp, 0x4265b6u); SPILL(); f_42651c(); if (g_unwind) return; RELOAD();
/* 4265b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4265b9: ret  */
  esp += 4; SPILL(); return;
}

void f_4265ba(void) {
  LOAD_REGS();
L_4265ba: /* 4265ba: call 0x40137f */
  esp -= 4; W32(esp, 0x4265bfu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4265bf: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 4265c2: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4265c8: je 0x4265cf */
  if (zf) goto L_4265cf;
L_4265ca: /* 4265ca: call 0x403c88 */
  esp -= 4; W32(esp, 0x4265cfu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_4265cf: /* 4265cf: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 4265d2: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4265d4: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4265d8: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4265da: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4265de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4265e0: push dword ptr [eax + 0xc] */
  { uint32_t v = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, v); }
/* 4265e3: call 0x4038f9 */
  esp -= 4; W32(esp, 0x4265e8u); SPILL(); f_4038f9(); if (g_unwind) return; RELOAD();
/* 4265e8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4265eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4265ed: jne 0x4265f5 */
  if (!zf) goto L_4265f5;
L_4265ef: /* 4265ef: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 4265f4: ret  */
  esp += 4; SPILL(); return;
L_4265f5: /* 4265f5: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4265f8: ret  */
  esp += 4; SPILL(); return;
}

void f_4265f9(void) {
  LOAD_REGS();
L_4265f9: /* 4265f9: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4265fd: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 426600: mov cl, byte ptr [ecx + 0x449341] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x449341u))) & 0xffu);
/* 426606: and cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 426609: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42660a: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42660c: je 0x42660f */
  if (zf) goto L_42660f;
L_42660e: /* 42660e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_42660f: /* 42660f: ret  */
  esp += 4; SPILL(); return;
}

void f_426610(void) {
  LOAD_REGS();
L_426610: /* 426610: call 0x40137f */
  esp -= 4; W32(esp, 0x426615u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 426615: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 426618: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42661e: je 0x426625 */
  if (zf) goto L_426625;
L_426620: /* 426620: call 0x403c88 */
  esp -= 4; W32(esp, 0x426625u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_426625: /* 426625: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426629: je 0x402493 */
  if (zf) { SPILL(); hle_strlen(); return; }
L_42662f: /* 42662f: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 426633: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426634: xor esi, esi */
  esi = 0;
/* 426636: jmp 0x42664a */
  goto L_42664a;
L_426638: /* 426638: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 42663b: test byte ptr [edx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426640: je 0x426648 */
  if (zf) goto L_426648;
L_426642: /* 426642: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 426643: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426646: je 0x426650 */
  if (zf) goto L_426650;
L_426648: /* 426648: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 426649: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_42664a: /* 42664a: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 42664c: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42664e: jne 0x426638 */
  if (!zf) goto L_426638;
L_426650: /* 426650: mov eax, esi */
  eax = esi;
/* 426652: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426653: ret  */
  esp += 4; SPILL(); return;
}

void f_426654(void) {
  LOAD_REGS();
L_426654: /* 426654: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 426655: mov ebp, esp */
  ebp = esp;
/* 426657: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 426658: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426659: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42665a: call 0x40137f */
  esp -= 4; W32(esp, 0x42665fu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42665f: mov edi, dword ptr [eax + 0x60] */
  edi = R32((uint32_t)(eax + 0x60u));
/* 426662: cmp edi, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426668: je 0x426671 */
  if (zf) goto L_426671;
L_42666a: /* 42666a: call 0x403c88 */
  esp -= 4; W32(esp, 0x42666fu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 42666f: mov edi, eax */
  edi = eax;
L_426671: /* 426671: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 426674: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426677: mov esi, ebx */
  esi = ebx;
/* 426679: je 0x4266ce */
  if (zf) goto L_4266ce;
L_42667b: /* 42667b: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 42667e: lea eax, [ecx + edi] */
  eax = (uint32_t)(ecx + edi);
/* 426681: mov dl, byte ptr [eax + 0x1d] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1du))) & 0xffu);
/* 426684: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426687: je 0x4266ba */
  if (zf) goto L_4266ba;
L_426689: /* 426689: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42668b: push dword ptr [edi + 4] */
  { uint32_t v = R32((uint32_t)(edi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42668e: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 426691: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 426693: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 426694: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 426696: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426697: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 42669c: push dword ptr [edi + 0xc] */
  { uint32_t v = R32((uint32_t)(edi + 0xcu)); esp -= 4; W32(esp, v); }
/* 42669f: call 0x40462b */
  esp -= 4; W32(esp, 0x4266a4u); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 4266a4: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4266a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4266a9: je 0x4266d5 */
  if (zf) goto L_4266d5;
L_4266ab: /* 4266ab: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4266ae: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4266b1: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 4266b3: jle 0x4266c8 */
  if ((zf || sf != of)) goto L_4266c8;
L_4266b5: /* 4266b5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4266b6: mov byte ptr [esi], ch */
  W8((uint32_t)(esi), ((ecx >> 8) & 0xffu));
/* 4266b8: jmp 0x4266c8 */
  goto L_4266c8;
L_4266ba: /* 4266ba: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4266bd: je 0x4266c6 */
  if (zf) goto L_4266c6;
L_4266bf: /* 4266bf: movsx ecx, byte ptr [eax + 0x11d] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0x11du)));
L_4266c6: /* 4266c6: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
L_4266c8: /* 4266c8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4266c9: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4266cc: jne 0x42667b */
  if (!zf) goto L_42667b;
L_4266ce: /* 4266ce: mov eax, ebx */
  eax = ebx;
L_4266d0: /* 4266d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4266d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4266d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4266d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4266d4: ret  */
  esp += 4; SPILL(); return;
L_4266d5: /* 4266d5: xor eax, eax */
  eax = 0;
/* 4266d7: jmp 0x4266d0 */
  goto L_4266d0;
}

void f_4266d9(void) {
  LOAD_REGS();
L_4266d9: /* 4266d9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4266da: mov ebp, esp */
  ebp = esp;
/* 4266dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4266dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4266de: call 0x40137f */
  esp -= 4; W32(esp, 0x4266e3u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4266e3: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 4266e6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4266e8: mov edi, dword ptr [eax + 0x60] */
  edi = R32((uint32_t)(eax + 0x60u));
/* 4266eb: jne 0x4266f5 */
  if (!zf) goto L_4266f5;
L_4266ed: /* 4266ed: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4266f0: jmp 0x4267a5 */
  goto L_4267a5;
L_4266f5: /* 4266f5: cmp edi, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4266fb: je 0x426704 */
  if (zf) goto L_426704;
L_4266fd: /* 4266fd: call 0x403c88 */
  esp -= 4; W32(esp, 0x426702u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 426702: mov edi, eax */
  edi = eax;
L_426704: /* 426704: cmp dword ptr [edi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426708: jne 0x42671e */
  if (!zf) goto L_42671e;
L_42670a: /* 42670a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42670b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42670e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 426711: call 0x40750d */
  esp -= 4; W32(esp, 0x426716u); SPILL(); f_40750d(); if (g_unwind) return; RELOAD();
/* 426716: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426719: jmp 0x4267a5 */
  goto L_4267a5;
L_42671e: /* 42671e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42671f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 426722: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
L_426725: /* 426725: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 426727: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 426728: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42672a: jne 0x426725 */
  if (!zf) goto L_426725;
L_42672c: /* 42672c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 42672d: mov eax, esi */
  eax = esi;
/* 42672f: sub eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 426732: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 426733: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 426734: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 426737: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426738: call 0x426477 */
  esp -= 4; W32(esp, 0x42673du); SPILL(); f_426477(); if (g_unwind) return; RELOAD();
/* 42673d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426740: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426743: jne 0x426746 */
  if (!zf) goto L_426746;
L_426745: /* 426745: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_426746: /* 426746: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_426749: /* 426749: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 42674b: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 42674e: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 42674f: test byte ptr [edx + edi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + edi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426754: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 426756: je 0x42678c */
  if (zf) goto L_42678c;
L_426758: /* 426758: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 426759: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42675a: mov eax, ebx */
  eax = ebx;
/* 42675c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 42675d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42675f: je 0x426798 */
  if (zf) goto L_426798;
L_426761: /* 426761: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 426763: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 426765: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 426766: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 426767: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426769: jne 0x426792 */
  if (!zf) goto L_426792;
L_42676b: /* 42676b: and byte ptr [esi - 2], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xfffffffeu))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0xfffffffeu), r);
  }
L_42676e: /* 42676e: mov eax, esi */
  eax = esi;
/* 426770: sub eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 426773: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 426774: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 426775: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 426778: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426779: call 0x426477 */
  esp -= 4; W32(esp, 0x42677eu); SPILL(); f_426477(); if (g_unwind) return; RELOAD();
/* 42677e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426781: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426784: jne 0x42679e */
  if (!zf) goto L_42679e;
L_426786: /* 426786: and byte ptr [esi - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0xffffffffu), r);
  }
/* 42678a: jmp 0x4267a1 */
  goto L_4267a1;
L_42678c: /* 42678c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42678d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42678e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426790: je 0x42676e */
  if (zf) goto L_42676e;
L_426792: /* 426792: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426794: jne 0x426749 */
  if (!zf) goto L_426749;
L_426796: /* 426796: jmp 0x42676e */
  goto L_42676e;
L_426798: /* 426798: and byte ptr [esi - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0xffffffffu), r);
  }
/* 42679c: jmp 0x42676e */
  goto L_42676e;
L_42679e: /* 42679e: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
L_4267a1: /* 4267a1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4267a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4267a5: /* 4267a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4267a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4267a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4267a8: ret  */
  esp += 4; SPILL(); return;
}

void f_4267a9(void) {
  LOAD_REGS();
L_4267a9: /* 4267a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4267aa: mov ebp, esp */
  ebp = esp;
/* 4267ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4267ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4267ae: call 0x40137f */
  esp -= 4; W32(esp, 0x4267b3u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4267b3: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 4267b6: xor ebx, ebx */
  ebx = 0;
/* 4267b8: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4267bb: jne 0x4267c1 */
  if (!zf) goto L_4267c1;
L_4267bd: /* 4267bd: xor eax, eax */
  eax = 0;
/* 4267bf: jmp 0x426819 */
  goto L_426819;
L_4267c1: /* 4267c1: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4267c7: je 0x4267ce */
  if (zf) goto L_4267ce;
L_4267c9: /* 4267c9: call 0x403c88 */
  esp -= 4; W32(esp, 0x4267ceu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_4267ce: /* 4267ce: cmp dword ptr [eax + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4267d1: jne 0x4267e6 */
  if (!zf) goto L_4267e6;
L_4267d3: /* 4267d3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4267d6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4267d9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4267dc: call 0x401a52 */
  esp -= 4; W32(esp, 0x4267e1u); SPILL(); f_401a52(); if (g_unwind) return; RELOAD();
/* 4267e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4267e4: jmp 0x426819 */
  goto L_426819;
L_4267e6: /* 4267e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4267e7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4267ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4267eb: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_4267ee: /* 4267ee: movzx dx, byte ptr [edi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edi)))) & 0xffffu);
/* 4267f2: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 4267f5: movzx ecx, dl */
  ecx = (uint32_t)((edx & 0xffu));
/* 4267f8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4267f9: test byte ptr [ecx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4267fe: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 426801: je 0x426833 */
  if (zf) goto L_426833;
L_426803: /* 426803: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426806: jne 0x42681c */
  if (!zf) goto L_42681c;
L_426808: /* 426808: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 42680b: test byte ptr [ecx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426810: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 426813: je 0x42685f */
  if (zf) goto L_42685f;
L_426815: /* 426815: xor eax, eax */
  eax = 0;
L_426817: /* 426817: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 426818: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_426819: /* 426819: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42681a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42681b: ret  */
  esp += 4; SPILL(); return;
L_42681c: /* 42681c: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42681e: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426820: jne 0x426827 */
  if (!zf) goto L_426827;
L_426822: /* 426822: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 426825: jmp 0x426833 */
  goto L_426833;
L_426827: /* 426827: xor ebx, ebx */
  ebx = 0;
/* 426829: mov bh, dl */
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)((edx & 0xffu)) & 0xffu) << 8);
/* 42682b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42682c: mov bl, cl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 42682e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 426831: xor ebx, ebx */
  ebx = 0;
L_426833: /* 426833: movzx cx, byte ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(esi)))) & 0xffffu);
/* 426837: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 42683a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42683b: test byte ptr [edx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426840: je 0x42685f */
  if (zf) goto L_42685f;
L_426842: /* 426842: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426845: je 0x426850 */
  if (zf) goto L_426850;
L_426847: /* 426847: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 426849: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 42684c: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42684e: jne 0x426854 */
  if (!zf) goto L_426854;
L_426850: /* 426850: xor ecx, ecx */
  ecx = 0;
/* 426852: jmp 0x42685f */
  goto L_42685f;
L_426854: /* 426854: xor ebx, ebx */
  ebx = 0;
/* 426856: mov bh, cl */
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)((ecx & 0xffu)) & 0xffu) << 8);
/* 426858: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 426859: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 42685b: mov ecx, ebx */
  ecx = ebx;
/* 42685d: xor ebx, ebx */
  ebx = 0;
L_42685f: /* 42685f: cmp cx, word ptr [ebp - 4] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426863: jne 0x426876 */
  if (!zf) goto L_426876;
L_426865: /* 426865: cmp word ptr [ebp - 4], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 426869: je 0x426815 */
  if (zf) goto L_426815;
L_42686b: /* 42686b: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42686e: jne 0x4267ee */
  if (!zf) goto L_4267ee;
L_426874: /* 426874: jmp 0x426815 */
  goto L_426815;
L_426876: /* 426876: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 426878: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42687b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42687c: jmp 0x426817 */
  goto L_426817;
}

void f_42687e(void) {
  LOAD_REGS();
L_42687e: /* 42687e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42687f: mov ebp, esp */
  ebp = esp;
/* 426881: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 426884: xor edx, edx */
  edx = 0;
/* 426886: cmp dword ptr [ebp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426889: je 0x4268b1 */
  if (zf) goto L_4268b1;
L_42688b: /* 42688b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_42688c: /* 42688c: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 42688e: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 426891: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426893: je 0x4268b0 */
  if (zf) goto L_4268b0;
L_426895: /* 426895: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 426898: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 42689b: test byte ptr [ecx + esi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + esi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4268a0: je 0x4268a7 */
  if (zf) goto L_4268a7;
L_4268a2: /* 4268a2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4268a3: cmp byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4268a5: je 0x4268af */
  if (zf) goto L_4268af;
L_4268a7: /* 4268a7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4268a8: cmp dword ptr [ebp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4268ab: jne 0x42688c */
  if (!zf) goto L_42688c;
L_4268ad: /* 4268ad: jmp 0x4268b0 */
  goto L_4268b0;
L_4268af: /* 4268af: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_4268b0: /* 4268b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4268b1: /* 4268b1: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4268b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4268b5: ret  */
  esp += 4; SPILL(); return;
}

void f_4268b6(void) {
  LOAD_REGS();
L_4268b6: /* 4268b6: call 0x40137f */
  esp -= 4; W32(esp, 0x4268bbu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4268bb: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 4268be: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4268c4: je 0x4268cb */
  if (zf) goto L_4268cb;
L_4268c6: /* 4268c6: call 0x403c88 */
  esp -= 4; W32(esp, 0x4268cbu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_4268cb: /* 4268cb: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4268cf: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4268d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4268d4: call 0x42687e */
  esp -= 4; W32(esp, 0x4268d9u); SPILL(); f_42687e(); if (g_unwind) return; RELOAD();
/* 4268d9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4268dc: ret  */
  esp += 4; SPILL(); return;
}

void f_4268dd(void) {
  LOAD_REGS();
L_4268dd: /* 4268dd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4268de: mov ebp, esp */
  ebp = esp;
/* 4268e0: call 0x40137f */
  esp -= 4; W32(esp, 0x4268e5u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4268e5: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 4268e8: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4268ee: je 0x4268f5 */
  if (zf) goto L_4268f5;
L_4268f0: /* 4268f0: call 0x403c88 */
  esp -= 4; W32(esp, 0x4268f5u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_4268f5: /* 4268f5: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4268f9: jne 0x4268ff */
  if (!zf) goto L_4268ff;
L_4268fb: /* 4268fb: xor eax, eax */
  eax = 0;
/* 4268fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4268fe: ret  */
  esp += 4; SPILL(); return;
L_4268ff: /* 4268ff: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 426902: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 426905: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 426908: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42690b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42690e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 426910: push dword ptr [eax + 0xc] */
  { uint32_t v = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, v); }
/* 426913: call 0x4038f9 */
  esp -= 4; W32(esp, 0x426918u); SPILL(); f_4038f9(); if (g_unwind) return; RELOAD();
/* 426918: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42691b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42691d: jne 0x426926 */
  if (!zf) goto L_426926;
L_42691f: /* 42691f: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 426924: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 426925: ret  */
  esp += 4; SPILL(); return;
L_426926: /* 426926: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 426929: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 42692a: ret  */
  esp += 4; SPILL(); return;
}

void f_42692b(void) {
  LOAD_REGS();
L_42692b: /* 42692b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42692c: mov ebp, esp */
  ebp = esp;
/* 42692e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42692f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 426930: call 0x40137f */
  esp -= 4; W32(esp, 0x426935u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 426935: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 426938: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42693e: je 0x426945 */
  if (zf) goto L_426945;
L_426940: /* 426940: call 0x403c88 */
  esp -= 4; W32(esp, 0x426945u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_426945: /* 426945: xor edx, edx */
  edx = 0;
/* 426947: cmp dword ptr [ebp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42694a: jne 0x426950 */
  if (!zf) goto L_426950;
L_42694c: /* 42694c: xor eax, eax */
  eax = 0;
/* 42694e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42694f: ret  */
  esp += 4; SPILL(); return;
L_426950: /* 426950: cmp dword ptr [eax + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426953: jne 0x426968 */
  if (!zf) goto L_426968;
L_426955: /* 426955: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 426958: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42695b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42695e: call 0x4145c7 */
  esp -= 4; W32(esp, 0x426963u); SPILL(); f_4145c7(); if (g_unwind) return; RELOAD();
/* 426963: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426966: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 426967: ret  */
  esp += 4; SPILL(); return;
L_426968: /* 426968: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426969: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42696a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_42696d: /* 42696d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 426970: movzx si, byte ptr [ecx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ecx)))) & 0xffffu);
/* 426974: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 426977: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 426978: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 42697b: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 42697e: movzx esi, byte ptr [ebp - 8] */
  esi = (uint32_t)(R8((uint32_t)(ebp + 0xfffffff8u)));
/* 426982: test byte ptr [esi + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426987: je 0x4269e6 */
  if (zf) goto L_4269e6;
L_426989: /* 426989: cmp dword ptr [ebp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42698c: jne 0x4269a7 */
  if (!zf) goto L_4269a7;
L_42698e: /* 42698e: movzx ecx, byte ptr [edi] */
  ecx = (uint32_t)(R8((uint32_t)(edi)));
/* 426991: test byte ptr [ecx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426996: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 426999: jne 0x426a8c */
  if (!zf) goto L_426a8c;
L_42699f: /* 42699f: mov si, dx */
  esi = (esi & 0xffff0000u) | ((uint32_t)((edx & 0xffffu)) & 0xffffu);
/* 4269a2: jmp 0x426a70 */
  goto L_426a70;
L_4269a7: /* 4269a7: mov cl, byte ptr [ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 4269a9: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4269ab: jne 0x4269b2 */
  if (!zf) goto L_4269b2;
L_4269ad: /* 4269ad: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 4269b0: jmp 0x4269fe */
  goto L_4269fe;
L_4269b2: /* 4269b2: xor edx, edx */
  edx = 0;
/* 4269b4: mov dh, byte ptr [ebp - 8] */
  edx = (edx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ebp + 0xfffffff8u))) & 0xffu) << 8);
/* 4269b7: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 4269ba: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 4269bc: mov si, dx */
  esi = (esi & 0xffff0000u) | ((uint32_t)((edx & 0xffffu)) & 0xffffu);
/* 4269bf: cmp si, word ptr [eax + 0x10] */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x10u)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 4269c3: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 4269c6: jb 0x4269d4 */
  if (cf) goto L_4269d4;
L_4269c8: /* 4269c8: cmp si, word ptr [eax + 0x12] */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x12u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4269cc: ja 0x4269d4 */
  if ((!cf && !zf)) goto L_4269d4;
L_4269ce: /* 4269ce: add si, word ptr [eax + 0x14] */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x14u)));
  uint16_t r = (uint16_t)(a + b);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 4269d2: jmp 0x426a02 */
  goto L_426a02;
L_4269d4: /* 4269d4: cmp si, word ptr [eax + 0x16] */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x16u)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 4269d8: jb 0x426a02 */
  if (cf) goto L_426a02;
L_4269da: /* 4269da: cmp si, word ptr [eax + 0x18] */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x18u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4269de: ja 0x426a02 */
  if ((!cf && !zf)) goto L_426a02;
L_4269e0: /* 4269e0: add si, word ptr [eax + 0x1a] */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x1au)));
  uint16_t r = (uint16_t)(a + b);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 4269e4: jmp 0x426a02 */
  goto L_426a02;
L_4269e6: /* 4269e6: movzx ecx, word ptr [ebp - 8] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 4269ea: lea edx, [ecx + eax] */
  edx = (uint32_t)(ecx + eax);
/* 4269ed: test byte ptr [edx + 0x1d], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1du))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4269f1: je 0x4269fb */
  if (zf) goto L_4269fb;
L_4269f3: /* 4269f3: movsx cx, byte ptr [edx + 0x11d] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx + 0x11du)))) & 0xffffu);
L_4269fb: /* 4269fb: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
L_4269fe: /* 4269fe: mov si, word ptr [ebp - 8] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u))) & 0xffffu);
L_426a02: /* 426a02: movzx cx, byte ptr [edi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edi)))) & 0xffffu);
/* 426a06: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 426a07: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 426a0a: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 426a0d: test byte ptr [ecx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426a12: je 0x426a5b */
  if (zf) goto L_426a5b;
L_426a14: /* 426a14: xor edx, edx */
  edx = 0;
/* 426a16: cmp dword ptr [ebp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426a19: je 0x426a24 */
  if (zf) goto L_426a24;
L_426a1b: /* 426a1b: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 426a1d: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 426a20: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426a22: jne 0x426a29 */
  if (!zf) goto L_426a29;
L_426a24: /* 426a24: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 426a27: jmp 0x426a73 */
  goto L_426a73;
L_426a29: /* 426a29: xor edx, edx */
  edx = 0;
/* 426a2b: mov dh, byte ptr [ebp - 4] */
  edx = (edx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu))) & 0xffu) << 8);
/* 426a2e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 426a2f: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 426a31: mov cx, dx */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((edx & 0xffffu)) & 0xffffu);
/* 426a34: cmp cx, word ptr [eax + 0x10] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x10u)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 426a38: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 426a3b: jb 0x426a49 */
  if (cf) goto L_426a49;
L_426a3d: /* 426a3d: cmp cx, word ptr [eax + 0x12] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x12u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426a41: ja 0x426a49 */
  if ((!cf && !zf)) goto L_426a49;
L_426a43: /* 426a43: add cx, word ptr [eax + 0x14] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x14u)));
  uint16_t r = (uint16_t)(a + b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 426a47: jmp 0x426a77 */
  goto L_426a77;
L_426a49: /* 426a49: cmp cx, word ptr [eax + 0x16] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x16u)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 426a4d: jb 0x426a77 */
  if (cf) goto L_426a77;
L_426a4f: /* 426a4f: cmp cx, word ptr [eax + 0x18] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x18u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426a53: ja 0x426a77 */
  if ((!cf && !zf)) goto L_426a77;
L_426a55: /* 426a55: add cx, word ptr [eax + 0x1a] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x1au)));
  uint16_t r = (uint16_t)(a + b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 426a59: jmp 0x426a77 */
  goto L_426a77;
L_426a5b: /* 426a5b: movzx ecx, word ptr [ebp - 4] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu)));
/* 426a5f: lea edx, [ecx + eax] */
  edx = (uint32_t)(ecx + eax);
/* 426a62: test byte ptr [edx + 0x1d], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1du))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426a66: je 0x426a70 */
  if (zf) goto L_426a70;
L_426a68: /* 426a68: movsx cx, byte ptr [edx + 0x11d] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx + 0x11du)))) & 0xffffu);
L_426a70: /* 426a70: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
L_426a73: /* 426a73: mov cx, word ptr [ebp - 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu))) & 0xffffu);
L_426a77: /* 426a77: cmp cx, si */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426a7a: jne 0x426a92 */
  if (!zf) goto L_426a92;
L_426a7c: /* 426a7c: xor edx, edx */
  edx = 0;
/* 426a7e: cmp si, dx */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 426a81: je 0x426a8c */
  if (zf) goto L_426a8c;
L_426a83: /* 426a83: cmp dword ptr [ebp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426a86: jne 0x42696d */
  if (!zf) goto L_42696d;
L_426a8c: /* 426a8c: xor eax, eax */
  eax = 0;
L_426a8e: /* 426a8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 426a8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426a90: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 426a91: ret  */
  esp += 4; SPILL(); return;
L_426a92: /* 426a92: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 426a94: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 426a97: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 426a98: jmp 0x426a8e */
  goto L_426a8e;
}

void f_426a9a(void) {
  LOAD_REGS();
L_426a9a: /* 426a9a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 426a9b: mov ebp, esp */
  ebp = esp;
/* 426a9d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 426aa0: xor eax, eax */
  eax = 0;
/* 426aa2: cmp dword ptr [0x44b138], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b138u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426aa8: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 426aab: jne 0x426abe */
  if (!zf) goto L_426abe;
L_426aad: /* 426aad: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 426ab0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 426ab3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 426ab4: call 0x407ccc */
  esp -= 4; W32(esp, 0x426ab9u); SPILL(); f_407ccc(); if (g_unwind) return; RELOAD();
/* 426ab9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426abc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 426abd: ret  */
  esp += 4; SPILL(); return;
L_426abe: /* 426abe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 426abf: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 426ac2: mov edx, ebx */
  edx = ebx;
/* 426ac4: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 426ac7: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426ac9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426aca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426acb: je 0x426b01 */
  if (zf) goto L_426b01;
L_426acd: /* 426acd: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 426ad0: jmp 0x426aec */
  goto L_426aec;
L_426ad2: /* 426ad2: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 426ad3: cmp byte ptr [ecx], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426ad5: je 0x426b06 */
  if (zf) goto L_426b06;
L_426ad7: /* 426ad7: mov esi, edi */
  esi = edi;
/* 426ad9: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 426ada: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426adc: je 0x426af2 */
  if (zf) goto L_426af2;
L_426ade: /* 426ade: lea esi, [ecx + 1] */
  esi = (uint32_t)(ecx + 0x1u);
/* 426ae1: cmp byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426ae3: je 0x426af2 */
  if (zf) goto L_426af2;
L_426ae5: /* 426ae5: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 426ae7: mov ecx, esi */
  ecx = esi;
/* 426ae9: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 426aeb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_426aec: /* 426aec: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426aee: jne 0x426ad2 */
  if (!zf) goto L_426ad2;
L_426af0: /* 426af0: jmp 0x426b06 */
  goto L_426b06;
L_426af2: /* 426af2: mov byte ptr [ecx], 0x20 */
  W8((uint32_t)(ecx), 0x20u);
/* 426af5: jmp 0x426b06 */
  goto L_426b06;
L_426af7: /* 426af7: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 426afa: cmp byte ptr [ecx], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426afc: je 0x426b06 */
  if (zf) goto L_426b06;
L_426afe: /* 426afe: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 426b00: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_426b01: /* 426b01: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426b04: jne 0x426af7 */
  if (!zf) goto L_426af7;
L_426b06: /* 426b06: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 426b09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 426b0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426b0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 426b0c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 426b0d: ret  */
  esp += 4; SPILL(); return;
}

void f_426b0e(void) {
  LOAD_REGS();
L_426b0e: /* 426b0e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 426b0f: mov ebp, esp */
  ebp = esp;
/* 426b11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 426b12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 426b13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426b14: call 0x40137f */
  esp -= 4; W32(esp, 0x426b19u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 426b19: mov edi, dword ptr [eax + 0x60] */
  edi = R32((uint32_t)(eax + 0x60u));
/* 426b1c: cmp edi, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426b22: je 0x426b2b */
  if (zf) goto L_426b2b;
L_426b24: /* 426b24: call 0x403c88 */
  esp -= 4; W32(esp, 0x426b29u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 426b29: mov edi, eax */
  edi = eax;
L_426b2b: /* 426b2b: xor ebx, ebx */
  ebx = 0;
/* 426b2d: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426b30: jne 0x426b3a */
  if (!zf) goto L_426b3a;
L_426b32: /* 426b32: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 426b35: jmp 0x426bc6 */
  goto L_426bc6;
L_426b3a: /* 426b3a: cmp dword ptr [edi + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426b3d: jne 0x426b52 */
  if (!zf) goto L_426b52;
L_426b3f: /* 426b3f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 426b42: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 426b45: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 426b48: call 0x40750d */
  esp -= 4; W32(esp, 0x426b4du); SPILL(); f_40750d(); if (g_unwind) return; RELOAD();
/* 426b4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426b50: jmp 0x426bc6 */
  goto L_426bc6;
L_426b52: /* 426b52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426b53: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 426b56: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
L_426b59: /* 426b59: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 426b5b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 426b5c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426b5e: jne 0x426b59 */
  if (!zf) goto L_426b59;
L_426b60: /* 426b60: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 426b61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426b62: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 426b65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426b66: call 0x425fdd */
  esp -= 4; W32(esp, 0x426b6bu); SPILL(); f_425fdd(); if (g_unwind) return; RELOAD();
/* 426b6b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426b6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426b70: je 0x426b73 */
  if (zf) goto L_426b73;
L_426b72: /* 426b72: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_426b73: /* 426b73: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_426b76: /* 426b76: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 426b78: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 426b7b: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 426b7e: test byte ptr [edx + edi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + edi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426b83: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 426b85: je 0x426bb3 */
  if (zf) goto L_426bb3;
L_426b87: /* 426b87: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 426b88: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 426b89: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 426b8b: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 426b8d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 426b8e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 426b8f: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426b91: jne 0x426bb9 */
  if (!zf) goto L_426bb9;
L_426b93: /* 426b93: mov byte ptr [esi - 2], bl */
  W8((uint32_t)(esi + 0xfffffffeu), (ebx & 0xffu));
L_426b96: /* 426b96: mov eax, esi */
  eax = esi;
/* 426b98: sub eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 426b9b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 426b9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 426b9d: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 426ba0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426ba1: call 0x426477 */
  esp -= 4; W32(esp, 0x426ba6u); SPILL(); f_426477(); if (g_unwind) return; RELOAD();
/* 426ba6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426ba9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426bac: jne 0x426bc0 */
  if (!zf) goto L_426bc0;
L_426bae: /* 426bae: mov byte ptr [esi - 1], bl */
  W8((uint32_t)(esi + 0xffffffffu), (ebx & 0xffu));
/* 426bb1: jmp 0x426bc2 */
  goto L_426bc2;
L_426bb3: /* 426bb3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 426bb4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 426bb5: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426bb7: je 0x426b96 */
  if (zf) goto L_426b96;
L_426bb9: /* 426bb9: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426bbc: jne 0x426b76 */
  if (!zf) goto L_426b76;
L_426bbe: /* 426bbe: jmp 0x426b96 */
  goto L_426b96;
L_426bc0: /* 426bc0: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
L_426bc2: /* 426bc2: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 426bc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_426bc6: /* 426bc6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 426bc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 426bc8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 426bc9: ret  */
  esp += 4; SPILL(); return;
}

void f_426bca(void) {
  LOAD_REGS();
L_426bca: /* 426bca: call 0x40137f */
  esp -= 4; W32(esp, 0x426bcfu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 426bcf: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 426bd2: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426bd8: je 0x426bdf */
  if (zf) goto L_426bdf;
L_426bda: /* 426bda: call 0x403c88 */
  esp -= 4; W32(esp, 0x426bdfu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_426bdf: /* 426bdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426be0: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 426be4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426be5: xor edi, edi */
  edi = 0;
/* 426be7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426be9: je 0x426c13 */
  if (zf) goto L_426c13;
L_426beb: /* 426beb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
L_426bef: /* 426bef: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 426bf1: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 426bf2: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426bf4: je 0x426c13 */
  if (zf) goto L_426c13;
L_426bf6: /* 426bf6: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 426bf9: test byte ptr [edx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426bfe: je 0x426c0d */
  if (zf) goto L_426c0d;
L_426c00: /* 426c00: mov edx, esi */
  edx = esi;
/* 426c02: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 426c03: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426c05: je 0x426c13 */
  if (zf) goto L_426c13;
L_426c07: /* 426c07: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 426c08: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 426c0b: je 0x426c13 */
  if (zf) goto L_426c13;
L_426c0d: /* 426c0d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 426c0e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 426c0f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426c11: jne 0x426bef */
  if (!zf) goto L_426bef;
L_426c13: /* 426c13: mov eax, edi */
  eax = edi;
/* 426c15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 426c16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426c17: ret  */
  esp += 4; SPILL(); return;
}

void f_426c18(void) {
  LOAD_REGS();
L_426c18: /* 426c18: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 426c19: mov ebp, esp */
  ebp = esp;
/* 426c1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426c1c: call 0x40137f */
  esp -= 4; W32(esp, 0x426c21u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 426c21: mov esi, dword ptr [eax + 0x60] */
  esi = R32((uint32_t)(eax + 0x60u));
/* 426c24: cmp esi, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426c2a: je 0x426c33 */
  if (zf) goto L_426c33;
L_426c2c: /* 426c2c: call 0x403c88 */
  esp -= 4; W32(esp, 0x426c31u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 426c31: mov esi, eax */
  esi = eax;
L_426c33: /* 426c33: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426c37: jne 0x426c3d */
  if (!zf) goto L_426c3d;
L_426c39: /* 426c39: xor eax, eax */
  eax = 0;
/* 426c3b: jmp 0x426cb2 */
  goto L_426cb2;
L_426c3d: /* 426c3d: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426c41: jne 0x426c4a */
  if (!zf) goto L_426c4a;
L_426c43: /* 426c43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426c44: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 426c45: jmp 0x401a52 */
  SPILL(); f_401a52(); return;
L_426c4a: /* 426c4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 426c4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426c4c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_426c4f: /* 426c4f: movzx dx, byte ptr [edi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edi)))) & 0xffffu);
/* 426c53: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 426c56: movzx eax, dl */
  eax = (uint32_t)((edx & 0xffu));
/* 426c59: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 426c5a: test byte ptr [esi + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426c5f: je 0x426c74 */
  if (zf) goto L_426c74;
L_426c61: /* 426c61: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 426c63: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426c65: jne 0x426c6b */
  if (!zf) goto L_426c6b;
L_426c67: /* 426c67: xor edx, edx */
  edx = 0;
/* 426c69: jmp 0x426c74 */
  goto L_426c74;
L_426c6b: /* 426c6b: xor ecx, ecx */
  ecx = 0;
/* 426c6d: mov ch, dl */
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)((edx & 0xffu)) & 0xffu) << 8);
/* 426c6f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 426c70: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 426c72: mov edx, ecx */
  edx = ecx;
L_426c74: /* 426c74: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 426c77: movzx cx, byte ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax)))) & 0xffffu);
/* 426c7b: movzx ebx, cl */
  ebx = (uint32_t)((ecx & 0xffu));
/* 426c7e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 426c7f: test byte ptr [ebx + esi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + esi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426c84: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 426c87: je 0x426c9e */
  if (zf) goto L_426c9e;
L_426c89: /* 426c89: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 426c8b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426c8d: jne 0x426c93 */
  if (!zf) goto L_426c93;
L_426c8f: /* 426c8f: xor ecx, ecx */
  ecx = 0;
/* 426c91: jmp 0x426c9e */
  goto L_426c9e;
L_426c93: /* 426c93: xor ebx, ebx */
  ebx = 0;
/* 426c95: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 426c98: mov bh, cl */
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)((ecx & 0xffu)) & 0xffu) << 8);
/* 426c9a: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 426c9c: mov ecx, ebx */
  ecx = ebx;
L_426c9e: /* 426c9e: cmp cx, dx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426ca1: jne 0x426cb5 */
  if (!zf) goto L_426cb5;
L_426ca3: /* 426ca3: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 426ca6: je 0x426cae */
  if (zf) goto L_426cae;
L_426ca8: /* 426ca8: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426cac: jne 0x426c4f */
  if (!zf) goto L_426c4f;
L_426cae: /* 426cae: xor eax, eax */
  eax = 0;
L_426cb0: /* 426cb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 426cb1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_426cb2: /* 426cb2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426cb3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 426cb4: ret  */
  esp += 4; SPILL(); return;
L_426cb5: /* 426cb5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 426cb7: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 426cba: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 426cbb: jmp 0x426cb0 */
  goto L_426cb0;
}

void f_426cbd(void) {
  LOAD_REGS();
L_426cbd: /* 426cbd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 426cbe: mov ebp, esp */
  ebp = esp;
/* 426cc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426cc1: call 0x40137f */
  esp -= 4; W32(esp, 0x426cc6u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 426cc6: mov esi, dword ptr [eax + 0x60] */
  esi = R32((uint32_t)(eax + 0x60u));
/* 426cc9: cmp esi, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426ccf: je 0x426cd8 */
  if (zf) goto L_426cd8;
L_426cd1: /* 426cd1: call 0x403c88 */
  esp -= 4; W32(esp, 0x426cd6u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 426cd6: mov esi, eax */
  esi = eax;
L_426cd8: /* 426cd8: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426cdc: jne 0x426ce2 */
  if (!zf) goto L_426ce2;
L_426cde: /* 426cde: xor eax, eax */
  eax = 0;
/* 426ce0: jmp 0x426d24 */
  goto L_426d24;
L_426ce2: /* 426ce2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426ce3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 426ce6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 426ce9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426cea: call 0x42687e */
  esp -= 4; W32(esp, 0x426cefu); SPILL(); f_42687e(); if (g_unwind) return; RELOAD();
/* 426cef: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 426cf2: mov edi, eax */
  edi = eax;
/* 426cf4: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 426cf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426cf8: call 0x42687e */
  esp -= 4; W32(esp, 0x426cfdu); SPILL(); f_42687e(); if (g_unwind) return; RELOAD();
/* 426cfd: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 426d00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 426d01: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 426d04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426d05: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 426d08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 426d0a: push dword ptr [esi + 0xc] */
  { uint32_t v = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, v); }
/* 426d0d: call 0x4038f9 */
  esp -= 4; W32(esp, 0x426d12u); SPILL(); f_4038f9(); if (g_unwind) return; RELOAD();
/* 426d12: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426d15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426d17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 426d18: jne 0x426d21 */
  if (!zf) goto L_426d21;
L_426d1a: /* 426d1a: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 426d1f: jmp 0x426d24 */
  goto L_426d24;
L_426d21: /* 426d21: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_426d24: /* 426d24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426d25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 426d26: ret  */
  esp += 4; SPILL(); return;
}

void f_426d27(void) {
  LOAD_REGS();
L_426d27: /* 426d27: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 426d28: mov ebp, esp */
  ebp = esp;
/* 426d2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426d2b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 426d2e: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 426d31: call 0x40137f */
  esp -= 4; W32(esp, 0x426d36u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 426d36: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 426d39: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426d3f: je 0x426d46 */
  if (zf) goto L_426d46;
L_426d41: /* 426d41: call 0x403c88 */
  esp -= 4; W32(esp, 0x426d46u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_426d46: /* 426d46: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426d4a: jne 0x426d5d */
  if (!zf) goto L_426d5d;
L_426d4c: /* 426d4c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 426d4f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 426d52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426d53: call 0x4053f1 */
  esp -= 4; W32(esp, 0x426d58u); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 426d58: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426d5b: jmp 0x426da0 */
  goto L_426da0;
L_426d5d: /* 426d5d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 426d60: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426d62: je 0x426d9d */
  if (zf) goto L_426d9d;
L_426d64: /* 426d64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 426d65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426d66: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_426d69: /* 426d69: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 426d6b: movzx ebx, dl */
  ebx = (uint32_t)((edx & 0xffu));
/* 426d6e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 426d6f: test byte ptr [ebx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426d74: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 426d76: je 0x426da3 */
  if (zf) goto L_426da3;
L_426d78: /* 426d78: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 426d79: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 426d7a: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 426d7c: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 426d7e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 426d7f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 426d80: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426d82: jne 0x426da9 */
  if (!zf) goto L_426da9;
L_426d84: /* 426d84: and byte ptr [edi - 2], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xfffffffeu))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(edi + 0xfffffffeu), r);
  }
L_426d87: /* 426d87: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426d89: je 0x426d9b */
  if (zf) goto L_426d9b;
L_426d8b: /* 426d8b: mov edx, ecx */
  edx = ecx;
/* 426d8d: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 426d90: xor eax, eax */
  eax = 0;
/* 426d92: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 426d94: mov ecx, edx */
  ecx = edx;
/* 426d96: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 426d99: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
L_426d9b: /* 426d9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426d9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_426d9d: /* 426d9d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_426da0: /* 426da0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 426da1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 426da2: ret  */
  esp += 4; SPILL(); return;
L_426da3: /* 426da3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 426da4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 426da5: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426da7: je 0x426d87 */
  if (zf) goto L_426d87;
L_426da9: /* 426da9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426dab: jne 0x426d69 */
  if (!zf) goto L_426d69;
L_426dad: /* 426dad: jmp 0x426d9b */
  goto L_426d9b;
}

void f_426daf(void) {
  LOAD_REGS();
L_426daf: /* 426daf: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 426db3: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 426db6: xor edx, edx */
  edx = 0;
/* 426db8: test byte ptr [eax + 0x449341], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x449341u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426dbf: je 0x426dc7 */
  if (zf) goto L_426dc7;
L_426dc1: /* 426dc1: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 426dc4: mov edx, eax */
  edx = eax;
/* 426dc6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_426dc7: /* 426dc7: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 426dca: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 426dcc: ret  */
  esp += 4; SPILL(); return;
}

void f_426dcd(void) {
  LOAD_REGS();
L_426dcd: /* 426dcd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 426dce: mov ebp, esp */
  ebp = esp;
/* 426dd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 426dd1: call 0x40137f */
  esp -= 4; W32(esp, 0x426dd6u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 426dd6: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 426dd9: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426ddf: je 0x426de6 */
  if (zf) goto L_426de6;
L_426de1: /* 426de1: call 0x403c88 */
  esp -= 4; W32(esp, 0x426de6u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_426de6: /* 426de6: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426dea: jne 0x426df0 */
  if (!zf) goto L_426df0;
L_426dec: /* 426dec: xor eax, eax */
  eax = 0;
/* 426dee: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 426def: ret  */
  esp += 4; SPILL(); return;
L_426df0: /* 426df0: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426df4: jne 0x426e09 */
  if (!zf) goto L_426e09;
L_426df6: /* 426df6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 426df9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 426dfc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 426dff: call 0x4145c7 */
  esp -= 4; W32(esp, 0x426e04u); SPILL(); f_4145c7(); if (g_unwind) return; RELOAD();
/* 426e04: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426e07: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 426e08: ret  */
  esp += 4; SPILL(); return;
L_426e09: /* 426e09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426e0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426e0b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_426e0e: /* 426e0e: movzx cx, byte ptr [edi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edi)))) & 0xffffu);
/* 426e12: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 426e15: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 426e16: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 426e19: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 426e1c: test byte ptr [ecx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426e21: je 0x426e61 */
  if (zf) goto L_426e61;
L_426e23: /* 426e23: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 426e25: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426e27: jne 0x426e2f */
  if (!zf) goto L_426e2f;
L_426e29: /* 426e29: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 426e2d: jmp 0x426e79 */
  goto L_426e79;
L_426e2f: /* 426e2f: xor edx, edx */
  edx = 0;
/* 426e31: mov dh, byte ptr [ebp - 4] */
  edx = (edx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu))) & 0xffu) << 8);
/* 426e34: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 426e35: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 426e37: mov si, dx */
  esi = (esi & 0xffff0000u) | ((uint32_t)((edx & 0xffffu)) & 0xffffu);
/* 426e3a: cmp si, word ptr [eax + 0x10] */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x10u)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 426e3e: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 426e41: jb 0x426e4f */
  if (cf) goto L_426e4f;
L_426e43: /* 426e43: cmp si, word ptr [eax + 0x12] */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x12u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426e47: ja 0x426e4f */
  if ((!cf && !zf)) goto L_426e4f;
L_426e49: /* 426e49: add si, word ptr [eax + 0x14] */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x14u)));
  uint16_t r = (uint16_t)(a + b);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 426e4d: jmp 0x426e7d */
  goto L_426e7d;
L_426e4f: /* 426e4f: cmp si, word ptr [eax + 0x16] */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x16u)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 426e53: jb 0x426e7d */
  if (cf) goto L_426e7d;
L_426e55: /* 426e55: cmp si, word ptr [eax + 0x18] */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x18u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426e59: ja 0x426e7d */
  if ((!cf && !zf)) goto L_426e7d;
L_426e5b: /* 426e5b: add si, word ptr [eax + 0x1a] */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x1au)));
  uint16_t r = (uint16_t)(a + b);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 426e5f: jmp 0x426e7d */
  goto L_426e7d;
L_426e61: /* 426e61: movzx ecx, word ptr [ebp - 4] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu)));
/* 426e65: lea edx, [ecx + eax] */
  edx = (uint32_t)(ecx + eax);
/* 426e68: test byte ptr [edx + 0x1d], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1du))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426e6c: je 0x426e76 */
  if (zf) goto L_426e76;
L_426e6e: /* 426e6e: movsx cx, byte ptr [edx + 0x11d] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx + 0x11du)))) & 0xffffu);
L_426e76: /* 426e76: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
L_426e79: /* 426e79: mov si, word ptr [ebp - 4] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu))) & 0xffffu);
L_426e7d: /* 426e7d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 426e80: movzx dx, byte ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ecx)))) & 0xffffu);
/* 426e84: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 426e85: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 426e88: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 426e8b: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 426e8e: test byte ptr [edx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426e93: je 0x426ed5 */
  if (zf) goto L_426ed5;
L_426e95: /* 426e95: mov cl, byte ptr [ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 426e97: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426e99: jne 0x426ea1 */
  if (!zf) goto L_426ea1;
L_426e9b: /* 426e9b: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 426e9f: jmp 0x426eed */
  goto L_426eed;
L_426ea1: /* 426ea1: xor edx, edx */
  edx = 0;
/* 426ea3: mov dh, byte ptr [ebp - 4] */
  edx = (edx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu))) & 0xffu) << 8);
/* 426ea6: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 426ea9: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 426eab: mov cx, dx */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((edx & 0xffffu)) & 0xffffu);
/* 426eae: cmp cx, word ptr [eax + 0x10] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x10u)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 426eb2: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 426eb5: jb 0x426ec3 */
  if (cf) goto L_426ec3;
L_426eb7: /* 426eb7: cmp cx, word ptr [eax + 0x12] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x12u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426ebb: ja 0x426ec3 */
  if ((!cf && !zf)) goto L_426ec3;
L_426ebd: /* 426ebd: add cx, word ptr [eax + 0x14] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x14u)));
  uint16_t r = (uint16_t)(a + b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 426ec1: jmp 0x426ef1 */
  goto L_426ef1;
L_426ec3: /* 426ec3: cmp cx, word ptr [eax + 0x16] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x16u)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 426ec7: jb 0x426ef1 */
  if (cf) goto L_426ef1;
L_426ec9: /* 426ec9: cmp cx, word ptr [eax + 0x18] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x18u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426ecd: ja 0x426ef1 */
  if ((!cf && !zf)) goto L_426ef1;
L_426ecf: /* 426ecf: add cx, word ptr [eax + 0x1a] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x1au)));
  uint16_t r = (uint16_t)(a + b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 426ed3: jmp 0x426ef1 */
  goto L_426ef1;
L_426ed5: /* 426ed5: movzx ecx, word ptr [ebp - 4] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu)));
/* 426ed9: lea edx, [ecx + eax] */
  edx = (uint32_t)(ecx + eax);
/* 426edc: test byte ptr [edx + 0x1d], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1du))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426ee0: je 0x426eea */
  if (zf) goto L_426eea;
L_426ee2: /* 426ee2: movsx cx, byte ptr [edx + 0x11d] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx + 0x11du)))) & 0xffffu);
L_426eea: /* 426eea: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
L_426eed: /* 426eed: mov cx, word ptr [ebp - 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu))) & 0xffffu);
L_426ef1: /* 426ef1: cmp cx, si */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 426ef4: jne 0x426f0b */
  if (!zf) goto L_426f0b;
L_426ef6: /* 426ef6: test si, si */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 426ef9: je 0x426f05 */
  if (zf) goto L_426f05;
L_426efb: /* 426efb: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426eff: jne 0x426e0e */
  if (!zf) goto L_426e0e;
L_426f05: /* 426f05: xor eax, eax */
  eax = 0;
L_426f07: /* 426f07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 426f08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426f09: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 426f0a: ret  */
  esp += 4; SPILL(); return;
L_426f0b: /* 426f0b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 426f0d: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 426f10: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 426f11: jmp 0x426f07 */
  goto L_426f07;
}

void f_426f13(void) {
  LOAD_REGS();
L_426f13: /* 426f13: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 426f14: mov ebp, esp */
  ebp = esp;
/* 426f16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426f17: call 0x40137f */
  esp -= 4; W32(esp, 0x426f1cu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 426f1c: mov esi, dword ptr [eax + 0x60] */
  esi = R32((uint32_t)(eax + 0x60u));
/* 426f1f: cmp esi, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426f25: je 0x426f2e */
  if (zf) goto L_426f2e;
L_426f27: /* 426f27: call 0x403c88 */
  esp -= 4; W32(esp, 0x426f2cu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 426f2c: mov esi, eax */
  esi = eax;
L_426f2e: /* 426f2e: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426f32: jne 0x426f38 */
  if (!zf) goto L_426f38;
L_426f34: /* 426f34: xor eax, eax */
  eax = 0;
/* 426f36: jmp 0x426f7a */
  goto L_426f7a;
L_426f38: /* 426f38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426f39: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 426f3c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 426f3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426f40: call 0x42687e */
  esp -= 4; W32(esp, 0x426f45u); SPILL(); f_42687e(); if (g_unwind) return; RELOAD();
/* 426f45: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 426f48: mov edi, eax */
  edi = eax;
/* 426f4a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 426f4d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426f4e: call 0x42687e */
  esp -= 4; W32(esp, 0x426f53u); SPILL(); f_42687e(); if (g_unwind) return; RELOAD();
/* 426f53: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 426f56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 426f57: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 426f5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426f5b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 426f5e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 426f60: push dword ptr [esi + 0xc] */
  { uint32_t v = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, v); }
/* 426f63: call 0x4038f9 */
  esp -= 4; W32(esp, 0x426f68u); SPILL(); f_4038f9(); if (g_unwind) return; RELOAD();
/* 426f68: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426f6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426f6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 426f6e: jne 0x426f77 */
  if (!zf) goto L_426f77;
L_426f70: /* 426f70: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 426f75: jmp 0x426f7a */
  goto L_426f7a;
L_426f77: /* 426f77: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_426f7a: /* 426f7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 426f7b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 426f7c: ret  */
  esp += 4; SPILL(); return;
}

void f_426f7d(void) {
  LOAD_REGS();
L_426f7d: /* 426f7d: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426f82: jne 0x426f87 */
  if (!zf) goto L_426f87;
L_426f84: /* 426f84: xor eax, eax */
  eax = 0;
/* 426f86: ret  */
  esp += 4; SPILL(); return;
L_426f87: /* 426f87: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 426f8b: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 426f8f: call 0x4268b6 */
  esp -= 4; W32(esp, 0x426f94u); SPILL(); f_4268b6(); if (g_unwind) return; RELOAD();
/* 426f94: add eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 426f98: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 426f99: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 426f9a: ret  */
  esp += 4; SPILL(); return;
}

void f_426f9b(void) {
  LOAD_REGS();
L_426f9b: /* 426f9b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 426f9c: mov ebp, esp */
  ebp = esp;
/* 426f9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426f9f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 426fa2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 426fa3: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 426fa6: xor edi, edi */
  edi = 0;
/* 426fa8: call 0x40137f */
  esp -= 4; W32(esp, 0x426fadu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 426fad: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 426fb0: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426fb6: je 0x426fbd */
  if (zf) goto L_426fbd;
L_426fb8: /* 426fb8: call 0x403c88 */
  esp -= 4; W32(esp, 0x426fbdu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_426fbd: /* 426fbd: cmp dword ptr [eax + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426fc0: jne 0x426fd6 */
  if (!zf) goto L_426fd6;
L_426fc2: /* 426fc2: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 426fc5: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 426fc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 426fc9: call 0x407ccc */
  esp -= 4; W32(esp, 0x426fceu); SPILL(); f_407ccc(); if (g_unwind) return; RELOAD();
/* 426fce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 426fd1: jmp 0x427071 */
  goto L_427071;
L_426fd6: /* 426fd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 426fd7: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 426fda: mov edx, ebx */
  edx = ebx;
/* 426fdc: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 426fdf: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426fe1: je 0x427036 */
  if (zf) goto L_427036;
L_426fe3: /* 426fe3: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 426fe7: je 0x42706d */
  if (zf) goto L_42706d;
L_426fed: /* 426fed: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 426fef: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 426ff2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 426ff4: je 0x427061 */
  if (zf) goto L_427061;
L_426ff6: /* 426ff6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 426ff8: jne 0x427007 */
  if (!zf) goto L_427007;
L_426ffa: /* 426ffa: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 426ffd: test byte ptr [ecx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 427002: je 0x427007 */
  if (zf) goto L_427007;
L_427004: /* 427004: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 427005: jmp 0x427009 */
  goto L_427009;
L_427007: /* 427007: xor edi, edi */
  edi = 0;
L_427009: /* 427009: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 42700b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42700c: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 42700e: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 427010: je 0x42702a */
  if (zf) goto L_42702a;
L_427012: /* 427012: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427014: jne 0x427023 */
  if (!zf) goto L_427023;
L_427016: /* 427016: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 427019: test byte ptr [ecx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42701e: je 0x427023 */
  if (zf) goto L_427023;
L_427020: /* 427020: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 427021: jmp 0x427025 */
  goto L_427025;
L_427023: /* 427023: xor edi, edi */
  edi = 0;
L_427025: /* 427025: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 427027: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 427028: jmp 0x42702e */
  goto L_42702e;
L_42702a: /* 42702a: mov byte ptr [esi - 1], 0x20 */
  W8((uint32_t)(esi + 0xffffffffu), 0x20u);
L_42702e: /* 42702e: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427032: jne 0x426fed */
  if (!zf) goto L_426fed;
L_427034: /* 427034: jmp 0x427061 */
  goto L_427061;
L_427036: /* 427036: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42703a: je 0x42706d */
  if (zf) goto L_42706d;
L_42703c: /* 42703c: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 42703e: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 427041: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 427043: je 0x427061 */
  if (zf) goto L_427061;
L_427045: /* 427045: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427047: jne 0x427056 */
  if (!zf) goto L_427056;
L_427049: /* 427049: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 42704c: test byte ptr [ecx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 427051: je 0x427056 */
  if (zf) goto L_427056;
L_427053: /* 427053: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 427054: jmp 0x427058 */
  goto L_427058;
L_427056: /* 427056: xor edi, edi */
  edi = 0;
L_427058: /* 427058: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 42705a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42705b: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42705f: jne 0x42703c */
  if (!zf) goto L_42703c;
L_427061: /* 427061: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427063: je 0x42706d */
  if (zf) goto L_42706d;
L_427065: /* 427065: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427068: je 0x42706d */
  if (zf) goto L_42706d;
L_42706a: /* 42706a: mov byte ptr [esi], 0x20 */
  W8((uint32_t)(esi), 0x20u);
L_42706d: /* 42706d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 427070: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_427071: /* 427071: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 427072: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427073: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 427074: ret  */
  esp += 4; SPILL(); return;
}

void f_427075(void) {
  LOAD_REGS();
L_427075: /* 427075: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427076: mov ebp, esp */
  ebp = esp;
/* 427078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427079: xor esi, esi */
  esi = 0;
/* 42707b: call 0x40137f */
  esp -= 4; W32(esp, 0x427080u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 427080: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 427083: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427089: je 0x427090 */
  if (zf) goto L_427090;
L_42708b: /* 42708b: call 0x403c88 */
  esp -= 4; W32(esp, 0x427090u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_427090: /* 427090: cmp dword ptr [eax + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427093: jne 0x42709c */
  if (!zf) goto L_42709c;
L_427095: /* 427095: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427096: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 427097: jmp 0x406e16 */
  SPILL(); f_406e16(); return;
L_42709c: /* 42709c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42709f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4270a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4270a1: /* 4270a1: mov bl, byte ptr [edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 4270a3: movzx ecx, bl */
  ecx = (uint32_t)((ebx & 0xffu));
/* 4270a6: movzx edi, cl */
  edi = (uint32_t)((ecx & 0xffu));
/* 4270a9: test byte ptr [edi + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4270ae: je 0x4270cd */
  if (zf) goto L_4270cd;
L_4270b0: /* 4270b0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4270b1: mov bl, byte ptr [edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 4270b3: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4270b5: je 0x4270c9 */
  if (zf) goto L_4270c9;
L_4270b7: /* 4270b7: movzx edi, bl */
  edi = (uint32_t)((ebx & 0xffu));
/* 4270ba: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 4270bd: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4270bf: cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4270c2: jne 0x4270d4 */
  if (!zf) goto L_4270d4;
L_4270c4: /* 4270c4: lea esi, [edx - 1] */
  esi = (uint32_t)(edx + 0xffffffffu);
/* 4270c7: jmp 0x4270d4 */
  goto L_4270d4;
L_4270c9: /* 4270c9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4270cb: jmp 0x4270d0 */
  goto L_4270d0;
L_4270cd: /* 4270cd: cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_4270d0: /* 4270d0: jne 0x4270d4 */
  if (!zf) goto L_4270d4;
L_4270d2: /* 4270d2: mov esi, edx */
  esi = edx;
L_4270d4: /* 4270d4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4270d5: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4270d7: jne 0x4270a1 */
  if (!zf) goto L_4270a1;
L_4270d9: /* 4270d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4270da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4270db: mov eax, esi */
  eax = esi;
/* 4270dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4270de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4270df: ret  */
  esp += 4; SPILL(); return;
}

void f_4270e0(void) {
  LOAD_REGS();
L_4270e0: /* 4270e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4270e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4270e2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4270e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4270e7: mov ebx, esi */
  ebx = esi;
/* 4270e9: mov edi, esi */
  edi = esi;
/* 4270eb: call 0x40137f */
  esp -= 4; W32(esp, 0x4270f0u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4270f0: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 4270f3: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4270f9: je 0x427100 */
  if (zf) goto L_427100;
L_4270fb: /* 4270fb: call 0x403c88 */
  esp -= 4; W32(esp, 0x427100u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_427100: /* 427100: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427104: jne 0x42712d */
  if (!zf) goto L_42712d;
L_427106: /* 427106: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427107: call 0x407cf7 */
  esp -= 4; W32(esp, 0x42710cu); SPILL(); f_407cf7(); if (g_unwind) return; RELOAD();
/* 42710c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42710d: jmp 0x427145 */
  goto L_427145;
L_42710f: /* 42710f: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 427112: mov cl, byte ptr [eax + ecx + 0x1d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x1du))) & 0xffu);
/* 427116: and cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 427119: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42711a: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42711c: je 0x42712d */
  if (zf) goto L_42712d;
L_42711e: /* 42711e: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 427120: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 427122: je 0x42713e */
  if (zf) goto L_42713e;
L_427124: /* 427124: mov dl, byte ptr [esi - 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xffffffffu))) & 0xffu);
/* 427127: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 427129: mov byte ptr [esi - 1], cl */
  W8((uint32_t)(esi + 0xffffffffu), (ecx & 0xffu));
/* 42712c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_42712d: /* 42712d: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 42712f: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 427131: jne 0x42710f */
  if (!zf) goto L_42710f;
L_427133: /* 427133: jmp 0x42713e */
  goto L_42713e;
L_427135: /* 427135: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 427137: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 427139: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 42713b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42713c: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
L_42713e: /* 42713e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 42713f: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 427141: jb 0x427135 */
  if (cf) goto L_427135;
L_427143: /* 427143: mov eax, ebx */
  eax = ebx;
L_427145: /* 427145: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 427146: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427147: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 427148: ret  */
  esp += 4; SPILL(); return;
}

void f_427149(void) {
  LOAD_REGS();
L_427149: /* 427149: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 42714d: xor eax, eax */
  eax = 0;
/* 42714f: cmp dword ptr [0x44b138], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b138u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427155: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427156: mov esi, ecx */
  esi = ecx;
/* 427158: jne 0x427168 */
  if (!zf) goto L_427168;
L_42715a: /* 42715a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42715e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42715f: call 0x407d2c */
  esp -= 4; W32(esp, 0x427164u); SPILL(); f_407d2c(); if (g_unwind) return; RELOAD();
/* 427164: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427165: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427166: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427167: ret  */
  esp += 4; SPILL(); return;
L_427168: /* 427168: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427169: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 42716d: mov edx, ebx */
  edx = ebx;
/* 42716f: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 427172: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427174: je 0x427191 */
  if (zf) goto L_427191;
L_427176: /* 427176: jmp 0x427188 */
  goto L_427188;
L_427178: /* 427178: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 42717a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42717b: cmp byte ptr [ecx], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42717d: je 0x427184 */
  if (zf) goto L_427184;
L_42717f: /* 42717f: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 427181: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 427182: jmp 0x427188 */
  goto L_427188;
L_427184: /* 427184: mov byte ptr [ecx - 1], 0x20 */
  W8((uint32_t)(ecx + 0xffffffffu), 0x20u);
L_427188: /* 427188: cmp byte ptr [ecx], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42718a: jne 0x427178 */
  if (!zf) goto L_427178;
L_42718c: /* 42718c: jmp 0x427195 */
  goto L_427195;
L_42718e: /* 42718e: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 427190: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_427191: /* 427191: cmp byte ptr [ecx], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427193: jne 0x42718e */
  if (!zf) goto L_42718e;
L_427195: /* 427195: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 427196: mov eax, esi */
  eax = esi;
/* 427198: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427199: ret  */
  esp += 4; SPILL(); return;
}

void f_42719a(void) {
  LOAD_REGS();
L_42719a: /* 42719a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42719b: mov ebp, esp */
  ebp = esp;
/* 42719d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42719e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42719f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4271a2: xor ebx, ebx */
  ebx = 0;
/* 4271a4: cmp dword ptr [esi + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4271a7: jne 0x4271b8 */
  if (!zf) goto L_4271b8;
L_4271a9: /* 4271a9: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4271ac: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4271af: call 0x407df8 */
  esp -= 4; W32(esp, 0x4271b4u); SPILL(); f_407df8(); if (g_unwind) return; RELOAD();
/* 4271b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4271b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4271b6: jmp 0x42720d */
  goto L_42720d;
L_4271b8: /* 4271b8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4271bb: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4271bd: je 0x42720a */
  if (zf) goto L_42720a;
L_4271bf: /* 4271bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4271c0: /* 4271c0: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 4271c3: jmp 0x4271ed */
  goto L_4271ed;
L_4271c5: /* 4271c5: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 4271c7: movzx edi, dl */
  edi = (uint32_t)((edx & 0xffu));
/* 4271ca: test byte ptr [edi + esi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + esi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4271cf: je 0x4271e8 */
  if (zf) goto L_4271e8;
L_4271d1: /* 4271d1: cmp dl, byte ptr [eax] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4271d3: jne 0x4271dd */
  if (!zf) goto L_4271dd;
L_4271d5: /* 4271d5: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 4271d8: cmp dl, byte ptr [eax + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4271db: je 0x4271f1 */
  if (zf) goto L_4271f1;
L_4271dd: /* 4271dd: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 4271e0: cmp byte ptr [edx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4271e2: je 0x4271f1 */
  if (zf) goto L_4271f1;
L_4271e4: /* 4271e4: mov ecx, edx */
  ecx = edx;
/* 4271e6: jmp 0x4271ec */
  goto L_4271ec;
L_4271e8: /* 4271e8: cmp dl, byte ptr [eax] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4271ea: je 0x4271f1 */
  if (zf) goto L_4271f1;
L_4271ec: /* 4271ec: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_4271ed: /* 4271ed: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4271ef: jne 0x4271c5 */
  if (!zf) goto L_4271c5;
L_4271f1: /* 4271f1: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4271f3: je 0x427209 */
  if (zf) goto L_427209;
L_4271f5: /* 4271f5: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 4271f8: test byte ptr [ecx + esi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + esi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4271fd: je 0x427204 */
  if (zf) goto L_427204;
L_4271ff: /* 4271ff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 427200: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427202: je 0x427209 */
  if (zf) goto L_427209;
L_427204: /* 427204: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 427205: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427207: jne 0x4271c0 */
  if (!zf) goto L_4271c0;
L_427209: /* 427209: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_42720a: /* 42720a: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_42720d: /* 42720d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42720e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42720f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 427210: ret  */
  esp += 4; SPILL(); return;
}

void f_427211(void) {
  LOAD_REGS();
L_427211: /* 427211: call 0x40137f */
  esp -= 4; W32(esp, 0x427216u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 427216: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 427219: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42721f: je 0x427226 */
  if (zf) goto L_427226;
L_427221: /* 427221: call 0x403c88 */
  esp -= 4; W32(esp, 0x427226u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_427226: /* 427226: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42722a: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42722e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42722f: call 0x42719a */
  esp -= 4; W32(esp, 0x427234u); SPILL(); f_42719a(); if (g_unwind) return; RELOAD();
/* 427234: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427237: ret  */
  esp += 4; SPILL(); return;
}

void f_427238(void) {
  LOAD_REGS();
L_427238: /* 427238: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427239: mov ebp, esp */
  ebp = esp;
/* 42723b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42723c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42723d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 427240: xor ebx, ebx */
  ebx = 0;
/* 427242: cmp dword ptr [esi + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427245: jne 0x42725f */
  if (!zf) goto L_42725f;
L_427247: /* 427247: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42724a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42724d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42724e: call 0x407df8 */
  esp -= 4; W32(esp, 0x427253u); SPILL(); f_407df8(); if (g_unwind) return; RELOAD();
/* 427253: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 427255: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427256: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427257: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 427259: neg cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42725b: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 42725d: jmp 0x4272b7 */
  goto L_4272b7;
L_42725f: /* 42725f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 427262: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427264: je 0x4272b1 */
  if (zf) goto L_4272b1;
L_427266: /* 427266: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_427267: /* 427267: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 42726a: jmp 0x427294 */
  goto L_427294;
L_42726c: /* 42726c: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 42726e: movzx edi, dl */
  edi = (uint32_t)((edx & 0xffu));
/* 427271: test byte ptr [edi + esi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + esi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 427276: je 0x42728f */
  if (zf) goto L_42728f;
L_427278: /* 427278: cmp dl, byte ptr [ecx] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42727a: jne 0x427284 */
  if (!zf) goto L_427284;
L_42727c: /* 42727c: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 42727f: cmp dl, byte ptr [ecx + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427282: je 0x427298 */
  if (zf) goto L_427298;
L_427284: /* 427284: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 427287: cmp byte ptr [edx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427289: je 0x427298 */
  if (zf) goto L_427298;
L_42728b: /* 42728b: mov eax, edx */
  eax = edx;
/* 42728d: jmp 0x427293 */
  goto L_427293;
L_42728f: /* 42728f: cmp dl, byte ptr [ecx] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427291: je 0x427298 */
  if (zf) goto L_427298;
L_427293: /* 427293: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_427294: /* 427294: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427296: jne 0x42726c */
  if (!zf) goto L_42726c;
L_427298: /* 427298: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42729a: je 0x4272b0 */
  if (zf) goto L_4272b0;
L_42729c: /* 42729c: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 42729f: test byte ptr [esi + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4272a4: je 0x4272ab */
  if (zf) goto L_4272ab;
L_4272a6: /* 4272a6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4272a7: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4272a9: je 0x4272b0 */
  if (zf) goto L_4272b0;
L_4272ab: /* 4272ab: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4272ac: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4272ae: jne 0x427267 */
  if (!zf) goto L_427267;
L_4272b0: /* 4272b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4272b1: /* 4272b1: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 4272b3: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4272b5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_4272b7: /* 4272b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4272b8: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4272ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4272bb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4272bc: ret  */
  esp += 4; SPILL(); return;
}

void f_4272bd(void) {
  LOAD_REGS();
L_4272bd: /* 4272bd: call 0x40137f */
  esp -= 4; W32(esp, 0x4272c2u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4272c2: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 4272c5: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4272cb: je 0x4272d2 */
  if (zf) goto L_4272d2;
L_4272cd: /* 4272cd: call 0x403c88 */
  esp -= 4; W32(esp, 0x4272d2u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_4272d2: /* 4272d2: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4272d6: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4272da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4272db: call 0x427238 */
  esp -= 4; W32(esp, 0x4272e0u); SPILL(); f_427238(); if (g_unwind) return; RELOAD();
/* 4272e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4272e3: ret  */
  esp += 4; SPILL(); return;
}

void f_4272e4(void) {
  LOAD_REGS();
L_4272e4: /* 4272e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4272e5: mov ebp, esp */
  ebp = esp;
/* 4272e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4272e8: call 0x40137f */
  esp -= 4; W32(esp, 0x4272edu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4272ed: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 4272f0: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4272f6: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4272f9: je 0x427303 */
  if (zf) goto L_427303;
L_4272fb: /* 4272fb: call 0x403c88 */
  esp -= 4; W32(esp, 0x427300u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 427300: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_427303: /* 427303: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427307: jne 0x427318 */
  if (!zf) goto L_427318;
L_427309: /* 427309: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42730c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42730f: call 0x4071c4 */
  esp -= 4; W32(esp, 0x427314u); SPILL(); f_4071c4(); if (g_unwind) return; RELOAD();
/* 427314: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427315: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427316: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 427317: ret  */
  esp += 4; SPILL(); return;
L_427318: /* 427318: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42731b: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42731e: jne 0x427325 */
  if (!zf) goto L_427325;
L_427320: /* 427320: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 427323: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 427324: ret  */
  esp += 4; SPILL(); return;
L_427325: /* 427325: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427326: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427327: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42732a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42732b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42732c: mov edi, esi */
  edi = esi;
/* 42732e: call 0x402493 */
  esp -= 4; W32(esp, 0x427333u); SPILL(); hle_strlen(); RELOAD();
/* 427333: mov ebx, esi */
  ebx = esi;
/* 427335: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427336: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 427338: call 0x402493 */
  esp -= 4; W32(esp, 0x42733du); SPILL(); hle_strlen(); RELOAD();
/* 42733d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42733e: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 427340: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427343: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427344: je 0x427386 */
  if (zf) goto L_427386;
L_427346: /* 427346: sub esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_427349: /* 427349: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42734b: ja 0x427386 */
  if ((!cf && !zf)) goto L_427386;
L_42734d: /* 42734d: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42734f: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 427351: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 427354: je 0x427368 */
  if (zf) goto L_427368;
L_427356: /* 427356: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 427358: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42735a: je 0x42738d */
  if (zf) goto L_42738d;
L_42735c: /* 42735c: cmp byte ptr [esi + eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42735f: jne 0x427368 */
  if (!zf) goto L_427368;
L_427361: /* 427361: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 427362: cmp byte ptr [esi + eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427366: jne 0x427356 */
  if (!zf) goto L_427356;
L_427368: /* 427368: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42736b: je 0x42738d */
  if (zf) goto L_42738d;
L_42736d: /* 42736d: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 427370: movzx eax, dl */
  eax = (uint32_t)((edx & 0xffu));
/* 427373: mov al, byte ptr [eax + ecx + 0x1d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x1du))) & 0xffu);
/* 427377: and al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 427379: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42737a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42737b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42737d: je 0x427381 */
  if (zf) goto L_427381;
L_42737f: /* 42737f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 427380: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_427381: /* 427381: cmp byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427384: jne 0x427349 */
  if (!zf) goto L_427349;
L_427386: /* 427386: xor eax, eax */
  eax = 0;
L_427388: /* 427388: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 427389: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42738a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42738b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42738c: ret  */
  esp += 4; SPILL(); return;
L_42738d: /* 42738d: mov eax, edi */
  eax = edi;
/* 42738f: jmp 0x427388 */
  goto L_427388;
}

void f_427391(void) {
  LOAD_REGS();
L_427391: /* 427391: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427392: mov ebp, esp */
  ebp = esp;
/* 427394: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 427395: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427396: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427397: call 0x40137f */
  esp -= 4; W32(esp, 0x42739cu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42739c: mov edi, eax */
  edi = eax;
/* 42739e: mov esi, dword ptr [edi + 0x60] */
  esi = R32((uint32_t)(edi + 0x60u));
/* 4273a1: cmp esi, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4273a7: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4273aa: je 0x4273b3 */
  if (zf) goto L_4273b3;
L_4273ac: /* 4273ac: call 0x403c88 */
  esp -= 4; W32(esp, 0x4273b1u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 4273b1: mov esi, eax */
  esi = eax;
L_4273b3: /* 4273b3: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4273b7: jne 0x4273c8 */
  if (!zf) goto L_4273c8;
L_4273b9: /* 4273b9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4273bc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4273bf: call 0x430091 */
  esp -= 4; W32(esp, 0x4273c4u); SPILL(); f_430091(); if (g_unwind) return; RELOAD();
/* 4273c4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4273c5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4273c6: jmp 0x427438 */
  goto L_427438;
L_4273c8: /* 4273c8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4273cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4273cd: jne 0x4273d6 */
  if (!zf) goto L_4273d6;
L_4273cf: /* 4273cf: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 4273d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4273d4: je 0x427436 */
  if (zf) goto L_427436;
L_4273d6: /* 4273d6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4273d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4273da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4273db: call 0x427238 */
  esp -= 4; W32(esp, 0x4273e0u); SPILL(); f_427238(); if (g_unwind) return; RELOAD();
/* 4273e0: mov edi, eax */
  edi = eax;
/* 4273e2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4273e5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4273e7: je 0x427436 */
  if (zf) goto L_427436;
L_4273e9: /* 4273e9: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 4273eb: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4273ed: je 0x427436 */
  if (zf) goto L_427436;
L_4273ef: /* 4273ef: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 4273f2: test byte ptr [esi + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4273f7: je 0x4273ff */
  if (zf) goto L_4273ff;
L_4273f9: /* 4273f9: cmp byte ptr [edi + 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4273fd: je 0x427436 */
  if (zf) goto L_427436;
L_4273ff: /* 4273ff: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 427402: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427403: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427404: call 0x411f88 */
  esp -= 4; W32(esp, 0x427409u); SPILL(); f_411f88(); if (g_unwind) return; RELOAD();
/* 427409: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42740c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42740e: je 0x42742a */
  if (zf) goto L_42742a;
L_427410: /* 427410: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 427412: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 427414: je 0x42742a */
  if (zf) goto L_42742a;
L_427416: /* 427416: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 427419: test byte ptr [ecx + esi + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + esi + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42741e: je 0x427424 */
  if (zf) goto L_427424;
L_427420: /* 427420: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 427423: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_427424: /* 427424: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 427427: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 427428: jmp 0x42742c */
  goto L_42742c;
L_42742a: /* 42742a: xor eax, eax */
  eax = 0;
L_42742c: /* 42742c: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 42742f: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 427432: mov eax, edi */
  eax = edi;
/* 427434: jmp 0x427438 */
  goto L_427438;
L_427436: /* 427436: xor eax, eax */
  eax = 0;
L_427438: /* 427438: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 427439: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42743a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42743b: ret  */
  esp += 4; SPILL(); return;
}

void f_42743c(void) {
  LOAD_REGS();
L_42743c: /* 42743c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42743d: mov ebp, esp */
  ebp = esp;
/* 42743f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427441: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427442: call 0x40137f */
  esp -= 4; W32(esp, 0x427447u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 427447: mov edi, dword ptr [eax + 0x60] */
  edi = R32((uint32_t)(eax + 0x60u));
/* 42744a: cmp edi, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427450: je 0x427459 */
  if (zf) goto L_427459;
L_427452: /* 427452: call 0x403c88 */
  esp -= 4; W32(esp, 0x427457u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 427457: mov edi, eax */
  edi = eax;
L_427459: /* 427459: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 42745c: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42745f: mov esi, ebx */
  esi = ebx;
/* 427461: je 0x4274b6 */
  if (zf) goto L_4274b6;
L_427463: /* 427463: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 427466: lea eax, [ecx + edi] */
  eax = (uint32_t)(ecx + edi);
/* 427469: mov dl, byte ptr [eax + 0x1d] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1du))) & 0xffu);
/* 42746c: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42746f: je 0x4274a2 */
  if (zf) goto L_4274a2;
L_427471: /* 427471: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 427473: push dword ptr [edi + 4] */
  { uint32_t v = R32((uint32_t)(edi + 0x4u)); esp -= 4; W32(esp, v); }
/* 427476: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 427479: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42747b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42747c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42747e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42747f: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 427484: push dword ptr [edi + 0xc] */
  { uint32_t v = R32((uint32_t)(edi + 0xcu)); esp -= 4; W32(esp, v); }
/* 427487: call 0x40462b */
  esp -= 4; W32(esp, 0x42748cu); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 42748c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42748f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427491: je 0x4274bd */
  if (zf) goto L_4274bd;
L_427493: /* 427493: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 427496: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 427499: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 42749b: jle 0x4274b0 */
  if ((zf || sf != of)) goto L_4274b0;
L_42749d: /* 42749d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42749e: mov byte ptr [esi], ch */
  W8((uint32_t)(esi), ((ecx >> 8) & 0xffu));
/* 4274a0: jmp 0x4274b0 */
  goto L_4274b0;
L_4274a2: /* 4274a2: test dl, 0x20 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4274a5: je 0x4274ae */
  if (zf) goto L_4274ae;
L_4274a7: /* 4274a7: movsx ecx, byte ptr [eax + 0x11d] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0x11du)));
L_4274ae: /* 4274ae: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
L_4274b0: /* 4274b0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4274b1: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4274b4: jne 0x427463 */
  if (!zf) goto L_427463;
L_4274b6: /* 4274b6: mov eax, ebx */
  eax = ebx;
L_4274b8: /* 4274b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4274b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4274ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4274bb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4274bc: ret  */
  esp += 4; SPILL(); return;
L_4274bd: /* 4274bd: xor eax, eax */
  eax = 0;
/* 4274bf: jmp 0x4274b8 */
  goto L_4274b8;
}

void f_4274c1(void) {
  LOAD_REGS();
L_4274c1: /* 4274c1: jne 0x4274c4 */
  if (!zf) goto L_4274c4;
L_4274c3: /* 4274c3: ret  */
  esp += 4; SPILL(); return;
L_4274c4: /* 4274c4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4274c5: mov ebp, esp */
  ebp = esp;
/* 4274c7: sub esp, 0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4274ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4274cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4274cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4274cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4274ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4274cf: guest_badaddr(0x4274cf); return;
}

void f_4274d0(void) {
  LOAD_REGS();
L_4274d0: /* 4274d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4274d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4274d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4274d3: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 4274d4: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4274d5: mov esp, ebp */
  esp = ebp;
/* 4274d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4274d8: ret  */
  esp += 4; SPILL(); return;
}

void f_4274d9(void) {
  LOAD_REGS();
L_4274d9: /* 4274d9: or al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4274db: mov byte ptr [0x44a99c], al */
  W8((uint32_t)(0x44a99cu), (eax & 0xffu));
/* 4274e0: mov byte ptr [0x44a99d], al */
  W8((uint32_t)(0x44a99du), (eax & 0xffu));
/* 4274e5: mov byte ptr [0x44a99e], al */
  W8((uint32_t)(0x44a99eu), (eax & 0xffu));
/* 4274ea: mov byte ptr [0x44a99f], al */
  W8((uint32_t)(0x44a99fu), (eax & 0xffu));
/* 4274ef: mov byte ptr [0x44a9a0], al */
  W8((uint32_t)(0x44a9a0u), (eax & 0xffu));
/* 4274f4: mov byte ptr [0x44a9a1], al */
  W8((uint32_t)(0x44a9a1u), (eax & 0xffu));
/* 4274f9: mov byte ptr [0x44a9a2], al */
  W8((uint32_t)(0x44a9a2u), (eax & 0xffu));
/* 4274fe: mov byte ptr [0x44a9a3], al */
  W8((uint32_t)(0x44a9a3u), (eax & 0xffu));
/* 427503: xor eax, eax */
  eax = 0;
/* 427505: ret  */
  esp += 4; SPILL(); return;
}

void f_427506(void) {
  LOAD_REGS();
L_427506: /* 427506: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427507: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427508: call 0x40137f */
  esp -= 4; W32(esp, 0x42750du); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42750d: mov esi, eax */
  esi = eax;
/* 42750f: xor edi, edi */
  edi = 0;
/* 427511: cmp dword ptr [esi + 0x28], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x28u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427514: jne 0x42752f */
  if (!zf) goto L_42752f;
L_427516: /* 427516: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 42751b: call 0x4010eb */
  esp -= 4; W32(esp, 0x427520u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 427520: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427522: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427523: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 427526: jne 0x42752f */
  if (!zf) goto L_42752f;
L_427528: /* 427528: xor eax, eax */
  eax = 0;
/* 42752a: jmp 0x4275b2 */
  goto L_4275b2;
L_42752f: /* 42752f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 427533: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427535: mov esi, dword ptr [esi + 0x28] */
  esi = R32((uint32_t)(esi + 0x28u));
/* 427538: mov word ptr [esi], di */
  W16((uint32_t)(esi), (edi & 0xffffu));
/* 42753b: je 0x427557 */
  if (zf) goto L_427557;
L_42753d: /* 42753d: cmp word ptr [eax], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 427540: je 0x427557 */
  if (zf) goto L_427557;
L_427542: /* 427542: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427543: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427544: call 0x4013ea */
  esp -= 4; W32(esp, 0x427549u); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 427549: push 0x440d88 */
  { uint32_t v = 0x440d88u; esp -= 4; W32(esp, v); }
/* 42754e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42754f: call 0x4013ea */
  esp -= 4; W32(esp, 0x427554u); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 427554: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_427557: /* 427557: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42755cu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42755c: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42755e: jl 0x427578 */
  if ((sf != of)) goto L_427578;
L_427560: /* 427560: call 0x4102a5 */
  esp -= 4; W32(esp, 0x427565u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 427565: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 427567: cmp eax, dword ptr [0x4491c8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x4491c8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42756d: jge 0x427578 */
  if ((sf == of)) goto L_427578;
L_42756f: /* 42756f: call 0x4102a5 */
  esp -= 4; W32(esp, 0x427574u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 427574: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 427576: jmp 0x42757e */
  goto L_42757e;
L_427578: /* 427578: mov edi, dword ptr [0x4491c8] */
  edi = R32((uint32_t)(0x4491c8u));
L_42757e: /* 42757e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42757f: call 0x4013b8 */
  esp -= 4; W32(esp, 0x427584u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 427584: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427585: mov ecx, 0x86 */
  ecx = 0x86u;
/* 42758a: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 42758c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42758d: push dword ptr [edi*4 + 0x449118] */
  { uint32_t v = R32((uint32_t)(edi*4 + 0x449118u)); esp -= 4; W32(esp, v); }
/* 427594: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427595: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42759au); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42759a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42759b: lea eax, [esi + eax*2] */
  eax = (uint32_t)(esi + eax*2);
/* 42759e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42759f: call 0x4176f3 */
  esp -= 4; W32(esp, 0x4275a4u); SPILL(); f_4176f3(); if (g_unwind) return; RELOAD();
/* 4275a4: push 0x440d84 */
  { uint32_t v = 0x440d84u; esp -= 4; W32(esp, v); }
/* 4275a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4275aa: call 0x4013ea */
  esp -= 4; W32(esp, 0x4275afu); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 4275af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4275b2: /* 4275b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4275b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4275b4: ret  */
  esp += 4; SPILL(); return;
}

void f_4275b5(void) {
  LOAD_REGS();
L_4275b5: /* 4275b5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4275b6: mov ebp, esp */
  ebp = esp;
/* 4275b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4275b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4275ba: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 4275bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4275be: xor edi, edi */
  edi = 0;
/* 4275c0: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4275c2: jbe 0x4275dc */
  if ((cf | zf)) goto L_4275dc;
L_4275c4: /* 4275c4: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_4275c7: /* 4275c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4275c8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4275cb: call dword ptr [ebp + 0x18] */
  { uint32_t t = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, 0x4275ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4275ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4275d0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4275d1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4275d2: je 0x4275e3 */
  if (zf) goto L_4275e3;
L_4275d4: /* 4275d4: add ebx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4275d7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4275d8: cmp edi, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4275da: jb 0x4275c7 */
  if (cf) goto L_4275c7;
L_4275dc: /* 4275dc: xor eax, eax */
  eax = 0;
L_4275de: /* 4275de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4275df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4275e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4275e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4275e2: ret  */
  esp += 4; SPILL(); return;
L_4275e3: /* 4275e3: mov eax, ebx */
  eax = ebx;
/* 4275e5: jmp 0x4275de */
  goto L_4275de;
}

void f_4275e7(void) {
  LOAD_REGS();
L_4275e7: /* 4275e7: and dword ptr [esp + 8], 0x1f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 4275ec: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4275f0: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4275f2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4275f3: sub ecx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 4275f7: mov eax, edx */
  eax = edx;
/* 4275f9: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
  }
/* 4275fb: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4275ff: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 427601: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 427603: ret  */
  esp += 4; SPILL(); return;
}

void f_427604(void) {
  LOAD_REGS();
L_427604: /* 427604: and dword ptr [esp + 8], 0x1f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 427609: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 42760d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42760f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427610: sub ecx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 427614: mov eax, edx */
  eax = edx;
/* 427616: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
  }
/* 427618: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 42761c: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 42761e: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 427620: ret  */
  esp += 4; SPILL(); return;
}

void f_427621(void) {
  LOAD_REGS();
L_427621: /* 427621: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427622: mov ebp, esp */
  ebp = esp;
/* 427624: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427625: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 427628: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427629: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 42762c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42762d: xor edi, edi */
  edi = 0;
/* 42762f: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 427631: jbe 0x427648 */
  if ((cf | zf)) goto L_427648;
L_427633: /* 427633: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427634: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 427637: call dword ptr [ebp + 0x18] */
  { uint32_t t = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, 0x42763au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 42763a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42763c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42763d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42763e: je 0x427659 */
  if (zf) goto L_427659;
L_427640: /* 427640: add ebx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 427643: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 427644: cmp edi, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 427646: jb 0x427633 */
  if (cf) goto L_427633;
L_427648: /* 427648: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42764b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42764e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42764f: call 0x40126b */
  esp -= 4; W32(esp, 0x427654u); SPILL(); hle_memcpy(); RELOAD();
/* 427654: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427657: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
L_427659: /* 427659: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42765a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42765b: mov eax, ebx */
  eax = ebx;
/* 42765d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42765e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 42765f: ret  */
  esp += 4; SPILL(); return;
}

void f_427660(void) {
  LOAD_REGS();
L_427660: /* 427660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427661: mov ebp, esp */
  ebp = esp;
/* 427663: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 427666: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427668: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427669: je 0x42767d */
  if (zf) goto L_42767d;
L_42766b: /* 42766b: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 42766d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42766f: je 0x42767d */
  if (zf) goto L_42767d;
L_427671: /* 427671: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 427674: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 427676: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 427677: mov byte ptr [esi], 0x3a */
  W8((uint32_t)(esi), 0x3au);
/* 42767a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42767b: jmp 0x427680 */
  goto L_427680;
L_42767d: /* 42767d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_427680: /* 427680: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 427683: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427685: mov ecx, edx */
  ecx = edx;
/* 427687: je 0x4276b0 */
  if (zf) goto L_4276b0;
L_427689: /* 427689: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 42768b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42768d: je 0x4276b0 */
  if (zf) goto L_4276b0;
L_42768f: /* 42768f: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 427691: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 427692: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 427693: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 427695: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 427697: jne 0x42768f */
  if (!zf) goto L_42768f;
L_427699: /* 427699: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42769a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 42769b: call 0x411f2a */
  esp -= 4; W32(esp, 0x4276a0u); SPILL(); f_411f2a(); if (g_unwind) return; RELOAD();
/* 4276a0: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4276a2: cmp al, 0x2f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4276a4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4276a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4276a6: je 0x4276b0 */
  if (zf) goto L_4276b0;
L_4276a8: /* 4276a8: cmp al, 0x5c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4276aa: je 0x4276b0 */
  if (zf) goto L_4276b0;
L_4276ac: /* 4276ac: mov byte ptr [esi], 0x5c */
  W8((uint32_t)(esi), 0x5cu);
/* 4276af: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4276b0: /* 4276b0: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4276b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4276b5: mov ecx, eax */
  ecx = eax;
/* 4276b7: je 0x4276c7 */
  if (zf) goto L_4276c7;
L_4276b9: /* 4276b9: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4276bb: jmp 0x4276c3 */
  goto L_4276c3;
L_4276bd: /* 4276bd: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 4276bf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4276c0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4276c1: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
L_4276c3: /* 4276c3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4276c5: jne 0x4276bd */
  if (!zf) goto L_4276bd;
L_4276c7: /* 4276c7: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4276ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4276cc: mov ecx, eax */
  ecx = eax;
/* 4276ce: je 0x4276ea */
  if (zf) goto L_4276ea;
L_4276d0: /* 4276d0: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4276d2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4276d4: je 0x4276de */
  if (zf) goto L_4276de;
L_4276d6: /* 4276d6: cmp al, 0x2e */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4276d8: je 0x4276de */
  if (zf) goto L_4276de;
L_4276da: /* 4276da: mov byte ptr [esi], 0x2e */
  W8((uint32_t)(esi), 0x2eu);
/* 4276dd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4276de: /* 4276de: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 4276e0: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 4276e2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4276e3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4276e4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4276e6: jne 0x4276de */
  if (!zf) goto L_4276de;
L_4276e8: /* 4276e8: jmp 0x4276ed */
  goto L_4276ed;
L_4276ea: /* 4276ea: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
L_4276ed: /* 4276ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4276ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4276ef: ret  */
  esp += 4; SPILL(); return;
}

void f_4276f0(void) {
  LOAD_REGS();
L_4276f0: /* 4276f0: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* 4276f2: call 0x40f95e */
  esp -= 4; W32(esp, 0x4276f7u); SPILL(); f_40f95e(); if (g_unwind) return; RELOAD();
/* 4276f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4276f8: ret  */
  esp += 4; SPILL(); return;
}

void f_4276f9(void) {
  LOAD_REGS();
L_4276f9: /* 4276f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4276fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4276fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4276fc: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 427700: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427701: call 0x402493 */
  esp -= 4; W32(esp, 0x427706u); SPILL(); hle_strlen(); RELOAD();
/* 427706: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 427707: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427708: call 0x4010eb */
  esp -= 4; W32(esp, 0x42770du); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42770d: mov esi, eax */
  esi = eax;
/* 42770f: xor ebp, ebp */
  ebp = 0;
/* 427711: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427713: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427714: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427715: je 0x427734 */
  if (zf) goto L_427734;
L_427717: /* 427717: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427718: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427719: call 0x404b3a */
  esp -= 4; W32(esp, 0x42771eu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 42771e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 427720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427721: call 0x41683e */
  esp -= 4; W32(esp, 0x427726u); SPILL(); f_41683e(); if (g_unwind) return; RELOAD();
/* 427726: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427729: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42772b: je 0x427739 */
  if (zf) goto L_427739;
L_42772d: /* 42772d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42772e: call 0x401156 */
  esp -= 4; W32(esp, 0x427733u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 427733: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_427734: /* 427734: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 427737: jmp 0x427795 */
  goto L_427795;
L_427739: /* 427739: cmp dword ptr [0x4491fc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491fcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42773f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427740: je 0x427792 */
  if (zf) goto L_427792;
L_427742: /* 427742: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427743: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427744: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 427746: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427747: mov edi, dword ptr [0x4390bc] */
  edi = R32((uint32_t)(0x4390bcu));
/* 42774d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42774e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42774f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x427751u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 427751: mov esi, eax */
  esi = eax;
/* 427753: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427755: jne 0x42775c */
  if (!zf) goto L_42775c;
L_427757: /* 427757: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42775a: jmp 0x427794 */
  goto L_427794;
L_42775c: /* 42775c: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 42775f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427760: call 0x4010eb */
  esp -= 4; W32(esp, 0x427765u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 427765: mov ebx, eax */
  ebx = eax;
/* 427767: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427769: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42776a: je 0x427757 */
  if (zf) goto L_427757;
L_42776c: /* 42776c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42776d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42776e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 427770: push dword ptr [esp + 0x20] */
  { uint32_t v = R32((uint32_t)(esp + 0x20u)); esp -= 4; W32(esp, v); }
/* 427774: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427775: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427776: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x427778u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 427778: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42777a: je 0x427789 */
  if (zf) goto L_427789;
L_42777c: /* 42777c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42777d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42777e: call 0x4057d5 */
  esp -= 4; W32(esp, 0x427783u); SPILL(); f_4057d5(); if (g_unwind) return; RELOAD();
/* 427783: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427785: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427786: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427787: je 0x427792 */
  if (zf) goto L_427792;
L_427789: /* 427789: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42778a: call 0x401156 */
  esp -= 4; W32(esp, 0x42778fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42778f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427790: jmp 0x427757 */
  goto L_427757;
L_427792: /* 427792: xor eax, eax */
  eax = 0;
L_427794: /* 427794: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_427795: /* 427795: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 427796: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427797: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 427798: ret  */
  esp += 4; SPILL(); return;
}

void f_427799(void) {
  LOAD_REGS();
L_427799: /* 427799: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42779b: push 0x440d90 */
  { uint32_t v = 0x440d90u; esp -= 4; W32(esp, v); }
/* 4277a0: call 0x40101f */
  esp -= 4; W32(esp, 0x4277a5u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4277a5: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 4277a7: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4277acu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4277ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4277ad: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4277b1: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4277b4: call 0x4276f9 */
  esp -= 4; W32(esp, 0x4277b9u); SPILL(); f_4276f9(); if (g_unwind) return; RELOAD();
/* 4277b9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4277ba: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 4277bd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4277c1: call 0x4277cf */
  esp -= 4; W32(esp, 0x4277c6u); SPILL(); f_4277cf(); if (g_unwind) return; RELOAD();
/* 4277c6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4277c9: call 0x40105a */
  esp -= 4; W32(esp, 0x4277ceu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4277ce: ret  */
  esp += 4; SPILL(); return;
}

void f_4277cf(void) {
  LOAD_REGS();
L_4277cf: /* 4277cf: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 4277d1: call 0x4011d9 */
  esp -= 4; W32(esp, 0x4277d6u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 4277d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4277d7: ret  */
  esp += 4; SPILL(); return;
}

void f_4277d8(void) {
  LOAD_REGS();
L_4277d8: /* 4277d8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4277d9: mov ebp, esp */
  ebp = esp;
/* 4277db: sub esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4277e1: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4277e6: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4277e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4277ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4277ec: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4277ef: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4277f2: call 0x418bc2 */
  esp -= 4; W32(esp, 0x4277f7u); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 4277f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4277f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4277fa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4277fb: jne 0x427820 */
  if (!zf) goto L_427820;
L_4277fd: /* 4277fd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 427800: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 427805: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 427808: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427809: call 0x418dcc */
  esp -= 4; W32(esp, 0x42780eu); SPILL(); f_418dcc(); if (g_unwind) return; RELOAD();
/* 42780e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427811: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427813: jne 0x4278d0 */
  if (!zf) goto L_4278d0;
L_427819: /* 427819: and byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 42781b: jmp 0x4278d0 */
  goto L_4278d0;
L_427820: /* 427820: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 427823: call 0x4164c5 */
  esp -= 4; W32(esp, 0x427828u); SPILL(); f_4164c5(); if (g_unwind) return; RELOAD();
/* 427828: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42782a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42782b: jne 0x427838 */
  if (!zf) goto L_427838;
L_42782d: /* 42782d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 427830: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 427833: jmp 0x4278d0 */
  goto L_4278d0;
L_427838: /* 427838: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42783a: mov edi, 0x104 */
  edi = 0x104u;
/* 42783f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427840: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* 427846: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 427847: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427848: jmp 0x4278b9 */
  goto L_4278b9;
L_42784a: /* 42784a: cmp byte ptr [ebp - 0x110], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffef0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427851: je 0x4278c8 */
  if (zf) goto L_4278c8;
L_427853: /* 427853: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* 427859: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42785a: call 0x402493 */
  esp -= 4; W32(esp, 0x42785fu); SPILL(); hle_strlen(); RELOAD();
/* 42785f: mov ebx, eax */
  ebx = eax;
/* 427861: lea esi, [ebp + ebx - 0x110] */
  esi = (uint32_t)(ebp + ebx + 0xfffffef0u);
/* 427868: movsx eax, byte ptr [esi - 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi + 0xffffffffu)));
/* 42786c: cmp eax, 0x2f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42786f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427870: je 0x427881 */
  if (zf) goto L_427881;
L_427872: /* 427872: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427875: je 0x427881 */
  if (zf) goto L_427881;
L_427877: /* 427877: cmp eax, 0x3a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42787a: je 0x427881 */
  if (zf) goto L_427881;
L_42787c: /* 42787c: mov byte ptr [esi], 0x5c */
  W8((uint32_t)(esi), 0x5cu);
/* 42787f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 427880: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_427881: /* 427881: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 427884: call 0x402493 */
  esp -= 4; W32(esp, 0x427889u); SPILL(); hle_strlen(); RELOAD();
/* 427889: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42788b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42788d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42788e: ja 0x4278ae */
  if ((!cf && !zf)) goto L_4278ae;
L_427890: /* 427890: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 427893: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427894: call 0x404b3a */
  esp -= 4; W32(esp, 0x427899u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 427899: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* 42789f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4278a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4278a2: call 0x418bc2 */
  esp -= 4; W32(esp, 0x4278a7u); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 4278a7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4278aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4278ac: je 0x4278de */
  if (zf) goto L_4278de;
L_4278ae: /* 4278ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4278af: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* 4278b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4278b6: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
L_4278b9: /* 4278b9: call 0x4283df */
  esp -= 4; W32(esp, 0x4278beu); SPILL(); f_4283df(); if (g_unwind) return; RELOAD();
/* 4278be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4278c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4278c3: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 4278c6: jne 0x42784a */
  if (!zf) goto L_42784a;
L_4278c8: /* 4278c8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4278cb: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
L_4278ce: /* 4278ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4278cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4278d0: /* 4278d0: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4278d3: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4278d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4278d7: call 0x4013ab */
  esp -= 4; W32(esp, 0x4278dcu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4278dc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4278dd: ret  */
  esp += 4; SPILL(); return;
L_4278de: /* 4278de: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* 4278e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4278e5: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4278e8: call 0x404b3a */
  esp -= 4; W32(esp, 0x4278edu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 4278ed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4278ee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4278ef: jmp 0x4278ce */
  goto L_4278ce;
}

void f_4278f1(void) {
  LOAD_REGS();
L_4278f1: /* 4278f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4278f2: mov ebp, esp */
  ebp = esp;
/* 4278f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4278f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4278f6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4278fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4278fb: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4278fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4278ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427900: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427901: call 0x402493 */
  esp -= 4; W32(esp, 0x427906u); SPILL(); hle_strlen(); RELOAD();
/* 427906: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 427909: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42790a: jb 0x42792d */
  if (cf) goto L_42792d;
L_42790c: /* 42790c: cmp byte ptr [ebx + 1], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x1u))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427910: jne 0x42792d */
  if (!zf) goto L_42792d;
L_427912: /* 427912: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 427915: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427917: je 0x427929 */
  if (zf) goto L_427929;
L_427919: /* 427919: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42791b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42791c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42791d: call 0x411e03 */
  esp -= 4; W32(esp, 0x427922u); SPILL(); f_411e03(); if (g_unwind) return; RELOAD();
/* 427922: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427925: and byte ptr [esi + 2], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0x2u), r);
  }
L_427929: /* 427929: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 42792a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 42792b: jmp 0x427937 */
  goto L_427937;
L_42792d: /* 42792d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 427930: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427932: je 0x427937 */
  if (zf) goto L_427937;
L_427934: /* 427934: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
L_427937: /* 427937: and dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42793b: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42793e: mov eax, ebx */
  eax = ebx;
/* 427940: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 427943: mov esi, 0xff */
  esi = 0xffu;
/* 427948: je 0x4279af */
  if (zf) goto L_4279af;
L_42794a: /* 42794a: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 42794c: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 42794f: test byte ptr [edx + 0x449341], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x449341u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 427956: je 0x42795b */
  if (zf) goto L_42795b;
L_427958: /* 427958: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 427959: jmp 0x427975 */
  goto L_427975;
L_42795b: /* 42795b: cmp cl, 0x2f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42795e: je 0x42796f */
  if (zf) goto L_42796f;
L_427960: /* 427960: cmp cl, 0x5c */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427963: je 0x42796f */
  if (zf) goto L_42796f;
L_427965: /* 427965: cmp cl, 0x2e */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427968: jne 0x427975 */
  if (!zf) goto L_427975;
L_42796a: /* 42796a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 42796d: jmp 0x427975 */
  goto L_427975;
L_42796f: /* 42796f: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 427972: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
L_427975: /* 427975: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 427976: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427979: jne 0x42794a */
  if (!zf) goto L_42794a;
L_42797b: /* 42797b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42797e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427980: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 427983: je 0x4279af */
  if (zf) goto L_4279af;
L_427985: /* 427985: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427989: je 0x4279aa */
  if (zf) goto L_4279aa;
L_42798b: /* 42798b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 42798d: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42798f: jb 0x427993 */
  if (cf) goto L_427993;
L_427991: /* 427991: mov edi, esi */
  edi = esi;
L_427993: /* 427993: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427994: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427995: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 427998: call 0x411e03 */
  esp -= 4; W32(esp, 0x42799du); SPILL(); f_411e03(); if (g_unwind) return; RELOAD();
/* 42799d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4279a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4279a3: and byte ptr [eax + edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + edi), r);
  }
/* 4279a7: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
L_4279aa: /* 4279aa: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4279ad: jmp 0x4279b9 */
  goto L_4279b9;
L_4279af: /* 4279af: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 4279b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4279b4: je 0x4279b9 */
  if (zf) goto L_4279b9;
L_4279b6: /* 4279b6: and byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ecx), r);
  }
L_4279b9: /* 4279b9: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4279bc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4279be: je 0x427a0c */
  if (zf) goto L_427a0c;
L_4279c0: /* 4279c0: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4279c2: jb 0x427a0c */
  if (cf) goto L_427a0c;
L_4279c4: /* 4279c4: cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4279c8: je 0x4279e9 */
  if (zf) goto L_4279e9;
L_4279ca: /* 4279ca: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4279cc: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4279ce: jb 0x4279d2 */
  if (cf) goto L_4279d2;
L_4279d0: /* 4279d0: mov edi, esi */
  edi = esi;
L_4279d2: /* 4279d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4279d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4279d4: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4279d7: call 0x411e03 */
  esp -= 4; W32(esp, 0x4279dcu); SPILL(); f_411e03(); if (g_unwind) return; RELOAD();
/* 4279dc: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4279df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4279e2: and byte ptr [eax + edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + edi), r);
  }
/* 4279e6: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
L_4279e9: /* 4279e9: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 4279ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4279ee: je 0x427a34 */
  if (zf) goto L_427a34;
L_4279f0: /* 4279f0: sub eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4279f3: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4279f5: jae 0x4279f9 */
  if (!cf) goto L_4279f9;
L_4279f7: /* 4279f7: mov esi, eax */
  esi = eax;
L_4279f9: /* 4279f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4279fa: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4279fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4279fe: call 0x411e03 */
  esp -= 4; W32(esp, 0x427a03u); SPILL(); f_411e03(); if (g_unwind) return; RELOAD();
/* 427a03: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427a06: and byte ptr [esi + edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + edi), r);
  }
/* 427a0a: jmp 0x427a34 */
  goto L_427a34;
L_427a0c: /* 427a0c: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 427a0f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427a11: je 0x427a2a */
  if (zf) goto L_427a2a;
L_427a13: /* 427a13: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 427a15: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 427a17: jae 0x427a1b */
  if (!cf) goto L_427a1b;
L_427a19: /* 427a19: mov esi, eax */
  esi = eax;
L_427a1b: /* 427a1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427a1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427a1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427a1e: call 0x411e03 */
  esp -= 4; W32(esp, 0x427a23u); SPILL(); f_411e03(); if (g_unwind) return; RELOAD();
/* 427a23: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427a26: and byte ptr [esi + edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + edi), r);
  }
L_427a2a: /* 427a2a: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 427a2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427a2f: je 0x427a34 */
  if (zf) goto L_427a34;
L_427a31: /* 427a31: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
L_427a34: /* 427a34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 427a35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427a36: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 427a37: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 427a38: ret  */
  esp += 4; SPILL(); return;
}

void f_427a39(void) {
  LOAD_REGS();
L_427a39: /* 427a39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427a3a: call 0x40137f */
  esp -= 4; W32(esp, 0x427a3fu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 427a3f: mov esi, eax */
  esi = eax;
/* 427a41: cmp dword ptr [esi + 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427a45: jne 0x427a5b */
  if (!zf) goto L_427a5b;
L_427a47: /* 427a47: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 427a4c: call 0x4010eb */
  esp -= 4; W32(esp, 0x427a51u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 427a51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427a53: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427a54: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 427a57: jne 0x427a5b */
  if (!zf) goto L_427a5b;
L_427a59: /* 427a59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427a5a: ret  */
  esp += 4; SPILL(); return;
L_427a5b: /* 427a5b: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 427a5e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 427a62: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 427a65: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427a67: je 0x427a83 */
  if (zf) goto L_427a83;
L_427a69: /* 427a69: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 427a6c: je 0x427a83 */
  if (zf) goto L_427a83;
L_427a6e: /* 427a6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427a6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427a70: call 0x401d57 */
  esp -= 4; W32(esp, 0x427a75u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 427a75: push 0x440d9c */
  { uint32_t v = 0x440d9cu; esp -= 4; W32(esp, v); }
/* 427a7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427a7b: call 0x401d57 */
  esp -= 4; W32(esp, 0x427a80u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 427a80: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_427a83: /* 427a83: call 0x4102a5 */
  esp -= 4; W32(esp, 0x427a88u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 427a88: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 427a8b: jl 0x427aa5 */
  if ((sf != of)) goto L_427aa5;
L_427a8d: /* 427a8d: call 0x4102a5 */
  esp -= 4; W32(esp, 0x427a92u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 427a92: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 427a94: cmp eax, dword ptr [0x4491c8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x4491c8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 427a9a: jge 0x427aa5 */
  if ((sf == of)) goto L_427aa5;
L_427a9c: /* 427a9c: call 0x4102a5 */
  esp -= 4; W32(esp, 0x427aa1u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 427aa1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 427aa3: jmp 0x427aaa */
  goto L_427aaa;
L_427aa5: /* 427aa5: mov eax, dword ptr [0x4491c8] */
  eax = R32((uint32_t)(0x4491c8u));
L_427aaa: /* 427aaa: push dword ptr [eax*4 + 0x449118] */
  { uint32_t v = R32((uint32_t)(eax*4 + 0x449118u)); esp -= 4; W32(esp, v); }
/* 427ab1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427ab2: call 0x401d57 */
  esp -= 4; W32(esp, 0x427ab7u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 427ab7: push 0x43e950 */
  { uint32_t v = 0x43e950u; esp -= 4; W32(esp, v); }
/* 427abc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427abd: call 0x401d57 */
  esp -= 4; W32(esp, 0x427ac2u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 427ac2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427ac5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427ac6: ret  */
  esp += 4; SPILL(); return;
}

void f_427ac7(void) {
  LOAD_REGS();
L_427ac7: /* 427ac7: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 427acb: mov eax, dword ptr [0x44f3dc] */
  eax = R32((uint32_t)(0x44f3dcu));
/* 427ad0: and ecx, 0x180 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x180u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 427ad6: mov dword ptr [0x44f3dc], ecx */
  W32((uint32_t)(0x44f3dcu), ecx);
/* 427adc: ret  */
  esp += 4; SPILL(); return;
}

void f_427add(void) {
  LOAD_REGS();
L_427add: /* 427add: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427ade: call 0x40137f */
  esp -= 4; W32(esp, 0x427ae3u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 427ae3: mov esi, eax */
  esi = eax;
/* 427ae5: cmp dword ptr [esi + 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x28u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427ae9: jne 0x427b04 */
  if (!zf) goto L_427b04;
L_427aeb: /* 427aeb: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 427af0: call 0x4010eb */
  esp -= 4; W32(esp, 0x427af5u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 427af5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427af7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427af8: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 427afb: jne 0x427b04 */
  if (!zf) goto L_427b04;
L_427afd: /* 427afd: mov esi, 0x44f4e8 */
  esi = 0x44f4e8u;
/* 427b02: jmp 0x427b07 */
  goto L_427b07;
L_427b04: /* 427b04: mov esi, dword ptr [esi + 0x28] */
  esi = R32((uint32_t)(esi + 0x28u));
L_427b07: /* 427b07: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 427b0b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 427b0d: mov eax, dword ptr [0x4491c8] */
  eax = R32((uint32_t)(0x4491c8u));
/* 427b12: jl 0x427b1a */
  if ((sf != of)) goto L_427b1a;
L_427b14: /* 427b14: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 427b16: jge 0x427b1a */
  if ((sf == of)) goto L_427b1a;
L_427b18: /* 427b18: mov eax, ecx */
  eax = ecx;
L_427b1a: /* 427b1a: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 427b1f: push dword ptr [eax*4 + 0x449118] */
  { uint32_t v = R32((uint32_t)(eax*4 + 0x449118u)); esp -= 4; W32(esp, v); }
/* 427b26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427b27: call 0x4176f3 */
  esp -= 4; W32(esp, 0x427b2cu); SPILL(); f_4176f3(); if (g_unwind) return; RELOAD();
/* 427b2c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427b2f: mov eax, esi */
  eax = esi;
/* 427b31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427b32: ret  */
  esp += 4; SPILL(); return;
}

void f_427b33(void) {
  LOAD_REGS();
L_427b33: /* 427b33: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427b34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427b35: mov esi, dword ptr [0x4491fc] */
  esi = R32((uint32_t)(0x4491fcu));
/* 427b3b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427b3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427b3e: jne 0x427b5b */
  if (!zf) goto L_427b5b;
L_427b40: /* 427b40: cmp dword ptr [0x4491f4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491f4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427b46: je 0x427b9a */
  if (zf) goto L_427b9a;
L_427b48: /* 427b48: call 0x40576b */
  esp -= 4; W32(esp, 0x427b4du); SPILL(); f_40576b(); if (g_unwind) return; RELOAD();
/* 427b4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427b4f: jne 0x427b9a */
  if (!zf) goto L_427b9a;
L_427b51: /* 427b51: mov esi, dword ptr [0x4491fc] */
  esi = R32((uint32_t)(0x4491fcu));
/* 427b57: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427b59: je 0x427b9a */
  if (zf) goto L_427b9a;
L_427b5b: /* 427b5b: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 427b5f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427b61: je 0x427b9a */
  if (zf) goto L_427b9a;
L_427b63: /* 427b63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427b64: call 0x4013b8 */
  esp -= 4; W32(esp, 0x427b69u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 427b69: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427b6a: mov edi, eax */
  edi = eax;
/* 427b6c: jmp 0x427b94 */
  goto L_427b94;
L_427b6e: /* 427b6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427b6f: call 0x4013b8 */
  esp -= 4; W32(esp, 0x427b74u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 427b74: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 427b76: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427b77: jbe 0x427b91 */
  if ((cf | zf)) goto L_427b91;
L_427b79: /* 427b79: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 427b7b: cmp word ptr [eax + edi*2], 0x3d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + edi*2))); uint16_t b = (uint16_t)(0x3du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 427b80: jne 0x427b91 */
  if (!zf) goto L_427b91;
L_427b82: /* 427b82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427b83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427b84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427b85: call 0x4058d5 */
  esp -= 4; W32(esp, 0x427b8au); SPILL(); f_4058d5(); if (g_unwind) return; RELOAD();
/* 427b8a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427b8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427b8f: je 0x427ba0 */
  if (zf) goto L_427ba0;
L_427b91: /* 427b91: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_427b94: /* 427b94: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 427b96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427b98: jne 0x427b6e */
  if (!zf) goto L_427b6e;
L_427b9a: /* 427b9a: xor eax, eax */
  eax = 0;
L_427b9c: /* 427b9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 427b9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427b9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 427b9f: ret  */
  esp += 4; SPILL(); return;
L_427ba0: /* 427ba0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 427ba2: lea eax, [eax + edi*2 + 2] */
  eax = (uint32_t)(eax + edi*2 + 0x2u);
/* 427ba6: jmp 0x427b9c */
  goto L_427b9c;
}

void f_427ba8(void) {
  LOAD_REGS();
L_427ba8: /* 427ba8: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 427baa: push 0x440da0 */
  { uint32_t v = 0x440da0u; esp -= 4; W32(esp, v); }
/* 427baf: call 0x40101f */
  esp -= 4; W32(esp, 0x427bb4u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 427bb4: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 427bb6: call 0x4011b7 */
  esp -= 4; W32(esp, 0x427bbbu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 427bbb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427bbc: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 427bc0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 427bc3: call 0x427b33 */
  esp -= 4; W32(esp, 0x427bc8u); SPILL(); f_427b33(); if (g_unwind) return; RELOAD();
/* 427bc8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427bc9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 427bcc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 427bd0: call 0x427bde */
  esp -= 4; W32(esp, 0x427bd5u); SPILL(); f_427bde(); if (g_unwind) return; RELOAD();
/* 427bd5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 427bd8: call 0x40105a */
  esp -= 4; W32(esp, 0x427bddu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 427bdd: ret  */
  esp += 4; SPILL(); return;
}

void f_427bde(void) {
  LOAD_REGS();
L_427bde: /* 427bde: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 427be0: call 0x4011d9 */
  esp -= 4; W32(esp, 0x427be5u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 427be5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427be6: ret  */
  esp += 4; SPILL(); return;
}

void f_427be7(void) {
  LOAD_REGS();
L_427be7: /* 427be7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427be8: mov ebp, esp */
  ebp = esp;
/* 427bea: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 427bed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427bef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427bf0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 427bf2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427bf3: je 0x427c0e */
  if (zf) goto L_427c0e;
L_427bf5: /* 427bf5: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 427bf8: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 427bfb: je 0x427c0e */
  if (zf) goto L_427c0e;
L_427bfd: /* 427bfd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 427c00: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 427c03: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 427c05: mov word ptr [eax], 0x3a */
  W16((uint32_t)(eax), 0x3au);
/* 427c0a: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 427c0c: jmp 0x427c11 */
  goto L_427c11;
L_427c0e: /* 427c0e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_427c11: /* 427c11: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 427c14: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427c16: je 0x427c4a */
  if (zf) goto L_427c4a;
L_427c18: /* 427c18: xor ecx, ecx */
  ecx = 0;
/* 427c1a: mov cx, word ptr [edx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 427c1d: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 427c20: je 0x427c4a */
  if (zf) goto L_427c4a;
L_427c22: /* 427c22: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 427c25: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 427c27: xor ecx, ecx */
  ecx = 0;
/* 427c29: mov cx, word ptr [edx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 427c2c: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 427c2e: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 427c31: jne 0x427c22 */
  if (!zf) goto L_427c22;
L_427c33: /* 427c33: mov dx, word ptr [edx - 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0xfffffffeu))) & 0xffffu);
/* 427c37: cmp dx, 0x2f */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 427c3b: je 0x427c4a */
  if (zf) goto L_427c4a;
L_427c3d: /* 427c3d: cmp dx, 0x5c */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 427c41: je 0x427c4a */
  if (zf) goto L_427c4a;
L_427c43: /* 427c43: mov word ptr [eax], 0x5c */
  W16((uint32_t)(eax), 0x5cu);
/* 427c48: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_427c4a: /* 427c4a: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 427c4d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427c4f: je 0x427c64 */
  if (zf) goto L_427c64;
L_427c51: /* 427c51: jmp 0x427c5a */
  goto L_427c5a;
L_427c53: /* 427c53: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 427c56: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 427c58: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_427c5a: /* 427c5a: xor ecx, ecx */
  ecx = 0;
/* 427c5c: mov cx, word ptr [edx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 427c5f: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 427c62: jne 0x427c53 */
  if (!zf) goto L_427c53;
L_427c64: /* 427c64: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 427c67: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427c69: je 0x427c91 */
  if (zf) goto L_427c91;
L_427c6b: /* 427c6b: mov cx, word ptr [edx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 427c6e: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 427c71: je 0x427c80 */
  if (zf) goto L_427c80;
L_427c73: /* 427c73: cmp cx, 0x2e */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x2eu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 427c77: je 0x427c80 */
  if (zf) goto L_427c80;
L_427c79: /* 427c79: mov word ptr [eax], 0x2e */
  W16((uint32_t)(eax), 0x2eu);
/* 427c7e: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_427c80: /* 427c80: mov cx, word ptr [edx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 427c83: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 427c86: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 427c88: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 427c8a: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 427c8d: jne 0x427c80 */
  if (!zf) goto L_427c80;
L_427c8f: /* 427c8f: jmp 0x427c95 */
  goto L_427c95;
L_427c91: /* 427c91: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
L_427c95: /* 427c95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427c96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 427c97: ret  */
  esp += 4; SPILL(); return;
}

void f_427c98(void) {
  LOAD_REGS();
L_427c98: /* 427c98: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 427c9a: push 0x440db0 */
  { uint32_t v = 0x440db0u; esp -= 4; W32(esp, v); }
/* 427c9f: call 0x40101f */
  esp -= 4; W32(esp, 0x427ca4u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 427ca4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 427ca6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427ca7: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 427caa: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 427cad: xor edi, edi */
  edi = 0;
/* 427caf: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427cb1: je 0x427cee */
  if (zf) goto L_427cee;
L_427cb3: /* 427cb3: cmp word ptr [ebx], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 427cb6: je 0x427cee */
  if (zf) goto L_427cee;
L_427cb8: /* 427cb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427cb9: call 0x4013b8 */
  esp -= 4; W32(esp, 0x427cbeu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 427cbe: mov esi, eax */
  esi = eax;
/* 427cc0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 427cc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427cc2: call 0x4010eb */
  esp -= 4; W32(esp, 0x427cc7u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 427cc7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427cc8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427cc9: mov edi, eax */
  edi = eax;
/* 427ccb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427ccd: je 0x427ce5 */
  if (zf) goto L_427ce5;
L_427ccf: /* 427ccf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427cd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427cd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427cd2: call 0x417e01 */
  esp -= 4; W32(esp, 0x427cd7u); SPILL(); f_417e01(); if (g_unwind) return; RELOAD();
/* 427cd7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427cda: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 427cdc: ja 0x427ceb */
  if ((!cf && !zf)) goto L_427ceb;
L_427cde: /* 427cde: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427cdf: call 0x401156 */
  esp -= 4; W32(esp, 0x427ce4u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 427ce4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_427ce5: /* 427ce5: call 0x40105a */
  esp -= 4; W32(esp, 0x427ceau); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 427cea: ret  */
  esp += 4; SPILL(); return;
L_427ceb: /* 427ceb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 427ced: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_427cee: /* 427cee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427cef: call 0x415fca */
  esp -= 4; W32(esp, 0x427cf4u); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 427cf4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427cf5: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 427cf9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427cfb: je 0x427d1a */
  if (zf) goto L_427d1a;
L_427cfd: /* 427cfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427cfe: call 0x402493 */
  esp -= 4; W32(esp, 0x427d03u); SPILL(); hle_strlen(); RELOAD();
/* 427d03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427d04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427d05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427d06: call 0x4157da */
  esp -= 4; W32(esp, 0x427d0bu); SPILL(); f_4157da(); if (g_unwind) return; RELOAD();
/* 427d0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427d0c: push 0x440d9c */
  { uint32_t v = 0x440d9cu; esp -= 4; W32(esp, v); }
/* 427d11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427d12: call 0x4157da */
  esp -= 4; W32(esp, 0x427d17u); SPILL(); f_4157da(); if (g_unwind) return; RELOAD();
/* 427d17: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_427d1a: /* 427d1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427d1b: call 0x401156 */
  esp -= 4; W32(esp, 0x427d20u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 427d20: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427d21: call 0x4102a5 */
  esp -= 4; W32(esp, 0x427d26u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 427d26: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 427d29: jl 0x427d43 */
  if ((sf != of)) goto L_427d43;
L_427d2b: /* 427d2b: call 0x4102a5 */
  esp -= 4; W32(esp, 0x427d30u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 427d30: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 427d32: cmp eax, dword ptr [0x4491c8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x4491c8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 427d38: jge 0x427d43 */
  if ((sf == of)) goto L_427d43;
L_427d3a: /* 427d3a: call 0x4102a5 */
  esp -= 4; W32(esp, 0x427d3fu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 427d3f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 427d41: jmp 0x427d48 */
  goto L_427d48;
L_427d43: /* 427d43: mov eax, dword ptr [0x4491c8] */
  eax = R32((uint32_t)(0x4491c8u));
L_427d48: /* 427d48: mov edi, dword ptr [eax*4 + 0x449118] */
  edi = R32((uint32_t)(eax*4 + 0x449118u));
/* 427d4f: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 427d52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427d53: call 0x402493 */
  esp -= 4; W32(esp, 0x427d58u); SPILL(); hle_strlen(); RELOAD();
/* 427d58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427d59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427d5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427d5b: call 0x4157da */
  esp -= 4; W32(esp, 0x427d60u); SPILL(); f_4157da(); if (g_unwind) return; RELOAD();
/* 427d60: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 427d62: push 0x43e950 */
  { uint32_t v = 0x43e950u; esp -= 4; W32(esp, v); }
/* 427d67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427d68: call 0x4157da */
  esp -= 4; W32(esp, 0x427d6du); SPILL(); f_4157da(); if (g_unwind) return; RELOAD();
/* 427d6d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427d70: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 427d74: call 0x427d7e */
  esp -= 4; W32(esp, 0x427d79u); SPILL(); f_427d7e(); if (g_unwind) return; RELOAD();
/* 427d79: jmp 0x427ce5 */
  goto L_427ce5;
}

void f_427d7e(void) {
  LOAD_REGS();
L_427d7e: /* 427d7e: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 427d81: call 0x41603d */
  esp -= 4; W32(esp, 0x427d86u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 427d86: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427d87: ret  */
  esp += 4; SPILL(); return;
}

void f_427d88(void) {
  LOAD_REGS();
L_427d88: /* 427d88: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427d89: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 427d8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427d8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427d8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427d90: call 0x4013b8 */
  esp -= 4; W32(esp, 0x427d95u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 427d95: lea eax, [eax + eax + 2] */
  eax = (uint32_t)(eax + eax + 0x2u);
/* 427d99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427d9a: call 0x4010eb */
  esp -= 4; W32(esp, 0x427d9fu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 427d9f: mov edi, eax */
  edi = eax;
/* 427da1: xor esi, esi */
  esi = 0;
/* 427da3: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427da6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427da7: je 0x427dc6 */
  if (zf) goto L_427dc6;
L_427da9: /* 427da9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427daa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427dab: call 0x4013ce */
  esp -= 4; W32(esp, 0x427db0u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 427db0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 427db2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427db3: call 0x4057d5 */
  esp -= 4; W32(esp, 0x427db8u); SPILL(); f_4057d5(); if (g_unwind) return; RELOAD();
/* 427db8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427dbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427dbd: je 0x427dcb */
  if (zf) goto L_427dcb;
L_427dbf: /* 427dbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427dc0: call 0x401156 */
  esp -= 4; W32(esp, 0x427dc5u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 427dc5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_427dc6: /* 427dc6: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 427dc9: jmp 0x427e28 */
  goto L_427e28;
L_427dcb: /* 427dcb: cmp dword ptr [0x4491f4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491f4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427dd1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427dd2: je 0x427e25 */
  if (zf) goto L_427e25;
L_427dd4: /* 427dd4: mov edi, dword ptr [0x4390d0] */
  edi = R32((uint32_t)(0x4390d0u));
/* 427dda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427ddb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427ddc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427ddd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427dde: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 427de0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427de1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427de2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427de3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x427de5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 427de5: mov ebx, eax */
  ebx = eax;
/* 427de7: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427de9: jne 0x427df0 */
  if (!zf) goto L_427df0;
L_427deb: /* 427deb: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 427dee: jmp 0x427e27 */
  goto L_427e27;
L_427df0: /* 427df0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427df1: call 0x4010eb */
  esp -= 4; W32(esp, 0x427df6u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 427df6: mov ebp, eax */
  ebp = eax;
/* 427df8: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427dfa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427dfb: je 0x427deb */
  if (zf) goto L_427deb;
L_427dfd: /* 427dfd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427dfe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427dff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427e00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427e01: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 427e03: push dword ptr [esp + 0x28] */
  { uint32_t v = R32((uint32_t)(esp + 0x28u)); esp -= 4; W32(esp, v); }
/* 427e07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427e08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427e09: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x427e0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 427e0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427e0d: je 0x427e1c */
  if (zf) goto L_427e1c;
L_427e0f: /* 427e0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427e10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427e11: call 0x41683e */
  esp -= 4; W32(esp, 0x427e16u); SPILL(); f_41683e(); if (g_unwind) return; RELOAD();
/* 427e16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427e18: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427e19: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427e1a: je 0x427e25 */
  if (zf) goto L_427e25;
L_427e1c: /* 427e1c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427e1d: call 0x401156 */
  esp -= 4; W32(esp, 0x427e22u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 427e22: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427e23: jmp 0x427deb */
  goto L_427deb;
L_427e25: /* 427e25: xor eax, eax */
  eax = 0;
L_427e27: /* 427e27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_427e28: /* 427e28: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 427e29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427e2a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 427e2b: ret  */
  esp += 4; SPILL(); return;
}

void f_427e2c(void) {
  LOAD_REGS();
L_427e2c: /* 427e2c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 427e2e: push 0x440dc0 */
  { uint32_t v = 0x440dc0u; esp -= 4; W32(esp, v); }
/* 427e33: call 0x40101f */
  esp -= 4; W32(esp, 0x427e38u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 427e38: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 427e3a: call 0x4011b7 */
  esp -= 4; W32(esp, 0x427e3fu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 427e3f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427e40: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 427e44: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 427e47: call 0x427d88 */
  esp -= 4; W32(esp, 0x427e4cu); SPILL(); f_427d88(); if (g_unwind) return; RELOAD();
/* 427e4c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427e4d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 427e50: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 427e54: call 0x427e62 */
  esp -= 4; W32(esp, 0x427e59u); SPILL(); f_427e62(); if (g_unwind) return; RELOAD();
/* 427e59: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 427e5c: call 0x40105a */
  esp -= 4; W32(esp, 0x427e61u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 427e61: ret  */
  esp += 4; SPILL(); return;
}

void f_427e62(void) {
  LOAD_REGS();
L_427e62: /* 427e62: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 427e64: call 0x4011d9 */
  esp -= 4; W32(esp, 0x427e69u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 427e69: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427e6a: ret  */
  esp += 4; SPILL(); return;
}

void f_427e6b(void) {
  LOAD_REGS();
L_427e6b: /* 427e6b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 427e6c: mov ebp, esp */
  ebp = esp;
/* 427e6e: sub esp, 0x218 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x218u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 427e74: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 427e79: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 427e7c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427e7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427e7e: xor ebx, ebx */
  ebx = 0;
/* 427e80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 427e81: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 427e84: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 427e87: call 0x419ae9 */
  esp -= 4; W32(esp, 0x427e8cu); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 427e8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427e8e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427e8f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427e90: jne 0x427eb6 */
  if (!zf) goto L_427eb6;
L_427e92: /* 427e92: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 427e95: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 427e9a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 427e9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427e9e: call 0x419c14 */
  esp -= 4; W32(esp, 0x427ea3u); SPILL(); f_419c14(); if (g_unwind) return; RELOAD();
/* 427ea3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427ea6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427ea8: jne 0x427f77 */
  if (!zf) goto L_427f77;
L_427eae: /* 427eae: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 427eb1: jmp 0x427f77 */
  goto L_427f77;
L_427eb6: /* 427eb6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 427eb9: call 0x427ba8 */
  esp -= 4; W32(esp, 0x427ebeu); SPILL(); f_427ba8(); if (g_unwind) return; RELOAD();
/* 427ebe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427ec0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427ec1: jne 0x427ece */
  if (!zf) goto L_427ece;
L_427ec3: /* 427ec3: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 427ec6: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 427ec9: jmp 0x427f77 */
  goto L_427f77;
L_427ece: /* 427ece: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427ecf: mov edi, 0x104 */
  edi = 0x104u;
/* 427ed4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427ed5: lea ecx, [ebp - 0x218] */
  ecx = (uint32_t)(ebp + 0xfffffde8u);
/* 427edb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 427edc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427edd: call 0x42844e */
  esp -= 4; W32(esp, 0x427ee2u); SPILL(); f_42844e(); if (g_unwind) return; RELOAD();
/* 427ee2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427ee5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427ee7: jmp 0x427f66 */
  goto L_427f66;
L_427ee9: /* 427ee9: cmp word ptr [ebp - 0x218], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffde8u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 427ef1: je 0x427f6f */
  if (zf) goto L_427f6f;
L_427ef3: /* 427ef3: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 427ef9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427efa: call 0x4013b8 */
  esp -= 4; W32(esp, 0x427effu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 427eff: mov ebx, eax */
  ebx = eax;
/* 427f01: lea esi, [ebp + ebx*2 - 0x218] */
  esi = (uint32_t)(ebp + ebx*2 + 0xfffffde8u);
/* 427f08: movzx eax, word ptr [esi - 2] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0xfffffffeu)));
/* 427f0c: cmp eax, 0x2f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427f0f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427f10: je 0x427f24 */
  if (zf) goto L_427f24;
L_427f12: /* 427f12: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427f15: je 0x427f24 */
  if (zf) goto L_427f24;
L_427f17: /* 427f17: cmp eax, 0x3a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427f1a: je 0x427f24 */
  if (zf) goto L_427f24;
L_427f1c: /* 427f1c: mov word ptr [esi], 0x5c */
  W16((uint32_t)(esi), 0x5cu);
/* 427f21: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 427f22: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 427f23: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_427f24: /* 427f24: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 427f27: call 0x4013b8 */
  esp -= 4; W32(esp, 0x427f2cu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 427f2c: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 427f2e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 427f30: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427f31: ja 0x427f51 */
  if ((!cf && !zf)) goto L_427f51;
L_427f33: /* 427f33: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 427f36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427f37: call 0x4013ce */
  esp -= 4; W32(esp, 0x427f3cu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 427f3c: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 427f42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 427f44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427f45: call 0x419ae9 */
  esp -= 4; W32(esp, 0x427f4au); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 427f4a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427f4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427f4f: je 0x427f86 */
  if (zf) goto L_427f86;
L_427f51: /* 427f51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427f52: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 427f58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427f59: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 427f5c: call 0x42844e */
  esp -= 4; W32(esp, 0x427f61u); SPILL(); f_42844e(); if (g_unwind) return; RELOAD();
/* 427f61: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427f64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_427f66: /* 427f66: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 427f69: jne 0x427ee9 */
  if (!zf) goto L_427ee9;
L_427f6f: /* 427f6f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 427f72: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
L_427f76: /* 427f76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_427f77: /* 427f77: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 427f7a: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 427f7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 427f7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 427f7f: call 0x4013ab */
  esp -= 4; W32(esp, 0x427f84u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 427f84: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 427f85: ret  */
  esp += 4; SPILL(); return;
L_427f86: /* 427f86: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 427f8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 427f8d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 427f90: call 0x4013ce */
  esp -= 4; W32(esp, 0x427f95u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 427f95: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427f96: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427f97: jmp 0x427f76 */
  goto L_427f76;
}

void f_427f99(void) {
  LOAD_REGS();
L_427f99: /* 427f99: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 427f9b: push 0x440dd0 */
  { uint32_t v = 0x440dd0u; esp -= 4; W32(esp, v); }
/* 427fa0: call 0x40101f */
  esp -= 4; W32(esp, 0x427fa5u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 427fa5: xor edi, edi */
  edi = 0;
/* 427fa7: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427faa: je 0x427fe9 */
  if (zf) goto L_427fe9;
L_427fac: /* 427fac: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 427faf: call 0x4013b8 */
  esp -= 4; W32(esp, 0x427fb4u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 427fb4: mov esi, eax */
  esi = eax;
/* 427fb6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 427fb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427fb8: call 0x4010eb */
  esp -= 4; W32(esp, 0x427fbdu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 427fbd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427fbe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427fbf: mov edi, eax */
  edi = eax;
/* 427fc1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 427fc3: je 0x428087 */
  if (zf) goto L_428087;
L_427fc9: /* 427fc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 427fca: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 427fcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427fce: call 0x417e01 */
  esp -= 4; W32(esp, 0x427fd3u); SPILL(); f_417e01(); if (g_unwind) return; RELOAD();
/* 427fd3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 427fd6: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 427fd9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 427fdb: jne 0x427fec */
  if (!zf) goto L_427fec;
L_427fdd: /* 427fdd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427fde: call 0x401156 */
  esp -= 4; W32(esp, 0x427fe3u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
L_427fe3: /* 427fe3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427fe4: jmp 0x428087 */
  goto L_428087;
L_427fe9: /* 427fe9: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_427fec: /* 427fec: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 427fee: call 0x4011b7 */
  esp -= 4; W32(esp, 0x427ff3u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 427ff3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 427ff4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 427ff8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 427ff9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 427ffc: call 0x405e8c */
  esp -= 4; W32(esp, 0x428001u); SPILL(); f_405e8c(); if (g_unwind) return; RELOAD();
/* 428001: mov esi, eax */
  esi = eax;
/* 428003: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 428006: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 428007: call 0x401156 */
  esp -= 4; W32(esp, 0x42800cu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42800c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42800f: xor edi, edi */
  edi = 0;
/* 428011: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428013: je 0x42804e */
  if (zf) goto L_42804e;
L_428015: /* 428015: cmp dword ptr [0x44f538], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f538u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42801b: jne 0x428031 */
  if (!zf) goto L_428031;
L_42801d: /* 42801d: push 0x6a2 */
  { uint32_t v = 0x6a2u; esp -= 4; W32(esp, v); }
/* 428022: call 0x4010eb */
  esp -= 4; W32(esp, 0x428027u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 428027: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428028: mov dword ptr [0x44f538], eax */
  W32((uint32_t)(0x44f538u), eax);
/* 42802d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42802f: je 0x42804e */
  if (zf) goto L_42804e;
L_428031: /* 428031: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 428032: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428033: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 428034: call 0x4176f3 */
  esp -= 4; W32(esp, 0x428039u); SPILL(); f_4176f3(); if (g_unwind) return; RELOAD();
/* 428039: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42803c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42803f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428041: je 0x42804e */
  if (zf) goto L_42804e;
L_428043: /* 428043: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 428044: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 428047: cmp eax, 0x351 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x351u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42804c: jbe 0x42805b */
  if ((cf | zf)) goto L_42805b;
L_42804e: /* 42804e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42804f: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 428052: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428053: call 0x406fd7 */
  esp -= 4; W32(esp, 0x428058u); SPILL(); f_406fd7(); if (g_unwind) return; RELOAD();
/* 428058: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428059: jmp 0x427fe3 */
  goto L_427fe3;
L_42805b: /* 42805b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42805c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42805d: push dword ptr [0x44f538] */
  { uint32_t v = R32((uint32_t)(0x44f538u)); esp -= 4; W32(esp, v); }
/* 428063: call 0x4176f3 */
  esp -= 4; W32(esp, 0x428068u); SPILL(); f_4176f3(); if (g_unwind) return; RELOAD();
/* 428068: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42806b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42806d: jne 0x42808b */
  if (!zf) goto L_42808b;
L_42806f: /* 42806f: push dword ptr [0x44f538] */
  { uint32_t v = R32((uint32_t)(0x44f538u)); esp -= 4; W32(esp, v); }
/* 428075: call 0x401156 */
  esp -= 4; W32(esp, 0x42807au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42807a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42807b: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 42807e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42807f: call 0x406fd7 */
  esp -= 4; W32(esp, 0x428084u); SPILL(); f_406fd7(); if (g_unwind) return; RELOAD();
/* 428084: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_428087: /* 428087: xor eax, eax */
  eax = 0;
/* 428089: jmp 0x428098 */
  goto L_428098;
L_42808b: /* 42808b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42808e: call 0x42809e */
  esp -= 4; W32(esp, 0x428093u); SPILL(); f_42809e(); if (g_unwind) return; RELOAD();
/* 428093: mov eax, dword ptr [0x44f538] */
  eax = R32((uint32_t)(0x44f538u));
L_428098: /* 428098: call 0x40105a */
  esp -= 4; W32(esp, 0x42809du); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42809d: ret  */
  esp += 4; SPILL(); return;
}

void f_42809e(void) {
  LOAD_REGS();
L_42809e: /* 42809e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4280a0: call 0x4011d9 */
  esp -= 4; W32(esp, 0x4280a5u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 4280a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4280a6: ret  */
  esp += 4; SPILL(); return;
}

void f_4280a7(void) {
  LOAD_REGS();
L_4280a7: /* 4280a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4280a8: mov ebp, esp */
  ebp = esp;
/* 4280aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4280ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4280ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4280ad: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4280b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4280b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4280b2: xor edi, edi */
  edi = 0;
/* 4280b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4280b5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4280b8: call 0x4013b8 */
  esp -= 4; W32(esp, 0x4280bdu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 4280bd: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4280c0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4280c1: jb 0x4280e9 */
  if (cf) goto L_4280e9;
L_4280c3: /* 4280c3: cmp word ptr [ebx + 2], 0x3a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x2u))); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4280c8: jne 0x4280e9 */
  if (!zf) goto L_4280e9;
L_4280ca: /* 4280ca: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4280cd: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4280cf: je 0x4280e1 */
  if (zf) goto L_4280e1;
L_4280d1: /* 4280d1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4280d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4280d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4280d5: call 0x401a95 */
  esp -= 4; W32(esp, 0x4280dau); SPILL(); f_401a95(); if (g_unwind) return; RELOAD();
/* 4280da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4280dd: mov word ptr [esi + 4], di */
  W16((uint32_t)(esi + 0x4u), (edi & 0xffffu));
L_4280e1: /* 4280e1: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4280e4: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 4280e7: jmp 0x4280f3 */
  goto L_4280f3;
L_4280e9: /* 4280e9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4280ec: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4280ee: je 0x4280f3 */
  if (zf) goto L_4280f3;
L_4280f0: /* 4280f0: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
L_4280f3: /* 4280f3: xor eax, eax */
  eax = 0;
/* 4280f5: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 4280f8: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4280fb: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 4280fe: mov edi, ebx */
  edi = ebx;
/* 428100: mov esi, 0xff */
  esi = 0xffu;
/* 428105: je 0x428168 */
  if (zf) goto L_428168;
L_428107: /* 428107: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42810b: je 0x42811e */
  if (zf) goto L_42811e;
L_42810d: /* 42810d: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 428111: je 0x42811e */
  if (zf) goto L_42811e;
L_428113: /* 428113: cmp ax, 0x2e */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2eu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 428117: jne 0x428124 */
  if (!zf) goto L_428124;
L_428119: /* 428119: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 42811c: jmp 0x428124 */
  goto L_428124;
L_42811e: /* 42811e: lea eax, [edi + 2] */
  eax = (uint32_t)(edi + 0x2u);
/* 428121: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_428124: /* 428124: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 428125: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 428126: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 428129: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42812c: jne 0x428107 */
  if (!zf) goto L_428107;
L_42812e: /* 42812e: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 428131: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428133: je 0x428168 */
  if (zf) goto L_428168;
L_428135: /* 428135: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428139: je 0x42815e */
  if (zf) goto L_42815e;
L_42813b: /* 42813b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42813d: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42813f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 428141: mov ebx, eax */
  ebx = eax;
/* 428143: jb 0x428147 */
  if (cf) goto L_428147;
L_428145: /* 428145: mov ebx, esi */
  ebx = esi;
L_428147: /* 428147: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 428148: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42814b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42814e: call 0x401a95 */
  esp -= 4; W32(esp, 0x428153u); SPILL(); f_401a95(); if (g_unwind) return; RELOAD();
/* 428153: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 428156: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 428159: and word ptr [eax + ebx*2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + ebx*2))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax + ebx*2), r);
  }
L_42815e: /* 42815e: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 428161: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 428164: mov ebx, eax */
  ebx = eax;
/* 428166: jmp 0x428173 */
  goto L_428173;
L_428168: /* 428168: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 42816b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42816d: je 0x428173 */
  if (zf) goto L_428173;
L_42816f: /* 42816f: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
L_428173: /* 428173: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 428176: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428178: je 0x4281cd */
  if (zf) goto L_4281cd;
L_42817a: /* 42817a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42817c: jb 0x4281cd */
  if (cf) goto L_4281cd;
L_42817e: /* 42817e: cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428182: je 0x4281a7 */
  if (zf) goto L_4281a7;
L_428184: /* 428184: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 428186: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 428188: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42818a: mov ebx, eax */
  ebx = eax;
/* 42818c: jb 0x428190 */
  if (cf) goto L_428190;
L_42818e: /* 42818e: mov ebx, esi */
  ebx = esi;
L_428190: /* 428190: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 428191: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 428194: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 428197: call 0x401a95 */
  esp -= 4; W32(esp, 0x42819cu); SPILL(); f_401a95(); if (g_unwind) return; RELOAD();
/* 42819c: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 42819f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4281a2: and word ptr [eax + ebx*2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + ebx*2))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax + ebx*2), r);
  }
L_4281a7: /* 4281a7: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 4281aa: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4281ac: je 0x4281fd */
  if (zf) goto L_4281fd;
L_4281ae: /* 4281ae: sub edi, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4281b1: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 4281b3: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4281b5: jae 0x4281b9 */
  if (!cf) goto L_4281b9;
L_4281b7: /* 4281b7: mov esi, edi */
  esi = edi;
L_4281b9: /* 4281b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4281ba: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4281bd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4281be: call 0x401a95 */
  esp -= 4; W32(esp, 0x4281c3u); SPILL(); f_401a95(); if (g_unwind) return; RELOAD();
/* 4281c3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4281c6: and word ptr [ebx + esi*2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + esi*2))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebx + esi*2), r);
  }
/* 4281cb: jmp 0x4281fd */
  goto L_4281fd;
L_4281cd: /* 4281cd: cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4281d1: je 0x4281f2 */
  if (zf) goto L_4281f2;
L_4281d3: /* 4281d3: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4281d5: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 4281d7: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4281d9: jae 0x4281dd */
  if (!cf) goto L_4281dd;
L_4281db: /* 4281db: mov esi, edi */
  esi = edi;
L_4281dd: /* 4281dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4281de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4281df: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4281e2: call 0x401a95 */
  esp -= 4; W32(esp, 0x4281e7u); SPILL(); f_401a95(); if (g_unwind) return; RELOAD();
/* 4281e7: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4281ea: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4281ed: and word ptr [eax + esi*2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + esi*2))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax + esi*2), r);
  }
L_4281f2: /* 4281f2: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4281f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4281f7: je 0x4281fd */
  if (zf) goto L_4281fd;
L_4281f9: /* 4281f9: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
L_4281fd: /* 4281fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4281fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4281ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 428200: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 428201: ret  */
  esp += 4; SPILL(); return;
}

void f_428202(void) {
  LOAD_REGS();
L_428202: /* 428202: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 428203: mov ebp, esp */
  ebp = esp;
/* 428205: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 428208: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 42820b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42820c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42820d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42820e: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 428211: imul edi, dword ptr [ebp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x14u)));
  edi = (uint32_t)r;
  }
/* 428215: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 428217: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 428219: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 42821c: ja 0x428269 */
  if ((!cf && !zf)) goto L_428269;
L_42821e: /* 42821e: mov ebx, eax */
  ebx = eax;
/* 428220: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  ebx = r;
  }
/* 428222: je 0x428274 */
  if (zf) goto L_428274;
L_428224: /* 428224: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 428227: and dword ptr [ebp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 42822b: mov eax, ebx */
  eax = ebx;
/* 42822d: jne 0x428232 */
  if (!zf) goto L_428232;
L_42822f: /* 42822f: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
L_428232: /* 428232: imul eax, dword ptr [ebp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x14u)));
  eax = (uint32_t)r;
  }
/* 428236: add eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 428239: mov esi, eax */
  esi = eax;
/* 42823b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42823c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42823f: call dword ptr [ebp + 0x18] */
  { uint32_t t = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, 0x428242u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 428242: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 428244: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428245: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428246: je 0x428270 */
  if (zf) goto L_428270;
L_428248: /* 428248: jge 0x42825a */
  if ((sf == of)) goto L_42825a;
L_42824a: /* 42824a: sub esi, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 42824d: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428251: mov edi, esi */
  edi = esi;
/* 428253: jne 0x428262 */
  if (!zf) goto L_428262;
L_428255: /* 428255: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 428258: jmp 0x428264 */
  goto L_428264;
L_42825a: /* 42825a: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 42825d: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 42825f: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
L_428262: /* 428262: mov eax, ebx */
  eax = ebx;
L_428264: /* 428264: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 428267: jbe 0x42821e */
  if ((cf | zf)) goto L_42821e;
L_428269: /* 428269: xor eax, eax */
  eax = 0;
L_42826b: /* 42826b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42826c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42826d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42826e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 42826f: ret  */
  esp += 4; SPILL(); return;
L_428270: /* 428270: mov eax, esi */
  eax = esi;
/* 428272: jmp 0x42826b */
  goto L_42826b;
L_428274: /* 428274: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428276: je 0x428269 */
  if (zf) goto L_428269;
L_428278: /* 428278: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42827b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42827e: call dword ptr [ebp + 0x18] */
  { uint32_t t = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, 0x428281u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 428281: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 428283: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 428285: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428286: not eax */
  eax = ~eax;
/* 428288: and eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42828b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42828c: jmp 0x42826b */
  goto L_42826b;
}

void f_42828e(void) {
  LOAD_REGS();
L_42828e: /* 42828e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 428292: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 428294: jge 0x428298 */
  if ((sf == of)) goto L_428298;
L_428296: /* 428296: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_428298: /* 428298: ret  */
  esp += 4; SPILL(); return;
}

void f_428299(void) {
  LOAD_REGS();
L_428299: /* 428299: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 42829d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 42829e: idiv dword ptr [esp + 8] */
  { int32_t d = (int32_t)R32((uint32_t)(esp + 0x8u)); if (!d) d = (int32_t)guest_divzero(0x42829e);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4282a2: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4282a7: jge 0x4282b2 */
  if ((sf == of)) goto L_4282b2;
L_4282a9: /* 4282a9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4282ab: jle 0x4282b2 */
  if ((zf || sf != of)) goto L_4282b2;
L_4282ad: /* 4282ad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4282ae: sub edx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_4282b2: /* 4282b2: ret  */
  esp += 4; SPILL(); return;
}

void f_4282b3(void) {
  LOAD_REGS();
L_4282b3: /* 4282b3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4282b5: push 0x440de0 */
  { uint32_t v = 0x440de0u; esp -= 4; W32(esp, v); }
/* 4282ba: call 0x40101f */
  esp -= 4; W32(esp, 0x4282bfu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4282bf: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4282c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4282c2: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 4282c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4282c6: call 0x415fca */
  esp -= 4; W32(esp, 0x4282cbu); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 4282cb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4282cc: xor ebx, ebx */
  ebx = 0;
/* 4282ce: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4282d1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4282d4: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4282d6: je 0x4282f9 */
  if (zf) goto L_4282f9;
L_4282d8: /* 4282d8: cmp byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4282da: je 0x4282f9 */
  if (zf) goto L_4282f9;
L_4282dc: /* 4282dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4282dd: call 0x402493 */
  esp -= 4; W32(esp, 0x4282e2u); SPILL(); hle_strlen(); RELOAD();
/* 4282e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4282e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4282e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4282e5: call 0x4157da */
  esp -= 4; W32(esp, 0x4282eau); SPILL(); f_4157da(); if (g_unwind) return; RELOAD();
/* 4282ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4282eb: push 0x440d9c */
  { uint32_t v = 0x440d9cu; esp -= 4; W32(esp, v); }
/* 4282f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4282f1: call 0x4157da */
  esp -= 4; W32(esp, 0x4282f6u); SPILL(); f_4157da(); if (g_unwind) return; RELOAD();
/* 4282f6: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4282f9: /* 4282f9: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4282feu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4282fe: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 428300: jl 0x42831a */
  if ((sf != of)) goto L_42831a;
L_428302: /* 428302: call 0x4102a5 */
  esp -= 4; W32(esp, 0x428307u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 428307: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 428309: cmp eax, dword ptr [0x4491c8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x4491c8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42830f: jge 0x42831a */
  if ((sf == of)) goto L_42831a;
L_428311: /* 428311: call 0x4102a5 */
  esp -= 4; W32(esp, 0x428316u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 428316: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 428318: jmp 0x42831f */
  goto L_42831f;
L_42831a: /* 42831a: mov eax, dword ptr [0x4491c8] */
  eax = R32((uint32_t)(0x4491c8u));
L_42831f: /* 42831f: mov esi, dword ptr [eax*4 + 0x449118] */
  esi = R32((uint32_t)(eax*4 + 0x449118u));
/* 428326: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 428329: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42832a: call 0x402493 */
  esp -= 4; W32(esp, 0x42832fu); SPILL(); hle_strlen(); RELOAD();
/* 42832f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428331: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 428332: call 0x4157da */
  esp -= 4; W32(esp, 0x428337u); SPILL(); f_4157da(); if (g_unwind) return; RELOAD();
/* 428337: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 428339: push 0x43e950 */
  { uint32_t v = 0x43e950u; esp -= 4; W32(esp, v); }
/* 42833e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42833f: call 0x4157da */
  esp -= 4; W32(esp, 0x428344u); SPILL(); f_4157da(); if (g_unwind) return; RELOAD();
/* 428344: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 428347: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42834b: call 0x428356 */
  esp -= 4; W32(esp, 0x428350u); SPILL(); f_428356(); if (g_unwind) return; RELOAD();
/* 428350: call 0x40105a */
  esp -= 4; W32(esp, 0x428355u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 428355: ret  */
  esp += 4; SPILL(); return;
}

void f_428356(void) {
  LOAD_REGS();
L_428356: /* 428356: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 428359: call 0x41603d */
  esp -= 4; W32(esp, 0x42835eu); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 42835e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42835f: ret  */
  esp += 4; SPILL(); return;
}

void f_428360(void) {
  LOAD_REGS();
L_428360: /* 428360: call 0x40137f */
  esp -= 4; W32(esp, 0x428365u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 428365: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 428369: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 42836c: ret  */
  esp += 4; SPILL(); return;
}

void f_42836d(void) {
  LOAD_REGS();
L_42836d: /* 42836d: call 0x40137f */
  esp -= 4; W32(esp, 0x428372u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 428372: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 428375: imul ecx, ecx, 0x343fd */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x343fdu);
  ecx = (uint32_t)r;
  }
/* 42837b: add ecx, 0x269ec3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x269ec3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 428381: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 428384: mov eax, ecx */
  eax = ecx;
/* 428386: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 428389: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42838e: ret  */
  esp += 4; SPILL(); return;
}

void f_42838f(void) {
  LOAD_REGS();
L_42838f: /* 42838f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428390: call 0x40137f */
  esp -= 4; W32(esp, 0x428395u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 428395: mov esi, eax */
  esi = eax;
/* 428397: cmp dword ptr [esi + 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42839b: jne 0x4283b6 */
  if (!zf) goto L_4283b6;
L_42839d: /* 42839d: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 4283a2: call 0x4010eb */
  esp -= 4; W32(esp, 0x4283a7u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4283a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4283a9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4283aa: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 4283ad: jne 0x4283b6 */
  if (!zf) goto L_4283b6;
L_4283af: /* 4283af: mov esi, 0x44f53c */
  esi = 0x44f53cu;
/* 4283b4: jmp 0x4283b9 */
  goto L_4283b9;
L_4283b6: /* 4283b6: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
L_4283b9: /* 4283b9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4283bd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4283bf: mov eax, dword ptr [0x4491c8] */
  eax = R32((uint32_t)(0x4491c8u));
/* 4283c4: jl 0x4283cc */
  if ((sf != of)) goto L_4283cc;
L_4283c6: /* 4283c6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4283c8: jge 0x4283cc */
  if ((sf == of)) goto L_4283cc;
L_4283ca: /* 4283ca: mov eax, ecx */
  eax = ecx;
L_4283cc: /* 4283cc: push dword ptr [eax*4 + 0x449118] */
  { uint32_t v = R32((uint32_t)(eax*4 + 0x449118u)); esp -= 4; W32(esp, v); }
/* 4283d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4283d4: call 0x404b3a */
  esp -= 4; W32(esp, 0x4283d9u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 4283d9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4283da: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4283db: mov eax, esi */
  eax = esi;
/* 4283dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4283de: ret  */
  esp += 4; SPILL(); return;
}

void f_4283df(void) {
  LOAD_REGS();
L_4283df: /* 4283df: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4283e0: mov ebp, esp */
  ebp = esp;
/* 4283e2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4283e5: jmp 0x4283e8 */
  goto L_4283e8;
L_4283e7: /* 4283e7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_4283e8: /* 4283e8: cmp byte ptr [ecx], 0x3b */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x3bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4283eb: je 0x4283e7 */
  if (zf) goto L_4283e7;
L_4283ed: /* 4283ed: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 4283f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4283f1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4283f4: mov eax, ecx */
  eax = ecx;
/* 4283f6: je 0x428440 */
  if (zf) goto L_428440;
L_4283f8: /* 4283f8: jmp 0x428432 */
  goto L_428432;
L_4283fa: /* 4283fa: cmp dl, 0x3b */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x3bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4283fd: je 0x42843a */
  if (zf) goto L_42843a;
L_4283ff: /* 4283ff: cmp dl, 0x22 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428402: je 0x428411 */
  if (zf) goto L_428411;
L_428404: /* 428404: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 428406: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 428407: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 428408: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 42840b: jne 0x428432 */
  if (!zf) goto L_428432;
L_42840d: /* 42840d: mov eax, ecx */
  eax = ecx;
/* 42840f: jmp 0x428440 */
  goto L_428440;
L_428411: /* 428411: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 428412: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 428414: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428416: je 0x42843b */
  if (zf) goto L_42843b;
L_428418: /* 428418: cmp dl, 0x22 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42841b: je 0x42842c */
  if (zf) goto L_42842c;
L_42841d: /* 42841d: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 42841f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 428420: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 428421: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 428424: je 0x42840d */
  if (zf) goto L_42840d;
L_428426: /* 428426: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 428428: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42842a: jne 0x428418 */
  if (!zf) goto L_428418;
L_42842c: /* 42842c: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42842f: je 0x42843b */
  if (zf) goto L_42843b;
L_428431: /* 428431: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_428432: /* 428432: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 428434: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428436: jne 0x4283fa */
  if (!zf) goto L_4283fa;
L_428438: /* 428438: jmp 0x42843b */
  goto L_42843b;
L_42843a: /* 42843a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_42843b: /* 42843b: cmp byte ptr [ecx], 0x3b */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x3bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42843e: je 0x42843a */
  if (zf) goto L_42843a;
L_428440: /* 428440: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 428443: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 428445: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 428447: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 428449: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42844b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42844c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 42844d: ret  */
  esp += 4; SPILL(); return;
}

void f_42844e(void) {
  LOAD_REGS();
L_42844e: /* 42844e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42844f: mov ebp, esp */
  ebp = esp;
/* 428451: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 428454: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428455: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 428456: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 428458: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 428459: jmp 0x42845d */
  goto L_42845d;
L_42845b: /* 42845b: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_42845d: /* 42845d: cmp word ptr [ecx], 0x3b */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x3bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 428461: je 0x42845b */
  if (zf) goto L_42845b;
L_428463: /* 428463: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 428466: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 428469: mov eax, ecx */
  eax = ecx;
/* 42846b: je 0x4284c7 */
  if (zf) goto L_4284c7;
L_42846d: /* 42846d: jmp 0x4284b5 */
  goto L_4284b5;
L_42846f: /* 42846f: cmp dx, 0x3b */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x3bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 428473: je 0x4284bf */
  if (zf) goto L_4284bf;
L_428475: /* 428475: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 428477: cmp dx, 0x22 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42847b: je 0x42848b */
  if (zf) goto L_42848b;
L_42847d: /* 42847d: mov word ptr [esi], dx */
  W16((uint32_t)(esi), (edx & 0xffffu));
/* 428480: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 428482: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 428485: jne 0x4284b5 */
  if (!zf) goto L_4284b5;
L_428487: /* 428487: mov eax, ecx */
  eax = ecx;
/* 428489: jmp 0x4284c7 */
  goto L_4284c7;
L_42848b: /* 42848b: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 42848e: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 428491: je 0x4284c1 */
  if (zf) goto L_4284c1;
L_428493: /* 428493: cmp dx, 0x22 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 428497: je 0x4284ad */
  if (zf) goto L_4284ad;
L_428499: /* 428499: mov word ptr [esi], dx */
  W16((uint32_t)(esi), (edx & 0xffffu));
/* 42849c: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 42849e: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4284a0: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 4284a3: je 0x428487 */
  if (zf) goto L_428487;
L_4284a5: /* 4284a5: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 4284a8: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4284ab: jne 0x428493 */
  if (!zf) goto L_428493;
L_4284ad: /* 4284ad: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4284b1: je 0x4284c1 */
  if (zf) goto L_4284c1;
L_4284b3: /* 4284b3: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_4284b5: /* 4284b5: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 4284b8: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4284bb: jne 0x42846f */
  if (!zf) goto L_42846f;
L_4284bd: /* 4284bd: jmp 0x4284c1 */
  goto L_4284c1;
L_4284bf: /* 4284bf: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_4284c1: /* 4284c1: cmp word ptr [ecx], 0x3b */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x3bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4284c5: je 0x4284bf */
  if (zf) goto L_4284bf;
L_4284c7: /* 4284c7: and word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi), r);
  }
/* 4284cb: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4284cd: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4284cf: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4284d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4284d2: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4284d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4284d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4284d6: ret  */
  esp += 4; SPILL(); return;
}

void f_4284d7(void) {
  LOAD_REGS();
L_4284d7: /* 4284d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4284d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4284d9: mov eax, dword ptr [0x44f564] */
  eax = R32((uint32_t)(0x44f564u));
/* 4284de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4284df: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4284e0: mov ebp, dword ptr [0x4390d4] */
  ebp = R32((uint32_t)(0x4390d4u));
/* 4284e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4284e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4284e8: xor ebx, ebx */
  ebx = 0;
/* 4284ea: xor esi, esi */
  esi = 0;
/* 4284ec: xor edi, edi */
  edi = 0;
/* 4284ee: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4284f0: jne 0x428520 */
  if (!zf) goto L_428520;
L_4284f2: /* 4284f2: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x4284f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4284f4: mov esi, eax */
  esi = eax;
/* 4284f6: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4284f8: je 0x428506 */
  if (zf) goto L_428506;
L_4284fa: /* 4284fa: mov dword ptr [0x44f564], 1 */
  W32((uint32_t)(0x44f564u), 0x1u);
/* 428504: jmp 0x428525 */
  goto L_428525;
L_428506: /* 428506: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x42850cu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 42850c: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42850f: jne 0x42851b */
  if (!zf) goto L_42851b;
L_428511: /* 428511: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 428513: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 428514: mov dword ptr [0x44f564], eax */
  W32((uint32_t)(0x44f564u), eax);
/* 428519: jmp 0x428520 */
  goto L_428520;
L_42851b: /* 42851b: mov eax, dword ptr [0x44f564] */
  eax = R32((uint32_t)(0x44f564u));
L_428520: /* 428520: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428523: jne 0x42857d */
  if (!zf) goto L_42857d;
L_428525: /* 428525: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428527: jne 0x428538 */
  if (!zf) goto L_428538;
L_428529: /* 428529: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x42852bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 42852b: mov esi, eax */
  esi = eax;
/* 42852d: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42852f: jne 0x428538 */
  if (!zf) goto L_428538;
L_428531: /* 428531: xor eax, eax */
  eax = 0;
/* 428533: jmp 0x428624 */
  goto L_428624;
L_428538: /* 428538: cmp word ptr [esi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42853b: mov eax, esi */
  eax = esi;
/* 42853d: je 0x42854d */
  if (zf) goto L_42854d;
L_42853f: /* 42853f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 428540: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 428541: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 428544: jne 0x42853f */
  if (!zf) goto L_42853f;
L_428546: /* 428546: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 428547: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 428548: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42854b: jne 0x42853f */
  if (!zf) goto L_42853f;
L_42854d: /* 42854d: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42854f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 428550: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 428551: mov ebp, eax */
  ebp = eax;
/* 428553: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 428554: call 0x4010eb */
  esp -= 4; W32(esp, 0x428559u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 428559: mov edi, eax */
  edi = eax;
/* 42855b: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42855d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42855e: jne 0x428570 */
  if (!zf) goto L_428570;
L_428560: /* 428560: xor edi, edi */
  edi = 0;
L_428562: /* 428562: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428563: call dword ptr [0x4390cc] */
  esp -= 4; W32(esp, 0x428569u); SPILL(); call_ind(R32(0x4390ccu)); if (g_unwind) return; /* KERNEL32!FreeEnvironmentStringsW */ RELOAD();
/* 428569: mov eax, edi */
  eax = edi;
/* 42856b: jmp 0x428624 */
  goto L_428624;
L_428570: /* 428570: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 428571: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428572: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 428573: call 0x40126b */
  esp -= 4; W32(esp, 0x428578u); SPILL(); hle_memcpy(); RELOAD();
/* 428578: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42857b: jmp 0x428562 */
  goto L_428562;
L_42857d: /* 42857d: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428580: je 0x428586 */
  if (zf) goto L_428586;
L_428582: /* 428582: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428584: jne 0x428531 */
  if (!zf) goto L_428531;
L_428586: /* 428586: call dword ptr [0x4390c8] */
  esp -= 4; W32(esp, 0x42858cu); SPILL(); call_ind(R32(0x4390c8u)); if (g_unwind) return; /* KERNEL32!GetEnvironmentStrings */ RELOAD();
/* 42858c: mov ebp, eax */
  ebp = eax;
/* 42858e: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428590: je 0x428531 */
  if (zf) goto L_428531;
L_428592: /* 428592: cmp byte ptr [ebp], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428595: mov esi, ebp */
  esi = ebp;
/* 428597: je 0x4285bc */
  if (zf) goto L_4285bc;
L_428599: /* 428599: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42859a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42859b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42859d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42859e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4285a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4285a1: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x4285a7u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 4285a7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4285a9: je 0x428531 */
  if (zf) goto L_428531;
L_4285ab: /* 4285ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4285ac: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4285ae: call 0x402493 */
  esp -= 4; W32(esp, 0x4285b3u); SPILL(); hle_strlen(); RELOAD();
/* 4285b3: lea esi, [esi + eax + 1] */
  esi = (uint32_t)(esi + eax + 0x1u);
/* 4285b7: cmp byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4285b9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4285ba: jne 0x428599 */
  if (!zf) goto L_428599;
L_4285bc: /* 4285bc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4285bd: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 4285c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4285c1: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 4285c5: call 0x4010eb */
  esp -= 4; W32(esp, 0x4285cau); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4285ca: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4285cc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4285cd: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 4285d1: je 0x428635 */
  if (zf) goto L_428635;
L_4285d3: /* 4285d3: cmp byte ptr [ebp], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4285d6: mov edi, ebp */
  edi = ebp;
/* 4285d8: mov esi, eax */
  esi = eax;
/* 4285da: je 0x428616 */
  if (zf) goto L_428616;
L_4285dc: /* 4285dc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4285e0: mov eax, esi */
  eax = esi;
/* 4285e2: sub eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4285e6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4285e8: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4285ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4285eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4285ec: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4285ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4285ef: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4285f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4285f2: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x4285f8u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 4285f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4285fa: je 0x42862b */
  if (zf) goto L_42862b;
L_4285fc: /* 4285fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4285fd: call 0x402493 */
  esp -= 4; W32(esp, 0x428602u); SPILL(); hle_strlen(); RELOAD();
/* 428602: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428603: lea edi, [edi + eax + 1] */
  edi = (uint32_t)(edi + eax + 0x1u);
/* 428607: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42860cu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42860c: cmp byte ptr [edi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42860e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42860f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428610: lea esi, [esi + eax*2 + 2] */
  esi = (uint32_t)(esi + eax*2 + 0x2u);
/* 428614: jne 0x4285dc */
  if (!zf) goto L_4285dc;
L_428616: /* 428616: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 428617: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 42861a: call dword ptr [0x4390c4] */
  esp -= 4; W32(esp, 0x428620u); SPILL(); call_ind(R32(0x4390c4u)); if (g_unwind) return; /* KERNEL32!FreeEnvironmentStringsA */ RELOAD();
/* 428620: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_428624: /* 428624: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 428625: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 428626: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 428627: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 428628: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428629: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42862a: ret  */
  esp += 4; SPILL(); return;
L_42862b: /* 42862b: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42862f: call 0x401156 */
  esp -= 4; W32(esp, 0x428634u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 428634: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_428635: /* 428635: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 428636: call dword ptr [0x4390c4] */
  esp -= 4; W32(esp, 0x42863cu); SPILL(); call_ind(R32(0x4390c4u)); if (g_unwind) return; /* KERNEL32!FreeEnvironmentStringsA */ RELOAD();
/* 42863c: jmp 0x428531 */
  goto L_428531;
}

void f_428641(void) {
  LOAD_REGS();
L_428641: /* 428641: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 428643: push 0x440df0 */
  { uint32_t v = 0x440df0u; esp -= 4; W32(esp, v); }
/* 428648: call 0x40101f */
  esp -= 4; W32(esp, 0x42864du); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42864d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 428651: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 428654: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 428656: xor eax, eax */
  eax = 0;
/* 428658: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 428659: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42865c: jmp 0x428677 */
  goto L_428677;
L_428677: /* 428677: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42867b: call 0x40105a */
  esp -= 4; W32(esp, 0x428680u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 428680: ret 4 */
  esp += 8; SPILL(); return;
}

void f_42865e(void) {
  LOAD_REGS();
L_42865e: /* 42865e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 428661: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 428663: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 428665: xor ecx, ecx */
  ecx = 0;
/* 428667: cmp eax, 0xc0000005 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc0000005u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42866c: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 42866f: mov eax, ecx */
  eax = ecx;
/* 428671: ret  */
  esp += 4; SPILL(); return;
}

void f_428672(void) {
  LOAD_REGS();
L_428672: /* 428672: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 428675: xor eax, eax */
  eax = 0;
/* 428677: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42867b: call 0x40105a */
  esp -= 4; W32(esp, 0x428680u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 428680: ret 4 */
  esp += 8; SPILL(); return;
}

void f_428683(void) {
  LOAD_REGS();
L_428683: /* 428683: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 428686: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428687: call 0x424fae */
  esp -= 4; W32(esp, 0x42868cu); SPILL(); f_424fae(); if (g_unwind) return; RELOAD();
/* 42868c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42868f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428690: jne 0x428695 */
  if (!zf) goto L_428695;
L_428692: /* 428692: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 428694: ret  */
  esp += 4; SPILL(); return;
L_428695: /* 428695: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 428697: ret  */
  esp += 4; SPILL(); return;
}

void f_428698(void) {
  LOAD_REGS();
L_428698: /* 428698: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428699: mov esi, eax */
  esi = eax;
/* 42869b: jmp 0x4286af */
  goto L_4286af;
L_42869d: /* 42869d: mov al, byte ptr [esp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4286a1: dec dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 4286a5: call 0x428683 */
  esp -= 4; W32(esp, 0x4286aau); SPILL(); f_428683(); if (g_unwind) return; RELOAD();
/* 4286aa: cmp dword ptr [esi], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4286ad: je 0x4286b6 */
  if (zf) goto L_4286b6;
L_4286af: /* 4286af: cmp dword ptr [esp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4286b4: jg 0x42869d */
  if ((!zf && sf == of)) goto L_42869d;
L_4286b6: /* 4286b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4286b7: ret  */
  esp += 4; SPILL(); return;
}

void f_4286b8(void) {
  LOAD_REGS();
L_4286b8: /* 4286b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4286b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4286ba: mov esi, eax */
  esi = eax;
/* 4286bc: mov edi, ecx */
  edi = ecx;
/* 4286be: jmp 0x4286d1 */
  goto L_4286d1;
L_4286c0: /* 4286c0: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 4286c2: dec dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 4286c6: call 0x428683 */
  esp -= 4; W32(esp, 0x4286cbu); SPILL(); f_428683(); if (g_unwind) return; RELOAD();
/* 4286cb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4286cc: cmp dword ptr [esi], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4286cf: je 0x4286d8 */
  if (zf) goto L_4286d8;
L_4286d1: /* 4286d1: cmp dword ptr [esp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4286d6: jg 0x4286c0 */
  if ((!zf && sf == of)) goto L_4286c0;
L_4286d8: /* 4286d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4286d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4286da: ret  */
  esp += 4; SPILL(); return;
}

void f_4286db(void) {
  LOAD_REGS();
L_4286db: /* 4286db: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4286dc: mov ebp, esp */
  ebp = esp;
/* 4286de: sub esp, 0x250 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x250u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4286e4: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4286e9: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4286ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4286ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4286ee: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4286f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4286f2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4286f5: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 4286f7: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4286fa: xor eax, eax */
  eax = 0;
/* 4286fc: xor ecx, ecx */
  ecx = 0;
/* 4286fe: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428700: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 428703: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 428706: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 428709: je 0x428e1a */
  if (zf) goto L_428e1a;
L_42870f: /* 42870f: jmp 0x428717 */
  goto L_428717;
L_428711: /* 428711: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 428714: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
L_428717: /* 428717: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 428718: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42871c: mov edx, 0x800 */
  edx = 0x800u;
/* 428721: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 428724: jl 0x428e1a */
  if ((sf != of)) goto L_428e1a;
L_42872a: /* 42872a: cmp bl, 0x20 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42872d: jl 0x428743 */
  if ((sf != of)) goto L_428743;
L_42872f: /* 42872f: cmp bl, 0x78 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 428732: jg 0x428743 */
  if ((!zf && sf == of)) goto L_428743;
L_428734: /* 428734: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 428737: movsx eax, byte ptr [eax + 0x43e158] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0x43e158u)));
/* 42873e: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 428741: jmp 0x428745 */
  goto L_428745;
L_428743: /* 428743: xor eax, eax */
  eax = 0;
L_428745: /* 428745: movsx eax, byte ptr [ecx + eax*8 + 0x43e178] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + eax*8 + 0x43e178u)));
/* 42874d: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 428750: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 428753: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 428756: ja 0x428e0d */
  if ((!cf && !zf)) goto L_428e0d;
L_42875c: /* 42875c: jmp dword ptr [eax*4 + 0x428e2d] */
  switch (R32((uint32_t)(eax*4 + 0x428e2du))) {
    case 0x428763u: goto L_428763;
    case 0x428780u: goto L_428780;
    case 0x4287ccu: goto L_4287cc;
    case 0x428808u: goto L_428808;
    case 0x428811u: goto L_428811;
    case 0x428848u: goto L_428848;
    case 0x4288e0u: goto L_4288e0;
    case 0x428913u: goto L_428913;
    default: guest_badjump(0x42875c, R32((uint32_t)(eax*4 + 0x428e2du))); return;
  }
L_428763: /* 428763: xor eax, eax */
  eax = 0;
/* 428765: or dword ptr [ebp - 0xc], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 428769: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 42876c: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42876f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 428772: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 428775: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 428778: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 42877b: jmp 0x428e0d */
  goto L_428e0d;
L_428780: /* 428780: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 428783: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 428786: je 0x4287c3 */
  if (zf) goto L_4287c3;
L_428788: /* 428788: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42878b: je 0x4287ba */
  if (zf) goto L_4287ba;
L_42878d: /* 42878d: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 428790: je 0x4287b1 */
  if (zf) goto L_4287b1;
L_428792: /* 428792: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 428793: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 428794: je 0x4287a8 */
  if (zf) goto L_4287a8;
L_428796: /* 428796: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 428799: jne 0x428e0d */
  if (!zf) goto L_428e0d;
L_42879f: /* 42879f: or dword ptr [ebp - 8], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4287a3: jmp 0x428e0d */
  goto L_428e0d;
L_4287a8: /* 4287a8: or dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4287ac: jmp 0x428e0d */
  goto L_428e0d;
L_4287b1: /* 4287b1: or dword ptr [ebp - 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4287b5: jmp 0x428e0d */
  goto L_428e0d;
L_4287ba: /* 4287ba: or byte ptr [ebp - 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4287be: jmp 0x428e0d */
  goto L_428e0d;
L_4287c3: /* 4287c3: or dword ptr [ebp - 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4287c7: jmp 0x428e0d */
  goto L_428e0d;
L_4287cc: /* 4287cc: cmp bl, 0x2a */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4287cf: jne 0x4287f3 */
  if (!zf) goto L_4287f3;
L_4287d1: /* 4287d1: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4287d4: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 4287d7: mov esi, dword ptr [esi - 4] */
  esi = R32((uint32_t)(esi + 0xfffffffcu));
/* 4287da: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4287dc: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 4287df: jge 0x428e0d */
  if ((sf == of)) goto L_428e0d;
L_4287e5: /* 4287e5: or dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4287e9: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 4287eb: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 4287ee: jmp 0x428e0d */
  goto L_428e0d;
L_4287f3: /* 4287f3: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 4287f6: movsx ecx, bl */
  ecx = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 4287f9: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 4287fc: lea eax, [ecx + eax*2 - 0x30] */
  eax = (uint32_t)(ecx + eax*2 + 0xffffffd0u);
/* 428800: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 428803: jmp 0x428e0d */
  goto L_428e0d;
L_428808: /* 428808: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 42880c: jmp 0x428e0d */
  goto L_428e0d;
L_428811: /* 428811: cmp bl, 0x2a */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428814: jne 0x428833 */
  if (!zf) goto L_428833;
L_428816: /* 428816: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 428819: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 42881c: mov esi, dword ptr [esi - 4] */
  esi = R32((uint32_t)(esi + 0xfffffffcu));
/* 42881f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 428821: mov dword ptr [ebp - 0xc], esi */
  W32((uint32_t)(ebp + 0xfffffff4u), esi);
/* 428824: jge 0x428e0d */
  if ((sf == of)) goto L_428e0d;
L_42882a: /* 42882a: or dword ptr [ebp - 0xc], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 42882e: jmp 0x428e0d */
  goto L_428e0d;
L_428833: /* 428833: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 428836: movsx ecx, bl */
  ecx = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 428839: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 42883c: lea eax, [ecx + eax*2 - 0x30] */
  eax = (uint32_t)(ecx + eax*2 + 0xffffffd0u);
/* 428840: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 428843: jmp 0x428e0d */
  goto L_428e0d;
L_428848: /* 428848: cmp bl, 0x49 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x49u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42884b: je 0x42887a */
  if (zf) goto L_42887a;
L_42884d: /* 42884d: cmp bl, 0x68 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x68u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428850: je 0x428871 */
  if (zf) goto L_428871;
L_428852: /* 428852: cmp bl, 0x6c */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x6cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428855: je 0x428868 */
  if (zf) goto L_428868;
L_428857: /* 428857: cmp bl, 0x77 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x77u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42885a: jne 0x428e0d */
  if (!zf) goto L_428e0d;
L_428860: /* 428860: or dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 428863: jmp 0x428e0d */
  goto L_428e0d;
L_428868: /* 428868: or dword ptr [ebp - 8], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 42886c: jmp 0x428e0d */
  goto L_428e0d;
L_428871: /* 428871: or dword ptr [ebp - 8], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 428875: jmp 0x428e0d */
  goto L_428e0d;
L_42887a: /* 42887a: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42887c: cmp al, 0x36 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x36u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42887e: jne 0x428894 */
  if (!zf) goto L_428894;
L_428880: /* 428880: cmp byte ptr [edi + 1], 0x34 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1u))); uint8_t b = (uint8_t)(0x34u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428884: jne 0x428894 */
  if (!zf) goto L_428894;
L_428886: /* 428886: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 428887: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 428888: or byte ptr [ebp - 7], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 42888c: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 42888f: jmp 0x428e0d */
  goto L_428e0d;
L_428894: /* 428894: cmp al, 0x33 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x33u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428896: jne 0x4288ac */
  if (!zf) goto L_4288ac;
L_428898: /* 428898: cmp byte ptr [edi + 1], 0x32 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1u))); uint8_t b = (uint8_t)(0x32u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42889c: jne 0x4288ac */
  if (!zf) goto L_4288ac;
L_42889e: /* 42889e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42889f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4288a0: and byte ptr [ebp - 7], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 4288a4: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 4288a7: jmp 0x428e0d */
  goto L_428e0d;
L_4288ac: /* 4288ac: cmp al, 0x64 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x64u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4288ae: je 0x428e0d */
  if (zf) goto L_428e0d;
L_4288b4: /* 4288b4: cmp al, 0x69 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x69u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4288b6: je 0x428e0d */
  if (zf) goto L_428e0d;
L_4288bc: /* 4288bc: cmp al, 0x6f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4288be: je 0x428e0d */
  if (zf) goto L_428e0d;
L_4288c4: /* 4288c4: cmp al, 0x75 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x75u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4288c6: je 0x428e0d */
  if (zf) goto L_428e0d;
L_4288cc: /* 4288cc: cmp al, 0x78 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4288ce: je 0x428e0d */
  if (zf) goto L_428e0d;
L_4288d4: /* 4288d4: cmp al, 0x58 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4288d6: je 0x428e0d */
  if (zf) goto L_428e0d;
L_4288dc: /* 4288dc: and dword ptr [ebp - 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc4u), r);
  }
L_4288e0: /* 4288e0: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 4288e6: and dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 4288ea: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 4288ed: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4288f2: je 0x428904 */
  if (zf) goto L_428904;
L_4288f4: /* 4288f4: lea esi, [ebp - 0x14] */
  esi = (uint32_t)(ebp + 0xffffffecu);
/* 4288f7: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 4288f9: call 0x428683 */
  esp -= 4; W32(esp, 0x4288feu); SPILL(); f_428683(); if (g_unwind) return; RELOAD();
/* 4288fe: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 428900: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 428901: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
L_428904: /* 428904: lea esi, [ebp - 0x14] */
  esi = (uint32_t)(ebp + 0xffffffecu);
/* 428907: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 428909: call 0x428683 */
  esp -= 4; W32(esp, 0x42890eu); SPILL(); f_428683(); if (g_unwind) return; RELOAD();
/* 42890e: jmp 0x428e0d */
  goto L_428e0d;
L_428913: /* 428913: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 428916: cmp eax, 0x67 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 428919: jg 0x428b54 */
  if ((!zf && sf == of)) goto L_428b54;
L_42891f: /* 42891f: cmp eax, 0x65 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 428922: jge 0x4289a2 */
  if ((sf == of)) goto L_4289a2;
L_428924: /* 428924: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 428927: jg 0x428a03 */
  if ((!zf && sf == of)) goto L_428a03;
L_42892d: /* 42892d: je 0x428bd3 */
  if (zf) goto L_428bd3;
L_428933: /* 428933: sub eax, 0x43 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x43u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 428936: je 0x4289c5 */
  if (zf) goto L_4289c5;
L_42893c: /* 42893c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42893d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42893e: je 0x428998 */
  if (zf) goto L_428998;
L_428940: /* 428940: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 428941: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 428942: je 0x428998 */
  if (zf) goto L_428998;
L_428944: /* 428944: sub eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 428947: jne 0x428d22 */
  if (!zf) goto L_428d22;
L_42894d: /* 42894d: test word ptr [ebp - 8], 0x830 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff8u))); uint16_t b = (uint16_t)(0x830u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 428953: jne 0x428958 */
  if (!zf) goto L_428958;
L_428955: /* 428955: or dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_428958: /* 428958: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 42895b: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42895e: jne 0x428965 */
  if (!zf) goto L_428965;
L_428960: /* 428960: mov ecx, 0x7fffffff */
  ecx = 0x7fffffffu;
L_428965: /* 428965: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 428968: test word ptr [ebp - 8], 0x810 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff8u))); uint16_t b = (uint16_t)(0x810u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42896e: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 428971: mov esi, dword ptr [esi - 4] */
  esi = R32((uint32_t)(esi + 0xfffffffcu));
/* 428974: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 428977: je 0x428ba9 */
  if (zf) goto L_428ba9;
L_42897d: /* 42897d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42897f: jne 0x42898a */
  if (!zf) goto L_42898a;
L_428981: /* 428981: mov esi, dword ptr [0x44dd0c] */
  esi = R32((uint32_t)(0x44dd0cu));
/* 428987: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
L_42898a: /* 42898a: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
/* 428991: mov eax, esi */
  eax = esi;
/* 428993: jmp 0x428b9c */
  goto L_428b9c;
L_428998: /* 428998: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 42899f: add bl, 0x20 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_4289a2: /* 4289a2: or dword ptr [ebp - 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4289a6: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4289aa: lea edi, [ebp - 0x250] */
  edi = (uint32_t)(ebp + 0xfffffdb0u);
/* 4289b0: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 4289b3: jge 0x428a9e */
  if ((sf == of)) goto L_428a9e;
L_4289b9: /* 4289b9: mov dword ptr [ebp - 0xc], 6 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x6u);
/* 4289c0: jmp 0x428ae8 */
  goto L_428ae8;
L_4289c5: /* 4289c5: test word ptr [ebp - 8], 0x830 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff8u))); uint16_t b = (uint16_t)(0x830u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4289cb: jne 0x4289d0 */
  if (!zf) goto L_4289d0;
L_4289cd: /* 4289cd: or dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_4289d0: /* 4289d0: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4289d3: test word ptr [ebp - 8], 0x810 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff8u))); uint16_t b = (uint16_t)(0x810u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4289d9: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 4289dc: je 0x428a3a */
  if (zf) goto L_428a3a;
L_4289de: /* 4289de: xor eax, eax */
  eax = 0;
/* 4289e0: mov ax, word ptr [esi - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xfffffffcu))) & 0xffffu);
/* 4289e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4289e5: lea eax, [ebp - 0x250] */
  eax = (uint32_t)(ebp + 0xfffffdb0u);
/* 4289eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4289ec: call 0x402a4e */
  esp -= 4; W32(esp, 0x4289f1u); SPILL(); f_402a4e(); if (g_unwind) return; RELOAD();
/* 4289f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4289f3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4289f4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4289f5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 4289f8: jge 0x428a4a */
  if ((sf == of)) goto L_428a4a;
L_4289fa: /* 4289fa: mov dword ptr [ebp - 0x38], 1 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x1u);
/* 428a01: jmp 0x428a4a */
  goto L_428a4a;
L_428a03: /* 428a03: sub eax, 0x5a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 428a06: je 0x428a58 */
  if (zf) goto L_428a58;
L_428a08: /* 428a08: sub eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 428a0b: je 0x4289d0 */
  if (zf) goto L_4289d0;
L_428a0d: /* 428a0d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 428a0e: jne 0x428d22 */
  if (!zf) goto L_428d22;
L_428a14: /* 428a14: or dword ptr [ebp - 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_428a18: /* 428a18: mov dword ptr [ebp - 0x10], 0xa */
  W32((uint32_t)(ebp + 0xfffffff0u), 0xau);
L_428a1f: /* 428a1f: mov edi, 0x8000 */
  edi = 0x8000u;
/* 428a24: test dword ptr [ebp - 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428a27: je 0x428c45 */
  if (zf) goto L_428c45;
L_428a2d: /* 428a2d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 428a2f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 428a32: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 428a35: jmp 0x428c72 */
  goto L_428c72;
L_428a3a: /* 428a3a: mov al, byte ptr [esi - 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 428a3d: mov byte ptr [ebp - 0x250], al */
  W8((uint32_t)(ebp + 0xfffffdb0u), (eax & 0xffu));
/* 428a43: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
L_428a4a: /* 428a4a: lea eax, [ebp - 0x250] */
  eax = (uint32_t)(ebp + 0xfffffdb0u);
/* 428a50: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 428a53: jmp 0x428d22 */
  goto L_428d22;
L_428a58: /* 428a58: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 428a5a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 428a5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428a5f: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 428a62: je 0x428a90 */
  if (zf) goto L_428a90;
L_428a64: /* 428a64: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 428a67: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428a69: je 0x428a90 */
  if (zf) goto L_428a90;
L_428a6b: /* 428a6b: test dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428a6e: movsx eax, word ptr [eax] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax)));
/* 428a71: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 428a74: je 0x428a87 */
  if (zf) goto L_428a87;
L_428a76: /* 428a76: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 428a77: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 428a79: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 428a7b: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
/* 428a82: jmp 0x428d1f */
  goto L_428d1f;
L_428a87: /* 428a87: and dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 428a8b: jmp 0x428d1f */
  goto L_428d1f;
L_428a90: /* 428a90: mov eax, dword ptr [0x44dd08] */
  eax = R32((uint32_t)(0x44dd08u));
/* 428a95: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 428a98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428a99: jmp 0x428b49 */
  goto L_428b49;
L_428a9e: /* 428a9e: jne 0x428aae */
  if (!zf) goto L_428aae;
L_428aa0: /* 428aa0: cmp bl, 0x67 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x67u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428aa3: jne 0x428ae8 */
  if (!zf) goto L_428ae8;
L_428aa5: /* 428aa5: mov dword ptr [ebp - 0xc], 1 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x1u);
/* 428aac: jmp 0x428ae8 */
  goto L_428ae8;
L_428aae: /* 428aae: mov eax, 0x200 */
  eax = 0x200u;
/* 428ab3: cmp dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 428ab6: jle 0x428abb */
  if ((zf || sf != of)) goto L_428abb;
L_428ab8: /* 428ab8: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_428abb: /* 428abb: cmp dword ptr [ebp - 0xc], 0xa3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0xa3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 428ac2: jle 0x428ae8 */
  if ((zf || sf != of)) goto L_428ae8;
L_428ac4: /* 428ac4: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 428ac7: add eax, 0x15d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15du);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 428acc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428acd: call 0x4010eb */
  esp -= 4; W32(esp, 0x428ad2u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 428ad2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428ad4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428ad5: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 428ad8: je 0x428ae1 */
  if (zf) goto L_428ae1;
L_428ada: /* 428ada: mov edi, eax */
  edi = eax;
/* 428adc: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 428adf: jmp 0x428ae8 */
  goto L_428ae8;
L_428ae1: /* 428ae1: mov dword ptr [ebp - 0xc], 0xa3 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0xa3u);
L_428ae8: /* 428ae8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 428aea: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 428aed: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 428af0: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 428af3: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 428af6: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 428af9: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 428afc: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 428aff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428b00: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 428b03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 428b04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428b05: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 428b08: call dword ptr [0x44afa0] */
  { uint32_t t = R32((uint32_t)(0x44afa0u)); esp -= 4; W32(esp, 0x428b0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 428b0e: mov esi, dword ptr [ebp - 8] */
  esi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 428b11: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 428b14: and esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  esi = r;
  }
/* 428b1a: je 0x428b2a */
  if (zf) goto L_428b2a;
L_428b1c: /* 428b1c: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428b20: jne 0x428b2a */
  if (!zf) goto L_428b2a;
L_428b22: /* 428b22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 428b23: call dword ptr [0x44afac] */
  { uint32_t t = R32((uint32_t)(0x44afacu)); esp -= 4; W32(esp, 0x428b29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 428b29: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_428b2a: /* 428b2a: cmp bl, 0x67 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x67u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428b2d: jne 0x428b3b */
  if (!zf) goto L_428b3b;
L_428b2f: /* 428b2f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428b31: jne 0x428b3b */
  if (!zf) goto L_428b3b;
L_428b33: /* 428b33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 428b34: call dword ptr [0x44afa4] */
  { uint32_t t = R32((uint32_t)(0x44afa4u)); esp -= 4; W32(esp, 0x428b3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 428b3a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_428b3b: /* 428b3b: cmp byte ptr [edi], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428b3e: jne 0x428b48 */
  if (!zf) goto L_428b48;
L_428b40: /* 428b40: or byte ptr [ebp - 7], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 428b44: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 428b45: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_428b48: /* 428b48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_428b49: /* 428b49: call 0x402493 */
  esp -= 4; W32(esp, 0x428b4eu); SPILL(); hle_strlen(); RELOAD();
/* 428b4e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428b4f: jmp 0x428d1f */
  goto L_428d1f;
L_428b54: /* 428b54: sub eax, 0x69 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 428b57: je 0x428a14 */
  if (zf) goto L_428a14;
L_428b5d: /* 428b5d: sub eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 428b60: je 0x428c1d */
  if (zf) goto L_428c1d;
L_428b66: /* 428b66: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 428b67: je 0x428c03 */
  if (zf) goto L_428c03;
L_428b6d: /* 428b6d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 428b6e: je 0x428bcc */
  if (zf) goto L_428bcc;
L_428b70: /* 428b70: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 428b73: je 0x428958 */
  if (zf) goto L_428958;
L_428b79: /* 428b79: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 428b7a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 428b7b: je 0x428a18 */
  if (zf) goto L_428a18;
L_428b81: /* 428b81: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 428b84: jne 0x428d22 */
  if (!zf) goto L_428d22;
L_428b8a: /* 428b8a: mov dword ptr [ebp - 0x34], 0x27 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x27u);
/* 428b91: jmp 0x428bda */
  goto L_428bda;
L_428b93: /* 428b93: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 428b94: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 428b98: je 0x428ba0 */
  if (zf) goto L_428ba0;
L_428b9a: /* 428b9a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 428b9b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_428b9c: /* 428b9c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428b9e: jne 0x428b93 */
  if (!zf) goto L_428b93;
L_428ba0: /* 428ba0: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 428ba2: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 428ba4: jmp 0x428d1f */
  goto L_428d1f;
L_428ba9: /* 428ba9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428bab: jne 0x428bb6 */
  if (!zf) goto L_428bb6;
L_428bad: /* 428bad: mov esi, dword ptr [0x44dd08] */
  esi = R32((uint32_t)(0x44dd08u));
/* 428bb3: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
L_428bb6: /* 428bb6: mov eax, esi */
  eax = esi;
/* 428bb8: jmp 0x428bc1 */
  goto L_428bc1;
L_428bba: /* 428bba: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 428bbb: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428bbe: je 0x428bc5 */
  if (zf) goto L_428bc5;
L_428bc0: /* 428bc0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_428bc1: /* 428bc1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428bc3: jne 0x428bba */
  if (!zf) goto L_428bba;
L_428bc5: /* 428bc5: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 428bc7: jmp 0x428d1f */
  goto L_428d1f;
L_428bcc: /* 428bcc: mov dword ptr [ebp - 0xc], 8 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x8u);
L_428bd3: /* 428bd3: mov dword ptr [ebp - 0x34], 7 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x7u);
L_428bda: /* 428bda: test byte ptr [ebp - 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428bde: mov dword ptr [ebp - 0x10], 0x10 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x10u);
/* 428be5: je 0x428a1f */
  if (zf) goto L_428a1f;
L_428beb: /* 428beb: mov al, byte ptr [ebp - 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffccu))) & 0xffu);
/* 428bee: add al, 0x51 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x51u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 428bf0: mov byte ptr [ebp - 0x18], 0x30 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x30u);
/* 428bf4: mov byte ptr [ebp - 0x17], al */
  W8((uint32_t)(ebp + 0xffffffe9u), (eax & 0xffu));
/* 428bf7: mov dword ptr [ebp - 0x24], 2 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x2u);
/* 428bfe: jmp 0x428a1f */
  goto L_428a1f;
L_428c03: /* 428c03: test byte ptr [ebp - 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428c07: mov dword ptr [ebp - 0x10], 8 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x8u);
/* 428c0e: je 0x428a1f */
  if (zf) goto L_428a1f;
L_428c14: /* 428c14: or byte ptr [ebp - 7], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 428c18: jmp 0x428a1f */
  goto L_428a1f;
L_428c1d: /* 428c1d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 428c1f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 428c22: test byte ptr [ebp - 8], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428c26: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 428c29: je 0x428c34 */
  if (zf) goto L_428c34;
L_428c2b: /* 428c2b: mov cx, word ptr [ebp - 0x14] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffecu))) & 0xffffu);
/* 428c2f: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 428c32: jmp 0x428c39 */
  goto L_428c39;
L_428c34: /* 428c34: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 428c37: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_428c39: /* 428c39: mov dword ptr [ebp - 0x38], 1 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x1u);
/* 428c40: jmp 0x428dfa */
  goto L_428dfa;
L_428c45: /* 428c45: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 428c48: test byte ptr [ebp - 8], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428c4c: je 0x428c64 */
  if (zf) goto L_428c64;
L_428c4e: /* 428c4e: test byte ptr [ebp - 8], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428c52: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 428c55: je 0x428c5e */
  if (zf) goto L_428c5e;
L_428c57: /* 428c57: movsx eax, word ptr [esi - 4] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esi + 0xfffffffcu)));
L_428c5b: /* 428c5b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 428c5c: jmp 0x428c75 */
  goto L_428c75;
L_428c5e: /* 428c5e: movzx eax, word ptr [esi - 4] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0xfffffffcu)));
/* 428c62: jmp 0x428c5b */
  goto L_428c5b;
L_428c64: /* 428c64: test byte ptr [ebp - 8], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428c68: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 428c6b: je 0x428c70 */
  if (zf) goto L_428c70;
L_428c6d: /* 428c6d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 428c6e: jmp 0x428c72 */
  goto L_428c72;
L_428c70: /* 428c70: xor edx, edx */
  edx = 0;
L_428c72: /* 428c72: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
L_428c75: /* 428c75: test byte ptr [ebp - 8], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428c79: je 0x428c90 */
  if (zf) goto L_428c90;
L_428c7b: /* 428c7b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 428c7d: jg 0x428c90 */
  if ((!zf && sf == of)) goto L_428c90;
L_428c7f: /* 428c7f: jl 0x428c85 */
  if ((sf != of)) goto L_428c85;
L_428c81: /* 428c81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 428c83: jae 0x428c90 */
  if (!cf) goto L_428c90;
L_428c85: /* 428c85: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 428c87: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 428c8a: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 428c8c: or byte ptr [ebp - 7], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
L_428c90: /* 428c90: test dword ptr [ebp - 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428c93: mov esi, eax */
  esi = eax;
/* 428c95: mov ebx, edx */
  ebx = edx;
/* 428c97: jne 0x428c9b */
  if (!zf) goto L_428c9b;
L_428c99: /* 428c99: xor ebx, ebx */
  ebx = 0;
L_428c9b: /* 428c9b: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 428c9f: jge 0x428caa */
  if ((sf == of)) goto L_428caa;
L_428ca1: /* 428ca1: mov dword ptr [ebp - 0xc], 1 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x1u);
/* 428ca8: jmp 0x428cbb */
  goto L_428cbb;
L_428caa: /* 428caa: and dword ptr [ebp - 8], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 428cae: mov eax, 0x200 */
  eax = 0x200u;
/* 428cb3: cmp dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 428cb6: jle 0x428cbb */
  if ((zf || sf != of)) goto L_428cbb;
L_428cb8: /* 428cb8: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_428cbb: /* 428cbb: mov eax, esi */
  eax = esi;
/* 428cbd: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 428cbf: jne 0x428cc5 */
  if (!zf) goto L_428cc5;
L_428cc1: /* 428cc1: and dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
L_428cc5: /* 428cc5: lea edi, [ebp - 0x51] */
  edi = (uint32_t)(ebp + 0xffffffafu);
L_428cc8: /* 428cc8: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 428ccb: dec dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 428cce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 428cd0: jg 0x428cd8 */
  if ((!zf && sf == of)) goto L_428cd8;
L_428cd2: /* 428cd2: mov eax, esi */
  eax = esi;
/* 428cd4: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 428cd6: je 0x428cfc */
  if (zf) goto L_428cfc;
L_428cd8: /* 428cd8: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 428cdb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 428cdc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 428cdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428cde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 428cdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428ce0: call 0x40233d */
  esp -= 4; W32(esp, 0x428ce5u); SPILL(); f_40233d(); if (g_unwind) return; RELOAD();
/* 428ce5: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 428ce8: cmp ecx, 0x39 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x39u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 428ceb: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 428cee: mov esi, eax */
  esi = eax;
/* 428cf0: mov ebx, edx */
  ebx = edx;
/* 428cf2: jle 0x428cf7 */
  if ((zf || sf != of)) goto L_428cf7;
L_428cf4: /* 428cf4: add ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_428cf7: /* 428cf7: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 428cf9: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 428cfa: jmp 0x428cc8 */
  goto L_428cc8;
L_428cfc: /* 428cfc: lea eax, [ebp - 0x51] */
  eax = (uint32_t)(ebp + 0xffffffafu);
/* 428cff: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 428d01: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 428d02: test byte ptr [ebp - 7], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428d06: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 428d09: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 428d0c: je 0x428d22 */
  if (zf) goto L_428d22;
L_428d0e: /* 428d0e: cmp byte ptr [edi], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428d11: jne 0x428d17 */
  if (!zf) goto L_428d17;
L_428d13: /* 428d13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428d15: jne 0x428d22 */
  if (!zf) goto L_428d22;
L_428d17: /* 428d17: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 428d18: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 428d1b: mov byte ptr [edi], 0x30 */
  W8((uint32_t)(edi), 0x30u);
/* 428d1e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_428d1f: /* 428d1f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_428d22: /* 428d22: cmp dword ptr [ebp - 0x38], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428d26: jne 0x428dfa */
  if (!zf) goto L_428dfa;
L_428d2c: /* 428d2c: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 428d2f: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428d32: je 0x428d5a */
  if (zf) goto L_428d5a;
L_428d34: /* 428d34: test bh, 1 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428d37: je 0x428d3f */
  if (zf) goto L_428d3f;
L_428d39: /* 428d39: mov byte ptr [ebp - 0x18], 0x2d */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x2du);
/* 428d3d: jmp 0x428d53 */
  goto L_428d53;
L_428d3f: /* 428d3f: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428d42: je 0x428d4a */
  if (zf) goto L_428d4a;
L_428d44: /* 428d44: mov byte ptr [ebp - 0x18], 0x2b */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x2bu);
/* 428d48: jmp 0x428d53 */
  goto L_428d53;
L_428d4a: /* 428d4a: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428d4d: je 0x428d5a */
  if (zf) goto L_428d5a;
L_428d4f: /* 428d4f: mov byte ptr [ebp - 0x18], 0x20 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x20u);
L_428d53: /* 428d53: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
L_428d5a: /* 428d5a: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 428d5d: sub esi, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 428d60: sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 428d63: test bl, 0xc */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428d66: jne 0x428d75 */
  if (!zf) goto L_428d75;
L_428d68: /* 428d68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428d69: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 428d6b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 428d6e: call 0x428698 */
  esp -= 4; W32(esp, 0x428d73u); SPILL(); f_428698(); if (g_unwind) return; RELOAD();
/* 428d73: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428d74: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_428d75: /* 428d75: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 428d78: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 428d7b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 428d7e: call 0x4286b8 */
  esp -= 4; W32(esp, 0x428d83u); SPILL(); f_4286b8(); if (g_unwind) return; RELOAD();
/* 428d83: test bl, 8 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428d86: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428d87: je 0x428d9b */
  if (zf) goto L_428d9b;
L_428d89: /* 428d89: test bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428d8c: jne 0x428d9b */
  if (!zf) goto L_428d9b;
L_428d8e: /* 428d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428d8f: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 428d91: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 428d94: call 0x428698 */
  esp -= 4; W32(esp, 0x428d99u); SPILL(); f_428698(); if (g_unwind) return; RELOAD();
/* 428d99: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428d9a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_428d9b: /* 428d9b: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428d9f: je 0x428dd8 */
  if (zf) goto L_428dd8;
L_428da1: /* 428da1: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 428da5: jle 0x428dd8 */
  if ((zf || sf != of)) goto L_428dd8;
L_428da7: /* 428da7: mov ebx, dword ptr [ebp - 0x10] */
  ebx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 428daa: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
L_428dad: /* 428dad: xor eax, eax */
  eax = 0;
/* 428daf: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 428db2: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 428db3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428db4: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 428db7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428db8: call 0x402a4e */
  esp -= 4; W32(esp, 0x428dbdu); SPILL(); f_402a4e(); if (g_unwind) return; RELOAD();
/* 428dbd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 428dbe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428dbf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 428dc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 428dc2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428dc3: jle 0x428de7 */
  if ((zf || sf != of)) goto L_428de7;
L_428dc5: /* 428dc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428dc6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 428dc9: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 428dcc: call 0x4286b8 */
  esp -= 4; W32(esp, 0x428dd1u); SPILL(); f_4286b8(); if (g_unwind) return; RELOAD();
/* 428dd1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428dd3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428dd4: jne 0x428dad */
  if (!zf) goto L_428dad;
L_428dd6: /* 428dd6: jmp 0x428de7 */
  goto L_428de7;
L_428dd8: /* 428dd8: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 428ddb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 428dde: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 428de1: call 0x4286b8 */
  esp -= 4; W32(esp, 0x428de6u); SPILL(); f_4286b8(); if (g_unwind) return; RELOAD();
/* 428de6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_428de7: /* 428de7: test byte ptr [ebp - 8], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428deb: je 0x428dfa */
  if (zf) goto L_428dfa;
L_428ded: /* 428ded: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428dee: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 428df0: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 428df3: call 0x428698 */
  esp -= 4; W32(esp, 0x428df8u); SPILL(); f_428698(); if (g_unwind) return; RELOAD();
/* 428df8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428df9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_428dfa: /* 428dfa: cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428dfe: je 0x428e0d */
  if (zf) goto L_428e0d;
L_428e00: /* 428e00: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 428e03: call 0x401156 */
  esp -= 4; W32(esp, 0x428e08u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 428e08: and dword ptr [ebp - 0x30], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 428e0c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_428e0d: /* 428e0d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 428e10: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 428e12: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428e14: jne 0x428711 */
  if (!zf) goto L_428711;
L_428e1a: /* 428e1a: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 428e1d: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 428e20: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 428e23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 428e24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 428e25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 428e26: call 0x4013ab */
  esp -= 4; W32(esp, 0x428e2bu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 428e2b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 428e2c: ret  */
  esp += 4; SPILL(); return;
}

void f_428e4d(void) {
  LOAD_REGS();
L_428e4d: /* 428e4d: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 428e51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428e52: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 428e56: call 0x4286db */
  esp -= 4; W32(esp, 0x428e5bu); SPILL(); f_4286db(); if (g_unwind) return; RELOAD();
/* 428e5b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428e5c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428e5d: ret  */
  esp += 4; SPILL(); return;
}

void f_428e5e(void) {
  LOAD_REGS();
L_428e5e: /* 428e5e: cmp dword ptr [esp + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428e63: jne 0x42426b */
  if (!zf) { SPILL(); f_42426b(); return; }
L_428e69: /* 428e69: ret  */
  esp += 4; SPILL(); return;
}

void f_428e6a(void) {
  LOAD_REGS();
L_428e6a: /* 428e6a: push 0x1c8 */
  { uint32_t v = 0x1c8u; esp -= 4; W32(esp, v); }
/* 428e6f: push 0x440e00 */
  { uint32_t v = 0x440e00u; esp -= 4; W32(esp, v); }
/* 428e74: call 0x40101f */
  esp -= 4; W32(esp, 0x428e79u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 428e79: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 428e7e: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 428e81: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 428e84: xor eax, eax */
  eax = 0;
/* 428e86: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 428e89: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 428e8c: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 428e8f: and byte ptr [ebp - 0x29], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 428e92: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 428e95: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
L_428e98: /* 428e98: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 428e9b: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 428e9d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428e9f: je 0x42931f */
  if (zf) goto L_42931f;
L_428ea5: /* 428ea5: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 428ea8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428ea9: call 0x415488 */
  esp -= 4; W32(esp, 0x428eaeu); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 428eae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428eaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428eb1: je 0x428ee8 */
  if (zf) goto L_428ee8;
L_428eb3: /* 428eb3: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
L_428eb6: /* 428eb6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 428eb9: call 0x4243fa */
  esp -= 4; W32(esp, 0x428ebeu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 428ebe: mov esi, eax */
  esi = eax;
/* 428ec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428ec1: call 0x415488 */
  esp -= 4; W32(esp, 0x428ec6u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 428ec6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428ec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428ec9: jne 0x428eb6 */
  if (!zf) goto L_428eb6;
L_428ecb: /* 428ecb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428ecc: call 0x428e5e */
  esp -= 4; W32(esp, 0x428ed1u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 428ed1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_428ed2: /* 428ed2: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 428ed5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 428ed8: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 428edb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428edc: call 0x415488 */
  esp -= 4; W32(esp, 0x428ee1u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 428ee1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428ee2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428ee4: jne 0x428ed2 */
  if (!zf) goto L_428ed2;
L_428ee6: /* 428ee6: jmp 0x428e98 */
  goto L_428e98;
L_428ee8: /* 428ee8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 428eeb: cmp byte ptr [esi], 0x25 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x25u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428eee: jne 0x4297fd */
  if (!zf) goto L_4297fd;
L_428ef4: /* 428ef4: xor edi, edi */
  edi = 0;
/* 428ef6: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 428ef9: and byte ptr [ebp - 0x39], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc7u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffc7u), r);
  }
/* 428efd: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 428f00: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* 428f03: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 428f06: and byte ptr [ebp - 0x49], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
/* 428f0a: and byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb6u), r);
  }
/* 428f0e: and byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 428f12: and byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 428f16: and byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
/* 428f1a: and byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 428f1e: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
/* 428f22: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
L_428f25: /* 428f25: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 428f26: movzx ebx, byte ptr [esi] */
  ebx = (uint32_t)(R8((uint32_t)(esi)));
/* 428f29: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 428f2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428f2d: call 0x40152b */
  esp -= 4; W32(esp, 0x428f32u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 428f32: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428f33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428f35: je 0x428f46 */
  if (zf) goto L_428f46;
L_428f37: /* 428f37: inc dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffbcu), r);
  }
/* 428f3a: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 428f3d: lea edi, [ebx + eax*2 - 0x30] */
  edi = (uint32_t)(ebx + eax*2 + 0xffffffd0u);
/* 428f41: jmp 0x428fe0 */
  goto L_428fe0;
L_428f46: /* 428f46: cmp ebx, 0x4e */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 428f49: jg 0x428fbe */
  if ((!zf && sf == of)) goto L_428fbe;
L_428f4b: /* 428f4b: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428f51: /* 428f51: cmp ebx, 0x2a */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428f54: je 0x428fb9 */
  if (zf) goto L_428fb9;
L_428f56: /* 428f56: cmp ebx, 0x46 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428f59: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428f5f: /* 428f5f: cmp ebx, 0x49 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x49u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428f62: je 0x428f6e */
  if (zf) goto L_428f6e;
L_428f64: /* 428f64: cmp ebx, 0x4c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428f67: jne 0x428fcd */
  if (!zf) goto L_428fcd;
L_428f69: /* 428f69: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 428f6c: jmp 0x428fe0 */
  goto L_428fe0;
L_428f6e: /* 428f6e: mov cl, byte ptr [esi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 428f71: cmp cl, 0x36 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x36u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428f74: jne 0x428f8d */
  if (!zf) goto L_428f8d;
L_428f76: /* 428f76: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 428f79: cmp byte ptr [eax], 0x34 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x34u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428f7c: jne 0x428f8d */
  if (!zf) goto L_428f8d;
L_428f7e: /* 428f7e: mov esi, eax */
  esi = eax;
/* 428f80: inc dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffacu), r);
  }
/* 428f83: and dword ptr [ebp - 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 428f87: and dword ptr [ebp - 0x58], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 428f8b: jmp 0x428fe0 */
  goto L_428fe0;
L_428f8d: /* 428f8d: cmp cl, 0x33 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x33u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428f90: jne 0x428f9e */
  if (!zf) goto L_428f9e;
L_428f92: /* 428f92: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 428f95: cmp byte ptr [eax], 0x32 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x32u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428f98: jne 0x428f9e */
  if (!zf) goto L_428f9e;
L_428f9a: /* 428f9a: mov esi, eax */
  esi = eax;
/* 428f9c: jmp 0x428fe0 */
  goto L_428fe0;
L_428f9e: /* 428f9e: cmp cl, 0x64 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x64u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fa1: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428fa3: /* 428fa3: cmp cl, 0x69 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x69u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fa6: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428fa8: /* 428fa8: cmp cl, 0x6f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fab: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428fad: /* 428fad: cmp cl, 0x78 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fb0: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428fb2: /* 428fb2: cmp cl, 0x58 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fb5: jne 0x428fcd */
  if (!zf) goto L_428fcd;
L_428fb7: /* 428fb7: jmp 0x428fe0 */
  goto L_428fe0;
L_428fb9: /* 428fb9: inc byte ptr [ebp - 0x4b] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 428fbc: jmp 0x428fe0 */
  goto L_428fe0;
L_428fbe: /* 428fbe: cmp ebx, 0x68 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428fc1: je 0x428fda */
  if (zf) goto L_428fda;
L_428fc3: /* 428fc3: cmp ebx, 0x6c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428fc6: je 0x428fd2 */
  if (zf) goto L_428fd2;
L_428fc8: /* 428fc8: cmp ebx, 0x77 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428fcb: je 0x428fd5 */
  if (zf) goto L_428fd5;
L_428fcd: /* 428fcd: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 428fd0: jmp 0x428fe0 */
  goto L_428fe0;
L_428fd2: /* 428fd2: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
L_428fd5: /* 428fd5: inc byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 428fd8: jmp 0x428fe0 */
  goto L_428fe0;
L_428fda: /* 428fda: dec byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 428fdd: dec byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
L_428fe0: /* 428fe0: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fe4: je 0x428f25 */
  if (zf) goto L_428f25;
L_428fea: /* 428fea: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 428fed: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 428ff0: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428ff4: jne 0x42900a */
  if (!zf) goto L_42900a;
L_428ff6: /* 428ff6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 428ff9: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 428ffc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 428fff: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 429002: mov ebx, dword ptr [eax - 4] */
  ebx = R32((uint32_t)(eax + 0xfffffffcu));
/* 429005: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 429008: jmp 0x42900d */
  goto L_42900d;
L_42900a: /* 42900a: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
L_42900d: /* 42900d: and byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 429011: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429015: jne 0x42902b */
  if (!zf) goto L_42902b;
L_429017: /* 429017: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 429019: cmp al, 0x53 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x53u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42901b: je 0x429027 */
  if (zf) goto L_429027;
L_42901d: /* 42901d: cmp al, 0x43 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x43u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42901f: je 0x429027 */
  if (zf) goto L_429027;
L_429021: /* 429021: or byte ptr [ebp - 0x4e], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 429025: jmp 0x42902b */
  goto L_42902b;
L_429027: /* 429027: mov byte ptr [ebp - 0x4e], 1 */
  W8((uint32_t)(ebp + 0xffffffb2u), 0x1u);
L_42902b: /* 42902b: movzx edi, byte ptr [esi] */
  edi = (uint32_t)(R8((uint32_t)(esi)));
/* 42902e: or edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 429031: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 429034: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429037: je 0x429068 */
  if (zf) goto L_429068;
L_429039: /* 429039: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42903c: je 0x42905d */
  if (zf) goto L_42905d;
L_42903e: /* 42903e: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429041: je 0x42905d */
  if (zf) goto L_42905d;
L_429043: /* 429043: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429046: call 0x4243fa */
  esp -= 4; W32(esp, 0x42904bu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42904b: mov esi, eax */
  esi = eax;
/* 42904d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42904e: call 0x415488 */
  esp -= 4; W32(esp, 0x429053u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 429053: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429054: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429056: jne 0x429043 */
  if (!zf) goto L_429043;
L_429058: /* 429058: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42905b: jmp 0x429068 */
  goto L_429068;
L_42905d: /* 42905d: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429060: call 0x4243fa */
  esp -= 4; W32(esp, 0x429065u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429065: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_429068: /* 429068: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42906c: je 0x429078 */
  if (zf) goto L_429078;
L_42906e: /* 42906e: cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429072: je 0x429294 */
  if (zf) goto L_429294;
L_429078: /* 429078: push 0x6f */
  { uint32_t v = 0x6fu; esp -= 4; W32(esp, v); }
/* 42907a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42907b: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42907d: jg 0x429263 */
  if ((!zf && sf == of)) goto L_429263;
L_429083: /* 429083: je 0x4295d4 */
  if (zf) goto L_4295d4;
L_429089: /* 429089: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42908c: je 0x429240 */
  if (zf) goto L_429240;
L_429092: /* 429092: cmp edi, 0x64 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429095: je 0x4295d4 */
  if (zf) goto L_4295d4;
L_42909b: /* 42909b: jle 0x429289 */
  if ((zf || sf != of)) goto L_429289;
L_4290a1: /* 4290a1: cmp edi, 0x67 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4290a4: jle 0x4290de */
  if ((zf || sf != of)) goto L_4290de;
L_4290a6: /* 4290a6: cmp edi, 0x69 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290a9: je 0x4290c6 */
  if (zf) goto L_4290c6;
L_4290ab: /* 4290ab: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290ae: jne 0x429289 */
  if (!zf) goto L_429289;
L_4290b4: /* 4290b4: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 4290b7: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4290bb: je 0x4297d2 */
  if (zf) goto L_4297d2;
L_4290c1: /* 4290c1: jmp 0x4297f2 */
  goto L_4297f2;
L_4290c6: /* 4290c6: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 4290c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4290c9: /* 4290c9: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4290cc: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290cf: jne 0x4294de */
  if (!zf) goto L_4294de;
L_4290d5: /* 4290d5: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 4290d9: jmp 0x4294e3 */
  goto L_4294e3;
L_4290de: /* 4290de: lea esi, [ebp - 0x1c8] */
  esi = (uint32_t)(ebp + 0xfffffe38u);
/* 4290e4: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4290e7: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290ea: jne 0x4290fa */
  if (!zf) goto L_4290fa;
L_4290ec: /* 4290ec: mov byte ptr [ebp - 0x1c8], bl */
  W8((uint32_t)(ebp + 0xfffffe38u), (ebx & 0xffu));
/* 4290f2: lea esi, [ebp - 0x1c7] */
  esi = (uint32_t)(ebp + 0xfffffe39u);
/* 4290f8: jmp 0x4290ff */
  goto L_4290ff;
L_4290fa: /* 4290fa: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290fd: jne 0x429112 */
  if (!zf) goto L_429112;
L_4290ff: /* 4290ff: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 429102: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 429103: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429106: call 0x4243fa */
  esp -= 4; W32(esp, 0x42910bu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42910b: mov ebx, eax */
  ebx = eax;
/* 42910d: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 429110: jmp 0x429115 */
  goto L_429115;
L_429112: /* 429112: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
L_429115: /* 429115: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429119: je 0x429123 */
  if (zf) goto L_429123;
L_42911b: /* 42911b: cmp edi, 0x15d */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x15du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429121: jle 0x429144 */
  if ((zf || sf != of)) goto L_429144;
L_429123: /* 429123: mov edi, 0x15d */
  edi = 0x15du;
/* 429128: jmp 0x429144 */
  goto L_429144;
L_42912a: /* 42912a: mov eax, edi */
  eax = edi;
/* 42912c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 42912d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42912f: je 0x42914f */
  if (zf) goto L_42914f;
L_429131: /* 429131: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 429134: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 429136: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 429137: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42913a: call 0x4243fa */
  esp -= 4; W32(esp, 0x42913fu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42913f: mov ebx, eax */
  ebx = eax;
/* 429141: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_429144: /* 429144: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429145: call 0x40152b */
  esp -= 4; W32(esp, 0x42914au); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42914a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42914b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42914d: jne 0x42912a */
  if (!zf) goto L_42912a;
L_42914f: /* 42914f: cmp byte ptr [0x44a9ac], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44a9acu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429155: jne 0x429197 */
  if (!zf) goto L_429197;
L_429157: /* 429157: mov eax, edi */
  eax = edi;
/* 429159: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 42915a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42915c: je 0x429197 */
  if (zf) goto L_429197;
L_42915e: /* 42915e: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429161: call 0x4243fa */
  esp -= 4; W32(esp, 0x429166u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429166: mov ebx, eax */
  ebx = eax;
/* 429168: mov al, byte ptr [0x44a9ac] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0x44a9acu))) & 0xffu);
/* 42916d: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 42916f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 429170: jmp 0x429189 */
  goto L_429189;
L_429172: /* 429172: mov eax, edi */
  eax = edi;
/* 429174: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 429175: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429177: je 0x429197 */
  if (zf) goto L_429197;
L_429179: /* 429179: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42917c: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 42917e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42917f: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429182: call 0x4243fa */
  esp -= 4; W32(esp, 0x429187u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429187: mov ebx, eax */
  ebx = eax;
L_429189: /* 429189: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42918a: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42918d: call 0x40152b */
  esp -= 4; W32(esp, 0x429192u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 429192: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429193: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429195: jne 0x429172 */
  if (!zf) goto L_429172;
L_429197: /* 429197: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42919b: je 0x4291fe */
  if (zf) goto L_4291fe;
L_42919d: /* 42919d: cmp ebx, 0x65 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4291a0: je 0x4291a7 */
  if (zf) goto L_4291a7;
L_4291a2: /* 4291a2: cmp ebx, 0x45 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4291a5: jne 0x4291fe */
  if (!zf) goto L_4291fe;
L_4291a7: /* 4291a7: mov eax, edi */
  eax = edi;
/* 4291a9: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 4291aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4291ac: je 0x4291fe */
  if (zf) goto L_4291fe;
L_4291ae: /* 4291ae: mov byte ptr [esi], 0x65 */
  W8((uint32_t)(esi), 0x65u);
/* 4291b1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4291b2: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4291b5: call 0x4243fa */
  esp -= 4; W32(esp, 0x4291bau); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4291ba: mov ebx, eax */
  ebx = eax;
/* 4291bc: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 4291bf: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4291c2: jne 0x4291c9 */
  if (!zf) goto L_4291c9;
L_4291c4: /* 4291c4: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 4291c6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4291c7: jmp 0x4291ce */
  goto L_4291ce;
L_4291c9: /* 4291c9: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4291cc: jne 0x4291f3 */
  if (!zf) goto L_4291f3;
L_4291ce: /* 4291ce: mov eax, edi */
  eax = edi;
/* 4291d0: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 4291d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4291d3: jne 0x4291e6 */
  if (!zf) goto L_4291e6;
L_4291d5: /* 4291d5: xor edi, edi */
  edi = 0;
/* 4291d7: jmp 0x4291f3 */
  goto L_4291f3;
L_4291d9: /* 4291d9: mov eax, edi */
  eax = edi;
/* 4291db: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 4291dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4291de: je 0x4291fe */
  if (zf) goto L_4291fe;
L_4291e0: /* 4291e0: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 4291e3: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 4291e5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4291e6: /* 4291e6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4291e9: call 0x4243fa */
  esp -= 4; W32(esp, 0x4291eeu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4291ee: mov ebx, eax */
  ebx = eax;
/* 4291f0: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_4291f3: /* 4291f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4291f4: call 0x40152b */
  esp -= 4; W32(esp, 0x4291f9u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 4291f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4291fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4291fc: jne 0x4291d9 */
  if (!zf) goto L_4291d9;
L_4291fe: /* 4291fe: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429201: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429202: call 0x428e5e */
  esp -= 4; W32(esp, 0x429207u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429207: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429208: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42920c: je 0x42931f */
  if (zf) goto L_42931f;
L_429212: /* 429212: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429216: jne 0x4297f2 */
  if (!zf) goto L_4297f2;
L_42921c: /* 42921c: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42921f: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 429222: lea eax, [ebp - 0x1c8] */
  eax = (uint32_t)(ebp + 0xfffffe38u);
/* 429228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429229: push dword ptr [ebp - 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff9cu)); esp -= 4; W32(esp, v); }
/* 42922c: movsx eax, byte ptr [ebp - 0x4f] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
/* 429230: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 429231: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429232: call dword ptr [0x44afa8] */
  { uint32_t t = R32((uint32_t)(0x44afa8u)); esp -= 4; W32(esp, 0x429238u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 429238: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42923b: jmp 0x4297f2 */
  goto L_4297f2;
L_429240: /* 429240: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429244: jne 0x429250 */
  if (!zf) goto L_429250;
L_429246: /* 429246: mov dword ptr [ebp - 0x44], 1 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x1u);
/* 42924d: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
L_429250: /* 429250: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 429254: jle 0x429403 */
  if ((zf || sf != of)) goto L_429403;
L_42925a: /* 42925a: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
/* 42925e: jmp 0x429403 */
  goto L_429403;
L_429263: /* 429263: mov eax, edi */
  eax = edi;
/* 429265: sub eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429268: je 0x4295d0 */
  if (zf) goto L_4295d0;
L_42926e: /* 42926e: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429271: je 0x429250 */
  if (zf) goto L_429250;
L_429273: /* 429273: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 429274: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 429275: je 0x4295d4 */
  if (zf) goto L_4295d4;
L_42927b: /* 42927b: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42927e: je 0x4290c9 */
  if (zf) goto L_4290c9;
L_429284: /* 429284: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429287: je 0x4292b9 */
  if (zf) goto L_4292b9;
L_429289: /* 429289: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42928c: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 42928f: cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429292: je 0x4292a1 */
  if (zf) goto L_4292a1;
L_429294: /* 429294: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
L_429297: /* 429297: call 0x428e5e */
  esp -= 4; W32(esp, 0x42929cu); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 42929c: jmp 0x429851 */
  goto L_429851;
L_4292a1: /* 4292a1: dec byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 4292a4: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4292a8: jne 0x4297f2 */
  if (!zf) goto L_4297f2;
L_4292ae: /* 4292ae: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 4292b1: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 4292b4: jmp 0x4297f2 */
  goto L_4297f2;
L_4292b9: /* 4292b9: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 4292bd: jle 0x4292c3 */
  if ((zf || sf != of)) goto L_4292c3;
L_4292bf: /* 4292bf: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
L_4292c3: /* 4292c3: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4292c6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4292c7: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 4292ca: mov dword ptr [ebp - 0x1cc], edi */
  W32((uint32_t)(ebp + 0xfffffe34u), edi);
/* 4292d0: cmp byte ptr [edi], 0x5e */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x5eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4292d3: jne 0x4292e0 */
  if (!zf) goto L_4292e0;
L_4292d5: /* 4292d5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4292d6: mov dword ptr [ebp - 0x1cc], edi */
  W32((uint32_t)(ebp + 0xfffffe34u), edi);
/* 4292dc: or byte ptr [ebp - 0x49], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
L_4292e0: /* 4292e0: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 4292e3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4292e5: jne 0x42935c */
  if (!zf) goto L_42935c;
L_4292e7: /* 4292e7: and dword ptr [ebp - 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4292ea: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4292ec: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4292ed: call 0x4014ee */
  esp -= 4; W32(esp, 0x4292f2u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 4292f2: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 4292f5: mov ebx, esp */
  ebx = esp;
/* 4292f7: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 4292fa: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4292fe: jmp 0x42935c */
  goto L_42935c;
L_42931f: /* 42931f: cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429323: jne 0x42932e */
  if (!zf) goto L_42932e;
L_429325: /* 429325: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 429328: call 0x401156 */
  esp -= 4; W32(esp, 0x42932du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42932d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42932e: /* 42932e: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 429331: lea esp, [ebp - 0x1e4] */
  esp = (uint32_t)(ebp + 0xfffffe1cu);
/* 429337: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42933a: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42933d: call 0x4013ab */
  esp -= 4; W32(esp, 0x429342u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 429342: call 0x40105a */
  esp -= 4; W32(esp, 0x429347u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 429347: ret  */
  esp += 4; SPILL(); return;
L_42935c: /* 42935c: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42935e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 429360: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429361: call 0x4010fd */
  esp -= 4; W32(esp, 0x429366u); SPILL(); hle_memset(); RELOAD();
/* 429366: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 429369: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42936d: jne 0x4293e3 */
  if (!zf) goto L_4293e3;
L_42936f: /* 42936f: cmp byte ptr [edi], 0x5d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429372: jne 0x4293e3 */
  if (!zf) goto L_4293e3;
L_429374: /* 429374: mov dl, 0x5d */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x5du) & 0xffu);
/* 429376: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 429377: mov byte ptr [ebx + 0xb], 0x20 */
  W8((uint32_t)(ebx + 0xbu), 0x20u);
/* 42937b: jmp 0x4293e6 */
  goto L_4293e6;
L_42937d: /* 42937d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42937e: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429380: jne 0x4293cd */
  if (!zf) goto L_4293cd;
L_429382: /* 429382: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429384: je 0x4293cd */
  if (zf) goto L_4293cd;
L_429386: /* 429386: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 429388: cmp cl, 0x5d */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42938b: je 0x4293cd */
  if (zf) goto L_4293cd;
L_42938d: /* 42938d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42938e: cmp dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 429390: jae 0x429396 */
  if (!cf) goto L_429396;
L_429392: /* 429392: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 429394: jmp 0x42939a */
  goto L_42939a;
L_429396: /* 429396: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 429398: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
L_42939a: /* 42939a: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42939c: ja 0x4293c9 */
  if ((!cf && !zf)) goto L_4293c9;
L_42939e: /* 42939e: movzx esi, dl */
  esi = (uint32_t)((edx & 0xffu));
/* 4293a1: sub al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4293a3: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4293a5: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 4293a8: mov dword ptr [ebp - 0x1d0], eax */
  W32((uint32_t)(ebp + 0xfffffe30u), eax);
L_4293ae: /* 4293ae: mov eax, esi */
  eax = esi;
/* 4293b0: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4293b3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4293b5: mov ecx, esi */
  ecx = esi;
/* 4293b7: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 4293ba: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 4293bc: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 4293be: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 4293c0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4293c1: dec dword ptr [ebp - 0x1d0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe30u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffe30u), r);
  }
/* 4293c7: jne 0x4293ae */
  if (!zf) goto L_4293ae;
L_4293c9: /* 4293c9: xor dl, dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 4293cb: jmp 0x4293e6 */
  goto L_4293e6;
L_4293cd: /* 4293cd: mov byte ptr [ebp - 0x39], al */
  W8((uint32_t)(ebp + 0xffffffc7u), (eax & 0xffu));
/* 4293d0: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 4293d3: mov eax, ecx */
  eax = ecx;
/* 4293d5: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4293d8: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4293da: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 4293dd: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 4293df: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 4293e1: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_4293e3: /* 4293e3: mov dl, byte ptr [ebp - 0x39] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffc7u))) & 0xffu);
L_4293e6: /* 4293e6: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 4293e8: cmp al, 0x5d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4293ea: jne 0x42937d */
  if (!zf) goto L_42937d;
L_4293ec: /* 4293ec: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4293ee: je 0x42931f */
  if (zf) goto L_42931f;
L_4293f4: /* 4293f4: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 4293f7: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4293fb: jne 0x429400 */
  if (!zf) goto L_429400;
L_4293fd: /* 4293fd: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
L_429400: /* 429400: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_429403: /* 429403: mov esi, ebx */
  esi = ebx;
/* 429405: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429408: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42940b: call 0x428e5e */
  esp -= 4; W32(esp, 0x429410u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429410: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_429411: /* 429411: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429415: je 0x429425 */
  if (zf) goto L_429425;
L_429417: /* 429417: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42941a: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42941d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42941f: je 0x429597 */
  if (zf) goto L_429597;
L_429425: /* 429425: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429428: call 0x4243fa */
  esp -= 4; W32(esp, 0x42942du); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42942d: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 429430: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429433: je 0x429479 */
  if (zf) goto L_429479;
L_429435: /* 429435: cmp edi, 0x73 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x73u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429438: jne 0x429449 */
  if (!zf) goto L_429449;
L_42943a: /* 42943a: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42943d: jl 0x429444 */
  if ((sf != of)) goto L_429444;
L_42943f: /* 42943f: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429442: jle 0x429449 */
  if ((zf || sf != of)) goto L_429449;
L_429444: /* 429444: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429447: jne 0x429479 */
  if (!zf) goto L_429479;
L_429449: /* 429449: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42944c: jne 0x42958d */
  if (!zf) goto L_42958d;
L_429452: /* 429452: mov ecx, eax */
  ecx = eax;
/* 429454: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 429457: xor edx, edx */
  edx = 0;
  cf = 0;
/* 429459: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  edx = r;
  }
/* 42945a: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 42945c: mov ecx, eax */
  ecx = eax;
/* 42945e: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 429461: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 429464: movsx ecx, byte ptr [ecx + edi] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + edi)));
/* 429468: movsx edi, byte ptr [ebp - 0x49] */
  edi = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb7u)));
/* 42946c: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42946e: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429470: je 0x42958d */
  if (zf) goto L_42958d;
L_429476: /* 429476: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_429479: /* 429479: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42947d: jne 0x429587 */
  if (!zf) goto L_429587;
L_429483: /* 429483: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429487: je 0x42957c */
  if (zf) goto L_42957c;
L_42948d: /* 42948d: mov byte ptr [ebp - 0x1d4], al */
  W8((uint32_t)(ebp + 0xfffffe2cu), (eax & 0xffu));
/* 429493: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 429496: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 42949c: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4294a1: je 0x4294b1 */
  if (zf) goto L_4294b1;
L_4294a3: /* 4294a3: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4294a6: call 0x4243fa */
  esp -= 4; W32(esp, 0x4294abu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4294ab: mov byte ptr [ebp - 0x1d3], al */
  W8((uint32_t)(ebp + 0xfffffe2du), (eax & 0xffu));
L_4294b1: /* 4294b1: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 4294b7: lea eax, [ebp - 0x1d4] */
  eax = (uint32_t)(ebp + 0xfffffe2cu);
/* 4294bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4294be: lea eax, [ebp - 0x1d8] */
  eax = (uint32_t)(ebp + 0xfffffe28u);
/* 4294c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4294c5: call 0x402197 */
  esp -= 4; W32(esp, 0x4294cau); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 4294ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4294cd: mov ax, word ptr [ebp - 0x1d8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffe28u))) & 0xffffu);
/* 4294d4: mov word ptr [ebx], ax */
  W16((uint32_t)(ebx), (eax & 0xffffu));
/* 4294d7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4294d8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4294d9: jmp 0x42957f */
  goto L_42957f;
L_4294de: /* 4294de: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4294e1: jne 0x429501 */
  if (!zf) goto L_429501;
L_4294e3: /* 4294e3: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 4294e6: jne 0x4294f4 */
  if (!zf) goto L_4294f4;
L_4294e8: /* 4294e8: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4294ec: je 0x4294f4 */
  if (zf) goto L_4294f4;
L_4294ee: /* 4294ee: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 4294f2: jmp 0x429501 */
  goto L_429501;
L_4294f4: /* 4294f4: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4294f7: call 0x4243fa */
  esp -= 4; W32(esp, 0x4294fcu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4294fc: mov ebx, eax */
  ebx = eax;
/* 4294fe: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_429501: /* 429501: cmp ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429504: jne 0x429605 */
  if (!zf) goto L_429605;
L_42950a: /* 42950a: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42950d: call 0x4243fa */
  esp -= 4; W32(esp, 0x429512u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429512: mov ebx, eax */
  ebx = eax;
/* 429514: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 429517: cmp bl, 0x78 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42951a: je 0x429554 */
  if (zf) goto L_429554;
L_42951c: /* 42951c: cmp bl, 0x58 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42951f: je 0x429554 */
  if (zf) goto L_429554;
L_429521: /* 429521: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 429528: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42952b: je 0x429542 */
  if (zf) goto L_429542;
L_42952d: /* 42952d: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429531: je 0x42953b */
  if (zf) goto L_42953b;
L_429533: /* 429533: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 429536: jne 0x42953b */
  if (!zf) goto L_42953b;
L_429538: /* 429538: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42953b: /* 42953b: mov edi, esi */
  edi = esi;
/* 42953d: jmp 0x429605 */
  goto L_429605;
L_429542: /* 429542: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429545: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429546: call 0x428e5e */
  esp -= 4; W32(esp, 0x42954bu); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 42954b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42954c: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 42954e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42954f: jmp 0x429602 */
  goto L_429602;
L_429554: /* 429554: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429557: call 0x4243fa */
  esp -= 4; W32(esp, 0x42955cu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42955c: mov ebx, eax */
  ebx = eax;
/* 42955e: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 429561: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429565: je 0x429574 */
  if (zf) goto L_429574;
L_429567: /* 429567: sub dword ptr [ebp - 0x48], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42956b: cmp dword ptr [ebp - 0x48], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42956f: jge 0x429574 */
  if ((sf == of)) goto L_429574;
L_429571: /* 429571: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_429574: /* 429574: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 429576: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 429577: jmp 0x429605 */
  goto L_429605;
L_42957c: /* 42957c: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 42957e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_42957f: /* 42957f: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 429582: jmp 0x429411 */
  goto L_429411;
L_429587: /* 429587: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 429588: jmp 0x429411 */
  goto L_429411;
L_42958d: /* 42958d: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429591: call 0x428e5e */
  esp -= 4; W32(esp, 0x429596u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429596: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_429597: /* 429597: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429599: je 0x42931f */
  if (zf) goto L_42931f;
L_42959f: /* 42959f: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4295a3: jne 0x4297f2 */
  if (!zf) goto L_4297f2;
L_4295a9: /* 4295a9: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 4295ac: cmp dword ptr [ebp - 0x68], 0x63 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4295b0: je 0x4297f2 */
  if (zf) goto L_4297f2;
L_4295b6: /* 4295b6: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 4295b9: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4295bd: je 0x4295c8 */
  if (zf) goto L_4295c8;
L_4295bf: /* 4295bf: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
/* 4295c3: jmp 0x4297f2 */
  goto L_4297f2;
L_4295c8: /* 4295c8: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 4295cb: jmp 0x4297f2 */
  goto L_4297f2;
L_4295d0: /* 4295d0: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
L_4295d4: /* 4295d4: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4295d7: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4295da: jne 0x4295e2 */
  if (!zf) goto L_4295e2;
L_4295dc: /* 4295dc: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 4295e0: jmp 0x4295e7 */
  goto L_4295e7;
L_4295e2: /* 4295e2: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4295e5: jne 0x429605 */
  if (!zf) goto L_429605;
L_4295e7: /* 4295e7: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 4295ea: jne 0x4295f8 */
  if (!zf) goto L_4295f8;
L_4295ec: /* 4295ec: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4295f0: je 0x4295f8 */
  if (zf) goto L_4295f8;
L_4295f2: /* 4295f2: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 4295f6: jmp 0x429605 */
  goto L_429605;
L_4295f8: /* 4295f8: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4295fb: call 0x4243fa */
  esp -= 4; W32(esp, 0x429600u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429600: mov ebx, eax */
  ebx = eax;
L_429602: /* 429602: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_429605: /* 429605: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429609: je 0x429700 */
  if (zf) goto L_429700;
L_42960f: /* 42960f: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429613: jne 0x4296de */
  if (!zf) goto L_4296de;
L_429619: /* 429619: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42961c: je 0x429663 */
  if (zf) goto L_429663;
L_42961e: /* 42961e: cmp edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429621: je 0x429663 */
  if (zf) goto L_429663;
L_429623: /* 429623: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429624: call 0x40152b */
  esp -= 4; W32(esp, 0x429629u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 429629: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42962a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42962c: je 0x429694 */
  if (zf) goto L_429694;
L_42962e: /* 42962e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429630: jne 0x42964c */
  if (!zf) goto L_42964c;
L_429632: /* 429632: cmp ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429635: jge 0x429694 */
  if ((sf == of)) goto L_429694;
L_429637: /* 429637: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42963a: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42963d: shld ecx, eax, 3 */
  { uint32_t a = ecx, b = eax, c = (0x3u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 429641: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 429644: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 429647: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42964a: jmp 0x429697 */
  goto L_429697;
L_42964c: /* 42964c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42964e: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 429650: push dword ptr [ebp - 0x58] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa8u)); esp -= 4; W32(esp, v); }
/* 429653: push dword ptr [ebp - 0x5c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa4u)); esp -= 4; W32(esp, v); }
/* 429656: call 0x40518c */
  esp -= 4; W32(esp, 0x42965bu); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 42965b: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42965e: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 429661: jmp 0x429697 */
  goto L_429697;
L_429663: /* 429663: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429664: call 0x415449 */
  esp -= 4; W32(esp, 0x429669u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 429669: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42966a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 42966c: je 0x429694 */
  if (zf) goto L_429694;
L_42966e: /* 42966e: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 429671: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 429674: shld ecx, eax, 4 */
  { uint32_t a = ecx, b = eax, c = (0x4u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 429678: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42967b: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42967e: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 429681: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429682: call 0x40152b */
  esp -= 4; W32(esp, 0x429687u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 429687: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429688: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42968a: jne 0x429697 */
  if (!zf) goto L_429697;
L_42968c: /* 42968c: and ebx, 0xffffffdf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 42968f: sub ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 429692: jmp 0x429697 */
  goto L_429697;
L_429694: /* 429694: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_429697: /* 429697: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42969b: jne 0x4296c7 */
  if (!zf) goto L_4296c7;
L_42969d: /* 42969d: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 4296a0: lea eax, [ebx - 0x30] */
  eax = (uint32_t)(ebx + 0xffffffd0u);
/* 4296a3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4296a4: add dword ptr [ebp - 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 4296a7: adc dword ptr [ebp - 0x58], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 4296aa: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4296ae: je 0x4296bb */
  if (zf) goto L_4296bb;
L_4296b0: /* 4296b0: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 4296b3: jne 0x4296bb */
  if (!zf) goto L_4296bb;
L_4296b5: /* 4296b5: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 4296b9: jmp 0x4296d1 */
  goto L_4296d1;
L_4296bb: /* 4296bb: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4296be: call 0x4243fa */
  esp -= 4; W32(esp, 0x4296c3u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4296c3: mov ebx, eax */
  ebx = eax;
/* 4296c5: jmp 0x4296d1 */
  goto L_4296d1;
L_4296c7: /* 4296c7: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4296ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4296cb: call 0x428e5e */
  esp -= 4; W32(esp, 0x4296d0u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 4296d0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4296d1: /* 4296d1: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4296d5: je 0x429619 */
  if (zf) goto L_429619;
L_4296db: /* 4296db: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_4296de: /* 4296de: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4296e2: je 0x4297b0 */
  if (zf) goto L_4297b0;
L_4296e8: /* 4296e8: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 4296eb: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4296ed: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 4296f0: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 4296f3: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 4296f5: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 4296f8: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 4296fb: jmp 0x4297b0 */
  goto L_4297b0;
L_429700: /* 429700: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429704: jne 0x4297a7 */
  if (!zf) goto L_4297a7;
L_42970a: /* 42970a: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42970d: je 0x42973b */
  if (zf) goto L_42973b;
L_42970f: /* 42970f: cmp edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429712: je 0x42973b */
  if (zf) goto L_42973b;
L_429714: /* 429714: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429715: call 0x40152b */
  esp -= 4; W32(esp, 0x42971au); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42971a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42971b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42971d: je 0x42975d */
  if (zf) goto L_42975d;
L_42971f: /* 42971f: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429721: jne 0x42972e */
  if (!zf) goto L_42972e;
L_429723: /* 429723: cmp ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429726: jge 0x42975d */
  if ((sf == of)) goto L_42975d;
L_429728: /* 429728: shl dword ptr [ebp - 0x38], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42972c: jmp 0x429760 */
  goto L_429760;
L_42972e: /* 42972e: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 429731: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 429734: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 429736: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 429739: jmp 0x429760 */
  goto L_429760;
L_42973b: /* 42973b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42973c: call 0x415449 */
  esp -= 4; W32(esp, 0x429741u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 429741: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429742: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429744: je 0x42975d */
  if (zf) goto L_42975d;
L_429746: /* 429746: shl dword ptr [ebp - 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42974a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42974b: call 0x40152b */
  esp -= 4; W32(esp, 0x429750u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 429750: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429751: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429753: jne 0x429760 */
  if (!zf) goto L_429760;
L_429755: /* 429755: and ebx, 0xffffffdf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 429758: sub ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 42975b: jmp 0x429760 */
  goto L_429760;
L_42975d: /* 42975d: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_429760: /* 429760: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429764: jne 0x429790 */
  if (!zf) goto L_429790;
L_429766: /* 429766: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 429769: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42976c: lea eax, [eax + ebx - 0x30] */
  eax = (uint32_t)(eax + ebx + 0xffffffd0u);
/* 429770: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 429773: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429777: je 0x429784 */
  if (zf) goto L_429784;
L_429779: /* 429779: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42977c: jne 0x429784 */
  if (!zf) goto L_429784;
L_42977e: /* 42977e: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 429782: jmp 0x42979a */
  goto L_42979a;
L_429784: /* 429784: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429787: call 0x4243fa */
  esp -= 4; W32(esp, 0x42978cu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42978c: mov ebx, eax */
  ebx = eax;
/* 42978e: jmp 0x42979a */
  goto L_42979a;
L_429790: /* 429790: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429793: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429794: call 0x428e5e */
  esp -= 4; W32(esp, 0x429799u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429799: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42979a: /* 42979a: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42979e: je 0x42970a */
  if (zf) goto L_42970a;
L_4297a4: /* 4297a4: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_4297a7: /* 4297a7: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4297ab: je 0x4297b0 */
  if (zf) goto L_4297b0;
L_4297ad: /* 4297ad: neg dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
L_4297b0: /* 4297b0: cmp edi, 0x46 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4297b3: jne 0x4297b9 */
  if (!zf) goto L_4297b9;
L_4297b5: /* 4297b5: and dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
L_4297b9: /* 4297b9: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4297bd: je 0x42931f */
  if (zf) goto L_42931f;
L_4297c3: /* 4297c3: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4297c7: jne 0x4297f2 */
  if (!zf) goto L_4297f2;
L_4297c9: /* 4297c9: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 4297cc: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 4297cf: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
L_4297d2: /* 4297d2: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4297d6: je 0x4297e5 */
  if (zf) goto L_4297e5;
L_4297d8: /* 4297d8: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 4297db: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 4297dd: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 4297e0: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 4297e3: jmp 0x4297f2 */
  goto L_4297f2;
L_4297e5: /* 4297e5: cmp byte ptr [ebp - 0x4f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4297e9: je 0x4297ef */
  if (zf) goto L_4297ef;
L_4297eb: /* 4297eb: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 4297ed: jmp 0x4297f2 */
  goto L_4297f2;
L_4297ef: /* 4297ef: mov word ptr [ebx], ax */
  W16((uint32_t)(ebx), (eax & 0xffffu));
L_4297f2: /* 4297f2: inc byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 4297f5: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 4297f8: jmp 0x428e98 */
  goto L_428e98;
L_4297fd: /* 4297fd: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429800: call 0x4243fa */
  esp -= 4; W32(esp, 0x429805u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429805: mov ebx, eax */
  ebx = eax;
/* 429807: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42980a: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 42980d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42980e: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 429811: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429813: je 0x42981b */
  if (zf) goto L_42981b;
L_429815: /* 429815: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429816: jmp 0x429297 */
  goto L_429297;
L_42981b: /* 42981b: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 42981e: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 429824: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429829: je 0x428e98 */
  if (zf) goto L_428e98;
L_42982f: /* 42982f: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429832: call 0x4243fa */
  esp -= 4; W32(esp, 0x429837u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429837: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 42983a: movzx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(R8((uint32_t)(ecx)));
/* 42983d: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 429840: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429842: je 0x429857 */
  if (zf) goto L_429857;
L_429844: /* 429844: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429845: call 0x428e5e */
  esp -= 4; W32(esp, 0x42984au); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 42984a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42984b: call 0x428e5e */
  esp -= 4; W32(esp, 0x429850u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429850: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_429851: /* 429851: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429852: jmp 0x42931f */
  goto L_42931f;
L_429857: /* 429857: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42985a: jmp 0x428e98 */
  goto L_428e98;
}

void f_429300(void) {
  LOAD_REGS();
L_429300: /* 429300: xor eax, eax */
  eax = 0;
/* 429302: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 429303: ret  */
  esp += 4; SPILL(); return;
}

void f_429304(void) {
  LOAD_REGS();
  goto L_429304;
L_428e98: /* 428e98: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 428e9b: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 428e9d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428e9f: je 0x42931f */
  if (zf) goto L_42931f;
L_428ea5: /* 428ea5: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 428ea8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428ea9: call 0x415488 */
  esp -= 4; W32(esp, 0x428eaeu); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 428eae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428eaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428eb1: je 0x428ee8 */
  if (zf) goto L_428ee8;
L_428eb3: /* 428eb3: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
L_428eb6: /* 428eb6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 428eb9: call 0x4243fa */
  esp -= 4; W32(esp, 0x428ebeu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 428ebe: mov esi, eax */
  esi = eax;
/* 428ec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428ec1: call 0x415488 */
  esp -= 4; W32(esp, 0x428ec6u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 428ec6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428ec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428ec9: jne 0x428eb6 */
  if (!zf) goto L_428eb6;
L_428ecb: /* 428ecb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428ecc: call 0x428e5e */
  esp -= 4; W32(esp, 0x428ed1u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 428ed1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_428ed2: /* 428ed2: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 428ed5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 428ed8: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 428edb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428edc: call 0x415488 */
  esp -= 4; W32(esp, 0x428ee1u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 428ee1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428ee2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428ee4: jne 0x428ed2 */
  if (!zf) goto L_428ed2;
L_428ee6: /* 428ee6: jmp 0x428e98 */
  goto L_428e98;
L_428ee8: /* 428ee8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 428eeb: cmp byte ptr [esi], 0x25 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x25u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428eee: jne 0x4297fd */
  if (!zf) goto L_4297fd;
L_428ef4: /* 428ef4: xor edi, edi */
  edi = 0;
/* 428ef6: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 428ef9: and byte ptr [ebp - 0x39], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc7u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffc7u), r);
  }
/* 428efd: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 428f00: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* 428f03: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 428f06: and byte ptr [ebp - 0x49], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
/* 428f0a: and byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb6u), r);
  }
/* 428f0e: and byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 428f12: and byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 428f16: and byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
/* 428f1a: and byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 428f1e: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
/* 428f22: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
L_428f25: /* 428f25: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 428f26: movzx ebx, byte ptr [esi] */
  ebx = (uint32_t)(R8((uint32_t)(esi)));
/* 428f29: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 428f2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428f2d: call 0x40152b */
  esp -= 4; W32(esp, 0x428f32u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 428f32: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428f33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428f35: je 0x428f46 */
  if (zf) goto L_428f46;
L_428f37: /* 428f37: inc dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffbcu), r);
  }
/* 428f3a: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 428f3d: lea edi, [ebx + eax*2 - 0x30] */
  edi = (uint32_t)(ebx + eax*2 + 0xffffffd0u);
/* 428f41: jmp 0x428fe0 */
  goto L_428fe0;
L_428f46: /* 428f46: cmp ebx, 0x4e */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 428f49: jg 0x428fbe */
  if ((!zf && sf == of)) goto L_428fbe;
L_428f4b: /* 428f4b: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428f51: /* 428f51: cmp ebx, 0x2a */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428f54: je 0x428fb9 */
  if (zf) goto L_428fb9;
L_428f56: /* 428f56: cmp ebx, 0x46 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428f59: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428f5f: /* 428f5f: cmp ebx, 0x49 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x49u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428f62: je 0x428f6e */
  if (zf) goto L_428f6e;
L_428f64: /* 428f64: cmp ebx, 0x4c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428f67: jne 0x428fcd */
  if (!zf) goto L_428fcd;
L_428f69: /* 428f69: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 428f6c: jmp 0x428fe0 */
  goto L_428fe0;
L_428f6e: /* 428f6e: mov cl, byte ptr [esi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 428f71: cmp cl, 0x36 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x36u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428f74: jne 0x428f8d */
  if (!zf) goto L_428f8d;
L_428f76: /* 428f76: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 428f79: cmp byte ptr [eax], 0x34 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x34u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428f7c: jne 0x428f8d */
  if (!zf) goto L_428f8d;
L_428f7e: /* 428f7e: mov esi, eax */
  esi = eax;
/* 428f80: inc dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffacu), r);
  }
/* 428f83: and dword ptr [ebp - 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 428f87: and dword ptr [ebp - 0x58], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 428f8b: jmp 0x428fe0 */
  goto L_428fe0;
L_428f8d: /* 428f8d: cmp cl, 0x33 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x33u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428f90: jne 0x428f9e */
  if (!zf) goto L_428f9e;
L_428f92: /* 428f92: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 428f95: cmp byte ptr [eax], 0x32 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x32u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428f98: jne 0x428f9e */
  if (!zf) goto L_428f9e;
L_428f9a: /* 428f9a: mov esi, eax */
  esi = eax;
/* 428f9c: jmp 0x428fe0 */
  goto L_428fe0;
L_428f9e: /* 428f9e: cmp cl, 0x64 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x64u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fa1: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428fa3: /* 428fa3: cmp cl, 0x69 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x69u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fa6: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428fa8: /* 428fa8: cmp cl, 0x6f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fab: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428fad: /* 428fad: cmp cl, 0x78 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fb0: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428fb2: /* 428fb2: cmp cl, 0x58 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fb5: jne 0x428fcd */
  if (!zf) goto L_428fcd;
L_428fb7: /* 428fb7: jmp 0x428fe0 */
  goto L_428fe0;
L_428fb9: /* 428fb9: inc byte ptr [ebp - 0x4b] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 428fbc: jmp 0x428fe0 */
  goto L_428fe0;
L_428fbe: /* 428fbe: cmp ebx, 0x68 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428fc1: je 0x428fda */
  if (zf) goto L_428fda;
L_428fc3: /* 428fc3: cmp ebx, 0x6c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428fc6: je 0x428fd2 */
  if (zf) goto L_428fd2;
L_428fc8: /* 428fc8: cmp ebx, 0x77 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428fcb: je 0x428fd5 */
  if (zf) goto L_428fd5;
L_428fcd: /* 428fcd: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 428fd0: jmp 0x428fe0 */
  goto L_428fe0;
L_428fd2: /* 428fd2: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
L_428fd5: /* 428fd5: inc byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 428fd8: jmp 0x428fe0 */
  goto L_428fe0;
L_428fda: /* 428fda: dec byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 428fdd: dec byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
L_428fe0: /* 428fe0: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fe4: je 0x428f25 */
  if (zf) goto L_428f25;
L_428fea: /* 428fea: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 428fed: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 428ff0: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428ff4: jne 0x42900a */
  if (!zf) goto L_42900a;
L_428ff6: /* 428ff6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 428ff9: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 428ffc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 428fff: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 429002: mov ebx, dword ptr [eax - 4] */
  ebx = R32((uint32_t)(eax + 0xfffffffcu));
/* 429005: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 429008: jmp 0x42900d */
  goto L_42900d;
L_42900a: /* 42900a: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
L_42900d: /* 42900d: and byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 429011: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429015: jne 0x42902b */
  if (!zf) goto L_42902b;
L_429017: /* 429017: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 429019: cmp al, 0x53 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x53u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42901b: je 0x429027 */
  if (zf) goto L_429027;
L_42901d: /* 42901d: cmp al, 0x43 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x43u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42901f: je 0x429027 */
  if (zf) goto L_429027;
L_429021: /* 429021: or byte ptr [ebp - 0x4e], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 429025: jmp 0x42902b */
  goto L_42902b;
L_429027: /* 429027: mov byte ptr [ebp - 0x4e], 1 */
  W8((uint32_t)(ebp + 0xffffffb2u), 0x1u);
L_42902b: /* 42902b: movzx edi, byte ptr [esi] */
  edi = (uint32_t)(R8((uint32_t)(esi)));
/* 42902e: or edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 429031: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 429034: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429037: je 0x429068 */
  if (zf) goto L_429068;
L_429039: /* 429039: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42903c: je 0x42905d */
  if (zf) goto L_42905d;
L_42903e: /* 42903e: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429041: je 0x42905d */
  if (zf) goto L_42905d;
L_429043: /* 429043: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429046: call 0x4243fa */
  esp -= 4; W32(esp, 0x42904bu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42904b: mov esi, eax */
  esi = eax;
/* 42904d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42904e: call 0x415488 */
  esp -= 4; W32(esp, 0x429053u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 429053: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429054: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429056: jne 0x429043 */
  if (!zf) goto L_429043;
L_429058: /* 429058: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42905b: jmp 0x429068 */
  goto L_429068;
L_42905d: /* 42905d: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429060: call 0x4243fa */
  esp -= 4; W32(esp, 0x429065u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429065: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_429068: /* 429068: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42906c: je 0x429078 */
  if (zf) goto L_429078;
L_42906e: /* 42906e: cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429072: je 0x429294 */
  if (zf) goto L_429294;
L_429078: /* 429078: push 0x6f */
  { uint32_t v = 0x6fu; esp -= 4; W32(esp, v); }
/* 42907a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42907b: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42907d: jg 0x429263 */
  if ((!zf && sf == of)) goto L_429263;
L_429083: /* 429083: je 0x4295d4 */
  if (zf) goto L_4295d4;
L_429089: /* 429089: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42908c: je 0x429240 */
  if (zf) goto L_429240;
L_429092: /* 429092: cmp edi, 0x64 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429095: je 0x4295d4 */
  if (zf) goto L_4295d4;
L_42909b: /* 42909b: jle 0x429289 */
  if ((zf || sf != of)) goto L_429289;
L_4290a1: /* 4290a1: cmp edi, 0x67 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4290a4: jle 0x4290de */
  if ((zf || sf != of)) goto L_4290de;
L_4290a6: /* 4290a6: cmp edi, 0x69 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290a9: je 0x4290c6 */
  if (zf) goto L_4290c6;
L_4290ab: /* 4290ab: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290ae: jne 0x429289 */
  if (!zf) goto L_429289;
L_4290b4: /* 4290b4: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 4290b7: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4290bb: je 0x4297d2 */
  if (zf) goto L_4297d2;
L_4290c1: /* 4290c1: jmp 0x4297f2 */
  goto L_4297f2;
L_4290c6: /* 4290c6: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 4290c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4290c9: /* 4290c9: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4290cc: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290cf: jne 0x4294de */
  if (!zf) goto L_4294de;
L_4290d5: /* 4290d5: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 4290d9: jmp 0x4294e3 */
  goto L_4294e3;
L_4290de: /* 4290de: lea esi, [ebp - 0x1c8] */
  esi = (uint32_t)(ebp + 0xfffffe38u);
/* 4290e4: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4290e7: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290ea: jne 0x4290fa */
  if (!zf) goto L_4290fa;
L_4290ec: /* 4290ec: mov byte ptr [ebp - 0x1c8], bl */
  W8((uint32_t)(ebp + 0xfffffe38u), (ebx & 0xffu));
/* 4290f2: lea esi, [ebp - 0x1c7] */
  esi = (uint32_t)(ebp + 0xfffffe39u);
/* 4290f8: jmp 0x4290ff */
  goto L_4290ff;
L_4290fa: /* 4290fa: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290fd: jne 0x429112 */
  if (!zf) goto L_429112;
L_4290ff: /* 4290ff: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 429102: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 429103: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429106: call 0x4243fa */
  esp -= 4; W32(esp, 0x42910bu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42910b: mov ebx, eax */
  ebx = eax;
/* 42910d: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 429110: jmp 0x429115 */
  goto L_429115;
L_429112: /* 429112: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
L_429115: /* 429115: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429119: je 0x429123 */
  if (zf) goto L_429123;
L_42911b: /* 42911b: cmp edi, 0x15d */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x15du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429121: jle 0x429144 */
  if ((zf || sf != of)) goto L_429144;
L_429123: /* 429123: mov edi, 0x15d */
  edi = 0x15du;
/* 429128: jmp 0x429144 */
  goto L_429144;
L_42912a: /* 42912a: mov eax, edi */
  eax = edi;
/* 42912c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 42912d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42912f: je 0x42914f */
  if (zf) goto L_42914f;
L_429131: /* 429131: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 429134: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 429136: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 429137: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42913a: call 0x4243fa */
  esp -= 4; W32(esp, 0x42913fu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42913f: mov ebx, eax */
  ebx = eax;
/* 429141: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_429144: /* 429144: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429145: call 0x40152b */
  esp -= 4; W32(esp, 0x42914au); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42914a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42914b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42914d: jne 0x42912a */
  if (!zf) goto L_42912a;
L_42914f: /* 42914f: cmp byte ptr [0x44a9ac], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44a9acu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429155: jne 0x429197 */
  if (!zf) goto L_429197;
L_429157: /* 429157: mov eax, edi */
  eax = edi;
/* 429159: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 42915a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42915c: je 0x429197 */
  if (zf) goto L_429197;
L_42915e: /* 42915e: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429161: call 0x4243fa */
  esp -= 4; W32(esp, 0x429166u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429166: mov ebx, eax */
  ebx = eax;
/* 429168: mov al, byte ptr [0x44a9ac] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0x44a9acu))) & 0xffu);
/* 42916d: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 42916f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 429170: jmp 0x429189 */
  goto L_429189;
L_429172: /* 429172: mov eax, edi */
  eax = edi;
/* 429174: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 429175: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429177: je 0x429197 */
  if (zf) goto L_429197;
L_429179: /* 429179: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42917c: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 42917e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42917f: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429182: call 0x4243fa */
  esp -= 4; W32(esp, 0x429187u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429187: mov ebx, eax */
  ebx = eax;
L_429189: /* 429189: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42918a: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42918d: call 0x40152b */
  esp -= 4; W32(esp, 0x429192u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 429192: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429193: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429195: jne 0x429172 */
  if (!zf) goto L_429172;
L_429197: /* 429197: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42919b: je 0x4291fe */
  if (zf) goto L_4291fe;
L_42919d: /* 42919d: cmp ebx, 0x65 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4291a0: je 0x4291a7 */
  if (zf) goto L_4291a7;
L_4291a2: /* 4291a2: cmp ebx, 0x45 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4291a5: jne 0x4291fe */
  if (!zf) goto L_4291fe;
L_4291a7: /* 4291a7: mov eax, edi */
  eax = edi;
/* 4291a9: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 4291aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4291ac: je 0x4291fe */
  if (zf) goto L_4291fe;
L_4291ae: /* 4291ae: mov byte ptr [esi], 0x65 */
  W8((uint32_t)(esi), 0x65u);
/* 4291b1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4291b2: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4291b5: call 0x4243fa */
  esp -= 4; W32(esp, 0x4291bau); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4291ba: mov ebx, eax */
  ebx = eax;
/* 4291bc: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 4291bf: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4291c2: jne 0x4291c9 */
  if (!zf) goto L_4291c9;
L_4291c4: /* 4291c4: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 4291c6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4291c7: jmp 0x4291ce */
  goto L_4291ce;
L_4291c9: /* 4291c9: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4291cc: jne 0x4291f3 */
  if (!zf) goto L_4291f3;
L_4291ce: /* 4291ce: mov eax, edi */
  eax = edi;
/* 4291d0: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 4291d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4291d3: jne 0x4291e6 */
  if (!zf) goto L_4291e6;
L_4291d5: /* 4291d5: xor edi, edi */
  edi = 0;
/* 4291d7: jmp 0x4291f3 */
  goto L_4291f3;
L_4291d9: /* 4291d9: mov eax, edi */
  eax = edi;
/* 4291db: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 4291dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4291de: je 0x4291fe */
  if (zf) goto L_4291fe;
L_4291e0: /* 4291e0: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 4291e3: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 4291e5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4291e6: /* 4291e6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4291e9: call 0x4243fa */
  esp -= 4; W32(esp, 0x4291eeu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4291ee: mov ebx, eax */
  ebx = eax;
/* 4291f0: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_4291f3: /* 4291f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4291f4: call 0x40152b */
  esp -= 4; W32(esp, 0x4291f9u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 4291f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4291fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4291fc: jne 0x4291d9 */
  if (!zf) goto L_4291d9;
L_4291fe: /* 4291fe: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429201: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429202: call 0x428e5e */
  esp -= 4; W32(esp, 0x429207u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429207: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429208: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42920c: je 0x42931f */
  if (zf) goto L_42931f;
L_429212: /* 429212: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429216: jne 0x4297f2 */
  if (!zf) goto L_4297f2;
L_42921c: /* 42921c: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42921f: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 429222: lea eax, [ebp - 0x1c8] */
  eax = (uint32_t)(ebp + 0xfffffe38u);
/* 429228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429229: push dword ptr [ebp - 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff9cu)); esp -= 4; W32(esp, v); }
/* 42922c: movsx eax, byte ptr [ebp - 0x4f] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
/* 429230: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 429231: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429232: call dword ptr [0x44afa8] */
  { uint32_t t = R32((uint32_t)(0x44afa8u)); esp -= 4; W32(esp, 0x429238u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 429238: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42923b: jmp 0x4297f2 */
  goto L_4297f2;
L_429240: /* 429240: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429244: jne 0x429250 */
  if (!zf) goto L_429250;
L_429246: /* 429246: mov dword ptr [ebp - 0x44], 1 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x1u);
/* 42924d: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
L_429250: /* 429250: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 429254: jle 0x429403 */
  if ((zf || sf != of)) goto L_429403;
L_42925a: /* 42925a: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
/* 42925e: jmp 0x429403 */
  goto L_429403;
L_429263: /* 429263: mov eax, edi */
  eax = edi;
/* 429265: sub eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429268: je 0x4295d0 */
  if (zf) goto L_4295d0;
L_42926e: /* 42926e: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429271: je 0x429250 */
  if (zf) goto L_429250;
L_429273: /* 429273: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 429274: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 429275: je 0x4295d4 */
  if (zf) goto L_4295d4;
L_42927b: /* 42927b: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42927e: je 0x4290c9 */
  if (zf) goto L_4290c9;
L_429284: /* 429284: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429287: je 0x4292b9 */
  if (zf) goto L_4292b9;
L_429289: /* 429289: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42928c: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 42928f: cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429292: je 0x4292a1 */
  if (zf) goto L_4292a1;
L_429294: /* 429294: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
L_429297: /* 429297: call 0x428e5e */
  esp -= 4; W32(esp, 0x42929cu); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 42929c: jmp 0x429851 */
  goto L_429851;
L_4292a1: /* 4292a1: dec byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 4292a4: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4292a8: jne 0x4297f2 */
  if (!zf) goto L_4297f2;
L_4292ae: /* 4292ae: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 4292b1: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 4292b4: jmp 0x4297f2 */
  goto L_4297f2;
L_4292b9: /* 4292b9: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 4292bd: jle 0x4292c3 */
  if ((zf || sf != of)) goto L_4292c3;
L_4292bf: /* 4292bf: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
L_4292c3: /* 4292c3: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4292c6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4292c7: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 4292ca: mov dword ptr [ebp - 0x1cc], edi */
  W32((uint32_t)(ebp + 0xfffffe34u), edi);
/* 4292d0: cmp byte ptr [edi], 0x5e */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x5eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4292d3: jne 0x4292e0 */
  if (!zf) goto L_4292e0;
L_4292d5: /* 4292d5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4292d6: mov dword ptr [ebp - 0x1cc], edi */
  W32((uint32_t)(ebp + 0xfffffe34u), edi);
/* 4292dc: or byte ptr [ebp - 0x49], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
L_4292e0: /* 4292e0: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 4292e3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4292e5: jne 0x42935c */
  if (!zf) goto L_42935c;
L_4292e7: /* 4292e7: and dword ptr [ebp - 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4292ea: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4292ec: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4292ed: call 0x4014ee */
  esp -= 4; W32(esp, 0x4292f2u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 4292f2: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 4292f5: mov ebx, esp */
  ebx = esp;
/* 4292f7: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 4292fa: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4292fe: jmp 0x42935c */
  goto L_42935c;
L_429304: /* 429304: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 429307: call 0x415709 */
  esp -= 4; W32(esp, 0x42930cu); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 42930c: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42930e: call 0x4010eb */
  esp -= 4; W32(esp, 0x429313u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 429313: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429314: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 429317: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429319: jne 0x429348 */
  if (!zf) goto L_429348;
L_42931b: /* 42931b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_42931f: /* 42931f: cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429323: jne 0x42932e */
  if (!zf) goto L_42932e;
L_429325: /* 429325: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 429328: call 0x401156 */
  esp -= 4; W32(esp, 0x42932du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42932d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42932e: /* 42932e: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 429331: lea esp, [ebp - 0x1e4] */
  esp = (uint32_t)(ebp + 0xfffffe1cu);
/* 429337: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42933a: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42933d: call 0x4013ab */
  esp -= 4; W32(esp, 0x429342u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 429342: call 0x40105a */
  esp -= 4; W32(esp, 0x429347u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 429347: ret  */
  esp += 4; SPILL(); return;
L_429348: /* 429348: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 42934f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 429353: mov edi, dword ptr [ebp - 0x1cc] */
  edi = R32((uint32_t)(ebp + 0xfffffe34u));
/* 429359: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
L_42935c: /* 42935c: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42935e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 429360: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429361: call 0x4010fd */
  esp -= 4; W32(esp, 0x429366u); SPILL(); hle_memset(); RELOAD();
/* 429366: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 429369: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42936d: jne 0x4293e3 */
  if (!zf) goto L_4293e3;
L_42936f: /* 42936f: cmp byte ptr [edi], 0x5d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429372: jne 0x4293e3 */
  if (!zf) goto L_4293e3;
L_429374: /* 429374: mov dl, 0x5d */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x5du) & 0xffu);
/* 429376: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 429377: mov byte ptr [ebx + 0xb], 0x20 */
  W8((uint32_t)(ebx + 0xbu), 0x20u);
/* 42937b: jmp 0x4293e6 */
  goto L_4293e6;
L_42937d: /* 42937d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42937e: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429380: jne 0x4293cd */
  if (!zf) goto L_4293cd;
L_429382: /* 429382: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429384: je 0x4293cd */
  if (zf) goto L_4293cd;
L_429386: /* 429386: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 429388: cmp cl, 0x5d */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42938b: je 0x4293cd */
  if (zf) goto L_4293cd;
L_42938d: /* 42938d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42938e: cmp dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 429390: jae 0x429396 */
  if (!cf) goto L_429396;
L_429392: /* 429392: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 429394: jmp 0x42939a */
  goto L_42939a;
L_429396: /* 429396: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 429398: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
L_42939a: /* 42939a: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42939c: ja 0x4293c9 */
  if ((!cf && !zf)) goto L_4293c9;
L_42939e: /* 42939e: movzx esi, dl */
  esi = (uint32_t)((edx & 0xffu));
/* 4293a1: sub al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4293a3: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4293a5: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 4293a8: mov dword ptr [ebp - 0x1d0], eax */
  W32((uint32_t)(ebp + 0xfffffe30u), eax);
L_4293ae: /* 4293ae: mov eax, esi */
  eax = esi;
/* 4293b0: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4293b3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4293b5: mov ecx, esi */
  ecx = esi;
/* 4293b7: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 4293ba: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 4293bc: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 4293be: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 4293c0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4293c1: dec dword ptr [ebp - 0x1d0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe30u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffe30u), r);
  }
/* 4293c7: jne 0x4293ae */
  if (!zf) goto L_4293ae;
L_4293c9: /* 4293c9: xor dl, dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 4293cb: jmp 0x4293e6 */
  goto L_4293e6;
L_4293cd: /* 4293cd: mov byte ptr [ebp - 0x39], al */
  W8((uint32_t)(ebp + 0xffffffc7u), (eax & 0xffu));
/* 4293d0: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 4293d3: mov eax, ecx */
  eax = ecx;
/* 4293d5: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4293d8: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4293da: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 4293dd: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 4293df: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 4293e1: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_4293e3: /* 4293e3: mov dl, byte ptr [ebp - 0x39] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffc7u))) & 0xffu);
L_4293e6: /* 4293e6: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 4293e8: cmp al, 0x5d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4293ea: jne 0x42937d */
  if (!zf) goto L_42937d;
L_4293ec: /* 4293ec: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4293ee: je 0x42931f */
  if (zf) goto L_42931f;
L_4293f4: /* 4293f4: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 4293f7: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4293fb: jne 0x429400 */
  if (!zf) goto L_429400;
L_4293fd: /* 4293fd: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
L_429400: /* 429400: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_429403: /* 429403: mov esi, ebx */
  esi = ebx;
/* 429405: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429408: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42940b: call 0x428e5e */
  esp -= 4; W32(esp, 0x429410u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429410: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_429411: /* 429411: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429415: je 0x429425 */
  if (zf) goto L_429425;
L_429417: /* 429417: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42941a: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42941d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42941f: je 0x429597 */
  if (zf) goto L_429597;
L_429425: /* 429425: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429428: call 0x4243fa */
  esp -= 4; W32(esp, 0x42942du); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42942d: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 429430: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429433: je 0x429479 */
  if (zf) goto L_429479;
L_429435: /* 429435: cmp edi, 0x73 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x73u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429438: jne 0x429449 */
  if (!zf) goto L_429449;
L_42943a: /* 42943a: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42943d: jl 0x429444 */
  if ((sf != of)) goto L_429444;
L_42943f: /* 42943f: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429442: jle 0x429449 */
  if ((zf || sf != of)) goto L_429449;
L_429444: /* 429444: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429447: jne 0x429479 */
  if (!zf) goto L_429479;
L_429449: /* 429449: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42944c: jne 0x42958d */
  if (!zf) goto L_42958d;
L_429452: /* 429452: mov ecx, eax */
  ecx = eax;
/* 429454: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 429457: xor edx, edx */
  edx = 0;
  cf = 0;
/* 429459: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  edx = r;
  }
/* 42945a: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 42945c: mov ecx, eax */
  ecx = eax;
/* 42945e: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 429461: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 429464: movsx ecx, byte ptr [ecx + edi] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + edi)));
/* 429468: movsx edi, byte ptr [ebp - 0x49] */
  edi = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb7u)));
/* 42946c: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42946e: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429470: je 0x42958d */
  if (zf) goto L_42958d;
L_429476: /* 429476: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_429479: /* 429479: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42947d: jne 0x429587 */
  if (!zf) goto L_429587;
L_429483: /* 429483: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429487: je 0x42957c */
  if (zf) goto L_42957c;
L_42948d: /* 42948d: mov byte ptr [ebp - 0x1d4], al */
  W8((uint32_t)(ebp + 0xfffffe2cu), (eax & 0xffu));
/* 429493: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 429496: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 42949c: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4294a1: je 0x4294b1 */
  if (zf) goto L_4294b1;
L_4294a3: /* 4294a3: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4294a6: call 0x4243fa */
  esp -= 4; W32(esp, 0x4294abu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4294ab: mov byte ptr [ebp - 0x1d3], al */
  W8((uint32_t)(ebp + 0xfffffe2du), (eax & 0xffu));
L_4294b1: /* 4294b1: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 4294b7: lea eax, [ebp - 0x1d4] */
  eax = (uint32_t)(ebp + 0xfffffe2cu);
/* 4294bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4294be: lea eax, [ebp - 0x1d8] */
  eax = (uint32_t)(ebp + 0xfffffe28u);
/* 4294c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4294c5: call 0x402197 */
  esp -= 4; W32(esp, 0x4294cau); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 4294ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4294cd: mov ax, word ptr [ebp - 0x1d8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffe28u))) & 0xffffu);
/* 4294d4: mov word ptr [ebx], ax */
  W16((uint32_t)(ebx), (eax & 0xffffu));
/* 4294d7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4294d8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4294d9: jmp 0x42957f */
  goto L_42957f;
L_4294de: /* 4294de: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4294e1: jne 0x429501 */
  if (!zf) goto L_429501;
L_4294e3: /* 4294e3: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 4294e6: jne 0x4294f4 */
  if (!zf) goto L_4294f4;
L_4294e8: /* 4294e8: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4294ec: je 0x4294f4 */
  if (zf) goto L_4294f4;
L_4294ee: /* 4294ee: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 4294f2: jmp 0x429501 */
  goto L_429501;
L_4294f4: /* 4294f4: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4294f7: call 0x4243fa */
  esp -= 4; W32(esp, 0x4294fcu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4294fc: mov ebx, eax */
  ebx = eax;
/* 4294fe: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_429501: /* 429501: cmp ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429504: jne 0x429605 */
  if (!zf) goto L_429605;
L_42950a: /* 42950a: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42950d: call 0x4243fa */
  esp -= 4; W32(esp, 0x429512u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429512: mov ebx, eax */
  ebx = eax;
/* 429514: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 429517: cmp bl, 0x78 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42951a: je 0x429554 */
  if (zf) goto L_429554;
L_42951c: /* 42951c: cmp bl, 0x58 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42951f: je 0x429554 */
  if (zf) goto L_429554;
L_429521: /* 429521: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 429528: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42952b: je 0x429542 */
  if (zf) goto L_429542;
L_42952d: /* 42952d: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429531: je 0x42953b */
  if (zf) goto L_42953b;
L_429533: /* 429533: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 429536: jne 0x42953b */
  if (!zf) goto L_42953b;
L_429538: /* 429538: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42953b: /* 42953b: mov edi, esi */
  edi = esi;
/* 42953d: jmp 0x429605 */
  goto L_429605;
L_429542: /* 429542: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429545: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429546: call 0x428e5e */
  esp -= 4; W32(esp, 0x42954bu); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 42954b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42954c: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 42954e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42954f: jmp 0x429602 */
  goto L_429602;
L_429554: /* 429554: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429557: call 0x4243fa */
  esp -= 4; W32(esp, 0x42955cu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42955c: mov ebx, eax */
  ebx = eax;
/* 42955e: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 429561: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429565: je 0x429574 */
  if (zf) goto L_429574;
L_429567: /* 429567: sub dword ptr [ebp - 0x48], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42956b: cmp dword ptr [ebp - 0x48], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42956f: jge 0x429574 */
  if ((sf == of)) goto L_429574;
L_429571: /* 429571: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_429574: /* 429574: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 429576: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 429577: jmp 0x429605 */
  goto L_429605;
L_42957c: /* 42957c: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 42957e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_42957f: /* 42957f: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 429582: jmp 0x429411 */
  goto L_429411;
L_429587: /* 429587: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 429588: jmp 0x429411 */
  goto L_429411;
L_42958d: /* 42958d: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429591: call 0x428e5e */
  esp -= 4; W32(esp, 0x429596u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429596: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_429597: /* 429597: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429599: je 0x42931f */
  if (zf) goto L_42931f;
L_42959f: /* 42959f: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4295a3: jne 0x4297f2 */
  if (!zf) goto L_4297f2;
L_4295a9: /* 4295a9: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 4295ac: cmp dword ptr [ebp - 0x68], 0x63 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4295b0: je 0x4297f2 */
  if (zf) goto L_4297f2;
L_4295b6: /* 4295b6: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 4295b9: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4295bd: je 0x4295c8 */
  if (zf) goto L_4295c8;
L_4295bf: /* 4295bf: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
/* 4295c3: jmp 0x4297f2 */
  goto L_4297f2;
L_4295c8: /* 4295c8: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 4295cb: jmp 0x4297f2 */
  goto L_4297f2;
L_4295d0: /* 4295d0: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
L_4295d4: /* 4295d4: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4295d7: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4295da: jne 0x4295e2 */
  if (!zf) goto L_4295e2;
L_4295dc: /* 4295dc: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 4295e0: jmp 0x4295e7 */
  goto L_4295e7;
L_4295e2: /* 4295e2: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4295e5: jne 0x429605 */
  if (!zf) goto L_429605;
L_4295e7: /* 4295e7: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 4295ea: jne 0x4295f8 */
  if (!zf) goto L_4295f8;
L_4295ec: /* 4295ec: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4295f0: je 0x4295f8 */
  if (zf) goto L_4295f8;
L_4295f2: /* 4295f2: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 4295f6: jmp 0x429605 */
  goto L_429605;
L_4295f8: /* 4295f8: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4295fb: call 0x4243fa */
  esp -= 4; W32(esp, 0x429600u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429600: mov ebx, eax */
  ebx = eax;
L_429602: /* 429602: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_429605: /* 429605: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429609: je 0x429700 */
  if (zf) goto L_429700;
L_42960f: /* 42960f: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429613: jne 0x4296de */
  if (!zf) goto L_4296de;
L_429619: /* 429619: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42961c: je 0x429663 */
  if (zf) goto L_429663;
L_42961e: /* 42961e: cmp edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429621: je 0x429663 */
  if (zf) goto L_429663;
L_429623: /* 429623: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429624: call 0x40152b */
  esp -= 4; W32(esp, 0x429629u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 429629: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42962a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42962c: je 0x429694 */
  if (zf) goto L_429694;
L_42962e: /* 42962e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429630: jne 0x42964c */
  if (!zf) goto L_42964c;
L_429632: /* 429632: cmp ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429635: jge 0x429694 */
  if ((sf == of)) goto L_429694;
L_429637: /* 429637: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42963a: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42963d: shld ecx, eax, 3 */
  { uint32_t a = ecx, b = eax, c = (0x3u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 429641: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 429644: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 429647: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42964a: jmp 0x429697 */
  goto L_429697;
L_42964c: /* 42964c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42964e: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 429650: push dword ptr [ebp - 0x58] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa8u)); esp -= 4; W32(esp, v); }
/* 429653: push dword ptr [ebp - 0x5c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa4u)); esp -= 4; W32(esp, v); }
/* 429656: call 0x40518c */
  esp -= 4; W32(esp, 0x42965bu); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 42965b: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42965e: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 429661: jmp 0x429697 */
  goto L_429697;
L_429663: /* 429663: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429664: call 0x415449 */
  esp -= 4; W32(esp, 0x429669u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 429669: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42966a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 42966c: je 0x429694 */
  if (zf) goto L_429694;
L_42966e: /* 42966e: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 429671: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 429674: shld ecx, eax, 4 */
  { uint32_t a = ecx, b = eax, c = (0x4u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 429678: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42967b: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42967e: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 429681: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429682: call 0x40152b */
  esp -= 4; W32(esp, 0x429687u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 429687: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429688: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42968a: jne 0x429697 */
  if (!zf) goto L_429697;
L_42968c: /* 42968c: and ebx, 0xffffffdf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 42968f: sub ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 429692: jmp 0x429697 */
  goto L_429697;
L_429694: /* 429694: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_429697: /* 429697: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42969b: jne 0x4296c7 */
  if (!zf) goto L_4296c7;
L_42969d: /* 42969d: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 4296a0: lea eax, [ebx - 0x30] */
  eax = (uint32_t)(ebx + 0xffffffd0u);
/* 4296a3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4296a4: add dword ptr [ebp - 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 4296a7: adc dword ptr [ebp - 0x58], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 4296aa: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4296ae: je 0x4296bb */
  if (zf) goto L_4296bb;
L_4296b0: /* 4296b0: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 4296b3: jne 0x4296bb */
  if (!zf) goto L_4296bb;
L_4296b5: /* 4296b5: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 4296b9: jmp 0x4296d1 */
  goto L_4296d1;
L_4296bb: /* 4296bb: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4296be: call 0x4243fa */
  esp -= 4; W32(esp, 0x4296c3u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4296c3: mov ebx, eax */
  ebx = eax;
/* 4296c5: jmp 0x4296d1 */
  goto L_4296d1;
L_4296c7: /* 4296c7: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4296ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4296cb: call 0x428e5e */
  esp -= 4; W32(esp, 0x4296d0u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 4296d0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4296d1: /* 4296d1: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4296d5: je 0x429619 */
  if (zf) goto L_429619;
L_4296db: /* 4296db: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_4296de: /* 4296de: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4296e2: je 0x4297b0 */
  if (zf) goto L_4297b0;
L_4296e8: /* 4296e8: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 4296eb: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4296ed: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 4296f0: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 4296f3: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 4296f5: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 4296f8: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 4296fb: jmp 0x4297b0 */
  goto L_4297b0;
L_429700: /* 429700: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429704: jne 0x4297a7 */
  if (!zf) goto L_4297a7;
L_42970a: /* 42970a: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42970d: je 0x42973b */
  if (zf) goto L_42973b;
L_42970f: /* 42970f: cmp edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429712: je 0x42973b */
  if (zf) goto L_42973b;
L_429714: /* 429714: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429715: call 0x40152b */
  esp -= 4; W32(esp, 0x42971au); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42971a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42971b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42971d: je 0x42975d */
  if (zf) goto L_42975d;
L_42971f: /* 42971f: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429721: jne 0x42972e */
  if (!zf) goto L_42972e;
L_429723: /* 429723: cmp ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429726: jge 0x42975d */
  if ((sf == of)) goto L_42975d;
L_429728: /* 429728: shl dword ptr [ebp - 0x38], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42972c: jmp 0x429760 */
  goto L_429760;
L_42972e: /* 42972e: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 429731: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 429734: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 429736: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 429739: jmp 0x429760 */
  goto L_429760;
L_42973b: /* 42973b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42973c: call 0x415449 */
  esp -= 4; W32(esp, 0x429741u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 429741: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429742: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429744: je 0x42975d */
  if (zf) goto L_42975d;
L_429746: /* 429746: shl dword ptr [ebp - 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42974a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42974b: call 0x40152b */
  esp -= 4; W32(esp, 0x429750u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 429750: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429751: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429753: jne 0x429760 */
  if (!zf) goto L_429760;
L_429755: /* 429755: and ebx, 0xffffffdf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 429758: sub ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 42975b: jmp 0x429760 */
  goto L_429760;
L_42975d: /* 42975d: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_429760: /* 429760: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429764: jne 0x429790 */
  if (!zf) goto L_429790;
L_429766: /* 429766: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 429769: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42976c: lea eax, [eax + ebx - 0x30] */
  eax = (uint32_t)(eax + ebx + 0xffffffd0u);
/* 429770: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 429773: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429777: je 0x429784 */
  if (zf) goto L_429784;
L_429779: /* 429779: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42977c: jne 0x429784 */
  if (!zf) goto L_429784;
L_42977e: /* 42977e: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 429782: jmp 0x42979a */
  goto L_42979a;
L_429784: /* 429784: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429787: call 0x4243fa */
  esp -= 4; W32(esp, 0x42978cu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42978c: mov ebx, eax */
  ebx = eax;
/* 42978e: jmp 0x42979a */
  goto L_42979a;
L_429790: /* 429790: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429793: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429794: call 0x428e5e */
  esp -= 4; W32(esp, 0x429799u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429799: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42979a: /* 42979a: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42979e: je 0x42970a */
  if (zf) goto L_42970a;
L_4297a4: /* 4297a4: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_4297a7: /* 4297a7: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4297ab: je 0x4297b0 */
  if (zf) goto L_4297b0;
L_4297ad: /* 4297ad: neg dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
L_4297b0: /* 4297b0: cmp edi, 0x46 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4297b3: jne 0x4297b9 */
  if (!zf) goto L_4297b9;
L_4297b5: /* 4297b5: and dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
L_4297b9: /* 4297b9: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4297bd: je 0x42931f */
  if (zf) goto L_42931f;
L_4297c3: /* 4297c3: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4297c7: jne 0x4297f2 */
  if (!zf) goto L_4297f2;
L_4297c9: /* 4297c9: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 4297cc: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 4297cf: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
L_4297d2: /* 4297d2: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4297d6: je 0x4297e5 */
  if (zf) goto L_4297e5;
L_4297d8: /* 4297d8: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 4297db: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 4297dd: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 4297e0: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 4297e3: jmp 0x4297f2 */
  goto L_4297f2;
L_4297e5: /* 4297e5: cmp byte ptr [ebp - 0x4f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4297e9: je 0x4297ef */
  if (zf) goto L_4297ef;
L_4297eb: /* 4297eb: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 4297ed: jmp 0x4297f2 */
  goto L_4297f2;
L_4297ef: /* 4297ef: mov word ptr [ebx], ax */
  W16((uint32_t)(ebx), (eax & 0xffffu));
L_4297f2: /* 4297f2: inc byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 4297f5: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 4297f8: jmp 0x428e98 */
  goto L_428e98;
L_4297fd: /* 4297fd: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429800: call 0x4243fa */
  esp -= 4; W32(esp, 0x429805u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429805: mov ebx, eax */
  ebx = eax;
/* 429807: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42980a: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 42980d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42980e: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 429811: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429813: je 0x42981b */
  if (zf) goto L_42981b;
L_429815: /* 429815: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429816: jmp 0x429297 */
  goto L_429297;
L_42981b: /* 42981b: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 42981e: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 429824: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429829: je 0x428e98 */
  if (zf) goto L_428e98;
L_42982f: /* 42982f: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429832: call 0x4243fa */
  esp -= 4; W32(esp, 0x429837u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429837: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 42983a: movzx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(R8((uint32_t)(ecx)));
/* 42983d: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 429840: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429842: je 0x429857 */
  if (zf) goto L_429857;
L_429844: /* 429844: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429845: call 0x428e5e */
  esp -= 4; W32(esp, 0x42984au); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 42984a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42984b: call 0x428e5e */
  esp -= 4; W32(esp, 0x429850u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429850: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_429851: /* 429851: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429852: jmp 0x42931f */
  goto L_42931f;
L_429857: /* 429857: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42985a: jmp 0x428e98 */
  goto L_428e98;
}
