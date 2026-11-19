#include "recomp.h"
#include "rec_mod.h"

void f_403c3e(void) {
  LOAD_REGS();
  goto L_403c3e;
L_403890: /* 403890: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403891: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403893: call 0x4038ae */
  esp -= 4; W32(esp, 0x403898u); SPILL(); f_4038ae(); if (g_unwind) return; RELOAD();
/* 403898: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40389b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40389d: jne 0x403c7d */
  if (!zf) goto L_403c7d;
L_4038a3: /* 4038a3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4038a5: lea eax, [edi + eax + 1] */
  eax = (uint32_t)(edi + eax + 0x1u);
/* 4038a9: jmp 0x403c84 */
  goto L_403c84;
L_403c3e: /* 403c3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403c3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403c40: mov esi, dword ptr [0x4491f4] */
  esi = R32((uint32_t)(0x4491f4u));
/* 403c46: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403c48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403c49: je 0x40debe */
  if (zf) goto L_40debe;
L_403c4f: /* 403c4f: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 403c53: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403c55: je 0x403c82 */
  if (zf) goto L_403c82;
L_403c57: /* 403c57: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403c58: call 0x402493 */
  esp -= 4; W32(esp, 0x403c5du); SPILL(); hle_strlen(); RELOAD();
/* 403c5d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403c5e: mov edi, eax */
  edi = eax;
L_403c60: /* 403c60: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 403c62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403c64: je 0x403c82 */
  if (zf) goto L_403c82;
L_403c66: /* 403c66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403c67: call 0x402493 */
  esp -= 4; W32(esp, 0x403c6cu); SPILL(); hle_strlen(); RELOAD();
/* 403c6c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 403c6e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403c6f: jbe 0x403c7d */
  if ((cf | zf)) goto L_403c7d;
L_403c71: /* 403c71: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 403c73: cmp byte ptr [eax + edi], 0x3d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + edi))); uint8_t b = (uint8_t)(0x3du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 403c77: je 0x403890 */
  if (zf) goto L_403890;
L_403c7d: /* 403c7d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 403c80: jmp 0x403c60 */
  goto L_403c60;
L_403c82: /* 403c82: xor eax, eax */
  eax = 0;
L_403c84: /* 403c84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403c85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 403c86: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 403c87: ret  */
  esp += 4; SPILL(); return;
L_40debe: /* 40debe: cmp dword ptr [0x4491fc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491fcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dec4: je 0x403c82 */
  if (zf) goto L_403c82;
L_40deca: /* 40deca: call 0x416725 */
  esp -= 4; W32(esp, 0x40decfu); SPILL(); f_416725(); if (g_unwind) return; RELOAD();
/* 40decf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40ded1: jne 0x403c82 */
  if (!zf) goto L_403c82;
L_40ded7: /* 40ded7: mov esi, dword ptr [0x4491f4] */
  esi = R32((uint32_t)(0x4491f4u));
/* 40dedd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40dedf: je 0x403c82 */
  if (zf) goto L_403c82;
L_40dee5: /* 40dee5: jmp 0x403c4f */
  goto L_403c4f;
}

void f_403c88(void) {
  LOAD_REGS();
L_403c88: /* 403c88: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 403c8a: push 0x43e210 */
  { uint32_t v = 0x43e210u; esp -= 4; W32(esp, v); }
/* 403c8f: call 0x40101f */
  esp -= 4; W32(esp, 0x403c94u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 403c94: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 403c96: call 0x4011b7 */
  esp -= 4; W32(esp, 0x403c9bu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 403c9b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403c9c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 403ca0: call 0x40137f */
  esp -= 4; W32(esp, 0x403ca5u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 403ca5: mov edi, eax */
  edi = eax;
/* 403ca7: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 403caa: mov esi, dword ptr [edi + 0x60] */
  esi = R32((uint32_t)(edi + 0x60u));
/* 403cad: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 403cb0: cmp esi, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403cb6: je 0x403cd3 */
  if (zf) goto L_403cd3;
L_403cb8: /* 403cb8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403cba: jne 0x40c427 */
  if (!zf) goto L_40c427;
L_403cc0: /* 403cc0: mov eax, dword ptr [0x44aad8] */
  eax = R32((uint32_t)(0x44aad8u));
/* 403cc5: mov dword ptr [edi + 0x60], eax */
  W32((uint32_t)(edi + 0x60u), eax);
/* 403cc8: mov esi, dword ptr [0x44aad8] */
  esi = R32((uint32_t)(0x44aad8u));
/* 403cce: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 403cd1: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
L_403cd3: /* 403cd3: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 403cd7: call 0x403ce4 */
  esp -= 4; W32(esp, 0x403cdcu); SPILL(); f_403ce4(); if (g_unwind) return; RELOAD();
/* 403cdc: mov eax, esi */
  eax = esi;
/* 403cde: call 0x40105a */
  esp -= 4; W32(esp, 0x403ce3u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 403ce3: ret  */
  esp += 4; SPILL(); return;
L_40c427: /* 40c427: dec dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esi), r);
  }
/* 40c429: jne 0x403cc0 */
  if (!zf) goto L_403cc0;
L_40c42f: /* 40c42f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c430: call 0x401156 */
  esp -= 4; W32(esp, 0x40c435u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40c435: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c436: jmp 0x403cc0 */
  goto L_403cc0;
}

void f_403ce4(void) {
  LOAD_REGS();
L_403ce4: /* 403ce4: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 403ce6: call 0x4011d9 */
  esp -= 4; W32(esp, 0x403cebu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 403ceb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403cec: ret  */
  esp += 4; SPILL(); return;
}

void f_403ced(void) {
  LOAD_REGS();
L_403ced: /* 403ced: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 403cee: mov ebp, esp */
  ebp = esp;
/* 403cf0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 403cf3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 403cf6: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 403cf9: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 403cfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403cfd: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 403d00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403d01: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 403d04: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 403d07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403d08: mov dword ptr [ebp - 0x14], 0x42 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x42u);
/* 403d0f: mov dword ptr [ebp - 0x1c], 0x7fffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x7fffffffu);
/* 403d16: call 0x401feb */
  esp -= 4; W32(esp, 0x403d1bu); SPILL(); f_401feb(); if (g_unwind) return; RELOAD();
/* 403d1b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 403d1e: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 403d21: mov esi, eax */
  esi = eax;
/* 403d23: js 0x40e67d */
  if (sf) goto L_40e67d;
L_403d29: /* 403d29: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 403d2c: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 403d2f: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
L_403d32: /* 403d32: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 403d35: js 0x40e68f */
  if (sf) goto L_40e68f;
L_403d3b: /* 403d3b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 403d3e: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
L_403d41: /* 403d41: mov eax, esi */
  eax = esi;
/* 403d43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 403d44: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 403d45: ret  */
  esp += 4; SPILL(); return;
L_40e67d: /* 40e67d: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 40e680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e681: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40e683: call 0x414470 */
  esp -= 4; W32(esp, 0x40e688u); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 40e688: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e689: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e68a: jmp 0x403d32 */
  goto L_403d32;
L_40e68f: /* 40e68f: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 40e692: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e693: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40e695: call 0x414470 */
  esp -= 4; W32(esp, 0x40e69au); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 40e69a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e69b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e69c: jmp 0x403d41 */
  goto L_403d41;
}

void f_403d46(void) {
  LOAD_REGS();
L_403d46: /* 403d46: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 403d47: mov ebp, esp */
  ebp = esp;
/* 403d49: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 403d4c: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 403d51: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 403d54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403d55: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 403d58: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 403d5b: xor eax, eax */
  eax = 0;
/* 403d5d: xor ecx, ecx */
  ecx = 0;
/* 403d5f: mov cx, word ptr [ebx + 0xa] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0xau))) & 0xffffu);
/* 403d63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403d64: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 403d67: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 403d6a: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 403d6d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 403d70: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 403d73: mov ax, word ptr [esi + 0xa] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xau))) & 0xffffu);
/* 403d77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403d78: mov edi, ecx */
  edi = ecx;
/* 403d7a: mov edx, 0x7fff */
  edx = 0x7fffu;
/* 403d7f: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 403d81: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 403d83: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 403d85: and edi, 0x8000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 403d8b: cmp ax, 0x7fff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fffu);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 403d8f: lea edx, [ecx + eax] */
  edx = (uint32_t)(ecx + eax);
/* 403d92: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 403d95: jae 0x40f20d */
  if (!cf) goto L_40f20d;
L_403d9b: /* 403d9b: cmp cx, 0x7fff */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x7fffu);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 403da0: jae 0x40f20d */
  if (!cf) goto L_40f20d;
L_403da6: /* 403da6: cmp dx, 0xbffd */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0xbffdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 403dab: ja 0x40f20d */
  if ((!cf && !zf)) goto L_40f20d;
L_403db1: /* 403db1: cmp dx, 0x3fbf */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x3fbfu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 403db6: jbe 0x40f130 */
  if ((cf | zf)) goto L_40f130;
L_403dbc: /* 403dbc: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 403dbf: mov edx, 0x7fffffff */
  edx = 0x7fffffffu;
/* 403dc4: je 0x40f134 */
  if (zf) goto L_40f134;
L_403dca: /* 403dca: xor eax, eax */
  eax = 0;
L_403dcc: /* 403dcc: cmp cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 403dcf: je 0x40f150 */
  if (zf) goto L_40f150;
L_403dd5: /* 403dd5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 403dd8: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 403ddb: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 403dde: mov dword ptr [ebp + 0xc], 5 */
  W32((uint32_t)(ebp + 0xcu), 0x5u);
L_403de5: /* 403de5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 403de8: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 403dea: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 403dee: jle 0x403e37 */
  if ((zf || sf != of)) goto L_403e37;
L_403df0: /* 403df0: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 403df2: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 403df5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 403df8: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 403dfb: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 403dfe: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_403e01: /* 403e01: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 403e04: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 403e07: movzx ecx, word ptr [ecx] */
  ecx = (uint32_t)(R16((uint32_t)(ecx)));
/* 403e0a: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 403e0d: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 403e10: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 403e13: add ecx, -4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 403e16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 403e17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403e18: push dword ptr [ecx] */
  { uint32_t v = R32((uint32_t)(ecx)); esp -= 4; W32(esp, v); }
/* 403e1a: call 0x402942 */
  esp -= 4; W32(esp, 0x403e1fu); SPILL(); f_402942(); if (g_unwind) return; RELOAD();
/* 403e1f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 403e22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403e24: jne 0x40f17a */
  if (!zf) goto L_40f17a;
L_403e2a: /* 403e2a: add dword ptr [ebp - 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 403e2e: sub dword ptr [ebp - 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 403e32: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 403e35: jne 0x403e01 */
  if (!zf) goto L_403e01;
L_403e37: /* 403e37: add dword ptr [ebp - 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 403e3b: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 403e3e: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 403e41: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 403e45: jg 0x403de5 */
  if ((!zf && sf == of)) goto L_403de5;
L_403e47: /* 403e47: add dword ptr [ebp + 8], 0xc002 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0xc002u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 403e4e: cmp word ptr [ebp + 8], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 403e53: jle 0x40f185 */
  if ((zf || sf != of)) goto L_40f185;
L_403e59: /* 403e59: test byte ptr [ebp - 0x1d], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe3u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 403e5d: jne 0x403e77 */
  if (!zf) goto L_403e77;
L_403e5f: /* 403e5f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 403e62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403e63: call 0x4028c8 */
  esp -= 4; W32(esp, 0x403e68u); SPILL(); f_4028c8(); if (g_unwind) return; RELOAD();
/* 403e68: add dword ptr [ebp + 8], 0xffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 403e6f: cmp word ptr [ebp + 8], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 403e74: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403e75: jg 0x403e59 */
  if ((!zf && sf == of)) goto L_403e59;
L_403e77: /* 403e77: cmp word ptr [ebp + 8], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 403e7c: jle 0x40f185 */
  if ((zf || sf != of)) goto L_40f185;
L_403e82: /* 403e82: cmp word ptr [ebp - 0x28], 0x8000 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffd8u))); uint16_t b = (uint16_t)(0x8000u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 403e88: ja 0x40f1cb */
  if ((!cf && !zf)) goto L_40f1cb;
L_403e8e: /* 403e8e: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 403e91: and eax, 0x1ffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 403e96: cmp eax, 0x18000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403e9b: je 0x40f1cb */
  if (zf) goto L_40f1cb;
L_403ea1: /* 403ea1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 403ea4: cmp ax, 0x7fff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fffu);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 403ea8: jae 0x40f20d */
  if (!cf) goto L_40f20d;
L_403eae: /* 403eae: mov cx, word ptr [ebp - 0x26] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffdau))) & 0xffffu);
/* 403eb2: mov word ptr [esi], cx */
  W16((uint32_t)(esi), (ecx & 0xffffu));
/* 403eb5: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 403eb8: mov dword ptr [esi + 2], ecx */
  W32((uint32_t)(esi + 0x2u), ecx);
/* 403ebb: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 403ebe: mov dword ptr [esi + 6], ecx */
  W32((uint32_t)(esi + 0x6u), ecx);
/* 403ec1: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_403ec3: /* 403ec3: mov word ptr [esi + 0xa], ax */
  W16((uint32_t)(esi + 0xau), (eax & 0xffffu));
L_403ec7: /* 403ec7: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 403eca: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 403ecd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403ece: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 403ecf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 403ed0: call 0x4013ab */
  esp -= 4; W32(esp, 0x403ed5u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 403ed5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 403ed6: ret  */
  esp += 4; SPILL(); return;
L_403ed7: /* 403ed7: cmp dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403ed9: jne 0x403dcc */
  if (!zf) goto L_403dcc;
L_403edf: /* 403edf: jmp 0x403ec3 */
  goto L_403ec3;
L_40f130: /* 40f130: xor eax, eax */
  eax = 0;
/* 40f132: jmp 0x40f16d */
  goto L_40f16d;
L_40f134: /* 40f134: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 40f137: xor eax, eax */
  eax = 0;
/* 40f139: test dword ptr [esi + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f13c: jne 0x403dcc */
  if (!zf) goto L_403dcc;
L_40f142: /* 40f142: cmp dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f145: jne 0x403dcc */
  if (!zf) goto L_403dcc;
L_40f14b: /* 40f14b: jmp 0x403ed7 */
  goto L_403ed7;
L_40f150: /* 40f150: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 40f153: test dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f156: jne 0x403dd5 */
  if (!zf) goto L_403dd5;
L_40f15c: /* 40f15c: cmp dword ptr [ebx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f15f: jne 0x403dd5 */
  if (!zf) goto L_403dd5;
L_40f165: /* 40f165: cmp dword ptr [ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f167: jne 0x403dd5 */
  if (!zf) goto L_403dd5;
L_40f16d: /* 40f16d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 40f170: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 40f173: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 40f175: jmp 0x403ec7 */
  goto L_403ec7;
L_40f17a: /* 40f17a: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 40f17d: inc word ptr [eax] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax), r);
  }
/* 40f180: jmp 0x403e2a */
  goto L_403e2a;
L_40f185: /* 40f185: add dword ptr [ebp + 8], 0xffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 40f18c: cmp word ptr [ebp + 8], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 40f191: jge 0x403e82 */
  if ((sf == of)) goto L_403e82;
L_40f197: /* 40f197: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40f19a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 40f19c: movzx ebx, ax */
  ebx = (uint32_t)((eax & 0xffffu));
/* 40f19f: add dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_40f1a2: /* 40f1a2: test byte ptr [ebp - 0x28], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40f1a6: je 0x40f1ab */
  if (zf) goto L_40f1ab;
L_40f1a8: /* 40f1a8: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_40f1ab: /* 40f1ab: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 40f1ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f1af: call 0x4324b3 */
  esp -= 4; W32(esp, 0x40f1b4u); SPILL(); f_4324b3(); if (g_unwind) return; RELOAD();
/* 40f1b4: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 40f1b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f1b6: jne 0x40f1a2 */
  if (!zf) goto L_40f1a2;
L_40f1b8: /* 40f1b8: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f1bc: je 0x403e82 */
  if (zf) goto L_403e82;
L_40f1c2: /* 40f1c2: or byte ptr [ebp - 0x28], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 40f1c6: jmp 0x403e82 */
  goto L_403e82;
L_40f1cb: /* 40f1cb: cmp dword ptr [ebp - 0x26], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdau))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f1cf: jne 0x40f205 */
  if (!zf) goto L_40f205;
L_40f1d1: /* 40f1d1: and dword ptr [ebp - 0x26], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdau))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffdau), r);
  }
/* 40f1d5: cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdeu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f1d9: jne 0x40f1fd */
  if (!zf) goto L_40f1fd;
L_40f1db: /* 40f1db: and dword ptr [ebp - 0x22], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdeu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffdeu), r);
  }
/* 40f1df: cmp word ptr [ebp - 0x1e], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe2u))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f1e4: jne 0x40f1f4 */
  if (!zf) goto L_40f1f4;
L_40f1e6: /* 40f1e6: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 40f1e9: mov word ptr [ebp - 0x1e], 0x8000 */
  W16((uint32_t)(ebp + 0xffffffe2u), 0x8000u);
/* 40f1ef: jmp 0x403ea1 */
  goto L_403ea1;
L_40f1f4: /* 40f1f4: inc word ptr [ebp - 0x1e] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe2u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(ebp + 0xffffffe2u), r);
  }
/* 40f1f8: jmp 0x403ea1 */
  goto L_403ea1;
L_40f1fd: /* 40f1fd: inc dword ptr [ebp - 0x22] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdeu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdeu), r);
  }
/* 40f200: jmp 0x403ea1 */
  goto L_403ea1;
L_40f205: /* 40f205: inc dword ptr [ebp - 0x26] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdau)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdau), r);
  }
/* 40f208: jmp 0x403ea1 */
  goto L_403ea1;
L_40f20d: /* 40f20d: neg di */
  { uint16_t a = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 40f210: sbb edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* 40f212: and dword ptr [esi + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 40f216: and edi, 0x80000000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 40f21c: add edi, 0x7fff8000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7fff8000u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40f222: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 40f225: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 40f228: jmp 0x403ec7 */
  goto L_403ec7;
}

void f_403ee1(void) {
  LOAD_REGS();
L_403ee1: /* 403ee1: mov eax, dword ptr [0x44ab64] */
  eax = R32((uint32_t)(0x44ab64u));
/* 403ee6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403ee8: je 0x403eec */
  if (zf) goto L_403eec;
L_403eea: /* 403eea: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x403eecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_403eec: /* 403eec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403eed: call 0x40137f */
  esp -= 4; W32(esp, 0x403ef2u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 403ef2: mov esi, eax */
  esi = eax;
/* 403ef4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403ef6: je 0x40bcc2 */
  if (zf) goto L_40bcc2;
L_403efc: /* 403efc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403efd: call 0x401798 */
  esp -= 4; W32(esp, 0x403f02u); SPILL(); f_401798(); if (g_unwind) return; RELOAD();
/* 403f02: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403f03: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 403f07: call dword ptr [0x439040] */
  esp -= 4; W32(esp, 0x403f0du); SPILL(); call_ind(R32(0x439040u)); if (g_unwind) return; /* KERNEL32!ExitThread */ RELOAD();
/* 403f0d: jmp 0x40bccf */
  goto L_40bccf;
L_40411a: /* 40411a: mov eax, dword ptr [0x44ab60] */
  eax = R32((uint32_t)(0x44ab60u));
/* 40411f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404121: je 0x404125 */
  if (zf) goto L_404125;
L_404123: /* 404123: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x404125u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_404125: /* 404125: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 404129: push dword ptr [esi + 0x50] */
  { uint32_t v = R32((uint32_t)(esi + 0x50u)); esp -= 4; W32(esp, v); }
/* 40412c: call dword ptr [esi + 0x4c] */
  { uint32_t t = R32((uint32_t)(esi + 0x4cu)); esp -= 4; W32(esp, 0x40412fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40412f: jmp 0x40bcf9 */
  goto L_40bcf9;
L_40bcc2: /* 40bcc2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 40bcc4: call 0x40f95e */
  esp -= 4; W32(esp, 0x40bcc9u); SPILL(); f_40f95e(); if (g_unwind) return; RELOAD();
/* 40bcc9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bcca: jmp 0x403efc */
  goto L_403efc;
L_40bccf: /* 40bccf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40bcd0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 40bcd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40bcd4: push dword ptr [0x44a850] */
  { uint32_t v = R32((uint32_t)(0x44a850u)); esp -= 4; W32(esp, v); }
/* 40bcda: call dword ptr [0x439028] */
  esp -= 4; W32(esp, 0x40bce0u); SPILL(); call_ind(R32(0x439028u)); if (g_unwind) return; /* KERNEL32!TlsSetValue */ RELOAD();
/* 40bce0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bce2: jne 0x40bcec */
  if (!zf) goto L_40bcec;
L_40bce4: /* 40bce4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 40bce6: call 0x40f95e */
  esp -= 4; W32(esp, 0x40bcebu); SPILL(); f_40f95e(); if (g_unwind) return; RELOAD();
/* 40bceb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40bcec: /* 40bcec: call dword ptr [0x439024] */
  esp -= 4; W32(esp, 0x40bcf2u); SPILL(); call_ind(R32(0x439024u)); if (g_unwind) return; /* KERNEL32!GetCurrentThreadId */ RELOAD();
/* 40bcf2: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 40bcf4: jmp 0x40411a */
  goto L_40411a;
L_40bcf9: /* 40bcf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40bcfa: call 0x403ee1 */
  esp -= 4; W32(esp, 0x40bcffu); SPILL(); f_403ee1(); if (g_unwind) return; RELOAD();
/* 40bcff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bd00: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40bd04: xor eax, eax */
  eax = 0;
/* 40bd06: call 0x40105a */
  esp -= 4; W32(esp, 0x40bd0bu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 40bd0b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_403f12(void) { hle_memcpy(); }

void f_404008(void) {
  LOAD_REGS();
L_404008: /* 404008: mov eax, dword ptr [esi + ecx*4 + 8] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x8u));
/* 40400c: mov dword ptr [edi + ecx*4 + 8], eax */
  W32((uint32_t)(edi + ecx*4 + 0x8u), eax);
  SPILL(); f_404010(); return;
}

void f_404010(void) {
  LOAD_REGS();
L_404010: /* 404010: mov eax, dword ptr [esi + ecx*4 + 4] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x4u));
/* 404014: mov dword ptr [edi + ecx*4 + 4], eax */
  W32((uint32_t)(edi + ecx*4 + 0x4u), eax);
/* 404018: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 40401f: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 404021: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 404023: jmp dword ptr [edx*4 + 0x404030] */
  switch (R32((uint32_t)(edx*4 + 0x404030u))) {
    case 0x404040u: goto L_404040;
    case 0x407417u: goto L_407417;
    case 0x407424u: goto L_407424;
    case 0x407437u: goto L_407437;
    default: guest_badjump(0x404023, R32((uint32_t)(edx*4 + 0x404030u))); return;
  }
L_404040: /* 404040: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 404043: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404044: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 404045: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 404046: ret  */
  esp += 4; SPILL(); return;
L_407417: /* 407417: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 40741a: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 40741d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407420: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407421: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407422: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407423: ret  */
  esp += 4; SPILL(); return;
L_407424: /* 407424: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 407427: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 40742a: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 40742d: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407430: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407433: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407434: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407435: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407436: ret  */
  esp += 4; SPILL(); return;
L_407437: /* 407437: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 40743a: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 40743d: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 407440: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407443: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 407446: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 407449: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40744c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40744d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40744e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40744f: ret  */
  esp += 4; SPILL(); return;
}

void f_404047(void) {
  LOAD_REGS();
L_404047: /* 404047: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404048: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 40404c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40404e: je 0x404071 */
  if (zf) goto L_404071;
L_404050: /* 404050: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404051: call 0x4013b8 */
  esp -= 4; W32(esp, 0x404056u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 404056: lea eax, [eax + eax + 2] */
  eax = (uint32_t)(eax + eax + 0x2u);
/* 40405a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40405b: call 0x4010eb */
  esp -= 4; W32(esp, 0x404060u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 404060: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404062: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404063: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404064: je 0x404071 */
  if (zf) goto L_404071;
L_404066: /* 404066: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404067: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404068: call 0x4013ce */
  esp -= 4; W32(esp, 0x40406du); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 40406d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40406e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40406f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404070: ret  */
  esp += 4; SPILL(); return;
L_404071: /* 404071: xor eax, eax */
  eax = 0;
/* 404073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404074: ret  */
  esp += 4; SPILL(); return;
}

void f_40406e(void) {
  LOAD_REGS();
L_40406e: /* 40406e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40406f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404070: ret  */
  esp += 4; SPILL(); return;
}

void f_40406f(void) {
  LOAD_REGS();
L_40406f: /* 40406f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404070: ret  */
  esp += 4; SPILL(); return;
}

void f_404074(void) {
  LOAD_REGS();
L_404074: /* 404074: ret  */
  esp += 4; SPILL(); return;
}

void f_404075(void) {
  LOAD_REGS();
L_404075: /* 404075: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 404076: mov ebp, esp */
  ebp = esp;
/* 404078: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404079: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40407a: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 40407d: xor ebx, ebx */
  ebx = 0;
/* 40407f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404081: je 0x40bd2d */
  if (zf) goto L_40bd2d;
L_404087: /* 404087: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404088: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 40408d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40408f: call 0x4016cb */
  esp -= 4; W32(esp, 0x404094u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 404094: mov esi, eax */
  esi = eax;
/* 404096: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404098: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404099: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40409a: je 0x40bd4f */
  if (zf) goto L_40bd4f;
L_4040a0: /* 4040a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4040a1: call 0x40173b */
  esp -= 4; W32(esp, 0x4040a6u); SPILL(); f_40173b(); if (g_unwind) return; RELOAD();
/* 4040a6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4040a9: or dword ptr [esi + 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4040ad: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 4040b0: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 4040b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4040b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4040b6: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
/* 4040b9: je 0x40bd3f */
  if (zf) goto L_40bd3f;
L_4040bf: /* 4040bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4040c0: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4040c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4040c4: push 0x4040e2 */
  { uint32_t v = 0x4040e2u; esp -= 4; W32(esp, v); }
/* 4040c9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4040cc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4040cf: call dword ptr [0x439054] */
  esp -= 4; W32(esp, 0x4040d5u); SPILL(); call_ind(R32(0x439054u)); if (g_unwind) return; /* KERNEL32!CreateThread */ RELOAD();
/* 4040d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4040d7: je 0x40bd47 */
  if (zf) goto L_40bd47;
L_4040dd: /* 4040dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4040de: /* 4040de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4040df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4040e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4040e1: ret  */
  esp += 4; SPILL(); return;
L_40bd2d: /* 40bd2d: call 0x4102a5 */
  esp -= 4; W32(esp, 0x40bd32u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 40bd32: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 40bd38: xor eax, eax */
  eax = 0;
/* 40bd3a: jmp 0x4040de */
  goto L_4040de;
L_40bd3f: /* 40bd3f: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 40bd42: jmp 0x4040bf */
  goto L_4040bf;
L_40bd47: /* 40bd47: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40bd4du); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40bd4d: mov ebx, eax */
  ebx = eax;
L_40bd4f: /* 40bd4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40bd50: call 0x401156 */
  esp -= 4; W32(esp, 0x40bd55u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40bd55: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bd57: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bd58: je 0x40bd61 */
  if (zf) goto L_40bd61;
L_40bd5a: /* 40bd5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40bd5b: call 0x4102b7 */
  esp -= 4; W32(esp, 0x40bd60u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 40bd60: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40bd61: /* 40bd61: xor eax, eax */
  eax = 0;
/* 40bd63: jmp 0x4040dd */
  goto L_4040dd;
}

void f_4040e2(void) {
  LOAD_REGS();
L_4040e2: /* 4040e2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4040e4: push 0x43e200 */
  { uint32_t v = 0x43e200u; esp -= 4; W32(esp, v); }
/* 4040e9: call 0x40101f */
  esp -= 4; W32(esp, 0x4040eeu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4040ee: push dword ptr [0x44a850] */
  { uint32_t v = R32((uint32_t)(0x44a850u)); esp -= 4; W32(esp, v); }
/* 4040f4: call dword ptr [0x439048] */
  esp -= 4; W32(esp, 0x4040fau); SPILL(); call_ind(R32(0x439048u)); if (g_unwind) return; /* KERNEL32!TlsGetValue */ RELOAD();
/* 4040fa: mov esi, eax */
  esi = eax;
/* 4040fc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4040fe: je 0x40bcd0 */
  if (zf) goto L_40bcd0;
L_404104: /* 404104: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 404107: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 40410a: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 40410d: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 404110: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 404113: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404114: call 0x401156 */
  esp -= 4; W32(esp, 0x404119u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 404119: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40411a: /* 40411a: mov eax, dword ptr [0x44ab60] */
  eax = R32((uint32_t)(0x44ab60u));
/* 40411f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404121: je 0x404125 */
  if (zf) goto L_404125;
L_404123: /* 404123: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x404125u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_404125: /* 404125: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 404129: push dword ptr [esi + 0x50] */
  { uint32_t v = R32((uint32_t)(esi + 0x50u)); esp -= 4; W32(esp, v); }
/* 40412c: call dword ptr [esi + 0x4c] */
  { uint32_t t = R32((uint32_t)(esi + 0x4cu)); esp -= 4; W32(esp, 0x40412fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40412f: jmp 0x40bcf9 */
  goto L_40bcf9;
L_40bcd0: /* 40bcd0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 40bcd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40bcd4: push dword ptr [0x44a850] */
  { uint32_t v = R32((uint32_t)(0x44a850u)); esp -= 4; W32(esp, v); }
/* 40bcda: call dword ptr [0x439028] */
  esp -= 4; W32(esp, 0x40bce0u); SPILL(); call_ind(R32(0x439028u)); if (g_unwind) return; /* KERNEL32!TlsSetValue */ RELOAD();
/* 40bce0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bce2: jne 0x40bcec */
  if (!zf) goto L_40bcec;
L_40bce4: /* 40bce4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 40bce6: call 0x40f95e */
  esp -= 4; W32(esp, 0x40bcebu); SPILL(); f_40f95e(); if (g_unwind) return; RELOAD();
/* 40bceb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40bcec: /* 40bcec: call dword ptr [0x439024] */
  esp -= 4; W32(esp, 0x40bcf2u); SPILL(); call_ind(R32(0x439024u)); if (g_unwind) return; /* KERNEL32!GetCurrentThreadId */ RELOAD();
/* 40bcf2: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 40bcf4: jmp 0x40411a */
  goto L_40411a;
L_40bcf9: /* 40bcf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40bcfa: call 0x403ee1 */
  esp -= 4; W32(esp, 0x40bcffu); SPILL(); f_403ee1(); if (g_unwind) return; RELOAD();
/* 40bcff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bd00: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40bd04: xor eax, eax */
  eax = 0;
/* 40bd06: call 0x40105a */
  esp -= 4; W32(esp, 0x40bd0bu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 40bd0b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_404140(void) {
  LOAD_REGS();
L_404140: /* 404140: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 404142: push 0x43e248 */
  { uint32_t v = 0x43e248u; esp -= 4; W32(esp, v); }
/* 404147: call 0x40101f */
  esp -= 4; W32(esp, 0x40414cu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 40414c: mov dword ptr [ebp - 0x1c], 0x43e28c */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x43e28cu);
L_404153: /* 404153: cmp dword ptr [ebp - 0x1c], 0x43e28c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x43e28cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40415a: jb 0x40d4d8 */
  if (cf) goto L_40d4d8;
L_404160: /* 404160: call 0x40105a */
  esp -= 4; W32(esp, 0x404165u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 404165: ret  */
  esp += 4; SPILL(); return;
L_40d4d8: /* 40d4d8: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40d4dc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40d4df: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 40d4e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d4e3: je 0x40d4f0 */
  if (zf) goto L_40d4f0;
L_40d4e5: /* 40d4e5: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x40d4e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40d4e7: jmp 0x40d4f0 */
  goto L_40d4f0;
L_40d4f0: /* 40d4f0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40d4f4: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 40d4f8: jmp 0x404153 */
  goto L_404153;
}

void f_404166(void) {
  LOAD_REGS();
L_404166: /* 404166: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 40416a: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40416d: jge 0x40d520 */
  if ((sf == of)) goto L_40d520;
L_404173: /* 404173: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 404176: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404177: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40417cu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40417c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40417d: ret  */
  esp += 4; SPILL(); return;
L_40d520: /* 40d520: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 40d524: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40d527: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d528: call dword ptr [0x43903c] */
  esp -= 4; W32(esp, 0x40d52eu); SPILL(); call_ind(R32(0x43903cu)); if (g_unwind) return; /* KERNEL32!EnterCriticalSection */ RELOAD();
/* 40d52e: ret  */
  esp += 4; SPILL(); return;
}

void f_40417e(void) {
  LOAD_REGS();
L_40417e: /* 40417e: mov eax, dword ptr [0x44aba0] */
  eax = R32((uint32_t)(0x44aba0u));
/* 404183: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404187: mov esi, dword ptr [0x439044] */
  esi = R32((uint32_t)(0x439044u));
/* 40418d: je 0x404198 */
  if (zf) goto L_404198;
L_40418f: /* 40418f: cmp eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404192: jne 0x40e647 */
  if (!zf) goto L_40e647;
L_404198: /* 404198: mov eax, dword ptr [0x44ab9c] */
  eax = R32((uint32_t)(0x44ab9cu));
/* 40419d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4041a0: je 0x4041ab */
  if (zf) goto L_4041ab;
L_4041a2: /* 4041a2: cmp eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4041a5: jne 0x40e64f */
  if (!zf) goto L_40e64f;
L_4041ab: /* 4041ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4041ac: ret  */
  esp += 4; SPILL(); return;
L_40e647: /* 40e647: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e648: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x40e64au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40e64a: jmp 0x404198 */
  goto L_404198;
L_40e64f: /* 40e64f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e650: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x40e652u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40e652: jmp 0x4041ab */
  goto L_4041ab;
}

void f_4041ad(void) {
  LOAD_REGS();
L_4041ad: /* 4041ad: push dword ptr [0x44ab6c] */
  { uint32_t v = R32((uint32_t)(0x44ab6cu)); esp -= 4; W32(esp, v); }
/* 4041b3: call dword ptr [0x4391cc] */
  esp -= 4; W32(esp, 0x4041b9u); SPILL(); call_ind(R32(0x4391ccu)); if (g_unwind) return; /* KERNEL32!SetUnhandledExceptionFilter */ RELOAD();
/* 4041b9: ret  */
  esp += 4; SPILL(); return;
}

void f_4041ba(void) {
  LOAD_REGS();
L_4041ba: /* 4041ba: call 0x4041cd */
  esp -= 4; W32(esp, 0x4041bfu); SPILL(); f_4041cd(); if (g_unwind) return; RELOAD();
/* 4041bf: cmp byte ptr [0x44aba4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44aba4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4041c6: jne 0x40447b */
  if (!zf) { SPILL(); f_40447b(); return; }
L_4041cc: /* 4041cc: ret  */
  esp += 4; SPILL(); return;
}

void f_4041cd(void) {
  LOAD_REGS();
L_4041cd: /* 4041cd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4041cf: call 0x4041d6 */
  esp -= 4; W32(esp, 0x4041d4u); SPILL(); f_4041d6(); if (g_unwind) return; RELOAD();
/* 4041d4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4041d5: ret  */
  esp += 4; SPILL(); return;
}

void f_4041d6(void) {
  LOAD_REGS();
L_4041d6: /* 4041d6: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 4041d8: push 0x43e258 */
  { uint32_t v = 0x43e258u; esp -= 4; W32(esp, v); }
/* 4041dd: call 0x40101f */
  esp -= 4; W32(esp, 0x4041e2u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4041e2: xor edi, edi */
  edi = 0;
/* 4041e4: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 4041e7: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 4041ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4041ec: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4041f1u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4041f1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4041f2: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4041f5: xor esi, esi */
  esi = 0;
/* 4041f7: jmp 0x404203 */
  goto L_404203;
L_4041f9: /* 4041f9: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4041fc: jne 0x40425a */
  if (!zf) goto L_40425a;
L_4041fe: /* 4041fe: jmp 0x40d58b */
  goto L_40d58b;
L_404203: /* 404203: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 404206: cmp esi, dword ptr [0x44ab68] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44ab68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40420c: jge 0x40442a */
  if ((sf == of)) goto L_40442a;
L_404212: /* 404212: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 404217: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 40421a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40421c: jne 0x404221 */
  if (!zf) goto L_404221;
L_40421e: /* 40421e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40421f: jmp 0x404203 */
  goto L_404203;
L_404221: /* 404221: test byte ptr [eax + 0xc], 0x83 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 404225: je 0x40421e */
  if (zf) goto L_40421e;
L_404227: /* 404227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404228: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404229: call 0x404166 */
  esp -= 4; W32(esp, 0x40422eu); SPILL(); f_404166(); if (g_unwind) return; RELOAD();
/* 40422e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40422f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404230: xor edx, edx */
  edx = 0;
/* 404232: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 404233: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 404236: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 40423b: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 40423e: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 404241: test cl, 0x83 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 404244: je 0x40425a */
  if (zf) goto L_40425a;
L_404246: /* 404246: cmp dword ptr [ebp + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404249: jne 0x4041f9 */
  if (!zf) goto L_4041f9;
L_40424b: /* 40424b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40424c: call 0x404311 */
  esp -= 4; W32(esp, 0x404251u); SPILL(); f_404311(); if (g_unwind) return; RELOAD();
/* 404251: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404252: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404255: je 0x40425a */
  if (zf) goto L_40425a;
L_404257: /* 404257: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_40425a: /* 40425a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 40425d: call 0x404264 */
  esp -= 4; W32(esp, 0x404262u); SPILL(); f_404264(); if (g_unwind) return; RELOAD();
/* 404262: jmp 0x40421e */
  goto L_40421e;
L_40442a: /* 40442a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40442e: call 0x404446 */
  esp -= 4; W32(esp, 0x404433u); SPILL(); f_404446(); if (g_unwind) return; RELOAD();
/* 404433: cmp dword ptr [ebp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404437: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40443a: jne 0x40d5b6 */
  if (!zf) goto L_40d5b6;
L_404440: /* 404440: call 0x40105a */
  esp -= 4; W32(esp, 0x404445u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 404445: ret  */
  esp += 4; SPILL(); return;
L_40d58b: /* 40d58b: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40d58e: je 0x40425a */
  if (zf) goto L_40425a;
L_40d594: /* 40d594: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d595: call 0x404311 */
  esp -= 4; W32(esp, 0x40d59au); SPILL(); f_404311(); if (g_unwind) return; RELOAD();
/* 40d59a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d59b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d59e: jne 0x40425a */
  if (!zf) goto L_40425a;
L_40d5a4: /* 40d5a4: or dword ptr [ebp - 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 40d5a7: jmp 0x40425a */
  goto L_40425a;
L_40d5b6: /* 40d5b6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 40d5b9: jmp 0x404440 */
  goto L_404440;
}

void f_404264(void) {
  LOAD_REGS();
L_404264: /* 404264: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 404269: push dword ptr [eax + esi*4] */
  { uint32_t v = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, v); }
/* 40426c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40426d: call 0x404275 */
  esp -= 4; W32(esp, 0x404272u); SPILL(); f_404275(); if (g_unwind) return; RELOAD();
/* 404272: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404273: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404274: ret  */
  esp += 4; SPILL(); return;
}

void f_404275(void) {
  LOAD_REGS();
L_404275: /* 404275: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 404279: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40427c: jge 0x40d52f */
  if ((sf == of)) goto L_40d52f;
L_404282: /* 404282: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 404285: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404286: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40428bu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40428b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40428c: ret  */
  esp += 4; SPILL(); return;
L_40d52f: /* 40d52f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 40d533: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40d536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d537: call dword ptr [0x439038] */
  esp -= 4; W32(esp, 0x40d53du); SPILL(); call_ind(R32(0x439038u)); if (g_unwind) return; /* KERNEL32!LeaveCriticalSection */ RELOAD();
/* 40d53d: ret  */
  esp += 4; SPILL(); return;
}

void f_40428d(void) {
  LOAD_REGS();
L_40428d: /* 40428d: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 40428f: push 0x43e270 */
  { uint32_t v = 0x43e270u; esp -= 4; W32(esp, v); }
/* 404294: call 0x40101f */
  esp -= 4; W32(esp, 0x404299u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 404299: xor esi, esi */
  esi = 0;
/* 40429b: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 40429e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4042a0: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4042a5u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4042a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4042a6: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
L_4042a9: /* 4042a9: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 4042ac: cmp esi, dword ptr [0x44ab68] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44ab68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4042b2: jge 0x40444f */
  if ((sf == of)) goto L_40444f;
L_4042b8: /* 4042b8: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 4042bd: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 4042c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4042c2: jne 0x4042c7 */
  if (!zf) goto L_4042c7;
L_4042c4: /* 4042c4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4042c5: jmp 0x4042a9 */
  goto L_4042a9;
L_4042c7: /* 4042c7: test byte ptr [eax + 0xc], 0x83 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4042cb: je 0x4042c4 */
  if (zf) goto L_4042c4;
L_4042cd: /* 4042cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4042ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4042cf: call 0x404166 */
  esp -= 4; W32(esp, 0x4042d4u); SPILL(); f_404166(); if (g_unwind) return; RELOAD();
/* 4042d4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4042d5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4042d6: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4042dd: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 4042e2: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 4042e5: test byte ptr [eax + 0xc], 0x83 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4042e9: je 0x4042f5 */
  if (zf) goto L_4042f5;
L_4042eb: /* 4042eb: cmp dword ptr [eax + 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4042ef: jne 0x40e666 */
  if (!zf) goto L_40e666;
L_4042f5: /* 4042f5: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4042f9: call 0x404300 */
  esp -= 4; W32(esp, 0x4042feu); SPILL(); f_404300(); if (g_unwind) return; RELOAD();
/* 4042fe: jmp 0x4042c4 */
  goto L_4042c4;
L_40444f: /* 40444f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 404453: call 0x404461 */
  esp -= 4; W32(esp, 0x404458u); SPILL(); f_404461(); if (g_unwind) return; RELOAD();
/* 404458: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40445b: call 0x40105a */
  esp -= 4; W32(esp, 0x404460u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 404460: ret  */
  esp += 4; SPILL(); return;
L_40e666: /* 40e666: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e667: call 0x4143d3 */
  esp -= 4; W32(esp, 0x40e66cu); SPILL(); f_4143d3(); if (g_unwind) return; RELOAD();
/* 40e66c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e66d: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 40e670: jmp 0x4042f5 */
  goto L_4042f5;
}

void f_404300(void) {
  LOAD_REGS();
L_404300: /* 404300: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 404305: push dword ptr [eax + esi*4] */
  { uint32_t v = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, v); }
/* 404308: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404309: call 0x404275 */
  esp -= 4; W32(esp, 0x40430eu); SPILL(); f_404275(); if (g_unwind) return; RELOAD();
/* 40430e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40430f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404310: ret  */
  esp += 4; SPILL(); return;
}

void f_404311(void) {
  LOAD_REGS();
L_404311: /* 404311: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404312: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 404316: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404317: call 0x404333 */
  esp -= 4; W32(esp, 0x40431cu); SPILL(); f_404333(); if (g_unwind) return; RELOAD();
/* 40431c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40431e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40431f: jne 0x40d577 */
  if (!zf) goto L_40d577;
L_404325: /* 404325: test byte ptr [esi + 0xd], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xdu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 404329: jne 0x40d57c */
  if (!zf) goto L_40d57c;
L_40432f: /* 40432f: xor eax, eax */
  eax = 0;
/* 404331: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404332: ret  */
  esp += 4; SPILL(); return;
L_40d577: /* 40d577: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40d57a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40d57b: ret  */
  esp += 4; SPILL(); return;
L_40d57c: /* 40d57c: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 40d57f: call 0x415a2a */
  esp -= 4; W32(esp, 0x40d584u); SPILL(); f_415a2a(); if (g_unwind) return; RELOAD();
/* 40d584: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d585: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 40d587: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 40d589: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40d58a: ret  */
  esp += 4; SPILL(); return;
}

void f_404333(void) {
  LOAD_REGS();
L_404333: /* 404333: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404334: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404335: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 404339: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 40433c: mov ecx, eax */
  ecx = eax;
/* 40433e: and cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 404341: xor ebx, ebx */
  ebx = 0;
/* 404343: cmp cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 404346: jne 0x404352 */
  if (!zf) goto L_404352;
L_404348: /* 404348: test ax, 0x108 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x108u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 40434c: jne 0x40d53e */
  if (!zf) goto L_40d53e;
L_404352: /* 404352: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 404355: and dword ptr [esi + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 404359: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 40435b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40435c: mov eax, ebx */
  eax = ebx;
/* 40435e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40435f: ret  */
  esp += 4; SPILL(); return;
L_40d53e: /* 40d53e: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 40d541: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d542: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 40d544: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 40d546: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40d548: jle 0x40d571 */
  if ((zf || sf != of)) goto L_40d571;
L_40d54a: /* 40d54a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d54b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d54c: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 40d54f: call 0x41597f */
  esp -= 4; W32(esp, 0x40d554u); SPILL(); f_41597f(); if (g_unwind) return; RELOAD();
/* 40d554: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40d557: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d559: jne 0x40d56a */
  if (!zf) goto L_40d56a;
L_40d55b: /* 40d55b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 40d55e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 40d560: jns 0x40d571 */
  if (!sf) goto L_40d571;
L_40d562: /* 40d562: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40d565: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 40d568: jmp 0x40d571 */
  goto L_40d571;
L_40d56a: /* 40d56a: or dword ptr [esi + 0xc], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 40d56e: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_40d571: /* 40d571: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40d572: jmp 0x404352 */
  goto L_404352;
}

void f_404360(void) {
  LOAD_REGS();
L_404360: /* 404360: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404361: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 404363: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 404367: xor ebx, ebx */
  ebx = 0;
/* 404369: call 0x404373 */
  esp -= 4; W32(esp, 0x40436eu); SPILL(); f_404373(); if (g_unwind) return; RELOAD();
/* 40436e: jmp 0x40bba3 */
  goto L_40bba3;
L_40bba3: /* 40bba3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bba4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bba5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40bba6: ret  */
  esp += 4; SPILL(); return;
}

void f_404373(void) {
  LOAD_REGS();
  goto L_404373;
L_404134: /* 404134: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 404136: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40413bu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40413b: jmp 0x40440a */
  goto L_40440a;
L_404373: /* 404373: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404374: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 404376: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40437bu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40437b: xor esi, esi */
  esi = 0;
/* 40437d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40437e: cmp dword ptr [0x44aba8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44aba8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404384: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404385: je 0x40bb8d */
  if (zf) goto L_40bb8d;
L_40438b: /* 40438b: cmp dword ptr [esp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404390: mov dword ptr [0x44aadc], esi */
  W32((uint32_t)(0x44aadcu), esi);
/* 404396: mov byte ptr [0x44aba4], bl */
  W8((uint32_t)(0x44aba4u), (ebx & 0xffu));
/* 40439c: jne 0x4043e2 */
  if (!zf) goto L_4043e2;
L_40439e: /* 40439e: mov ecx, dword ptr [0x44ab74] */
  ecx = R32((uint32_t)(0x44ab74u));
/* 4043a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4043a6: je 0x4043d1 */
  if (zf) goto L_4043d1;
L_4043a8: /* 4043a8: mov eax, dword ptr [0x44ab70] */
  eax = R32((uint32_t)(0x44ab70u));
/* 4043ad: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4043b0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
L_4043b2: /* 4043b2: mov dword ptr [0x44ab70], eax */
  W32((uint32_t)(0x44ab70u), eax);
/* 4043b7: jb 0x4043d1 */
  if (cf) goto L_4043d1;
L_4043b9: /* 4043b9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4043bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4043bd: je 0x4043c1 */
  if (zf) goto L_4043c1;
L_4043bf: /* 4043bf: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x4043c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4043c1: /* 4043c1: mov eax, dword ptr [0x44ab70] */
  eax = R32((uint32_t)(0x44ab70u));
/* 4043c6: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4043c9: cmp eax, dword ptr [0x44ab74] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44ab74u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4043cf: jmp 0x4043b2 */
  goto L_4043b2;
L_4043d1: /* 4043d1: push 0x44ab8c */
  { uint32_t v = 0x44ab8cu; esp -= 4; W32(esp, v); }
/* 4043d6: push 0x44ab7c */
  { uint32_t v = 0x44ab7cu; esp -= 4; W32(esp, v); }
/* 4043db: call 0x4011ee */
  esp -= 4; W32(esp, 0x4043e0u); SPILL(); f_4011ee(); if (g_unwind) return; RELOAD();
/* 4043e0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4043e1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4043e2: /* 4043e2: push 0x44ab98 */
  { uint32_t v = 0x44ab98u; esp -= 4; W32(esp, v); }
/* 4043e7: push 0x44ab90 */
  { uint32_t v = 0x44ab90u; esp -= 4; W32(esp, v); }
/* 4043ec: call 0x4011ee */
  esp -= 4; W32(esp, 0x4043f1u); SPILL(); f_4011ee(); if (g_unwind) return; RELOAD();
/* 4043f1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4043f3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4043f4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4043f5: jne 0x404134 */
  if (!zf) goto L_404134;
L_4043fb: /* 4043fb: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4043ff: mov dword ptr [0x44aba8], esi */
  W32((uint32_t)(0x44aba8u), esi);
/* 404405: call 0x40440d */
  esp -= 4; W32(esp, 0x40440au); SPILL(); f_40440d(); if (g_unwind) return; RELOAD();
L_40440a: /* 40440a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40440b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40440c: ret  */
  esp += 4; SPILL(); return;
L_40bb8d: /* 40bb8d: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40bb91: call dword ptr [0x439018] */
  esp -= 4; W32(esp, 0x40bb97u); SPILL(); call_ind(R32(0x439018u)); if (g_unwind) return; /* KERNEL32!GetCurrentProcess */ RELOAD();
/* 40bb97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40bb98: call dword ptr [0x439014] */
  esp -= 4; W32(esp, 0x40bb9eu); SPILL(); call_ind(R32(0x439014u)); if (g_unwind) return; /* KERNEL32!TerminateProcess */ RELOAD();
/* 40bb9e: jmp 0x40438b */
  goto L_40438b;
}

void f_40440d(void) {
  LOAD_REGS();
L_40440d: /* 40440d: push 0x43e238 */
  { uint32_t v = 0x43e238u; esp -= 4; W32(esp, v); }
/* 404412: call dword ptr [0x439010] */
  esp -= 4; W32(esp, 0x404418u); SPILL(); call_ind(R32(0x439010u)); if (g_unwind) return; /* KERNEL32!GetModuleHandleA */ RELOAD();
/* 404418: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40441a: jne 0x40bb6e */
  if (!zf) goto L_40bb6e;
L_404420: /* 404420: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 404424: call dword ptr [0x439008] */
  esp -= 4; W32(esp, 0x40442au); SPILL(); call_ind(R32(0x439008u)); if (g_unwind) return; /* KERNEL32!ExitProcess */ RELOAD();
/* 40442a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40442e: call 0x404446 */
  esp -= 4; W32(esp, 0x404433u); SPILL(); f_404446(); if (g_unwind) return; RELOAD();
/* 404433: cmp dword ptr [ebp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404437: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40443a: jne 0x40d5b6 */
  if (!zf) goto L_40d5b6;
L_404440: /* 404440: call 0x40105a */
  esp -= 4; W32(esp, 0x404445u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 404445: ret  */
  esp += 4; SPILL(); return;
L_40bb6e: /* 40bb6e: push 0x43e594 */
  { uint32_t v = 0x43e594u; esp -= 4; W32(esp, v); }
/* 40bb73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40bb74: call dword ptr [0x43900c] */
  esp -= 4; W32(esp, 0x40bb7au); SPILL(); call_ind(R32(0x43900cu)); if (g_unwind) return; /* KERNEL32!GetProcAddress */ RELOAD();
/* 40bb7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bb7c: je 0x404420 */
  if (zf) goto L_404420;
L_40bb82: /* 40bb82: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 40bb86: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x40bb88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40bb88: jmp 0x404420 */
  goto L_404420;
L_40d5b6: /* 40d5b6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 40d5b9: jmp 0x404440 */
  goto L_404440;
}

void f_404446(void) {
  LOAD_REGS();
L_404446: /* 404446: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 404448: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40444du); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40444d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40444e: ret  */
  esp += 4; SPILL(); return;
}

void f_404461(void) {
  LOAD_REGS();
L_404461: /* 404461: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 404463: call 0x4011d9 */
  esp -= 4; W32(esp, 0x404468u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 404468: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404469: ret  */
  esp += 4; SPILL(); return;
}

void f_40446a(void) {
  LOAD_REGS();
L_40446a: /* 40446a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40446b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40446d: xor ebx, ebx */
  ebx = 0;
/* 40446f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 404471: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 404472: call 0x404373 */
  esp -= 4; W32(esp, 0x404477u); SPILL(); f_404373(); if (g_unwind) return; RELOAD();
/* 404477: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404478: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404479: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40447a: ret  */
  esp += 4; SPILL(); return;
}

void f_40447b(void) {
  LOAD_REGS();
L_40447b: /* 40447b: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 40447d: push 0x43e290 */
  { uint32_t v = 0x43e290u; esp -= 4; W32(esp, v); }
/* 404482: call 0x40101f */
  esp -= 4; W32(esp, 0x404487u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 404487: xor ebx, ebx */
  ebx = 0;
/* 404489: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 40448c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40448e: call 0x4011b7 */
  esp -= 4; W32(esp, 0x404493u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 404493: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404494: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 404497: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 404499: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40449a: jmp 0x4044b0 */
  goto L_4044b0;
L_40449c: /* 40449c: test byte ptr [eax + 0xc], 0x83 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4044a0: jne 0x40d5be */
  if (!zf) goto L_40d5be;
L_4044a6: /* 4044a6: cmp edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4044a9: jl 0x4044cc */
  if ((sf != of)) goto L_4044cc;
L_4044ab: /* 4044ab: jmp 0x40d5d6 */
  goto L_40d5d6;
L_4044b0: /* 4044b0: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 4044b3: cmp edi, dword ptr [0x44ab68] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44ab68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4044b9: jge 0x4044cf */
  if ((sf == of)) goto L_4044cf;
L_4044bb: /* 4044bb: mov esi, edi */
  esi = edi;
/* 4044bd: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 4044c0: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 4044c5: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* 4044c8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4044ca: jne 0x40449c */
  if (!zf) goto L_40449c;
L_4044cc: /* 4044cc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4044cd: jmp 0x4044b0 */
  goto L_4044b0;
L_4044cf: /* 4044cf: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4044d3: call 0x4044e1 */
  esp -= 4; W32(esp, 0x4044d8u); SPILL(); f_4044e1(); if (g_unwind) return; RELOAD();
/* 4044d8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4044db: call 0x40105a */
  esp -= 4; W32(esp, 0x4044e0u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4044e0: ret  */
  esp += 4; SPILL(); return;
L_40d5be: /* 40d5be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d5bf: call 0x41441f */
  esp -= 4; W32(esp, 0x40d5c4u); SPILL(); f_41441f(); if (g_unwind) return; RELOAD();
/* 40d5c4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d5c5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d5c8: je 0x4044a6 */
  if (zf) goto L_4044a6;
L_40d5ce: /* 40d5ce: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 40d5d1: jmp 0x4044a6 */
  goto L_4044a6;
L_40d5d6: /* 40d5d6: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 40d5db: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* 40d5de: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40d5e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d5e2: call dword ptr [0x439034] */
  esp -= 4; W32(esp, 0x40d5e8u); SPILL(); call_ind(R32(0x439034u)); if (g_unwind) return; /* KERNEL32!DeleteCriticalSection */ RELOAD();
/* 40d5e8: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 40d5ed: push dword ptr [esi + eax] */
  { uint32_t v = R32((uint32_t)(esi + eax)); esp -= 4; W32(esp, v); }
/* 40d5f0: call 0x401156 */
  esp -= 4; W32(esp, 0x40d5f5u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d5f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d5f6: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 40d5fb: mov dword ptr [esi + eax], ebx */
  W32((uint32_t)(esi + eax), ebx);
/* 40d5fe: jmp 0x4044cc */
  goto L_4044cc;
}

void f_4044e1(void) {
  LOAD_REGS();
L_4044e1: /* 4044e1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4044e3: call 0x4011d9 */
  esp -= 4; W32(esp, 0x4044e8u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 4044e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4044e9: ret  */
  esp += 4; SPILL(); return;
}

void f_4044ea(void) {
  LOAD_REGS();
L_4044ea: /* 4044ea: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4044ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4044ee: mov ebx, 0x480 */
  ebx = 0x480u;
/* 4044f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4044f4: call 0x4010eb */
  esp -= 4; W32(esp, 0x4044f9u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4044f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4044fb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4044fc: je 0x40c29c */
  if (zf) goto L_40c29c;
L_404502: /* 404502: mov dword ptr [0x449240], eax */
  W32((uint32_t)(0x449240u), eax);
/* 404507: mov dword ptr [0x44b130], 0x20 */
  W32((uint32_t)(0x44b130u), 0x20u);
/* 404511: lea ecx, [eax + 0x480] */
  ecx = (uint32_t)(eax + 0x480u);
L_404517: /* 404517: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 404519: jae 0x404e01 */
  if (!cf) goto L_404e01;
L_40451f: /* 40451f: and byte ptr [eax + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + 0x4u), r);
  }
/* 404523: or dword ptr [eax], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 404526: and dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 40452a: mov byte ptr [eax + 5], 0xa */
  W8((uint32_t)(eax + 0x5u), 0xau);
/* 40452e: mov ecx, dword ptr [0x449240] */
  ecx = R32((uint32_t)(0x449240u));
/* 404534: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 404537: add ecx, 0x480 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40453d: jmp 0x404517 */
  goto L_404517;
L_404de0: /* 404de0: push -0xa */
  { uint32_t v = 0xfffffff6u; esp -= 4; W32(esp, v); }
/* 404de2: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 404de3: jmp 0x404e40 */
  goto L_404e40;
L_404de5: /* 404de5: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 404de8: jmp 0x404e71 */
  goto L_404e71;
L_404ded: /* 404ded: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404df0: jne 0x404e8d */
  if (!zf) goto L_404e8d;
L_404df6: /* 404df6: jmp 0x40c39a */
  goto L_40c39a;
L_404dfb: /* 404dfb: or byte ptr [esi + 4], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi + 0x4u), r);
  }
/* 404dff: jmp 0x404e5d */
  goto L_404e5d;
L_404e01: /* 404e01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 404e02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404e03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 404e04: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 404e08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404e09: call dword ptr [0x4390a8] */
  esp -= 4; W32(esp, 0x404e0fu); SPILL(); call_ind(R32(0x4390a8u)); if (g_unwind) return; /* KERNEL32!GetStartupInfoA */ RELOAD();
/* 404e0f: cmp word ptr [esp + 0x46], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x46u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 404e15: jne 0x40c2a4 */
  if (!zf) goto L_40c2a4;
L_404e1b: /* 404e1b: xor ebx, ebx */
  ebx = 0;
L_404e1d: /* 404e1d: mov ecx, dword ptr [0x449240] */
  ecx = R32((uint32_t)(0x449240u));
/* 404e23: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 404e26: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 404e29: cmp dword ptr [esi], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404e2c: jne 0x404dfb */
  if (!zf) goto L_404dfb;
L_404e2e: /* 404e2e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404e30: mov byte ptr [esi + 4], 0x81 */
  W8((uint32_t)(esi + 0x4u), 0x81u);
/* 404e34: je 0x404de0 */
  if (zf) goto L_404de0;
L_404e36: /* 404e36: mov eax, ebx */
  eax = ebx;
/* 404e38: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 404e39: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 404e3b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 404e3d: add eax, -0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff5u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_404e40: /* 404e40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404e41: call dword ptr [0x439020] */
  esp -= 4; W32(esp, 0x404e47u); SPILL(); call_ind(R32(0x439020u)); if (g_unwind) return; /* KERNEL32!GetStdHandle */ RELOAD();
/* 404e47: mov edi, eax */
  edi = eax;
/* 404e49: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404e4c: je 0x404e59 */
  if (zf) goto L_404e59;
L_404e4e: /* 404e4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 404e4f: call dword ptr [0x4390a4] */
  esp -= 4; W32(esp, 0x404e55u); SPILL(); call_ind(R32(0x4390a4u)); if (g_unwind) return; /* KERNEL32!GetFileType */ RELOAD();
/* 404e55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404e57: jne 0x404e79 */
  if (!zf) goto L_404e79;
L_404e59: /* 404e59: or byte ptr [esi + 4], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi + 0x4u), r);
  }
L_404e5d: /* 404e5d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 404e5e: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 404e61: jl 0x404e1d */
  if ((sf != of)) goto L_404e1d;
L_404e63: /* 404e63: push dword ptr [0x44b130] */
  { uint32_t v = R32((uint32_t)(0x44b130u)); esp -= 4; W32(esp, v); }
/* 404e69: call dword ptr [0x4390a0] */
  esp -= 4; W32(esp, 0x404e6fu); SPILL(); call_ind(R32(0x4390a0u)); if (g_unwind) return; /* KERNEL32!SetHandleCount */ RELOAD();
/* 404e6f: xor eax, eax */
  eax = 0;
L_404e71: /* 404e71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 404e72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404e73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_404e74: /* 404e74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 404e75: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 404e78: ret  */
  esp += 4; SPILL(); return;
L_404e79: /* 404e79: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 404e7e: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404e81: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 404e83: jne 0x404ded */
  if (!zf) goto L_404ded;
L_404e89: /* 404e89: or byte ptr [esi + 4], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi + 0x4u), r);
  }
L_404e8d: /* 404e8d: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 404e90: push 0xfa0 */
  { uint32_t v = 0xfa0u; esp -= 4; W32(esp, v); }
/* 404e95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404e96: call 0x404bf7 */
  esp -= 4; W32(esp, 0x404e9bu); SPILL(); f_404bf7(); if (g_unwind) return; RELOAD();
/* 404e9b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404e9d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404e9e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404e9f: je 0x404de5 */
  if (zf) goto L_404de5;
L_404ea5: /* 404ea5: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 404ea8: jmp 0x404e5d */
  goto L_404e5d;
L_40c29c: /* 40c29c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40c29f: jmp 0x404e74 */
  goto L_404e74;
L_40c2a4: /* 40c2a4: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 40c2a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c2aa: je 0x404e1b */
  if (zf) goto L_404e1b;
L_40c2b0: /* 40c2b0: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 40c2b2: lea ebp, [eax + 4] */
  ebp = (uint32_t)(eax + 0x4u);
/* 40c2b5: lea eax, [edi + ebp] */
  eax = (uint32_t)(edi + ebp);
/* 40c2b8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 40c2bc: mov eax, 0x800 */
  eax = 0x800u;
/* 40c2c1: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40c2c3: jl 0x40c2c7 */
  if ((sf != of)) goto L_40c2c7;
L_40c2c5: /* 40c2c5: mov edi, eax */
  edi = eax;
L_40c2c7: /* 40c2c7: cmp dword ptr [0x44b130], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b130u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40c2cd: jge 0x40c31d */
  if ((sf == of)) goto L_40c31d;
L_40c2cf: /* 40c2cf: mov esi, 0x449244 */
  esi = 0x449244u;
L_40c2d4: /* 40c2d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40c2d5: call 0x4010eb */
  esp -= 4; W32(esp, 0x40c2dau); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40c2da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c2dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c2dd: je 0x40c317 */
  if (zf) goto L_40c317;
L_40c2df: /* 40c2df: add dword ptr [0x44b130], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b130u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0x44b130u), r);
  }
/* 40c2e6: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 40c2e8: lea ecx, [eax + 0x480] */
  ecx = (uint32_t)(eax + 0x480u);
/* 40c2ee: jmp 0x40c306 */
  goto L_40c306;
L_40c2f0: /* 40c2f0: and byte ptr [eax + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + 0x4u), r);
  }
/* 40c2f4: or dword ptr [eax], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 40c2f7: and dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 40c2fb: mov byte ptr [eax + 5], 0xa */
  W8((uint32_t)(eax + 0x5u), 0xau);
/* 40c2ff: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 40c301: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40c304: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_40c306: /* 40c306: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40c308: jb 0x40c2f0 */
  if (cf) goto L_40c2f0;
L_40c30a: /* 40c30a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40c30d: cmp dword ptr [0x44b130], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b130u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40c313: jl 0x40c2d4 */
  if ((sf != of)) goto L_40c2d4;
L_40c315: /* 40c315: jmp 0x40c31d */
  goto L_40c31d;
L_40c317: /* 40c317: mov edi, dword ptr [0x44b130] */
  edi = R32((uint32_t)(0x44b130u));
L_40c31d: /* 40c31d: xor ebx, ebx */
  ebx = 0;
/* 40c31f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40c321: jle 0x404e1b */
  if ((zf || sf != of)) goto L_404e1b;
L_40c327: /* 40c327: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 40c32b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 40c32d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c330: je 0x40c38a */
  if (zf) goto L_40c38a;
L_40c332: /* 40c332: mov cl, byte ptr [ebp] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 40c335: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40c338: je 0x40c38a */
  if (zf) goto L_40c38a;
L_40c33a: /* 40c33a: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40c33d: jne 0x40c34a */
  if (!zf) goto L_40c34a;
L_40c33f: /* 40c33f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c340: call dword ptr [0x4390a4] */
  esp -= 4; W32(esp, 0x40c346u); SPILL(); call_ind(R32(0x4390a4u)); if (g_unwind) return; /* KERNEL32!GetFileType */ RELOAD();
/* 40c346: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c348: je 0x40c38a */
  if (zf) goto L_40c38a;
L_40c34a: /* 40c34a: mov ecx, ebx */
  ecx = ebx;
/* 40c34c: mov eax, ebx */
  eax = ebx;
/* 40c34e: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40c351: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 40c354: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 40c357: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 40c35e: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 40c361: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 40c365: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 40c367: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 40c369: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 40c36c: mov byte ptr [esi + 4], al */
  W8((uint32_t)(esi + 0x4u), (eax & 0xffu));
/* 40c36f: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 40c372: push 0xfa0 */
  { uint32_t v = 0xfa0u; esp -= 4; W32(esp, v); }
/* 40c377: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c378: call 0x404bf7 */
  esp -= 4; W32(esp, 0x40c37du); SPILL(); f_404bf7(); if (g_unwind) return; RELOAD();
/* 40c37d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c37f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c380: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c381: je 0x404de5 */
  if (zf) goto L_404de5;
L_40c387: /* 40c387: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
L_40c38a: /* 40c38a: add dword ptr [esp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 40c38f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 40c390: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 40c391: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40c393: jl 0x40c327 */
  if ((sf != of)) goto L_40c327;
L_40c395: /* 40c395: jmp 0x404e1b */
  goto L_404e1b;
L_40c39a: /* 40c39a: or byte ptr [esi + 4], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi + 0x4u), r);
  }
/* 40c39e: jmp 0x404e8d */
  goto L_404e8d;
}

void f_40453f(void) {
  LOAD_REGS();
L_40453f: /* 40453f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 404540: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 404541: mov eax, dword ptr [0x44b118] */
  eax = R32((uint32_t)(0x44b118u));
/* 404546: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404547: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 404548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404549: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40454a: mov edi, dword ptr [0x4390d4] */
  edi = R32((uint32_t)(0x4390d4u));
/* 404550: xor ebx, ebx */
  ebx = 0;
/* 404552: xor esi, esi */
  esi = 0;
/* 404554: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404556: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 404558: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 404559: jne 0x4045e9 */
  if (!zf) goto L_4045e9;
L_40455f: /* 40455f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x404561u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 404561: mov esi, eax */
  esi = eax;
/* 404563: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404565: je 0x40c679 */
  if (zf) goto L_40c679;
L_40456b: /* 40456b: mov dword ptr [0x44b118], 1 */
  W32((uint32_t)(0x44b118u), 0x1u);
L_404575: /* 404575: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404577: je 0x40c69a */
  if (zf) goto L_40c69a;
L_40457d: /* 40457d: cmp word ptr [esi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 404580: mov eax, esi */
  eax = esi;
/* 404582: je 0x404592 */
  if (zf) goto L_404592;
L_404584: /* 404584: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 404586: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 404589: jne 0x404584 */
  if (!zf) goto L_404584;
L_40458b: /* 40458b: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40458d: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 404590: jne 0x404584 */
  if (!zf) goto L_404584;
L_404592: /* 404592: mov edi, dword ptr [0x4390d0] */
  edi = R32((uint32_t)(0x4390d0u));
/* 404598: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404599: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40459a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40459b: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40459d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40459e: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4045a0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4045a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4045a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4045a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4045a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4045a5: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 4045a9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x4045abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4045ab: mov ebp, eax */
  ebp = eax;
/* 4045ad: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4045af: je 0x4045d9 */
  if (zf) goto L_4045d9;
L_4045b1: /* 4045b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4045b2: call 0x4010eb */
  esp -= 4; W32(esp, 0x4045b7u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4045b7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4045b9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4045ba: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 4045be: je 0x4045d9 */
  if (zf) goto L_4045d9;
L_4045c0: /* 4045c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4045c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4045c2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4045c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4045c4: push dword ptr [esp + 0x24] */
  { uint32_t v = R32((uint32_t)(esp + 0x24u)); esp -= 4; W32(esp, v); }
/* 4045c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4045c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4045ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4045cb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x4045cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4045cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4045cf: je 0x40c6a7 */
  if (zf) goto L_40c6a7;
L_4045d5: /* 4045d5: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_4045d9: /* 4045d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4045da: call dword ptr [0x4390cc] */
  esp -= 4; W32(esp, 0x4045e0u); SPILL(); call_ind(R32(0x4390ccu)); if (g_unwind) return; /* KERNEL32!FreeEnvironmentStringsW */ RELOAD();
/* 4045e0: mov eax, ebx */
  eax = ebx;
L_4045e2: /* 4045e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4045e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4045e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4045e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4045e6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4045e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4045e8: ret  */
  esp += 4; SPILL(); return;
L_4045e9: /* 4045e9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4045ec: jne 0x40c6ba */
  if (!zf) goto L_40c6ba;
L_4045f2: /* 4045f2: jmp 0x404575 */
  goto L_404575;
L_40c679: /* 40c679: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40c67fu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40c67f: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c682: jne 0x40c690 */
  if (!zf) goto L_40c690;
L_40c684: /* 40c684: mov eax, ebp */
  eax = ebp;
/* 40c686: mov dword ptr [0x44b118], eax */
  W32((uint32_t)(0x44b118u), eax);
/* 40c68b: jmp 0x4045e9 */
  goto L_4045e9;
L_40c690: /* 40c690: mov eax, dword ptr [0x44b118] */
  eax = R32((uint32_t)(0x44b118u));
/* 40c695: jmp 0x4045e9 */
  goto L_4045e9;
L_40c69a: /* 40c69a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x40c69cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40c69c: mov esi, eax */
  esi = eax;
/* 40c69e: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c6a0: je 0x40c6c2 */
  if (zf) goto L_40c6c2;
L_40c6a2: /* 40c6a2: jmp 0x40457d */
  goto L_40457d;
L_40c6a7: /* 40c6a7: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40c6ab: call 0x401156 */
  esp -= 4; W32(esp, 0x40c6b0u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40c6b0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c6b1: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 40c6b5: jmp 0x4045d5 */
  goto L_4045d5;
L_40c6ba: /* 40c6ba: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c6bc: je 0x40c6c9 */
  if (zf) goto L_40c6c9;
L_40c6be: /* 40c6be: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c6c0: je 0x40c6c9 */
  if (zf) goto L_40c6c9;
L_40c6c2: /* 40c6c2: xor eax, eax */
  eax = 0;
/* 40c6c4: jmp 0x4045e2 */
  goto L_4045e2;
L_40c6c9: /* 40c6c9: call dword ptr [0x4390c8] */
  esp -= 4; W32(esp, 0x40c6cfu); SPILL(); call_ind(R32(0x4390c8u)); if (g_unwind) return; /* KERNEL32!GetEnvironmentStrings */ RELOAD();
/* 40c6cf: mov esi, eax */
  esi = eax;
/* 40c6d1: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c6d3: je 0x40c6c2 */
  if (zf) goto L_40c6c2;
L_40c6d5: /* 40c6d5: cmp byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c6d7: je 0x40c6e3 */
  if (zf) goto L_40c6e3;
L_40c6d9: /* 40c6d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40c6da: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c6dc: jne 0x40c6d9 */
  if (!zf) goto L_40c6d9;
L_40c6de: /* 40c6de: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40c6df: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c6e1: jne 0x40c6d9 */
  if (!zf) goto L_40c6d9;
L_40c6e3: /* 40c6e3: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40c6e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40c6e6: mov ebp, eax */
  ebp = eax;
/* 40c6e8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40c6e9: call 0x4010eb */
  esp -= 4; W32(esp, 0x40c6eeu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40c6ee: mov edi, eax */
  edi = eax;
/* 40c6f0: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c6f2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c6f3: jne 0x40c6f9 */
  if (!zf) goto L_40c6f9;
L_40c6f5: /* 40c6f5: xor edi, edi */
  edi = 0;
/* 40c6f7: jmp 0x40c704 */
  goto L_40c704;
L_40c6f9: /* 40c6f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40c6fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c6fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40c6fc: call 0x40126b */
  esp -= 4; W32(esp, 0x40c701u); SPILL(); hle_memcpy(); RELOAD();
/* 40c701: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_40c704: /* 40c704: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c705: call dword ptr [0x4390c4] */
  esp -= 4; W32(esp, 0x40c70bu); SPILL(); call_ind(R32(0x4390c4u)); if (g_unwind) return; /* KERNEL32!FreeEnvironmentStringsA */ RELOAD();
/* 40c70b: mov eax, edi */
  eax = edi;
/* 40c70d: jmp 0x4045e2 */
  goto L_4045e2;
}

void f_4045f4(void) {
  LOAD_REGS();
L_4045f4: /* 4045f4: mov eax, dword ptr [0x44b114] */
  eax = R32((uint32_t)(0x44b114u));
/* 4045f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4045fa: xor ebp, ebp */
  ebp = 0;
/* 4045fc: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4045fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4045ff: mov esi, dword ptr [0x4390c0] */
  esi = R32((uint32_t)(0x4390c0u));
/* 404605: jne 0x404620 */
  if (!zf) goto L_404620;
L_404607: /* 404607: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x404609u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 404609: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40460b: je 0x40c601 */
  if (zf) goto L_40c601;
L_404611: /* 404611: mov dword ptr [0x44b114], 1 */
  W32((uint32_t)(0x44b114u), 0x1u);
L_40461b: /* 40461b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x40461du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_40461d: /* 40461d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40461e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 40461f: ret  */
  esp += 4; SPILL(); return;
L_404620: /* 404620: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404623: jne 0x40c61f */
  if (!zf) goto L_40c61f;
L_404629: /* 404629: jmp 0x40461b */
  goto L_40461b;
L_40c601: /* 40c601: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40c607u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40c607: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c60a: jne 0x40c618 */
  if (!zf) goto L_40c618;
L_40c60c: /* 40c60c: mov dword ptr [0x44b114], 2 */
  W32((uint32_t)(0x44b114u), 0x2u);
/* 40c616: jmp 0x40c624 */
  goto L_40c624;
L_40c618: /* 40c618: xor eax, eax */
  eax = 0;
/* 40c61a: jmp 0x40461d */
  goto L_40461d;
L_40c61f: /* 40c61f: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c622: jne 0x40c618 */
  if (!zf) goto L_40c618;
L_40c624: /* 40c624: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40c625: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40c626: call dword ptr [0x43902c] */
  esp -= 4; W32(esp, 0x40c62cu); SPILL(); call_ind(R32(0x43902cu)); if (g_unwind) return; /* KERNEL32!GetCommandLineA */ RELOAD();
/* 40c62c: mov edi, dword ptr [0x4390bc] */
  edi = R32((uint32_t)(0x4390bcu));
/* 40c632: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40c633: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40c634: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 40c636: mov ebx, eax */
  ebx = eax;
/* 40c638: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40c639: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40c63b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40c63c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x40c63eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40c63e: mov esi, eax */
  esi = eax;
/* 40c640: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c642: jne 0x40c648 */
  if (!zf) goto L_40c648;
L_40c644: /* 40c644: xor eax, eax */
  eax = 0;
/* 40c646: jmp 0x40c672 */
  goto L_40c672;
L_40c648: /* 40c648: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 40c64b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c64c: call 0x4010eb */
  esp -= 4; W32(esp, 0x40c651u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40c651: mov ebp, eax */
  ebp = eax;
/* 40c653: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c655: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c656: je 0x40c644 */
  if (zf) goto L_40c644;
L_40c658: /* 40c658: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c659: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40c65a: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 40c65c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40c65d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40c65f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40c661: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x40c663u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40c663: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c665: jne 0x40c670 */
  if (!zf) goto L_40c670;
L_40c667: /* 40c667: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40c668: call 0x401156 */
  esp -= 4; W32(esp, 0x40c66du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40c66d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c66e: jmp 0x40c644 */
  goto L_40c644;
L_40c670: /* 40c670: mov eax, ebp */
  eax = ebp;
L_40c672: /* 40c672: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40c673: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40c674: jmp 0x40461d */
  goto L_40461d;
}

void f_40462b(void) {
  LOAD_REGS();
L_40462b: /* 40462b: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 40462d: push 0x43e320 */
  { uint32_t v = 0x43e320u; esp -= 4; W32(esp, v); }
/* 404632: call 0x40101f */
  esp -= 4; W32(esp, 0x404637u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 404637: xor ebx, ebx */
  ebx = 0;
/* 404639: cmp dword ptr [0x44b120], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b120u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40463f: jne 0x404666 */
  if (!zf) goto L_404666;
L_404641: /* 404641: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404642: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404643: xor esi, esi */
  esi = 0;
/* 404645: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 404646: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404647: push 0x43e0f4 */
  { uint32_t v = 0x43e0f4u; esp -= 4; W32(esp, v); }
/* 40464c: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 404651: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404652: call dword ptr [0x4390e4] */
  esp -= 4; W32(esp, 0x404658u); SPILL(); call_ind(R32(0x4390e4u)); if (g_unwind) return; /* KERNEL32!LCMapStringW */ RELOAD();
/* 404658: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40465a: je 0x40ca53 */
  if (zf) goto L_40ca53;
L_404660: /* 404660: mov dword ptr [0x44b120], esi */
  W32((uint32_t)(0x44b120u), esi);
L_404666: /* 404666: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 404669: jle 0x404686 */
  if ((zf || sf != of)) goto L_404686;
L_40466b: /* 40466b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 40466e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
L_404671: /* 404671: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 404672: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 404674: je 0x40467e */
  if (zf) goto L_40467e;
L_404676: /* 404676: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 404677: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404679: jne 0x404671 */
  if (!zf) goto L_404671;
L_40467b: /* 40467b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_40467e: /* 40467e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 404681: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 404683: add dword ptr [ebp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
L_404686: /* 404686: mov eax, dword ptr [0x44b120] */
  eax = R32((uint32_t)(0x44b120u));
/* 40468b: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40468e: je 0x40cb50 */
  if (zf) goto L_40cb50;
L_404694: /* 404694: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404696: je 0x40cb50 */
  if (zf) goto L_40cb50;
L_40469c: /* 40469c: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40469f: jne 0x4047d3 */
  if (!zf) goto L_4047d3;
L_4046a5: /* 4046a5: xor edi, edi */
  edi = 0;
/* 4046a7: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 4046aa: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 4046ad: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 4046b0: cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4046b3: je 0x40ca71 */
  if (zf) goto L_40ca71;
L_4046b9: /* 4046b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4046ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4046bb: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4046be: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4046c1: xor eax, eax */
  eax = 0;
/* 4046c3: cmp dword ptr [ebp + 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x24u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4046c6: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 4046c9: lea eax, [eax*8 + 1] */
  eax = (uint32_t)(eax*8 + 0x1u);
/* 4046d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4046d1: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4046d4: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x4046dau); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 4046da: mov esi, eax */
  esi = eax;
/* 4046dc: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 4046df: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4046e1: je 0x4047d3 */
  if (zf) goto L_4047d3;
L_4046e7: /* 4046e7: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4046ee: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 4046f1: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4046f4: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4046f7: call 0x4014ee */
  esp -= 4; W32(esp, 0x4046fcu); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 4046fc: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 4046ff: mov eax, esp */
  eax = esp;
/* 404701: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 404704: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 404708: cmp dword ptr [ebp - 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40470b: je 0x40ca9e */
  if (zf) goto L_40ca9e;
L_404711: /* 404711: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404712: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 404715: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 404718: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40471b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40471d: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 404720: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x404726u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 404726: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404728: je 0x4047b6 */
  if (zf) goto L_4047b6;
L_40472e: /* 40472e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40472f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404730: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404731: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 404734: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 404737: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40473a: call dword ptr [0x4390e4] */
  esp -= 4; W32(esp, 0x404740u); SPILL(); call_ind(R32(0x4390e4u)); if (g_unwind) return; /* KERNEL32!LCMapStringW */ RELOAD();
/* 404740: mov edi, eax */
  edi = eax;
/* 404742: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 404745: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404747: je 0x4047b6 */
  if (zf) goto L_4047b6;
L_404749: /* 404749: test byte ptr [ebp + 0xd], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xdu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40474d: jne 0x40cabf */
  if (!zf) goto L_40cabf;
L_404753: /* 404753: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 40475a: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 40475d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 404760: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 404763: call 0x4014ee */
  esp -= 4; W32(esp, 0x404768u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 404768: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 40476b: mov eax, esp */
  eax = esp;
/* 40476d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 404770: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 404774: cmp dword ptr [ebp - 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404777: je 0x40cb0c */
  if (zf) goto L_40cb0c;
L_40477d: /* 40477d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40477e: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 404781: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404782: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 404785: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 404788: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40478b: call dword ptr [0x4390e4] */
  esp -= 4; W32(esp, 0x404791u); SPILL(); call_ind(R32(0x4390e4u)); if (g_unwind) return; /* KERNEL32!LCMapStringW */ RELOAD();
/* 404791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404793: je 0x4047b6 */
  if (zf) goto L_4047b6;
L_404795: /* 404795: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404796: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404797: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40479a: je 0x40cb2d */
  if (zf) goto L_40cb2d;
L_4047a0: /* 4047a0: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4047a3: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
L_4047a6: /* 4047a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4047a7: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4047aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4047ab: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4047ae: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x4047b4u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 4047b4: mov edi, eax */
  edi = eax;
L_4047b6: /* 4047b6: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4047b9: jne 0x40cb34 */
  if (!zf) goto L_40cb34;
L_4047bf: /* 4047bf: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4047c2: jne 0x40cb42 */
  if (!zf) goto L_40cb42;
L_4047c8: /* 4047c8: mov eax, edi */
  eax = edi;
L_4047ca: /* 4047ca: lea esp, [ebp - 0x54] */
  esp = (uint32_t)(ebp + 0xffffffacu);
/* 4047cd: call 0x40105a */
  esp -= 4; W32(esp, 0x4047d2u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4047d2: ret  */
  esp += 4; SPILL(); return;
L_4047d3: /* 4047d3: xor eax, eax */
  eax = 0;
/* 4047d5: jmp 0x4047ca */
  goto L_4047ca;
L_40ca53: /* 40ca53: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40ca59u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40ca59: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ca5c: jne 0x404666 */
  if (!zf) goto L_404666;
L_40ca62: /* 40ca62: mov dword ptr [0x44b120], 2 */
  W32((uint32_t)(0x44b120u), 0x2u);
/* 40ca6c: jmp 0x404666 */
  goto L_404666;
L_40ca71: /* 40ca71: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 40ca76: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 40ca79: jmp 0x4046b9 */
  goto L_4046b9;
L_40ca9e: /* 40ca9e: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 40caa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40caa2: call 0x4010eb */
  esp -= 4; W32(esp, 0x40caa7u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40caa7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40caa8: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 40caab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40caad: je 0x4047d3 */
  if (zf) goto L_4047d3;
L_40cab3: /* 40cab3: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 40caba: jmp 0x404711 */
  goto L_404711;
L_40cabf: /* 40cabf: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cac2: je 0x4047b6 */
  if (zf) goto L_4047b6;
L_40cac8: /* 40cac8: cmp edi, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40cacb: jg 0x4047b6 */
  if ((!zf && sf == of)) goto L_4047b6;
L_40cad1: /* 40cad1: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 40cad4: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40cad7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cad8: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40cadb: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40cade: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40cae1: call dword ptr [0x4390e4] */
  esp -= 4; W32(esp, 0x40cae7u); SPILL(); call_ind(R32(0x4390e4u)); if (g_unwind) return; /* KERNEL32!LCMapStringW */ RELOAD();
/* 40cae7: jmp 0x4047b6 */
  goto L_4047b6;
L_40cb0c: /* 40cb0c: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 40cb0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cb10: call 0x4010eb */
  esp -= 4; W32(esp, 0x40cb15u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40cb15: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cb16: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 40cb19: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cb1b: je 0x4047b6 */
  if (zf) goto L_4047b6;
L_40cb21: /* 40cb21: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 40cb28: jmp 0x40477d */
  goto L_40477d;
L_40cb2d: /* 40cb2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cb2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cb2f: jmp 0x4047a6 */
  goto L_4047a6;
L_40cb34: /* 40cb34: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 40cb37: call 0x401156 */
  esp -= 4; W32(esp, 0x40cb3cu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cb3c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cb3d: jmp 0x4047bf */
  goto L_4047bf;
L_40cb42: /* 40cb42: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40cb45: call 0x401156 */
  esp -= 4; W32(esp, 0x40cb4au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cb4a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cb4b: jmp 0x4047c8 */
  goto L_4047c8;
L_40cb50: /* 40cb50: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 40cb53: xor edi, edi */
  edi = 0;
/* 40cb55: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 40cb58: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cb5b: jne 0x40cb65 */
  if (!zf) goto L_40cb65;
L_40cb5d: /* 40cb5d: mov eax, dword ptr [0x449220] */
  eax = R32((uint32_t)(0x449220u));
/* 40cb62: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_40cb65: /* 40cb65: cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cb68: jne 0x40cb72 */
  if (!zf) goto L_40cb72;
L_40cb6a: /* 40cb6a: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 40cb6f: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
L_40cb72: /* 40cb72: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40cb75: call 0x4136de */
  esp -= 4; W32(esp, 0x40cb7au); SPILL(); f_4136de(); if (g_unwind) return; RELOAD();
/* 40cb7a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cb7b: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 40cb7e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cb81: je 0x4047d3 */
  if (zf) goto L_4047d3;
L_40cb87: /* 40cb87: cmp eax, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cb8a: je 0x40cc82 */
  if (zf) goto L_40cc82;
L_40cb90: /* 40cb90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cb91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cb92: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 40cb95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40cb96: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40cb99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cb9a: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 40cb9d: call 0x413727 */
  esp -= 4; W32(esp, 0x40cba2u); SPILL(); f_413727(); if (g_unwind) return; RELOAD();
/* 40cba2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40cba5: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 40cba8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cbaa: je 0x4047d3 */
  if (zf) goto L_4047d3;
L_40cbb0: /* 40cbb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cbb1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cbb2: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40cbb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cbb6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40cbb9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40cbbc: call dword ptr [0x4390e0] */
  esp -= 4; W32(esp, 0x40cbc2u); SPILL(); call_ind(R32(0x4390e0u)); if (g_unwind) return; /* KERNEL32!LCMapStringA */ RELOAD();
/* 40cbc2: mov esi, eax */
  esi = eax;
/* 40cbc4: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 40cbc7: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cbc9: je 0x40cc71 */
  if (zf) goto L_40cc71;
L_40cbcf: /* 40cbcf: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 40cbd2: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40cbd5: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40cbd8: call 0x4014ee */
  esp -= 4; W32(esp, 0x40cbddu); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 40cbdd: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 40cbe0: mov edi, esp */
  edi = esp;
/* 40cbe2: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* 40cbe5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cbe6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cbe7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40cbe8: call 0x4010fd */
  esp -= 4; W32(esp, 0x40cbedu); SPILL(); hle_memset(); RELOAD();
/* 40cbed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40cbf0: jmp 0x40cc02 */
  goto L_40cc02;
L_40cc02: /* 40cc02: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40cc06: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cc08: jne 0x40cc2d */
  if (!zf) goto L_40cc2d;
L_40cc0a: /* 40cc0a: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 40cc0d: call 0x4010eb */
  esp -= 4; W32(esp, 0x40cc12u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40cc12: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cc13: mov edi, eax */
  edi = eax;
/* 40cc15: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cc17: je 0x40cc4a */
  if (zf) goto L_40cc4a;
L_40cc19: /* 40cc19: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 40cc1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cc1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40cc1e: call 0x4010fd */
  esp -= 4; W32(esp, 0x40cc23u); SPILL(); hle_memset(); RELOAD();
/* 40cc23: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40cc26: mov dword ptr [ebp - 0x38], 1 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x1u);
L_40cc2d: /* 40cc2d: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 40cc30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40cc31: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40cc34: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 40cc37: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40cc3a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40cc3d: call dword ptr [0x4390e0] */
  esp -= 4; W32(esp, 0x40cc43u); SPILL(); call_ind(R32(0x4390e0u)); if (g_unwind) return; /* KERNEL32!LCMapStringA */ RELOAD();
/* 40cc43: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 40cc46: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cc48: jne 0x40cc4e */
  if (!zf) goto L_40cc4e;
L_40cc4a: /* 40cc4a: xor esi, esi */
  esi = 0;
/* 40cc4c: jmp 0x40cc74 */
  goto L_40cc74;
L_40cc4e: /* 40cc4e: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 40cc51: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40cc54: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 40cc57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cc58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40cc59: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 40cc5c: push dword ptr [ebp - 0x3c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc4u)); esp -= 4; W32(esp, v); }
/* 40cc5f: call 0x413727 */
  esp -= 4; W32(esp, 0x40cc64u); SPILL(); f_413727(); if (g_unwind) return; RELOAD();
/* 40cc64: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40cc67: mov esi, eax */
  esi = eax;
/* 40cc69: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 40cc6b: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 40cc6d: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 40cc6f: jmp 0x40cc74 */
  goto L_40cc74;
L_40cc71: /* 40cc71: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
L_40cc74: /* 40cc74: cmp dword ptr [ebp - 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cc77: je 0x40cc9c */
  if (zf) goto L_40cc9c;
L_40cc79: /* 40cc79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40cc7a: call 0x401156 */
  esp -= 4; W32(esp, 0x40cc7fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cc7f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cc80: jmp 0x40cc9c */
  goto L_40cc9c;
L_40cc82: /* 40cc82: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 40cc85: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40cc88: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40cc8b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40cc8e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40cc91: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40cc94: call dword ptr [0x4390e0] */
  esp -= 4; W32(esp, 0x40cc9au); SPILL(); call_ind(R32(0x4390e0u)); if (g_unwind) return; /* KERNEL32!LCMapStringA */ RELOAD();
/* 40cc9a: mov esi, eax */
  esi = eax;
L_40cc9c: /* 40cc9c: cmp dword ptr [ebp - 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cc9f: je 0x40ccaa */
  if (zf) goto L_40ccaa;
L_40cca1: /* 40cca1: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 40cca4: call 0x401156 */
  esp -= 4; W32(esp, 0x40cca9u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cca9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40ccaa: /* 40ccaa: mov eax, esi */
  eax = esi;
/* 40ccac: jmp 0x4047ca */
  goto L_4047ca;
}

void f_4047d3(void) {
  LOAD_REGS();
  goto L_4047d3;
L_4047ca: /* 4047ca: lea esp, [ebp - 0x54] */
  esp = (uint32_t)(ebp + 0xffffffacu);
/* 4047cd: call 0x40105a */
  esp -= 4; W32(esp, 0x4047d2u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4047d2: ret  */
  esp += 4; SPILL(); return;
L_4047d3: /* 4047d3: xor eax, eax */
  eax = 0;
/* 4047d5: jmp 0x4047ca */
  goto L_4047ca;
}

void f_4047f2(void) {
  LOAD_REGS();
L_4047f2: /* 4047f2: mov eax, 0x432462 */
  eax = 0x432462u;
/* 4047f7: mov dword ptr [0x44afa0], eax */
  W32((uint32_t)(0x44afa0u), eax);
/* 4047fc: mov dword ptr [0x44afa4], 0x4320dc */
  W32((uint32_t)(0x44afa4u), 0x4320dcu);
/* 404806: mov dword ptr [0x44afa8], 0x432141 */
  W32((uint32_t)(0x44afa8u), 0x432141u);
/* 404810: mov dword ptr [0x44afac], 0x4320a0 */
  W32((uint32_t)(0x44afacu), 0x4320a0u);
/* 40481a: mov dword ptr [0x44afb0], 0x432127 */
  W32((uint32_t)(0x44afb0u), 0x432127u);
/* 404824: mov dword ptr [0x44afb4], eax */
  W32((uint32_t)(0x44afb4u), eax);
/* 404829: ret  */
  esp += 4; SPILL(); return;
}

void f_40482a(void) {
  LOAD_REGS();
L_40482a: /* 40482a: push 0x43e370 */
  { uint32_t v = 0x43e370u; esp -= 4; W32(esp, v); }
/* 40482f: call dword ptr [0x439010] */
  esp -= 4; W32(esp, 0x404835u); SPILL(); call_ind(R32(0x439010u)); if (g_unwind) return; /* KERNEL32!GetModuleHandleA */ RELOAD();
/* 404835: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404837: je 0x434219 */
  if (zf) goto L_434219;
L_40483d: /* 40483d: push 0x43e354 */
  { uint32_t v = 0x43e354u; esp -= 4; W32(esp, v); }
/* 404842: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404843: call dword ptr [0x43900c] */
  esp -= 4; W32(esp, 0x404849u); SPILL(); call_ind(R32(0x43900cu)); if (g_unwind) return; /* KERNEL32!GetProcAddress */ RELOAD();
/* 404849: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40484b: je 0x434219 */
  if (zf) goto L_434219;
L_404851: /* 404851: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 404853: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x404855u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 404855: ret  */
  esp += 4; SPILL(); return;
L_434219: /* 434219: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43421a: mov ebp, esp */
  ebp = esp;
/* 43421c: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 43421f: fld qword ptr [0x441348] */
  { double v = F64((uint32_t)(0x441348u)); FPUSH(v); }
/* 434225: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 434228: fld qword ptr [0x441340] */
  { double v = F64((uint32_t)(0x441340u)); FPUSH(v); }
/* 43422e: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 434231: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 434234: fdiv qword ptr [ebp - 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 434237: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 43423a: fsubr qword ptr [ebp - 0x10] */
  ST0 = (F64((uint32_t)(ebp + 0xfffffff0u))) - ST0;
/* 43423d: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 434240: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 434243: fcomp qword ptr [0x441208] */
  fpu_com(ST0, F64((uint32_t)(0x441208u)));
  FPOP();
/* 434249: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 43424b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43424e: jne 0x434255 */
  if (!zf) goto L_434255;
L_434250: /* 434250: xor eax, eax */
  eax = 0;
/* 434252: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 434253: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 434254: ret  */
  esp += 4; SPILL(); return;
L_434255: /* 434255: xor eax, eax */
  eax = 0;
/* 434257: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 434258: ret  */
  esp += 4; SPILL(); return;
}

void f_404856(void) {
  LOAD_REGS();
L_404856: /* 404856: xor eax, eax */
  eax = 0;
/* 404858: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40485b: je 0x404860 */
  if (zf) goto L_404860;
L_40485d: /* 40485d: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 40485f: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
L_404860: /* 404860: test bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 404863: je 0x404868 */
  if (zf) goto L_404868;
L_404865: /* 404865: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_404868: /* 404868: test bl, 8 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40486b: je 0x404870 */
  if (zf) goto L_404870;
L_40486d: /* 40486d: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_404870: /* 404870: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 404873: je 0x404878 */
  if (zf) goto L_404878;
L_404875: /* 404875: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_404878: /* 404878: test bl, 0x20 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40487b: je 0x404880 */
  if (zf) goto L_404880;
L_40487d: /* 40487d: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_404880: /* 404880: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 404883: je 0x40488a */
  if (zf) goto L_40488a;
L_404885: /* 404885: or eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_40488a: /* 40488a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40488b: movzx edx, bx */
  edx = (uint32_t)((ebx & 0xffffu));
/* 40488e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40488f: mov ecx, edx */
  ecx = edx;
/* 404891: mov esi, 0xc00 */
  esi = 0xc00u;
/* 404896: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 404898: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 404899: mov edi, 0x300 */
  edi = 0x300u;
/* 40489e: mov ebp, 0x200 */
  ebp = 0x200u;
/* 4048a3: jne 0x40d941 */
  if (!zf) goto L_40d941;
L_4048a9: /* 4048a9: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 4048ab: je 0x4048c3 */
  if (zf) goto L_4048c3;
L_4048ad: /* 4048ad: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4048af: jne 0x4048b6 */
  if (!zf) goto L_4048b6;
L_4048b1: /* 4048b1: or eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4048b6: /* 4048b6: test bh, 0x10 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4048b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4048ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4048bb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4048bc: jne 0x40d971 */
  if (!zf) goto L_40d971;
L_4048c2: /* 4048c2: ret  */
  esp += 4; SPILL(); return;
L_4048c3: /* 4048c3: or eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4048c8: jmp 0x4048b6 */
  goto L_4048b6;
L_40d941: /* 40d941: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d947: je 0x40d967 */
  if (zf) goto L_40d967;
L_40d949: /* 40d949: cmp ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d94f: je 0x40d960 */
  if (zf) goto L_40d960;
L_40d951: /* 40d951: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d953: jne 0x4048a9 */
  if (!zf) goto L_4048a9;
L_40d959: /* 40d959: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40d95b: jmp 0x4048a9 */
  goto L_4048a9;
L_40d960: /* 40d960: or eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40d962: jmp 0x4048a9 */
  goto L_4048a9;
L_40d967: /* 40d967: or eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40d96c: jmp 0x4048a9 */
  goto L_4048a9;
L_40d971: /* 40d971: or eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40d976: jmp 0x4048c2 */
  goto L_4048c2;
}

void f_4048ca(void) {
  LOAD_REGS();
L_4048ca: /* 4048ca: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 4048cf: call 0x4010eb */
  esp -= 4; W32(esp, 0x4048d4u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4048d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4048d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4048d7: mov dword ptr [0x44ab74], eax */
  W32((uint32_t)(0x44ab74u), eax);
/* 4048dc: je 0x40c5dd */
  if (zf) goto L_40c5dd;
L_4048e2: /* 4048e2: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 4048e5: mov eax, dword ptr [0x44ab74] */
  eax = R32((uint32_t)(0x44ab74u));
/* 4048ea: mov dword ptr [0x44ab70], eax */
  W32((uint32_t)(0x44ab70u), eax);
/* 4048ef: xor eax, eax */
  eax = 0;
/* 4048f1: ret  */
  esp += 4; SPILL(); return;
L_40c5dd: /* 40c5dd: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 40c5df: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40c5e0: ret  */
  esp += 4; SPILL(); return;
}

void f_4048f2(void) {
  LOAD_REGS();
L_4048f2: /* 4048f2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4048f3: mov ebp, esp */
  ebp = esp;
/* 4048f5: sub esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  esp = r;
  }
/* 4048f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4048f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4048fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4048fb: pushfd  */
  { uint32_t v = (of << 11) | (DF << 10) | (sf << 7) | (zf << 6) | (pf << 2) | 2 | cf; esp -= 4; W32(esp, v); }
/* 4048fc: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4048fd: mov ecx, eax */
  ecx = eax;
/* 4048ff: xor eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 404904: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404905: popfd  */
  { uint32_t v = R32(esp); esp += 4; cf = v & 1; pf = (v >> 2) & 1; zf = (v >> 6) & 1; sf = (v >> 7) & 1; DF = (v >> 10) & 1; of = (v >> 11) & 1; }
/* 404906: pushfd  */
  { uint32_t v = (of << 11) | (DF << 10) | (sf << 7) | (zf << 6) | (pf << 2) | 2 | cf; esp -= 4; W32(esp, v); }
/* 404907: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 404908: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* 40490a: je 0x404915 */
  if (zf) goto L_404915;
L_40490c: /* 40490c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40490d: popfd  */
  { uint32_t v = R32(esp); esp += 4; cf = v & 1; pf = (v >> 2) & 1; zf = (v >> 6) & 1; sf = (v >> 7) & 1; DF = (v >> 10) & 1; of = (v >> 11) & 1; }
/* 40490e: mov eax, 1 */
  eax = 0x1u;
/* 404913: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
L_404915: /* 404915: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 404918: and dword ptr [0x44b150], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b150u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44b150u), r);
  }
/* 40491f: and dword ptr [0x44b14c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b14cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44b14cu), r);
  }
/* 404926: test byte ptr [ebp - 1], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40492a: jne 0x40f24e */
  if (!zf) goto L_40f24e;
L_404930: /* 404930: xor eax, eax */
  eax = 0;
/* 404932: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404933: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 404934: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 404935: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 404936: ret  */
  esp += 4; SPILL(); return;
L_40f24e: /* 40f24e: call 0x433e8d */
  esp -= 4; W32(esp, 0x40f253u); SPILL(); f_433e8d(); if (g_unwind) return; RELOAD();
/* 40f253: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f255: je 0x404930 */
  if (zf) goto L_404930;
L_40f25b: /* 40f25b: xor eax, eax */
  eax = 0;
/* 40f25d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f25e: mov dword ptr [0x44b150], eax */
  W32((uint32_t)(0x44b150u), eax);
/* 40f263: mov dword ptr [0x44b14c], eax */
  W32((uint32_t)(0x44b14cu), eax);
/* 40f268: jmp 0x404930 */
  goto L_404930;
}

void f_404937(void) {
  LOAD_REGS();
L_404937: /* 404937: push 0x420dad */
  { uint32_t v = 0x420dadu; esp -= 4; W32(esp, v); }
/* 40493c: call dword ptr [0x4391cc] */
  esp -= 4; W32(esp, 0x404942u); SPILL(); call_ind(R32(0x4391ccu)); if (g_unwind) return; /* KERNEL32!SetUnhandledExceptionFilter */ RELOAD();
/* 404942: mov dword ptr [0x44ab6c], eax */
  W32((uint32_t)(0x44ab6cu), eax);
/* 404947: xor eax, eax */
  eax = 0;
/* 404949: ret  */
  esp += 4; SPILL(); return;
}

void f_40494a(void) {
  LOAD_REGS();
L_40494a: /* 40494a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40494b: push dword ptr [0x44ab74] */
  { uint32_t v = R32((uint32_t)(0x44ab74u)); esp -= 4; W32(esp, v); }
/* 404951: call 0x40143b */
  esp -= 4; W32(esp, 0x404956u); SPILL(); f_40143b(); if (g_unwind) return; RELOAD();
/* 404956: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404957: mov ecx, dword ptr [0x44ab70] */
  ecx = R32((uint32_t)(0x44ab70u));
/* 40495d: mov esi, eax */
  esi = eax;
/* 40495f: mov eax, dword ptr [0x44ab74] */
  eax = R32((uint32_t)(0x44ab74u));
/* 404964: mov edx, ecx */
  edx = ecx;
/* 404966: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 404968: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40496b: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40496d: jb 0x40c58a */
  if (cf) goto L_40c58a;
L_404973: /* 404973: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 404975: add dword ptr [0x44ab70], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ab70u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0x44ab70u), r);
  }
/* 40497c: mov eax, edi */
  eax = edi;
/* 40497e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40497f: ret  */
  esp += 4; SPILL(); return;
L_40c58a: /* 40c58a: mov ecx, 0x800 */
  ecx = 0x800u;
/* 40c58f: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40c591: jae 0x40c595 */
  if (!cf) goto L_40c595;
L_40c593: /* 40c593: mov ecx, esi */
  ecx = esi;
L_40c595: /* 40c595: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40c597: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40c598: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c599: call 0x401c76 */
  esp -= 4; W32(esp, 0x40c59eu); SPILL(); f_401c76(); if (g_unwind) return; RELOAD();
/* 40c59e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c5a0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c5a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c5a2: jne 0x40c5bb */
  if (!zf) goto L_40c5bb;
L_40c5a4: /* 40c5a4: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40c5a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c5a8: push dword ptr [0x44ab74] */
  { uint32_t v = R32((uint32_t)(0x44ab74u)); esp -= 4; W32(esp, v); }
/* 40c5ae: call 0x401c76 */
  esp -= 4; W32(esp, 0x40c5b3u); SPILL(); f_401c76(); if (g_unwind) return; RELOAD();
/* 40c5b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c5b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c5b6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c5b7: jne 0x40c5bb */
  if (!zf) goto L_40c5bb;
L_40c5b9: /* 40c5b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40c5ba: ret  */
  esp += 4; SPILL(); return;
L_40c5bb: /* 40c5bb: mov ecx, dword ptr [0x44ab70] */
  ecx = R32((uint32_t)(0x44ab70u));
/* 40c5c1: sub ecx, dword ptr [0x44ab74] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44ab74u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 40c5c7: mov dword ptr [0x44ab74], eax */
  W32((uint32_t)(0x44ab74u), eax);
/* 40c5cc: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 40c5cf: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 40c5d2: mov dword ptr [0x44ab70], ecx */
  W32((uint32_t)(0x44ab70u), ecx);
/* 40c5d8: jmp 0x404973 */
  goto L_404973;
}

void f_404980(void) {
  LOAD_REGS();
L_404980: /* 404980: mov eax, 0x449214 */
  eax = 0x449214u;
/* 404985: ret  */
  esp += 4; SPILL(); return;
}

void f_404986(void) {
  LOAD_REGS();
L_404986: /* 404986: mov eax, 0x449238 */
  eax = 0x449238u;
/* 40498b: ret  */
  esp += 4; SPILL(); return;
}

void f_4049a5(void) {
  LOAD_REGS();
  goto L_4049a5;
L_40498c: /* 40498c: or byte ptr [eax + 0x449341], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x449341u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax + 0x449341u), r);
  }
/* 404993: mov cl, byte ptr [ebp + eax - 0x318] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + eax + 0xfffffce8u))) & 0xffu);
L_40499a: /* 40499a: mov byte ptr [eax + 0x449460], cl */
  W8((uint32_t)(eax + 0x449460u), (ecx & 0xffu));
/* 4049a0: jmp 0x404a8a */
  goto L_404a8a;
L_4049a5: /* 4049a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4049a6: mov ebp, esp */
  ebp = esp;
/* 4049a8: sub esp, 0x518 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x518u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4049ae: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4049b3: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4049b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4049b7: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4049ba: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4049bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4049be: push dword ptr [0x44b13c] */
  { uint32_t v = R32((uint32_t)(0x44b13cu)); esp -= 4; W32(esp, v); }
/* 4049c4: call dword ptr [0x4390b4] */
  esp -= 4; W32(esp, 0x4049cau); SPILL(); call_ind(R32(0x4390b4u)); if (g_unwind) return; /* KERNEL32!GetCPInfo */ RELOAD();
/* 4049ca: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4049cd: mov esi, 0x100 */
  esi = 0x100u;
/* 4049d2: jne 0x40c3de */
  if (!zf) goto L_40c3de;
L_4049d8: /* 4049d8: xor eax, eax */
  eax = 0;
L_4049da: /* 4049da: mov byte ptr [ebp + eax - 0x118], al */
  W8((uint32_t)(ebp + eax + 0xfffffee8u), (eax & 0xffu));
/* 4049e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4049e2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4049e4: jb 0x4049da */
  if (cf) goto L_4049da;
L_4049e6: /* 4049e6: mov al, byte ptr [ebp - 0x12] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffeeu))) & 0xffu);
/* 4049e9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4049eb: mov byte ptr [ebp - 0x118], 0x20 */
  W8((uint32_t)(ebp + 0xfffffee8u), 0x20u);
/* 4049f2: jne 0x40c3a3 */
  if (!zf) goto L_40c3a3;
L_4049f8: /* 4049f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4049fa: push dword ptr [0x44b134] */
  { uint32_t v = R32((uint32_t)(0x44b134u)); esp -= 4; W32(esp, v); }
/* 404a00: lea eax, [ebp - 0x518] */
  eax = (uint32_t)(ebp + 0xfffffae8u);
/* 404a06: push dword ptr [0x44b13c] */
  { uint32_t v = R32((uint32_t)(0x44b13cu)); esp -= 4; W32(esp, v); }
/* 404a0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404a0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404a0e: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 404a14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404a15: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 404a17: call 0x40528d */
  esp -= 4; W32(esp, 0x404a1cu); SPILL(); f_40528d(); if (g_unwind) return; RELOAD();
/* 404a1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 404a1e: push dword ptr [0x44b13c] */
  { uint32_t v = R32((uint32_t)(0x44b13cu)); esp -= 4; W32(esp, v); }
/* 404a24: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 404a2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404a2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404a2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404a2d: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 404a33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404a34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404a35: push dword ptr [0x44b134] */
  { uint32_t v = R32((uint32_t)(0x44b134u)); esp -= 4; W32(esp, v); }
/* 404a3b: call 0x40462b */
  esp -= 4; W32(esp, 0x404a40u); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 404a40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 404a42: push dword ptr [0x44b13c] */
  { uint32_t v = R32((uint32_t)(0x44b13cu)); esp -= 4; W32(esp, v); }
/* 404a48: lea eax, [ebp - 0x318] */
  eax = (uint32_t)(ebp + 0xfffffce8u);
/* 404a4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404a4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404a50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404a51: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 404a57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404a58: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 404a5d: push dword ptr [0x44b134] */
  { uint32_t v = R32((uint32_t)(0x44b134u)); esp -= 4; W32(esp, v); }
/* 404a63: call 0x40462b */
  esp -= 4; W32(esp, 0x404a68u); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 404a68: add esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 404a6b: xor eax, eax */
  eax = 0;
L_404a6d: /* 404a6d: mov cx, word ptr [ebp + eax*2 - 0x518] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + eax*2 + 0xfffffae8u))) & 0xffffu);
/* 404a75: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 404a78: jne 0x404a9d */
  if (!zf) goto L_404a9d;
L_404a7a: /* 404a7a: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 404a7d: jne 0x40498c */
  if (!zf) goto L_40498c;
L_404a83: /* 404a83: and byte ptr [eax + 0x449460], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x449460u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + 0x449460u), r);
  }
L_404a8a: /* 404a8a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 404a8b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 404a8d: jb 0x404a6d */
  if (cf) goto L_404a6d;
L_404a8f: /* 404a8f: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 404a92: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 404a95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404a96: call 0x4013ab */
  esp -= 4; W32(esp, 0x404a9bu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 404a9b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 404a9c: ret  */
  esp += 4; SPILL(); return;
L_404a9d: /* 404a9d: or byte ptr [eax + 0x449341], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x449341u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax + 0x449341u), r);
  }
/* 404aa4: mov cl, byte ptr [ebp + eax - 0x218] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + eax + 0xfffffde8u))) & 0xffu);
/* 404aab: jmp 0x40499a */
  goto L_40499a;
L_40c3a3: /* 40c3a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40c3a4: lea edx, [ebp - 0x11] */
  edx = (uint32_t)(ebp + 0xffffffefu);
/* 40c3a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_40c3a8: /* 40c3a8: movzx ecx, byte ptr [edx] */
  ecx = (uint32_t)(R8((uint32_t)(edx)));
/* 40c3ab: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 40c3ae: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40c3b0: ja 0x40c3cf */
  if ((!cf && !zf)) goto L_40c3cf;
L_40c3b2: /* 40c3b2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 40c3b4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40c3b5: mov ebx, ecx */
  ebx = ecx;
/* 40c3b7: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 40c3ba: lea edi, [ebp + eax - 0x118] */
  edi = (uint32_t)(ebp + eax + 0xfffffee8u);
/* 40c3c1: mov eax, 0x20202020 */
  eax = 0x20202020u;
/* 40c3c6: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 40c3c8: mov ecx, ebx */
  ecx = ebx;
/* 40c3ca: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 40c3cd: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
L_40c3cf: /* 40c3cf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40c3d0: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 40c3d2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40c3d3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40c3d5: jne 0x40c3a8 */
  if (!zf) goto L_40c3a8;
L_40c3d7: /* 40c3d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40c3d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40c3d9: jmp 0x4049f8 */
  goto L_4049f8;
L_40c3de: /* 40c3de: xor eax, eax */
  eax = 0;
L_40c3e0: /* 40c3e0: cmp eax, 0x41 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40c3e3: jb 0x40c3fe */
  if (cf) goto L_40c3fe;
L_40c3e5: /* 40c3e5: cmp eax, 0x5a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40c3e8: ja 0x40c3fe */
  if ((!cf && !zf)) goto L_40c3fe;
L_40c3ea: /* 40c3ea: or byte ptr [eax + 0x449341], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x449341u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax + 0x449341u), r);
  }
/* 40c3f1: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 40c3f3: add cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_40c3f6: /* 40c3f6: mov byte ptr [eax + 0x449460], cl */
  W8((uint32_t)(eax + 0x449460u), (ecx & 0xffu));
/* 40c3fc: jmp 0x40c41d */
  goto L_40c41d;
L_40c3fe: /* 40c3fe: cmp eax, 0x61 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40c401: jb 0x40c416 */
  if (cf) goto L_40c416;
L_40c403: /* 40c403: cmp eax, 0x7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40c406: ja 0x40c416 */
  if ((!cf && !zf)) goto L_40c416;
L_40c408: /* 40c408: or byte ptr [eax + 0x449341], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x449341u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax + 0x449341u), r);
  }
/* 40c40f: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 40c411: sub cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40c414: jmp 0x40c3f6 */
  goto L_40c3f6;
L_40c416: /* 40c416: and byte ptr [eax + 0x449460], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x449460u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + 0x449460u), r);
  }
L_40c41d: /* 40c41d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40c41e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40c420: jb 0x40c3e0 */
  if (cf) goto L_40c3e0;
L_40c422: /* 40c422: jmp 0x404a8f */
  goto L_404a8f;
}

void f_404ab0(void) {
  LOAD_REGS();
  goto L_404ab0;
L_4047d7: /* 4047d7: push dword ptr [0x44aae4] */
  { uint32_t v = R32((uint32_t)(0x44aae4u)); esp -= 4; W32(esp, v); }
/* 4047dd: call 0x401156 */
  esp -= 4; W32(esp, 0x4047e2u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4047e2: mov dword ptr [0x44aae4], ebx */
  W32((uint32_t)(0x44aae4u), ebx);
/* 4047e8: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 4047ea: xor eax, eax */
  eax = 0;
L_4047ec: /* 4047ec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4047ed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_4047ee: /* 4047ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4047ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4047f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4047f1: ret  */
  esp += 4; SPILL(); return;
L_404ab0: /* 404ab0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404ab1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404ab2: mov esi, dword ptr [0x44aae4] */
  esi = R32((uint32_t)(0x44aae4u));
/* 404ab8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 404ab9: xor ebx, ebx */
  ebx = 0;
/* 404abb: xor edi, edi */
  edi = 0;
/* 404abd: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404abf: je 0x40bca1 */
  if (zf) goto L_40bca1;
L_404ac5: /* 404ac5: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 404ac7: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 404ac9: je 0x404add */
  if (zf) goto L_404add;
L_404acb: /* 404acb: cmp al, 0x3d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 404acd: je 0x404ad0 */
  if (zf) goto L_404ad0;
L_404acf: /* 404acf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_404ad0: /* 404ad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404ad1: call 0x402493 */
  esp -= 4; W32(esp, 0x404ad6u); SPILL(); hle_strlen(); RELOAD();
/* 404ad6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404ad7: lea esi, [esi + eax + 1] */
  esi = (uint32_t)(esi + eax + 0x1u);
/* 404adb: jmp 0x404ac5 */
  goto L_404ac5;
L_404add: /* 404add: lea eax, [edi*4 + 4] */
  eax = (uint32_t)(edi*4 + 0x4u);
/* 404ae4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404ae5: call 0x4010eb */
  esp -= 4; W32(esp, 0x404aeau); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 404aea: mov edi, eax */
  edi = eax;
/* 404aec: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404aee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404aef: mov dword ptr [0x4491f4], edi */
  W32((uint32_t)(0x4491f4u), edi);
/* 404af5: je 0x40bca1 */
  if (zf) goto L_40bca1;
L_404afb: /* 404afb: mov esi, dword ptr [0x44aae4] */
  esi = R32((uint32_t)(0x44aae4u));
/* 404b01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_404b02: /* 404b02: cmp byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 404b04: je 0x4047d7 */
  if (zf) goto L_4047d7;
L_404b0a: /* 404b0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404b0b: call 0x402493 */
  esp -= 4; W32(esp, 0x404b10u); SPILL(); hle_strlen(); RELOAD();
/* 404b10: mov ebp, eax */
  ebp = eax;
/* 404b12: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 404b13: cmp byte ptr [esi], 0x3d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x3du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 404b16: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404b17: je 0x404b36 */
  if (zf) goto L_404b36;
L_404b19: /* 404b19: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 404b1a: call 0x4010eb */
  esp -= 4; W32(esp, 0x404b1fu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 404b1f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404b21: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404b22: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 404b24: je 0x40bca9 */
  if (zf) goto L_40bca9;
L_404b2a: /* 404b2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404b2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404b2c: call 0x404b3a */
  esp -= 4; W32(esp, 0x404b31u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 404b31: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404b32: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404b33: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_404b36: /* 404b36: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 404b38: jmp 0x404b02 */
  goto L_404b02;
L_40bca1: /* 40bca1: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40bca4: jmp 0x4047ee */
  goto L_4047ee;
L_40bca9: /* 40bca9: push dword ptr [0x4491f4] */
  { uint32_t v = R32((uint32_t)(0x4491f4u)); esp -= 4; W32(esp, v); }
/* 40bcaf: call 0x401156 */
  esp -= 4; W32(esp, 0x40bcb4u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40bcb4: mov dword ptr [0x4491f4], ebx */
  W32((uint32_t)(0x4491f4u), ebx);
/* 40bcba: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40bcbd: jmp 0x4047ec */
  goto L_4047ec;
}

void f_404b3a(void) {
  LOAD_REGS();
  goto L_404b3a;
L_401d2a: /* 401d2a: mov word ptr [edi], dx */
  W16((uint32_t)(edi), (edx & 0xffffu));
/* 401d2d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 401d31: mov byte ptr [edi + 2], 0 */
  W8((uint32_t)(edi + 0x2u), 0x0u);
/* 401d35: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401d36: ret  */
  esp += 4; SPILL(); return;
L_401d37: /* 401d37: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 401d39: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 401d3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401d3e: ret  */
  esp += 4; SPILL(); return;
L_401d3f: /* 401d3f: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 401d41: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 401d44: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401d46: je 0x401d37 */
  if (zf) goto L_401d37;
L_401d48: /* 401d48: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 401d4a: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 401d4d: test ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401d53: jne 0x401d3f */
  if (!zf) goto L_401d3f;
L_401d55: /* 401d55: jmp 0x401da1 */
  goto L_401da1;
L_401d95: /* 401d95: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 401d99: test ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401d9f: jne 0x401d3f */
  if (!zf) goto L_401d3f;
L_401da1: /* 401da1: mov edx, 0x7efefeff */
  edx = 0x7efefeffu;
/* 401da6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 401da8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 401daa: xor eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 401dad: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 401daf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 401db1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 401db4: test eax, 0x81010100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x81010100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401db9: jne 0x401dc2 */
  if (!zf) goto L_401dc2;
L_401dbb: /* 401dbb: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 401dbd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 401dc0: jmp 0x401da1 */
  goto L_401da1;
L_401dc2: /* 401dc2: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401dc4: je 0x401d37 */
  if (zf) goto L_401d37;
L_401dca: /* 401dca: test dh, dh */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401dcc: je 0x401dea */
  if (zf) goto L_401dea;
L_401dce: /* 401dce: test edx, 0xff0000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xff0000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401dd4: je 0x401d2a */
  if (zf) goto L_401d2a;
L_401dda: /* 401dda: test edx, 0xff000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xff000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401de0: jne 0x401dbb */
  if (!zf) goto L_401dbb;
L_401de2: /* 401de2: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 401de4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 401de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401de9: ret  */
  esp += 4; SPILL(); return;
L_401dea: /* 401dea: mov word ptr [edi], dx */
  W16((uint32_t)(edi), (edx & 0xffffu));
/* 401ded: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 401df1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401df2: ret  */
  esp += 4; SPILL(); return;
L_404b3a: /* 404b3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 404b3b: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 404b3f: jmp 0x401d95 */
  goto L_401d95;
}

void f_404b44(void) {
  LOAD_REGS();
L_404b44: /* 404b44: call 0x404bb4 */
  esp -= 4; W32(esp, 0x404b49u); SPILL(); f_404bb4(); if (g_unwind) return; RELOAD();
/* 404b49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404b4b: je 0x40be5d */
  if (zf) goto L_40be5d;
L_404b51: /* 404b51: call dword ptr [0x439064] */
  esp -= 4; W32(esp, 0x404b57u); SPILL(); call_ind(R32(0x439064u)); if (g_unwind) return; /* KERNEL32!TlsAlloc */ RELOAD();
/* 404b57: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404b5a: mov dword ptr [0x44a850], eax */
  W32((uint32_t)(0x44a850u), eax);
/* 404b5f: je 0x40be5d */
  if (zf) goto L_40be5d;
L_404b65: /* 404b65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404b66: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 404b6b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 404b6d: call 0x4016cb */
  esp -= 4; W32(esp, 0x404b72u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 404b72: mov esi, eax */
  esi = eax;
/* 404b74: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404b76: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404b77: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404b78: je 0x404baa */
  if (zf) goto L_404baa;
L_404b7a: /* 404b7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404b7b: push dword ptr [0x44a850] */
  { uint32_t v = R32((uint32_t)(0x44a850u)); esp -= 4; W32(esp, v); }
/* 404b81: call dword ptr [0x439028] */
  esp -= 4; W32(esp, 0x404b87u); SPILL(); call_ind(R32(0x439028u)); if (g_unwind) return; /* KERNEL32!TlsSetValue */ RELOAD();
/* 404b87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404b89: je 0x404baa */
  if (zf) goto L_404baa;
L_404b8b: /* 404b8b: mov dword ptr [esi + 0x54], 0x44aae8 */
  W32((uint32_t)(esi + 0x54u), 0x44aae8u);
/* 404b92: mov dword ptr [esi + 0x14], 1 */
  W32((uint32_t)(esi + 0x14u), 0x1u);
/* 404b99: call dword ptr [0x439024] */
  esp -= 4; W32(esp, 0x404b9fu); SPILL(); call_ind(R32(0x439024u)); if (g_unwind) return; /* KERNEL32!GetCurrentThreadId */ RELOAD();
/* 404b9f: or dword ptr [esi + 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 404ba3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 404ba5: xor eax, eax */
  eax = 0;
/* 404ba7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 404ba8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404ba9: ret  */
  esp += 4; SPILL(); return;
L_404baa: /* 404baa: call 0x40fc6f */
  esp -= 4; W32(esp, 0x404bafu); SPILL(); f_40fc6f(); if (g_unwind) return; RELOAD();
/* 404baf: jmp 0x40be65 */
  goto L_40be65;
L_40be5d: /* 40be5d: call 0x40fc6f */
  esp -= 4; W32(esp, 0x40be62u); SPILL(); f_40fc6f(); if (g_unwind) return; RELOAD();
/* 40be62: xor eax, eax */
  eax = 0;
/* 40be64: ret  */
  esp += 4; SPILL(); return;
L_40be65: /* 40be65: xor eax, eax */
  eax = 0;
/* 40be67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40be68: ret  */
  esp += 4; SPILL(); return;
}

void f_404bb4(void) {
  LOAD_REGS();
L_404bb4: /* 404bb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404bb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 404bb6: xor esi, esi */
  esi = 0;
/* 404bb8: mov edi, 0x44afc0 */
  edi = 0x44afc0u;
L_404bbd: /* 404bbd: cmp dword ptr [esi*8 + 0x44a9bc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi*8 + 0x44a9bcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404bc5: je 0x404bd3 */
  if (zf) goto L_404bd3;
L_404bc7: /* 404bc7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 404bc8: cmp esi, 0x24 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 404bcb: jl 0x404bbd */
  if ((sf != of)) goto L_404bbd;
L_404bcd: /* 404bcd: xor eax, eax */
  eax = 0;
/* 404bcf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_404bd0: /* 404bd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 404bd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404bd2: ret  */
  esp += 4; SPILL(); return;
L_404bd3: /* 404bd3: lea eax, [esi*8 + 0x44a9b8] */
  eax = (uint32_t)(esi*8 + 0x44a9b8u);
/* 404bda: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 404bdc: push 0xfa0 */
  { uint32_t v = 0xfa0u; esp -= 4; W32(esp, v); }
/* 404be1: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 404be3: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 404be6: call 0x404bf7 */
  esp -= 4; W32(esp, 0x404bebu); SPILL(); f_404bf7(); if (g_unwind) return; RELOAD();
/* 404beb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404bed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404bee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404bef: je 0x40bbfc */
  if (zf) goto L_40bbfc;
L_404bf5: /* 404bf5: jmp 0x404bc7 */
  goto L_404bc7;
L_40bbfc: /* 40bbfc: and dword ptr [esi*8 + 0x44a9b8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi*8 + 0x44a9b8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi*8 + 0x44a9b8u), r);
  }
/* 40bc04: xor eax, eax */
  eax = 0;
/* 40bc06: jmp 0x404bd0 */
  goto L_404bd0;
}

void f_404bf7(void) {
  LOAD_REGS();
L_404bf7: /* 404bf7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 404bf9: push 0x43e310 */
  { uint32_t v = 0x43e310u; esp -= 4; W32(esp, v); }
/* 404bfe: call 0x40101f */
  esp -= 4; W32(esp, 0x404c03u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 404c03: mov eax, dword ptr [0x44b11c] */
  eax = R32((uint32_t)(0x44b11cu));
/* 404c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404c0a: je 0x404c25 */
  if (zf) goto L_404c25;
L_404c0c: /* 404c0c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 404c10: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 404c13: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 404c16: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x404c18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 404c18: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 404c1b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 404c1f: call 0x40105a */
  esp -= 4; W32(esp, 0x404c24u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 404c24: ret  */
  esp += 4; SPILL(); return;
L_404c25: /* 404c25: cmp dword ptr [0x4491d4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491d4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404c2c: je 0x40c712 */
  if (zf) goto L_40c712;
L_404c32: /* 404c32: push 0x43e2fc */
  { uint32_t v = 0x43e2fcu; esp -= 4; W32(esp, v); }
/* 404c37: call dword ptr [0x439010] */
  esp -= 4; W32(esp, 0x404c3du); SPILL(); call_ind(R32(0x439010u)); if (g_unwind) return; /* KERNEL32!GetModuleHandleA */ RELOAD();
/* 404c3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404c3f: je 0x40c712 */
  if (zf) goto L_40c712;
L_404c45: /* 404c45: push 0x43e2d4 */
  { uint32_t v = 0x43e2d4u; esp -= 4; W32(esp, v); }
/* 404c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404c4b: call dword ptr [0x43900c] */
  esp -= 4; W32(esp, 0x404c51u); SPILL(); call_ind(R32(0x43900cu)); if (g_unwind) return; /* KERNEL32!GetProcAddress */ RELOAD();
/* 404c51: mov dword ptr [0x44b11c], eax */
  W32((uint32_t)(0x44b11cu), eax);
/* 404c56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404c58: jne 0x404c0c */
  if (!zf) goto L_404c0c;
L_404c5a: /* 404c5a: jmp 0x40c712 */
  goto L_40c712;
L_40c712: /* 40c712: mov eax, 0x412541 */
  eax = 0x412541u;
/* 40c717: mov dword ptr [0x44b11c], eax */
  W32((uint32_t)(0x44b11cu), eax);
/* 40c71c: jmp 0x404c0c */
  goto L_404c0c;
}

void f_404c25(void) {
  LOAD_REGS();
  goto L_404c25;
L_404c0c: /* 404c0c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 404c10: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 404c13: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 404c16: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x404c18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 404c18: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 404c1b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 404c1f: call 0x40105a */
  esp -= 4; W32(esp, 0x404c24u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 404c24: ret  */
  esp += 4; SPILL(); return;
L_404c25: /* 404c25: cmp dword ptr [0x4491d4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491d4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404c2c: je 0x40c712 */
  if (zf) goto L_40c712;
L_404c32: /* 404c32: push 0x43e2fc */
  { uint32_t v = 0x43e2fcu; esp -= 4; W32(esp, v); }
/* 404c37: call dword ptr [0x439010] */
  esp -= 4; W32(esp, 0x404c3du); SPILL(); call_ind(R32(0x439010u)); if (g_unwind) return; /* KERNEL32!GetModuleHandleA */ RELOAD();
/* 404c3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404c3f: je 0x40c712 */
  if (zf) goto L_40c712;
L_404c45: /* 404c45: push 0x43e2d4 */
  { uint32_t v = 0x43e2d4u; esp -= 4; W32(esp, v); }
/* 404c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404c4b: call dword ptr [0x43900c] */
  esp -= 4; W32(esp, 0x404c51u); SPILL(); call_ind(R32(0x43900cu)); if (g_unwind) return; /* KERNEL32!GetProcAddress */ RELOAD();
/* 404c51: mov dword ptr [0x44b11c], eax */
  W32((uint32_t)(0x44b11cu), eax);
/* 404c56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404c58: jne 0x404c0c */
  if (!zf) goto L_404c0c;
L_404c5a: /* 404c5a: jmp 0x40c712 */
  goto L_40c712;
L_40c712: /* 40c712: mov eax, 0x412541 */
  eax = 0x412541u;
/* 40c717: mov dword ptr [0x44b11c], eax */
  W32((uint32_t)(0x44b11cu), eax);
/* 40c71c: jmp 0x404c0c */
  goto L_404c0c;
}

void f_404c5f(void) {
  LOAD_REGS();
L_404c5f: /* 404c5f: mov eax, dword ptr [0x44afb8] */
  eax = R32((uint32_t)(0x44afb8u));
/* 404c64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404c66: je 0x404c6a */
  if (zf) goto L_404c6a;
L_404c68: /* 404c68: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x404c6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_404c6a: /* 404c6a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404c6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 404c6c: mov ecx, 0x44ae94 */
  ecx = 0x44ae94u;
/* 404c71: mov edi, 0x44aeac */
  edi = 0x44aeacu;
/* 404c76: xor eax, eax */
  eax = 0;
/* 404c78: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 404c7a: mov esi, ecx */
  esi = ecx;
/* 404c7c: jae 0x404c95 */
  if (!cf) goto L_404c95;
L_404c7e: /* 404c7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404c80: jne 0x404cb4 */
  if (!zf) goto L_404cb4;
L_404c82: /* 404c82: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 404c84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404c86: je 0x404c8a */
  if (zf) goto L_404c8a;
L_404c88: /* 404c88: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0x404c8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_404c8a: /* 404c8a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 404c8d: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 404c8f: jb 0x404c7e */
  if (cf) goto L_404c7e;
L_404c91: /* 404c91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404c93: jne 0x404cb4 */
  if (!zf) goto L_404cb4;
L_404c95: /* 404c95: push 0x404140 */
  { uint32_t v = 0x404140u; esp -= 4; W32(esp, v); }
/* 404c9a: call 0x404cb7 */
  esp -= 4; W32(esp, 0x404c9fu); SPILL(); f_404cb7(); if (g_unwind) return; RELOAD();
/* 404c9f: mov dword ptr [esp], 0x44ae90 */
  W32((uint32_t)(esp), 0x44ae90u);
/* 404ca6: push 0x44ae88 */
  { uint32_t v = 0x44ae88u; esp -= 4; W32(esp, v); }
/* 404cab: call 0x4011ee */
  esp -= 4; W32(esp, 0x404cb0u); SPILL(); f_4011ee(); if (g_unwind) return; RELOAD();
/* 404cb0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404cb1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404cb2: xor eax, eax */
  eax = 0;
L_404cb4: /* 404cb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 404cb5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404cb6: ret  */
  esp += 4; SPILL(); return;
}

void f_404cb7(void) {
  LOAD_REGS();
L_404cb7: /* 404cb7: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 404cbb: call 0x404cc9 */
  esp -= 4; W32(esp, 0x404cc0u); SPILL(); f_404cc9(); if (g_unwind) return; RELOAD();
/* 404cc0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 404cc2: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 404cc4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 404cc6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404cc7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 404cc8: ret  */
  esp += 4; SPILL(); return;
}

void f_404cc9(void) {
  LOAD_REGS();
L_404cc9: /* 404cc9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 404ccb: push 0x43e2c8 */
  { uint32_t v = 0x43e2c8u; esp -= 4; W32(esp, v); }
/* 404cd0: call 0x40101f */
  esp -= 4; W32(esp, 0x404cd5u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 404cd5: call 0x402558 */
  esp -= 4; W32(esp, 0x404cdau); SPILL(); f_402558(); if (g_unwind) return; RELOAD();
/* 404cda: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 404cde: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 404ce1: call 0x40494a */
  esp -= 4; W32(esp, 0x404ce6u); SPILL(); f_40494a(); if (g_unwind) return; RELOAD();
/* 404ce6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 404ce9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 404ced: call 0x404cfb */
  esp -= 4; W32(esp, 0x404cf2u); SPILL(); f_404cfb(); if (g_unwind) return; RELOAD();
/* 404cf2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 404cf5: call 0x40105a */
  esp -= 4; W32(esp, 0x404cfau); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 404cfa: ret  */
  esp += 4; SPILL(); return;
}

void f_404cfb(void) {
  LOAD_REGS();
L_404cfb: /* 404cfb: call 0x402561 */
  esp -= 4; W32(esp, 0x404d00u); SPILL(); f_402561(); if (g_unwind) return; RELOAD();
/* 404d00: ret  */
  esp += 4; SPILL(); return;
}

void f_404d01(void) {
  LOAD_REGS();
L_404d01: /* 404d01: call 0x4047f2 */
  esp -= 4; W32(esp, 0x404d06u); SPILL(); f_4047f2(); if (g_unwind) return; RELOAD();
/* 404d06: call 0x40482a */
  esp -= 4; W32(esp, 0x404d0bu); SPILL(); f_40482a(); if (g_unwind) return; RELOAD();
/* 404d0b: mov dword ptr [0x44923c], eax */
  W32((uint32_t)(0x44923cu), eax);
/* 404d10: call 0x404d18 */
  esp -= 4; W32(esp, 0x404d15u); SPILL(); f_404d18(); if (g_unwind) return; RELOAD();
/* 404d15: fnclex  */
  FSW_CC = 0;
/* 404d17: ret  */
  esp += 4; SPILL(); return;
}

void f_404d18(void) {
  LOAD_REGS();
L_404d18: /* 404d18: push 0x30000 */
  { uint32_t v = 0x30000u; esp -= 4; W32(esp, v); }
/* 404d1d: push 0x10000 */
  { uint32_t v = 0x10000u; esp -= 4; W32(esp, v); }
/* 404d22: call 0x404d2a */
  esp -= 4; W32(esp, 0x404d27u); SPILL(); f_404d2a(); if (g_unwind) return; RELOAD();
/* 404d27: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404d28: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404d29: ret  */
  esp += 4; SPILL(); return;
}

void f_404d2a(void) {
  LOAD_REGS();
L_404d2a: /* 404d2a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 404d2e: and eax, 0xfff7ffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 404d33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404d34: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 404d38: call 0x404d40 */
  esp -= 4; W32(esp, 0x404d3du); SPILL(); f_404d40(); if (g_unwind) return; RELOAD();
/* 404d3d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404d3e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404d3f: ret  */
  esp += 4; SPILL(); return;
}

void f_404d40(void) {
  LOAD_REGS();
L_404d40: /* 404d40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 404d41: mov ebp, esp */
  ebp = esp;
/* 404d43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 404d44: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404d45: wait  */
/* 404d46: fnstcw word ptr [ebp - 4] */
  W16((uint32_t)(ebp + 0xfffffffcu), FCW);
/* 404d49: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 404d4c: call 0x404856 */
  esp -= 4; W32(esp, 0x404d51u); SPILL(); f_404856(); if (g_unwind) return; RELOAD();
/* 404d51: mov ebx, eax */
  ebx = eax;
/* 404d53: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 404d56: not eax */
  eax = ~eax;
/* 404d58: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 404d5a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 404d5d: and eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 404d60: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 404d62: call 0x404d72 */
  esp -= 4; W32(esp, 0x404d67u); SPILL(); f_404d72(); if (g_unwind) return; RELOAD();
/* 404d67: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 404d6a: fldcw word ptr [ebp + 0xc] */
  FCW = R16((uint32_t)(ebp + 0xcu));
/* 404d6d: mov eax, ebx */
  eax = ebx;
/* 404d6f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 404d70: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 404d71: ret  */
  esp += 4; SPILL(); return;
}

void f_404d72(void) {
  LOAD_REGS();
L_404d72: /* 404d72: xor eax, eax */
  eax = 0;
/* 404d74: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 404d77: je 0x404d7a */
  if (zf) goto L_404d7a;
L_404d79: /* 404d79: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_404d7a: /* 404d7a: test bl, 8 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 404d7d: je 0x404d82 */
  if (zf) goto L_404d82;
L_404d7f: /* 404d7f: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_404d82: /* 404d82: test bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 404d85: je 0x404d8a */
  if (zf) goto L_404d8a;
L_404d87: /* 404d87: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_404d8a: /* 404d8a: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 404d8d: je 0x404d92 */
  if (zf) goto L_404d92;
L_404d8f: /* 404d8f: or eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_404d92: /* 404d92: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 404d95: je 0x404d9a */
  if (zf) goto L_404d9a;
L_404d97: /* 404d97: or eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_404d9a: /* 404d9a: test ebx, 0x80000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404da0: je 0x404da5 */
  if (zf) goto L_404da5;
L_404da2: /* 404da2: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_404da5: /* 404da5: mov ecx, ebx */
  ecx = ebx;
/* 404da7: mov edx, 0x300 */
  edx = 0x300u;
/* 404dac: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 404dae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404daf: mov esi, 0x200 */
  esi = 0x200u;
/* 404db4: jne 0x40d97b */
  if (!zf) goto L_40d97b;
L_404dba: /* 404dba: mov ecx, ebx */
  ecx = ebx;
/* 404dbc: and ecx, 0x30000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 404dc2: je 0x404ddc */
  if (zf) goto L_404ddc;
L_404dc4: /* 404dc4: cmp ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404dca: jne 0x404dce */
  if (!zf) goto L_404dce;
L_404dcc: /* 404dcc: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_404dce: /* 404dce: test ebx, 0x40000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404dd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404dd5: jne 0x40d9ad */
  if (!zf) goto L_40d9ad;
L_404ddb: /* 404ddb: ret  */
  esp += 4; SPILL(); return;
L_404ddc: /* 404ddc: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 404dde: jmp 0x404dce */
  goto L_404dce;
L_40d97b: /* 40d97b: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d981: je 0x40d9a3 */
  if (zf) goto L_40d9a3;
L_40d983: /* 40d983: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d985: je 0x40d999 */
  if (zf) goto L_40d999;
L_40d987: /* 40d987: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d989: jne 0x404dba */
  if (!zf) goto L_404dba;
L_40d98f: /* 40d98f: or eax, 0xc00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc00u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40d994: jmp 0x404dba */
  goto L_404dba;
L_40d999: /* 40d999: or eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40d99e: jmp 0x404dba */
  goto L_404dba;
L_40d9a3: /* 40d9a3: or eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40d9a8: jmp 0x404dba */
  goto L_404dba;
L_40d9ad: /* 40d9ad: or eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40d9b2: jmp 0x404ddb */
  goto L_404ddb;
}

void f_404eaa(void) {
  LOAD_REGS();
L_404eaa: /* 404eaa: xor eax, eax */
  eax = 0;
/* 404eac: cmp dword ptr [esp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404eb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 404eb2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 404eb5: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 404eba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404ebb: call dword ptr [0x43908c] */
  esp -= 4; W32(esp, 0x404ec1u); SPILL(); call_ind(R32(0x43908cu)); if (g_unwind) return; /* KERNEL32!HeapCreate */ RELOAD();
/* 404ec1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404ec3: mov dword ptr [0x44a848], eax */
  W32((uint32_t)(0x44a848u), eax);
/* 404ec8: je 0x40c299 */
  if (zf) goto L_40c299;
L_404ece: /* 404ece: call 0x404eee */
  esp -= 4; W32(esp, 0x404ed3u); SPILL(); f_404eee(); if (g_unwind) return; RELOAD();
/* 404ed3: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404ed6: mov dword ptr [0x44a84c], eax */
  W32((uint32_t)(0x44a84cu), eax);
/* 404edb: je 0x40c273 */
  if (zf) goto L_40c273;
L_404ee1: /* 404ee1: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404ee4: je 0x40c280 */
  if (zf) goto L_40c280;
L_404eea: /* 404eea: xor eax, eax */
  eax = 0;
/* 404eec: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 404eed: ret  */
  esp += 4; SPILL(); return;
L_40c273: /* 40c273: push 0x3f8 */
  { uint32_t v = 0x3f8u; esp -= 4; W32(esp, v); }
/* 40c278: call 0x41041f */
  esp -= 4; W32(esp, 0x40c27du); SPILL(); f_41041f(); if (g_unwind) return; RELOAD();
/* 40c27d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c27e: jmp 0x40c285 */
  goto L_40c285;
L_40c280: /* 40c280: call 0x411030 */
  esp -= 4; W32(esp, 0x40c285u); SPILL(); f_411030(); if (g_unwind) return; RELOAD();
L_40c285: /* 40c285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c287: jne 0x404eea */
  if (!zf) goto L_404eea;
L_40c28d: /* 40c28d: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 40c293: call dword ptr [0x439088] */
  esp -= 4; W32(esp, 0x40c299u); SPILL(); call_ind(R32(0x439088u)); if (g_unwind) return; /* KERNEL32!HeapDestroy */ RELOAD();
L_40c299: /* 40c299: xor eax, eax */
  eax = 0;
/* 40c29b: ret  */
  esp += 4; SPILL(); return;
}

void f_404eee(void) {
  LOAD_REGS();
L_404eee: /* 404eee: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 404eef: mov ebp, esp */
  ebp = esp;
/* 404ef1: mov eax, 0x11a0 */
  eax = 0x11a0u;
/* 404ef6: call 0x4014ee */
  esp -= 4; W32(esp, 0x404efbu); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 404efb: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 404f00: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 404f03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404f04: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 404f07: push 0x1090 */
  { uint32_t v = 0x1090u; esp -= 4; W32(esp, v); }
/* 404f0c: lea eax, [ebp - 0x11a0] */
  eax = (uint32_t)(ebp + 0xffffee60u);
/* 404f12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404f13: push 0x43e29c */
  { uint32_t v = 0x43e29cu; esp -= 4; W32(esp, v); }
/* 404f18: call dword ptr [0x439084] */
  esp -= 4; W32(esp, 0x404f1eu); SPILL(); call_ind(R32(0x439084u)); if (g_unwind) return; /* KERNEL32!GetEnvironmentVariableA */ RELOAD();
/* 404f1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404f20: jne 0x40c173 */
  if (!zf) goto L_40c173;
L_404f26: /* 404f26: cmp dword ptr [0x4491d4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491d4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404f2d: jne 0x404f50 */
  if (!zf) goto L_404f50;
L_404f2f: /* 404f2f: cmp dword ptr [0x4491e0], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491e0u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 404f36: jb 0x404f50 */
  if (cf) goto L_404f50;
L_404f38: /* 404f38: xor eax, eax */
  eax = 0;
/* 404f3a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_404f3b: /* 404f3b: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 404f3e: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 404f41: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 404f42: call 0x4013ab */
  esp -= 4; W32(esp, 0x404f47u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 404f47: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 404f48: ret  */
  esp += 4; SPILL(); return;
L_404f49: /* 404f49: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404f4c: je 0x404f3b */
  if (zf) goto L_404f3b;
L_404f4e: /* 404f4e: jmp 0x404f26 */
  goto L_404f26;
L_404f50: /* 404f50: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 404f53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 404f54: call 0x41032a */
  esp -= 4; W32(esp, 0x404f59u); SPILL(); f_41032a(); if (g_unwind) return; RELOAD();
/* 404f59: jmp 0x40c264 */
  goto L_40c264;
L_40c173: /* 40c173: xor ebx, ebx */
  ebx = 0;
/* 40c175: cmp byte ptr [ebp - 0x11a0], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffee60u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c17b: lea ecx, [ebp - 0x11a0] */
  ecx = (uint32_t)(ebp + 0xffffee60u);
/* 40c181: je 0x40c196 */
  if (zf) goto L_40c196;
L_40c183: /* 40c183: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40c185: cmp al, 0x61 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x61u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40c187: jl 0x40c191 */
  if ((sf != of)) goto L_40c191;
L_40c189: /* 40c189: cmp al, 0x7a */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40c18b: jg 0x40c191 */
  if ((!zf && sf == of)) goto L_40c191;
L_40c18d: /* 40c18d: sub al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40c18f: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
L_40c191: /* 40c191: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40c192: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c194: jne 0x40c183 */
  if (!zf) goto L_40c183;
L_40c196: /* 40c196: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* 40c198: lea eax, [ebp - 0x11a0] */
  eax = (uint32_t)(ebp + 0xffffee60u);
/* 40c19e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c19f: push 0x43e938 */
  { uint32_t v = 0x43e938u; esp -= 4; W32(esp, v); }
/* 40c1a4: call 0x401a52 */
  esp -= 4; W32(esp, 0x40c1a9u); SPILL(); f_401a52(); if (g_unwind) return; RELOAD();
/* 40c1a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40c1ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c1ae: jne 0x40c1b8 */
  if (!zf) goto L_40c1b8;
L_40c1b0: /* 40c1b0: lea eax, [ebp - 0x11a0] */
  eax = (uint32_t)(ebp + 0xffffee60u);
/* 40c1b6: jmp 0x40c20c */
  goto L_40c20c;
L_40c1b8: /* 40c1b8: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 40c1bd: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* 40c1c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c1c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40c1c5: mov byte ptr [ebp - 0xc], bl */
  W8((uint32_t)(ebp + 0xfffffff4u), (ebx & 0xffu));
/* 40c1c8: call dword ptr [0x439000] */
  esp -= 4; W32(esp, 0x40c1ceu); SPILL(); call_ind(R32(0x439000u)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameA */ RELOAD();
/* 40c1ce: cmp byte ptr [ebp - 0x110], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffef0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c1d4: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* 40c1da: je 0x40c1ef */
  if (zf) goto L_40c1ef;
L_40c1dc: /* 40c1dc: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40c1de: cmp al, 0x61 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x61u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40c1e0: jl 0x40c1ea */
  if ((sf != of)) goto L_40c1ea;
L_40c1e2: /* 40c1e2: cmp al, 0x7a */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40c1e4: jg 0x40c1ea */
  if ((!zf && sf == of)) goto L_40c1ea;
L_40c1e6: /* 40c1e6: sub al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40c1e8: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
L_40c1ea: /* 40c1ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40c1eb: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c1ed: jne 0x40c1dc */
  if (!zf) goto L_40c1dc;
L_40c1ef: /* 40c1ef: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* 40c1f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c1f6: lea eax, [ebp - 0x11a0] */
  eax = (uint32_t)(ebp + 0xffffee60u);
/* 40c1fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c1fd: call 0x4071c4 */
  esp -= 4; W32(esp, 0x40c202u); SPILL(); f_4071c4(); if (g_unwind) return; RELOAD();
/* 40c202: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c204: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c205: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c206: je 0x404f26 */
  if (zf) goto L_404f26;
L_40c20c: /* 40c20c: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 40c20e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c20f: call 0x407106 */
  esp -= 4; W32(esp, 0x40c214u); SPILL(); f_407106(); if (g_unwind) return; RELOAD();
/* 40c214: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c216: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c217: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c218: je 0x404f26 */
  if (zf) goto L_404f26;
L_40c21e: /* 40c21e: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 40c221: jmp 0x40c224 */
  goto L_40c224;
L_40c223: /* 40c223: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_40c224: /* 40c224: cmp byte ptr [ecx], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c227: je 0x40c223 */
  if (zf) goto L_40c223;
L_40c229: /* 40c229: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40c22b: xor eax, eax */
  eax = 0;
/* 40c22d: cmp dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40c230: jl 0x404f26 */
  if ((sf != of)) goto L_404f26;
L_40c236: /* 40c236: cmp dl, 0x39 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40c239: jg 0x40c24d */
  if ((!zf && sf == of)) goto L_40c24d;
L_40c23b: /* 40c23b: movsx edx, dl */
  edx = (uint32_t)(int32_t)(int8_t)((edx & 0xffu));
/* 40c23e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 40c241: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40c242: lea eax, [edx + eax*2 - 0x30] */
  eax = (uint32_t)(edx + eax*2 + 0xffffffd0u);
/* 40c246: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40c248: cmp dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40c24b: jge 0x40c236 */
  if ((sf == of)) goto L_40c236;
L_40c24d: /* 40c24d: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c250: je 0x404f3b */
  if (zf) goto L_404f3b;
L_40c256: /* 40c256: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c259: je 0x404f3b */
  if (zf) goto L_404f3b;
L_40c25f: /* 40c25f: jmp 0x404f49 */
  goto L_404f49;
L_40c264: /* 40c264: cmp byte ptr [ebp - 8], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 40c268: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c269: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 40c26b: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40c26e: jmp 0x404f3b */
  goto L_404f3b;
}

void f_404f5e(void) {
  LOAD_REGS();
L_404f5e: /* 404f5e: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 404f60: call 0x404f69 */
  esp -= 4; W32(esp, 0x404f65u); SPILL(); f_404f69(); if (g_unwind) return; RELOAD();
/* 404f65: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404f66: xor eax, eax */
  eax = 0;
/* 404f68: ret  */
  esp += 4; SPILL(); return;
}

void f_404f69(void) {
  LOAD_REGS();
L_404f69: /* 404f69: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 404f6b: push 0x43e2b8 */
  { uint32_t v = 0x43e2b8u; esp -= 4; W32(esp, v); }
/* 404f70: call 0x40101f */
  esp -= 4; W32(esp, 0x404f75u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 404f75: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 404f79: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 404f7b: call 0x4011b7 */
  esp -= 4; W32(esp, 0x404f80u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 404f80: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404f81: xor edi, edi */
  edi = 0;
/* 404f83: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 404f86: mov dword ptr [0x44b110], edi */
  W32((uint32_t)(0x44b110u), edi);
/* 404f8c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 404f8f: cmp eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404f92: je 0x40c549 */
  if (zf) goto L_40c549;
L_404f98: /* 404f98: cmp eax, -3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404f9b: jne 0x4050d7 */
  if (!zf) goto L_4050d7;
L_404fa1: /* 404fa1: mov dword ptr [0x44b110], 1 */
  W32((uint32_t)(0x44b110u), 0x1u);
/* 404fab: call dword ptr [0x4390ac] */
  esp -= 4; W32(esp, 0x404fb1u); SPILL(); call_ind(R32(0x4390acu)); if (g_unwind) return; /* KERNEL32!GetACP */ RELOAD();
L_404fb1: /* 404fb1: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 404fb4: cmp eax, dword ptr [0x44b13c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b13cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404fba: je 0x4050f2 */
  if (zf) goto L_4050f2;
L_404fc0: /* 404fc0: mov esi, dword ptr [0x44aad8] */
  esi = R32((uint32_t)(0x44aad8u));
/* 404fc6: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 404fc9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404fcb: jne 0x4050e5 */
  if (!zf) goto L_4050e5;
L_404fd1: /* 404fd1: push 0x220 */
  { uint32_t v = 0x220u; esp -= 4; W32(esp, v); }
/* 404fd6: call 0x4010eb */
  esp -= 4; W32(esp, 0x404fdbu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 404fdb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404fdc: mov esi, eax */
  esi = eax;
/* 404fde: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
L_404fe1: /* 404fe1: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404fe3: je 0x405130 */
  if (zf) goto L_405130;
L_404fe9: /* 404fe9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 404fec: call 0x40501e */
  esp -= 4; W32(esp, 0x404ff1u); SPILL(); f_40501e(); if (g_unwind) return; RELOAD();
/* 404ff1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 404ff2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 404ff5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404ff7: jne 0x405130 */
  if (!zf) goto L_405130;
L_404ffd: /* 404ffd: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 404fff: mov eax, dword ptr [0x44b13c] */
  eax = R32((uint32_t)(0x44b13cu));
/* 405004: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 405007: mov eax, dword ptr [0x44b138] */
  eax = R32((uint32_t)(0x44b138u));
/* 40500c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 40500f: mov eax, dword ptr [0x44b134] */
  eax = R32((uint32_t)(0x44b134u));
/* 405014: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 405017: xor eax, eax */
  eax = 0;
/* 405019: jmp 0x4050bb */
  goto L_4050bb;
L_4050bb: /* 4050bb: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 4050be: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4050c1: jge 0x4050d3 */
  if ((sf == of)) goto L_4050d3;
L_4050c3: /* 4050c3: mov cx, word ptr [eax*2 + 0x44b140] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax*2 + 0x44b140u))) & 0xffffu);
/* 4050cb: mov word ptr [esi + eax*2 + 0x10], cx */
  W16((uint32_t)(esi + eax*2 + 0x10u), (ecx & 0xffffu));
/* 4050d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4050d1: jmp 0x4050bb */
  goto L_4050bb;
L_4050d3: /* 4050d3: xor eax, eax */
  eax = 0;
/* 4050d5: jmp 0x4050f7 */
  goto L_4050f7;
L_4050d7: /* 4050d7: cmp eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4050da: jne 0x404fb1 */
  if (!zf) goto L_404fb1;
L_4050e0: /* 4050e0: jmp 0x40c55e */
  goto L_40c55e;
L_4050e5: /* 4050e5: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4050e7: je 0x404fe1 */
  if (zf) goto L_404fe1;
L_4050ed: /* 4050ed: jmp 0x404fd1 */
  goto L_404fd1;
L_4050f2: /* 4050f2: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 4050f5: jmp 0x40513a */
  goto L_40513a;
L_4050f7: /* 4050f7: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 4050fa: cmp eax, 0x101 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x101u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4050ff: jge 0x40510e */
  if ((sf == of)) goto L_40510e;
L_405101: /* 405101: mov cl, byte ptr [eax + 0x449340] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x449340u))) & 0xffu);
/* 405107: mov byte ptr [eax + esi + 0x1c], cl */
  W8((uint32_t)(eax + esi + 0x1cu), (ecx & 0xffu));
/* 40510b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40510c: jmp 0x4050f7 */
  goto L_4050f7;
L_40510e: /* 40510e: xor eax, eax */
  eax = 0;
L_405110: /* 405110: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 405113: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 405118: jge 0x40512a */
  if ((sf == of)) goto L_40512a;
L_40511a: /* 40511a: mov cl, byte ptr [eax + 0x449460] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x449460u))) & 0xffu);
/* 405120: mov byte ptr [eax + esi + 0x11d], cl */
  W8((uint32_t)(eax + esi + 0x11du), (ecx & 0xffu));
/* 405127: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 405128: jmp 0x405110 */
  goto L_405110;
L_40512a: /* 40512a: mov dword ptr [0x44aad8], esi */
  W32((uint32_t)(0x44aad8u), esi);
L_405130: /* 405130: cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405134: je 0x40c572 */
  if (zf) goto L_40c572;
L_40513a: /* 40513a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40513e: call 0x40514c */
  esp -= 4; W32(esp, 0x405143u); SPILL(); f_40514c(); if (g_unwind) return; RELOAD();
/* 405143: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 405146: call 0x40105a */
  esp -= 4; W32(esp, 0x40514bu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 40514b: ret  */
  esp += 4; SPILL(); return;
L_40c549: /* 40c549: mov dword ptr [0x44b110], 1 */
  W32((uint32_t)(0x44b110u), 0x1u);
/* 40c553: call dword ptr [0x4390b0] */
  esp -= 4; W32(esp, 0x40c559u); SPILL(); call_ind(R32(0x4390b0u)); if (g_unwind) return; /* KERNEL32!GetOEMCP */ RELOAD();
/* 40c559: jmp 0x404fb1 */
  goto L_404fb1;
L_40c55e: /* 40c55e: mov dword ptr [0x44b110], 1 */
  W32((uint32_t)(0x44b110u), 0x1u);
/* 40c568: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 40c56d: jmp 0x404fb1 */
  goto L_404fb1;
L_40c572: /* 40c572: cmp esi, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c578: je 0x40513a */
  if (zf) goto L_40513a;
L_40c57e: /* 40c57e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c57f: call 0x401156 */
  esp -= 4; W32(esp, 0x40c584u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40c584: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c585: jmp 0x40513a */
  goto L_40513a;
}

void f_40501e(void) {
  LOAD_REGS();
L_40501e: /* 40501e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40501f: mov ebp, esp */
  ebp = esp;
/* 405021: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 405024: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 405029: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 40502c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40502d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40502e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 405031: xor ebx, ebx */
  ebx = 0;
/* 405033: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405035: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 405038: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405039: je 0x4050b4 */
  if (zf) goto L_4050b4;
L_40503b: /* 40503b: xor edx, edx */
  edx = 0;
/* 40503d: xor eax, eax */
  eax = 0;
L_40503f: /* 40503f: cmp dword ptr [eax + 0x44aeb0], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44aeb0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405045: je 0x40c466 */
  if (zf) goto L_40c466;
L_40504b: /* 40504b: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40504e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40504f: cmp eax, 0xf0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 405054: jb 0x40503f */
  if (cf) goto L_40503f;
L_405056: /* 405056: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 405059: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40505a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40505b: call dword ptr [0x4390b4] */
  esp -= 4; W32(esp, 0x405061u); SPILL(); call_ind(R32(0x4390b4u)); if (g_unwind) return; /* KERNEL32!GetCPInfo */ RELOAD();
/* 405061: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405064: jne 0x40c535 */
  if (!zf) goto L_40c535;
L_40506a: /* 40506a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 40506c: xor eax, eax */
  eax = 0;
/* 40506e: cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 405072: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 405073: mov edi, 0x449340 */
  edi = 0x449340u;
/* 405078: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 40507a: stosb byte ptr es:[edi], al */
  W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1);
/* 40507b: mov dword ptr [0x44b13c], esi */
  W32((uint32_t)(0x44b13cu), esi);
/* 405081: mov dword ptr [0x44b134], ebx */
  W32((uint32_t)(0x44b134u), ebx);
/* 405087: ja 0x40c443 */
  if ((!cf && !zf)) goto L_40c443;
L_40508d: /* 40508d: mov dword ptr [0x44b138], ebx */
  W32((uint32_t)(0x44b138u), ebx);
L_405093: /* 405093: xor eax, eax */
  eax = 0;
/* 405095: mov edi, 0x44b140 */
  edi = 0x44b140u;
/* 40509a: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 40509b: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 40509c: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
L_40509d: /* 40509d: call 0x4049a5 */
  esp -= 4; W32(esp, 0x4050a2u); SPILL(); f_4049a5(); if (g_unwind) return; RELOAD();
/* 4050a2: xor eax, eax */
  eax = 0;
L_4050a4: /* 4050a4: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4050a7: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4050aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4050ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4050ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4050ad: call 0x4013ab */
  esp -= 4; W32(esp, 0x4050b2u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4050b2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4050b3: ret  */
  esp += 4; SPILL(); return;
L_4050b4: /* 4050b4: call 0x411c7f */
  esp -= 4; W32(esp, 0x4050b9u); SPILL(); f_411c7f(); if (g_unwind) return; RELOAD();
/* 4050b9: jmp 0x40509d */
  goto L_40509d;
L_40c443: /* 40c443: cmp byte ptr [ebp - 0x16], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffeau))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c447: je 0x40c50a */
  if (zf) goto L_40c50a;
L_40c44d: /* 40c44d: lea ecx, [ebp - 0x15] */
  ecx = (uint32_t)(ebp + 0xffffffebu);
L_40c450: /* 40c450: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40c452: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40c454: je 0x40c50a */
  if (zf) goto L_40c50a;
L_40c45a: /* 40c45a: movzx eax, byte ptr [ecx - 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xffffffffu)));
/* 40c45e: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 40c461: jmp 0x40c4fa */
  goto L_40c4fa;
L_40c466: /* 40c466: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 40c468: xor eax, eax */
  eax = 0;
/* 40c46a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c46b: mov edi, 0x449340 */
  edi = 0x449340u;
/* 40c470: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 40c472: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 40c475: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 40c478: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 40c47b: stosb byte ptr es:[edi], al */
  W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1);
/* 40c47c: lea ebx, [ecx + 0x44aec0] */
  ebx = (uint32_t)(ecx + 0x44aec0u);
L_40c482: /* 40c482: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 40c484: mov esi, ebx */
  esi = ebx;
/* 40c486: jmp 0x40c4b1 */
  goto L_40c4b1;
L_40c488: /* 40c488: mov dl, byte ptr [esi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 40c48b: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40c48d: je 0x40c4b5 */
  if (zf) goto L_40c4b5;
L_40c48f: /* 40c48f: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 40c492: movzx edi, dl */
  edi = (uint32_t)((edx & 0xffu));
/* 40c495: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40c497: ja 0x40c4ad */
  if ((!cf && !zf)) goto L_40c4ad;
L_40c499: /* 40c499: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 40c49c: mov dl, byte ptr [edx + 0x44dca8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x44dca8u))) & 0xffu);
L_40c4a2: /* 40c4a2: or byte ptr [eax + 0x449341], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x449341u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax + 0x449341u), r);
  }
/* 40c4a8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40c4a9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40c4ab: jbe 0x40c4a2 */
  if ((cf | zf)) goto L_40c4a2;
L_40c4ad: /* 40c4ad: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40c4ae: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40c4af: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
L_40c4b1: /* 40c4b1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40c4b3: jne 0x40c488 */
  if (!zf) goto L_40c488;
L_40c4b5: /* 40c4b5: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 40c4b8: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 40c4bb: cmp dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40c4bf: jb 0x40c482 */
  if (cf) goto L_40c482;
L_40c4c1: /* 40c4c1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40c4c4: mov dword ptr [0x44b13c], eax */
  W32((uint32_t)(0x44b13cu), eax);
/* 40c4c9: mov dword ptr [0x44b138], 1 */
  W32((uint32_t)(0x44b138u), 0x1u);
/* 40c4d3: call 0x411c50 */
  esp -= 4; W32(esp, 0x40c4d8u); SPILL(); f_411c50(); if (g_unwind) return; RELOAD();
/* 40c4d8: lea ecx, [ecx + 0x44aeb4] */
  ecx = (uint32_t)(ecx + 0x44aeb4u);
/* 40c4de: mov esi, ecx */
  esi = ecx;
/* 40c4e0: mov edi, 0x44b140 */
  edi = 0x44b140u;
/* 40c4e5: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40c4e6: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40c4e7: mov dword ptr [0x44b134], eax */
  W32((uint32_t)(0x44b134u), eax);
/* 40c4ec: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40c4ed: jmp 0x40509d */
  goto L_40509d;
L_40c4f2: /* 40c4f2: or byte ptr [eax + 0x449341], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x449341u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax + 0x449341u), r);
  }
/* 40c4f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_40c4fa: /* 40c4fa: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40c4fc: jbe 0x40c4f2 */
  if ((cf | zf)) goto L_40c4f2;
L_40c4fe: /* 40c4fe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40c4ff: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40c500: cmp byte ptr [ecx - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c504: jne 0x40c450 */
  if (!zf) goto L_40c450;
L_40c50a: /* 40c50a: xor ecx, ecx */
  ecx = 0;
/* 40c50c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40c50d: mov eax, ecx */
  eax = ecx;
L_40c50f: /* 40c50f: or byte ptr [eax + 0x449341], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x449341u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax + 0x449341u), r);
  }
/* 40c516: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40c517: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40c51c: jb 0x40c50f */
  if (cf) goto L_40c50f;
L_40c51e: /* 40c51e: mov eax, esi */
  eax = esi;
/* 40c520: call 0x411c50 */
  esp -= 4; W32(esp, 0x40c525u); SPILL(); f_411c50(); if (g_unwind) return; RELOAD();
/* 40c525: mov dword ptr [0x44b134], eax */
  W32((uint32_t)(0x44b134u), eax);
/* 40c52a: mov dword ptr [0x44b138], ecx */
  W32((uint32_t)(0x44b138u), ecx);
/* 40c530: jmp 0x405093 */
  goto L_405093;
L_40c535: /* 40c535: cmp dword ptr [0x44b110], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b110u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c53b: jne 0x4050b4 */
  if (!zf) goto L_4050b4;
L_40c541: /* 40c541: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40c544: jmp 0x4050a4 */
  goto L_4050a4;
}

void f_40514c(void) {
  LOAD_REGS();
L_40514c: /* 40514c: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 40514e: call 0x4011d9 */
  esp -= 4; W32(esp, 0x405153u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 405153: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 405154: ret  */
  esp += 4; SPILL(); return;
}

void f_405155(void) {
  LOAD_REGS();
L_405155: /* 405155: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 405156: mov ebp, esp */
  ebp = esp;
/* 405158: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 405159: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40515a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40515b: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 40515e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40515f: call dword ptr [0x439100] */
  esp -= 4; W32(esp, 0x405165u); SPILL(); call_ind(R32(0x439100u)); if (g_unwind) return; /* KERNEL32!GetSystemTimeAsFileTime */ RELOAD();
/* 405165: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 405167: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 405169: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40516b: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 40516e: call 0x40518c */
  esp -= 4; W32(esp, 0x405173u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 405173: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 405176: xor esi, esi */
  esi = 0;
/* 405178: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 40517a: adc edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 40517c: mov dword ptr [0x44b128], eax */
  W32((uint32_t)(0x44b128u), eax);
/* 405181: mov dword ptr [0x44b12c], edx */
  W32((uint32_t)(0x44b12cu), edx);
/* 405187: xor eax, eax */
  eax = 0;
/* 405189: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40518a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40518b: ret  */
  esp += 4; SPILL(); return;
}

void f_40518c(void) {
  LOAD_REGS();
L_40518c: /* 40518c: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 405190: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 405194: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 405196: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 40519a: je 0x407a01 */
  if (zf) goto L_407a01;
L_4051a0: /* 4051a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4051a1: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 4051a3: mov ebx, eax */
  ebx = eax;
/* 4051a5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4051a9: mul dword ptr [esp + 0x14] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x14u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 4051ad: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4051af: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4051b3: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 4051b5: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4051b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4051b8: ret 0x10 */
  esp += 20; SPILL(); return;
L_407a01: /* 407a01: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 407a05: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 407a07: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4051bb(void) {
  LOAD_REGS();
L_4051bb: /* 4051bb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4051bd: push dword ptr [0x44ab68] */
  { uint32_t v = R32((uint32_t)(0x44ab68u)); esp -= 4; W32(esp, v); }
/* 4051c3: call 0x4016cb */
  esp -= 4; W32(esp, 0x4051c8u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 4051c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4051ca: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4051cb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4051cc: mov dword ptr [0x44ab78], eax */
  W32((uint32_t)(0x44ab78u), eax);
/* 4051d1: je 0x40d4fd */
  if (zf) goto L_40d4fd;
L_4051d7: /* 4051d7: xor edx, edx */
  edx = 0;
/* 4051d9: mov ecx, 0x449568 */
  ecx = 0x449568u;
L_4051de: /* 4051de: mov dword ptr [edx + eax], ecx */
  W32((uint32_t)(edx + eax), ecx);
/* 4051e1: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4051e4: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4051e7: cmp ecx, 0x4497e8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4497e8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4051ed: jge 0x4051f6 */
  if ((sf == of)) goto L_4051f6;
L_4051ef: /* 4051ef: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 4051f4: jmp 0x4051de */
  goto L_4051de;
L_4051f6: /* 4051f6: xor ecx, ecx */
  ecx = 0;
/* 4051f8: mov edx, 0x449578 */
  edx = 0x449578u;
/* 4051fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_4051fe: /* 4051fe: mov esi, ecx */
  esi = ecx;
/* 405200: mov eax, ecx */
  eax = ecx;
/* 405202: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 405205: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 405208: mov esi, dword ptr [esi*4 + 0x449240] */
  esi = R32((uint32_t)(esi*4 + 0x449240u));
/* 40520f: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 405212: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 405215: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405218: jne 0x40522d */
  if (!zf) goto L_40522d;
L_40521a: /* 40521a: or dword ptr [edx], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edx), r);
  }
L_40521d: /* 40521d: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 405220: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 405221: cmp edx, 0x4495d8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4495d8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 405227: jl 0x4051fe */
  if ((sf != of)) goto L_4051fe;
L_405229: /* 405229: xor eax, eax */
  eax = 0;
/* 40522b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40522c: ret  */
  esp += 4; SPILL(); return;
L_40522d: /* 40522d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40522f: jne 0x40521d */
  if (!zf) goto L_40521d;
L_405231: /* 405231: jmp 0x40521a */
  goto L_40521a;
L_40d4fd: /* 40d4fd: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 40d4ff: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40d500: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40d502: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d503: mov dword ptr [0x44ab68], eax */
  W32((uint32_t)(0x44ab68u), eax);
/* 40d508: call 0x4016cb */
  esp -= 4; W32(esp, 0x40d50du); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 40d50d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d50f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d510: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d511: mov dword ptr [0x44ab78], eax */
  W32((uint32_t)(0x44ab78u), eax);
/* 40d516: jne 0x4051d7 */
  if (!zf) goto L_4051d7;
L_40d51c: /* 40d51c: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* 40d51e: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40d51f: ret  */
  esp += 4; SPILL(); return;
}

void f_405233(void) {
  LOAD_REGS();
L_405233: /* 405233: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 405234: mov ebp, esp */
  ebp = esp;
/* 405236: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 405239: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40523a: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 40523d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40523e: call dword ptr [0x439100] */
  esp -= 4; W32(esp, 0x405244u); SPILL(); call_ind(R32(0x439100u)); if (g_unwind) return; /* KERNEL32!GetSystemTimeAsFileTime */ RELOAD();
/* 405244: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 405247: xor esi, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 40524a: call dword ptr [0x4390fc] */
  esp -= 4; W32(esp, 0x405250u); SPILL(); call_ind(R32(0x4390fcu)); if (g_unwind) return; /* KERNEL32!GetCurrentProcessId */ RELOAD();
/* 405250: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 405252: call dword ptr [0x439024] */
  esp -= 4; W32(esp, 0x405258u); SPILL(); call_ind(R32(0x439024u)); if (g_unwind) return; /* KERNEL32!GetCurrentThreadId */ RELOAD();
/* 405258: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 40525a: call dword ptr [0x4390f8] */
  esp -= 4; W32(esp, 0x405260u); SPILL(); call_ind(R32(0x4390f8u)); if (g_unwind) return; /* KERNEL32!GetTickCount */ RELOAD();
/* 405260: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 405262: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 405265: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405266: call dword ptr [0x4390f4] */
  esp -= 4; W32(esp, 0x40526cu); SPILL(); call_ind(R32(0x4390f4u)); if (g_unwind) return; /* KERNEL32!QueryPerformanceCounter */ RELOAD();
/* 40526c: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 40526f: xor eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 405272: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  zf = (r) == 0;
  esi = r;
  }
/* 405274: mov dword ptr [0x44a9a8], esi */
  W32((uint32_t)(0x44a9a8u), esi);
/* 40527a: je 0x40cd85 */
  if (zf) goto L_40cd85;
L_405280: /* 405280: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 405281: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 405282: ret  */
  esp += 4; SPILL(); return;
L_40cd85: /* 40cd85: mov dword ptr [0x44a9a8], 0xbb40e64e */
  W32((uint32_t)(0x44a9a8u), 0xbb40e64eu);
/* 40cd8f: jmp 0x405280 */
  goto L_405280;
}

void f_405283(void) {
  LOAD_REGS();
L_405283: /* 405283: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 405287: mov dword ptr [0x44afbc], eax */
  W32((uint32_t)(0x44afbcu), eax);
/* 40528c: ret  */
  esp += 4; SPILL(); return;
}

void f_40528d(void) {
  LOAD_REGS();
L_40528d: /* 40528d: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 40528f: push 0x43e348 */
  { uint32_t v = 0x43e348u; esp -= 4; W32(esp, v); }
/* 405294: call 0x40101f */
  esp -= 4; W32(esp, 0x405299u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 405299: xor esi, esi */
  esi = 0;
/* 40529b: cmp dword ptr [0x44b124], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b124u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4052a1: jne 0x4052c5 */
  if (!zf) goto L_4052c5;
L_4052a3: /* 4052a3: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4052a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4052a7: xor edi, edi */
  edi = 0;
/* 4052a9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4052aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4052ab: push 0x43e0f4 */
  { uint32_t v = 0x43e0f4u; esp -= 4; W32(esp, v); }
/* 4052b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4052b1: call dword ptr [0x4390ec] */
  esp -= 4; W32(esp, 0x4052b7u); SPILL(); call_ind(R32(0x4390ecu)); if (g_unwind) return; /* KERNEL32!GetStringTypeW */ RELOAD();
/* 4052b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4052b9: je 0x40ccb1 */
  if (zf) goto L_40ccb1;
L_4052bf: /* 4052bf: mov dword ptr [0x44b124], edi */
  W32((uint32_t)(0x44b124u), edi);
L_4052c5: /* 4052c5: mov eax, dword ptr [0x44b124] */
  eax = R32((uint32_t)(0x44b124u));
/* 4052ca: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4052cd: je 0x4053a0 */
  if (zf) goto L_4053a0;
L_4052d3: /* 4052d3: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4052d5: je 0x4053a0 */
  if (zf) goto L_4053a0;
L_4052db: /* 4052db: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4052de: jne 0x4053b0 */
  if (!zf) goto L_4053b0;
L_4052e4: /* 4052e4: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 4052e7: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 4052ea: cmp dword ptr [ebp + 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4052ed: je 0x405393 */
  if (zf) goto L_405393;
L_4052f3: /* 4052f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4052f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4052f5: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4052f8: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4052fb: xor eax, eax */
  eax = 0;
/* 4052fd: cmp dword ptr [ebp + 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405300: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 405303: lea eax, [eax*8 + 1] */
  eax = (uint32_t)(eax*8 + 0x1u);
/* 40530a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40530b: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40530e: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x405314u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 405314: mov edi, eax */
  edi = eax;
/* 405316: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 405319: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40531b: je 0x4053b0 */
  if (zf) goto L_4053b0;
L_405321: /* 405321: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 405325: lea ebx, [edi + edi] */
  ebx = (uint32_t)(edi + edi);
/* 405328: mov eax, ebx */
  eax = ebx;
/* 40532a: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40532d: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 405330: call 0x4014ee */
  esp -= 4; W32(esp, 0x405335u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 405335: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 405338: mov esi, esp */
  esi = esp;
/* 40533a: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 40533d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40533e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 405340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405341: call 0x4010fd */
  esp -= 4; W32(esp, 0x405346u); SPILL(); hle_memset(); RELOAD();
/* 405346: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405349: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40534d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40534f: je 0x40cce9 */
  if (zf) goto L_40cce9;
L_405355: /* 405355: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405356: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405357: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40535a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40535d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40535f: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 405362: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x405368u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 405368: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40536a: je 0x40537d */
  if (zf) goto L_40537d;
L_40536c: /* 40536c: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40536f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405370: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405371: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 405374: call dword ptr [0x4390ec] */
  esp -= 4; W32(esp, 0x40537au); SPILL(); call_ind(R32(0x4390ecu)); if (g_unwind) return; /* KERNEL32!GetStringTypeW */ RELOAD();
/* 40537a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_40537d: /* 40537d: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405381: jne 0x40cd09 */
  if (!zf) goto L_40cd09;
L_405387: /* 405387: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_40538a: /* 40538a: lea esp, [ebp - 0x38] */
  esp = (uint32_t)(ebp + 0xffffffc8u);
/* 40538d: call 0x40105a */
  esp -= 4; W32(esp, 0x405392u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 405392: ret  */
  esp += 4; SPILL(); return;
L_405393: /* 405393: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 405398: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* 40539b: jmp 0x4052f3 */
  goto L_4052f3;
L_4053a0: /* 4053a0: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 4053a3: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4053a5: jne 0x40cd1b */
  if (!zf) goto L_40cd1b;
L_4053ab: /* 4053ab: jmp 0x40cd15 */
  goto L_40cd15;
L_4053b0: /* 4053b0: xor eax, eax */
  eax = 0;
/* 4053b2: jmp 0x40538a */
  goto L_40538a;
L_40ccb1: /* 40ccb1: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40ccb7u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40ccb7: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ccba: jne 0x4052c5 */
  if (!zf) goto L_4052c5;
L_40ccc0: /* 40ccc0: mov dword ptr [0x44b124], 2 */
  W32((uint32_t)(0x44b124u), 0x2u);
/* 40ccca: jmp 0x4052c5 */
  goto L_4052c5;
L_40cce9: /* 40cce9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40ccea: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40ccec: call 0x4016cb */
  esp -= 4; W32(esp, 0x40ccf1u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 40ccf1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ccf2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ccf3: mov esi, eax */
  esi = eax;
/* 40ccf5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40ccf7: je 0x4053b0 */
  if (zf) goto L_4053b0;
L_40ccfd: /* 40ccfd: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 40cd04: jmp 0x405355 */
  goto L_405355;
L_40cd09: /* 40cd09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cd0a: call 0x401156 */
  esp -= 4; W32(esp, 0x40cd0fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cd0f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cd10: jmp 0x405387 */
  goto L_405387;
L_40cd15: /* 40cd15: mov ebx, dword ptr [0x449220] */
  ebx = R32((uint32_t)(0x449220u));
L_40cd1b: /* 40cd1b: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 40cd1e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40cd20: jne 0x40cd28 */
  if (!zf) goto L_40cd28;
L_40cd22: /* 40cd22: mov edi, dword ptr [0x449230] */
  edi = R32((uint32_t)(0x449230u));
L_40cd28: /* 40cd28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cd29: call 0x4136de */
  esp -= 4; W32(esp, 0x40cd2eu); SPILL(); f_4136de(); if (g_unwind) return; RELOAD();
/* 40cd2e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cd2f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cd32: je 0x4053b0 */
  if (zf) goto L_4053b0;
L_40cd38: /* 40cd38: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cd3a: je 0x40cd5e */
  if (zf) goto L_40cd5e;
L_40cd3c: /* 40cd3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40cd3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40cd40: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 40cd43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40cd44: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40cd47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cd48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40cd49: call 0x413727 */
  esp -= 4; W32(esp, 0x40cd4eu); SPILL(); f_413727(); if (g_unwind) return; RELOAD();
/* 40cd4e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40cd51: mov esi, eax */
  esi = eax;
/* 40cd53: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40cd55: je 0x4053b0 */
  if (zf) goto L_4053b0;
L_40cd5b: /* 40cd5b: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
L_40cd5e: /* 40cd5e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40cd61: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40cd64: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40cd67: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40cd6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cd6b: call dword ptr [0x4390e8] */
  esp -= 4; W32(esp, 0x40cd71u); SPILL(); call_ind(R32(0x4390e8u)); if (g_unwind) return; /* KERNEL32!GetStringTypeA */ RELOAD();
/* 40cd71: mov edi, eax */
  edi = eax;
/* 40cd73: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40cd75: je 0x40cd7e */
  if (zf) goto L_40cd7e;
L_40cd77: /* 40cd77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cd78: call 0x401156 */
  esp -= 4; W32(esp, 0x40cd7du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cd7d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40cd7e: /* 40cd7e: mov eax, edi */
  eax = edi;
/* 40cd80: jmp 0x40538a */
  goto L_40538a;
}

void f_405393(void) {
  LOAD_REGS();
  goto L_405393;
L_4052f3: /* 4052f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4052f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4052f5: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4052f8: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4052fb: xor eax, eax */
  eax = 0;
/* 4052fd: cmp dword ptr [ebp + 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405300: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 405303: lea eax, [eax*8 + 1] */
  eax = (uint32_t)(eax*8 + 0x1u);
/* 40530a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40530b: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40530e: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x405314u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 405314: mov edi, eax */
  edi = eax;
/* 405316: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 405319: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40531b: je 0x4053b0 */
  if (zf) goto L_4053b0;
L_405321: /* 405321: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 405325: lea ebx, [edi + edi] */
  ebx = (uint32_t)(edi + edi);
/* 405328: mov eax, ebx */
  eax = ebx;
/* 40532a: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40532d: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 405330: call 0x4014ee */
  esp -= 4; W32(esp, 0x405335u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 405335: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 405338: mov esi, esp */
  esi = esp;
/* 40533a: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 40533d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40533e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 405340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405341: call 0x4010fd */
  esp -= 4; W32(esp, 0x405346u); SPILL(); hle_memset(); RELOAD();
/* 405346: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405349: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40534d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40534f: je 0x40cce9 */
  if (zf) goto L_40cce9;
L_405355: /* 405355: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405356: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405357: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40535a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40535d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40535f: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 405362: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x405368u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 405368: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40536a: je 0x40537d */
  if (zf) goto L_40537d;
L_40536c: /* 40536c: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40536f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405370: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405371: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 405374: call dword ptr [0x4390ec] */
  esp -= 4; W32(esp, 0x40537au); SPILL(); call_ind(R32(0x4390ecu)); if (g_unwind) return; /* KERNEL32!GetStringTypeW */ RELOAD();
/* 40537a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_40537d: /* 40537d: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405381: jne 0x40cd09 */
  if (!zf) goto L_40cd09;
L_405387: /* 405387: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_40538a: /* 40538a: lea esp, [ebp - 0x38] */
  esp = (uint32_t)(ebp + 0xffffffc8u);
/* 40538d: call 0x40105a */
  esp -= 4; W32(esp, 0x405392u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 405392: ret  */
  esp += 4; SPILL(); return;
L_405393: /* 405393: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 405398: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* 40539b: jmp 0x4052f3 */
  goto L_4052f3;
L_4053b0: /* 4053b0: xor eax, eax */
  eax = 0;
/* 4053b2: jmp 0x40538a */
  goto L_40538a;
L_40cce9: /* 40cce9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40ccea: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40ccec: call 0x4016cb */
  esp -= 4; W32(esp, 0x40ccf1u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 40ccf1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ccf2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ccf3: mov esi, eax */
  esi = eax;
/* 40ccf5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40ccf7: je 0x4053b0 */
  if (zf) goto L_4053b0;
L_40ccfd: /* 40ccfd: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 40cd04: jmp 0x405355 */
  goto L_405355;
L_40cd09: /* 40cd09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cd0a: call 0x401156 */
  esp -= 4; W32(esp, 0x40cd0fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cd0f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cd10: jmp 0x405387 */
  goto L_405387;
}

void f_4053a0(void) {
  LOAD_REGS();
  goto L_4053a0;
L_40538a: /* 40538a: lea esp, [ebp - 0x38] */
  esp = (uint32_t)(ebp + 0xffffffc8u);
/* 40538d: call 0x40105a */
  esp -= 4; W32(esp, 0x405392u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 405392: ret  */
  esp += 4; SPILL(); return;
L_4053a0: /* 4053a0: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 4053a3: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4053a5: jne 0x40cd1b */
  if (!zf) goto L_40cd1b;
L_4053ab: /* 4053ab: jmp 0x40cd15 */
  goto L_40cd15;
L_4053b0: /* 4053b0: xor eax, eax */
  eax = 0;
/* 4053b2: jmp 0x40538a */
  goto L_40538a;
L_40cd15: /* 40cd15: mov ebx, dword ptr [0x449220] */
  ebx = R32((uint32_t)(0x449220u));
L_40cd1b: /* 40cd1b: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 40cd1e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40cd20: jne 0x40cd28 */
  if (!zf) goto L_40cd28;
L_40cd22: /* 40cd22: mov edi, dword ptr [0x449230] */
  edi = R32((uint32_t)(0x449230u));
L_40cd28: /* 40cd28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cd29: call 0x4136de */
  esp -= 4; W32(esp, 0x40cd2eu); SPILL(); f_4136de(); if (g_unwind) return; RELOAD();
/* 40cd2e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cd2f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cd32: je 0x4053b0 */
  if (zf) goto L_4053b0;
L_40cd38: /* 40cd38: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cd3a: je 0x40cd5e */
  if (zf) goto L_40cd5e;
L_40cd3c: /* 40cd3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40cd3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40cd40: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 40cd43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40cd44: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40cd47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cd48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40cd49: call 0x413727 */
  esp -= 4; W32(esp, 0x40cd4eu); SPILL(); f_413727(); if (g_unwind) return; RELOAD();
/* 40cd4e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40cd51: mov esi, eax */
  esi = eax;
/* 40cd53: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40cd55: je 0x4053b0 */
  if (zf) goto L_4053b0;
L_40cd5b: /* 40cd5b: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
L_40cd5e: /* 40cd5e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40cd61: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40cd64: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40cd67: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40cd6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cd6b: call dword ptr [0x4390e8] */
  esp -= 4; W32(esp, 0x40cd71u); SPILL(); call_ind(R32(0x4390e8u)); if (g_unwind) return; /* KERNEL32!GetStringTypeA */ RELOAD();
/* 40cd71: mov edi, eax */
  edi = eax;
/* 40cd73: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40cd75: je 0x40cd7e */
  if (zf) goto L_40cd7e;
L_40cd77: /* 40cd77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cd78: call 0x401156 */
  esp -= 4; W32(esp, 0x40cd7du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cd7d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40cd7e: /* 40cd7e: mov eax, edi */
  eax = edi;
/* 40cd80: jmp 0x40538a */
  goto L_40538a;
}

void f_4053f1(void) {
  LOAD_REGS();
  goto L_4053f1;
L_4053b4: /* 4053b4: and edx, 0xffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4053ba: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 4053bc: jmp 0x405485 */
  goto L_405485;
L_4053c1: /* 4053c1: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4053c7: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 4053c9: jmp 0x405485 */
  goto L_405485;
L_4053ce: /* 4053ce: mov ebx, ecx */
  ebx = ecx;
/* 4053d0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  ecx = r;
  }
/* 4053d3: jne 0x405417 */
  if (!zf) goto L_405417;
L_4053d5: /* 4053d5: jmp 0x40543b */
  goto L_40543b;
L_4053d7: /* 4053d7: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 4053d9: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4053dc: jmp 0x405452 */
  goto L_405452;
L_4053de: /* 4053de: xor edx, edx */
  edx = 0;
/* 4053e0: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 4053e2: jmp 0x405485 */
  goto L_405485;
L_4053e7: /* 4053e7: sub ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ebx = r;
  }
/* 4053ea: jne 0x405444 */
  if (!zf) goto L_405444;
L_4053ec: /* 4053ec: jmp 0x4070b5 */
  goto L_4070b5;
L_4053f1: /* 4053f1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4053f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4053f6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4053f8: je 0x405459 */
  if (zf) goto L_405459;
L_4053fa: /* 4053fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4053fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4053fc: mov ebx, ecx */
  ebx = ecx;
/* 4053fe: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 405402: test esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 405408: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 40540c: jne 0x407095 */
  if (!zf) goto L_407095;
L_405412: /* 405412: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  ecx = r;
  }
/* 405415: je 0x405444 */
  if (zf) goto L_405444;
L_405417: /* 405417: mov edx, 0x7efefeff */
  edx = 0x7efefeffu;
/* 40541c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 40541e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 405420: xor eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 405423: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 405425: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 405427: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40542a: test eax, 0x81010100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x81010100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40542f: jne 0x40545f */
  if (!zf) goto L_40545f;
L_405431: /* 405431: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 405433: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 405436: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 405439: jne 0x405417 */
  if (!zf) goto L_405417;
L_40543b: /* 40543b: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ebx = r;
  }
/* 40543e: je 0x4070b5 */
  if (zf) goto L_4070b5;
L_405444: /* 405444: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 405446: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 405449: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 40544b: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40544e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 405450: jne 0x4053e7 */
  if (!zf) goto L_4053e7;
L_405452: /* 405452: sub ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ebx = r;
  }
/* 405455: jne 0x4053d7 */
  if (!zf) goto L_4053d7;
L_405457: /* 405457: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 405458: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_405459: /* 405459: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 40545d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40545e: ret  */
  esp += 4; SPILL(); return;
L_40545f: /* 40545f: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 405461: je 0x4053de */
  if (zf) goto L_4053de;
L_405467: /* 405467: test dh, dh */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 405469: je 0x4053c1 */
  if (zf) goto L_4053c1;
L_40546f: /* 40546f: test edx, 0xff0000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xff0000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 405475: je 0x4053b4 */
  if (zf) goto L_4053b4;
L_40547b: /* 40547b: test edx, 0xff000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xff000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 405481: jne 0x405431 */
  if (!zf) goto L_405431;
L_405483: /* 405483: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
L_405485: /* 405485: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 405488: xor eax, eax */
  eax = 0;
/* 40548a: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 40548d: jne 0x4054a0 */
  if (!zf) goto L_4054a0;
L_40548f: /* 40548f: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ebx = r;
  }
/* 405492: jne 0x4053d7 */
  if (!zf) goto L_4053d7;
L_405498: /* 405498: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 40549c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40549d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40549e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40549f: ret  */
  esp += 4; SPILL(); return;
L_4054a0: /* 4054a0: xor eax, eax */
  eax = 0;
L_4054a2: /* 4054a2: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 4054a4: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4054a7: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 4054aa: jne 0x4054a2 */
  if (!zf) goto L_4054a2;
L_4054ac: /* 4054ac: jmp 0x40548f */
  goto L_40548f;
L_407095: /* 407095: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407097: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40709a: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 40709c: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40709f: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 4070a2: je 0x4070b5 */
  if (zf) goto L_4070b5;
L_4070a4: /* 4070a4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4070a6: je 0x4070bd */
  if (zf) goto L_4070bd;
L_4070a8: /* 4070a8: test esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4070ae: jne 0x407095 */
  if (!zf) goto L_407095;
L_4070b0: /* 4070b0: jmp 0x4053ce */
  goto L_4053ce;
L_4070b5: /* 4070b5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4070b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4070ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4070bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4070bc: ret  */
  esp += 4; SPILL(); return;
L_4070bd: /* 4070bd: test edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4070c3: je 0x4070db */
  if (zf) goto L_4070db;
L_4070c5: /* 4070c5: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 4070c7: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4070ca: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 4070cd: je 0x405498 */
  if (zf) goto L_405498;
L_4070d3: /* 4070d3: test edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4070d9: jne 0x4070c5 */
  if (!zf) goto L_4070c5;
L_4070db: /* 4070db: mov ebx, ecx */
  ebx = ecx;
/* 4070dd: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  ecx = r;
  }
/* 4070e0: jne 0x4054a0 */
  if (!zf) goto L_4054a0;
L_4070e6: /* 4070e6: jmp 0x4053d7 */
  goto L_4053d7;
}

void f_4054ae(void) {
  LOAD_REGS();
L_4054ae: /* 4054ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4054af: mov ebp, esp */
  ebp = esp;
/* 4054b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4054b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4054b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4054b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4054b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4054b6: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 4054bb: mov esi, 0x44b7a8 */
  esi = 0x44b7a8u;
/* 4054c0: xor edi, edi */
  edi = 0;
/* 4054c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4054c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4054c4: mov word ptr [0x44b9b0], di */
  W16((uint32_t)(0x44b9b0u), (edi & 0xffffu));
/* 4054cb: call dword ptr [0x439004] */
  esp -= 4; W32(esp, 0x4054d1u); SPILL(); call_ind(R32(0x439004u)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameW */ RELOAD();
/* 4054d1: mov eax, dword ptr [0x44920c] */
  eax = R32((uint32_t)(0x44920cu));
/* 4054d6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4054d8: mov dword ptr [0x449208], esi */
  W32((uint32_t)(0x449208u), esi);
/* 4054de: je 0x405541 */
  if (zf) goto L_405541;
L_4054e0: /* 4054e0: cmp word ptr [eax], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4054e3: mov ebx, eax */
  ebx = eax;
/* 4054e5: je 0x405541 */
  if (zf) goto L_405541;
L_4054e7: /* 4054e7: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 4054ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4054eb: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 4054ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4054ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4054f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4054f1: xor eax, eax */
  eax = 0;
/* 4054f3: call 0x406365 */
  esp -= 4; W32(esp, 0x4054f8u); SPILL(); f_406365(); if (g_unwind) return; RELOAD();
/* 4054f8: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4054fb: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4054fe: lea eax, [eax + edi*2] */
  eax = (uint32_t)(eax + edi*2);
/* 405501: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 405503: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405504: call 0x4010eb */
  esp -= 4; W32(esp, 0x405509u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 405509: mov esi, eax */
  esi = eax;
/* 40550b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40550e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 405510: je 0x40bf36 */
  if (zf) goto L_40bf36;
L_405516: /* 405516: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 405519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40551a: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 40551d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40551e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40551f: lea eax, [esi + edi*4] */
  eax = (uint32_t)(esi + edi*4);
/* 405522: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405523: call 0x406365 */
  esp -= 4; W32(esp, 0x405528u); SPILL(); f_406365(); if (g_unwind) return; RELOAD();
/* 405528: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 40552b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40552e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 40552f: mov dword ptr [0x4491e8], eax */
  W32((uint32_t)(0x4491e8u), eax);
/* 405534: mov dword ptr [0x4491f0], esi */
  W32((uint32_t)(0x4491f0u), esi);
/* 40553a: xor eax, eax */
  eax = 0;
L_40553c: /* 40553c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40553d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40553e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40553f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 405540: ret  */
  esp += 4; SPILL(); return;
L_405541: /* 405541: mov ebx, esi */
  ebx = esi;
/* 405543: jmp 0x4054e7 */
  goto L_4054e7;
L_40bf36: /* 40bf36: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40bf39: jmp 0x40553c */
  goto L_40553c;
}

void f_405561(void) {
  LOAD_REGS();
L_405561: /* 405561: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 405562: mov ebp, esp */
  ebp = esp;
/* 405564: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405565: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405566: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 405569: push 0x90 */
  { uint32_t v = 0x90u; esp -= 4; W32(esp, v); }
/* 40556e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 405570: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405571: call 0x4010fd */
  esp -= 4; W32(esp, 0x405576u); SPILL(); hle_memset(); RELOAD();
/* 405576: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 405579: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40557b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40557e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 405580: jne 0x40c77d */
  if (!zf) goto L_40c77d;
L_405586: /* 405586: xor eax, eax */
  eax = 0;
L_405588: /* 405588: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 405589: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40558a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 40558b: ret  */
  esp += 4; SPILL(); return;
L_40c77d: /* 40c77d: cmp al, 0x2e */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c77f: jne 0x40c79d */
  if (!zf) goto L_40c79d;
L_40c781: /* 40c781: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 40c784: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c787: je 0x40c79d */
  if (zf) goto L_40c79d;
L_40c789: /* 40c789: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c78a: add edi, 0x80 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40c790: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40c791: call 0x404b3a */
  esp -= 4; W32(esp, 0x40c796u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 40c796: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c797: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c798: jmp 0x405586 */
  goto L_405586;
L_40c79d: /* 40c79d: and dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 40c7a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40c7a2: jmp 0x40c80f */
  goto L_40c80f;
L_40c7a4: /* 40c7a4: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c7a8: lea edi, [eax + esi] */
  edi = (uint32_t)(eax + esi);
/* 40c7ab: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 40c7ad: jne 0x40c7c0 */
  if (!zf) goto L_40c7c0;
L_40c7af: /* 40c7af: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40c7b2: jae 0x40c820 */
  if (!cf) goto L_40c820;
L_40c7b4: /* 40c7b4: cmp bl, 0x2e */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c7b7: je 0x40c820 */
  if (zf) goto L_40c820;
L_40c7b9: /* 40c7b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c7ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c7bb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40c7be: jmp 0x40c7f8 */
  goto L_40c7f8;
L_40c7c0: /* 40c7c0: cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c7c4: jne 0x40c7d9 */
  if (!zf) goto L_40c7d9;
L_40c7c6: /* 40c7c6: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40c7c9: jae 0x40c820 */
  if (!cf) goto L_40c820;
L_40c7cb: /* 40c7cb: cmp bl, 0x5f */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c7ce: je 0x40c820 */
  if (zf) goto L_40c820;
L_40c7d0: /* 40c7d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c7d1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40c7d4: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40c7d7: jmp 0x40c7f6 */
  goto L_40c7f6;
L_40c7d9: /* 40c7d9: cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c7dd: jne 0x40c820 */
  if (!zf) goto L_40c820;
L_40c7df: /* 40c7df: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40c7e2: jae 0x40c820 */
  if (!cf) goto L_40c820;
L_40c7e4: /* 40c7e4: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40c7e6: je 0x40c7ed */
  if (zf) goto L_40c7ed;
L_40c7e8: /* 40c7e8: cmp bl, 0x2c */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c7eb: jne 0x40c820 */
  if (!zf) goto L_40c820;
L_40c7ed: /* 40c7ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c7ee: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40c7f1: add eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_40c7f6: /* 40c7f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c7f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_40c7f8: /* 40c7f8: call 0x4053f1 */
  esp -= 4; W32(esp, 0x40c7fdu); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 40c7fd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40c800: cmp bl, 0x2c */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c803: je 0x40c829 */
  if (zf) goto L_40c829;
L_40c805: /* 40c805: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40c807: je 0x40c829 */
  if (zf) goto L_40c829;
L_40c809: /* 40c809: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 40c80c: lea esi, [edi + 1] */
  esi = (uint32_t)(edi + 0x1u);
L_40c80f: /* 40c80f: push 0x43eac4 */
  { uint32_t v = 0x43eac4u; esp -= 4; W32(esp, v); }
/* 40c814: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c815: call 0x407848 */
  esp -= 4; W32(esp, 0x40c81au); SPILL(); f_407848(); if (g_unwind) return; RELOAD();
/* 40c81a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c81c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c81d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c81e: jne 0x40c7a4 */
  if (!zf) goto L_40c7a4;
L_40c820: /* 40c820: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_40c823: /* 40c823: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40c824: jmp 0x405588 */
  goto L_405588;
L_40c829: /* 40c829: xor eax, eax */
  eax = 0;
/* 40c82b: jmp 0x40c823 */
  goto L_40c823;
}

void f_40558c(void) {
  LOAD_REGS();
L_40558c: /* 40558c: or word ptr [0x44b9c8], 0x104 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x44b9c8u))); uint16_t b = (uint16_t)(0x104u);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(0x44b9c8u), r);
  }
/* 405595: call dword ptr [0x43910c] */
  esp -= 4; W32(esp, 0x40559bu); SPILL(); call_ind(R32(0x43910cu)); if (g_unwind) return; /* KERNEL32!GetUserDefaultLCID */ RELOAD();
/* 40559b: mov dword ptr [0x44b9d0], eax */
  W32((uint32_t)(0x44b9d0u), eax);
/* 4055a0: mov dword ptr [0x44b9cc], eax */
  W32((uint32_t)(0x44b9ccu), eax);
/* 4055a5: ret  */
  esp += 4; SPILL(); return;
}

void f_4055bf(void) {
  LOAD_REGS();
L_4055bf: /* 4055bf: xor eax, eax */
  eax = 0;
/* 4055c1: ret  */
  esp += 4; SPILL(); return;
}

void f_4055c2(void) {
  LOAD_REGS();
L_4055c2: /* 4055c2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4055c3: mov ebp, esp */
  ebp = esp;
/* 4055c5: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4055c8: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4055cd: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4055d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4055d1: xor ebx, ebx */
  ebx = 0;
/* 4055d3: cmp dword ptr [0x449220], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449220u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4055d9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4055dc: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 4055df: je 0x40d1e8 */
  if (zf) goto L_40d1e8;
L_4055e5: /* 4055e5: cmp dword ptr [0x449230], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449230u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4055eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4055ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4055ed: je 0x40d12c */
  if (zf) goto L_40d12c;
L_4055f3: /* 4055f3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4055f5: call 0x4010eb */
  esp -= 4; W32(esp, 0x4055fau); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4055fa: mov esi, eax */
  esi = eax;
/* 4055fc: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4055ff: mov dword ptr [esp], 0x202 */
  W32((uint32_t)(esp), 0x202u);
/* 405606: call 0x4010eb */
  esp -= 4; W32(esp, 0x40560bu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40560b: mov edi, eax */
  edi = eax;
/* 40560d: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* 405610: mov dword ptr [esp], 0x101 */
  W32((uint32_t)(esp), 0x101u);
/* 405617: call 0x4010eb */
  esp -= 4; W32(esp, 0x40561cu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40561c: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40561e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40561f: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 405622: je 0x4056d2 */
  if (zf) goto L_4056d2;
L_405628: /* 405628: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40562a: je 0x4056d2 */
  if (zf) goto L_4056d2;
L_405630: /* 405630: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405632: je 0x4056d2 */
  if (zf) goto L_4056d2;
L_405638: /* 405638: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 40563a: xor eax, eax */
  eax = 0;
L_40563c: /* 40563c: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 40563f: mov byte ptr [eax + ecx], al */
  W8((uint32_t)(eax + ecx), (eax & 0xffu));
/* 405642: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 405643: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 405648: jl 0x40563c */
  if ((sf != of)) goto L_40563c;
L_40564a: /* 40564a: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 40564d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40564e: push dword ptr [0x449230] */
  { uint32_t v = R32((uint32_t)(0x449230u)); esp -= 4; W32(esp, v); }
/* 405654: call dword ptr [0x4390b4] */
  esp -= 4; W32(esp, 0x40565au); SPILL(); call_ind(R32(0x4390b4u)); if (g_unwind) return; /* KERNEL32!GetCPInfo */ RELOAD();
/* 40565a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40565c: je 0x4056d2 */
  if (zf) goto L_4056d2;
L_40565e: /* 40565e: cmp dword ptr [ebp - 0x24], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 405662: ja 0x4056d2 */
  if ((!cf && !zf)) goto L_4056d2;
L_405664: /* 405664: movzx eax, word ptr [ebp - 0x24] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffdcu)));
/* 405668: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40566b: mov dword ptr [0x44902c], eax */
  W32((uint32_t)(0x44902cu), eax);
/* 405670: jg 0x40d154 */
  if ((!zf && sf == of)) goto L_40d154;
L_405676: /* 405676: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405677: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405678: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405679: lea esi, [edi + 2] */
  esi = (uint32_t)(edi + 0x2u);
/* 40567c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40567d: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 405682: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 405685: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 405687: call 0x40528d */
  esp -= 4; W32(esp, 0x40568cu); SPILL(); f_40528d(); if (g_unwind) return; RELOAD();
/* 40568c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40568f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 405691: je 0x4056d2 */
  if (zf) goto L_4056d2;
L_405693: /* 405693: mov word ptr [edi], bx */
  W16((uint32_t)(edi), (ebx & 0xffffu));
/* 405696: cmp dword ptr [0x44902c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44902cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40569d: jg 0x40d18d */
  if ((!zf && sf == of)) goto L_40d18d;
L_4056a3: /* 4056a3: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4056a6: mov dword ptr [0x449030], esi */
  W32((uint32_t)(0x449030u), esi);
/* 4056ac: mov dword ptr [0x44ba18], eax */
  W32((uint32_t)(0x44ba18u), eax);
/* 4056b1: mov dword ptr [0x44ba14], edi */
  W32((uint32_t)(0x44ba14u), edi);
L_4056b7: /* 4056b7: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 4056ba: call 0x401156 */
  esp -= 4; W32(esp, 0x4056bfu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4056bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4056c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4056c1: mov eax, ebx */
  eax = ebx;
/* 4056c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4056c4: /* 4056c4: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4056c7: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4056ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4056cb: call 0x4013ab */
  esp -= 4; W32(esp, 0x4056d0u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4056d0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4056d1: ret  */
  esp += 4; SPILL(); return;
L_4056d2: /* 4056d2: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 4056d5: call 0x401156 */
  esp -= 4; W32(esp, 0x4056dau); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4056da: jmp 0x40d1d8 */
  goto L_40d1d8;
L_40d12c: /* 40d12c: movzx eax, word ptr [0x44b9ec] */
  eax = (uint32_t)(R16((uint32_t)(0x44b9ecu)));
/* 40d133: push 0x449230 */
  { uint32_t v = 0x449230u; esp -= 4; W32(esp, v); }
/* 40d138: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* 40d13d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d13e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d13f: call 0x405d09 */
  esp -= 4; W32(esp, 0x40d144u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 40d144: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40d147: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d149: jne 0x40d1d0 */
  if (!zf) goto L_40d1d0;
L_40d14f: /* 40d14f: jmp 0x4055f3 */
  goto L_4055f3;
L_40d154: /* 40d154: cmp byte ptr [ebp - 0x1e], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe2u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40d157: je 0x405676 */
  if (zf) goto L_405676;
L_40d15d: /* 40d15d: lea eax, [ebp - 0x1d] */
  eax = (uint32_t)(ebp + 0xffffffe3u);
L_40d160: /* 40d160: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 40d162: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40d164: je 0x405676 */
  if (zf) goto L_405676;
L_40d16a: /* 40d16a: movzx ecx, byte ptr [eax - 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* 40d16e: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 40d171: jmp 0x40d17d */
  goto L_40d17d;
L_40d173: /* 40d173: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 40d176: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 40d179: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 40d17c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_40d17d: /* 40d17d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40d17f: jle 0x40d173 */
  if ((zf || sf != of)) goto L_40d173;
L_40d181: /* 40d181: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40d182: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40d183: cmp byte ptr [eax - 1], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xffffffffu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40d186: jne 0x40d160 */
  if (!zf) goto L_40d160;
L_40d188: /* 40d188: jmp 0x405676 */
  goto L_405676;
L_40d18d: /* 40d18d: cmp byte ptr [ebp - 0x1e], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe2u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40d190: je 0x4056a3 */
  if (zf) goto L_4056a3;
L_40d196: /* 40d196: lea eax, [ebp - 0x1d] */
  eax = (uint32_t)(ebp + 0xffffffe3u);
L_40d199: /* 40d199: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 40d19b: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40d19d: je 0x4056a3 */
  if (zf) goto L_4056a3;
L_40d1a3: /* 40d1a3: movzx ecx, byte ptr [eax - 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* 40d1a7: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 40d1aa: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40d1ac: jg 0x40d1c4 */
  if ((!zf && sf == of)) goto L_40d1c4;
L_40d1ae: /* 40d1ae: lea edx, [edi + ecx*2 + 2] */
  edx = (uint32_t)(edi + ecx*2 + 0x2u);
L_40d1b2: /* 40d1b2: mov word ptr [edx], 0x8000 */
  W16((uint32_t)(edx), 0x8000u);
/* 40d1b7: movzx edi, byte ptr [eax] */
  edi = (uint32_t)(R8((uint32_t)(eax)));
/* 40d1ba: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40d1bb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40d1bc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40d1bd: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40d1bf: jle 0x40d1b2 */
  if ((zf || sf != of)) goto L_40d1b2;
L_40d1c1: /* 40d1c1: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
L_40d1c4: /* 40d1c4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40d1c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40d1c6: cmp byte ptr [eax - 1], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xffffffffu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40d1c9: jne 0x40d199 */
  if (!zf) goto L_40d199;
L_40d1cb: /* 40d1cb: jmp 0x4056a3 */
  goto L_4056a3;
L_40d1d0: /* 40d1d0: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 40d1d3: jmp 0x4056d2 */
  goto L_4056d2;
L_40d1d8: /* 40d1d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d1d9: call 0x401156 */
  esp -= 4; W32(esp, 0x40d1deu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d1de: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d1df: xor ebx, ebx */
  ebx = 0;
/* 40d1e1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d1e2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 40d1e3: jmp 0x4056b7 */
  goto L_4056b7;
L_40d1e8: /* 40d1e8: mov dword ptr [0x449030], 0x43926a */
  W32((uint32_t)(0x449030u), 0x43926au);
/* 40d1f2: mov dword ptr [0x44ba18], ebx */
  W32((uint32_t)(0x44ba18u), ebx);
/* 40d1f8: mov dword ptr [0x44ba14], ebx */
  W32((uint32_t)(0x44ba14u), ebx);
/* 40d1fe: xor eax, eax */
  eax = 0;
/* 40d200: jmp 0x4056c4 */
  goto L_4056c4;
}

void f_40570e(void) {
  LOAD_REGS();
L_40570e: /* 40570e: mov eax, 0x4491e8 */
  eax = 0x4491e8u;
/* 405713: ret  */
  esp += 4; SPILL(); return;
}

void f_405714(void) {
  LOAD_REGS();
L_405714: /* 405714: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 405715: mov ebp, esp */
  ebp = esp;
/* 405717: cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40571b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 40571e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 405720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405721: mov dword ptr [0x44a854], eax */
  W32((uint32_t)(0x44a854u), eax);
/* 405726: jne 0x40bba7 */
  if (!zf) goto L_40bba7;
L_40572c: /* 40572c: call 0x4054ae */
  esp -= 4; W32(esp, 0x405731u); SPILL(); f_4054ae(); if (g_unwind) return; RELOAD();
L_405731: /* 405731: mov esi, eax */
  esi = eax;
/* 405733: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 405735: jl 0x405766 */
  if ((sf != of)) goto L_405766;
L_405737: /* 405737: mov ecx, dword ptr [0x4491e8] */
  ecx = R32((uint32_t)(0x4491e8u));
/* 40573d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 405740: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 405742: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 405745: mov ecx, dword ptr [0x4491f0] */
  ecx = R32((uint32_t)(0x4491f0u));
/* 40574b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 40574d: cmp dword ptr [0x4491fc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491fcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405754: jne 0x40575b */
  if (!zf) goto L_40575b;
L_405756: /* 405756: call 0x40576b */
  esp -= 4; W32(esp, 0x40575bu); SPILL(); f_40576b(); if (g_unwind) return; RELOAD();
L_40575b: /* 40575b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 40575e: mov ecx, dword ptr [0x4491fc] */
  ecx = R32((uint32_t)(0x4491fcu));
/* 405764: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_405766: /* 405766: mov eax, esi */
  eax = esi;
/* 405768: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 405769: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 40576a: ret  */
  esp += 4; SPILL(); return;
L_40bba7: /* 40bba7: call 0x40f6e4 */
  esp -= 4; W32(esp, 0x40bbacu); SPILL(); f_40f6e4(); if (g_unwind) return; RELOAD();
/* 40bbac: jmp 0x405731 */
  goto L_405731;
}

void f_40576b(void) {
  LOAD_REGS();
L_40576b: /* 40576b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40576c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40576d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40576e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40576f: mov esi, dword ptr [0x4491f4] */
  esi = R32((uint32_t)(0x4491f4u));
/* 405775: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 405777: xor ebp, ebp */
  ebp = 0;
/* 405779: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40577b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40577c: je 0x4057c8 */
  if (zf) goto L_4057c8;
L_40577e: /* 40577e: mov ebx, dword ptr [0x4390bc] */
  ebx = R32((uint32_t)(0x4390bcu));
L_405784: /* 405784: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 405785: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 405786: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 405788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405789: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40578a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40578b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x40578du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40578d: mov edi, eax */
  edi = eax;
/* 40578f: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405791: je 0x4057d0 */
  if (zf) goto L_4057d0;
L_405793: /* 405793: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 405796: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405797: call 0x4010eb */
  esp -= 4; W32(esp, 0x40579cu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40579c: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40579e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40579f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 4057a3: je 0x4057d0 */
  if (zf) goto L_4057d0;
L_4057a5: /* 4057a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4057a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4057a7: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4057a9: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4057ab: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4057ac: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4057ad: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x4057afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4057af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4057b1: je 0x4057d0 */
  if (zf) goto L_4057d0;
L_4057b3: /* 4057b3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4057b4: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4057b8: call 0x4057d5 */
  esp -= 4; W32(esp, 0x4057bdu); SPILL(); f_4057d5(); if (g_unwind) return; RELOAD();
/* 4057bd: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4057c0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4057c2: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4057c4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4057c5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4057c6: jne 0x405784 */
  if (!zf) goto L_405784;
L_4057c8: /* 4057c8: xor eax, eax */
  eax = 0;
L_4057ca: /* 4057ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4057cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4057cc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4057cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4057ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4057cf: ret  */
  esp += 4; SPILL(); return;
L_4057d0: /* 4057d0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4057d3: jmp 0x4057ca */
  goto L_4057ca;
}

void f_4057d5(void) {
  LOAD_REGS();
L_4057d5: /* 4057d5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4057d6: mov ebp, esp */
  ebp = esp;
/* 4057d8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4057db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4057dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4057dd: xor esi, esi */
  esi = 0;
/* 4057df: cmp dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4057e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4057e3: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 4057e6: je 0x406bd0 */
  if (zf) goto L_406bd0;
L_4057ec: /* 4057ec: push 0x3d */
  { uint32_t v = 0x3du; esp -= 4; W32(esp, v); }
/* 4057ee: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4057f1: call 0x401195 */
  esp -= 4; W32(esp, 0x4057f6u); SPILL(); f_401195(); if (g_unwind) return; RELOAD();
/* 4057f6: mov ebx, eax */
  ebx = eax;
/* 4057f8: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4057fa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4057fb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4057fc: je 0x406bd0 */
  if (zf) goto L_406bd0;
L_405802: /* 405802: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405805: je 0x406bd0 */
  if (zf) goto L_406bd0;
L_40580b: /* 40580b: xor eax, eax */
  eax = 0;
/* 40580d: cmp word ptr [ebx + 2], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x2u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 405811: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 405814: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 405817: mov eax, dword ptr [0x4491fc] */
  eax = R32((uint32_t)(0x4491fcu));
/* 40581c: cmp eax, dword ptr [0x449200] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x449200u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405822: je 0x4067d8 */
  if (zf) goto L_4067d8;
L_405828: /* 405828: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40582a: je 0x406b90 */
  if (zf) goto L_406b90;
L_405830: /* 405830: sub ebx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 405833: mov eax, dword ptr [0x4491fc] */
  eax = R32((uint32_t)(0x4491fcu));
/* 405838: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40583b: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 40583d: mov edi, ebx */
  edi = ebx;
/* 40583f: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 405842: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 405845: call 0x4058a9 */
  esp -= 4; W32(esp, 0x40584au); SPILL(); f_4058a9(); if (g_unwind) return; RELOAD();
/* 40584a: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 40584d: mov ebx, eax */
  ebx = eax;
/* 40584f: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 405851: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 405852: jge 0x406bc3 */
  if ((sf == of)) goto L_406bc3;
L_405858: /* 405858: cmp dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40585b: jne 0x40cfcb */
  if (!zf) goto L_40cfcb;
L_405861: /* 405861: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 405863: jge 0x405867 */
  if ((sf == of)) goto L_405867;
L_405865: /* 405865: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
L_405867: /* 405867: lea eax, [ebx*4 + 8] */
  eax = (uint32_t)(ebx*4 + 0x8u);
/* 40586e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40586f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405870: call 0x401c76 */
  esp -= 4; W32(esp, 0x405875u); SPILL(); f_401c76(); if (g_unwind) return; RELOAD();
/* 405875: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405877: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 405878: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 405879: je 0x406bd0 */
  if (zf) goto L_406bd0;
L_40587f: /* 40587f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 405882: lea ebx, [eax + ebx*4] */
  ebx = (uint32_t)(eax + ebx*4);
/* 405885: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 405887: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
L_40588a: /* 40588a: mov dword ptr [0x4491fc], eax */
  W32((uint32_t)(0x4491fcu), eax);
L_40588f: /* 40588f: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405892: jne 0x40ce85 */
  if (!zf) goto L_40ce85;
L_405898: /* 405898: cmp dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40589b: jne 0x40cfbd */
  if (!zf) goto L_40cfbd;
L_4058a1: /* 4058a1: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_4058a4: /* 4058a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4058a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4058a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4058a7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4058a8: ret  */
  esp += 4; SPILL(); return;
L_4067d8: /* 4067d8: mov edi, eax */
  edi = eax;
/* 4067da: call 0x4067e9 */
  esp -= 4; W32(esp, 0x4067dfu); SPILL(); f_4067e9(); if (g_unwind) return; RELOAD();
/* 4067df: mov dword ptr [0x4491fc], eax */
  W32((uint32_t)(0x4491fcu), eax);
/* 4067e4: jmp 0x405828 */
  goto L_405828;
L_406b90: /* 406b90: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406b93: mov eax, dword ptr [0x4491f4] */
  eax = R32((uint32_t)(0x4491f4u));
/* 406b98: jne 0x40ce09 */
  if (!zf) goto L_40ce09;
L_406b9e: /* 406b9e: cmp dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406ba1: jne 0x406be7 */
  if (!zf) goto L_406be7;
L_406ba3: /* 406ba3: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406ba5: je 0x40ce23 */
  if (zf) goto L_40ce23;
L_406bab: /* 406bab: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 406bad: call 0x4010eb */
  esp -= 4; W32(esp, 0x406bb2u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 406bb2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406bb4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406bb5: mov dword ptr [0x4491fc], eax */
  W32((uint32_t)(0x4491fcu), eax);
/* 406bba: je 0x406bd0 */
  if (zf) goto L_406bd0;
L_406bbc: /* 406bbc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 406bbe: jmp 0x405830 */
  goto L_405830;
L_406bc3: /* 406bc3: cmp dword ptr [edi], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406bc5: je 0x405858 */
  if (zf) goto L_405858;
L_406bcb: /* 406bcb: jmp 0x40ce4b */
  goto L_40ce4b;
L_406bd0: /* 406bd0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 406bd3: jmp 0x4058a4 */
  goto L_4058a4;
L_406bd8: /* 406bd8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406bda: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406bdb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406bdc: je 0x40588f */
  if (zf) goto L_40588f;
L_406be2: /* 406be2: jmp 0x40588a */
  goto L_40588a;
L_406be7: /* 406be7: xor eax, eax */
  eax = 0;
/* 406be9: jmp 0x4058a4 */
  goto L_4058a4;
L_40ce09: /* 40ce09: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ce0b: je 0x406b9e */
  if (zf) goto L_406b9e;
L_40ce11: /* 40ce11: call 0x40576b */
  esp -= 4; W32(esp, 0x40ce16u); SPILL(); f_40576b(); if (g_unwind) return; RELOAD();
/* 40ce16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40ce18: je 0x405830 */
  if (zf) goto L_405830;
L_40ce1e: /* 40ce1e: jmp 0x406bd0 */
  goto L_406bd0;
L_40ce23: /* 40ce23: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40ce25: call 0x4010eb */
  esp -= 4; W32(esp, 0x40ce2au); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40ce2a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ce2c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ce2d: mov dword ptr [0x4491f4], eax */
  W32((uint32_t)(0x4491f4u), eax);
/* 40ce32: je 0x406bd0 */
  if (zf) goto L_406bd0;
L_40ce38: /* 40ce38: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 40ce3a: cmp dword ptr [0x4491fc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491fcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ce40: jne 0x405830 */
  if (!zf) goto L_405830;
L_40ce46: /* 40ce46: jmp 0x406bab */
  goto L_406bab;
L_40ce4b: /* 40ce4b: lea edi, [edi + ebx*4] */
  edi = (uint32_t)(edi + ebx*4);
/* 40ce4e: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 40ce50: call 0x401156 */
  esp -= 4; W32(esp, 0x40ce55u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40ce55: cmp dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ce58: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ce59: jne 0x40ce6e */
  if (!zf) goto L_40ce6e;
L_40ce5b: /* 40ce5b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40ce5e: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 40ce60: jmp 0x40588f */
  goto L_40588f;
L_40ce65: /* 40ce65: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 40ce68: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 40ce6a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 40ce6b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_40ce6e: /* 40ce6e: cmp dword ptr [edi], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ce70: jne 0x40ce65 */
  if (!zf) goto L_40ce65;
L_40ce72: /* 40ce72: mov eax, ebx */
  eax = ebx;
/* 40ce74: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 40ce77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40ce78: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 40ce7b: call 0x401c76 */
  esp -= 4; W32(esp, 0x40ce80u); SPILL(); f_401c76(); if (g_unwind) return; RELOAD();
/* 40ce80: jmp 0x406bd8 */
  goto L_406bd8;
L_40ce85: /* 40ce85: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40ce88: call 0x4013b8 */
  esp -= 4; W32(esp, 0x40ce8du); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 40ce8d: lea eax, [eax + eax + 4] */
  eax = (uint32_t)(eax + eax + 0x4u);
/* 40ce91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40ce92: call 0x4010eb */
  esp -= 4; W32(esp, 0x40ce97u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40ce97: mov edi, eax */
  edi = eax;
/* 40ce99: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ce9b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ce9c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ce9d: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 40cea0: je 0x405898 */
  if (zf) goto L_405898;
L_40cea6: /* 40cea6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40cea9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40ceaa: call 0x4013ce */
  esp -= 4; W32(esp, 0x40ceafu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 40ceaf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 40ceb2: lea ebx, [edi + eax*2] */
  ebx = (uint32_t)(edi + eax*2);
/* 40ceb5: mov word ptr [ebx], si */
  W16((uint32_t)(ebx), (esi & 0xffffu));
/* 40ceb8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 40ceb9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ceba: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 40cebb: cmp dword ptr [0x44dcf4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dcf4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cec2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cec3: jne 0x40cef3 */
  if (!zf) goto L_40cef3;
L_40cec5: /* 40cec5: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 40cec8: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 40ceca: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 40cecc: not eax */
  eax = ~eax;
/* 40cece: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40ced0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40ced1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40ced2: call dword ptr [0x439108] */
  esp -= 4; W32(esp, 0x40ced8u); SPILL(); call_ind(R32(0x439108u)); if (g_unwind) return; /* KERNEL32!SetEnvironmentVariableW */ RELOAD();
/* 40ced8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40ceda: jne 0x40cef3 */
  if (!zf) goto L_40cef3;
L_40cedc: /* 40cedc: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40cee2u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40cee2: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cee5: jne 0x40ceef */
  if (!zf) goto L_40ceef;
L_40cee7: /* 40cee7: mov dword ptr [0x44dcf4], esi */
  W32((uint32_t)(0x44dcf4u), esi);
/* 40ceed: jmp 0x40ceff */
  goto L_40ceff;
L_40ceef: /* 40ceef: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_40cef3: /* 40cef3: cmp dword ptr [0x44dcf4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dcf4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cef9: jne 0x40cfb1 */
  if (!zf) goto L_40cfb1;
L_40ceff: /* 40ceff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 40cf05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40cf06: mov edi, dword ptr [0x4390d0] */
  edi = R32((uint32_t)(0x4390d0u));
/* 40cf0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf0e: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 40cf11: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 40cf14: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x40cf16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40cf16: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cf18: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 40cf1b: je 0x40cf98 */
  if (zf) goto L_40cf98;
L_40cf1d: /* 40cf1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cf1e: call 0x4010eb */
  esp -= 4; W32(esp, 0x40cf23u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40cf23: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cf25: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cf26: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 40cf29: je 0x40cf98 */
  if (zf) goto L_40cf98;
L_40cf2b: /* 40cf2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf2d: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 40cf30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cf31: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 40cf33: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 40cf36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf38: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x40cf3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40cf3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40cf3c: je 0x40cf98 */
  if (zf) goto L_40cf98;
L_40cf3e: /* 40cf3e: cmp dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cf41: jne 0x40cf78 */
  if (!zf) goto L_40cf78;
L_40cf43: /* 40cf43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf47: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 40cf49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cf4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf4c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x40cf4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40cf4e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cf50: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 40cf53: je 0x40cf98 */
  if (zf) goto L_40cf98;
L_40cf55: /* 40cf55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cf56: call 0x4010eb */
  esp -= 4; W32(esp, 0x40cf5bu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40cf5b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cf5d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cf5e: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 40cf61: je 0x40cf98 */
  if (zf) goto L_40cf98;
L_40cf63: /* 40cf63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf65: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 40cf68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cf69: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 40cf6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cf6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cf6e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x40cf70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40cf70: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40cf72: jne 0x40cf78 */
  if (!zf) goto L_40cf78;
L_40cf74: /* 40cf74: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_40cf78: /* 40cf78: cmp dword ptr [ebp - 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cf7c: je 0x40cf9c */
  if (zf) goto L_40cf9c;
L_40cf7e: /* 40cf7e: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 40cf81: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 40cf83: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 40cf85: not eax */
  eax = ~eax;
/* 40cf87: and eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40cf8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cf8b: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 40cf8e: call dword ptr [0x439104] */
  esp -= 4; W32(esp, 0x40cf94u); SPILL(); call_ind(R32(0x439104u)); if (g_unwind) return; /* KERNEL32!SetEnvironmentVariableA */ RELOAD();
/* 40cf94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40cf96: jne 0x40cf9c */
  if (!zf) goto L_40cf9c;
L_40cf98: /* 40cf98: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_40cf9c: /* 40cf9c: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 40cf9f: call 0x401156 */
  esp -= 4; W32(esp, 0x40cfa4u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cfa4: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 40cfa7: call 0x401156 */
  esp -= 4; W32(esp, 0x40cfacu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cfac: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40cfaf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cfb0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40cfb1: /* 40cfb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40cfb2: call 0x401156 */
  esp -= 4; W32(esp, 0x40cfb7u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cfb7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cfb8: jmp 0x405898 */
  goto L_405898;
L_40cfbd: /* 40cfbd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40cfc0: call 0x401156 */
  esp -= 4; W32(esp, 0x40cfc5u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cfc5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cfc6: jmp 0x4058a1 */
  goto L_4058a1;
L_40cfcb: /* 40cfcb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40cfce: call 0x401156 */
  esp -= 4; W32(esp, 0x40cfd3u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cfd3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cfd4: jmp 0x406be7 */
  goto L_406be7;
}

void f_4058a9(void) {
  LOAD_REGS();
  goto L_4058a9;
L_405545: /* 405545: mov eax, esi */
  eax = esi;
/* 405547: sub eax, dword ptr [0x4491fc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x4491fcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40554d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40554e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 405551: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 405553: ret  */
  esp += 4; SPILL(); return;
L_4058a9: /* 4058a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4058aa: mov esi, dword ptr [0x4491fc] */
  esi = R32((uint32_t)(0x4491fcu));
L_4058b0: /* 4058b0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4058b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4058b4: je 0x405545 */
  if (zf) goto L_405545;
L_4058ba: /* 4058ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4058bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4058bc: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4058c0: call 0x4058d5 */
  esp -= 4; W32(esp, 0x4058c5u); SPILL(); f_4058d5(); if (g_unwind) return; RELOAD();
/* 4058c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4058c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4058ca: je 0x40cd94 */
  if (zf) goto L_40cd94;
L_4058d0: /* 4058d0: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4058d3: jmp 0x4058b0 */
  goto L_4058b0;
L_40cd94: /* 40cd94: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 40cd96: mov ax, word ptr [eax + edi*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edi*2))) & 0xffffu);
/* 40cd9a: cmp ax, 0x3d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40cd9e: je 0x40cda9 */
  if (zf) goto L_40cda9;
L_40cda0: /* 40cda0: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 40cda3: jne 0x4058d0 */
  if (!zf) goto L_4058d0;
L_40cda9: /* 40cda9: mov eax, esi */
  eax = esi;
/* 40cdab: sub eax, dword ptr [0x4491fc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x4491fcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40cdb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40cdb2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 40cdb5: ret  */
  esp += 4; SPILL(); return;
}

void f_4058d5(void) {
  LOAD_REGS();
  goto L_4058d5;
L_405554: /* 405554: call 0x4025f2 */
  esp -= 4; W32(esp, 0x405559u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 405559: jmp 0x405906 */
  goto L_405906;
L_4058d5: /* 4058d5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4058d6: mov ebp, esp */
  ebp = esp;
/* 4058d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4058d9: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 4058dc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4058de: je 0x40d676 */
  if (zf) goto L_40d676;
L_4058e4: /* 4058e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4058e5: mov esi, 0x7fffffff */
  esi = 0x7fffffffu;
/* 4058ea: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4058ec: ja 0x40d67d */
  if ((!cf && !zf)) goto L_40d67d;
L_4058f2: /* 4058f2: call 0x40137f */
  esp -= 4; W32(esp, 0x4058f7u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4058f7: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 4058fa: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405900: jne 0x405554 */
  if (!zf) goto L_405554;
L_405906: /* 405906: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 405909: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40590b: jne 0x40d68f */
  if (!zf) goto L_40d68f;
L_405911: /* 405911: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 405914: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_405917: /* 405917: xor eax, eax */
  eax = 0;
/* 405919: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 40591c: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 405920: jb 0x40595c */
  if (cf) goto L_40595c;
L_405922: /* 405922: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 405926: lea ecx, [eax + 0x20] */
  ecx = (uint32_t)(eax + 0x20u);
/* 405929: ja 0x40595c */
  if ((!cf && !zf)) goto L_40595c;
L_40592b: /* 40592b: xor eax, eax */
  eax = 0;
/* 40592d: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 405930: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 405934: jb 0x40593f */
  if (cf) goto L_40593f;
L_405936: /* 405936: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40593a: ja 0x40593f */
  if ((!cf && !zf)) goto L_40593f;
L_40593c: /* 40593c: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_40593f: /* 40593f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 405940: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 405941: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 405942: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 405943: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 405944: je 0x405950 */
  if (zf) goto L_405950;
L_405946: /* 405946: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 405949: je 0x405950 */
  if (zf) goto L_405950;
L_40594b: /* 40594b: cmp cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40594e: je 0x405917 */
  if (zf) goto L_405917;
L_405950: /* 405950: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
/* 405953: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 405956: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_405958: /* 405958: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_405959: /* 405959: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40595a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 40595b: ret  */
  esp += 4; SPILL(); return;
L_40595c: /* 40595c: mov ecx, eax */
  ecx = eax;
/* 40595e: jmp 0x40592b */
  goto L_40592b;
L_40d676: /* 40d676: xor eax, eax */
  eax = 0;
/* 40d678: jmp 0x405959 */
  goto L_405959;
L_40d67d: /* 40d67d: call 0x4102a5 */
  esp -= 4; W32(esp, 0x40d682u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 40d682: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 40d688: mov eax, esi */
  eax = esi;
/* 40d68a: jmp 0x405958 */
  goto L_405958;
L_40d68f: /* 40d68f: push dword ptr [eax + 8] */
  { uint32_t v = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, v); }
/* 40d692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d693: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40d696: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d697: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40d69a: push 0x1001 */
  { uint32_t v = 0x1001u; esp -= 4; W32(esp, v); }
/* 40d69f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40d6a0: call 0x416273 */
  esp -= 4; W32(esp, 0x40d6a5u); SPILL(); f_416273(); if (g_unwind) return; RELOAD();
/* 40d6a5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40d6a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d6aa: je 0x40d67d */
  if (zf) goto L_40d67d;
L_40d6ac: /* 40d6ac: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40d6af: jmp 0x405958 */
  goto L_405958;
}

void f_405960(void) {
  LOAD_REGS();
L_405960: /* 405960: cmp dword ptr [0x44922c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44922cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405967: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405968: je 0x40cff3 */
  if (zf) goto L_40cff3;
L_40596e: /* 40596e: push 0xb8 */
  { uint32_t v = 0xb8u; esp -= 4; W32(esp, v); }
/* 405973: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 405975: call 0x4016cb */
  esp -= 4; W32(esp, 0x40597au); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 40597a: mov esi, eax */
  esi = eax;
/* 40597c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40597e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40597f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 405980: je 0x40cfde */
  if (zf) goto L_40cfde;
L_405986: /* 405986: call 0x4059a3 */
  esp -= 4; W32(esp, 0x40598bu); SPILL(); f_4059a3(); if (g_unwind) return; RELOAD();
/* 40598b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40598d: jne 0x40cfe3 */
  if (!zf) goto L_40cfe3;
L_405993: /* 405993: mov dword ptr [0x44b3a0], esi */
  W32((uint32_t)(0x44b3a0u), esi);
/* 405999: mov dword ptr [0x44b9c0], esi */
  W32((uint32_t)(0x44b9c0u), esi);
L_40599f: /* 40599f: xor eax, eax */
  eax = 0;
/* 4059a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4059a2: ret  */
  esp += 4; SPILL(); return;
L_40cfde: /* 40cfde: xor eax, eax */
  eax = 0;
/* 40cfe0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40cfe1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40cfe2: ret  */
  esp += 4; SPILL(); return;
L_40cfe3: /* 40cfe3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cfe4: call 0x412cfe */
  esp -= 4; W32(esp, 0x40cfe9u); SPILL(); f_412cfe(); if (g_unwind) return; RELOAD();
/* 40cfe9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cfea: call 0x401156 */
  esp -= 4; W32(esp, 0x40cfefu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cfef: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cff0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cff1: jmp 0x40cfde */
  goto L_40cfde;
L_40cff3: /* 40cff3: and dword ptr [0x44b9c0], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44b9c0u), r);
  }
/* 40cffa: mov dword ptr [0x44b3a0], 0x44a860 */
  W32((uint32_t)(0x44b3a0u), 0x44a860u);
/* 40d004: jmp 0x40599f */
  goto L_40599f;
}

void f_4059a3(void) {
  LOAD_REGS();
L_4059a3: /* 4059a3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4059a4: mov ebp, esp */
  ebp = esp;
/* 4059a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4059a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4059a8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4059aa: movzx eax, word ptr [0x44b9fe] */
  eax = (uint32_t)(R16((uint32_t)(0x44b9feu)));
/* 4059b1: movzx ecx, word ptr [0x44ba00] */
  ecx = (uint32_t)(R16((uint32_t)(0x44ba00u)));
/* 4059b8: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4059bb: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 4059be: je 0x40cfd9 */
  if (zf) goto L_40cfd9;
L_4059c4: /* 4059c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4059c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4059c6: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 4059c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4059ca: push 0x31 */
  { uint32_t v = 0x31u; esp -= 4; W32(esp, v); }
/* 4059cc: xor ebx, ebx */
  ebx = 0;
/* 4059ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4059cf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4059d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4059d1: call 0x405d09 */
  esp -= 4; W32(esp, 0x4059d6u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 4059d6: mov edi, eax */
  edi = eax;
/* 4059d8: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 4059db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4059dc: push 0x32 */
  { uint32_t v = 0x32u; esp -= 4; W32(esp, v); }
/* 4059de: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4059e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4059e2: call 0x405d09 */
  esp -= 4; W32(esp, 0x4059e7u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 4059e7: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4059e9: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 4059ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4059ed: push 0x33 */
  { uint32_t v = 0x33u; esp -= 4; W32(esp, v); }
/* 4059ef: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4059f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4059f3: call 0x405d09 */
  esp -= 4; W32(esp, 0x4059f8u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 4059f8: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4059fa: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* 4059fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4059fe: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 405a00: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405a03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405a04: call 0x405d09 */
  esp -= 4; W32(esp, 0x405a09u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405a09: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405a0c: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405a0e: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 405a11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405a12: push 0x35 */
  { uint32_t v = 0x35u; esp -= 4; W32(esp, v); }
/* 405a14: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405a17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405a18: call 0x405d09 */
  esp -= 4; W32(esp, 0x405a1du); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405a1d: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405a1f: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 405a22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405a23: push 0x36 */
  { uint32_t v = 0x36u; esp -= 4; W32(esp, v); }
/* 405a25: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405a28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405a29: call 0x405d09 */
  esp -= 4; W32(esp, 0x405a2eu); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405a2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405a2f: push 0x37 */
  { uint32_t v = 0x37u; esp -= 4; W32(esp, v); }
/* 405a31: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405a34: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405a36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405a37: call 0x405d09 */
  esp -= 4; W32(esp, 0x405a3cu); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405a3c: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405a3e: lea eax, [esi + 0x20] */
  eax = (uint32_t)(esi + 0x20u);
/* 405a41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405a42: push 0x2a */
  { uint32_t v = 0x2au; esp -= 4; W32(esp, v); }
/* 405a44: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405a47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405a48: call 0x405d09 */
  esp -= 4; W32(esp, 0x405a4du); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405a4d: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405a50: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405a52: lea eax, [esi + 0x24] */
  eax = (uint32_t)(esi + 0x24u);
/* 405a55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405a56: push 0x2b */
  { uint32_t v = 0x2bu; esp -= 4; W32(esp, v); }
/* 405a58: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405a5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405a5c: call 0x405d09 */
  esp -= 4; W32(esp, 0x405a61u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405a61: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405a63: lea eax, [esi + 0x28] */
  eax = (uint32_t)(esi + 0x28u);
/* 405a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405a67: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 405a69: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405a6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405a6d: call 0x405d09 */
  esp -= 4; W32(esp, 0x405a72u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405a72: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405a74: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 405a77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405a78: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 405a7a: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405a7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405a7e: call 0x405d09 */
  esp -= 4; W32(esp, 0x405a83u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405a83: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405a85: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
/* 405a88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405a89: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 405a8b: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405a8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405a8f: call 0x405d09 */
  esp -= 4; W32(esp, 0x405a94u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405a94: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405a97: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405a99: lea eax, [esi + 0x34] */
  eax = (uint32_t)(esi + 0x34u);
/* 405a9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405a9d: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 405a9f: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405aa2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405aa3: call 0x405d09 */
  esp -= 4; W32(esp, 0x405aa8u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405aa8: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405aaa: lea eax, [esi + 0x1c] */
  eax = (uint32_t)(esi + 0x1cu);
/* 405aad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405aae: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 405ab0: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405ab3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405ab4: call 0x405d09 */
  esp -= 4; W32(esp, 0x405ab9u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405ab9: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405abb: lea eax, [esi + 0x38] */
  eax = (uint32_t)(esi + 0x38u);
/* 405abe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405abf: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 405ac1: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405ac4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405ac5: call 0x405d09 */
  esp -= 4; W32(esp, 0x405acau); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405aca: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405acc: lea eax, [esi + 0x3c] */
  eax = (uint32_t)(esi + 0x3cu);
/* 405acf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405ad0: push 0x45 */
  { uint32_t v = 0x45u; esp -= 4; W32(esp, v); }
/* 405ad2: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405ad5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405ad6: call 0x405d09 */
  esp -= 4; W32(esp, 0x405adbu); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405adb: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405ade: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405ae0: lea eax, [esi + 0x40] */
  eax = (uint32_t)(esi + 0x40u);
/* 405ae3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405ae4: push 0x46 */
  { uint32_t v = 0x46u; esp -= 4; W32(esp, v); }
/* 405ae6: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405ae9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405aea: call 0x405d09 */
  esp -= 4; W32(esp, 0x405aefu); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405aef: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405af1: lea eax, [esi + 0x44] */
  eax = (uint32_t)(esi + 0x44u);
/* 405af4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405af5: push 0x47 */
  { uint32_t v = 0x47u; esp -= 4; W32(esp, v); }
/* 405af7: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405afa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405afb: call 0x405d09 */
  esp -= 4; W32(esp, 0x405b00u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405b00: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405b02: lea eax, [esi + 0x48] */
  eax = (uint32_t)(esi + 0x48u);
/* 405b05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405b06: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 405b08: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405b0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405b0c: call 0x405d09 */
  esp -= 4; W32(esp, 0x405b11u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405b11: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405b13: lea eax, [esi + 0x4c] */
  eax = (uint32_t)(esi + 0x4cu);
/* 405b16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405b17: push 0x49 */
  { uint32_t v = 0x49u; esp -= 4; W32(esp, v); }
/* 405b19: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405b1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405b1d: call 0x405d09 */
  esp -= 4; W32(esp, 0x405b22u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405b22: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405b25: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405b27: lea eax, [esi + 0x50] */
  eax = (uint32_t)(esi + 0x50u);
/* 405b2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405b2b: push 0x4a */
  { uint32_t v = 0x4au; esp -= 4; W32(esp, v); }
/* 405b2d: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405b30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405b31: call 0x405d09 */
  esp -= 4; W32(esp, 0x405b36u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405b36: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405b38: lea eax, [esi + 0x54] */
  eax = (uint32_t)(esi + 0x54u);
/* 405b3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405b3c: push 0x4b */
  { uint32_t v = 0x4bu; esp -= 4; W32(esp, v); }
/* 405b3e: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405b41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405b42: call 0x405d09 */
  esp -= 4; W32(esp, 0x405b47u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405b47: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405b49: lea eax, [esi + 0x58] */
  eax = (uint32_t)(esi + 0x58u);
/* 405b4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405b4d: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 405b4f: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405b52: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405b53: call 0x405d09 */
  esp -= 4; W32(esp, 0x405b58u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405b58: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405b5a: lea eax, [esi + 0x5c] */
  eax = (uint32_t)(esi + 0x5cu);
/* 405b5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405b5e: push 0x4d */
  { uint32_t v = 0x4du; esp -= 4; W32(esp, v); }
/* 405b60: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405b63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405b64: call 0x405d09 */
  esp -= 4; W32(esp, 0x405b69u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405b69: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405b6c: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405b6e: lea eax, [esi + 0x60] */
  eax = (uint32_t)(esi + 0x60u);
/* 405b71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405b72: push 0x4e */
  { uint32_t v = 0x4eu; esp -= 4; W32(esp, v); }
/* 405b74: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405b77: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405b78: call 0x405d09 */
  esp -= 4; W32(esp, 0x405b7du); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405b7d: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405b7f: lea eax, [esi + 0x64] */
  eax = (uint32_t)(esi + 0x64u);
/* 405b82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405b83: push 0x4f */
  { uint32_t v = 0x4fu; esp -= 4; W32(esp, v); }
/* 405b85: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405b88: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405b89: call 0x405d09 */
  esp -= 4; W32(esp, 0x405b8eu); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405b8e: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405b90: lea eax, [esi + 0x68] */
  eax = (uint32_t)(esi + 0x68u);
/* 405b93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405b94: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 405b96: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405b99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405b9a: call 0x405d09 */
  esp -= 4; W32(esp, 0x405b9fu); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405b9f: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405ba1: lea eax, [esi + 0x6c] */
  eax = (uint32_t)(esi + 0x6cu);
/* 405ba4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405ba5: push 0x39 */
  { uint32_t v = 0x39u; esp -= 4; W32(esp, v); }
/* 405ba7: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405baa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405bab: call 0x405d09 */
  esp -= 4; W32(esp, 0x405bb0u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405bb0: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405bb3: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405bb5: lea eax, [esi + 0x70] */
  eax = (uint32_t)(esi + 0x70u);
/* 405bb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405bb9: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* 405bbb: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405bbe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405bbf: call 0x405d09 */
  esp -= 4; W32(esp, 0x405bc4u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405bc4: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405bc6: lea eax, [esi + 0x74] */
  eax = (uint32_t)(esi + 0x74u);
/* 405bc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405bca: push 0x3b */
  { uint32_t v = 0x3bu; esp -= 4; W32(esp, v); }
/* 405bcc: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405bcf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405bd0: call 0x405d09 */
  esp -= 4; W32(esp, 0x405bd5u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405bd5: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405bd7: lea eax, [esi + 0x78] */
  eax = (uint32_t)(esi + 0x78u);
/* 405bda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405bdb: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 405bdd: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405be0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405be1: call 0x405d09 */
  esp -= 4; W32(esp, 0x405be6u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405be6: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405be8: lea eax, [esi + 0x7c] */
  eax = (uint32_t)(esi + 0x7cu);
/* 405beb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405bec: push 0x3d */
  { uint32_t v = 0x3du; esp -= 4; W32(esp, v); }
/* 405bee: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405bf1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405bf2: call 0x405d09 */
  esp -= 4; W32(esp, 0x405bf7u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405bf7: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405bfa: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405bfc: lea eax, [esi + 0x80] */
  eax = (uint32_t)(esi + 0x80u);
/* 405c02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405c03: push 0x3e */
  { uint32_t v = 0x3eu; esp -= 4; W32(esp, v); }
/* 405c05: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405c08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405c09: call 0x405d09 */
  esp -= 4; W32(esp, 0x405c0eu); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405c0e: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405c10: lea eax, [esi + 0x84] */
  eax = (uint32_t)(esi + 0x84u);
/* 405c16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405c17: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 405c19: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405c1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405c1d: call 0x405d09 */
  esp -= 4; W32(esp, 0x405c22u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405c22: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405c24: lea eax, [esi + 0x88] */
  eax = (uint32_t)(esi + 0x88u);
/* 405c2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405c2b: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 405c2d: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405c30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405c31: call 0x405d09 */
  esp -= 4; W32(esp, 0x405c36u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405c36: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405c38: lea eax, [esi + 0x8c] */
  eax = (uint32_t)(esi + 0x8cu);
/* 405c3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405c3f: push 0x41 */
  { uint32_t v = 0x41u; esp -= 4; W32(esp, v); }
/* 405c41: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405c44: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405c45: call 0x405d09 */
  esp -= 4; W32(esp, 0x405c4au); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405c4a: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405c4d: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405c4f: lea eax, [esi + 0x90] */
  eax = (uint32_t)(esi + 0x90u);
/* 405c55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405c56: push 0x42 */
  { uint32_t v = 0x42u; esp -= 4; W32(esp, v); }
/* 405c58: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405c5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405c5c: call 0x405d09 */
  esp -= 4; W32(esp, 0x405c61u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405c61: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405c63: lea eax, [esi + 0x94] */
  eax = (uint32_t)(esi + 0x94u);
/* 405c69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405c6a: push 0x43 */
  { uint32_t v = 0x43u; esp -= 4; W32(esp, v); }
/* 405c6c: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405c6f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405c70: call 0x405d09 */
  esp -= 4; W32(esp, 0x405c75u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405c75: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405c77: lea eax, [esi + 0x98] */
  eax = (uint32_t)(esi + 0x98u);
/* 405c7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405c7e: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 405c80: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405c83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405c84: call 0x405d09 */
  esp -= 4; W32(esp, 0x405c89u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405c89: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405c8b: lea eax, [esi + 0x9c] */
  eax = (uint32_t)(esi + 0x9cu);
/* 405c91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405c92: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 405c94: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 405c97: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405c98: call 0x405d09 */
  esp -= 4; W32(esp, 0x405c9du); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405c9d: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405ca0: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405ca2: lea eax, [esi + 0xa0] */
  eax = (uint32_t)(esi + 0xa0u);
/* 405ca8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405ca9: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* 405cab: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 405cae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405caf: call 0x405d09 */
  esp -= 4; W32(esp, 0x405cb4u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405cb4: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405cb6: lea eax, [esi + 0xa4] */
  eax = (uint32_t)(esi + 0xa4u);
/* 405cbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405cbd: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 405cbf: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 405cc2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405cc3: call 0x405d09 */
  esp -= 4; W32(esp, 0x405cc8u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405cc8: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405cca: lea eax, [esi + 0xa8] */
  eax = (uint32_t)(esi + 0xa8u);
/* 405cd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405cd1: push 0x1003 */
  { uint32_t v = 0x1003u; esp -= 4; W32(esp, v); }
/* 405cd6: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 405cd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405cda: call 0x405d09 */
  esp -= 4; W32(esp, 0x405cdfu); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405cdf: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 405ce2: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405ce4: lea eax, [esi + 0xb0] */
  eax = (uint32_t)(esi + 0xb0u);
/* 405cea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405ceb: push 0x1009 */
  { uint32_t v = 0x1009u; esp -= 4; W32(esp, v); }
/* 405cf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405cf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 405cf3: call 0x405d09 */
  esp -= 4; W32(esp, 0x405cf8u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 405cf8: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405cfb: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 405cfd: mov dword ptr [esi + 0xac], ebx */
  W32((uint32_t)(esi + 0xacu), ebx);
/* 405d03: mov eax, edi */
  eax = edi;
/* 405d05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 405d06: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 405d07: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 405d08: ret  */
  esp += 4; SPILL(); return;
L_40cfd9: /* 40cfd9: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40cfdc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40cfdd: ret  */
  esp += 4; SPILL(); return;
}

void f_405d09(void) {
  LOAD_REGS();
  goto L_405d09;
L_4056df: /* 4056df: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 4056e1: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 4056e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4056e5: call 0x40152b */
  esp -= 4; W32(esp, 0x4056eau); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 4056ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4056ec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4056ed: je 0x405d82 */
  if (zf) goto L_405d82;
L_4056f3: /* 4056f3: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4056f5: mov cl, 0xa */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xau) & 0xffu);
/* 4056f7: imul cl */
  { int32_t r = (int32_t)(int8_t)eax * (int32_t)(int8_t)((ecx & 0xffu));
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  cf = of = (r != (int8_t)r); }
/* 4056f9: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4056fb: sub al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4056fd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4056fe: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4056ff: cmp edi, 0x44ba0c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x44ba0cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 405705: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 405707: jl 0x4056df */
  if ((sf != of)) goto L_4056df;
L_405709: /* 405709: jmp 0x405d82 */
  goto L_405d82;
L_405d09: /* 405d09: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 405d0a: mov ebp, esp */
  ebp = esp;
/* 405d0c: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 405d12: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 405d17: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 405d1a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405d1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405d1c: xor ebx, ebx */
  ebx = 0;
/* 405d1e: cmp dword ptr [ebp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405d22: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 405d25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405d26: jne 0x4061dd */
  if (!zf) goto L_4061dd;
L_405d2c: /* 405d2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405d2d: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 405d32: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 405d38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405d39: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 405d3c: lea edi, [ebp - 0x84] */
  edi = (uint32_t)(ebp + 0xffffff7cu);
/* 405d42: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 405d45: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 405d48: call 0x405d94 */
  esp -= 4; W32(esp, 0x405d4du); SPILL(); f_405d94(); if (g_unwind) return; RELOAD();
/* 405d4d: mov esi, eax */
  esi = eax;
/* 405d4f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405d52: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405d54: je 0x40d2ef */
  if (zf) goto L_40d2ef;
L_405d5a: /* 405d5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405d5b: call 0x4010eb */
  esp -= 4; W32(esp, 0x405d60u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 405d60: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405d62: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 405d63: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 405d66: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 405d68: je 0x40d34d */
  if (zf) goto L_40d34d;
L_405d6e: /* 405d6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405d6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405d71: call 0x4053f1 */
  esp -= 4; W32(esp, 0x405d76u); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 405d76: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405d79: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405d7c: jne 0x40d362 */
  if (!zf) goto L_40d362;
L_405d82: /* 405d82: xor eax, eax */
  eax = 0;
L_405d84: /* 405d84: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 405d87: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 405d8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 405d8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 405d8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 405d8d: call 0x4013ab */
  esp -= 4; W32(esp, 0x405d92u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 405d92: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 405d93: ret  */
  esp += 4; SPILL(); return;
L_4061dd: /* 4061dd: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4061e0: jne 0x406207 */
  if (!zf) goto L_406207;
L_4061e2: /* 4061e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4061e3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4061e5: mov edi, 0x44ba04 */
  edi = 0x44ba04u;
/* 4061ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4061eb: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4061ee: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4061f1: call 0x40620f */
  esp -= 4; W32(esp, 0x4061f6u); SPILL(); f_40620f(); if (g_unwind) return; RELOAD();
/* 4061f6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4061f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4061fb: je 0x406207 */
  if (zf) goto L_406207;
L_4061fd: /* 4061fd: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 406200: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 406202: jmp 0x4056df */
  goto L_4056df;
L_406207: /* 406207: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40620a: jmp 0x405d84 */
  goto L_405d84;
L_40d2ef: /* 40d2ef: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40d2f5u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40d2f5: cmp eax, 0x7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d2f8: jne 0x406207 */
  if (!zf) goto L_406207;
L_40d2fe: /* 40d2fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d2ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d300: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d301: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40d304: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40d307: call 0x405d94 */
  esp -= 4; W32(esp, 0x40d30cu); SPILL(); f_405d94(); if (g_unwind) return; RELOAD();
/* 40d30c: mov esi, eax */
  esi = eax;
/* 40d30e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40d311: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d313: je 0x406207 */
  if (zf) goto L_406207;
L_40d319: /* 40d319: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d31a: call 0x4010eb */
  esp -= 4; W32(esp, 0x40d31fu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40d31f: mov edi, eax */
  edi = eax;
/* 40d321: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d323: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d324: je 0x406207 */
  if (zf) goto L_406207;
L_40d32a: /* 40d32a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d32b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d32c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d32d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40d330: mov dword ptr [ebp + 8], 1 */
  W32((uint32_t)(ebp + 0x8u), 0x1u);
/* 40d337: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40d33a: call 0x405d94 */
  esp -= 4; W32(esp, 0x40d33fu); SPILL(); f_405d94(); if (g_unwind) return; RELOAD();
/* 40d33f: mov esi, eax */
  esi = eax;
/* 40d341: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40d344: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d346: je 0x40d356 */
  if (zf) goto L_40d356;
L_40d348: /* 40d348: jmp 0x405d5a */
  goto L_405d5a;
L_40d34d: /* 40d34d: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d350: je 0x406207 */
  if (zf) goto L_406207;
L_40d356: /* 40d356: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d357: call 0x401156 */
  esp -= 4; W32(esp, 0x40d35cu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d35c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d35d: jmp 0x406207 */
  goto L_406207;
L_40d362: /* 40d362: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d363: call 0x401156 */
  esp -= 4; W32(esp, 0x40d368u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d368: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d369: jmp 0x405d82 */
  goto L_405d82;
}

void f_405d94(void) {
  LOAD_REGS();
L_405d94: /* 405d94: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 405d96: push 0x43e570 */
  { uint32_t v = 0x43e570u; esp -= 4; W32(esp, v); }
/* 405d9b: call 0x40101f */
  esp -= 4; W32(esp, 0x405da0u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 405da0: xor esi, esi */
  esi = 0;
/* 405da2: cmp dword ptr [0x44ba10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405da8: je 0x405e68 */
  if (zf) goto L_405e68;
L_405dae: /* 405dae: mov eax, dword ptr [0x44ba10] */
  eax = R32((uint32_t)(0x44ba10u));
/* 405db3: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405db6: je 0x40d4c1 */
  if (zf) goto L_40d4c1;
L_405dbc: /* 405dbc: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405dbe: je 0x40d4c1 */
  if (zf) goto L_40d4c1;
L_405dc4: /* 405dc4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405dc7: jne 0x405e88 */
  if (!zf) goto L_405e88;
L_405dcd: /* 405dcd: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 405dd0: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 405dd3: cmp dword ptr [ebp + 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405dd6: jne 0x405de0 */
  if (!zf) goto L_405de0;
L_405dd8: /* 405dd8: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 405ddd: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
L_405de0: /* 405de0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405de1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405de2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 405de5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 405de8: call dword ptr [0x439124] */
  esp -= 4; W32(esp, 0x405deeu); SPILL(); call_ind(R32(0x439124u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoW */ RELOAD();
/* 405dee: mov ebx, eax */
  ebx = eax;
/* 405df0: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 405df3: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405df5: je 0x405e88 */
  if (zf) goto L_405e88;
L_405dfb: /* 405dfb: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 405dfe: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 405e01: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 405e04: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 405e07: call 0x4014ee */
  esp -= 4; W32(esp, 0x405e0cu); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 405e0c: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 405e0f: mov edi, esp */
  edi = esp;
/* 405e11: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 405e14: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 405e18: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405e1a: je 0x40d48e */
  if (zf) goto L_40d48e;
L_405e20: /* 405e20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405e21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405e22: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 405e25: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 405e28: call dword ptr [0x439124] */
  esp -= 4; W32(esp, 0x405e2eu); SPILL(); call_ind(R32(0x439124u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoW */ RELOAD();
/* 405e2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 405e30: je 0x405e53 */
  if (zf) goto L_405e53;
L_405e32: /* 405e32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e34: cmp dword ptr [ebp + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405e37: je 0x40d4ae */
  if (zf) goto L_40d4ae;
L_405e3d: /* 405e3d: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 405e40: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
L_405e43: /* 405e43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 405e45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405e46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e47: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 405e4a: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x405e50u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 405e50: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_405e53: /* 405e53: cmp dword ptr [ebp - 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405e56: jne 0x40d4b5 */
  if (!zf) goto L_40d4b5;
L_405e5c: /* 405e5c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_405e5f: /* 405e5f: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 405e62: call 0x40105a */
  esp -= 4; W32(esp, 0x405e67u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 405e67: ret  */
  esp += 4; SPILL(); return;
L_405e68: /* 405e68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e6a: xor edi, edi */
  edi = 0;
/* 405e6c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 405e6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405e6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e6f: call dword ptr [0x439124] */
  esp -= 4; W32(esp, 0x405e75u); SPILL(); call_ind(R32(0x439124u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoW */ RELOAD();
/* 405e75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 405e77: je 0x40d454 */
  if (zf) goto L_40d454;
L_405e7d: /* 405e7d: mov dword ptr [0x44ba10], edi */
  W32((uint32_t)(0x44ba10u), edi);
/* 405e83: jmp 0x405dae */
  goto L_405dae;
L_405e88: /* 405e88: xor eax, eax */
  eax = 0;
/* 405e8a: jmp 0x405e5f */
  goto L_405e5f;
L_40d454: /* 40d454: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40d45au); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40d45a: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d45d: jne 0x405dae */
  if (!zf) goto L_405dae;
L_40d463: /* 40d463: mov dword ptr [0x44ba10], 2 */
  W32((uint32_t)(0x44ba10u), 0x2u);
/* 40d46d: jmp 0x405dae */
  goto L_405dae;
L_40d48e: /* 40d48e: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 40d491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d492: call 0x4010eb */
  esp -= 4; W32(esp, 0x40d497u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40d497: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d498: mov edi, eax */
  edi = eax;
/* 40d49a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d49c: je 0x405e88 */
  if (zf) goto L_405e88;
L_40d4a2: /* 40d4a2: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 40d4a9: jmp 0x405e20 */
  goto L_405e20;
L_40d4ae: /* 40d4ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d4af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d4b0: jmp 0x405e43 */
  goto L_405e43;
L_40d4b5: /* 40d4b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d4b6: call 0x401156 */
  esp -= 4; W32(esp, 0x40d4bbu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d4bb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d4bc: jmp 0x405e5c */
  goto L_405e5c;
L_40d4c1: /* 40d4c1: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40d4c4: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40d4c7: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40d4ca: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40d4cd: call dword ptr [0x439110] */
  esp -= 4; W32(esp, 0x40d4d3u); SPILL(); call_ind(R32(0x439110u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoA */ RELOAD();
/* 40d4d3: jmp 0x405e5f */
  goto L_405e5f;
}

void f_405e68(void) {
  LOAD_REGS();
  goto L_405e68;
L_405dae: /* 405dae: mov eax, dword ptr [0x44ba10] */
  eax = R32((uint32_t)(0x44ba10u));
/* 405db3: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405db6: je 0x40d4c1 */
  if (zf) goto L_40d4c1;
L_405dbc: /* 405dbc: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405dbe: je 0x40d4c1 */
  if (zf) goto L_40d4c1;
L_405dc4: /* 405dc4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405dc7: jne 0x405e88 */
  if (!zf) goto L_405e88;
L_405dcd: /* 405dcd: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 405dd0: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 405dd3: cmp dword ptr [ebp + 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405dd6: jne 0x405de0 */
  if (!zf) goto L_405de0;
L_405dd8: /* 405dd8: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 405ddd: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
L_405de0: /* 405de0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405de1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405de2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 405de5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 405de8: call dword ptr [0x439124] */
  esp -= 4; W32(esp, 0x405deeu); SPILL(); call_ind(R32(0x439124u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoW */ RELOAD();
/* 405dee: mov ebx, eax */
  ebx = eax;
/* 405df0: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 405df3: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405df5: je 0x405e88 */
  if (zf) goto L_405e88;
L_405dfb: /* 405dfb: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 405dfe: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 405e01: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 405e04: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 405e07: call 0x4014ee */
  esp -= 4; W32(esp, 0x405e0cu); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 405e0c: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 405e0f: mov edi, esp */
  edi = esp;
/* 405e11: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 405e14: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 405e18: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405e1a: je 0x40d48e */
  if (zf) goto L_40d48e;
L_405e20: /* 405e20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405e21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405e22: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 405e25: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 405e28: call dword ptr [0x439124] */
  esp -= 4; W32(esp, 0x405e2eu); SPILL(); call_ind(R32(0x439124u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoW */ RELOAD();
/* 405e2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 405e30: je 0x405e53 */
  if (zf) goto L_405e53;
L_405e32: /* 405e32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e34: cmp dword ptr [ebp + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405e37: je 0x40d4ae */
  if (zf) goto L_40d4ae;
L_405e3d: /* 405e3d: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 405e40: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
L_405e43: /* 405e43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 405e45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405e46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e47: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 405e4a: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x405e50u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 405e50: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_405e53: /* 405e53: cmp dword ptr [ebp - 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405e56: jne 0x40d4b5 */
  if (!zf) goto L_40d4b5;
L_405e5c: /* 405e5c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_405e5f: /* 405e5f: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 405e62: call 0x40105a */
  esp -= 4; W32(esp, 0x405e67u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 405e67: ret  */
  esp += 4; SPILL(); return;
L_405e68: /* 405e68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e6a: xor edi, edi */
  edi = 0;
/* 405e6c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 405e6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405e6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e6f: call dword ptr [0x439124] */
  esp -= 4; W32(esp, 0x405e75u); SPILL(); call_ind(R32(0x439124u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoW */ RELOAD();
/* 405e75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 405e77: je 0x40d454 */
  if (zf) goto L_40d454;
L_405e7d: /* 405e7d: mov dword ptr [0x44ba10], edi */
  W32((uint32_t)(0x44ba10u), edi);
/* 405e83: jmp 0x405dae */
  goto L_405dae;
L_405e88: /* 405e88: xor eax, eax */
  eax = 0;
/* 405e8a: jmp 0x405e5f */
  goto L_405e5f;
L_40d454: /* 40d454: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40d45au); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40d45a: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d45d: jne 0x405dae */
  if (!zf) goto L_405dae;
L_40d463: /* 40d463: mov dword ptr [0x44ba10], 2 */
  W32((uint32_t)(0x44ba10u), 0x2u);
/* 40d46d: jmp 0x405dae */
  goto L_405dae;
L_40d48e: /* 40d48e: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 40d491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d492: call 0x4010eb */
  esp -= 4; W32(esp, 0x40d497u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40d497: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d498: mov edi, eax */
  edi = eax;
/* 40d49a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d49c: je 0x405e88 */
  if (zf) goto L_405e88;
L_40d4a2: /* 40d4a2: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 40d4a9: jmp 0x405e20 */
  goto L_405e20;
L_40d4ae: /* 40d4ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d4af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d4b0: jmp 0x405e43 */
  goto L_405e43;
L_40d4b5: /* 40d4b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d4b6: call 0x401156 */
  esp -= 4; W32(esp, 0x40d4bbu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d4bb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d4bc: jmp 0x405e5c */
  goto L_405e5c;
L_40d4c1: /* 40d4c1: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40d4c4: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40d4c7: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40d4ca: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40d4cd: call dword ptr [0x439110] */
  esp -= 4; W32(esp, 0x40d4d3u); SPILL(); call_ind(R32(0x439110u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoA */ RELOAD();
/* 40d4d3: jmp 0x405e5f */
  goto L_405e5f;
}

void f_405e8c(void) {
  LOAD_REGS();
L_405e8c: /* 405e8c: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 405e8e: push 0x43e550 */
  { uint32_t v = 0x43e550u; esp -= 4; W32(esp, v); }
/* 405e93: call 0x40101f */
  esp -= 4; W32(esp, 0x405e98u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 405e98: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 405e9b: xor ebx, ebx */
  ebx = 0;
/* 405e9d: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 405e9f: jl 0x4068ad */
  if ((sf != of)) goto L_4068ad;
L_405ea5: /* 405ea5: cmp edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 405ea8: jg 0x4068ad */
  if ((!zf && sf == of)) goto L_4068ad;
L_405eae: /* 405eae: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 405eb0: call 0x4011b7 */
  esp -= 4; W32(esp, 0x405eb5u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 405eb5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 405eb6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 405eb9: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405ebc: je 0x40ca01 */
  if (zf) goto L_40ca01;
L_405ec2: /* 405ec2: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 405ec4: call 0x4010eb */
  esp -= 4; W32(esp, 0x405ec9u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 405ec9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 405eca: mov esi, eax */
  esi = eax;
/* 405ecc: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 405ecf: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405ed1: je 0x40ca20 */
  if (zf) goto L_40ca20;
L_405ed7: /* 405ed7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 405eda: mov edx, edi */
  edx = edi;
/* 405edc: call 0x405f05 */
  esp -= 4; W32(esp, 0x405ee1u); SPILL(); f_405f05(); if (g_unwind) return; RELOAD();
/* 405ee1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 405ee4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405ee6: je 0x406889 */
  if (zf) goto L_406889;
L_405eec: /* 405eec: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 405eee: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 405ef3: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 405ef6: mov eax, dword ptr [0x449234] */
  eax = R32((uint32_t)(0x449234u));
/* 405efb: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 405efe: xor eax, eax */
  eax = 0;
/* 405f00: jmp 0x4067fb */
  goto L_4067fb;
L_4067fb: /* 4067fb: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 4067fe: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 406801: jg 0x406811 */
  if ((!zf && sf == of)) goto L_406811;
L_406803: /* 406803: mov ecx, dword ptr [eax*4 + 0x449218] */
  ecx = R32((uint32_t)(eax*4 + 0x449218u));
/* 40680a: mov dword ptr [esi + eax*4 + 0xc], ecx */
  W32((uint32_t)(esi + eax*4 + 0xcu), ecx);
/* 40680e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40680f: jmp 0x4067fb */
  goto L_4067fb;
L_406811: /* 406811: mov eax, dword ptr [0x449038] */
  eax = R32((uint32_t)(0x449038u));
/* 406816: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 406819: mov eax, dword ptr [0x44902c] */
  eax = R32((uint32_t)(0x44902cu));
/* 40681e: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 406821: mov eax, dword ptr [0x44ba20] */
  eax = R32((uint32_t)(0x44ba20u));
/* 406826: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 406829: mov eax, dword ptr [0x44ba24] */
  eax = R32((uint32_t)(0x44ba24u));
/* 40682e: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 406831: mov eax, dword ptr [0x44ba1c] */
  eax = R32((uint32_t)(0x44ba1cu));
/* 406836: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 406839: mov eax, dword ptr [0x44b39c] */
  eax = R32((uint32_t)(0x44b39cu));
/* 40683e: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 406841: mov eax, dword ptr [0x44b9c4] */
  eax = R32((uint32_t)(0x44b9c4u));
/* 406846: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 406849: mov eax, dword ptr [0x44ba18] */
  eax = R32((uint32_t)(0x44ba18u));
/* 40684e: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 406851: mov eax, dword ptr [0x44ba14] */
  eax = R32((uint32_t)(0x44ba14u));
/* 406856: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 406859: mov eax, dword ptr [0x449030] */
  eax = R32((uint32_t)(0x449030u));
/* 40685e: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 406861: mov eax, dword ptr [0x44b3a0] */
  eax = R32((uint32_t)(0x44b3a0u));
/* 406866: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 406869: mov eax, dword ptr [0x44b9c0] */
  eax = R32((uint32_t)(0x44b9c0u));
/* 40686e: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 406871: mov eax, dword ptr [0x44a918] */
  eax = R32((uint32_t)(0x44a918u));
/* 406876: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406878: je 0x40ca28 */
  if (zf) goto L_40ca28;
L_40687e: /* 40687e: mov dword ptr [0x44a918], esi */
  W32((uint32_t)(0x44a918u), esi);
/* 406884: call 0x40263b */
  esp -= 4; W32(esp, 0x406889u); SPILL(); f_40263b(); if (g_unwind) return; RELOAD();
L_406889: /* 406889: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40688c: je 0x40ca3f */
  if (zf) goto L_40ca3f;
L_406892: /* 406892: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 406896: call 0x4068a4 */
  esp -= 4; W32(esp, 0x40689bu); SPILL(); f_4068a4(); if (g_unwind) return; RELOAD();
/* 40689b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_40689e: /* 40689e: call 0x40105a */
  esp -= 4; W32(esp, 0x4068a3u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4068a3: ret  */
  esp += 4; SPILL(); return;
L_4068ad: /* 4068ad: xor eax, eax */
  eax = 0;
/* 4068af: jmp 0x40689e */
  goto L_40689e;
L_40ca01: /* 40ca01: xor ecx, ecx */
  ecx = 0;
/* 40ca03: mov edx, edi */
  edx = edi;
/* 40ca05: call 0x405f05 */
  esp -= 4; W32(esp, 0x40ca0au); SPILL(); f_405f05(); if (g_unwind) return; RELOAD();
/* 40ca0a: mov esi, eax */
  esi = eax;
/* 40ca0c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 40ca0e: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 40ca11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40ca12: call 0x406fd7 */
  esp -= 4; W32(esp, 0x40ca17u); SPILL(); f_406fd7(); if (g_unwind) return; RELOAD();
/* 40ca17: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ca18: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ca19: mov eax, esi */
  eax = esi;
/* 40ca1b: jmp 0x40689e */
  goto L_40689e;
L_40ca20: /* 40ca20: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 40ca23: jmp 0x406889 */
  goto L_406889;
L_40ca28: /* 40ca28: cmp eax, 0x44a920 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44a920u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ca2d: je 0x40687e */
  if (zf) goto L_40687e;
L_40ca33: /* 40ca33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40ca34: call 0x4126c1 */
  esp -= 4; W32(esp, 0x40ca39u); SPILL(); f_4126c1(); if (g_unwind) return; RELOAD();
/* 40ca39: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ca3a: jmp 0x40687e */
  goto L_40687e;
L_40ca3f: /* 40ca3f: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ca41: je 0x406892 */
  if (zf) goto L_406892;
L_40ca47: /* 40ca47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40ca48: call 0x401156 */
  esp -= 4; W32(esp, 0x40ca4du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40ca4d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ca4e: jmp 0x406892 */
  goto L_406892;
}

void f_405f05(void) {
  LOAD_REGS();
L_405f05: /* 405f05: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 405f06: lea ebp, [esp - 0x78] */
  ebp = (uint32_t)(esp + 0xffffff88u);
/* 405f0a: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 405f10: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 405f15: xor eax, dword ptr [ebp + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x7cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 405f18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405f19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405f1a: mov esi, edx */
  esi = edx;
/* 405f1c: xor ebx, ebx */
  ebx = 0;
/* 405f1e: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405f20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405f21: mov dword ptr [ebp + 0x74], eax */
  W32((uint32_t)(ebp + 0x74u), eax);
/* 405f24: mov edi, ecx */
  edi = ecx;
/* 405f26: jne 0x40c8e0 */
  if (!zf) goto L_40c8e0;
L_405f2c: /* 405f2c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405f2e: mov dword ptr [ebp + 0x6c], 1 */
  W32((uint32_t)(ebp + 0x6cu), 0x1u);
/* 405f35: mov dword ptr [ebp + 0x70], ebx */
  W32((uint32_t)(ebp + 0x70u), ebx);
/* 405f38: je 0x40c9da */
  if (zf) goto L_40c9da;
L_405f3e: /* 405f3e: cmp byte ptr [edi], 0x4c */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x4cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 405f41: je 0x40c8ff */
  if (zf) goto L_40c8ff;
L_405f47: /* 405f47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405f48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405f49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405f4a: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 405f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405f4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405f4f: call 0x4060ed */
  esp -= 4; W32(esp, 0x405f54u); SPILL(); f_4060ed(); if (g_unwind) return; RELOAD();
/* 405f54: mov esi, eax */
  esi = eax;
/* 405f56: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 405f59: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405f5b: je 0x405fc0 */
  if (zf) goto L_405fc0;
L_405f5d: /* 405f5d: mov edi, 0x44ba2c */
  edi = 0x44ba2cu;
/* 405f62: xor esi, esi */
  esi = 0;
/* 405f64: mov ebx, edi */
  ebx = edi;
L_405f66: /* 405f66: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405f68: je 0x405f90 */
  if (zf) goto L_405f90;
L_405f6a: /* 405f6a: push dword ptr [ebx] */
  { uint32_t v = R32((uint32_t)(ebx)); esp -= 4; W32(esp, v); }
/* 405f6c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 405f6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405f70: call 0x406182 */
  esp -= 4; W32(esp, 0x405f75u); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 405f75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 405f77: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 405f78: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 405f79: je 0x405f8d */
  if (zf) goto L_405f8d;
L_405f7b: /* 405f7b: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 405f7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405f7f: call 0x405fd5 */
  esp -= 4; W32(esp, 0x405f84u); SPILL(); f_405fd5(); if (g_unwind) return; RELOAD();
/* 405f84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 405f86: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 405f87: je 0x40c9ed */
  if (zf) goto L_40c9ed;
L_405f8d: /* 405f8d: inc dword ptr [ebp + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x70u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x70u), r);
  }
L_405f90: /* 405f90: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 405f93: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 405f94: cmp ebx, 0x44ba68 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x44ba68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 405f9a: jle 0x405f66 */
  if ((zf || sf != of)) goto L_405f66;
L_405f9c: /* 405f9c: xor edi, edi */
  edi = 0;
/* 405f9e: cmp dword ptr [ebp + 0x6c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x6cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405fa1: je 0x40c9f5 */
  if (zf) goto L_40c9f5;
L_405fa7: /* 405fa7: call 0x40626a */
  esp -= 4; W32(esp, 0x405facu); SPILL(); f_40626a(); if (g_unwind) return; RELOAD();
/* 405fac: push dword ptr [0x44ba2c] */
  { uint32_t v = R32((uint32_t)(0x44ba2cu)); esp -= 4; W32(esp, v); }
/* 405fb2: mov esi, eax */
  esi = eax;
/* 405fb4: call 0x401156 */
  esp -= 4; W32(esp, 0x405fb9u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 405fb9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 405fba: mov dword ptr [0x44ba2c], edi */
  W32((uint32_t)(0x44ba2cu), edi);
L_405fc0: /* 405fc0: mov eax, esi */
  eax = esi;
L_405fc2: /* 405fc2: mov ecx, dword ptr [ebp + 0x74] */
  ecx = R32((uint32_t)(ebp + 0x74u));
/* 405fc5: xor ecx, dword ptr [ebp + 0x7c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x7cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 405fc8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 405fc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 405fca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 405fcb: call 0x4013ab */
  esp -= 4; W32(esp, 0x405fd0u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 405fd0: add ebp, 0x78 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 405fd3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 405fd4: ret  */
  esp += 4; SPILL(); return;
L_40c8e0: /* 40c8e0: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c8e2: je 0x40c8f0 */
  if (zf) goto L_40c8f0;
L_40c8e4: /* 40c8e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40c8e5: call 0x405fd5 */
  esp -= 4; W32(esp, 0x40c8eau); SPILL(); f_405fd5(); if (g_unwind) return; RELOAD();
/* 40c8ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c8eb: jmp 0x40c9df */
  goto L_40c9df;
L_40c8f0: /* 40c8f0: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 40c8f3: mov esi, dword ptr [eax*4 + 0x44ba2c] */
  esi = R32((uint32_t)(eax*4 + 0x44ba2cu));
/* 40c8fa: jmp 0x405fc0 */
  goto L_405fc0;
L_40c8ff: /* 40c8ff: cmp byte ptr [edi + 1], 0x43 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1u))); uint8_t b = (uint8_t)(0x43u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c903: jne 0x405f47 */
  if (!zf) goto L_405f47;
L_40c909: /* 40c909: cmp byte ptr [edi + 2], 0x5f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x2u))); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c90d: jne 0x405f47 */
  if (!zf) goto L_405f47;
L_40c913: /* 40c913: push 0x43eac8 */
  { uint32_t v = 0x43eac8u; esp -= 4; W32(esp, v); }
/* 40c918: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40c919: call 0x4074ce */
  esp -= 4; W32(esp, 0x40c91eu); SPILL(); f_4074ce(); if (g_unwind) return; RELOAD();
/* 40c91e: mov ebx, eax */
  ebx = eax;
/* 40c920: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c922: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c923: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c924: je 0x40c9e6 */
  if (zf) goto L_40c9e6;
L_40c92a: /* 40c92a: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 40c92c: mov dword ptr [ebp + 0x6c], eax */
  W32((uint32_t)(ebp + 0x6cu), eax);
/* 40c92f: je 0x40c9e6 */
  if (zf) goto L_40c9e6;
L_40c935: /* 40c935: cmp byte ptr [ebx], 0x3b */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x3bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c938: je 0x40c9e6 */
  if (zf) goto L_40c9e6;
L_40c93e: /* 40c93e: mov dword ptr [ebp + 0x68], 1 */
  W32((uint32_t)(ebp + 0x68u), 0x1u);
/* 40c945: mov esi, 0x44ba34 */
  esi = 0x44ba34u;
/* 40c94a: jmp 0x40c94f */
  goto L_40c94f;
L_40c94c: /* 40c94c: mov eax, dword ptr [ebp + 0x6c] */
  eax = R32((uint32_t)(ebp + 0x6cu));
L_40c94f: /* 40c94f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c950: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40c951: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 40c953: call 0x401a52 */
  esp -= 4; W32(esp, 0x40c958u); SPILL(); f_401a52(); if (g_unwind) return; RELOAD();
/* 40c958: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40c95b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c95d: jne 0x40c96c */
  if (!zf) goto L_40c96c;
L_40c95f: /* 40c95f: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 40c961: call 0x402493 */
  esp -= 4; W32(esp, 0x40c966u); SPILL(); hle_strlen(); RELOAD();
/* 40c966: cmp dword ptr [ebp + 0x6c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x6cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c969: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c96a: je 0x40c97a */
  if (zf) goto L_40c97a;
L_40c96c: /* 40c96c: inc dword ptr [ebp + 0x68] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x68u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x68u), r);
  }
/* 40c96f: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40c972: cmp esi, 0x44ba64 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44ba64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40c978: jle 0x40c94c */
  if ((zf || sf != of)) goto L_40c94c;
L_40c97a: /* 40c97a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 40c97b: push 0x43e544 */
  { uint32_t v = 0x43e544u; esp -= 4; W32(esp, v); }
/* 40c980: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40c981: call 0x407848 */
  esp -= 4; W32(esp, 0x40c986u); SPILL(); f_407848(); if (g_unwind) return; RELOAD();
/* 40c986: mov edi, eax */
  edi = eax;
/* 40c988: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c98a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c98b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c98c: jne 0x40c993 */
  if (!zf) goto L_40c993;
L_40c98e: /* 40c98e: cmp byte ptr [ebx], 0x3b */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x3bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c991: jne 0x40c9e6 */
  if (!zf) goto L_40c9e6;
L_40c993: /* 40c993: mov esi, dword ptr [ebp + 0x68] */
  esi = R32((uint32_t)(ebp + 0x68u));
/* 40c996: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40c999: jg 0x40c9be */
  if ((!zf && sf == of)) goto L_40c9be;
L_40c99b: /* 40c99b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40c99c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 40c99f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40c9a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c9a1: call 0x4053f1 */
  esp -= 4; W32(esp, 0x40c9a6u); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 40c9a6: and byte ptr [ebp + edi - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + edi + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + edi + 0xffffffe4u), r);
  }
/* 40c9ab: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 40c9ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c9af: call 0x405fd5 */
  esp -= 4; W32(esp, 0x40c9b4u); SPILL(); f_405fd5(); if (g_unwind) return; RELOAD();
/* 40c9b4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40c9b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c9b9: je 0x40c9be */
  if (zf) goto L_40c9be;
L_40c9bb: /* 40c9bb: inc dword ptr [ebp + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x70u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x70u), r);
  }
L_40c9be: /* 40c9be: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40c9c0: cmp byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c9c3: je 0x40c9cf */
  if (zf) goto L_40c9cf;
L_40c9c5: /* 40c9c5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 40c9c6: cmp byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c9c9: jne 0x40c913 */
  if (!zf) goto L_40c913;
L_40c9cf: /* 40c9cf: xor esi, esi */
  esi = 0;
/* 40c9d1: cmp dword ptr [ebp + 0x70], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x70u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c9d4: je 0x405fc0 */
  if (zf) goto L_405fc0;
L_40c9da: /* 40c9da: call 0x40626a */
  esp -= 4; W32(esp, 0x40c9dfu); SPILL(); f_40626a(); if (g_unwind) return; RELOAD();
L_40c9df: /* 40c9df: mov esi, eax */
  esi = eax;
/* 40c9e1: jmp 0x405fc0 */
  goto L_405fc0;
L_40c9e6: /* 40c9e6: xor eax, eax */
  eax = 0;
/* 40c9e8: jmp 0x405fc2 */
  goto L_405fc2;
L_40c9ed: /* 40c9ed: and dword ptr [ebp + 0x6c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x6cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x6cu), r);
  }
/* 40c9f0: jmp 0x405f90 */
  goto L_405f90;
L_40c9f5: /* 40c9f5: cmp dword ptr [ebp + 0x70], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x70u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c9f8: jne 0x40c9da */
  if (!zf) goto L_40c9da;
L_40c9fa: /* 40c9fa: xor esi, esi */
  esi = 0;
/* 40c9fc: jmp 0x405fc0 */
  goto L_405fc0;
}

void f_405fd5(void) {
  LOAD_REGS();
  goto L_405fd5;
L_4055b2: /* 4055b2: mov eax, dword ptr [ebp + 0x68] */
  eax = R32((uint32_t)(ebp + 0x68u));
/* 4055b5: mov dword ptr [0x449234], eax */
  W32((uint32_t)(0x449234u), eax);
/* 4055ba: jmp 0x4060ba */
  goto L_4060ba;
L_405fd5: /* 405fd5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 405fd6: lea ebp, [esp - 0x74] */
  ebp = (uint32_t)(esp + 0xffffff8cu);
/* 405fda: sub esp, 0x1c0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 405fe0: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 405fe5: xor eax, dword ptr [ebp + 0x78] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x78u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 405fe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405fe9: mov dword ptr [ebp + 0x70], eax */
  W32((uint32_t)(ebp + 0x70u), eax);
/* 405fec: lea eax, [ebp + 0x68] */
  eax = (uint32_t)(ebp + 0x68u);
/* 405fef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405ff0: lea eax, [ebp + 0x48] */
  eax = (uint32_t)(ebp + 0x48u);
/* 405ff3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405ff4: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 405ff7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405ff8: push dword ptr [ebp + 0x7c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x7cu)); esp -= 4; W32(esp, v); }
/* 405ffb: call 0x4060ed */
  esp -= 4; W32(esp, 0x406000u); SPILL(); f_4060ed(); if (g_unwind) return; RELOAD();
/* 406000: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 406003: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406005: je 0x4060dd */
  if (zf) goto L_4060dd;
L_40600b: /* 40600b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40600c: lea ebx, [esi + esi*2] */
  ebx = (uint32_t)(esi + esi*2);
/* 40600f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406010: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 406013: push dword ptr [ebx + 0x44ba2c] */
  { uint32_t v = R32((uint32_t)(ebx + 0x44ba2cu)); esp -= 4; W32(esp, v); }
/* 406019: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 40601c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40601d: call 0x406182 */
  esp -= 4; W32(esp, 0x406022u); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 406022: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406024: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406025: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406026: je 0x4060d5 */
  if (zf) goto L_4060d5;
L_40602c: /* 40602c: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 40602f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406030: call 0x402493 */
  esp -= 4; W32(esp, 0x406035u); SPILL(); hle_strlen(); RELOAD();
/* 406035: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 406036: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406037: call 0x4010eb */
  esp -= 4; W32(esp, 0x40603cu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40603c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40603e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40603f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406040: mov dword ptr [ebp + 0x60], eax */
  W32((uint32_t)(ebp + 0x60u), eax);
/* 406043: je 0x40c882 */
  if (zf) goto L_40c882;
L_406049: /* 406049: mov eax, dword ptr [ebx + 0x44ba2c] */
  eax = R32((uint32_t)(ebx + 0x44ba2cu));
/* 40604f: mov dword ptr [ebp + 0x64], eax */
  W32((uint32_t)(ebp + 0x64u), eax);
/* 406052: lea edi, [esi*4 + 0x449218] */
  edi = (uint32_t)(esi*4 + 0x449218u);
/* 406059: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 40605b: mov dword ptr [ebp + 0x50], eax */
  W32((uint32_t)(ebp + 0x50u), eax);
/* 40605e: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 406061: lea eax, [eax*2 + 0x44b9e0] */
  eax = (uint32_t)(eax*2 + 0x44b9e0u);
/* 406068: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 40606a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40606b: mov dword ptr [ebp + 0x6c], eax */
  W32((uint32_t)(ebp + 0x6cu), eax);
/* 40606e: lea eax, [ebp + 0x38] */
  eax = (uint32_t)(ebp + 0x38u);
/* 406071: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406072: call 0x40126b */
  esp -= 4; W32(esp, 0x406077u); SPILL(); hle_memcpy(); RELOAD();
/* 406077: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 40607c: mov dword ptr [ebp + 0x5c], eax */
  W32((uint32_t)(ebp + 0x5cu), eax);
/* 40607f: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 406082: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406083: push dword ptr [ebp + 0x60] */
  { uint32_t v = R32((uint32_t)(ebp + 0x60u)); esp -= 4; W32(esp, v); }
/* 406086: call 0x404b3a */
  esp -= 4; W32(esp, 0x40608bu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 40608b: mov dword ptr [ebx + 0x44ba2c], eax */
  W32((uint32_t)(ebx + 0x44ba2cu), eax);
/* 406091: movzx eax, word ptr [ebp + 0x48] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0x48u)));
/* 406095: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 406097: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 406099: lea eax, [ebp + 0x48] */
  eax = (uint32_t)(ebp + 0x48u);
/* 40609c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40609d: push dword ptr [ebp + 0x6c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x6cu)); esp -= 4; W32(esp, v); }
/* 4060a0: call 0x40126b */
  esp -= 4; W32(esp, 0x4060a5u); SPILL(); hle_memcpy(); RELOAD();
/* 4060a5: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4060a8: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4060ab: je 0x406aca */
  if (zf) goto L_406aca;
L_4060b1: /* 4060b1: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4060b4: je 0x4055b2 */
  if (zf) goto L_4055b2;
L_4060ba: /* 4060ba: call dword ptr [ebx + 0x44ba30] */
  { uint32_t t = R32((uint32_t)(ebx + 0x44ba30u)); esp -= 4; W32(esp, 0x4060c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4060c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4060c2: jne 0x40c8b1 */
  if (!zf) goto L_40c8b1;
L_4060c8: /* 4060c8: cmp dword ptr [ebp + 0x64], 0x44ba70 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x64u))); uint32_t b = (uint32_t)(0x44ba70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4060cf: jne 0x40c8d2 */
  if (!zf) goto L_40c8d2;
L_4060d5: /* 4060d5: mov eax, dword ptr [ebx + 0x44ba2c] */
  eax = R32((uint32_t)(ebx + 0x44ba2cu));
L_4060db: /* 4060db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4060dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4060dd: /* 4060dd: mov ecx, dword ptr [ebp + 0x70] */
  ecx = R32((uint32_t)(ebp + 0x70u));
/* 4060e0: xor ecx, dword ptr [ebp + 0x78] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x78u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4060e3: call 0x4013ab */
  esp -= 4; W32(esp, 0x4060e8u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4060e8: add ebp, 0x74 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 4060eb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4060ec: ret  */
  esp += 4; SPILL(); return;
L_406aca: /* 406aca: mov eax, dword ptr [ebp + 0x68] */
  eax = R32((uint32_t)(ebp + 0x68u));
/* 406acd: mov ecx, dword ptr [0x44b288] */
  ecx = R32((uint32_t)(0x44b288u));
/* 406ad3: and dword ptr [ebp + 0x6c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x6cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x6cu), r);
  }
/* 406ad7: mov dword ptr [0x449230], eax */
  W32((uint32_t)(0x449230u), eax);
/* 406adc: mov eax, dword ptr [0x44b28c] */
  eax = R32((uint32_t)(0x44b28cu));
/* 406ae1: mov dword ptr [ebp + 0x58], eax */
  W32((uint32_t)(ebp + 0x58u), eax);
/* 406ae4: mov eax, 0x44b268 */
  eax = 0x44b268u;
/* 406ae9: jmp 0x406afc */
  goto L_406afc;
L_406aeb: /* 406aeb: xor eax, eax */
  eax = 0;
/* 406aed: jmp 0x406b75 */
  goto L_406b75;
L_406af2: /* 406af2: mov eax, dword ptr [0x44b26c] */
  eax = R32((uint32_t)(0x44b26cu));
/* 406af7: jmp 0x406b86 */
  goto L_406b86;
L_406afc: /* 406afc: mov edx, dword ptr [ebp + 0x68] */
  edx = R32((uint32_t)(ebp + 0x68u));
/* 406aff: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406b01: je 0x40c889 */
  if (zf) goto L_40c889;
L_406b07: /* 406b07: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 406b09: inc dword ptr [ebp + 0x6c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x6cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x6cu), r);
  }
/* 406b0c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 406b0e: mov ecx, dword ptr [ebp + 0x58] */
  ecx = R32((uint32_t)(ebp + 0x58u));
/* 406b11: mov dword ptr [ebp + 0x40], edx */
  W32((uint32_t)(ebp + 0x40u), edx);
/* 406b14: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 406b17: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 406b1a: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* 406b1d: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 406b20: cmp eax, 0x44b290 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44b290u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 406b25: mov dword ptr [ebp + 0x58], edx */
  W32((uint32_t)(ebp + 0x58u), edx);
/* 406b28: jl 0x406afc */
  if ((sf != of)) goto L_406afc;
L_406b2a: /* 406b2a: cmp dword ptr [ebp + 0x6c], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x6cu))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406b2e: jne 0x406af2 */
  if (!zf) goto L_406af2;
L_406b30: /* 406b30: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 406b32: push dword ptr [0x449220] */
  { uint32_t v = R32((uint32_t)(0x449220u)); esp -= 4; W32(esp, v); }
/* 406b38: lea eax, [ebp - 0x14c] */
  eax = (uint32_t)(ebp + 0xfffffeb4u);
/* 406b3e: push dword ptr [ebp + 0x68] */
  { uint32_t v = R32((uint32_t)(ebp + 0x68u)); esp -= 4; W32(esp, v); }
/* 406b41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406b42: push 0x7f */
  { uint32_t v = 0x7fu; esp -= 4; W32(esp, v); }
/* 406b44: push 0x43e480 */
  { uint32_t v = 0x43e480u; esp -= 4; W32(esp, v); }
/* 406b49: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 406b4b: call 0x40528d */
  esp -= 4; W32(esp, 0x406b50u); SPILL(); f_40528d(); if (g_unwind) return; RELOAD();
/* 406b50: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 406b53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406b55: je 0x406aeb */
  if (zf) goto L_406aeb;
L_406b57: /* 406b57: push 0xfe */
  { uint32_t v = 0xfeu; esp -= 4; W32(esp, v); }
/* 406b5c: lea eax, [ebp - 0x14c] */
  eax = (uint32_t)(ebp + 0xfffffeb4u);
/* 406b62: push 0x43e380 */
  { uint32_t v = 0x43e380u; esp -= 4; W32(esp, v); }
/* 406b67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406b68: call 0x40149a */
  esp -= 4; W32(esp, 0x406b6du); SPILL(); f_40149a(); if (g_unwind) return; RELOAD();
/* 406b6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 406b70: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 406b72: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 406b74: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_406b75: /* 406b75: mov ecx, dword ptr [0x449230] */
  ecx = R32((uint32_t)(0x449230u));
/* 406b7b: mov dword ptr [0x44b26c], eax */
  W32((uint32_t)(0x44b26cu), eax);
/* 406b80: mov dword ptr [0x44b268], ecx */
  W32((uint32_t)(0x44b268u), ecx);
L_406b86: /* 406b86: mov dword ptr [0x449038], eax */
  W32((uint32_t)(0x449038u), eax);
/* 406b8b: jmp 0x4060b1 */
  goto L_4060b1;
L_40c882: /* 40c882: xor eax, eax */
  eax = 0;
/* 40c884: jmp 0x4060db */
  goto L_4060db;
L_40c889: /* 40c889: mov eax, dword ptr [ebp + 0x6c] */
  eax = R32((uint32_t)(ebp + 0x6cu));
/* 40c88c: lea eax, [eax*8 + 0x44b268] */
  eax = (uint32_t)(eax*8 + 0x44b268u);
/* 40c893: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 40c895: mov dword ptr [0x44b268], edx */
  W32((uint32_t)(0x44b268u), edx);
/* 40c89b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 40c89e: mov dword ptr [0x44b26c], edx */
  W32((uint32_t)(0x44b26cu), edx);
/* 40c8a4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 40c8a6: mov ecx, dword ptr [ebp + 0x58] */
  ecx = R32((uint32_t)(ebp + 0x58u));
/* 40c8a9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 40c8ac: jmp 0x406b2a */
  goto L_406b2a;
L_40c8b1: /* 40c8b1: mov eax, dword ptr [ebp + 0x64] */
  eax = R32((uint32_t)(ebp + 0x64u));
/* 40c8b4: push dword ptr [ebp + 0x60] */
  { uint32_t v = R32((uint32_t)(ebp + 0x60u)); esp -= 4; W32(esp, v); }
/* 40c8b7: mov dword ptr [ebx + 0x44ba2c], eax */
  W32((uint32_t)(ebx + 0x44ba2cu), eax);
/* 40c8bd: call 0x401156 */
  esp -= 4; W32(esp, 0x40c8c2u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40c8c2: mov eax, dword ptr [ebp + 0x50] */
  eax = R32((uint32_t)(ebp + 0x50u));
/* 40c8c5: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 40c8c7: mov eax, dword ptr [ebp + 0x5c] */
  eax = R32((uint32_t)(ebp + 0x5cu));
/* 40c8ca: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c8cb: mov dword ptr [0x449230], eax */
  W32((uint32_t)(0x449230u), eax);
/* 40c8d0: jmp 0x40c882 */
  goto L_40c882;
L_40c8d2: /* 40c8d2: push dword ptr [ebp + 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0x64u)); esp -= 4; W32(esp, v); }
/* 40c8d5: call 0x401156 */
  esp -= 4; W32(esp, 0x40c8dau); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40c8da: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c8db: jmp 0x4060d5 */
  goto L_4060d5;
}

void f_4060ed(void) {
  LOAD_REGS();
L_4060ed: /* 4060ed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4060ee: lea ebp, [esp - 0x64] */
  ebp = (uint32_t)(esp + 0xffffff9cu);
/* 4060f2: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4060f8: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4060fd: xor eax, dword ptr [ebp + 0x68] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x68u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 406100: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406101: mov esi, dword ptr [ebp + 0x6c] */
  esi = R32((uint32_t)(ebp + 0x6cu));
/* 406104: xor edx, edx */
  edx = 0;
/* 406106: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406108: mov dword ptr [ebp + 0x60], eax */
  W32((uint32_t)(ebp + 0x60u), eax);
/* 40610b: je 0x40c83d */
  if (zf) goto L_40c83d;
L_406111: /* 406111: cmp byte ptr [esi], 0x43 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x43u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406114: je 0x40c844 */
  if (zf) goto L_40c844;
L_40611a: /* 40611a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40611b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40611c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40611d: mov edi, 0x44b318 */
  edi = 0x44b318u;
/* 406122: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406123: call 0x406182 */
  esp -= 4; W32(esp, 0x406128u); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 406128: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40612a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40612b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40612c: jne 0x4068b1 */
  if (!zf) goto L_4068b1;
L_406132: /* 406132: cmp dword ptr [ebp + 0x74], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x74u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406136: je 0x40614a */
  if (zf) goto L_40614a;
L_406138: /* 406138: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 40613a: push 0x44b9b4 */
  { uint32_t v = 0x44b9b4u; esp -= 4; W32(esp, v); }
/* 40613f: push dword ptr [ebp + 0x74] */
  { uint32_t v = R32((uint32_t)(ebp + 0x74u)); esp -= 4; W32(esp, v); }
/* 406142: call 0x40126b */
  esp -= 4; W32(esp, 0x406147u); SPILL(); hle_memcpy(); RELOAD();
/* 406147: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_40614a: /* 40614a: cmp dword ptr [ebp + 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x78u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40614e: je 0x406162 */
  if (zf) goto L_406162;
L_406150: /* 406150: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 406152: push 0x44b9bc */
  { uint32_t v = 0x44b9bcu; esp -= 4; W32(esp, v); }
/* 406157: push dword ptr [ebp + 0x78] */
  { uint32_t v = R32((uint32_t)(ebp + 0x78u)); esp -= 4; W32(esp, v); }
/* 40615a: call 0x40126b */
  esp -= 4; W32(esp, 0x40615fu); SPILL(); hle_memcpy(); RELOAD();
/* 40615f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_406162: /* 406162: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406163: push dword ptr [ebp + 0x70] */
  { uint32_t v = R32((uint32_t)(ebp + 0x70u)); esp -= 4; W32(esp, v); }
/* 406166: call 0x404b3a */
  esp -= 4; W32(esp, 0x40616bu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 40616b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40616c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40616d: mov eax, edi */
  eax = edi;
L_40616f: /* 40616f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 406170: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_406171: /* 406171: mov ecx, dword ptr [ebp + 0x60] */
  ecx = R32((uint32_t)(ebp + 0x60u));
/* 406174: xor ecx, dword ptr [ebp + 0x68] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x68u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 406177: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 406178: call 0x4013ab */
  esp -= 4; W32(esp, 0x40617du); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 40617d: add ebp, 0x64 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 406180: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 406181: ret  */
  esp += 4; SPILL(); return;
L_4068b1: /* 4068b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4068b2: mov ebx, 0x44b290 */
  ebx = 0x44b290u;
/* 4068b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4068b8: call 0x406182 */
  esp -= 4; W32(esp, 0x4068bdu); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 4068bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4068bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4068c0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4068c1: je 0x406132 */
  if (zf) goto L_406132;
L_4068c7: /* 4068c7: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4068ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4068cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4068cc: call 0x405561 */
  esp -= 4; W32(esp, 0x4068d1u); SPILL(); f_405561(); if (g_unwind) return; RELOAD();
/* 4068d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4068d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4068d4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4068d5: jne 0x40691f */
  if (!zf) goto L_40691f;
L_4068d7: /* 4068d7: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4068da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4068db: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4068de: push 0x44b9b4 */
  { uint32_t v = 0x44b9b4u; esp -= 4; W32(esp, v); }
/* 4068e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4068e4: call 0x406974 */
  esp -= 4; W32(esp, 0x4068e9u); SPILL(); f_406974(); if (g_unwind) return; RELOAD();
/* 4068e9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4068ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4068ee: je 0x40691f */
  if (zf) goto L_40691f;
L_4068f0: /* 4068f0: movzx eax, word ptr [0x44b9b8] */
  eax = (uint32_t)(R16((uint32_t)(0x44b9b8u)));
/* 4068f7: mov dword ptr [0x44b9bc], eax */
  W32((uint32_t)(0x44b9bcu), eax);
/* 4068fc: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4068ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406900: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406901: call 0x406926 */
  esp -= 4; W32(esp, 0x406906u); SPILL(); f_406926(); if (g_unwind) return; RELOAD();
/* 406906: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406909: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40690a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40690b: jne 0x40c87c */
  if (!zf) goto L_40c87c;
L_406911: /* 406911: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_406912: /* 406912: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406913: call 0x404b3a */
  esp -= 4; W32(esp, 0x406918u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 406918: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406919: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40691a: jmp 0x406132 */
  goto L_406132;
L_40691f: /* 40691f: xor eax, eax */
  eax = 0;
/* 406921: jmp 0x40616f */
  goto L_40616f;
L_40c83d: /* 40c83d: xor eax, eax */
  eax = 0;
/* 40c83f: jmp 0x406171 */
  goto L_406171;
L_40c844: /* 40c844: cmp byte ptr [esi + 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40c848: jne 0x40611a */
  if (!zf) goto L_40611a;
L_40c84e: /* 40c84e: mov eax, dword ptr [ebp + 0x70] */
  eax = R32((uint32_t)(ebp + 0x70u));
/* 40c851: mov ecx, dword ptr [ebp + 0x74] */
  ecx = R32((uint32_t)(ebp + 0x74u));
/* 40c854: and byte ptr [eax + 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + 0x1u), r);
  }
/* 40c858: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c85a: mov byte ptr [eax], 0x43 */
  W8((uint32_t)(eax), 0x43u);
/* 40c85d: je 0x40c86a */
  if (zf) goto L_40c86a;
L_40c85f: /* 40c85f: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
/* 40c862: mov word ptr [ecx + 2], dx */
  W16((uint32_t)(ecx + 0x2u), (edx & 0xffffu));
/* 40c866: mov word ptr [ecx + 4], dx */
  W16((uint32_t)(ecx + 0x4u), (edx & 0xffffu));
L_40c86a: /* 40c86a: mov ecx, dword ptr [ebp + 0x78] */
  ecx = R32((uint32_t)(ebp + 0x78u));
/* 40c86d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c86f: je 0x406171 */
  if (zf) goto L_406171;
L_40c875: /* 40c875: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 40c877: jmp 0x406171 */
  goto L_406171;
L_40c87c: /* 40c87c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c87d: jmp 0x406912 */
  goto L_406912;
}

void f_406182(void) {
  LOAD_REGS();
  goto L_406182;
L_40555e: /* 40555e: xor eax, eax */
  eax = 0;
/* 405560: ret  */
  esp += 4; SPILL(); return;
L_406182: /* 406182: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 406186: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 40618a: test edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406190: jne 0x407473 */
  if (!zf) goto L_407473;
L_406196: /* 406196: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 406198: cmp al, byte ptr [ecx] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40619a: jne 0x4061d5 */
  if (!zf) goto L_4061d5;
L_40619c: /* 40619c: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40619e: je 0x40555e */
  if (zf) goto L_40555e;
L_4061a4: /* 4061a4: cmp ah, byte ptr [ecx + 1] */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4061a7: jne 0x4061d5 */
  if (!zf) goto L_4061d5;
L_4061a9: /* 4061a9: or ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 4061ab: je 0x40555e */
  if (zf) goto L_40555e;
L_4061b1: /* 4061b1: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4061b4: cmp al, byte ptr [ecx + 2] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0x2u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4061b7: jne 0x4061d5 */
  if (!zf) goto L_4061d5;
L_4061b9: /* 4061b9: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4061bb: je 0x40555e */
  if (zf) goto L_40555e;
L_4061c1: /* 4061c1: cmp ah, byte ptr [ecx + 3] */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0x3u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4061c4: jne 0x4061d5 */
  if (!zf) goto L_4061d5;
L_4061c6: /* 4061c6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4061c9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4061cc: or ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 4061ce: jne 0x406196 */
  if (!zf) goto L_406196;
L_4061d0: /* 4061d0: jmp 0x40746c */
  goto L_40746c;
L_4061d5: /* 4061d5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4061d7: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4061d9: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4061dc: ret  */
  esp += 4; SPILL(); return;
L_40746c: /* 40746c: mov edi, edi */
  edi = edi;
/* 40746e: jmp 0x40555e */
  goto L_40555e;
L_407473: /* 407473: test edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407479: je 0x40749f */
  if (zf) goto L_40749f;
L_40747b: /* 40747b: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 40747d: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 407480: cmp al, byte ptr [ecx] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 407482: jne 0x4061d5 */
  if (!zf) goto L_4061d5;
L_407488: /* 407488: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40748b: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40748d: je 0x40555e */
  if (zf) goto L_40555e;
L_407493: /* 407493: test edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407499: je 0x406196 */
  if (zf) goto L_406196;
L_40749f: /* 40749f: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 4074a2: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4074a5: cmp al, byte ptr [ecx] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4074a7: jne 0x4061d5 */
  if (!zf) goto L_4061d5;
L_4074ad: /* 4074ad: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4074af: je 0x40555e */
  if (zf) goto L_40555e;
L_4074b5: /* 4074b5: cmp ah, byte ptr [ecx + 1] */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4074b8: jne 0x4061d5 */
  if (!zf) goto L_4061d5;
L_4074be: /* 4074be: or ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 4074c0: je 0x40555e */
  if (zf) goto L_40555e;
L_4074c6: /* 4074c6: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4074c9: jmp 0x406196 */
  goto L_406196;
}

void f_40620f(void) {
  LOAD_REGS();
L_40620f: /* 40620f: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 406211: push 0x43e560 */
  { uint32_t v = 0x43e560u; esp -= 4; W32(esp, v); }
/* 406216: call 0x40101f */
  esp -= 4; W32(esp, 0x40621bu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 40621b: xor edi, edi */
  edi = 0;
/* 40621d: xor ebx, ebx */
  ebx = 0;
/* 40621f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 406220: cmp dword ptr [0x44ba0c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba0cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406226: je 0x406250 */
  if (zf) goto L_406250;
L_406228: /* 406228: mov eax, dword ptr [0x44ba0c] */
  eax = R32((uint32_t)(0x44ba0cu));
/* 40622d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40622f: jne 0x40d38c */
  if (!zf) goto L_40d38c;
L_406235: /* 406235: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 406238: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40623b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40623e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 406241: call dword ptr [0x439124] */
  esp -= 4; W32(esp, 0x406247u); SPILL(); call_ind(R32(0x439124u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoW */ RELOAD();
L_406247: /* 406247: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 40624a: call 0x40105a */
  esp -= 4; W32(esp, 0x40624fu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 40624f: ret  */
  esp += 4; SPILL(); return;
L_406250: /* 406250: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406251: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406252: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406253: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406254: call dword ptr [0x439124] */
  esp -= 4; W32(esp, 0x40625au); SPILL(); call_ind(R32(0x439124u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoW */ RELOAD();
/* 40625a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40625c: je 0x40d36e */
  if (zf) goto L_40d36e;
L_406262: /* 406262: mov dword ptr [0x44ba0c], ebx */
  W32((uint32_t)(0x44ba0cu), ebx);
/* 406268: jmp 0x406228 */
  goto L_406228;
L_40d36e: /* 40d36e: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40d374u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40d374: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d377: jne 0x406228 */
  if (!zf) goto L_406228;
L_40d37d: /* 40d37d: mov dword ptr [0x44ba0c], 2 */
  W32((uint32_t)(0x44ba0cu), 0x2u);
/* 40d387: jmp 0x406228 */
  goto L_406228;
L_40d38c: /* 40d38c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d38f: je 0x40d395 */
  if (zf) goto L_40d395;
L_40d391: /* 40d391: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d393: jne 0x40d3bd */
  if (!zf) goto L_40d3bd;
L_40d395: /* 40d395: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 40d398: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 40d39b: cmp dword ptr [ebp + 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d39e: jne 0x40d3a8 */
  if (!zf) goto L_40d3a8;
L_40d3a0: /* 40d3a0: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 40d3a5: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
L_40d3a8: /* 40d3a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d3a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d3aa: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40d3ad: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40d3b0: call dword ptr [0x439110] */
  esp -= 4; W32(esp, 0x40d3b6u); SPILL(); call_ind(R32(0x439110u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoA */ RELOAD();
/* 40d3b6: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 40d3b9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d3bb: jne 0x40d3c4 */
  if (!zf) goto L_40d3c4;
L_40d3bd: /* 40d3bd: xor eax, eax */
  eax = 0;
/* 40d3bf: jmp 0x406247 */
  goto L_406247;
L_40d3c4: /* 40d3c4: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 40d3c7: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40d3ca: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40d3cd: call 0x4014ee */
  esp -= 4; W32(esp, 0x40d3d2u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 40d3d2: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 40d3d5: mov esi, esp */
  esi = esp;
/* 40d3d7: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 40d3da: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40d3de: jmp 0x40d3f7 */
  goto L_40d3f7;
L_40d3f7: /* 40d3f7: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d3f9: jne 0x40d40d */
  if (!zf) goto L_40d40d;
L_40d3fb: /* 40d3fb: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 40d3fe: call 0x4010eb */
  esp -= 4; W32(esp, 0x40d403u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40d403: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d404: mov esi, eax */
  esi = eax;
/* 40d406: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d408: je 0x40d3bd */
  if (zf) goto L_40d3bd;
L_40d40a: /* 40d40a: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_40d40d: /* 40d40d: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 40d410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d411: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40d414: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40d417: call dword ptr [0x439110] */
  esp -= 4; W32(esp, 0x40d41du); SPILL(); call_ind(R32(0x439110u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoA */ RELOAD();
/* 40d41d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d41f: je 0x40d440 */
  if (zf) goto L_40d440;
L_40d421: /* 40d421: cmp dword ptr [ebp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d424: jne 0x40d42a */
  if (!zf) goto L_40d42a;
L_40d426: /* 40d426: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d428: jmp 0x40d430 */
  goto L_40d430;
L_40d42a: /* 40d42a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40d42d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
L_40d430: /* 40d430: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 40d432: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d433: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d434: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40d437: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x40d43du); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 40d43d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_40d440: /* 40d440: cmp dword ptr [ebp - 0x20], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d443: je 0x40d44c */
  if (zf) goto L_40d44c;
L_40d445: /* 40d445: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d446: call 0x401156 */
  esp -= 4; W32(esp, 0x40d44bu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d44b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40d44c: /* 40d44c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40d44f: jmp 0x406247 */
  goto L_406247;
}

void f_406250(void) {
  LOAD_REGS();
  goto L_406250;
L_406228: /* 406228: mov eax, dword ptr [0x44ba0c] */
  eax = R32((uint32_t)(0x44ba0cu));
/* 40622d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40622f: jne 0x40d38c */
  if (!zf) goto L_40d38c;
L_406235: /* 406235: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 406238: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40623b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40623e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 406241: call dword ptr [0x439124] */
  esp -= 4; W32(esp, 0x406247u); SPILL(); call_ind(R32(0x439124u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoW */ RELOAD();
L_406247: /* 406247: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 40624a: call 0x40105a */
  esp -= 4; W32(esp, 0x40624fu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 40624f: ret  */
  esp += 4; SPILL(); return;
L_406250: /* 406250: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406251: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406252: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406253: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406254: call dword ptr [0x439124] */
  esp -= 4; W32(esp, 0x40625au); SPILL(); call_ind(R32(0x439124u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoW */ RELOAD();
/* 40625a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40625c: je 0x40d36e */
  if (zf) goto L_40d36e;
L_406262: /* 406262: mov dword ptr [0x44ba0c], ebx */
  W32((uint32_t)(0x44ba0cu), ebx);
/* 406268: jmp 0x406228 */
  goto L_406228;
L_40d36e: /* 40d36e: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40d374u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40d374: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d377: jne 0x406228 */
  if (!zf) goto L_406228;
L_40d37d: /* 40d37d: mov dword ptr [0x44ba0c], 2 */
  W32((uint32_t)(0x44ba0cu), 0x2u);
/* 40d387: jmp 0x406228 */
  goto L_406228;
L_40d38c: /* 40d38c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d38f: je 0x40d395 */
  if (zf) goto L_40d395;
L_40d391: /* 40d391: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d393: jne 0x40d3bd */
  if (!zf) goto L_40d3bd;
L_40d395: /* 40d395: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 40d398: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 40d39b: cmp dword ptr [ebp + 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d39e: jne 0x40d3a8 */
  if (!zf) goto L_40d3a8;
L_40d3a0: /* 40d3a0: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 40d3a5: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
L_40d3a8: /* 40d3a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d3a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d3aa: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40d3ad: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40d3b0: call dword ptr [0x439110] */
  esp -= 4; W32(esp, 0x40d3b6u); SPILL(); call_ind(R32(0x439110u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoA */ RELOAD();
/* 40d3b6: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 40d3b9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d3bb: jne 0x40d3c4 */
  if (!zf) goto L_40d3c4;
L_40d3bd: /* 40d3bd: xor eax, eax */
  eax = 0;
/* 40d3bf: jmp 0x406247 */
  goto L_406247;
L_40d3c4: /* 40d3c4: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 40d3c7: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40d3ca: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40d3cd: call 0x4014ee */
  esp -= 4; W32(esp, 0x40d3d2u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 40d3d2: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 40d3d5: mov esi, esp */
  esi = esp;
/* 40d3d7: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 40d3da: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40d3de: jmp 0x40d3f7 */
  goto L_40d3f7;
L_40d3f7: /* 40d3f7: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d3f9: jne 0x40d40d */
  if (!zf) goto L_40d40d;
L_40d3fb: /* 40d3fb: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 40d3fe: call 0x4010eb */
  esp -= 4; W32(esp, 0x40d403u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40d403: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d404: mov esi, eax */
  esi = eax;
/* 40d406: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d408: je 0x40d3bd */
  if (zf) goto L_40d3bd;
L_40d40a: /* 40d40a: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_40d40d: /* 40d40d: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 40d410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d411: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40d414: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40d417: call dword ptr [0x439110] */
  esp -= 4; W32(esp, 0x40d41du); SPILL(); call_ind(R32(0x439110u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoA */ RELOAD();
/* 40d41d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d41f: je 0x40d440 */
  if (zf) goto L_40d440;
L_40d421: /* 40d421: cmp dword ptr [ebp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d424: jne 0x40d42a */
  if (!zf) goto L_40d42a;
L_40d426: /* 40d426: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d428: jmp 0x40d430 */
  goto L_40d430;
L_40d42a: /* 40d42a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40d42d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
L_40d430: /* 40d430: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 40d432: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d433: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d434: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40d437: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x40d43du); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 40d43d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_40d440: /* 40d440: cmp dword ptr [ebp - 0x20], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d443: je 0x40d44c */
  if (zf) goto L_40d44c;
L_40d445: /* 40d445: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d446: call 0x401156 */
  esp -= 4; W32(esp, 0x40d44bu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d44b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40d44c: /* 40d44c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40d44f: jmp 0x406247 */
  goto L_406247;
}

void f_40626a(void) {
  LOAD_REGS();
L_40626a: /* 40626a: mov eax, dword ptr [0x44ba2c] */
  eax = R32((uint32_t)(0x44ba2cu));
/* 40626f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406270: xor ebp, ebp */
  ebp = 0;
/* 406272: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 406273: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406275: jne 0x40628f */
  if (!zf) goto L_40628f;
L_406277: /* 406277: push 0x351 */
  { uint32_t v = 0x351u; esp -= 4; W32(esp, v); }
/* 40627c: call 0x4010eb */
  esp -= 4; W32(esp, 0x406281u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 406281: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406283: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406284: mov dword ptr [0x44ba2c], eax */
  W32((uint32_t)(0x44ba2cu), eax);
/* 406289: je 0x40c82d */
  if (zf) goto L_40c82d;
L_40628f: /* 40628f: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 406292: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406293: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406294: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406295: push dword ptr [0x44ba38] */
  { uint32_t v = R32((uint32_t)(0x44ba38u)); esp -= 4; W32(esp, v); }
/* 40629b: mov edi, 0x43e548 */
  edi = 0x43e548u;
/* 4062a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4062a1: push dword ptr [0x44ba34] */
  { uint32_t v = R32((uint32_t)(0x44ba34u)); esp -= 4; W32(esp, v); }
/* 4062a7: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4062a9: push dword ptr [0x44ba2c] */
  { uint32_t v = R32((uint32_t)(0x44ba2cu)); esp -= 4; W32(esp, v); }
/* 4062af: call 0x40632a */
  esp -= 4; W32(esp, 0x4062b4u); SPILL(); f_40632a(); if (g_unwind) return; RELOAD();
/* 4062b4: mov esi, 0x44ba38 */
  esi = 0x44ba38u;
/* 4062b9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4062bc: mov ebx, esi */
  ebx = esi;
L_4062be: /* 4062be: push 0x43e544 */
  { uint32_t v = 0x43e544u; esp -= 4; W32(esp, v); }
/* 4062c3: push dword ptr [0x44ba2c] */
  { uint32_t v = R32((uint32_t)(0x44ba2cu)); esp -= 4; W32(esp, v); }
/* 4062c9: call 0x401d57 */
  esp -= 4; W32(esp, 0x4062ceu); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 4062ce: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4062d1: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4062d3: push dword ptr [ebx] */
  { uint32_t v = R32((uint32_t)(ebx)); esp -= 4; W32(esp, v); }
/* 4062d5: call 0x406182 */
  esp -= 4; W32(esp, 0x4062dau); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 4062da: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4062dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4062df: jne 0x40c82f */
  if (!zf) goto L_40c82f;
L_4062e5: /* 4062e5: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4062e7: mov ebx, esi */
  ebx = esi;
/* 4062e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4062ea: push dword ptr [esi - 4] */
  { uint32_t v = R32((uint32_t)(esi + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4062ed: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4062ef: push dword ptr [0x44ba2c] */
  { uint32_t v = R32((uint32_t)(0x44ba2cu)); esp -= 4; W32(esp, v); }
/* 4062f5: call 0x40632a */
  esp -= 4; W32(esp, 0x4062fau); SPILL(); f_40632a(); if (g_unwind) return; RELOAD();
/* 4062fa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4062fd: cmp esi, 0x44ba68 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44ba68u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 406303: jl 0x4062be */
  if ((sf != of)) goto L_4062be;
L_406305: /* 406305: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406307: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 406308: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 406309: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40630a: je 0x40c836 */
  if (zf) goto L_40c836;
L_406310: /* 406310: push dword ptr [0x44ba2c] */
  { uint32_t v = R32((uint32_t)(0x44ba2cu)); esp -= 4; W32(esp, v); }
/* 406316: call 0x401156 */
  esp -= 4; W32(esp, 0x40631bu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40631b: and dword ptr [0x44ba2c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba2cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44ba2cu), r);
  }
/* 406322: mov eax, dword ptr [0x44ba44] */
  eax = R32((uint32_t)(0x44ba44u));
/* 406327: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406328: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 406329: ret  */
  esp += 4; SPILL(); return;
L_40c82d: /* 40c82d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 40c82e: ret  */
  esp += 4; SPILL(); return;
L_40c82f: /* 40c82f: xor ebp, ebp */
  ebp = 0;
/* 40c831: jmp 0x4062e5 */
  goto L_4062e5;
L_40c836: /* 40c836: mov eax, dword ptr [0x44ba2c] */
  eax = R32((uint32_t)(0x44ba2cu));
/* 40c83b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 40c83c: ret  */
  esp += 4; SPILL(); return;
}

void f_40632a(void) {
  LOAD_REGS();
L_40632a: /* 40632a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40632b: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 40632f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 406331: jle 0x40634c */
  if ((zf || sf != of)) goto L_40634c;
L_406333: /* 406333: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406334: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
L_406338: /* 406338: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40633b: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 40633d: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 406341: call 0x401d57 */
  esp -= 4; W32(esp, 0x406346u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 406346: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 406347: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406348: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406349: jne 0x406338 */
  if (!zf) goto L_406338;
L_40634b: /* 40634b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_40634c: /* 40634c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40634d: ret  */
  esp += 4; SPILL(); return;
}

void f_406365(void) {
  LOAD_REGS();
  goto L_406365;
L_40634e: /* 40634e: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 406351: xor ecx, ecx */
  ecx = 0;
/* 406353: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406355: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 406358: push 0x22 */
  { uint32_t v = 0x22u; esp -= 4; W32(esp, v); }
/* 40635a: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40635c: mov edx, ecx */
  edx = ecx;
/* 40635e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40635f: jmp 0x4063af */
  goto L_4063af;
L_406361: /* 406361: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 406363: jmp 0x4063c8 */
  goto L_4063c8;
L_406365: /* 406365: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406366: mov ebp, esp */
  ebp = esp;
/* 406368: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406369: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40636a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40636b: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 40636e: mov esi, eax */
  esi = eax;
/* 406370: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 406373: xor edx, edx */
  edx = 0;
/* 406375: cmp dword ptr [ebp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406378: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 40637a: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 406380: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 406383: je 0x40638e */
  if (zf) goto L_40638e;
L_406385: /* 406385: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 406388: add dword ptr [ebp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 40638c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
L_40638e: /* 40638e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 406390: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_406391: /* 406391: cmp word ptr [eax], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 406395: je 0x40634e */
  if (zf) goto L_40634e;
L_406397: /* 406397: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* 406399: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40639b: je 0x4063a5 */
  if (zf) goto L_4063a5;
L_40639d: /* 40639d: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 4063a0: mov word ptr [esi], cx */
  W16((uint32_t)(esi), (ecx & 0xffffu));
/* 4063a3: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_4063a5: /* 4063a5: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 4063a8: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4063aa: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4063ad: je 0x406361 */
  if (zf) goto L_406361;
L_4063af: /* 4063af: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4063b1: jne 0x406391 */
  if (!zf) goto L_406391;
L_4063b3: /* 4063b3: cmp cx, 0x20 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4063b7: je 0x4063bf */
  if (zf) goto L_4063bf;
L_4063b9: /* 4063b9: cmp cx, 9 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4063bd: jne 0x406391 */
  if (!zf) goto L_406391;
L_4063bf: /* 4063bf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4063c1: je 0x4063c8 */
  if (zf) goto L_4063c8;
L_4063c3: /* 4063c3: and word ptr [esi - 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xfffffffeu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0xfffffffeu), r);
  }
L_4063c8: /* 4063c8: and dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_4063cc: /* 4063cc: xor edx, edx */
  edx = 0;
/* 4063ce: cmp word ptr [eax], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4063d1: jne 0x40be69 */
  if (!zf) goto L_40be69;
L_4063d7: /* 4063d7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4063da: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4063dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4063dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4063de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4063df: je 0x4063e3 */
  if (zf) goto L_4063e3;
L_4063e1: /* 4063e1: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_4063e3: /* 4063e3: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4063e6: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 4063e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4063e9: ret  */
  esp += 4; SPILL(); return;
L_40be69: /* 40be69: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 40be6c: cmp cx, 0x20 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40be70: je 0x40be78 */
  if (zf) goto L_40be78;
L_40be72: /* 40be72: cmp cx, 9 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40be76: jne 0x40be7c */
  if (!zf) goto L_40be7c;
L_40be78: /* 40be78: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40be7a: jmp 0x40be69 */
  goto L_40be69;
L_40be7c: /* 40be7c: cmp word ptr [eax], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40be7f: je 0x4063d7 */
  if (zf) goto L_4063d7;
L_40be85: /* 40be85: cmp dword ptr [ebp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40be88: je 0x40be93 */
  if (zf) goto L_40be93;
L_40be8a: /* 40be8a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 40be8d: add dword ptr [ebp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 40be91: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
L_40be93: /* 40be93: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 40be96: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
L_40be98: /* 40be98: xor edi, edi */
  edi = 0;
/* 40be9a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 40be9b: xor edx, edx */
  edx = 0;
/* 40be9d: jmp 0x40bea2 */
  goto L_40bea2;
L_40be9f: /* 40be9f: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40bea1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_40bea2: /* 40bea2: cmp word ptr [eax], 0x5c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40bea6: je 0x40be9f */
  if (zf) goto L_40be9f;
L_40bea8: /* 40bea8: cmp word ptr [eax], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40beac: jne 0x40bed8 */
  if (!zf) goto L_40bed8;
L_40beae: /* 40beae: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40beb1: jne 0x40bed6 */
  if (!zf) goto L_40bed6;
L_40beb3: /* 40beb3: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40beb7: je 0x40bec6 */
  if (zf) goto L_40bec6;
L_40beb9: /* 40beb9: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 40bebc: cmp word ptr [ecx], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40bec0: jne 0x40bec6 */
  if (!zf) goto L_40bec6;
L_40bec2: /* 40bec2: mov eax, ecx */
  eax = ecx;
/* 40bec4: jmp 0x40bec8 */
  goto L_40bec8;
L_40bec6: /* 40bec6: xor edi, edi */
  edi = 0;
L_40bec8: /* 40bec8: xor ecx, ecx */
  ecx = 0;
/* 40beca: cmp dword ptr [ebp + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40becd: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40becf: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 40bed2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40bed3: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
L_40bed6: /* 40bed6: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
L_40bed8: /* 40bed8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40beda: je 0x40beef */
  if (zf) goto L_40beef;
L_40bedc: /* 40bedc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bede: je 0x40bee7 */
  if (zf) goto L_40bee7;
L_40bee0: /* 40bee0: mov word ptr [esi], 0x5c */
  W16((uint32_t)(esi), 0x5cu);
/* 40bee5: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_40bee7: /* 40bee7: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 40beea: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
/* 40beec: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 40beed: jne 0x40bedc */
  if (!zf) goto L_40bedc;
L_40beef: /* 40beef: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 40bef2: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 40bef5: je 0x40bf22 */
  if (zf) goto L_40bf22;
L_40bef7: /* 40bef7: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40befb: jne 0x40bf09 */
  if (!zf) goto L_40bf09;
L_40befd: /* 40befd: cmp cx, 0x20 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40bf01: je 0x40bf22 */
  if (zf) goto L_40bf22;
L_40bf03: /* 40bf03: cmp cx, 9 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40bf07: je 0x40bf22 */
  if (zf) goto L_40bf22;
L_40bf09: /* 40bf09: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bf0b: je 0x40bf1b */
  if (zf) goto L_40bf1b;
L_40bf0d: /* 40bf0d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bf0f: je 0x40bf16 */
  if (zf) goto L_40bf16;
L_40bf11: /* 40bf11: mov word ptr [esi], cx */
  W16((uint32_t)(esi), (ecx & 0xffffu));
/* 40bf14: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_40bf16: /* 40bf16: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 40bf19: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
L_40bf1b: /* 40bf1b: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40bf1d: jmp 0x40be98 */
  goto L_40be98;
L_40bf22: /* 40bf22: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bf24: je 0x40bf2c */
  if (zf) goto L_40bf2c;
L_40bf26: /* 40bf26: and word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi), r);
  }
/* 40bf2a: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_40bf2c: /* 40bf2c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 40bf2f: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
/* 40bf31: jmp 0x4063cc */
  goto L_4063cc;
}

void f_4063ea(void) {
  LOAD_REGS();
L_4063ea: /* 4063ea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4063eb: mov ebp, esp */
  ebp = esp;
/* 4063ed: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4063f0: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4063f5: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4063f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4063f9: mov esi, ecx */
  esi = ecx;
/* 4063fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4063fd: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 406400: je 0x40640b */
  if (zf) goto L_40640b;
L_406402: /* 406402: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406405: jne 0x40d205 */
  if (!zf) goto L_40d205;
L_40640b: /* 40640b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 40640d: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 406410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406411: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
L_406416: /* 406416: push dword ptr [0x44b9d0] */
  { uint32_t v = R32((uint32_t)(0x44b9d0u)); esp -= 4; W32(esp, v); }
/* 40641c: call dword ptr [0x44b9dc] */
  { uint32_t t = R32((uint32_t)(0x44b9dcu)); esp -= 4; W32(esp, 0x406422u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 406422: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406424: je 0x406430 */
  if (zf) goto L_406430;
L_406426: /* 406426: lea esi, [ebp - 0xc] */
  esi = (uint32_t)(ebp + 0xfffffff4u);
L_406429: /* 406429: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40642a: call 0x40643e */
  esp -= 4; W32(esp, 0x40642fu); SPILL(); f_40643e(); if (g_unwind) return; RELOAD();
/* 40642f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_406430: /* 406430: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 406433: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 406436: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 406437: call 0x4013ab */
  esp -= 4; W32(esp, 0x40643cu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 40643c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40643d: ret  */
  esp += 4; SPILL(); return;
L_40d205: /* 40d205: push 0x43faa8 */
  { uint32_t v = 0x43faa8u; esp -= 4; W32(esp, v); }
/* 40d20a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d20b: call 0x406182 */
  esp -= 4; W32(esp, 0x40d210u); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 40d210: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d212: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d213: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d214: je 0x40640b */
  if (zf) goto L_40640b;
L_40d21a: /* 40d21a: push 0x43faa4 */
  { uint32_t v = 0x43faa4u; esp -= 4; W32(esp, v); }
/* 40d21f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d220: call 0x406182 */
  esp -= 4; W32(esp, 0x40d225u); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 40d225: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d227: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d228: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d229: jne 0x406429 */
  if (!zf) goto L_406429;
L_40d22f: /* 40d22f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 40d231: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 40d234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d235: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 40d237: jmp 0x406416 */
  goto L_406416;
}

void f_40643e(void) {
  LOAD_REGS();
  goto L_40643e;
L_4055a6: /* 4055a6: cmp edx, 0x2d */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4055a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4055aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4055ab: je 0x40d9f6 */
  if (zf) goto L_40d9f6;
L_4055b1: /* 4055b1: ret  */
  esp += 4; SPILL(); return;
L_40643e: /* 40643e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40643f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406440: call 0x40137f */
  esp -= 4; W32(esp, 0x406445u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 406445: mov edi, dword ptr [eax + 0x64] */
  edi = R32((uint32_t)(eax + 0x64u));
/* 406448: cmp edi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40644e: jne 0x40d9d3 */
  if (!zf) goto L_40d9d3;
L_406454: /* 406454: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_406458: /* 406458: cmp dword ptr [edi + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40645c: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 40645f: jg 0x40d9df */
  if ((!zf && sf == of)) goto L_40d9df;
L_406465: /* 406465: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 406468: movzx eax, byte ptr [ecx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(ecx + eax*2)));
/* 40646c: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_40646f: /* 40646f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406471: jne 0x40d9f0 */
  if (!zf) goto L_40d9f0;
L_406477: /* 406477: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 40647a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40647b: cmp ecx, 0x2d */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40647e: mov edx, ecx */
  edx = ecx;
/* 406480: je 0x4064b0 */
  if (zf) goto L_4064b0;
L_406482: /* 406482: cmp ecx, 0x2b */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406485: je 0x4064b0 */
  if (zf) goto L_4064b0;
L_406487: /* 406487: xor eax, eax */
  eax = 0;
L_406489: /* 406489: cmp ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40648c: jl 0x4064ab */
  if ((sf != of)) goto L_4064ab;
L_40648e: /* 40648e: cmp ecx, 0x39 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x39u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 406491: jg 0x4064ab */
  if ((!zf && sf == of)) goto L_4064ab;
L_406493: /* 406493: sub ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_406496: /* 406496: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406499: je 0x4055a6 */
  if (zf) goto L_4055a6;
L_40649f: /* 40649f: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 4064a2: lea eax, [ecx + eax*2] */
  eax = (uint32_t)(ecx + eax*2);
/* 4064a5: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 4064a8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4064a9: jmp 0x406489 */
  goto L_406489;
L_4064ab: /* 4064ab: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4064ae: jmp 0x406496 */
  goto L_406496;
L_4064b0: /* 4064b0: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 4064b3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4064b4: jmp 0x406487 */
  goto L_406487;
L_40d9d3: /* 40d9d3: call 0x4025f2 */
  esp -= 4; W32(esp, 0x40d9d8u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 40d9d8: mov edi, eax */
  edi = eax;
/* 40d9da: jmp 0x406454 */
  goto L_406454;
L_40d9df: /* 40d9df: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 40d9e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d9e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d9e3: call 0x415666 */
  esp -= 4; W32(esp, 0x40d9e8u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 40d9e8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40d9eb: jmp 0x40646f */
  goto L_40646f;
L_40d9f0: /* 40d9f0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40d9f1: jmp 0x406458 */
  goto L_406458;
L_40d9f6: /* 40d9f6: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 40d9f8: jmp 0x4055b1 */
  goto L_4055b1;
}

void f_4064b6(void) {
  LOAD_REGS();
L_4064b6: /* 4064b6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4064b7: mov ebp, esp */
  ebp = esp;
/* 4064b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4064ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4064bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4064bc: xor esi, esi */
  esi = 0;
/* 4064be: cmp dword ptr [0x449224], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449224u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4064c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4064c5: je 0x40d0b0 */
  if (zf) goto L_40d0b0;
L_4064cb: /* 4064cb: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 4064cd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4064cf: call 0x4016cb */
  esp -= 4; W32(esp, 0x4064d4u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 4064d4: mov ebx, eax */
  ebx = eax;
/* 4064d6: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4064d8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4064d9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4064da: je 0x406656 */
  if (zf) goto L_406656;
L_4064e0: /* 4064e0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4064e2: call 0x4010eb */
  esp -= 4; W32(esp, 0x4064e7u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4064e7: mov edi, eax */
  edi = eax;
/* 4064e9: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4064eb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4064ec: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4064ef: je 0x40d0dd */
  if (zf) goto L_40d0dd;
L_4064f5: /* 4064f5: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 4064f7: cmp dword ptr [0x449224], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449224u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4064fd: je 0x40d114 */
  if (zf) goto L_40d114;
L_406503: /* 406503: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 406505: call 0x4010eb */
  esp -= 4; W32(esp, 0x40650au); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40650a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40650c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40650d: mov dword ptr [0x44ba1c], eax */
  W32((uint32_t)(0x44ba1cu), eax);
/* 406512: je 0x40d0e9 */
  if (zf) goto L_40d0e9;
L_406518: /* 406518: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 40651a: movzx esi, word ptr [0x44b9f4] */
  esi = (uint32_t)(R16((uint32_t)(0x44b9f4u)));
/* 406521: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 406524: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406525: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* 406527: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406528: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40652a: call 0x405d09 */
  esp -= 4; W32(esp, 0x40652fu); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 40652f: mov edi, eax */
  edi = eax;
/* 406531: lea eax, [ebx + 0x10] */
  eax = (uint32_t)(ebx + 0x10u);
/* 406534: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406535: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 406537: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406538: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40653a: call 0x405d09 */
  esp -= 4; W32(esp, 0x40653fu); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 40653f: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 406541: lea eax, [ebx + 0x14] */
  eax = (uint32_t)(ebx + 0x14u);
/* 406544: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406545: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* 406547: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406548: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40654a: call 0x405d09 */
  esp -= 4; W32(esp, 0x40654fu); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 40654f: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 406551: lea eax, [ebx + 0x18] */
  eax = (uint32_t)(ebx + 0x18u);
/* 406554: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406555: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 406557: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406558: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40655a: call 0x405d09 */
  esp -= 4; W32(esp, 0x40655fu); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 40655f: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 406562: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 406564: lea eax, [ebx + 0x1c] */
  eax = (uint32_t)(ebx + 0x1cu);
/* 406567: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406568: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 40656a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40656b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40656d: call 0x405d09 */
  esp -= 4; W32(esp, 0x406572u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 406572: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 406574: lea eax, [ebx + 0x20] */
  eax = (uint32_t)(ebx + 0x20u);
/* 406577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406578: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 40657a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40657b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40657d: call 0x405d09 */
  esp -= 4; W32(esp, 0x406582u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 406582: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 406584: lea eax, [ebx + 0x24] */
  eax = (uint32_t)(ebx + 0x24u);
/* 406587: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406588: push 0x51 */
  { uint32_t v = 0x51u; esp -= 4; W32(esp, v); }
/* 40658a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40658b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40658d: call 0x405d09 */
  esp -= 4; W32(esp, 0x406592u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 406592: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 406594: lea eax, [ebx + 0x28] */
  eax = (uint32_t)(ebx + 0x28u);
/* 406597: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406598: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* 40659a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40659b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40659d: call 0x405d09 */
  esp -= 4; W32(esp, 0x4065a2u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 4065a2: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4065a5: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4065a7: lea eax, [ebx + 0x29] */
  eax = (uint32_t)(ebx + 0x29u);
/* 4065aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4065ab: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* 4065ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4065ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4065b0: call 0x405d09 */
  esp -= 4; W32(esp, 0x4065b5u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 4065b5: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4065b7: lea eax, [ebx + 0x2a] */
  eax = (uint32_t)(ebx + 0x2au);
/* 4065ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4065bb: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 4065bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4065be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4065c0: call 0x405d09 */
  esp -= 4; W32(esp, 0x4065c5u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 4065c5: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4065c7: lea eax, [ebx + 0x2b] */
  eax = (uint32_t)(ebx + 0x2bu);
/* 4065ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4065cb: push 0x55 */
  { uint32_t v = 0x55u; esp -= 4; W32(esp, v); }
/* 4065cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4065ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4065d0: call 0x405d09 */
  esp -= 4; W32(esp, 0x4065d5u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 4065d5: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4065d7: lea eax, [ebx + 0x2c] */
  eax = (uint32_t)(ebx + 0x2cu);
/* 4065da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4065db: push 0x56 */
  { uint32_t v = 0x56u; esp -= 4; W32(esp, v); }
/* 4065dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4065de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4065e0: call 0x405d09 */
  esp -= 4; W32(esp, 0x4065e5u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 4065e5: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4065e8: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4065ea: lea eax, [ebx + 0x2d] */
  eax = (uint32_t)(ebx + 0x2du);
/* 4065ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4065ee: push 0x57 */
  { uint32_t v = 0x57u; esp -= 4; W32(esp, v); }
/* 4065f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4065f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4065f3: call 0x405d09 */
  esp -= 4; W32(esp, 0x4065f8u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 4065f8: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4065fa: lea eax, [ebx + 0x2e] */
  eax = (uint32_t)(ebx + 0x2eu);
/* 4065fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4065fe: push 0x52 */
  { uint32_t v = 0x52u; esp -= 4; W32(esp, v); }
/* 406600: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406601: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 406603: call 0x405d09 */
  esp -= 4; W32(esp, 0x406608u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 406608: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 40660a: lea eax, [ebx + 0x2f] */
  eax = (uint32_t)(ebx + 0x2fu);
/* 40660d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40660e: push 0x53 */
  { uint32_t v = 0x53u; esp -= 4; W32(esp, v); }
/* 406610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 406613: call 0x405d09 */
  esp -= 4; W32(esp, 0x406618u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 406618: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40661b: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 40661d: jne 0x40d0f8 */
  if (!zf) goto L_40d0f8;
L_406623: /* 406623: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
L_406626: /* 406626: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406629: je 0x40665b */
  if (zf) goto L_40665b;
L_40662b: /* 40662b: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 40662d: cmp cl, 0x30 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 406630: jl 0x40663f */
  if ((sf != of)) goto L_40663f;
L_406632: /* 406632: cmp cl, 0x39 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 406635: jg 0x40663f */
  if ((!zf && sf == of)) goto L_40663f;
L_406637: /* 406637: sub cl, 0x30 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40663a: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
L_40663c: /* 40663c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40663d: jmp 0x406626 */
  goto L_406626;
L_40663f: /* 40663f: cmp cl, 0x3b */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406642: jne 0x40663c */
  if (!zf) goto L_40663c;
L_406644: /* 406644: mov esi, eax */
  esi = eax;
L_406646: /* 406646: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 406649: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 40664b: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 40664d: mov esi, edi */
  esi = edi;
/* 40664f: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406652: jne 0x406646 */
  if (!zf) goto L_406646;
L_406654: /* 406654: jmp 0x406626 */
  goto L_406626;
L_406656: /* 406656: xor eax, eax */
  eax = 0;
/* 406658: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 406659: jmp 0x406690 */
  goto L_406690;
L_40665b: /* 40665b: mov eax, dword ptr [0x44b39c] */
  eax = R32((uint32_t)(0x44b39cu));
/* 406660: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 406662: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 406664: mov eax, dword ptr [0x44b39c] */
  eax = R32((uint32_t)(0x44b39cu));
/* 406669: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 40666c: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 40666f: mov eax, dword ptr [0x44b39c] */
  eax = R32((uint32_t)(0x44b39cu));
/* 406674: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 406677: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 40667a: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 40667d: mov dword ptr [0x44b39c], ebx */
  W32((uint32_t)(0x44b39cu), ebx);
/* 406683: mov dword ptr [0x44ba20], eax */
  W32((uint32_t)(0x44ba20u), eax);
/* 406688: mov dword ptr [0x44b9c4], ebx */
  W32((uint32_t)(0x44b9c4u), ebx);
L_40668e: /* 40668e: xor eax, eax */
  eax = 0;
L_406690: /* 406690: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 406691: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 406692: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 406693: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 406694: ret  */
  esp += 4; SPILL(); return;
L_40d0b0: /* 40d0b0: cmp dword ptr [0x449228], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449228u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d0b6: jne 0x4064cb */
  if (!zf) goto L_4064cb;
L_40d0bc: /* 40d0bc: mov dword ptr [0x44ba1c], esi */
  W32((uint32_t)(0x44ba1cu), esi);
/* 40d0c2: mov dword ptr [0x44ba20], esi */
  W32((uint32_t)(0x44ba20u), esi);
/* 40d0c8: mov dword ptr [0x44b39c], 0x44a974 */
  W32((uint32_t)(0x44b39cu), 0x44a974u);
/* 40d0d2: mov dword ptr [0x44b9c4], esi */
  W32((uint32_t)(0x44b9c4u), esi);
/* 40d0d8: jmp 0x40668e */
  goto L_40668e;
L_40d0dd: /* 40d0dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d0de: call 0x401156 */
  esp -= 4; W32(esp, 0x40d0e3u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
L_40d0e3: /* 40d0e3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d0e4: jmp 0x406656 */
  goto L_406656;
L_40d0e9: /* 40d0e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d0ea: call 0x401156 */
  esp -= 4; W32(esp, 0x40d0efu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d0ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d0f0: call 0x401156 */
  esp -= 4; W32(esp, 0x40d0f5u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d0f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d0f6: jmp 0x40d0e3 */
  goto L_40d0e3;
L_40d0f8: /* 40d0f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d0f9: call 0x412eed */
  esp -= 4; W32(esp, 0x40d0feu); SPILL(); f_412eed(); if (g_unwind) return; RELOAD();
/* 40d0fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d0ff: call 0x401156 */
  esp -= 4; W32(esp, 0x40d104u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d104: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 40d107: call 0x401156 */
  esp -= 4; W32(esp, 0x40d10cu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d10c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40d10f: jmp 0x406656 */
  goto L_406656;
L_40d114: /* 40d114: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 40d116: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d117: mov esi, 0x44a974 */
  esi = 0x44a974u;
/* 40d11c: mov edi, ebx */
  edi = ebx;
/* 40d11e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 40d120: and dword ptr [0x44ba1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44ba1cu), r);
  }
/* 40d127: jmp 0x40665b */
  goto L_40665b;
}
