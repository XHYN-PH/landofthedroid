#include "recomp.h"
#include "rec_mod.h"

void f_487c10(void) {
  LOAD_REGS();
L_487c10: /* 487c10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 487c11: mov ebp, esp */
  ebp = esp;
/* 487c13: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 487c16: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 487c19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487c1a: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 487c1d: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 487c20: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 487c22: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487c24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487c25: je 0x487c2f */
  if (zf) goto L_487c2f;
L_487c27: /* 487c27: cmp dword ptr [ecx + 0x44], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x44u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 487c2a: jae 0x487c2f */
  if (!cf) goto L_487c2f;
L_487c2c: /* 487c2c: mov dword ptr [ecx + 0x44], edx */
  W32((uint32_t)(ecx + 0x44u), edx);
L_487c2f: /* 487c2f: mov edi, dword ptr [0x48e2bc] */
  edi = R32((uint32_t)(0x48e2bcu));
/* 487c35: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487c37: je 0x487cc4 */
  if (zf) goto L_487cc4;
L_487c3d: /* 487c3d: test byte ptr [ebp + 0x24], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x24u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487c41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 487c42: je 0x487c93 */
  if (zf) goto L_487c93;
L_487c44: /* 487c44: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 487c47: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 487c49: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487c4b: je 0x487c93 */
  if (zf) goto L_487c93;
L_487c4d: /* 487c4d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 487c4f: jl 0x487cc1 */
  if ((sf != of)) goto L_487cc1;
L_487c51: /* 487c51: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 487c54: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 487c56: mov ebx, dword ptr [ecx + 0x44] */
  ebx = R32((uint32_t)(ecx + 0x44u));
/* 487c59: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 487c5b: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 487c5d: jg 0x487cc1 */
  if ((!zf && sf == of)) goto L_487cc1;
L_487c5f: /* 487c5f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 487c61: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 487c64: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 487c66: sub dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(edx), r);
  }
/* 487c68: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 487c6b: add dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edx), r);
  }
/* 487c6d: test byte ptr [ebp + 0x24], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x24u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487c71: je 0x487cc3 */
  if (zf) goto L_487cc3;
L_487c73: /* 487c73: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 487c76: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 487c78: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487c7a: je 0x487cc3 */
  if (zf) goto L_487cc3;
L_487c7c: /* 487c7c: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 487c7f: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 487c81: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 487c84: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 487c86: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 487c88: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 487c8a: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 487c8d: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 487c8f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 487c91: jmp 0x487cc3 */
  goto L_487cc3;
L_487c93: /* 487c93: test byte ptr [ebp + 0x24], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x24u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487c97: je 0x487cc1 */
  if (zf) goto L_487cc1;
L_487c99: /* 487c99: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 487c9b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487c9d: je 0x487cc1 */
  if (zf) goto L_487cc1;
L_487c9f: /* 487c9f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 487ca1: jl 0x487cc1 */
  if ((sf != of)) goto L_487cc1;
L_487ca3: /* 487ca3: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 487ca6: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 487ca8: mov ebx, dword ptr [ecx + 0x44] */
  ebx = R32((uint32_t)(ecx + 0x44u));
/* 487cab: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 487cad: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 487caf: jg 0x487cc1 */
  if ((!zf && sf == of)) goto L_487cc1;
L_487cb1: /* 487cb1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 487cb3: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 487cb6: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 487cb8: sub dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(edx), r);
  }
/* 487cba: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 487cbd: add dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
/* 487cbf: jmp 0x487cc3 */
  goto L_487cc3;
L_487cc1: /* 487cc1: mov esi, edi */
  esi = edi;
L_487cc3: /* 487cc3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_487cc4: /* 487cc4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 487cc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487cc8: call 0x469803 */
  esp -= 4; W32(esp, 0x487ccdu); SPILL(); f_469803(); if (g_unwind) return; RELOAD();
/* 487ccd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 487cd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 487cd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487cd2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 487cd3: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_487cd6(void) {
  LOAD_REGS();
L_487cd6: /* 487cd6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 487cd7: mov ebp, esp */
  ebp = esp;
/* 487cd9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487cda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487cdb: mov esi, ecx */
  esi = ecx;
/* 487cdd: call 0x461f3f */
  esp -= 4; W32(esp, 0x487ce2u); SPILL(); f_461f3f(); if (g_unwind) return; RELOAD();
/* 487ce2: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 487ce5: and dword ptr [esi + 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x40u), r);
  }
/* 487ce9: and dword ptr [esi + 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x44u), r);
  }
/* 487ced: and dword ptr [esi + 0x4c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x4cu), r);
  }
/* 487cf1: and dword ptr [esi + 0x50], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x50u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x50u), r);
  }
/* 487cf5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487cf7: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 487cfa: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 487cfc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 487cfd: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 487d00: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 487d03: jne 0x487d17 */
  if (!zf) goto L_487d17;
L_487d05: /* 487d05: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 487d08: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 487d0b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 487d0e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 487d10: jle 0x487d7e */
  if ((zf || sf != of)) goto L_487d7e;
L_487d12: /* 487d12: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 487d15: jmp 0x487d7e */
  goto L_487d7e;
L_487d17: /* 487d17: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 487d1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 487d1c: jge 0x487d25 */
  if ((sf == of)) goto L_487d25;
L_487d1e: /* 487d1e: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 487d23: jmp 0x487d2e */
  goto L_487d2e;
L_487d25: /* 487d25: jne 0x487d2e */
  if (!zf) goto L_487d2e;
L_487d27: /* 487d27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487d28: call 0x461028 */
  esp -= 4; W32(esp, 0x487d2du); SPILL(); hle_strlen(); RELOAD();
/* 487d2d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_487d2e: /* 487d2e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 487d31: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487d33: lea edx, [edi + eax] */
  edx = (uint32_t)(edi + eax);
/* 487d36: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 487d39: jne 0x487d4c */
  if (!zf) goto L_487d4c;
L_487d3b: /* 487d3b: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 487d3e: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 487d40: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 487d43: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 487d45: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 487d48: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 487d4a: jmp 0x487d7e */
  goto L_487d7e;
L_487d4c: /* 487d4c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 487d4e: jae 0x487d54 */
  if (!cf) goto L_487d54;
L_487d50: /* 487d50: mov ecx, edi */
  ecx = edi;
/* 487d52: jmp 0x487d5a */
  goto L_487d5a;
L_487d54: /* 487d54: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 487d56: jae 0x487d5a */
  if (!cf) goto L_487d5a;
L_487d58: /* 487d58: mov ecx, edx */
  ecx = edx;
L_487d5a: /* 487d5a: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 487d5d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 487d5f: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 487d62: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 487d64: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 487d67: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 487d69: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 487d6b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 487d6d: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 487d70: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 487d72: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 487d75: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 487d77: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 487d7a: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 487d7c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_487d7e: /* 487d7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 487d7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487d80: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 487d81: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_487d84(void) {
  LOAD_REGS();
L_487d84: /* 487d84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487d85: mov esi, ecx */
  esi = ecx;
/* 487d87: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 487d8a: and al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 487d8c: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 487d8e: jne 0x487dab */
  if (!zf) goto L_487dab;
L_487d90: /* 487d90: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 487d93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487d95: je 0x487da0 */
  if (zf) goto L_487da0;
L_487d97: /* 487d97: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 487d9a: push dword ptr [ecx] */
  { uint32_t v = R32((uint32_t)(ecx)); esp -= 4; W32(esp, v); }
/* 487d9c: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x487d9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 487d9e: jmp 0x487daa */
  goto L_487daa;
L_487da0: /* 487da0: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 487da3: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 487da5: call 0x48bdcd */
  esp -= 4; W32(esp, 0x487daau); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
L_487daa: /* 487daa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_487dab: /* 487dab: and dword ptr [esi + 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x44u), r);
  }
/* 487daf: and dword ptr [esi + 0x48], 0xfffffff6 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(0xfffffff6u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x48u), r);
  }
/* 487db3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487db4: ret  */
  esp += 4; SPILL(); return;
}

void f_487db5(void) {
  LOAD_REGS();
L_487db5: /* 487db5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487db6: mov esi, ecx */
  esi = ecx;
/* 487db8: call 0x461eec */
  esp -= 4; W32(esp, 0x487dbdu); SPILL(); f_461eec(); if (g_unwind) return; RELOAD();
/* 487dbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 487dbf: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 487dc3: mov ecx, esi */
  ecx = esi;
/* 487dc5: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 487dc9: mov dword ptr [esi], 0x4c8f94 */
  W32((uint32_t)(esi), 0x4c8f94u);
/* 487dcf: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 487dd3: call 0x487cd6 */
  esp -= 4; W32(esp, 0x487dd8u); SPILL(); f_487cd6(); if (g_unwind) return; RELOAD();
/* 487dd8: mov eax, esi */
  eax = esi;
/* 487dda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487ddb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_487dde(void) {
  LOAD_REGS();
L_487dde: /* 487dde: mov eax, 0x48dc21 */
  eax = 0x48dc21u;
/* 487de3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x487de8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 487de8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 487de9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487dea: mov esi, ecx */
  esi = ecx;
/* 487dec: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 487def: mov dword ptr [esi], 0x4c8f94 */
  W32((uint32_t)(esi), 0x4c8f94u);
/* 487df5: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 487df9: call 0x487d84 */
  esp -= 4; W32(esp, 0x487dfeu); SPILL(); f_487d84(); if (g_unwind) return; RELOAD();
/* 487dfe: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 487e02: mov ecx, esi */
  ecx = esi;
/* 487e04: call 0x462325 */
  esp -= 4; W32(esp, 0x487e09u); SPILL(); f_462325(); if (g_unwind) return; RELOAD();
/* 487e09: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 487e0c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487e0d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 487e14: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 487e15: ret  */
  esp += 4; SPILL(); return;
}

void f_487e16(void) {
  LOAD_REGS();
L_487e16: /* 487e16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 487e17: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 487e1b: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487e1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487e1f: mov esi, ecx */
  esi = ecx;
/* 487e21: je 0x487e47 */
  if (zf) goto L_487e47;
L_487e23: /* 487e23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487e24: push 0x487dde */
  { uint32_t v = 0x487ddeu; esp -= 4; W32(esp, v); }
/* 487e29: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 487e2c: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 487e2e: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 487e30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487e31: call 0x48be30 */
  esp -= 4; W32(esp, 0x487e36u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 487e36: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487e39: je 0x487e42 */
  if (zf) goto L_487e42;
L_487e3b: /* 487e3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487e3c: call 0x48bdcd */
  esp -= 4; W32(esp, 0x487e41u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 487e41: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_487e42: /* 487e42: mov eax, edi */
  eax = edi;
/* 487e44: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 487e45: jmp 0x487e5c */
  goto L_487e5c;
L_487e47: /* 487e47: mov ecx, esi */
  ecx = esi;
/* 487e49: call 0x487dde */
  esp -= 4; W32(esp, 0x487e4eu); SPILL(); f_487dde(); if (g_unwind) return; RELOAD();
/* 487e4e: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487e51: je 0x487e5a */
  if (zf) goto L_487e5a;
L_487e53: /* 487e53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487e54: call 0x461c65 */
  esp -= 4; W32(esp, 0x487e59u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 487e59: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_487e5a: /* 487e5a: mov eax, esi */
  eax = esi;
L_487e5c: /* 487e5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487e5d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 487e5e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_487e61(void) {
  LOAD_REGS();
L_487e61: /* 487e61: mov eax, 0x48dc36 */
  eax = 0x48dc36u;
/* 487e66: call 0x4616c0 */
  esp -= 4; W32(esp, 0x487e6bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 487e6b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 487e6c: mov eax, dword ptr [ecx - 0x5c] */
  eax = R32((uint32_t)(ecx + 0xffffffa4u));
/* 487e6f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 487e72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487e73: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 487e76: mov dword ptr [eax + ecx - 0x5c], 0x4c8fcc */
  W32((uint32_t)(eax + ecx + 0xffffffa4u), 0x4c8fccu);
/* 487e7e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 487e82: lea esi, [ecx - 0x54] */
  esi = (uint32_t)(ecx + 0xffffffacu);
/* 487e85: mov ecx, esi */
  ecx = esi;
/* 487e87: call 0x487dde */
  esp -= 4; W32(esp, 0x487e8cu); SPILL(); f_487dde(); if (g_unwind) return; RELOAD();
/* 487e8c: mov eax, dword ptr [esi - 8] */
  eax = R32((uint32_t)(esi + 0xfffffff8u));
/* 487e8f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 487e92: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 487e95: mov dword ptr [eax + esi - 8], 0x4c702c */
  W32((uint32_t)(eax + esi + 0xfffffff8u), 0x4c702cu);
/* 487e9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487e9e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 487ea5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 487ea6: ret  */
  esp += 4; SPILL(); return;
}

void f_487ea7(void) {
  LOAD_REGS();
L_487ea7: /* 487ea7: mov eax, 0x48dc61 */
  eax = 0x48dc61u;
/* 487eac: call 0x4616c0 */
  esp -= 4; W32(esp, 0x487eb1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 487eb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 487eb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 487eb3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 487eb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487eb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487eb6: xor edi, edi */
  edi = 0;
/* 487eb8: xor ebx, ebx */
  ebx = 0;
/* 487eba: mov esi, ecx */
  esi = ecx;
/* 487ebc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 487ebd: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487ec0: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 487ec3: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
/* 487ec6: je 0x487ede */
  if (zf) goto L_487ede;
L_487ec8: /* 487ec8: mov dword ptr [esi], 0x4c8fe0 */
  W32((uint32_t)(esi), 0x4c8fe0u);
/* 487ece: mov dword ptr [esi + 0x7c], ebx */
  W32((uint32_t)(esi + 0x7cu), ebx);
/* 487ed1: mov dword ptr [esi + 0x58], 0x4c6d18 */
  W32((uint32_t)(esi + 0x58u), 0x4c6d18u);
/* 487ed8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 487edb: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_487ede: /* 487ede: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 487edf: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 487ee2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 487ee3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487ee4: mov ecx, esi */
  ecx = esi;
/* 487ee6: call 0x46236d */
  esp -= 4; W32(esp, 0x487eebu); SPILL(); f_46236d(); if (g_unwind) return; RELOAD();
/* 487eeb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 487eed: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 487ef0: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 487ef3: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 487ef6: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487ef8: mov dword ptr [esi + eax], 0x4c8fd4 */
  W32((uint32_t)(esi + eax), 0x4c8fd4u);
/* 487eff: je 0x487f12 */
  if (zf) goto L_487f12;
L_487f01: /* 487f01: test byte ptr [ebp + 0x10], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487f05: je 0x487f12 */
  if (zf) goto L_487f12;
L_487f07: /* 487f07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487f08: call 0x461028 */
  esp -= 4; W32(esp, 0x487f0du); SPILL(); hle_strlen(); RELOAD();
/* 487f0d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 487f0e: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 487f10: jmp 0x487f14 */
  goto L_487f14;
L_487f12: /* 487f12: mov eax, edi */
  eax = edi;
L_487f14: /* 487f14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487f15: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 487f18: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 487f1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487f1c: call 0x487db5 */
  esp -= 4; W32(esp, 0x487f21u); SPILL(); f_487db5(); if (g_unwind) return; RELOAD();
/* 487f21: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 487f24: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 487f25: mov eax, esi */
  eax = esi;
/* 487f27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487f28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 487f29: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 487f30: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 487f31: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_487f34(void) {
  LOAD_REGS();
L_487f34: /* 487f34: mov eax, 0x48dc76 */
  eax = 0x48dc76u;
/* 487f39: call 0x4616c0 */
  esp -= 4; W32(esp, 0x487f3eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 487f3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 487f3f: mov eax, dword ptr [ecx - 0x58] */
  eax = R32((uint32_t)(ecx + 0xffffffa8u));
/* 487f42: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 487f45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487f46: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 487f49: mov dword ptr [eax + ecx - 0x58], 0x4c8fd4 */
  W32((uint32_t)(eax + ecx + 0xffffffa8u), 0x4c8fd4u);
/* 487f51: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 487f55: lea esi, [ecx - 0x54] */
  esi = (uint32_t)(ecx + 0xffffffacu);
/* 487f58: mov ecx, esi */
  ecx = esi;
/* 487f5a: call 0x487dde */
  esp -= 4; W32(esp, 0x487f5fu); SPILL(); f_487dde(); if (g_unwind) return; RELOAD();
/* 487f5f: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 487f62: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 487f65: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 487f68: mov dword ptr [eax + esi - 4], 0x4c6cc0 */
  W32((uint32_t)(eax + esi + 0xfffffffcu), 0x4c6cc0u);
/* 487f70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 487f71: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 487f78: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 487f79: ret  */
  esp += 4; SPILL(); return;
}

void f_487f7a(void) {
  LOAD_REGS();
L_487f7a: /* 487f7a: mov eax, 0x48dca1 */
  eax = 0x48dca1u;
/* 487f7f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x487f84u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 487f84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 487f85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 487f86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 487f87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 487f88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487f89: mov esi, ecx */
  esi = ecx;
/* 487f8b: xor edi, edi */
  edi = 0;
/* 487f8d: xor ecx, ecx */
  ecx = 0;
/* 487f8f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 487f90: cmp dword ptr [ebp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 487f93: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 487f96: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 487f99: je 0x487fba */
  if (zf) goto L_487fba;
L_487f9b: /* 487f9b: lea eax, [esi + 0x60] */
  eax = (uint32_t)(esi + 0x60u);
/* 487f9e: mov dword ptr [esi], 0x4c8fe8 */
  W32((uint32_t)(esi), 0x4c8fe8u);
/* 487fa4: mov dword ptr [esi + 8], 0x4c8fe0 */
  W32((uint32_t)(esi + 0x8u), 0x4c8fe0u);
/* 487fab: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 487fae: mov dword ptr [eax], 0x4c6d18 */
  W32((uint32_t)(eax), 0x4c6d18u);
/* 487fb4: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 487fb7: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_487fba: /* 487fba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 487fbb: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
/* 487fbe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 487fbf: mov ecx, esi */
  ecx = esi;
/* 487fc1: call 0x46b701 */
  esp -= 4; W32(esp, 0x487fc6u); SPILL(); f_46b701(); if (g_unwind) return; RELOAD();
/* 487fc6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 487fc8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 487fcb: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 487fce: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 487fd1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 487fd3: mov dword ptr [esi + eax], 0x4c8fdc */
  W32((uint32_t)(esi + eax), 0x4c8fdcu);
/* 487fda: je 0x487fed */
  if (zf) goto L_487fed;
L_487fdc: /* 487fdc: test byte ptr [ebp + 0x10], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 487fe0: je 0x487fed */
  if (zf) goto L_487fed;
L_487fe2: /* 487fe2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487fe3: call 0x461028 */
  esp -= 4; W32(esp, 0x487fe8u); SPILL(); hle_strlen(); RELOAD();
/* 487fe8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 487fe9: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 487feb: jmp 0x487fef */
  goto L_487fef;
L_487fed: /* 487fed: mov eax, edi */
  eax = edi;
L_487fef: /* 487fef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 487ff0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 487ff3: mov ecx, ebx */
  ecx = ebx;
/* 487ff5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 487ff6: call 0x487db5 */
  esp -= 4; W32(esp, 0x487ffbu); SPILL(); f_487db5(); if (g_unwind) return; RELOAD();
/* 487ffb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 487ffe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 487fff: mov eax, esi */
  eax = esi;
/* 488001: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488002: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 488003: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48800a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48800b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_48800e(void) {
  LOAD_REGS();
L_48800e: /* 48800e: mov eax, 0x48dcb6 */
  eax = 0x48dcb6u;
/* 488013: call 0x4616c0 */
  esp -= 4; W32(esp, 0x488018u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 488018: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 488019: mov eax, dword ptr [ecx - 0x60] */
  eax = R32((uint32_t)(ecx + 0xffffffa0u));
/* 48801c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 48801f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488020: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 488023: mov dword ptr [eax + ecx - 0x60], 0x4c8fdc */
  W32((uint32_t)(eax + ecx + 0xffffffa0u), 0x4c8fdcu);
/* 48802b: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48802f: lea esi, [ecx - 0x54] */
  esi = (uint32_t)(ecx + 0xffffffacu);
/* 488032: mov ecx, esi */
  ecx = esi;
/* 488034: call 0x487dde */
  esp -= 4; W32(esp, 0x488039u); SPILL(); f_487dde(); if (g_unwind) return; RELOAD();
/* 488039: mov ecx, esi */
  ecx = esi;
/* 48803b: call 0x4690e5 */
  esp -= 4; W32(esp, 0x488040u); SPILL(); f_4690e5(); if (g_unwind) return; RELOAD();
/* 488040: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 488043: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488044: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48804b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48804c: ret  */
  esp += 4; SPILL(); return;
}

void f_48804d(void) {
  LOAD_REGS();
L_48804d: /* 48804d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48804e: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 488052: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 488055: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488056: je 0x48807d */
  if (zf) goto L_48807d;
L_488058: /* 488058: push 0x4880a6 */
  { uint32_t v = 0x4880a6u; esp -= 4; W32(esp, v); }
/* 48805d: lea esi, [ecx - 0x60] */
  esi = (uint32_t)(ecx + 0xffffffa0u);
/* 488060: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 488062: add ecx, -0x5c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffa4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 488065: push 0x90 */
  { uint32_t v = 0x90u; esp -= 4; W32(esp, v); }
/* 48806a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48806b: call 0x48be30 */
  esp -= 4; W32(esp, 0x488070u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 488070: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 488073: je 0x48809f */
  if (zf) goto L_48809f;
L_488075: /* 488075: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488076: call 0x48bdcd */
  esp -= 4; W32(esp, 0x48807bu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 48807b: jmp 0x48809e */
  goto L_48809e;
L_48807d: /* 48807d: lea esi, [ecx - 0x5c] */
  esi = (uint32_t)(ecx + 0xffffffa4u);
/* 488080: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488081: lea edi, [esi + 0x5c] */
  edi = (uint32_t)(esi + 0x5cu);
/* 488084: mov ecx, edi */
  ecx = edi;
/* 488086: call 0x487e61 */
  esp -= 4; W32(esp, 0x48808bu); SPILL(); f_487e61(); if (g_unwind) return; RELOAD();
/* 48808b: mov ecx, edi */
  ecx = edi;
/* 48808d: call 0x462e5d */
  esp -= 4; W32(esp, 0x488092u); SPILL(); f_462e5d(); if (g_unwind) return; RELOAD();
/* 488092: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 488095: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 488096: je 0x48809f */
  if (zf) goto L_48809f;
L_488098: /* 488098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488099: call 0x461c65 */
  esp -= 4; W32(esp, 0x48809eu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_48809e: /* 48809e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_48809f: /* 48809f: mov eax, esi */
  eax = esi;
/* 4880a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4880a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4880a3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4880a6(void) {
  LOAD_REGS();
L_4880a6: /* 4880a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4880a7: lea esi, [ecx + 0x5c] */
  esi = (uint32_t)(ecx + 0x5cu);
/* 4880aa: mov ecx, esi */
  ecx = esi;
/* 4880ac: call 0x487e61 */
  esp -= 4; W32(esp, 0x4880b1u); SPILL(); f_487e61(); if (g_unwind) return; RELOAD();
/* 4880b1: mov ecx, esi */
  ecx = esi;
/* 4880b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4880b4: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_4880b9(void) {
  LOAD_REGS();
L_4880b9: /* 4880b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4880ba: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4880be: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4880c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4880c2: je 0x4880e9 */
  if (zf) goto L_4880e9;
L_4880c4: /* 4880c4: push 0x488112 */
  { uint32_t v = 0x488112u; esp -= 4; W32(esp, v); }
/* 4880c9: lea esi, [ecx - 0x5c] */
  esi = (uint32_t)(ecx + 0xffffffa4u);
/* 4880cc: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4880ce: add ecx, -0x58 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4880d1: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 4880d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4880d7: call 0x48be30 */
  esp -= 4; W32(esp, 0x4880dcu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 4880dc: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4880df: je 0x48810b */
  if (zf) goto L_48810b;
L_4880e1: /* 4880e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4880e2: call 0x48bdcd */
  esp -= 4; W32(esp, 0x4880e7u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 4880e7: jmp 0x48810a */
  goto L_48810a;
L_4880e9: /* 4880e9: lea esi, [ecx - 0x58] */
  esi = (uint32_t)(ecx + 0xffffffa8u);
/* 4880ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4880ed: lea edi, [esi + 0x58] */
  edi = (uint32_t)(esi + 0x58u);
/* 4880f0: mov ecx, edi */
  ecx = edi;
/* 4880f2: call 0x487f34 */
  esp -= 4; W32(esp, 0x4880f7u); SPILL(); f_487f34(); if (g_unwind) return; RELOAD();
/* 4880f7: mov ecx, edi */
  ecx = edi;
/* 4880f9: call 0x462e5d */
  esp -= 4; W32(esp, 0x4880feu); SPILL(); f_462e5d(); if (g_unwind) return; RELOAD();
/* 4880fe: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 488101: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 488102: je 0x48810b */
  if (zf) goto L_48810b;
L_488104: /* 488104: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488105: call 0x461c65 */
  esp -= 4; W32(esp, 0x48810au); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_48810a: /* 48810a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_48810b: /* 48810b: mov eax, esi */
  eax = esi;
/* 48810d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48810e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48810f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_488112(void) {
  LOAD_REGS();
L_488112: /* 488112: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488113: lea esi, [ecx + 0x58] */
  esi = (uint32_t)(ecx + 0x58u);
/* 488116: mov ecx, esi */
  ecx = esi;
/* 488118: call 0x487f34 */
  esp -= 4; W32(esp, 0x48811du); SPILL(); f_487f34(); if (g_unwind) return; RELOAD();
/* 48811d: mov ecx, esi */
  ecx = esi;
/* 48811f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488120: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_488125(void) {
  LOAD_REGS();
L_488125: /* 488125: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 488126: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 48812a: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48812d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48812e: je 0x488155 */
  if (zf) goto L_488155;
L_488130: /* 488130: push 0x48817e */
  { uint32_t v = 0x48817eu; esp -= 4; W32(esp, v); }
/* 488135: lea esi, [ecx - 0x64] */
  esi = (uint32_t)(ecx + 0xffffff9cu);
/* 488138: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 48813a: add ecx, -0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffa0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48813d: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 488142: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 488143: call 0x48be30 */
  esp -= 4; W32(esp, 0x488148u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 488148: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48814b: je 0x488177 */
  if (zf) goto L_488177;
L_48814d: /* 48814d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48814e: call 0x48bdcd */
  esp -= 4; W32(esp, 0x488153u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 488153: jmp 0x488176 */
  goto L_488176;
L_488155: /* 488155: lea esi, [ecx - 0x60] */
  esi = (uint32_t)(ecx + 0xffffffa0u);
/* 488158: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488159: lea edi, [esi + 0x60] */
  edi = (uint32_t)(esi + 0x60u);
/* 48815c: mov ecx, edi */
  ecx = edi;
/* 48815e: call 0x48800e */
  esp -= 4; W32(esp, 0x488163u); SPILL(); f_48800e(); if (g_unwind) return; RELOAD();
/* 488163: mov ecx, edi */
  ecx = edi;
/* 488165: call 0x462e5d */
  esp -= 4; W32(esp, 0x48816au); SPILL(); f_462e5d(); if (g_unwind) return; RELOAD();
/* 48816a: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48816d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48816e: je 0x488177 */
  if (zf) goto L_488177;
L_488170: /* 488170: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488171: call 0x461c65 */
  esp -= 4; W32(esp, 0x488176u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_488176: /* 488176: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_488177: /* 488177: mov eax, esi */
  eax = esi;
/* 488179: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48817a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48817b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_48817e(void) {
  LOAD_REGS();
L_48817e: /* 48817e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48817f: lea esi, [ecx + 0x60] */
  esi = (uint32_t)(ecx + 0x60u);
/* 488182: mov ecx, esi */
  ecx = esi;
/* 488184: call 0x48800e */
  esp -= 4; W32(esp, 0x488189u); SPILL(); f_48800e(); if (g_unwind) return; RELOAD();
/* 488189: mov ecx, esi */
  ecx = esi;
/* 48818b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48818c: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_488191(void) {
  LOAD_REGS();
L_488191: /* 488191: cmp dword ptr [0x4d05a8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d05a8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 488198: mov eax, ecx */
  eax = ecx;
/* 48819a: jl 0x4881a3 */
  if ((sf != of)) goto L_4881a3;
L_48819c: /* 48819c: inc dword ptr [0x4d05a8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d05a8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x4d05a8u), r);
  }
/* 4881a2: ret  */
  esp += 4; SPILL(); return;
L_4881a3: /* 4881a3: mov dword ptr [0x4d05a8], 1 */
  W32((uint32_t)(0x4d05a8u), 0x1u);
/* 4881ad: ret  */
  esp += 4; SPILL(); return;
}

void f_4881ae(void) {
  LOAD_REGS();
L_4881ae: /* 4881ae: dec dword ptr [0x4d05a8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d05a8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(0x4d05a8u), r);
  }
/* 4881b4: jne 0x4881e2 */
  if (!zf) goto L_4881e2;
L_4881b6: /* 4881b6: mov ecx, dword ptr [0x4d0ba8] */
  ecx = R32((uint32_t)(0x4d0ba8u));
/* 4881bc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4881be: je 0x4881c5 */
  if (zf) goto L_4881c5;
L_4881c0: /* 4881c0: call 0x461419 */
  esp -= 4; W32(esp, 0x4881c5u); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
L_4881c5: /* 4881c5: mov ecx, dword ptr [0x4d0bac] */
  ecx = R32((uint32_t)(0x4d0bacu));
/* 4881cb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4881cd: je 0x4881d4 */
  if (zf) goto L_4881d4;
L_4881cf: /* 4881cf: call 0x461419 */
  esp -= 4; W32(esp, 0x4881d4u); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
L_4881d4: /* 4881d4: mov ecx, dword ptr [0x4d0bb0] */
  ecx = R32((uint32_t)(0x4d0bb0u));
/* 4881da: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4881dc: jne 0x461419 */
  if (!zf) { SPILL(); f_461419(); return; }
L_4881e2: /* 4881e2: ret  */
  esp += 4; SPILL(); return;
}

void f_4881e3(void) {
  LOAD_REGS();
L_4881e3: /* 4881e3: cmp word ptr [esp + 8], 1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x8u))); uint16_t b = (uint16_t)(0x1u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4881e9: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 4881ed: jne 0x4881f7 */
  if (!zf) goto L_4881f7;
L_4881ef: /* 4881ef: call dword ptr [0x48e0fc] */
  esp -= 4; W32(esp, 0x4881f5u); SPILL(); f_4179fa(); if (g_unwind) return; /* MSVCR70!towupper */ RELOAD();
/* 4881f5: jmp 0x4881fd */
  goto L_4881fd;
L_4881f7: /* 4881f7: call dword ptr [0x48e0f8] */
  esp -= 4; W32(esp, 0x4881fdu); SPILL(); f_4026f7(); if (g_unwind) return; /* MSVCR70!towlower */ RELOAD();
L_4881fd: /* 4881fd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4881fe: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 488201: ret  */
  esp += 4; SPILL(); return;
}

void f_488202(void) {
  LOAD_REGS();
L_488202: /* 488202: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488203: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488204: xor edi, edi */
  edi = 0;
/* 488206: cmp dword ptr [0x4c8ff0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4c8ff0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48820c: je 0x488231 */
  if (zf) goto L_488231;
L_48820e: /* 48820e: mov esi, 0x4c8ff0 */
  esi = 0x4c8ff0u;
/* 488213: mov eax, esi */
  eax = esi;
L_488215: /* 488215: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 488219: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 48821b: call 0x48bf26 */
  esp -= 4; W32(esp, 0x488220u); SPILL(); f_48bf26(); if (g_unwind) return; RELOAD();
/* 488220: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488222: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488223: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488224: je 0x488237 */
  if (zf) goto L_488237;
L_488226: /* 488226: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 488229: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 48822a: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48822d: mov eax, esi */
  eax = esi;
/* 48822f: jne 0x488215 */
  if (!zf) goto L_488215;
L_488231: /* 488231: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
L_488234: /* 488234: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 488235: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488236: ret  */
  esp += 4; SPILL(); return;
L_488237: /* 488237: mov ax, word ptr [edi*8 + 0x4c8ff4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi*8 + 0x4c8ff4u))) & 0xffffu);
/* 48823f: jmp 0x488234 */
  goto L_488234;
}

void f_488241(void) {
  LOAD_REGS();
L_488241: /* 488241: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488242: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488243: xor edi, edi */
  edi = 0;
/* 488245: cmp dword ptr [0x4c9018], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4c9018u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48824b: je 0x488270 */
  if (zf) goto L_488270;
L_48824d: /* 48824d: mov esi, 0x4c9018 */
  esi = 0x4c9018u;
/* 488252: mov eax, esi */
  eax = esi;
L_488254: /* 488254: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 488258: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 48825a: call 0x48bf26 */
  esp -= 4; W32(esp, 0x48825fu); SPILL(); f_48bf26(); if (g_unwind) return; RELOAD();
/* 48825f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488261: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488262: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488263: je 0x488276 */
  if (zf) goto L_488276;
L_488265: /* 488265: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 488268: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 488269: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48826c: mov eax, esi */
  eax = esi;
/* 48826e: jne 0x488254 */
  if (!zf) goto L_488254;
L_488270: /* 488270: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
L_488273: /* 488273: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 488274: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488275: ret  */
  esp += 4; SPILL(); return;
L_488276: /* 488276: mov ax, word ptr [edi*8 + 0x4c901c] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi*8 + 0x4c901cu))) & 0xffffu);
/* 48827e: jmp 0x488273 */
  goto L_488273;
}

void f_488280(void) {
  LOAD_REGS();
L_488280: /* 488280: cmp dword ptr [0x4d05ac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d05acu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 488287: mov eax, ecx */
  eax = ecx;
/* 488289: jl 0x488292 */
  if ((sf != of)) goto L_488292;
L_48828b: /* 48828b: inc dword ptr [0x4d05ac] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d05acu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x4d05acu), r);
  }
/* 488291: ret  */
  esp += 4; SPILL(); return;
L_488292: /* 488292: mov dword ptr [0x4d05ac], 1 */
  W32((uint32_t)(0x4d05acu), 0x1u);
/* 48829c: ret  */
  esp += 4; SPILL(); return;
}

void f_48829d(void) {
  LOAD_REGS();
L_48829d: /* 48829d: dec dword ptr [0x4d05ac] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d05acu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(0x4d05acu), r);
  }
/* 4882a3: jne 0x4882d1 */
  if (!zf) goto L_4882d1;
L_4882a5: /* 4882a5: mov ecx, dword ptr [0x4d08ec] */
  ecx = R32((uint32_t)(0x4d08ecu));
/* 4882ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4882ad: je 0x4882b4 */
  if (zf) goto L_4882b4;
L_4882af: /* 4882af: call 0x461419 */
  esp -= 4; W32(esp, 0x4882b4u); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
L_4882b4: /* 4882b4: mov ecx, dword ptr [0x4d08f0] */
  ecx = R32((uint32_t)(0x4d08f0u));
/* 4882ba: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4882bc: je 0x4882c3 */
  if (zf) goto L_4882c3;
L_4882be: /* 4882be: call 0x461419 */
  esp -= 4; W32(esp, 0x4882c3u); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
L_4882c3: /* 4882c3: mov ecx, dword ptr [0x4d08f4] */
  ecx = R32((uint32_t)(0x4d08f4u));
/* 4882c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4882cb: jne 0x461419 */
  if (!zf) { SPILL(); f_461419(); return; }
L_4882d1: /* 4882d1: ret  */
  esp += 4; SPILL(); return;
}

void f_4882d2(void) {
  LOAD_REGS();
L_4882d2: /* 4882d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4882d3: mov ebp, esp */
  ebp = esp;
/* 4882d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4882d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4882d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4882d8: mov esi, dword ptr [0x48e11c] */
  esi = R32((uint32_t)(0x48e11cu));
/* 4882de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4882df: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x4882e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4882e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4882e2: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x4882e8u); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 4882e8: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x4882eeu); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 4882ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4882f0: mov edi, dword ptr [0x48e034] */
  edi = R32((uint32_t)(0x48e034u));
/* 4882f6: je 0x48830e */
  if (zf) goto L_48830e;
L_4882f8: /* 4882f8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x4882fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4882fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4882fb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x4882fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4882fd: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4882ff: call 0x48bf32 */
  esp -= 4; W32(esp, 0x488304u); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 488304: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488305: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 48830c: jmp 0x488312 */
  goto L_488312;
L_48830e: /* 48830e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_488312: /* 488312: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 488315: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488317: jne 0x48831e */
  if (!zf) goto L_48831e;
L_488319: /* 488319: mov ebx, 0x4d1100 */
  ebx = 0x4d1100u;
L_48831e: /* 48831e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 488321: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 488324: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 488326: xor eax, eax */
  eax = 0;
/* 488328: call 0x461e0a */
  esp -= 4; W32(esp, 0x48832du); SPILL(); f_461e0a(); if (g_unwind) return; RELOAD();
/* 48832d: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488331: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488332: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488333: mov ebx, eax */
  ebx = eax;
/* 488335: je 0x488341 */
  if (zf) goto L_488341;
L_488337: /* 488337: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488339: call 0x48bf2c */
  esp -= 4; W32(esp, 0x48833eu); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 48833e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48833f: jmp 0x488346 */
  goto L_488346;
L_488341: /* 488341: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488343u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488343: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488344: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x488346u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_488346: /* 488346: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 488347: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488348: mov eax, ebx */
  eax = ebx;
/* 48834a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48834b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48834c: ret  */
  esp += 4; SPILL(); return;
}

void f_48834d(void) {
  LOAD_REGS();
L_48834d: /* 48834d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48834e: mov ebp, esp */
  ebp = esp;
/* 488350: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 488351: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 488352: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488353: mov esi, dword ptr [0x48e11c] */
  esi = R32((uint32_t)(0x48e11cu));
/* 488359: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48835a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x48835cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48835c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48835d: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x488363u); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 488363: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x488369u); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 488369: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48836b: mov edi, dword ptr [0x48e034] */
  edi = R32((uint32_t)(0x48e034u));
/* 488371: je 0x488389 */
  if (zf) goto L_488389;
L_488373: /* 488373: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488375u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488375: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488376: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x488378u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488378: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48837a: call 0x48bf32 */
  esp -= 4; W32(esp, 0x48837fu); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 48837f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488380: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 488387: jmp 0x48838d */
  goto L_48838d;
L_488389: /* 488389: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_48838d: /* 48838d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 488390: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488392: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 488395: je 0x4883a8 */
  if (zf) goto L_4883a8;
L_488397: /* 488397: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488399: jne 0x4883a0 */
  if (!zf) goto L_4883a0;
L_48839b: /* 48839b: mov ebx, 0x4d1104 */
  ebx = 0x4d1104u;
L_4883a0: /* 4883a0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4883a3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4883a6: jmp 0x4883bb */
  goto L_4883bb;
L_4883a8: /* 4883a8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4883aa: jne 0x4883b1 */
  if (!zf) goto L_4883b1;
L_4883ac: /* 4883ac: mov ebx, 0x4d1104 */
  ebx = 0x4d1104u;
L_4883b1: /* 4883b1: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4883b4: mov ecx, 0x4c6847 */
  ecx = 0x4c6847u;
/* 4883b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_4883bb: /* 4883bb: xor eax, eax */
  eax = 0;
/* 4883bd: call 0x461e0a */
  esp -= 4; W32(esp, 0x4883c2u); SPILL(); f_461e0a(); if (g_unwind) return; RELOAD();
/* 4883c2: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4883c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4883c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4883c8: mov ebx, eax */
  ebx = eax;
/* 4883ca: je 0x4883d6 */
  if (zf) goto L_4883d6;
L_4883cc: /* 4883cc: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4883ce: call 0x48bf2c */
  esp -= 4; W32(esp, 0x4883d3u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 4883d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4883d4: jmp 0x4883db */
  goto L_4883db;
L_4883d6: /* 4883d6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x4883d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4883d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4883d9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x4883dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4883db: /* 4883db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4883dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4883dd: mov eax, ebx */
  eax = ebx;
/* 4883df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4883e0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4883e1: ret  */
  esp += 4; SPILL(); return;
}

void f_4883e2(void) {
  LOAD_REGS();
L_4883e2: /* 4883e2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4883e3: mov ebp, esp */
  ebp = esp;
/* 4883e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4883e6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4883e9: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4883ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4883ee: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 4883f1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4883f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4883f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4883f5: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 4883f7: jne 0x4883fe */
  if (!zf) goto L_4883fe;
L_4883f9: /* 4883f9: mov ebx, 0x4d1108 */
  ebx = 0x4d1108u;
L_4883fe: /* 4883fe: mov esi, dword ptr [0x48e11c] */
  esi = R32((uint32_t)(0x48e11cu));
/* 488404: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488406u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488406: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488407: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x48840du); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 48840d: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x488413u); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 488413: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488415: je 0x488431 */
  if (zf) goto L_488431;
L_488417: /* 488417: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488419u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488419: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48841a: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x488420u); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 488420: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488422: call 0x48bf32 */
  esp -= 4; W32(esp, 0x488427u); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 488427: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488428: mov dword ptr [ebp + 0x14], 1 */
  W32((uint32_t)(ebp + 0x14u), 0x1u);
/* 48842f: jmp 0x488435 */
  goto L_488435;
L_488431: /* 488431: and dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
L_488435: /* 488435: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488439: jne 0x48848f */
  if (!zf) goto L_48848f;
L_48843b: /* 48843b: mov esi, 0x7fffffff */
  esi = 0x7fffffffu;
/* 488440: jmp 0x488449 */
  goto L_488449;
L_488442: /* 488442: je 0x48847f */
  if (zf) goto L_48847f;
L_488444: /* 488444: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 488447: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_488449: /* 488449: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 48844c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48844d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48844e: mov ecx, edi */
  ecx = edi;
/* 488450: xor eax, eax */
  eax = 0;
/* 488452: call 0x461e0a */
  esp -= 4; W32(esp, 0x488457u); SPILL(); f_461e0a(); if (g_unwind) return; RELOAD();
/* 488457: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 488459: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48845a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48845b: jge 0x488442 */
  if ((sf == of)) goto L_488442;
L_48845d: /* 48845d: cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488461: je 0x48846d */
  if (zf) goto L_48846d;
L_488463: /* 488463: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488465: call 0x48bf2c */
  esp -= 4; W32(esp, 0x48846au); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 48846a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48846b: jmp 0x48847a */
  goto L_48847a;
L_48846d: /* 48846d: call dword ptr [0x48e11c] */
  esp -= 4; W32(esp, 0x488473u); SPILL(); f_4126bb(); if (g_unwind) return; /* MSVCR70!___unguarded_readlc_active_add_func */ RELOAD();
/* 488473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488474: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x48847au); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_48847a: /* 48847a: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48847d: jmp 0x4884de */
  goto L_4884de;
L_48847f: /* 48847f: cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488483: je 0x4884ce */
  if (zf) goto L_4884ce;
L_488485: /* 488485: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488487: call 0x48bf2c */
  esp -= 4; W32(esp, 0x48848cu); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 48848c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48848d: jmp 0x4884db */
  goto L_4884db;
L_48848f: /* 48848f: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 488493: jbe 0x4884c7 */
  if ((cf | zf)) goto L_4884c7;
L_488495: /* 488495: mov esi, 0x7fffffff */
  esi = 0x7fffffffu;
L_48849a: /* 48849a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48849b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48849e: xor eax, eax */
  eax = 0;
/* 4884a0: mov ecx, edi */
  ecx = edi;
/* 4884a2: call 0x461e0a */
  esp -= 4; W32(esp, 0x4884a7u); SPILL(); f_461e0a(); if (g_unwind) return; RELOAD();
/* 4884a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4884a9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4884aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4884ab: jl 0x4884bf */
  if ((sf != of)) goto L_4884bf;
L_4884ad: /* 4884ad: je 0x4884c5 */
  if (zf) goto L_4884c5;
L_4884af: /* 4884af: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4884b2: add dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 4884b6: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4884b8: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 4884bb: jne 0x48849a */
  if (!zf) goto L_48849a;
L_4884bd: /* 4884bd: jmp 0x4884c7 */
  goto L_4884c7;
L_4884bf: /* 4884bf: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4884c3: jmp 0x4884c7 */
  goto L_4884c7;
L_4884c5: /* 4884c5: xor edi, edi */
  edi = 0;
L_4884c7: /* 4884c7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4884ca: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4884cc: jmp 0x48847f */
  goto L_48847f;
L_4884ce: /* 4884ce: call dword ptr [0x48e11c] */
  esp -= 4; W32(esp, 0x4884d4u); SPILL(); f_4126bb(); if (g_unwind) return; /* MSVCR70!___unguarded_readlc_active_add_func */ RELOAD();
/* 4884d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4884d5: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x4884dbu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_4884db: /* 4884db: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_4884de: /* 4884de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4884df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4884e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4884e1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4884e2: ret  */
  esp += 4; SPILL(); return;
}

void f_4884e3(void) {
  LOAD_REGS();
L_4884e3: /* 4884e3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4884e4: mov ebp, esp */
  ebp = esp;
/* 4884e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4884e7: mov ebx, dword ptr [0x48e11c] */
  ebx = R32((uint32_t)(0x48e11cu));
/* 4884ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4884ee: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4884f1: sub esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4884f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4884f5: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 4884f8: sub edi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4884fb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x4884fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4884fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4884fe: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x488504u); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 488504: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x48850au); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 48850a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48850c: je 0x488528 */
  if (zf) goto L_488528;
L_48850e: /* 48850e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488510u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488511: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x488517u); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 488517: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488519: call 0x48bf32 */
  esp -= 4; W32(esp, 0x48851eu); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 48851e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48851f: mov dword ptr [ebp + 0xc], 1 */
  W32((uint32_t)(ebp + 0xcu), 0x1u);
/* 488526: jmp 0x48852c */
  goto L_48852c;
L_488528: /* 488528: and dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_48852c: /* 48852c: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 48852f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488531: jne 0x48853e */
  if (!zf) goto L_48853e;
L_488533: /* 488533: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x488539u); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 488539: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 48853c: jmp 0x488540 */
  goto L_488540;
L_48853e: /* 48853e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_488540: /* 488540: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488542: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 488545: jne 0x488589 */
  if (!zf) goto L_488589;
L_488547: /* 488547: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48854a: je 0x488556 */
  if (zf) goto L_488556;
L_48854c: /* 48854c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48854e: call 0x48bf2c */
  esp -= 4; W32(esp, 0x488553u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 488553: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488554: jmp 0x48855f */
  goto L_48855f;
L_488556: /* 488556: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488558u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488558: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488559: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x48855fu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_48855f: /* 48855f: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 488561: mov eax, esi */
  eax = esi;
/* 488563: jl 0x488567 */
  if ((sf != of)) goto L_488567;
L_488565: /* 488565: mov eax, edi */
  eax = edi;
L_488567: /* 488567: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488568: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48856b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48856e: call 0x48bd70 */
  esp -= 4; W32(esp, 0x488573u); SPILL(); f_48bd70(); if (g_unwind) return; RELOAD();
/* 488573: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 488576: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488578: jne 0x4885f2 */
  if (!zf) goto L_4885f2;
L_48857a: /* 48857a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48857c: je 0x4885f2 */
  if (zf) goto L_4885f2;
L_48857e: /* 48857e: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 488580: setge al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 488583: lea eax, [eax + eax - 1] */
  eax = (uint32_t)(eax + eax + 0xffffffffu);
/* 488587: jmp 0x4885f2 */
  goto L_4885f2;
L_488589: /* 488589: call dword ptr [0x48e124] */
  esp -= 4; W32(esp, 0x48858fu); SPILL(); f_412fe5(); if (g_unwind) return; /* MSVCR70!___lc_collate_cp_func */ RELOAD();
/* 48858f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488590: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488591: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 488594: xor edi, edi */
  edi = 0;
/* 488596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488597: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48859a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48859b: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48859e: call 0x48bf38 */
  esp -= 4; W32(esp, 0x4885a3u); SPILL(); f_48bf38(); if (g_unwind) return; RELOAD();
/* 4885a3: mov esi, eax */
  esi = eax;
/* 4885a5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4885a8: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4885aa: jne 0x4885d7 */
  if (!zf) goto L_4885d7;
L_4885ac: /* 4885ac: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4885af: je 0x4885bb */
  if (zf) goto L_4885bb;
L_4885b1: /* 4885b1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4885b3: call 0x48bf2c */
  esp -= 4; W32(esp, 0x4885b8u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 4885b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4885b9: jmp 0x4885c4 */
  goto L_4885c4;
L_4885bb: /* 4885bb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x4885bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4885bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4885be: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x4885c4u); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_4885c4: /* 4885c4: call dword ptr [0x48e0b0] */
  esp -= 4; W32(esp, 0x4885cau); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 4885ca: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 4885d0: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 4885d5: jmp 0x4885f2 */
  goto L_4885f2;
L_4885d7: /* 4885d7: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4885da: je 0x4885e6 */
  if (zf) goto L_4885e6;
L_4885dc: /* 4885dc: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4885de: call 0x48bf2c */
  esp -= 4; W32(esp, 0x4885e3u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 4885e3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4885e4: jmp 0x4885ef */
  goto L_4885ef;
L_4885e6: /* 4885e6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x4885e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4885e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4885e9: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x4885efu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_4885ef: /* 4885ef: lea eax, [esi - 2] */
  eax = (uint32_t)(esi + 0xfffffffeu);
L_4885f2: /* 4885f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4885f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4885f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4885f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4885f6: ret  */
  esp += 4; SPILL(); return;
}

void f_4885f7(void) {
  LOAD_REGS();
L_4885f7: /* 4885f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4885f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4885f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4885fa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4885fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4885fc: mov esi, dword ptr [0x48e11c] */
  esi = R32((uint32_t)(0x48e11cu));
/* 488602: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488603: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488605u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488605: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488606: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x48860cu); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 48860c: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x488612u); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 488612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488614: mov ebx, dword ptr [0x48e034] */
  ebx = R32((uint32_t)(0x48e034u));
/* 48861a: je 0x48862e */
  if (zf) goto L_48862e;
L_48861c: /* 48861c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x48861eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48861e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48861f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488621u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488621: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488623: call 0x48bf32 */
  esp -= 4; W32(esp, 0x488628u); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 488628: xor edi, edi */
  edi = 0;
/* 48862a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48862b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 48862c: jmp 0x488630 */
  goto L_488630;
L_48862e: /* 48862e: xor edi, edi */
  edi = 0;
L_488630: /* 488630: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x488636u); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 488636: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 488639: call dword ptr [0x48e124] */
  esp -= 4; W32(esp, 0x48863fu); SPILL(); f_412fe5(); if (g_unwind) return; /* MSVCR70!___lc_collate_cp_func */ RELOAD();
/* 48863f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488641: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 488645: je 0x488651 */
  if (zf) goto L_488651;
L_488647: /* 488647: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488649: call 0x48bf2c */
  esp -= 4; W32(esp, 0x48864eu); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 48864e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48864f: jmp 0x488656 */
  goto L_488656;
L_488651: /* 488651: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488653u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488653: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488654: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488656u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_488656: /* 488656: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 48865a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48865b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48865c: mov eax, ebp */
  eax = ebp;
/* 48865e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48865f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 488660: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488661: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488662: ret  */
  esp += 4; SPILL(); return;
}

void f_488663(void) {
  LOAD_REGS();
L_488663: /* 488663: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 488664: mov ebp, esp */
  ebp = esp;
/* 488666: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 488667: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 488668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 488669: mov ebx, dword ptr [0x48e11c] */
  ebx = R32((uint32_t)(0x48e11cu));
/* 48866f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488670: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 488673: sub esi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 488676: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488677: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 48867a: sub edi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 48867d: mov dword ptr [ebp - 8], 0x7fffffff */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x7fffffffu);
/* 488684: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488686u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488686: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488687: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x48868du); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 48868d: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x488693u); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 488693: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488695: je 0x4886b1 */
  if (zf) goto L_4886b1;
L_488697: /* 488697: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488699u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488699: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48869a: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x4886a0u); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 4886a0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4886a2: call 0x48bf32 */
  esp -= 4; W32(esp, 0x4886a7u); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 4886a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4886a8: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4886af: jmp 0x4886b5 */
  goto L_4886b5;
L_4886b1: /* 4886b1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_4886b5: /* 4886b5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4886b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4886ba: jne 0x4886d0 */
  if (!zf) goto L_4886d0;
L_4886bc: /* 4886bc: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x4886c2u); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 4886c2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4886c5: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 4886c8: call dword ptr [0x48e124] */
  esp -= 4; W32(esp, 0x4886ceu); SPILL(); f_412fe5(); if (g_unwind) return; /* MSVCR70!___lc_collate_cp_func */ RELOAD();
/* 4886ce: jmp 0x4886d8 */
  goto L_4886d8;
L_4886d0: /* 4886d0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4886d2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4886d5: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
L_4886d8: /* 4886d8: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 4886db: xor eax, eax */
  eax = 0;
/* 4886dd: cmp dword ptr [ebp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4886e0: jne 0x488716 */
  if (!zf) goto L_488716;
L_4886e2: /* 4886e2: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4886e5: jne 0x488716 */
  if (!zf) goto L_488716;
L_4886e7: /* 4886e7: cmp dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4886ea: je 0x4886f6 */
  if (zf) goto L_4886f6;
L_4886ec: /* 4886ec: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4886ee: call 0x48bf2c */
  esp -= 4; W32(esp, 0x4886f3u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 4886f3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4886f4: jmp 0x4886ff */
  goto L_4886ff;
L_4886f6: /* 4886f6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x4886f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4886f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4886f9: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x4886ffu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_4886ff: /* 4886ff: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 488701: ja 0x488712 */
  if ((!cf && !zf)) goto L_488712;
L_488703: /* 488703: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488704: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 488707: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48870a: call 0x4617bb */
  esp -= 4; W32(esp, 0x48870fu); SPILL(); hle_memcpy(); RELOAD();
/* 48870f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_488712: /* 488712: mov eax, esi */
  eax = esi;
/* 488714: jmp 0x488776 */
  goto L_488776;
L_488716: /* 488716: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 488718: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48871b: mov ebx, 0x400 */
  ebx = 0x400u;
/* 488720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488721: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488722: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488723: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 488726: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 488727: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48872a: call 0x48bf3e */
  esp -= 4; W32(esp, 0x48872fu); SPILL(); f_48bf3e(); if (g_unwind) return; RELOAD();
/* 48872f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 488732: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488734: je 0x488756 */
  if (zf) goto L_488756;
L_488736: /* 488736: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 488738: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 48873b: jg 0x488756 */
  if ((!zf && sf == of)) goto L_488756;
L_48873d: /* 48873d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48873f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 488742: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488743: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 488746: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488747: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48874a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48874b: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48874e: call 0x48bf3e */
  esp -= 4; W32(esp, 0x488753u); SPILL(); f_48bf3e(); if (g_unwind) return; RELOAD();
/* 488753: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_488756: /* 488756: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48875a: je 0x488766 */
  if (zf) goto L_488766;
L_48875c: /* 48875c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48875e: call 0x48bf2c */
  esp -= 4; W32(esp, 0x488763u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 488763: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488764: jmp 0x488773 */
  goto L_488773;
L_488766: /* 488766: call dword ptr [0x48e11c] */
  esp -= 4; W32(esp, 0x48876cu); SPILL(); f_4126bb(); if (g_unwind) return; /* MSVCR70!___unguarded_readlc_active_add_func */ RELOAD();
/* 48876c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48876d: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x488773u); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_488773: /* 488773: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
L_488776: /* 488776: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 488777: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488778: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 488779: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48877a: ret  */
  esp += 4; SPILL(); return;
}

void f_48877b(void) {
  LOAD_REGS();
L_48877b: /* 48877b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48877c: mov ebp, esp */
  ebp = esp;
/* 48877e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 488781: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488783: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488784: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488785: jne 0x48879a */
  if (!zf) goto L_48879a;
L_488787: /* 488787: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x48878du); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 48878d: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 488790: call dword ptr [0x48e108] */
  esp -= 4; W32(esp, 0x488796u); SPILL(); f_412fcc(); if (g_unwind) return; /* MSVCR70!___lc_codepage_func */ RELOAD();
/* 488796: mov edi, eax */
  edi = eax;
/* 488798: jmp 0x48879f */
  goto L_48879f;
L_48879a: /* 48879a: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 48879c: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
L_48879f: /* 48879f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4887a1: jne 0x4887b7 */
  if (!zf) goto L_4887b7;
L_4887a3: /* 4887a3: mov ax, word ptr [ebp + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xcu))) & 0xffffu);
/* 4887a7: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4887ab: ja 0x4887e4 */
  if ((!cf && !zf)) goto L_4887e4;
L_4887ad: /* 4887ad: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4887b0: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 4887b2: xor eax, eax */
  eax = 0;
/* 4887b4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4887b5: jmp 0x4887f3 */
  goto L_4887f3;
L_4887b7: /* 4887b7: and dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 4887bb: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 4887be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4887bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4887c1: call dword ptr [0x48e17c] */
  esp -= 4; W32(esp, 0x4887c7u); SPILL(); f_412fc6(); if (g_unwind) return; /* MSVCR70!___mb_cur_max_func */ RELOAD();
/* 4887c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4887c8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4887cb: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 4887ce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4887d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4887d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4887d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4887d4: call dword ptr [0x48e02c] */
  esp -= 4; W32(esp, 0x4887dau); SPILL(); call_ind(R32(0x48e02cu)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 4887da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4887dc: je 0x4887e4 */
  if (zf) goto L_4887e4;
L_4887de: /* 4887de: cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4887e2: je 0x4887f3 */
  if (zf) goto L_4887f3;
L_4887e4: /* 4887e4: call dword ptr [0x48e0b0] */
  esp -= 4; W32(esp, 0x4887eau); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 4887ea: mov dword ptr [eax], 0x2a */
  W32((uint32_t)(eax), 0x2au);
/* 4887f0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4887f3: /* 4887f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4887f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4887f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4887f6: ret  */
  esp += 4; SPILL(); return;
}

void f_4887f7(void) {
  LOAD_REGS();
L_4887f7: /* 4887f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4887f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4887f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4887fa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4887fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4887fc: mov esi, dword ptr [0x48e11c] */
  esi = R32((uint32_t)(0x48e11cu));
/* 488802: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488803: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488805u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488805: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488806: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x48880cu); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 48880c: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x488812u); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 488812: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488814: mov ebx, dword ptr [0x48e034] */
  ebx = R32((uint32_t)(0x48e034u));
/* 48881a: je 0x48882e */
  if (zf) goto L_48882e;
L_48881c: /* 48881c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x48881eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48881e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48881f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488821u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488821: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488823: call 0x48bf32 */
  esp -= 4; W32(esp, 0x488828u); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 488828: xor edi, edi */
  edi = 0;
/* 48882a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48882b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 48882c: jmp 0x488830 */
  goto L_488830;
L_48882e: /* 48882e: xor edi, edi */
  edi = 0;
L_488830: /* 488830: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x488836u); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 488836: mov ebp, dword ptr [eax + 8] */
  ebp = R32((uint32_t)(eax + 0x8u));
/* 488839: call dword ptr [0x48e108] */
  esp -= 4; W32(esp, 0x48883fu); SPILL(); f_412fcc(); if (g_unwind) return; /* MSVCR70!___lc_codepage_func */ RELOAD();
/* 48883f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488841: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 488845: je 0x488851 */
  if (zf) goto L_488851;
L_488847: /* 488847: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488849: call 0x48bf2c */
  esp -= 4; W32(esp, 0x48884eu); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 48884e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48884f: jmp 0x488856 */
  goto L_488856;
L_488851: /* 488851: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488853u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488853: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488854: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488856u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_488856: /* 488856: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 48885a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48885b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48885c: mov eax, ebp */
  eax = ebp;
/* 48885e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48885f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 488860: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488861: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488862: ret  */
  esp += 4; SPILL(); return;
}

void f_488863(void) {
  LOAD_REGS();
L_488863: /* 488863: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 488864: mov ebp, esp */
  ebp = esp;
/* 488866: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 488869: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 48886e: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 488871: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 488872: mov ebx, dword ptr [0x48e11c] */
  ebx = R32((uint32_t)(0x48e11cu));
/* 488878: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488879: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 48887c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 48887f: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 488881: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488882: xor edi, edi */
  edi = 0;
/* 488884: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 488887: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488889u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488889: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48888a: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x488890u); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 488890: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x488896u); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 488896: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488898: je 0x4888b4 */
  if (zf) goto L_4888b4;
L_48889a: /* 48889a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x48889cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48889c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48889d: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x4888a3u); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 4888a3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4888a5: call 0x48bf32 */
  esp -= 4; W32(esp, 0x4888aau); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 4888aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4888ab: mov dword ptr [ebp - 0xc], 1 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x1u);
/* 4888b2: jmp 0x4888b7 */
  goto L_4888b7;
L_4888b4: /* 4888b4: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
L_4888b7: /* 4888b7: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4888ba: jne 0x488945 */
  if (!zf) goto L_488945;
L_4888c0: /* 4888c0: xor eax, eax */
  eax = 0;
/* 4888c2: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 4888c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4888c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4888c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4888c8: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4888cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4888cc: call 0x48877b */
  esp -= 4; W32(esp, 0x4888d1u); SPILL(); f_48877b(); if (g_unwind) return; RELOAD();
/* 4888d1: mov edi, eax */
  edi = eax;
/* 4888d3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4888d6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4888d8: jle 0x48890d */
  if ((zf || sf != of)) goto L_48890d;
L_4888da: /* 4888da: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4888dd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4888de: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 4888e1: jmp 0x4888e6 */
  goto L_4888e6;
L_4888e3: /* 4888e3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_4888e6: /* 4888e6: cmp byte ptr [eax + edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4888ea: je 0x48892e */
  if (zf) goto L_48892e;
L_4888ec: /* 4888ec: add dword ptr [ebp - 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4888ef: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4888f0: xor eax, eax */
  eax = 0;
/* 4888f2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4888f3: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 4888f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4888f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4888fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4888fb: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4888fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4888ff: call 0x48877b */
  esp -= 4; W32(esp, 0x488904u); SPILL(); f_48877b(); if (g_unwind) return; RELOAD();
/* 488904: mov edi, eax */
  edi = eax;
/* 488906: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 488909: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 48890b: jg 0x4888e3 */
  if ((!zf && sf == of)) goto L_4888e3;
L_48890d: /* 48890d: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488911: je 0x48891d */
  if (zf) goto L_48891d;
L_488913: /* 488913: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488915: call 0x48bf2c */
  esp -= 4; W32(esp, 0x48891au); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 48891a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48891b: jmp 0x488926 */
  goto L_488926;
L_48891d: /* 48891d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x48891fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48891f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488920: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x488926u); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_488926: /* 488926: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 488929: jmp 0x4889f0 */
  goto L_4889f0;
L_48892e: /* 48892e: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488932: je 0x4889cd */
  if (zf) goto L_4889cd;
L_488938: /* 488938: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48893a: call 0x48bf2c */
  esp -= 4; W32(esp, 0x48893fu); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 48893f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488940: jmp 0x4889d6 */
  goto L_4889d6;
L_488945: /* 488945: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 488948: jbe 0x4889ac */
  if ((cf | zf)) goto L_4889ac;
L_48894a: /* 48894a: call dword ptr [0x48e17c] */
  esp -= 4; W32(esp, 0x488950u); SPILL(); f_412fc6(); if (g_unwind) return; /* MSVCR70!___mb_cur_max_func */ RELOAD();
/* 488950: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 488953: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 488956: jb 0x48895b */
  if (cf) goto L_48895b;
L_488958: /* 488958: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_48895b: /* 48895b: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 48895e: xor eax, eax */
  eax = 0;
/* 488960: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 488963: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 488965: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 488967: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488968: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 48896b: call 0x48877b */
  esp -= 4; W32(esp, 0x488970u); SPILL(); f_48877b(); if (g_unwind) return; RELOAD();
/* 488970: mov edi, eax */
  edi = eax;
/* 488972: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 488975: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 488977: jle 0x4889bc */
  if ((zf || sf != of)) goto L_4889bc;
L_488979: /* 488979: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48897c: cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48897f: je 0x488997 */
  if (zf) goto L_488997;
L_488981: /* 488981: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 488984: jb 0x4889ac */
  if (cf) goto L_4889ac;
L_488986: /* 488986: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488987: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 48898a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48898b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48898c: call 0x4617bb */
  esp -= 4; W32(esp, 0x488991u); SPILL(); hle_memcpy(); RELOAD();
/* 488991: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 488994: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_488997: /* 488997: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 488999: cmp byte ptr [eax - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 48899d: je 0x4889c2 */
  if (zf) goto L_4889c2;
L_48899f: /* 48899f: add dword ptr [ebp - 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4889a2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4889a3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4889a4: sub dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 4889a7: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 4889aa: jne 0x48894a */
  if (!zf) goto L_48894a;
L_4889ac: /* 4889ac: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4889b0: je 0x4889df */
  if (zf) goto L_4889df;
L_4889b2: /* 4889b2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4889b4: call 0x48bf2c */
  esp -= 4; W32(esp, 0x4889b9u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 4889b9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4889ba: jmp 0x4889e8 */
  goto L_4889e8;
L_4889bc: /* 4889bc: or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4889c0: jmp 0x4889ac */
  goto L_4889ac;
L_4889c2: /* 4889c2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4889c5: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 4889c8: jmp 0x48892e */
  goto L_48892e;
L_4889cd: /* 4889cd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x4889cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4889cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4889d0: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x4889d6u); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_4889d6: /* 4889d6: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4889d9: lea eax, [edi + eax - 1] */
  eax = (uint32_t)(edi + eax + 0xffffffffu);
/* 4889dd: jmp 0x4889f0 */
  goto L_4889f0;
L_4889df: /* 4889df: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x4889e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4889e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4889e2: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x4889e8u); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_4889e8: /* 4889e8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4889eb: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4889ed: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
L_4889f0: /* 4889f0: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4889f3: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4889f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4889f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4889f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4889f9: call 0x46190c */
  esp -= 4; W32(esp, 0x4889feu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 4889fe: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4889ff: ret  */
  esp += 4; SPILL(); return;
}

void f_488a00(void) {
  LOAD_REGS();
L_488a00: /* 488a00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 488a01: mov ebp, esp */
  ebp = esp;
/* 488a03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 488a04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 488a05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488a06: mov esi, dword ptr [0x48e11c] */
  esi = R32((uint32_t)(0x48e11cu));
/* 488a0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488a0d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488a0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488a0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488a10: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x488a16u); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 488a16: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x488a1cu); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 488a1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488a1e: mov edi, dword ptr [0x48e034] */
  edi = R32((uint32_t)(0x48e034u));
/* 488a24: je 0x488a38 */
  if (zf) goto L_488a38;
L_488a26: /* 488a26: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488a28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488a28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488a29: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x488a2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488a2b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488a2d: call 0x48bf32 */
  esp -= 4; W32(esp, 0x488a32u); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 488a32: xor ebx, ebx */
  ebx = 0;
/* 488a34: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488a35: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 488a36: jmp 0x488a3a */
  goto L_488a3a;
L_488a38: /* 488a38: xor ebx, ebx */
  ebx = 0;
L_488a3a: /* 488a3a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 488a3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 488a3f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 488a42: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 488a45: call 0x48877b */
  esp -= 4; W32(esp, 0x488a4au); SPILL(); f_48877b(); if (g_unwind) return; RELOAD();
/* 488a4a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 488a4d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488a4f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 488a52: je 0x488a5e */
  if (zf) goto L_488a5e;
L_488a54: /* 488a54: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488a56: call 0x48bf2c */
  esp -= 4; W32(esp, 0x488a5bu); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 488a5b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488a5c: jmp 0x488a63 */
  goto L_488a63;
L_488a5e: /* 488a5e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488a60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488a60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488a61: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x488a63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_488a63: /* 488a63: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 488a66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 488a67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488a68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 488a69: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 488a6a: ret  */
  esp += 4; SPILL(); return;
}

void f_488a6b(void) {
  LOAD_REGS();
L_488a6b: /* 488a6b: xor eax, eax */
  eax = 0;
/* 488a6d: cmp dword ptr [esp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488a71: jne 0x488a75 */
  if (!zf) goto L_488a75;
L_488a73: /* 488a73: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 488a74: ret  */
  esp += 4; SPILL(); return;
L_488a75: /* 488a75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488a76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488a77: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 488a7b: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 488a7f: call 0x488a00 */
  esp -= 4; W32(esp, 0x488a84u); SPILL(); f_488a00(); if (g_unwind) return; RELOAD();
/* 488a84: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 488a87: ret  */
  esp += 4; SPILL(); return;
}

void f_488a88(void) {
  LOAD_REGS();
L_488a88: /* 488a88: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 488a89: mov ebp, esp */
  ebp = esp;
/* 488a8b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 488a8e: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 488a93: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 488a96: cmp word ptr [ebp + 8], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 488a9b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 488a9e: je 0x488abe */
  if (zf) goto L_488abe;
L_488aa0: /* 488aa0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 488aa2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 488aa4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 488aa7: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 488aaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488aab: call 0x488a00 */
  esp -= 4; W32(esp, 0x488ab0u); SPILL(); f_488a00(); if (g_unwind) return; RELOAD();
/* 488ab0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 488ab3: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488ab6: jne 0x488abe */
  if (!zf) goto L_488abe;
L_488ab8: /* 488ab8: movsx eax, byte ptr [ebp - 0xc] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xfffffff4u)));
/* 488abc: jmp 0x488ac1 */
  goto L_488ac1;
L_488abe: /* 488abe: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_488ac1: /* 488ac1: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 488ac4: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 488ac7: call 0x46190c */
  esp -= 4; W32(esp, 0x488accu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 488acc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 488acd: ret  */
  esp += 4; SPILL(); return;
}

void f_488ace(void) {
  LOAD_REGS();
L_488ace: /* 488ace: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 488acf: mov ebp, esp */
  ebp = esp;
/* 488ad1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 488ad4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488ad5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 488ad8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488ada: jne 0x488af0 */
  if (!zf) goto L_488af0;
L_488adc: /* 488adc: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x488ae2u); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 488ae2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 488ae5: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 488ae8: call dword ptr [0x48e108] */
  esp -= 4; W32(esp, 0x488aeeu); SPILL(); f_412fcc(); if (g_unwind) return; /* MSVCR70!___lc_codepage_func */ RELOAD();
/* 488aee: jmp 0x488af8 */
  goto L_488af8;
L_488af0: /* 488af0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 488af2: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 488af5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
L_488af8: /* 488af8: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488afc: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 488aff: jne 0x488b1e */
  if (!zf) goto L_488b1e;
L_488b01: /* 488b01: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 488b04: cmp eax, 0x41 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 488b07: jl 0x488bbe */
  if ((sf != of)) goto L_488bbe;
L_488b0d: /* 488b0d: cmp eax, 0x5a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 488b10: jg 0x488bbe */
  if ((!zf && sf == of)) goto L_488bbe;
L_488b16: /* 488b16: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 488b19: jmp 0x488bbe */
  goto L_488bbe;
L_488b1e: /* 488b1e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 488b1f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 488b22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488b23: mov edi, 0x100 */
  edi = 0x100u;
/* 488b28: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 488b2a: jae 0x488b51 */
  if (!cf) goto L_488b51;
L_488b2c: /* 488b2c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488b2e: jne 0x488b40 */
  if (!zf) goto L_488b40;
L_488b30: /* 488b30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 488b31: call dword ptr [0x48e12c] */
  esp -= 4; W32(esp, 0x488b37u); SPILL(); f_4153d5(); if (g_unwind) return; /* MSVCR70!isupper */ RELOAD();
/* 488b37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488b39: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488b3a: jne 0x488b51 */
  if (!zf) goto L_488b51;
L_488b3c: /* 488b3c: mov eax, ebx */
  eax = ebx;
/* 488b3e: jmp 0x488bbc */
  goto L_488bbc;
L_488b40: /* 488b40: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 488b43: xor ecx, ecx */
  ecx = 0;
/* 488b45: cmp word ptr [eax + ebx*2], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + ebx*2))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 488b49: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 488b4c: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 488b4f: jne 0x488b3c */
  if (!zf) goto L_488b3c;
L_488b51: /* 488b51: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 488b54: sar dword ptr [ebp - 8], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 488b58: call dword ptr [0x48e104] */
  esp -= 4; W32(esp, 0x488b5eu); SPILL(); f_41253b(); if (g_unwind) return; /* MSVCR70!__pctype_func */ RELOAD();
/* 488b5e: mov ecx, eax */
  ecx = eax;
/* 488b60: mov al, byte ptr [ebp - 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xfffffff8u))) & 0xffu);
/* 488b63: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 488b66: test byte ptr [ecx + edx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + edx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 488b6b: je 0x488b7c */
  if (zf) goto L_488b7c;
L_488b6d: /* 488b6d: and byte ptr [ebp + 0xe], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xeu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xeu), r);
  }
/* 488b71: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 488b73: mov byte ptr [ebp + 0xc], al */
  W8((uint32_t)(ebp + 0xcu), (eax & 0xffu));
/* 488b76: mov byte ptr [ebp + 0xd], bl */
  W8((uint32_t)(ebp + 0xdu), (ebx & 0xffu));
/* 488b79: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 488b7a: jmp 0x488b86 */
  goto L_488b86;
L_488b7c: /* 488b7c: and byte ptr [ebp + 0xd], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xdu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xdu), r);
  }
/* 488b80: xor eax, eax */
  eax = 0;
/* 488b82: mov byte ptr [ebp + 0xc], bl */
  W8((uint32_t)(ebp + 0xcu), (ebx & 0xffu));
/* 488b85: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_488b86: /* 488b86: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 488b88: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 488b8b: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 488b8e: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 488b90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 488b91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488b92: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 488b95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488b96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488b97: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 488b9a: call 0x48bf3e */
  esp -= 4; W32(esp, 0x488b9fu); SPILL(); f_48bf3e(); if (g_unwind) return; RELOAD();
/* 488b9f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 488ba2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488ba4: je 0x488b3c */
  if (zf) goto L_488b3c;
L_488ba6: /* 488ba6: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488ba9: jne 0x488bb1 */
  if (!zf) goto L_488bb1;
L_488bab: /* 488bab: movzx eax, byte ptr [ebp - 4] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu)));
/* 488baf: jmp 0x488bbc */
  goto L_488bbc;
L_488bb1: /* 488bb1: movzx ecx, byte ptr [ebp - 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffdu)));
/* 488bb5: xor eax, eax */
  eax = 0;
/* 488bb7: mov ah, byte ptr [ebp - 4] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu))) & 0xffu) << 8);
/* 488bba: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_488bbc: /* 488bbc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 488bbd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_488bbe: /* 488bbe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488bbf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 488bc0: ret  */
  esp += 4; SPILL(); return;
}

void f_488bc1(void) {
  LOAD_REGS();
L_488bc1: /* 488bc1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 488bc2: mov ebp, esp */
  ebp = esp;
/* 488bc4: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 488bc7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 488bc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488bc9: mov esi, dword ptr [0x48e11c] */
  esi = R32((uint32_t)(0x48e11cu));
/* 488bcf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488bd0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488bd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488bd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488bd3: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x488bd9u); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 488bd9: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x488bdfu); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 488bdf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488be1: mov ebx, dword ptr [0x48e034] */
  ebx = R32((uint32_t)(0x48e034u));
/* 488be7: je 0x488bff */
  if (zf) goto L_488bff;
L_488be9: /* 488be9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488bebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488beb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488bec: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488beeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488bee: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488bf0: call 0x48bf32 */
  esp -= 4; W32(esp, 0x488bf5u); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 488bf5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488bf6: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 488bfd: jmp 0x488c03 */
  goto L_488c03;
L_488bff: /* 488bff: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_488c03: /* 488c03: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x488c09u); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 488c09: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 488c0c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 488c0f: call dword ptr [0x48e108] */
  esp -= 4; W32(esp, 0x488c15u); SPILL(); f_412fcc(); if (g_unwind) return; /* MSVCR70!___lc_codepage_func */ RELOAD();
/* 488c15: mov edi, 0x200 */
  edi = 0x200u;
/* 488c1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488c1b: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 488c1e: call dword ptr [0x48e0e4] */
  esp -= 4; W32(esp, 0x488c24u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 488c24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488c26: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488c27: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 488c2a: je 0x488c48 */
  if (zf) goto L_488c48;
L_488c2c: /* 488c2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488c2d: call dword ptr [0x48e104] */
  esp -= 4; W32(esp, 0x488c33u); SPILL(); f_41253b(); if (g_unwind) return; /* MSVCR70!__pctype_func */ RELOAD();
/* 488c33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488c34: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 488c37: call 0x4617bb */
  esp -= 4; W32(esp, 0x488c3cu); SPILL(); hle_memcpy(); RELOAD();
/* 488c3c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 488c3f: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
/* 488c46: jmp 0x488c55 */
  goto L_488c55;
L_488c48: /* 488c48: call dword ptr [0x48e104] */
  esp -= 4; W32(esp, 0x488c4eu); SPILL(); f_41253b(); if (g_unwind) return; /* MSVCR70!__pctype_func */ RELOAD();
/* 488c4e: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 488c52: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_488c55: /* 488c55: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488c59: je 0x488c65 */
  if (zf) goto L_488c65;
L_488c5b: /* 488c5b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488c5d: call 0x48bf2c */
  esp -= 4; W32(esp, 0x488c62u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 488c62: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488c63: jmp 0x488c6a */
  goto L_488c6a;
L_488c65: /* 488c65: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488c67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488c67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488c68: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488c6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_488c6a: /* 488c6a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 488c6d: lea esi, [ebp - 0x14] */
  esi = (uint32_t)(ebp + 0xffffffecu);
/* 488c70: mov edi, eax */
  edi = eax;
/* 488c72: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 488c73: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 488c74: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 488c75: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 488c76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 488c77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488c78: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 488c79: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 488c7a: ret  */
  esp += 4; SPILL(); return;
}

void f_488c7b(void) {
  LOAD_REGS();
L_488c7b: /* 488c7b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 488c7c: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 488c80: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488c82: jne 0x488c8f */
  if (!zf) goto L_488c8f;
L_488c84: /* 488c84: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x488c8au); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 488c8a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 488c8d: jmp 0x488c92 */
  goto L_488c92;
L_488c8f: /* 488c8f: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
L_488c92: /* 488c92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488c94: jne 0x488ca9 */
  if (!zf) goto L_488ca9;
L_488c96: /* 488c96: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 488c9a: cmp eax, 0x41 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 488c9d: jl 0x488d05 */
  if ((sf != of)) goto L_488d05;
L_488c9f: /* 488c9f: cmp eax, 0x5a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 488ca2: jg 0x488d05 */
  if ((!zf && sf == of)) goto L_488d05;
L_488ca4: /* 488ca4: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 488ca7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 488ca8: ret  */
  esp += 4; SPILL(); return;
L_488ca9: /* 488ca9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 488caa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488cab: mov esi, dword ptr [0x48e11c] */
  esi = R32((uint32_t)(0x48e11cu));
/* 488cb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488cb2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488cb4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488cb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488cb5: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x488cbbu); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 488cbb: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x488cc1u); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 488cc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488cc3: mov ebx, dword ptr [0x48e034] */
  ebx = R32((uint32_t)(0x48e034u));
/* 488cc9: je 0x488cdd */
  if (zf) goto L_488cdd;
L_488ccb: /* 488ccb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488ccdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488ccd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488cce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488cd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488cd0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488cd2: call 0x48bf32 */
  esp -= 4; W32(esp, 0x488cd7u); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 488cd7: xor edi, edi */
  edi = 0;
/* 488cd9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488cda: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 488cdb: jmp 0x488cdf */
  goto L_488cdf;
L_488cdd: /* 488cdd: xor edi, edi */
  edi = 0;
L_488cdf: /* 488cdf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 488ce0: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 488ce4: call 0x488ace */
  esp -= 4; W32(esp, 0x488ce9u); SPILL(); f_488ace(); if (g_unwind) return; RELOAD();
/* 488ce9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488ceb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488cec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488ced: mov ebp, eax */
  ebp = eax;
/* 488cef: je 0x488cfb */
  if (zf) goto L_488cfb;
L_488cf1: /* 488cf1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 488cf3: call 0x48bf2c */
  esp -= 4; W32(esp, 0x488cf8u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 488cf8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488cf9: jmp 0x488d00 */
  goto L_488d00;
L_488cfb: /* 488cfb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x488cfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488cfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488cfe: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488d00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_488d00: /* 488d00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 488d01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488d02: mov eax, ebp */
  eax = ebp;
/* 488d04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_488d05: /* 488d05: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 488d06: ret  */
  esp += 4; SPILL(); return;
}

void f_488d07(void) {
  LOAD_REGS();
L_488d07: /* 488d07: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 488d08: mov ebp, esp */
  ebp = esp;
/* 488d0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 488d0b: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 488d0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488d10: xor eax, eax */
  eax = 0;
/* 488d12: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 488d15: stosb byte ptr es:[edi], al */
  W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1);
/* 488d16: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 488d18: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 488d1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488d1c: push 0x22 */
  { uint32_t v = 0x22u; esp -= 4; W32(esp, v); }
/* 488d1e: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x488d24u); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 488d24: push dword ptr [eax + 0x14] */
  { uint32_t v = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, v); }
/* 488d27: call dword ptr [0x48e028] */
  esp -= 4; W32(esp, 0x488d2du); SPILL(); call_ind(R32(0x48e028u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoA */ RELOAD();
/* 488d2d: mov al, byte ptr [ebp - 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu))) & 0xffu);
/* 488d30: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 488d32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 488d33: jne 0x488d3a */
  if (!zf) goto L_488d3a;
L_488d35: /* 488d35: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 488d37: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 488d38: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 488d39: ret  */
  esp += 4; SPILL(); return;
L_488d3a: /* 488d3a: cmp al, 0x31 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 488d3c: jne 0x488d43 */
  if (!zf) goto L_488d43;
L_488d3e: /* 488d3e: xor eax, eax */
  eax = 0;
/* 488d40: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 488d41: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 488d42: ret  */
  esp += 4; SPILL(); return;
L_488d43: /* 488d43: sub al, 0x32 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x32u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 488d45: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 488d47: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 488d49: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 488d4c: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 488d4f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 488d50: ret  */
  esp += 4; SPILL(); return;
}

void f_488d51(void) {
  LOAD_REGS();
L_488d51: /* 488d51: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 488d54: call 0x46139d */
  esp -= 4; W32(esp, 0x488d59u); SPILL(); f_46139d(); if (g_unwind) return; RELOAD();
/* 488d59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488d5b: je 0x488d65 */
  if (zf) goto L_488d65;
L_488d5d: /* 488d5d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 488d5f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 488d61: mov ecx, eax */
  ecx = eax;
/* 488d63: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x488d65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_488d65: /* 488d65: ret  */
  esp += 4; SPILL(); return;
}

void f_488d66(void) {
  LOAD_REGS();
L_488d66: /* 488d66: mov eax, dword ptr [0x4d0e34] */
  eax = R32((uint32_t)(0x4d0e34u));
/* 488d6b: ret  */
  esp += 4; SPILL(); return;
}

void f_488d6c(void) {
  LOAD_REGS();
L_488d6c: /* 488d6c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 488d6e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 488d72: cmp edx, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 488d75: jae 0x488d7f */
  if (!cf) goto L_488d7f;
L_488d77: /* 488d77: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 488d7a: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 488d7d: jmp 0x488d81 */
  goto L_488d81;
L_488d7f: /* 488d7f: xor eax, eax */
  eax = 0;
L_488d81: /* 488d81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488d83: jne 0x488d9e */
  if (!zf) goto L_488d9e;
L_488d85: /* 488d85: cmp byte ptr [ecx + 0x14], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x14u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 488d88: je 0x488d9e */
  if (zf) goto L_488d9e;
L_488d8a: /* 488d8a: mov eax, dword ptr [0x4d0e34] */
  eax = R32((uint32_t)(0x4d0e34u));
/* 488d8f: cmp edx, dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 488d92: jae 0x488d9c */
  if (!cf) goto L_488d9c;
L_488d94: /* 488d94: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 488d97: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 488d9a: jmp 0x488d9e */
  goto L_488d9e;
L_488d9c: /* 488d9c: xor eax, eax */
  eax = 0;
L_488d9e: /* 488d9e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_488da1(void) {
  LOAD_REGS();
L_488da1: /* 488da1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 488da2: mov ebp, esp */
  ebp = esp;
/* 488da4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 488da5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 488da7: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 488daa: call 0x4612ba */
  esp -= 4; W32(esp, 0x488dafu); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 488daf: mov eax, dword ptr [0x4d110c] */
  eax = R32((uint32_t)(0x4d110cu));
/* 488db4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488db6: je 0x488dda */
  if (zf) goto L_488dda;
L_488db8: /* 488db8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_488db9: /* 488db9: mov esi, eax */
  esi = eax;
/* 488dbb: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 488dbd: mov ecx, esi */
  ecx = esi;
/* 488dbf: mov dword ptr [0x4d110c], eax */
  W32((uint32_t)(0x4d110cu), eax);
/* 488dc4: call 0x488d51 */
  esp -= 4; W32(esp, 0x488dc9u); SPILL(); f_488d51(); if (g_unwind) return; RELOAD();
/* 488dc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488dca: call 0x461c65 */
  esp -= 4; W32(esp, 0x488dcfu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 488dcf: mov eax, dword ptr [0x4d110c] */
  eax = R32((uint32_t)(0x4d110cu));
/* 488dd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488dd6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488dd7: jne 0x488db9 */
  if (!zf) goto L_488db9;
L_488dd9: /* 488dd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_488dda: /* 488dda: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 488ddd: call 0x4613d8 */
  esp -= 4; W32(esp, 0x488de2u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 488de2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 488de3: ret  */
  esp += 4; SPILL(); return;
}

void f_488de4(void) {
  LOAD_REGS();
L_488de4: /* 488de4: cmp dword ptr [0x4d110c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d110cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488deb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488dec: mov esi, ecx */
  esi = ecx;
/* 488dee: jne 0x488dfb */
  if (!zf) goto L_488dfb;
L_488df0: /* 488df0: push 0x488da1 */
  { uint32_t v = 0x488da1u; esp -= 4; W32(esp, v); }
/* 488df5: call 0x46266b */
  esp -= 4; W32(esp, 0x488dfau); SPILL(); f_46266b(); if (g_unwind) return; RELOAD();
/* 488dfa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_488dfb: /* 488dfb: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 488dfd: call 0x4620da */
  esp -= 4; W32(esp, 0x488e02u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 488e02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488e04: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488e05: je 0x488e14 */
  if (zf) goto L_488e14;
L_488e07: /* 488e07: mov ecx, dword ptr [0x4d110c] */
  ecx = R32((uint32_t)(0x4d110cu));
/* 488e0d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 488e0f: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 488e12: jmp 0x488e16 */
  goto L_488e16;
L_488e14: /* 488e14: xor eax, eax */
  eax = 0;
L_488e16: /* 488e16: mov dword ptr [0x4d110c], eax */
  W32((uint32_t)(0x4d110cu), eax);
/* 488e1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488e1c: ret  */
  esp += 4; SPILL(); return;
}

void f_488e1d(void) {
  LOAD_REGS();
L_488e1d: /* 488e1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488e1e: mov esi, ecx */
  esi = ecx;
/* 488e20: cmp dword ptr [esi + 0x50], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x50u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 488e24: jbe 0x488e3f */
  if ((cf | zf)) goto L_488e3f;
L_488e26: /* 488e26: cmp dword ptr [esi + 0x54], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x54u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 488e2a: jb 0x488e31 */
  if (cf) goto L_488e31;
L_488e2c: /* 488e2c: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 488e2f: jmp 0x488e34 */
  goto L_488e34;
L_488e31: /* 488e31: lea eax, [esi + 0x40] */
  eax = (uint32_t)(esi + 0x40u);
L_488e34: /* 488e34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488e35: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 488e37: call dword ptr [0x48e0d8] */
  esp -= 4; W32(esp, 0x488e3du); SPILL(); f_405e8c(); if (g_unwind) return; /* MSVCR70!setlocale */ RELOAD();
/* 488e3d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488e3e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_488e3f: /* 488e3f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 488e41: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 488e44: call 0x461ea8 */
  esp -= 4; W32(esp, 0x488e49u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 488e49: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 488e4b: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 488e4e: call 0x461ea8 */
  esp -= 4; W32(esp, 0x488e53u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 488e53: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 488e55: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 488e58: call 0x461ea8 */
  esp -= 4; W32(esp, 0x488e5du); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 488e5d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 488e5f: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 488e62: call 0x461ea8 */
  esp -= 4; W32(esp, 0x488e67u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 488e67: mov ecx, esi */
  ecx = esi;
/* 488e69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488e6a: jmp 0x4613d8 */
  SPILL(); f_4613d8(); return;
}

void f_488e6f(void) {
  LOAD_REGS();
L_488e6f: /* 488e6f: mov eax, 0x48dcfd */
  eax = 0x48dcfdu;
/* 488e74: call 0x4616c0 */
  esp -= 4; W32(esp, 0x488e79u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 488e79: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 488e7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488e7d: mov esi, ecx */
  esi = ecx;
/* 488e7f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 488e81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488e82: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 488e85: cmp eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488e87: je 0x488f08 */
  if (zf) goto L_488f08;
L_488e89: /* 488e89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 488e8a: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 488e8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488e8e: call 0x467963 */
  esp -= 4; W32(esp, 0x488e93u); SPILL(); f_467963(); if (g_unwind) return; RELOAD();
/* 488e93: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 488e97: push 0x48e1bc */
  { uint32_t v = 0x48e1bcu; esp -= 4; W32(esp, v); }
/* 488e9c: mov ecx, eax */
  ecx = eax;
/* 488e9e: call 0x465c09 */
  esp -= 4; W32(esp, 0x488ea3u); SPILL(); f_465c09(); if (g_unwind) return; RELOAD();
/* 488ea3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488ea5: je 0x488ef3 */
  if (zf) goto L_488ef3;
L_488ea7: /* 488ea7: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 488eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488eab: mov ecx, edi */
  ecx = edi;
/* 488ead: call 0x467963 */
  esp -= 4; W32(esp, 0x488eb2u); SPILL(); f_467963(); if (g_unwind) return; RELOAD();
/* 488eb2: mov edi, eax */
  edi = eax;
/* 488eb4: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 488eb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488eb8: mov ecx, esi */
  ecx = esi;
/* 488eba: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 488ebe: call 0x467963 */
  esp -= 4; W32(esp, 0x488ec3u); SPILL(); f_467963(); if (g_unwind) return; RELOAD();
/* 488ec3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488ec4: mov ecx, eax */
  ecx = eax;
/* 488ec6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 488eca: call 0x465b98 */
  esp -= 4; W32(esp, 0x488ecfu); SPILL(); f_465b98(); if (g_unwind) return; RELOAD();
/* 488ecf: mov ebx, eax */
  ebx = eax;
/* 488ed1: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ebx = r;
  }
/* 488ed3: sbb bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a - b - cin);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 488ed5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 488ed7: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 488eda: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 488edc: call 0x461ea8 */
  esp -= 4; W32(esp, 0x488ee1u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 488ee1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 488ee3: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 488ee6: call 0x461ea8 */
  esp -= 4; W32(esp, 0x488eebu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 488eeb: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 488eed: je 0x488ef3 */
  if (zf) goto L_488ef3;
L_488eef: /* 488eef: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 488ef1: jmp 0x488ef5 */
  goto L_488ef5;
L_488ef3: /* 488ef3: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_488ef5: /* 488ef5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 488ef7: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 488efa: call 0x461ea8 */
  esp -= 4; W32(esp, 0x488effu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 488eff: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 488f01: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 488f02: jne 0x488f08 */
  if (!zf) goto L_488f08;
L_488f04: /* 488f04: xor eax, eax */
  eax = 0;
/* 488f06: jmp 0x488f0b */
  goto L_488f0b;
L_488f08: /* 488f08: xor eax, eax */
  eax = 0;
/* 488f0a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_488f0b: /* 488f0b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 488f0e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 488f0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488f10: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 488f17: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 488f18: ret 4 */
  esp += 8; SPILL(); return;
}

void f_488f1b(void) {
  LOAD_REGS();
L_488f1b: /* 488f1b: mov eax, 0x48dd4d */
  eax = 0x48dd4du;
/* 488f20: call 0x4616c0 */
  esp -= 4; W32(esp, 0x488f25u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 488f25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 488f26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 488f27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488f28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488f29: mov esi, ecx */
  esi = ecx;
/* 488f2b: xor edi, edi */
  edi = 0;
/* 488f2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488f2e: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 488f31: call 0x4612ba */
  esp -= 4; W32(esp, 0x488f36u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 488f36: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 488f39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488f3a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 488f3d: call 0x461ea8 */
  esp -= 4; W32(esp, 0x488f42u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 488f42: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 488f45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488f46: call 0x461ea8 */
  esp -= 4; W32(esp, 0x488f4bu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 488f4b: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 488f4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488f4f: call 0x461ea8 */
  esp -= 4; W32(esp, 0x488f54u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 488f54: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 488f57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488f58: call 0x461ea8 */
  esp -= 4; W32(esp, 0x488f5du); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 488f5d: mov ebx, dword ptr [0x48e0d8] */
  ebx = R32((uint32_t)(0x48e0d8u));
/* 488f63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488f64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488f65: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 488f69: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488f6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488f6b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488f6c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488f6e: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 488f71: call 0x46174a */
  esp -= 4; W32(esp, 0x488f76u); SPILL(); f_46174a(); if (g_unwind) return; RELOAD();
/* 488f76: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488f79: je 0x488f87 */
  if (zf) goto L_488f87;
L_488f7b: /* 488f7b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 488f7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 488f7f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x488f81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 488f81: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 488f83: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488f84: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488f85: jne 0x488f8c */
  if (!zf) goto L_488f8c;
L_488f87: /* 488f87: mov eax, 0x48e1bc */
  eax = 0x48e1bcu;
L_488f8c: /* 488f8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 488f8d: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 488f90: call 0x46174a */
  esp -= 4; W32(esp, 0x488f95u); SPILL(); f_46174a(); if (g_unwind) return; RELOAD();
/* 488f95: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 488f98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 488f99: mov eax, esi */
  eax = esi;
/* 488f9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 488f9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 488f9d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 488fa4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 488fa5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_488fa8(void) {
  LOAD_REGS();
L_488fa8: /* 488fa8: call 0x461689 */
  esp -= 4; W32(esp, 0x488fadu); SPILL(); f_461689(); if (g_unwind) return; RELOAD();
/* 488fad: mov eax, 0x4d0e40 */
  eax = 0x4d0e40u;
/* 488fb2: ret  */
  esp += 4; SPILL(); return;
}

void f_488fb3(void) {
  LOAD_REGS();
L_488fb3: /* 488fb3: mov eax, 0x48dd7d */
  eax = 0x48dd7du;
/* 488fb8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x488fbdu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 488fbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 488fbe: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 488fc2: call 0x461689 */
  esp -= 4; W32(esp, 0x488fc7u); SPILL(); f_461689(); if (g_unwind) return; RELOAD();
/* 488fc7: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 488fc9: call 0x4620da */
  esp -= 4; W32(esp, 0x488fceu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 488fce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 488fcf: mov ecx, eax */
  ecx = eax;
/* 488fd1: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 488fd4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 488fd8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 488fda: je 0x488fe5 */
  if (zf) goto L_488fe5;
L_488fdc: /* 488fdc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 488fde: call 0x4616df */
  esp -= 4; W32(esp, 0x488fe3u); SPILL(); f_4616df(); if (g_unwind) return; RELOAD();
/* 488fe3: jmp 0x488fe7 */
  goto L_488fe7;
L_488fe5: /* 488fe5: xor eax, eax */
  eax = 0;
L_488fe7: /* 488fe7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 488fea: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 488fec: mov eax, ecx */
  eax = ecx;
/* 488fee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 488ff1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 488ff8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 488ff9: ret  */
  esp += 4; SPILL(); return;
}

void f_488ffa(void) {
  LOAD_REGS();
L_488ffa: /* 488ffa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 488ffb: mov esi, ecx */
  esi = ecx;
/* 488ffd: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 489000: push 0x4d0e48 */
  { uint32_t v = 0x4d0e48u; esp -= 4; W32(esp, v); }
/* 489005: call 0x4612dd */
  esp -= 4; W32(esp, 0x48900au); SPILL(); f_4612dd(); if (g_unwind) return; RELOAD();
/* 48900a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48900b: mov eax, esi */
  eax = esi;
/* 48900d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48900e: ret  */
  esp += 4; SPILL(); return;
}

void f_48900f(void) {
  LOAD_REGS();
L_48900f: /* 48900f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 489010: mov ebp, esp */
  ebp = esp;
/* 489012: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 489015: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489016: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 489019: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48901b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48901c: jne 0x48902f */
  if (!zf) goto L_48902f;
L_48901e: /* 48901e: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x489024u); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 489024: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 489027: call dword ptr [0x48e108] */
  esp -= 4; W32(esp, 0x48902du); SPILL(); f_412fcc(); if (g_unwind) return; /* MSVCR70!___lc_codepage_func */ RELOAD();
/* 48902d: jmp 0x489034 */
  goto L_489034;
L_48902f: /* 48902f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 489031: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
L_489034: /* 489034: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489036: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 489039: jne 0x489058 */
  if (!zf) goto L_489058;
L_48903b: /* 48903b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48903e: cmp eax, 0x61 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 489041: jl 0x4890f7 */
  if ((sf != of)) goto L_4890f7;
L_489047: /* 489047: cmp eax, 0x7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48904a: jg 0x4890f7 */
  if ((!zf && sf == of)) goto L_4890f7;
L_489050: /* 489050: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 489053: jmp 0x4890f7 */
  goto L_4890f7;
L_489058: /* 489058: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 489059: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 48905c: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 489062: jae 0x489089 */
  if (!cf) goto L_489089;
L_489064: /* 489064: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489066: jne 0x489078 */
  if (!zf) goto L_489078;
L_489068: /* 489068: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 489069: call dword ptr [0x48e130] */
  esp -= 4; W32(esp, 0x48906fu); SPILL(); f_41540f(); if (g_unwind) return; /* MSVCR70!islower */ RELOAD();
/* 48906f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489071: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489072: jne 0x489089 */
  if (!zf) goto L_489089;
L_489074: /* 489074: mov eax, ebx */
  eax = ebx;
/* 489076: jmp 0x4890f6 */
  goto L_4890f6;
L_489078: /* 489078: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 48907b: xor ecx, ecx */
  ecx = 0;
/* 48907d: cmp word ptr [eax + ebx*2], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + ebx*2))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 489081: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 489084: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 489087: jne 0x489074 */
  if (!zf) goto L_489074;
L_489089: /* 489089: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 48908c: sar dword ptr [ebp - 8], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 489090: call dword ptr [0x48e104] */
  esp -= 4; W32(esp, 0x489096u); SPILL(); f_41253b(); if (g_unwind) return; /* MSVCR70!__pctype_func */ RELOAD();
/* 489096: mov ecx, eax */
  ecx = eax;
/* 489098: mov al, byte ptr [ebp - 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xfffffff8u))) & 0xffu);
/* 48909b: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 48909e: test byte ptr [ecx + edx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + edx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4890a3: je 0x4890b4 */
  if (zf) goto L_4890b4;
L_4890a5: /* 4890a5: and byte ptr [ebp + 0xe], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xeu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xeu), r);
  }
/* 4890a9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4890ab: mov byte ptr [ebp + 0xc], al */
  W8((uint32_t)(ebp + 0xcu), (eax & 0xffu));
/* 4890ae: mov byte ptr [ebp + 0xd], bl */
  W8((uint32_t)(ebp + 0xdu), (ebx & 0xffu));
/* 4890b1: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4890b2: jmp 0x4890be */
  goto L_4890be;
L_4890b4: /* 4890b4: and byte ptr [ebp + 0xd], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xdu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xdu), r);
  }
/* 4890b8: xor eax, eax */
  eax = 0;
/* 4890ba: mov byte ptr [ebp + 0xc], bl */
  W8((uint32_t)(ebp + 0xcu), (ebx & 0xffu));
/* 4890bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_4890be: /* 4890be: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4890c0: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 4890c3: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 4890c6: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4890c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4890c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4890ca: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 4890cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4890ce: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 4890d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4890d4: call 0x48bf3e */
  esp -= 4; W32(esp, 0x4890d9u); SPILL(); f_48bf3e(); if (g_unwind) return; RELOAD();
/* 4890d9: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4890dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4890de: je 0x489074 */
  if (zf) goto L_489074;
L_4890e0: /* 4890e0: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4890e3: jne 0x4890eb */
  if (!zf) goto L_4890eb;
L_4890e5: /* 4890e5: movzx eax, byte ptr [ebp - 4] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu)));
/* 4890e9: jmp 0x4890f6 */
  goto L_4890f6;
L_4890eb: /* 4890eb: movzx ecx, byte ptr [ebp - 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffdu)));
/* 4890ef: xor eax, eax */
  eax = 0;
/* 4890f1: mov ah, byte ptr [ebp - 4] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu))) & 0xffu) << 8);
/* 4890f4: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4890f6: /* 4890f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4890f7: /* 4890f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4890f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4890f9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4890fa: ret  */
  esp += 4; SPILL(); return;
}

void f_4890fb(void) {
  LOAD_REGS();
L_4890fb: /* 4890fb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4890fc: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 489100: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489102: jne 0x48910f */
  if (!zf) goto L_48910f;
L_489104: /* 489104: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x48910au); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 48910a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 48910d: jmp 0x489112 */
  goto L_489112;
L_48910f: /* 48910f: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
L_489112: /* 489112: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489114: jne 0x489129 */
  if (!zf) goto L_489129;
L_489116: /* 489116: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 48911a: cmp eax, 0x61 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48911d: jl 0x489185 */
  if ((sf != of)) goto L_489185;
L_48911f: /* 48911f: cmp eax, 0x7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 489122: jg 0x489185 */
  if ((!zf && sf == of)) goto L_489185;
L_489124: /* 489124: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 489127: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 489128: ret  */
  esp += 4; SPILL(); return;
L_489129: /* 489129: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48912a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48912b: mov esi, dword ptr [0x48e11c] */
  esi = R32((uint32_t)(0x48e11cu));
/* 489131: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 489132: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x489134u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 489134: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489135: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x48913bu); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 48913b: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x489141u); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 489141: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489143: mov ebx, dword ptr [0x48e034] */
  ebx = R32((uint32_t)(0x48e034u));
/* 489149: je 0x48915d */
  if (zf) goto L_48915d;
L_48914b: /* 48914b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x48914du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48914d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48914e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x489150u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 489150: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 489152: call 0x48bf32 */
  esp -= 4; W32(esp, 0x489157u); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 489157: xor edi, edi */
  edi = 0;
/* 489159: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48915a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 48915b: jmp 0x48915f */
  goto L_48915f;
L_48915d: /* 48915d: xor edi, edi */
  edi = 0;
L_48915f: /* 48915f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 489160: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 489164: call 0x48900f */
  esp -= 4; W32(esp, 0x489169u); SPILL(); f_48900f(); if (g_unwind) return; RELOAD();
/* 489169: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48916b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48916c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48916d: mov ebp, eax */
  ebp = eax;
/* 48916f: je 0x48917b */
  if (zf) goto L_48917b;
L_489171: /* 489171: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 489173: call 0x48bf2c */
  esp -= 4; W32(esp, 0x489178u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 489178: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489179: jmp 0x489180 */
  goto L_489180;
L_48917b: /* 48917b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x48917du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48917d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48917e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x489180u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_489180: /* 489180: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 489181: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 489182: mov eax, ebp */
  eax = ebp;
/* 489184: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_489185: /* 489185: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 489186: ret  */
  esp += 4; SPILL(); return;
}

void f_489187(void) {
  LOAD_REGS();
L_489187: /* 489187: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 489188: mov ebp, esp */
  ebp = esp;
/* 48918a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 48918d: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 48918f: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 489192: lea eax, [ebp + 0xe] */
  eax = (uint32_t)(ebp + 0xeu);
/* 489195: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489196: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 489198: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48919b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48919c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48919e: call 0x48bf44 */
  esp -= 4; W32(esp, 0x4891a3u); SPILL(); f_48bf44(); if (g_unwind) return; RELOAD();
/* 4891a3: movsx ecx, word ptr [ebp + 0xe] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xeu)));
/* 4891a7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4891aa: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4891ac: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4891ae: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4891b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4891b1: ret  */
  esp += 4; SPILL(); return;
}

void f_4891b2(void) {
  LOAD_REGS();
L_4891b2: /* 4891b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4891b3: mov ebp, esp */
  ebp = esp;
/* 4891b5: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4891b8: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 4891ba: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 4891bd: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4891c0: sub eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4891c3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4891c6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4891c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4891c9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4891cc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4891ce: call 0x48bf44 */
  esp -= 4; W32(esp, 0x4891d3u); SPILL(); f_48bf44(); if (g_unwind) return; RELOAD();
/* 4891d3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4891d6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4891d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4891da: ret  */
  esp += 4; SPILL(); return;
}

void f_4891db(void) {
  LOAD_REGS();
L_4891db: /* 4891db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4891dc: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4891de: mov esi, ecx */
  esi = ecx;
/* 4891e0: call 0x4620da */
  esp -= 4; W32(esp, 0x4891e5u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 4891e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4891e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4891e8: je 0x4891ff */
  if (zf) goto L_4891ff;
L_4891ea: /* 4891ea: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 4891ed: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4891ef: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4891f3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4891f6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4891fa: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4891fd: jmp 0x489201 */
  goto L_489201;
L_4891ff: /* 4891ff: xor eax, eax */
  eax = 0;
L_489201: /* 489201: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 489204: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 489205: ret 8 */
  esp += 12; SPILL(); return;
}

void f_489208(void) {
  LOAD_REGS();
L_489208: /* 489208: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 489209: mov ebp, esp */
  ebp = esp;
/* 48920b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48920c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48920d: mov esi, ecx */
  esi = ecx;
/* 48920f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 489211: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 489214: call 0x4612ba */
  esp -= 4; W32(esp, 0x489219u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 489219: inc dword ptr [esi + 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x24u), r);
  }
/* 48921c: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 48921f: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 489222: jae 0x48923f */
  if (!cf) goto L_48923f;
L_489224: /* 489224: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 489227: mov eax, dword ptr [eax*4 + 0x4d1110] */
  eax = R32((uint32_t)(eax*4 + 0x4d1110u));
/* 48922e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489230: je 0x48923f */
  if (zf) goto L_48923f;
L_489232: /* 489232: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489234: je 0x48923f */
  if (zf) goto L_48923f;
L_489236: /* 489236: inc dword ptr [esi + 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x24u), r);
  }
/* 489239: cmp dword ptr [esi + 0x24], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 48923d: jb 0x489224 */
  if (cf) goto L_489224;
L_48923f: /* 48923f: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 489242: mov dword ptr [eax*4 + 0x4d1110], esi */
  W32((uint32_t)(eax*4 + 0x4d1110u), esi);
/* 489249: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 48924c: inc byte ptr [esi + 0x4d1138] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4d1138u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(esi + 0x4d1138u), r);
  }
/* 489252: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 489255: call 0x4613d8 */
  esp -= 4; W32(esp, 0x48925au); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 48925a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48925b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48925c: ret  */
  esp += 4; SPILL(); return;
}

void f_48925d(void) {
  LOAD_REGS();
L_48925d: /* 48925d: mov eax, 0x48dd8f */
  eax = 0x48dd8fu;
/* 489262: call 0x4616c0 */
  esp -= 4; W32(esp, 0x489267u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 489267: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 489268: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 48926c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48926d: mov esi, ecx */
  esi = ecx;
/* 48926f: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 489272: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 489273: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 489275: mov ecx, edi */
  ecx = edi;
/* 489277: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 48927a: call 0x461292 */
  esp -= 4; W32(esp, 0x48927fu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 48927f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 489282: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 489285: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489289: call 0x464063 */
  esp -= 4; W32(esp, 0x48928eu); SPILL(); f_464063(); if (g_unwind) return; RELOAD();
/* 48928e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 489290: mov ecx, esi */
  ecx = esi;
/* 489292: call 0x461c9f */
  esp -= 4; W32(esp, 0x489297u); SPILL(); f_461c9f(); if (g_unwind) return; RELOAD();
/* 489297: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 48929a: mov ecx, edi */
  ecx = edi;
/* 48929c: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 48929e: call 0x461292 */
  esp -= 4; W32(esp, 0x4892a3u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 4892a3: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4892a6: call 0x461389 */
  esp -= 4; W32(esp, 0x4892abu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4892ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4892ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4892af: mov eax, esi */
  eax = esi;
/* 4892b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4892b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4892b9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4892ba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4892bd(void) {
  LOAD_REGS();
L_4892bd: /* 4892bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4892be: mov esi, ecx */
  esi = ecx;
/* 4892c0: call 0x4892d9 */
  esp -= 4; W32(esp, 0x4892c5u); SPILL(); f_4892d9(); if (g_unwind) return; RELOAD();
/* 4892c5: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4892ca: je 0x4892d3 */
  if (zf) goto L_4892d3;
L_4892cc: /* 4892cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4892cd: call 0x461c65 */
  esp -= 4; W32(esp, 0x4892d2u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 4892d2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4892d3: /* 4892d3: mov eax, esi */
  eax = esi;
/* 4892d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4892d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4892d9(void) {
  LOAD_REGS();
L_4892d9: /* 4892d9: mov dword ptr [ecx], 0x4c90d4 */
  W32((uint32_t)(ecx), 0x4c90d4u);
/* 4892df: jmp 0x486d05 */
  SPILL(); f_486d05(); return;
}

void f_4892e4(void) {
  LOAD_REGS();
L_4892e4: /* 4892e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4892e5: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4892e9: mov esi, ecx */
  esi = ecx;
/* 4892eb: call 0x487377 */
  esp -= 4; W32(esp, 0x4892f0u); SPILL(); f_487377(); if (g_unwind) return; RELOAD();
/* 4892f0: mov dword ptr [esi], 0x4c90d4 */
  W32((uint32_t)(esi), 0x4c90d4u);
/* 4892f6: mov eax, esi */
  eax = esi;
/* 4892f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4892f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4892fc(void) {
  LOAD_REGS();
L_4892fc: /* 4892fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4892fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4892fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4892ff: xor edi, edi */
  edi = 0;
/* 489301: test byte ptr [0x4d1154], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x4d1154u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 489308: mov esi, ecx */
  esi = ecx;
/* 48930a: jne 0x48932b */
  if (!zf) goto L_48932b;
L_48930c: /* 48930c: or dword ptr [0x4d1154], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d1154u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x4d1154u), r);
  }
/* 489313: mov dword ptr [0x4d1144], edi */
  W32((uint32_t)(0x4d1144u), edi);
/* 489319: mov dword ptr [0x4d1148], edi */
  W32((uint32_t)(0x4d1148u), edi);
/* 48931f: mov dword ptr [0x4d114c], edi */
  W32((uint32_t)(0x4d114cu), edi);
/* 489325: mov dword ptr [0x4d1150], edi */
  W32((uint32_t)(0x4d1150u), edi);
L_48932b: /* 48932b: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 48932f: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 489331: jge 0x489349 */
  if ((sf == of)) goto L_489349;
L_489333: /* 489333: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 489336: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 489337: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48933a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48933b: mov ecx, esi */
  ecx = esi;
/* 48933d: call 0x461bc5 */
  esp -= 4; W32(esp, 0x489342u); SPILL(); f_461bc5(); if (g_unwind) return; RELOAD();
/* 489342: mov eax, 0x4d1144 */
  eax = 0x4d1144u;
/* 489347: jmp 0x489399 */
  goto L_489399;
L_489349: /* 489349: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 48934c: xor ecx, ecx */
  ecx = 0;
/* 48934e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489350: je 0x489378 */
  if (zf) goto L_489378;
L_489352: /* 489352: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489355: je 0x489399 */
  if (zf) goto L_489399;
L_489357: /* 489357: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489359: jne 0x489367 */
  if (!zf) goto L_489367;
L_48935b: /* 48935b: cmp dword ptr [eax + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48935e: jne 0x489367 */
  if (!zf) goto L_489367;
L_489360: /* 489360: cmp dword ptr [eax + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489363: jne 0x489367 */
  if (!zf) goto L_489367;
L_489365: /* 489365: mov ecx, eax */
  ecx = eax;
L_489367: /* 489367: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 489369: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48936b: jne 0x489352 */
  if (!zf) goto L_489352;
L_48936d: /* 48936d: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48936f: je 0x489378 */
  if (zf) goto L_489378;
L_489371: /* 489371: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 489374: mov eax, ecx */
  eax = ecx;
/* 489376: jmp 0x489399 */
  goto L_489399;
L_489378: /* 489378: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 48937a: call 0x4620da */
  esp -= 4; W32(esp, 0x48937fu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48937f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489381: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489382: je 0x489394 */
  if (zf) goto L_489394;
L_489384: /* 489384: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 489387: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 489389: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 48938c: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 48938f: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 489392: jmp 0x489396 */
  goto L_489396;
L_489394: /* 489394: xor eax, eax */
  eax = 0;
L_489396: /* 489396: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
L_489399: /* 489399: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48939a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48939b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48939c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_48939f(void) {
  LOAD_REGS();
L_48939f: /* 48939f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4893a0: mov ebp, esp */
  ebp = esp;
/* 4893a2: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4893a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4893a6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4893a9: call 0x4892e4 */
  esp -= 4; W32(esp, 0x4893aeu); SPILL(); f_4892e4(); if (g_unwind) return; RELOAD();
/* 4893ae: push 0x4ce4c0 */
  { uint32_t v = 0x4ce4c0u; esp -= 4; W32(esp, v); }
/* 4893b3: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 4893b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4893b7: call 0x48bed8 */
  esp -= 4; W32(esp, 0x4893bcu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_4893bc(); return;
}

void f_4893bc(void) {
  LOAD_REGS();
L_4893bc: /* 4893bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4893bd: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 4893c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4893c2: mov edi, ecx */
  edi = ecx;
/* 4893c4: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4893c6: je 0x489454 */
  if (zf) goto L_489454;
L_4893cc: /* 4893cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4893cd: call 0x461c73 */
  esp -= 4; W32(esp, 0x4893d2u); SPILL(); f_461c73(); if (g_unwind) return; RELOAD();
/* 4893d2: push dword ptr [ebx + 0x20] */
  { uint32_t v = R32((uint32_t)(ebx + 0x20u)); esp -= 4; W32(esp, v); }
/* 4893d5: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 4893d8: call 0x464063 */
  esp -= 4; W32(esp, 0x4893ddu); SPILL(); f_464063(); if (g_unwind) return; RELOAD();
/* 4893dd: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 4893e0: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 4893e3: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 4893e6: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 4893e9: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 4893ec: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 4893ef: mov esi, dword ptr [ebx + 0x18] */
  esi = R32((uint32_t)(ebx + 0x18u));
/* 4893f2: and dword ptr [edi + 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edi + 0x18u), r);
  }
/* 4893f6: jmp 0x489426 */
  goto L_489426;
L_4893f8: /* 4893f8: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4893fc: jne 0x489404 */
  if (!zf) goto L_489404;
L_4893fe: /* 4893fe: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489402: je 0x489424 */
  if (zf) goto L_489424;
L_489404: /* 489404: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 489407: mov ecx, edi */
  ecx = edi;
/* 489409: call 0x4892fc */
  esp -= 4; W32(esp, 0x48940eu); SPILL(); f_4892fc(); if (g_unwind) return; RELOAD();
/* 48940e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 489411: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 489414: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 489417: mov ecx, edi */
  ecx = edi;
/* 489419: call 0x4892fc */
  esp -= 4; W32(esp, 0x48941eu); SPILL(); f_4892fc(); if (g_unwind) return; RELOAD();
/* 48941e: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 489421: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_489424: /* 489424: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
L_489426: /* 489426: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489428: jne 0x4893f8 */
  if (!zf) goto L_4893f8;
L_48942a: /* 48942a: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
/* 48942d: jmp 0x48943c */
  goto L_48943c;
L_48942f: /* 48942f: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 489432: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 489435: call 0x4891db */
  esp -= 4; W32(esp, 0x48943au); SPILL(); f_4891db(); if (g_unwind) return; RELOAD();
/* 48943a: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
L_48943c: /* 48943c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48943e: mov ecx, edi */
  ecx = edi;
/* 489440: jne 0x48942f */
  if (!zf) goto L_48942f;
L_489442: /* 489442: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 489444: call 0x461c9f */
  esp -= 4; W32(esp, 0x489449u); SPILL(); f_461c9f(); if (g_unwind) return; RELOAD();
/* 489449: push dword ptr [ebx + 8] */
  { uint32_t v = R32((uint32_t)(ebx + 0x8u)); esp -= 4; W32(esp, v); }
/* 48944c: mov ecx, edi */
  ecx = edi;
/* 48944e: call 0x4649cc */
  esp -= 4; W32(esp, 0x489453u); SPILL(); f_4649cc(); if (g_unwind) return; RELOAD();
/* 489453: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_489454: /* 489454: mov eax, edi */
  eax = edi;
/* 489456: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 489457: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 489458: ret 4 */
  esp += 8; SPILL(); return;
}

void f_48945b(void) {
  LOAD_REGS();
L_48945b: /* 48945b: mov eax, 0x48ddc6 */
  eax = 0x48ddc6u;
/* 489460: call 0x4616c0 */
  esp -= 4; W32(esp, 0x489465u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 489465: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 489468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48946b: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48946e: call 0x4612ba */
  esp -= 4; W32(esp, 0x489473u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 489473: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489477: mov ecx, 0x4d0ec8 */
  ecx = 0x4d0ec8u;
/* 48947c: call 0x464006 */
  esp -= 4; W32(esp, 0x489481u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489481: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 489484: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489485: call 0x488d6c */
  esp -= 4; W32(esp, 0x48948au); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 48948a: mov esi, eax */
  esi = eax;
/* 48948c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48948e: jne 0x4894e2 */
  if (!zf) goto L_4894e2;
L_489490: /* 489490: mov eax, dword ptr [0x4d1158] */
  eax = R32((uint32_t)(0x4d1158u));
/* 489495: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489497: je 0x48949d */
  if (zf) goto L_48949d;
L_489499: /* 489499: mov esi, eax */
  esi = eax;
/* 48949b: jmp 0x4894e2 */
  goto L_4894e2;
L_48949d: /* 48949d: push 0x4d1158 */
  { uint32_t v = 0x4d1158u; esp -= 4; W32(esp, v); }
/* 4894a2: call 0x46a9b5 */
  esp -= 4; W32(esp, 0x4894a7u); SPILL(); f_46a9b5(); if (g_unwind) return; RELOAD();
/* 4894a7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4894aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4894ab: jne 0x4894c9 */
  if (!zf) goto L_4894c9;
L_4894ad: /* 4894ad: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 4894b2: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4894b5: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x4894bbu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 4894bb: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 4894c0: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4894c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4894c4: call 0x48bed8 */
  esp -= 4; W32(esp, 0x4894c9u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_4894c9: /* 4894c9: mov eax, dword ptr [0x4d1158] */
  eax = R32((uint32_t)(0x4d1158u));
/* 4894ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4894cf: mov edi, eax */
  edi = eax;
/* 4894d1: mov ecx, edi */
  ecx = edi;
/* 4894d3: mov esi, eax */
  esi = eax;
/* 4894d5: call 0x461292 */
  esp -= 4; W32(esp, 0x4894dau); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 4894da: mov ecx, edi */
  ecx = edi;
/* 4894dc: call 0x488de4 */
  esp -= 4; W32(esp, 0x4894e1u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 4894e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4894e2: /* 4894e2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4894e6: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4894e9: call 0x4613d8 */
  esp -= 4; W32(esp, 0x4894eeu); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 4894ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4894f1: mov eax, esi */
  eax = esi;
/* 4894f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4894f4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4894fb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4894fc: ret  */
  esp += 4; SPILL(); return;
}

void f_4894fd(void) {
  LOAD_REGS();
L_4894fd: /* 4894fd: mov eax, 0x48ddc6 */
  eax = 0x48ddc6u;
/* 489502: call 0x4616c0 */
  esp -= 4; W32(esp, 0x489507u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 489507: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48950a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48950b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48950d: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 489510: call 0x4612ba */
  esp -= 4; W32(esp, 0x489515u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 489515: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489519: mov ecx, 0x4d0ed0 */
  ecx = 0x4d0ed0u;
/* 48951e: call 0x464006 */
  esp -= 4; W32(esp, 0x489523u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489523: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 489526: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489527: call 0x488d6c */
  esp -= 4; W32(esp, 0x48952cu); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 48952c: mov esi, eax */
  esi = eax;
/* 48952e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489530: jne 0x489584 */
  if (!zf) goto L_489584;
L_489532: /* 489532: mov eax, dword ptr [0x4d115c] */
  eax = R32((uint32_t)(0x4d115cu));
/* 489537: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489539: je 0x48953f */
  if (zf) goto L_48953f;
L_48953b: /* 48953b: mov esi, eax */
  esi = eax;
/* 48953d: jmp 0x489584 */
  goto L_489584;
L_48953f: /* 48953f: push 0x4d115c */
  { uint32_t v = 0x4d115cu; esp -= 4; W32(esp, v); }
/* 489544: call 0x46aa88 */
  esp -= 4; W32(esp, 0x489549u); SPILL(); f_46aa88(); if (g_unwind) return; RELOAD();
/* 489549: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48954c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48954d: jne 0x48956b */
  if (!zf) goto L_48956b;
L_48954f: /* 48954f: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 489554: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 489557: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x48955du); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 48955d: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 489562: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 489565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489566: call 0x48bed8 */
  esp -= 4; W32(esp, 0x48956bu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_48956b: /* 48956b: mov eax, dword ptr [0x4d115c] */
  eax = R32((uint32_t)(0x4d115cu));
/* 489570: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 489571: mov edi, eax */
  edi = eax;
/* 489573: mov ecx, edi */
  ecx = edi;
/* 489575: mov esi, eax */
  esi = eax;
/* 489577: call 0x461292 */
  esp -= 4; W32(esp, 0x48957cu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 48957c: mov ecx, edi */
  ecx = edi;
/* 48957e: call 0x488de4 */
  esp -= 4; W32(esp, 0x489583u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 489583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_489584: /* 489584: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489588: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48958b: call 0x4613d8 */
  esp -= 4; W32(esp, 0x489590u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 489590: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 489593: mov eax, esi */
  eax = esi;
/* 489595: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 489596: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48959d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48959e: ret  */
  esp += 4; SPILL(); return;
}

void f_48959f(void) {
  LOAD_REGS();
L_48959f: /* 48959f: mov eax, 0x48ddc6 */
  eax = 0x48ddc6u;
/* 4895a4: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4895a9u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4895a9: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4895ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4895ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4895af: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4895b2: call 0x4612ba */
  esp -= 4; W32(esp, 0x4895b7u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 4895b7: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4895bb: mov ecx, 0x4d0888 */
  ecx = 0x4d0888u;
/* 4895c0: call 0x464006 */
  esp -= 4; W32(esp, 0x4895c5u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 4895c5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4895c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4895c9: call 0x488d6c */
  esp -= 4; W32(esp, 0x4895ceu); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 4895ce: mov esi, eax */
  esi = eax;
/* 4895d0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4895d2: jne 0x489626 */
  if (!zf) goto L_489626;
L_4895d4: /* 4895d4: mov eax, dword ptr [0x4d1160] */
  eax = R32((uint32_t)(0x4d1160u));
/* 4895d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4895db: je 0x4895e1 */
  if (zf) goto L_4895e1;
L_4895dd: /* 4895dd: mov esi, eax */
  esi = eax;
/* 4895df: jmp 0x489626 */
  goto L_489626;
L_4895e1: /* 4895e1: push 0x4d1160 */
  { uint32_t v = 0x4d1160u; esp -= 4; W32(esp, v); }
/* 4895e6: call 0x46c4e2 */
  esp -= 4; W32(esp, 0x4895ebu); SPILL(); f_46c4e2(); if (g_unwind) return; RELOAD();
/* 4895eb: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4895ee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4895ef: jne 0x48960d */
  if (!zf) goto L_48960d;
L_4895f1: /* 4895f1: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 4895f6: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4895f9: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x4895ffu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 4895ff: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 489604: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 489607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489608: call 0x48bed8 */
  esp -= 4; W32(esp, 0x48960du); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_48960d: /* 48960d: mov eax, dword ptr [0x4d1160] */
  eax = R32((uint32_t)(0x4d1160u));
/* 489612: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 489613: mov edi, eax */
  edi = eax;
/* 489615: mov ecx, edi */
  ecx = edi;
/* 489617: mov esi, eax */
  esi = eax;
/* 489619: call 0x461292 */
  esp -= 4; W32(esp, 0x48961eu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 48961e: mov ecx, edi */
  ecx = edi;
/* 489620: call 0x488de4 */
  esp -= 4; W32(esp, 0x489625u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 489625: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_489626: /* 489626: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48962a: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48962d: call 0x4613d8 */
  esp -= 4; W32(esp, 0x489632u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 489632: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 489635: mov eax, esi */
  eax = esi;
/* 489637: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 489638: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48963f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 489640: ret  */
  esp += 4; SPILL(); return;
}

void f_489641(void) {
  LOAD_REGS();
L_489641: /* 489641: mov eax, 0x48ddc6 */
  eax = 0x48ddc6u;
/* 489646: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48964bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48964b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48964e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48964f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 489651: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 489654: call 0x4612ba */
  esp -= 4; W32(esp, 0x489659u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 489659: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48965d: mov ecx, 0x4d08bc */
  ecx = 0x4d08bcu;
/* 489662: call 0x464006 */
  esp -= 4; W32(esp, 0x489667u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489667: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48966a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48966b: call 0x488d6c */
  esp -= 4; W32(esp, 0x489670u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 489670: mov esi, eax */
  esi = eax;
/* 489672: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489674: jne 0x4896c8 */
  if (!zf) goto L_4896c8;
L_489676: /* 489676: mov eax, dword ptr [0x4d1164] */
  eax = R32((uint32_t)(0x4d1164u));
/* 48967b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48967d: je 0x489683 */
  if (zf) goto L_489683;
L_48967f: /* 48967f: mov esi, eax */
  esi = eax;
/* 489681: jmp 0x4896c8 */
  goto L_4896c8;
L_489683: /* 489683: push 0x4d1164 */
  { uint32_t v = 0x4d1164u; esp -= 4; W32(esp, v); }
/* 489688: call 0x46bd3b */
  esp -= 4; W32(esp, 0x48968du); SPILL(); f_46bd3b(); if (g_unwind) return; RELOAD();
/* 48968d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489690: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489691: jne 0x4896af */
  if (!zf) goto L_4896af;
L_489693: /* 489693: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 489698: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48969b: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x4896a1u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 4896a1: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 4896a6: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4896a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4896aa: call 0x48bed8 */
  esp -= 4; W32(esp, 0x4896afu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_4896af: /* 4896af: mov eax, dword ptr [0x4d1164] */
  eax = R32((uint32_t)(0x4d1164u));
/* 4896b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4896b5: mov edi, eax */
  edi = eax;
/* 4896b7: mov ecx, edi */
  ecx = edi;
/* 4896b9: mov esi, eax */
  esi = eax;
/* 4896bb: call 0x461292 */
  esp -= 4; W32(esp, 0x4896c0u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 4896c0: mov ecx, edi */
  ecx = edi;
/* 4896c2: call 0x488de4 */
  esp -= 4; W32(esp, 0x4896c7u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 4896c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4896c8: /* 4896c8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4896cc: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4896cf: call 0x4613d8 */
  esp -= 4; W32(esp, 0x4896d4u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 4896d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4896d7: mov eax, esi */
  eax = esi;
/* 4896d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4896da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4896e1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4896e2: ret  */
  esp += 4; SPILL(); return;
}

void f_4896e3(void) {
  LOAD_REGS();
L_4896e3: /* 4896e3: mov eax, 0x48ddc6 */
  eax = 0x48ddc6u;
/* 4896e8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4896edu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4896ed: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4896f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4896f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4896f3: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4896f6: call 0x4612ba */
  esp -= 4; W32(esp, 0x4896fbu); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 4896fb: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4896ff: mov ecx, 0x4d086c */
  ecx = 0x4d086cu;
/* 489704: call 0x464006 */
  esp -= 4; W32(esp, 0x489709u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489709: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48970c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48970d: call 0x488d6c */
  esp -= 4; W32(esp, 0x489712u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 489712: mov esi, eax */
  esi = eax;
/* 489714: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489716: jne 0x48976a */
  if (!zf) goto L_48976a;
L_489718: /* 489718: mov eax, dword ptr [0x4d1168] */
  eax = R32((uint32_t)(0x4d1168u));
/* 48971d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48971f: je 0x489725 */
  if (zf) goto L_489725;
L_489721: /* 489721: mov esi, eax */
  esi = eax;
/* 489723: jmp 0x48976a */
  goto L_48976a;
L_489725: /* 489725: push 0x4d1168 */
  { uint32_t v = 0x4d1168u; esp -= 4; W32(esp, v); }
/* 48972a: call 0x46bf7b */
  esp -= 4; W32(esp, 0x48972fu); SPILL(); f_46bf7b(); if (g_unwind) return; RELOAD();
/* 48972f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489732: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489733: jne 0x489751 */
  if (!zf) goto L_489751;
L_489735: /* 489735: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 48973a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48973d: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x489743u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 489743: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 489748: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 48974b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48974c: call 0x48bed8 */
  esp -= 4; W32(esp, 0x489751u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_489751: /* 489751: mov eax, dword ptr [0x4d1168] */
  eax = R32((uint32_t)(0x4d1168u));
/* 489756: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 489757: mov edi, eax */
  edi = eax;
/* 489759: mov ecx, edi */
  ecx = edi;
/* 48975b: mov esi, eax */
  esi = eax;
/* 48975d: call 0x461292 */
  esp -= 4; W32(esp, 0x489762u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 489762: mov ecx, edi */
  ecx = edi;
/* 489764: call 0x488de4 */
  esp -= 4; W32(esp, 0x489769u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 489769: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_48976a: /* 48976a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48976e: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 489771: call 0x4613d8 */
  esp -= 4; W32(esp, 0x489776u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 489776: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 489779: mov eax, esi */
  eax = esi;
/* 48977b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48977c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 489783: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 489784: ret  */
  esp += 4; SPILL(); return;
}

void f_489785(void) {
  LOAD_REGS();
L_489785: /* 489785: mov eax, 0x48ddc6 */
  eax = 0x48ddc6u;
/* 48978a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48978fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48978f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 489792: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489793: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 489795: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 489798: call 0x4612ba */
  esp -= 4; W32(esp, 0x48979du); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 48979d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4897a1: mov ecx, 0x4d0860 */
  ecx = 0x4d0860u;
/* 4897a6: call 0x464006 */
  esp -= 4; W32(esp, 0x4897abu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 4897ab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4897ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4897af: call 0x488d6c */
  esp -= 4; W32(esp, 0x4897b4u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 4897b4: mov esi, eax */
  esi = eax;
/* 4897b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4897b8: jne 0x48980c */
  if (!zf) goto L_48980c;
L_4897ba: /* 4897ba: mov eax, dword ptr [0x4d116c] */
  eax = R32((uint32_t)(0x4d116cu));
/* 4897bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4897c1: je 0x4897c7 */
  if (zf) goto L_4897c7;
L_4897c3: /* 4897c3: mov esi, eax */
  esi = eax;
/* 4897c5: jmp 0x48980c */
  goto L_48980c;
L_4897c7: /* 4897c7: push 0x4d116c */
  { uint32_t v = 0x4d116cu; esp -= 4; W32(esp, v); }
/* 4897cc: call 0x46c179 */
  esp -= 4; W32(esp, 0x4897d1u); SPILL(); f_46c179(); if (g_unwind) return; RELOAD();
/* 4897d1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4897d4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4897d5: jne 0x4897f3 */
  if (!zf) goto L_4897f3;
L_4897d7: /* 4897d7: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 4897dc: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4897df: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x4897e5u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 4897e5: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 4897ea: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4897ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4897ee: call 0x48bed8 */
  esp -= 4; W32(esp, 0x4897f3u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_4897f3: /* 4897f3: mov eax, dword ptr [0x4d116c] */
  eax = R32((uint32_t)(0x4d116cu));
/* 4897f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4897f9: mov edi, eax */
  edi = eax;
/* 4897fb: mov ecx, edi */
  ecx = edi;
/* 4897fd: mov esi, eax */
  esi = eax;
/* 4897ff: call 0x461292 */
  esp -= 4; W32(esp, 0x489804u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 489804: mov ecx, edi */
  ecx = edi;
/* 489806: call 0x488de4 */
  esp -= 4; W32(esp, 0x48980bu); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 48980b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_48980c: /* 48980c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489810: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 489813: call 0x4613d8 */
  esp -= 4; W32(esp, 0x489818u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 489818: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48981b: mov eax, esi */
  eax = esi;
/* 48981d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48981e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 489825: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 489826: ret  */
  esp += 4; SPILL(); return;
}

void f_489827(void) {
  LOAD_REGS();
L_489827: /* 489827: mov eax, 0x48ddc6 */
  eax = 0x48ddc6u;
/* 48982c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x489831u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 489831: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 489834: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489835: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 489837: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48983a: call 0x4612ba */
  esp -= 4; W32(esp, 0x48983fu); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 48983f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489843: mov ecx, 0x4d08b0 */
  ecx = 0x4d08b0u;
/* 489848: call 0x464006 */
  esp -= 4; W32(esp, 0x48984du); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48984d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 489850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489851: call 0x488d6c */
  esp -= 4; W32(esp, 0x489856u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 489856: mov esi, eax */
  esi = eax;
/* 489858: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48985a: jne 0x4898ae */
  if (!zf) goto L_4898ae;
L_48985c: /* 48985c: mov eax, dword ptr [0x4d1170] */
  eax = R32((uint32_t)(0x4d1170u));
/* 489861: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489863: je 0x489869 */
  if (zf) goto L_489869;
L_489865: /* 489865: mov esi, eax */
  esi = eax;
/* 489867: jmp 0x4898ae */
  goto L_4898ae;
L_489869: /* 489869: push 0x4d1170 */
  { uint32_t v = 0x4d1170u; esp -= 4; W32(esp, v); }
/* 48986e: call 0x46c5a6 */
  esp -= 4; W32(esp, 0x489873u); SPILL(); f_46c5a6(); if (g_unwind) return; RELOAD();
/* 489873: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489876: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489877: jne 0x489895 */
  if (!zf) goto L_489895;
L_489879: /* 489879: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 48987e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 489881: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x489887u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 489887: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 48988c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 48988f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489890: call 0x48bed8 */
  esp -= 4; W32(esp, 0x489895u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_489895: /* 489895: mov eax, dword ptr [0x4d1170] */
  eax = R32((uint32_t)(0x4d1170u));
/* 48989a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48989b: mov edi, eax */
  edi = eax;
/* 48989d: mov ecx, edi */
  ecx = edi;
/* 48989f: mov esi, eax */
  esi = eax;
/* 4898a1: call 0x461292 */
  esp -= 4; W32(esp, 0x4898a6u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 4898a6: mov ecx, edi */
  ecx = edi;
/* 4898a8: call 0x488de4 */
  esp -= 4; W32(esp, 0x4898adu); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 4898ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4898ae: /* 4898ae: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4898b2: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4898b5: call 0x4613d8 */
  esp -= 4; W32(esp, 0x4898bau); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 4898ba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4898bd: mov eax, esi */
  eax = esi;
/* 4898bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4898c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4898c7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4898c8: ret  */
  esp += 4; SPILL(); return;
}

void f_4898c9(void) {
  LOAD_REGS();
L_4898c9: /* 4898c9: mov eax, 0x48ddc6 */
  eax = 0x48ddc6u;
/* 4898ce: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4898d3u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4898d3: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4898d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4898d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4898d9: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4898dc: call 0x4612ba */
  esp -= 4; W32(esp, 0x4898e1u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 4898e1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4898e5: mov ecx, 0x4d08a8 */
  ecx = 0x4d08a8u;
/* 4898ea: call 0x464006 */
  esp -= 4; W32(esp, 0x4898efu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 4898ef: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4898f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4898f3: call 0x488d6c */
  esp -= 4; W32(esp, 0x4898f8u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 4898f8: mov esi, eax */
  esi = eax;
/* 4898fa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4898fc: jne 0x489950 */
  if (!zf) goto L_489950;
L_4898fe: /* 4898fe: mov eax, dword ptr [0x4d1174] */
  eax = R32((uint32_t)(0x4d1174u));
/* 489903: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489905: je 0x48990b */
  if (zf) goto L_48990b;
L_489907: /* 489907: mov esi, eax */
  esi = eax;
/* 489909: jmp 0x489950 */
  goto L_489950;
L_48990b: /* 48990b: push 0x4d1174 */
  { uint32_t v = 0x4d1174u; esp -= 4; W32(esp, v); }
/* 489910: call 0x46bde5 */
  esp -= 4; W32(esp, 0x489915u); SPILL(); f_46bde5(); if (g_unwind) return; RELOAD();
/* 489915: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489918: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489919: jne 0x489937 */
  if (!zf) goto L_489937;
L_48991b: /* 48991b: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 489920: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 489923: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x489929u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 489929: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 48992e: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 489931: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489932: call 0x48bed8 */
  esp -= 4; W32(esp, 0x489937u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_489937: /* 489937: mov eax, dword ptr [0x4d1174] */
  eax = R32((uint32_t)(0x4d1174u));
/* 48993c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48993d: mov edi, eax */
  edi = eax;
/* 48993f: mov ecx, edi */
  ecx = edi;
/* 489941: mov esi, eax */
  esi = eax;
/* 489943: call 0x461292 */
  esp -= 4; W32(esp, 0x489948u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 489948: mov ecx, edi */
  ecx = edi;
/* 48994a: call 0x488de4 */
  esp -= 4; W32(esp, 0x48994fu); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 48994f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_489950: /* 489950: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489954: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 489957: call 0x4613d8 */
  esp -= 4; W32(esp, 0x48995cu); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 48995c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48995f: mov eax, esi */
  eax = esi;
/* 489961: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 489962: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 489969: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48996a: ret  */
  esp += 4; SPILL(); return;
}

void f_48996b(void) {
  LOAD_REGS();
L_48996b: /* 48996b: mov eax, 0x48ddc6 */
  eax = 0x48ddc6u;
/* 489970: call 0x4616c0 */
  esp -= 4; W32(esp, 0x489975u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 489975: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 489978: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489979: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48997b: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48997e: call 0x4612ba */
  esp -= 4; W32(esp, 0x489983u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 489983: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489987: mov ecx, 0x4d0878 */
  ecx = 0x4d0878u;
/* 48998c: call 0x464006 */
  esp -= 4; W32(esp, 0x489991u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489991: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 489994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489995: call 0x488d6c */
  esp -= 4; W32(esp, 0x48999au); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 48999a: mov esi, eax */
  esi = eax;
/* 48999c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48999e: jne 0x4899f2 */
  if (!zf) goto L_4899f2;
L_4899a0: /* 4899a0: mov eax, dword ptr [0x4d1178] */
  eax = R32((uint32_t)(0x4d1178u));
/* 4899a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4899a7: je 0x4899ad */
  if (zf) goto L_4899ad;
L_4899a9: /* 4899a9: mov esi, eax */
  esi = eax;
/* 4899ab: jmp 0x4899f2 */
  goto L_4899f2;
L_4899ad: /* 4899ad: push 0x4d1178 */
  { uint32_t v = 0x4d1178u; esp -= 4; W32(esp, v); }
/* 4899b2: call 0x46c025 */
  esp -= 4; W32(esp, 0x4899b7u); SPILL(); f_46c025(); if (g_unwind) return; RELOAD();
/* 4899b7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4899ba: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4899bb: jne 0x4899d9 */
  if (!zf) goto L_4899d9;
L_4899bd: /* 4899bd: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 4899c2: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4899c5: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x4899cbu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 4899cb: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 4899d0: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4899d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4899d4: call 0x48bed8 */
  esp -= 4; W32(esp, 0x4899d9u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_4899d9: /* 4899d9: mov eax, dword ptr [0x4d1178] */
  eax = R32((uint32_t)(0x4d1178u));
/* 4899de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4899df: mov edi, eax */
  edi = eax;
/* 4899e1: mov ecx, edi */
  ecx = edi;
/* 4899e3: mov esi, eax */
  esi = eax;
/* 4899e5: call 0x461292 */
  esp -= 4; W32(esp, 0x4899eau); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 4899ea: mov ecx, edi */
  ecx = edi;
/* 4899ec: call 0x488de4 */
  esp -= 4; W32(esp, 0x4899f1u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 4899f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4899f2: /* 4899f2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4899f6: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4899f9: call 0x4613d8 */
  esp -= 4; W32(esp, 0x4899feu); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 4899fe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 489a01: mov eax, esi */
  eax = esi;
/* 489a03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 489a04: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 489a0b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 489a0c: ret  */
  esp += 4; SPILL(); return;
}

void f_489a0d(void) {
  LOAD_REGS();
L_489a0d: /* 489a0d: mov eax, 0x48ddc6 */
  eax = 0x48ddc6u;
/* 489a12: call 0x4616c0 */
  esp -= 4; W32(esp, 0x489a17u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 489a17: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 489a1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489a1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 489a1d: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 489a20: call 0x4612ba */
  esp -= 4; W32(esp, 0x489a25u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 489a25: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489a29: mov ecx, 0x4d088c */
  ecx = 0x4d088cu;
/* 489a2e: call 0x464006 */
  esp -= 4; W32(esp, 0x489a33u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489a33: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 489a36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489a37: call 0x488d6c */
  esp -= 4; W32(esp, 0x489a3cu); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 489a3c: mov esi, eax */
  esi = eax;
/* 489a3e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489a40: jne 0x489a94 */
  if (!zf) goto L_489a94;
L_489a42: /* 489a42: mov eax, dword ptr [0x4d117c] */
  eax = R32((uint32_t)(0x4d117cu));
/* 489a47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489a49: je 0x489a4f */
  if (zf) goto L_489a4f;
L_489a4b: /* 489a4b: mov esi, eax */
  esi = eax;
/* 489a4d: jmp 0x489a94 */
  goto L_489a94;
L_489a4f: /* 489a4f: push 0x4d117c */
  { uint32_t v = 0x4d117cu; esp -= 4; W32(esp, v); }
/* 489a54: call 0x46c24d */
  esp -= 4; W32(esp, 0x489a59u); SPILL(); f_46c24d(); if (g_unwind) return; RELOAD();
/* 489a59: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489a5c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489a5d: jne 0x489a7b */
  if (!zf) goto L_489a7b;
L_489a5f: /* 489a5f: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 489a64: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 489a67: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x489a6du); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 489a6d: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 489a72: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 489a75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489a76: call 0x48bed8 */
  esp -= 4; W32(esp, 0x489a7bu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_489a7b: /* 489a7b: mov eax, dword ptr [0x4d117c] */
  eax = R32((uint32_t)(0x4d117cu));
/* 489a80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 489a81: mov edi, eax */
  edi = eax;
/* 489a83: mov ecx, edi */
  ecx = edi;
/* 489a85: mov esi, eax */
  esi = eax;
/* 489a87: call 0x461292 */
  esp -= 4; W32(esp, 0x489a8cu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 489a8c: mov ecx, edi */
  ecx = edi;
/* 489a8e: call 0x488de4 */
  esp -= 4; W32(esp, 0x489a93u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 489a93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_489a94: /* 489a94: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489a98: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 489a9b: call 0x4613d8 */
  esp -= 4; W32(esp, 0x489aa0u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 489aa0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 489aa3: mov eax, esi */
  eax = esi;
/* 489aa5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 489aa6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 489aad: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 489aae: ret  */
  esp += 4; SPILL(); return;
}

void f_489aaf(void) {
  LOAD_REGS();
L_489aaf: /* 489aaf: mov eax, 0x48ddc6 */
  eax = 0x48ddc6u;
/* 489ab4: call 0x4616c0 */
  esp -= 4; W32(esp, 0x489ab9u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 489ab9: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 489abc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489abd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 489abf: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 489ac2: call 0x4612ba */
  esp -= 4; W32(esp, 0x489ac7u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 489ac7: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489acb: mov ecx, 0x4d0874 */
  ecx = 0x4d0874u;
/* 489ad0: call 0x464006 */
  esp -= 4; W32(esp, 0x489ad5u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489ad5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 489ad8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489ad9: call 0x488d6c */
  esp -= 4; W32(esp, 0x489adeu); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 489ade: mov esi, eax */
  esi = eax;
/* 489ae0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489ae2: jne 0x489b36 */
  if (!zf) goto L_489b36;
L_489ae4: /* 489ae4: mov eax, dword ptr [0x4d1180] */
  eax = R32((uint32_t)(0x4d1180u));
/* 489ae9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489aeb: je 0x489af1 */
  if (zf) goto L_489af1;
L_489aed: /* 489aed: mov esi, eax */
  esi = eax;
/* 489aef: jmp 0x489b36 */
  goto L_489b36;
L_489af1: /* 489af1: push 0x4d1180 */
  { uint32_t v = 0x4d1180u; esp -= 4; W32(esp, v); }
/* 489af6: call 0x4865ea */
  esp -= 4; W32(esp, 0x489afbu); SPILL(); f_4865ea(); if (g_unwind) return; RELOAD();
/* 489afb: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489afe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489aff: jne 0x489b1d */
  if (!zf) goto L_489b1d;
L_489b01: /* 489b01: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 489b06: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 489b09: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x489b0fu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 489b0f: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 489b14: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 489b17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489b18: call 0x48bed8 */
  esp -= 4; W32(esp, 0x489b1du); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_489b1d: /* 489b1d: mov eax, dword ptr [0x4d1180] */
  eax = R32((uint32_t)(0x4d1180u));
/* 489b22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 489b23: mov edi, eax */
  edi = eax;
/* 489b25: mov ecx, edi */
  ecx = edi;
/* 489b27: mov esi, eax */
  esi = eax;
/* 489b29: call 0x461292 */
  esp -= 4; W32(esp, 0x489b2eu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 489b2e: mov ecx, edi */
  ecx = edi;
/* 489b30: call 0x488de4 */
  esp -= 4; W32(esp, 0x489b35u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 489b35: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_489b36: /* 489b36: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489b3a: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 489b3d: call 0x4613d8 */
  esp -= 4; W32(esp, 0x489b42u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 489b42: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 489b45: mov eax, esi */
  eax = esi;
/* 489b47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 489b48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 489b4f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 489b50: ret  */
  esp += 4; SPILL(); return;
}

void f_489b51(void) {
  LOAD_REGS();
L_489b51: /* 489b51: mov eax, 0x48ddc6 */
  eax = 0x48ddc6u;
/* 489b56: call 0x4616c0 */
  esp -= 4; W32(esp, 0x489b5bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 489b5b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 489b5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489b5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 489b61: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 489b64: call 0x4612ba */
  esp -= 4; W32(esp, 0x489b69u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 489b69: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489b6d: mov ecx, 0x4d08ac */
  ecx = 0x4d08acu;
/* 489b72: call 0x464006 */
  esp -= 4; W32(esp, 0x489b77u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489b77: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 489b7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489b7b: call 0x488d6c */
  esp -= 4; W32(esp, 0x489b80u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 489b80: mov esi, eax */
  esi = eax;
/* 489b82: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489b84: jne 0x489bd8 */
  if (!zf) goto L_489bd8;
L_489b86: /* 489b86: mov eax, dword ptr [0x4d1184] */
  eax = R32((uint32_t)(0x4d1184u));
/* 489b8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 489b8d: je 0x489b93 */
  if (zf) goto L_489b93;
L_489b8f: /* 489b8f: mov esi, eax */
  esi = eax;
/* 489b91: jmp 0x489bd8 */
  goto L_489bd8;
L_489b93: /* 489b93: push 0x4d1184 */
  { uint32_t v = 0x4d1184u; esp -= 4; W32(esp, v); }
/* 489b98: call 0x4866cc */
  esp -= 4; W32(esp, 0x489b9du); SPILL(); f_4866cc(); if (g_unwind) return; RELOAD();
/* 489b9d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489ba0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489ba1: jne 0x489bbf */
  if (!zf) goto L_489bbf;
L_489ba3: /* 489ba3: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 489ba8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 489bab: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x489bb1u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 489bb1: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 489bb6: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 489bb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489bba: call 0x48bed8 */
  esp -= 4; W32(esp, 0x489bbfu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_489bbf: /* 489bbf: mov eax, dword ptr [0x4d1184] */
  eax = R32((uint32_t)(0x4d1184u));
/* 489bc4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 489bc5: mov edi, eax */
  edi = eax;
/* 489bc7: mov ecx, edi */
  ecx = edi;
/* 489bc9: mov esi, eax */
  esi = eax;
/* 489bcb: call 0x461292 */
  esp -= 4; W32(esp, 0x489bd0u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 489bd0: mov ecx, edi */
  ecx = edi;
/* 489bd2: call 0x488de4 */
  esp -= 4; W32(esp, 0x489bd7u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 489bd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_489bd8: /* 489bd8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489bdc: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 489bdf: call 0x4613d8 */
  esp -= 4; W32(esp, 0x489be4u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 489be4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 489be7: mov eax, esi */
  eax = esi;
/* 489be9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 489bea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 489bf1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 489bf2: ret  */
  esp += 4; SPILL(); return;
}

void f_489bf3(void) {
  LOAD_REGS();
L_489bf3: /* 489bf3: mov eax, 0x48ddf8 */
  eax = 0x48ddf8u;
/* 489bf8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x489bfdu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 489bfd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 489bfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 489bff: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 489c02: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 489c03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489c04: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 489c07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 489c09: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 489c0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 489c0d: je 0x489c5c */
  if (zf) goto L_489c5c;
L_489c0f: /* 489c0f: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489c12: jne 0x489c3f */
  if (!zf) goto L_489c3f;
L_489c14: /* 489c14: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 489c16: call 0x4620da */
  esp -= 4; W32(esp, 0x489c1bu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 489c1b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489c1d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489c1e: je 0x489c2f */
  if (zf) goto L_489c2f;
L_489c20: /* 489c20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 489c21: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 489c24: mov ecx, eax */
  ecx = eax;
/* 489c26: call 0x464ff1 */
  esp -= 4; W32(esp, 0x489c2bu); SPILL(); f_464ff1(); if (g_unwind) return; RELOAD();
/* 489c2b: mov esi, eax */
  esi = eax;
/* 489c2d: jmp 0x489c31 */
  goto L_489c31;
L_489c2f: /* 489c2f: xor esi, esi */
  esi = 0;
L_489c31: /* 489c31: mov ecx, 0x4d0ec0 */
  ecx = 0x4d0ec0u;
/* 489c36: call 0x464006 */
  esp -= 4; W32(esp, 0x489c3bu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489c3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489c3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489c3d: jmp 0x489c54 */
  goto L_489c54;
L_489c3f: /* 489c3f: mov ecx, 0x4d0ec0 */
  ecx = 0x4d0ec0u;
/* 489c44: call 0x464006 */
  esp -= 4; W32(esp, 0x489c49u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489c49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489c4a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 489c4d: call 0x46591c */
  esp -= 4; W32(esp, 0x489c52u); SPILL(); f_46591c(); if (g_unwind) return; RELOAD();
/* 489c52: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489c53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_489c54: /* 489c54: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 489c57: call 0x486b0d */
  esp -= 4; W32(esp, 0x489c5cu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_489c5c: /* 489c5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 489c5d: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 489c60: and edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 489c63: je 0x489cb0 */
  if (zf) goto L_489cb0;
L_489c65: /* 489c65: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489c68: jne 0x489c93 */
  if (!zf) goto L_489c93;
L_489c6a: /* 489c6a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 489c6c: call 0x4620da */
  esp -= 4; W32(esp, 0x489c71u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 489c71: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489c73: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489c74: je 0x489c83 */
  if (zf) goto L_489c83;
L_489c76: /* 489c76: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 489c79: mov dword ptr [eax], 0x4c7390 */
  W32((uint32_t)(eax), 0x4c7390u);
/* 489c7f: mov esi, eax */
  esi = eax;
/* 489c81: jmp 0x489c85 */
  goto L_489c85;
L_489c83: /* 489c83: xor esi, esi */
  esi = 0;
L_489c85: /* 489c85: mov ecx, 0x4d08c4 */
  ecx = 0x4d08c4u;
/* 489c8a: call 0x464006 */
  esp -= 4; W32(esp, 0x489c8fu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489c8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489c90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489c91: jmp 0x489ca8 */
  goto L_489ca8;
L_489c93: /* 489c93: mov ecx, 0x4d08c4 */
  ecx = 0x4d08c4u;
/* 489c98: call 0x464006 */
  esp -= 4; W32(esp, 0x489c9du); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489c9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489c9e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 489ca1: call 0x46e4bd */
  esp -= 4; W32(esp, 0x489ca6u); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 489ca6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489ca7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_489ca8: /* 489ca8: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 489cab: call 0x486b0d */
  esp -= 4; W32(esp, 0x489cb0u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_489cb0: /* 489cb0: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489cb2: je 0x489d62 */
  if (zf) goto L_489d62;
L_489cb8: /* 489cb8: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489cbb: jne 0x489ce6 */
  if (!zf) goto L_489ce6;
L_489cbd: /* 489cbd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 489cbf: call 0x4620da */
  esp -= 4; W32(esp, 0x489cc4u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 489cc4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489cc6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489cc7: je 0x489cd6 */
  if (zf) goto L_489cd6;
L_489cc9: /* 489cc9: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 489ccc: mov dword ptr [eax], 0x4c74f8 */
  W32((uint32_t)(eax), 0x4c74f8u);
/* 489cd2: mov esi, eax */
  esi = eax;
/* 489cd4: jmp 0x489cd8 */
  goto L_489cd8;
L_489cd6: /* 489cd6: xor esi, esi */
  esi = 0;
L_489cd8: /* 489cd8: mov ecx, 0x4d08c8 */
  ecx = 0x4d08c8u;
/* 489cdd: call 0x464006 */
  esp -= 4; W32(esp, 0x489ce2u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489ce2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489ce3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489ce4: jmp 0x489cfb */
  goto L_489cfb;
L_489ce6: /* 489ce6: mov ecx, 0x4d08c8 */
  ecx = 0x4d08c8u;
/* 489ceb: call 0x464006 */
  esp -= 4; W32(esp, 0x489cf0u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489cf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489cf1: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 489cf4: call 0x46e2d7 */
  esp -= 4; W32(esp, 0x489cf9u); SPILL(); f_46e2d7(); if (g_unwind) return; RELOAD();
/* 489cf9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489cfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_489cfb: /* 489cfb: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 489cfe: call 0x486b0d */
  esp -= 4; W32(esp, 0x489d03u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 489d03: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489d05: je 0x489d62 */
  if (zf) goto L_489d62;
L_489d07: /* 489d07: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489d0a: jne 0x489d45 */
  if (!zf) goto L_489d45;
L_489d0c: /* 489d0c: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 489d0e: call 0x4620da */
  esp -= 4; W32(esp, 0x489d13u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 489d13: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489d14: mov ecx, eax */
  ecx = eax;
/* 489d16: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 489d19: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489d1b: mov dword ptr [ebp - 4], 4 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 489d22: je 0x489d31 */
  if (zf) goto L_489d31;
L_489d24: /* 489d24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 489d25: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 489d28: call 0x473c21 */
  esp -= 4; W32(esp, 0x489d2du); SPILL(); f_473c21(); if (g_unwind) return; RELOAD();
/* 489d2d: mov esi, eax */
  esi = eax;
/* 489d2f: jmp 0x489d33 */
  goto L_489d33;
L_489d31: /* 489d31: xor esi, esi */
  esi = 0;
L_489d33: /* 489d33: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489d37: mov ecx, 0x4d08b8 */
  ecx = 0x4d08b8u;
/* 489d3c: call 0x464006 */
  esp -= 4; W32(esp, 0x489d41u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489d41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489d42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489d43: jmp 0x489d5a */
  goto L_489d5a;
L_489d45: /* 489d45: mov ecx, 0x4d08b8 */
  ecx = 0x4d08b8u;
/* 489d4a: call 0x464006 */
  esp -= 4; W32(esp, 0x489d4fu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489d4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489d50: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 489d53: call 0x47989f */
  esp -= 4; W32(esp, 0x489d58u); SPILL(); f_47989f(); if (g_unwind) return; RELOAD();
/* 489d58: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489d59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_489d5a: /* 489d5a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 489d5d: call 0x486b0d */
  esp -= 4; W32(esp, 0x489d62u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_489d62: /* 489d62: test byte ptr [ebp + 0xc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 489d66: je 0x489db5 */
  if (zf) goto L_489db5;
L_489d68: /* 489d68: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489d6b: jne 0x489d98 */
  if (!zf) goto L_489d98;
L_489d6d: /* 489d6d: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 489d6f: call 0x4620da */
  esp -= 4; W32(esp, 0x489d74u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 489d74: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489d76: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489d77: je 0x489d88 */
  if (zf) goto L_489d88;
L_489d79: /* 489d79: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 489d7a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 489d7d: mov ecx, eax */
  ecx = eax;
/* 489d7f: call 0x46c4c1 */
  esp -= 4; W32(esp, 0x489d84u); SPILL(); f_46c4c1(); if (g_unwind) return; RELOAD();
/* 489d84: mov esi, eax */
  esi = eax;
/* 489d86: jmp 0x489d8a */
  goto L_489d8a;
L_489d88: /* 489d88: xor esi, esi */
  esi = 0;
L_489d8a: /* 489d8a: mov ecx, 0x4d0888 */
  ecx = 0x4d0888u;
/* 489d8f: call 0x464006 */
  esp -= 4; W32(esp, 0x489d94u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489d94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489d95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489d96: jmp 0x489dad */
  goto L_489dad;
L_489d98: /* 489d98: mov ecx, 0x4d0888 */
  ecx = 0x4d0888u;
/* 489d9d: call 0x464006 */
  esp -= 4; W32(esp, 0x489da2u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489da2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489da3: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 489da6: call 0x48959f */
  esp -= 4; W32(esp, 0x489dabu); SPILL(); f_48959f(); if (g_unwind) return; RELOAD();
/* 489dab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489dac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_489dad: /* 489dad: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 489db0: call 0x486b0d */
  esp -= 4; W32(esp, 0x489db5u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_489db5: /* 489db5: test byte ptr [ebp + 0xc], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 489db9: je 0x489e06 */
  if (zf) goto L_489e06;
L_489dbb: /* 489dbb: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489dbe: jne 0x489de9 */
  if (!zf) goto L_489de9;
L_489dc0: /* 489dc0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 489dc2: call 0x4620da */
  esp -= 4; W32(esp, 0x489dc7u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 489dc7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489dc9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489dca: je 0x489dd9 */
  if (zf) goto L_489dd9;
L_489dcc: /* 489dcc: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 489dcf: mov dword ptr [eax], 0x4c7ac0 */
  W32((uint32_t)(eax), 0x4c7ac0u);
/* 489dd5: mov esi, eax */
  esi = eax;
/* 489dd7: jmp 0x489ddb */
  goto L_489ddb;
L_489dd9: /* 489dd9: xor esi, esi */
  esi = 0;
L_489ddb: /* 489ddb: mov ecx, 0x4d08bc */
  ecx = 0x4d08bcu;
/* 489de0: call 0x464006 */
  esp -= 4; W32(esp, 0x489de5u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489de5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489de6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489de7: jmp 0x489dfe */
  goto L_489dfe;
L_489de9: /* 489de9: mov ecx, 0x4d08bc */
  ecx = 0x4d08bcu;
/* 489dee: call 0x464006 */
  esp -= 4; W32(esp, 0x489df3u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489df3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489df4: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 489df7: call 0x489641 */
  esp -= 4; W32(esp, 0x489dfcu); SPILL(); f_489641(); if (g_unwind) return; RELOAD();
/* 489dfc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489dfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_489dfe: /* 489dfe: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 489e01: call 0x486b0d */
  esp -= 4; W32(esp, 0x489e06u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_489e06: /* 489e06: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 489e09: and edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 489e0c: je 0x489e59 */
  if (zf) goto L_489e59;
L_489e0e: /* 489e0e: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489e11: jne 0x489e3c */
  if (!zf) goto L_489e3c;
L_489e13: /* 489e13: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 489e15: call 0x4620da */
  esp -= 4; W32(esp, 0x489e1au); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 489e1a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489e1c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489e1d: je 0x489e2c */
  if (zf) goto L_489e2c;
L_489e1f: /* 489e1f: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 489e22: mov dword ptr [eax], 0x4c7d40 */
  W32((uint32_t)(eax), 0x4c7d40u);
/* 489e28: mov esi, eax */
  esi = eax;
/* 489e2a: jmp 0x489e2e */
  goto L_489e2e;
L_489e2c: /* 489e2c: xor esi, esi */
  esi = 0;
L_489e2e: /* 489e2e: mov ecx, 0x4d086c */
  ecx = 0x4d086cu;
/* 489e33: call 0x464006 */
  esp -= 4; W32(esp, 0x489e38u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489e38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489e39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489e3a: jmp 0x489e51 */
  goto L_489e51;
L_489e3c: /* 489e3c: mov ecx, 0x4d086c */
  ecx = 0x4d086cu;
/* 489e41: call 0x464006 */
  esp -= 4; W32(esp, 0x489e46u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489e46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489e47: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 489e4a: call 0x4896e3 */
  esp -= 4; W32(esp, 0x489e4fu); SPILL(); f_4896e3(); if (g_unwind) return; RELOAD();
/* 489e4f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489e50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_489e51: /* 489e51: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 489e54: call 0x486b0d */
  esp -= 4; W32(esp, 0x489e59u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_489e59: /* 489e59: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489e5b: je 0x489f6e */
  if (zf) goto L_489f6e;
L_489e61: /* 489e61: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489e64: jne 0x489e8f */
  if (!zf) goto L_489e8f;
L_489e66: /* 489e66: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 489e68: call 0x4620da */
  esp -= 4; W32(esp, 0x489e6du); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 489e6d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489e6f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489e70: je 0x489e7f */
  if (zf) goto L_489e7f;
L_489e72: /* 489e72: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 489e75: mov dword ptr [eax], 0x4c7e48 */
  W32((uint32_t)(eax), 0x4c7e48u);
/* 489e7b: mov esi, eax */
  esi = eax;
/* 489e7d: jmp 0x489e81 */
  goto L_489e81;
L_489e7f: /* 489e7f: xor esi, esi */
  esi = 0;
L_489e81: /* 489e81: mov ecx, 0x4d0860 */
  ecx = 0x4d0860u;
/* 489e86: call 0x464006 */
  esp -= 4; W32(esp, 0x489e8bu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489e8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489e8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489e8d: jmp 0x489ea4 */
  goto L_489ea4;
L_489e8f: /* 489e8f: mov ecx, 0x4d0860 */
  ecx = 0x4d0860u;
/* 489e94: call 0x464006 */
  esp -= 4; W32(esp, 0x489e99u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489e99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489e9a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 489e9d: call 0x489785 */
  esp -= 4; W32(esp, 0x489ea2u); SPILL(); f_489785(); if (g_unwind) return; RELOAD();
/* 489ea2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489ea3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_489ea4: /* 489ea4: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 489ea7: call 0x486b0d */
  esp -= 4; W32(esp, 0x489eacu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 489eac: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489eae: je 0x489f6e */
  if (zf) goto L_489f6e;
L_489eb4: /* 489eb4: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489eb7: jne 0x489ef2 */
  if (!zf) goto L_489ef2;
L_489eb9: /* 489eb9: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 489ebb: call 0x4620da */
  esp -= 4; W32(esp, 0x489ec0u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 489ec0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489ec1: mov ecx, eax */
  ecx = eax;
/* 489ec3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 489ec6: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489ec8: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 489ecf: je 0x489ede */
  if (zf) goto L_489ede;
L_489ed1: /* 489ed1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 489ed2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 489ed5: call 0x478861 */
  esp -= 4; W32(esp, 0x489edau); SPILL(); f_478861(); if (g_unwind) return; RELOAD();
/* 489eda: mov esi, eax */
  esi = eax;
/* 489edc: jmp 0x489ee0 */
  goto L_489ee0;
L_489ede: /* 489ede: xor esi, esi */
  esi = 0;
L_489ee0: /* 489ee0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489ee4: mov ecx, 0x4d08b4 */
  ecx = 0x4d08b4u;
/* 489ee9: call 0x464006 */
  esp -= 4; W32(esp, 0x489eeeu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489eee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489eef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489ef0: jmp 0x489f07 */
  goto L_489f07;
L_489ef2: /* 489ef2: mov ecx, 0x4d08b4 */
  ecx = 0x4d08b4u;
/* 489ef7: call 0x464006 */
  esp -= 4; W32(esp, 0x489efcu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489efc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489efd: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 489f00: call 0x479a85 */
  esp -= 4; W32(esp, 0x489f05u); SPILL(); f_479a85(); if (g_unwind) return; RELOAD();
/* 489f05: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489f06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_489f07: /* 489f07: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 489f0a: call 0x486b0d */
  esp -= 4; W32(esp, 0x489f0fu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 489f0f: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489f11: je 0x489f6e */
  if (zf) goto L_489f6e;
L_489f13: /* 489f13: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489f16: jne 0x489f51 */
  if (!zf) goto L_489f51;
L_489f18: /* 489f18: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 489f1a: call 0x4620da */
  esp -= 4; W32(esp, 0x489f1fu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 489f1f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489f20: mov ecx, eax */
  ecx = eax;
/* 489f22: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 489f25: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489f27: mov dword ptr [ebp - 4], 0xc */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 489f2e: je 0x489f3d */
  if (zf) goto L_489f3d;
L_489f30: /* 489f30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 489f31: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 489f34: call 0x47c4eb */
  esp -= 4; W32(esp, 0x489f39u); SPILL(); f_47c4eb(); if (g_unwind) return; RELOAD();
/* 489f39: mov esi, eax */
  esi = eax;
/* 489f3b: jmp 0x489f3f */
  goto L_489f3f;
L_489f3d: /* 489f3d: xor esi, esi */
  esi = 0;
L_489f3f: /* 489f3f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489f43: mov ecx, 0x4d087c */
  ecx = 0x4d087cu;
/* 489f48: call 0x464006 */
  esp -= 4; W32(esp, 0x489f4du); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489f4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489f4f: jmp 0x489f66 */
  goto L_489f66;
L_489f51: /* 489f51: mov ecx, 0x4d087c */
  ecx = 0x4d087cu;
/* 489f56: call 0x464006 */
  esp -= 4; W32(esp, 0x489f5bu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489f5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489f5c: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 489f5f: call 0x47d65c */
  esp -= 4; W32(esp, 0x489f64u); SPILL(); f_47d65c(); if (g_unwind) return; RELOAD();
/* 489f64: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489f65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_489f66: /* 489f66: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 489f69: call 0x486b0d */
  esp -= 4; W32(esp, 0x489f6eu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_489f6e: /* 489f6e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 489f71: and edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 489f74: je 0x489fd1 */
  if (zf) goto L_489fd1;
L_489f76: /* 489f76: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489f79: jne 0x489fb4 */
  if (!zf) goto L_489fb4;
L_489f7b: /* 489f7b: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 489f7d: call 0x4620da */
  esp -= 4; W32(esp, 0x489f82u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 489f82: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489f83: mov ecx, eax */
  ecx = eax;
/* 489f85: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 489f88: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489f8a: mov dword ptr [ebp - 4], 0xe */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 489f91: je 0x489fa0 */
  if (zf) goto L_489fa0;
L_489f93: /* 489f93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 489f94: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 489f97: call 0x4865b0 */
  esp -= 4; W32(esp, 0x489f9cu); SPILL(); f_4865b0(); if (g_unwind) return; RELOAD();
/* 489f9c: mov esi, eax */
  esi = eax;
/* 489f9e: jmp 0x489fa2 */
  goto L_489fa2;
L_489fa0: /* 489fa0: xor esi, esi */
  esi = 0;
L_489fa2: /* 489fa2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 489fa6: mov ecx, 0x4d0874 */
  ecx = 0x4d0874u;
/* 489fab: call 0x464006 */
  esp -= 4; W32(esp, 0x489fb0u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489fb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489fb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 489fb2: jmp 0x489fc9 */
  goto L_489fc9;
L_489fb4: /* 489fb4: mov ecx, 0x4d0874 */
  ecx = 0x4d0874u;
/* 489fb9: call 0x464006 */
  esp -= 4; W32(esp, 0x489fbeu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 489fbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 489fbf: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 489fc2: call 0x489aaf */
  esp -= 4; W32(esp, 0x489fc7u); SPILL(); f_489aaf(); if (g_unwind) return; RELOAD();
/* 489fc7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489fc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_489fc9: /* 489fc9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 489fcc: call 0x486b0d */
  esp -= 4; W32(esp, 0x489fd1u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_489fd1: /* 489fd1: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489fd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 489fd4: je 0x48a023 */
  if (zf) goto L_48a023;
L_489fd6: /* 489fd6: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489fd9: jne 0x48a006 */
  if (!zf) goto L_48a006;
L_489fdb: /* 489fdb: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 489fdd: call 0x4620da */
  esp -= 4; W32(esp, 0x489fe2u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 489fe2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 489fe4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 489fe5: je 0x489ff6 */
  if (zf) goto L_489ff6;
L_489fe7: /* 489fe7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 489fe8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 489feb: mov ecx, eax */
  ecx = eax;
/* 489fed: call 0x46a992 */
  esp -= 4; W32(esp, 0x489ff2u); SPILL(); f_46a992(); if (g_unwind) return; RELOAD();
/* 489ff2: mov esi, eax */
  esi = eax;
/* 489ff4: jmp 0x489ff8 */
  goto L_489ff8;
L_489ff6: /* 489ff6: xor esi, esi */
  esi = 0;
L_489ff8: /* 489ff8: mov ecx, 0x4d0ec8 */
  ecx = 0x4d0ec8u;
/* 489ffd: call 0x464006 */
  esp -= 4; W32(esp, 0x48a002u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a002: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a003: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a004: jmp 0x48a01b */
  goto L_48a01b;
L_48a006: /* 48a006: mov ecx, 0x4d0ec8 */
  ecx = 0x4d0ec8u;
/* 48a00b: call 0x464006 */
  esp -= 4; W32(esp, 0x48a010u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a011: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a014: call 0x48945b */
  esp -= 4; W32(esp, 0x48a019u); SPILL(); f_48945b(); if (g_unwind) return; RELOAD();
/* 48a019: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a01a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a01b: /* 48a01b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a01e: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a023u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48a023: /* 48a023: cmp dword ptr [ebp - 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a026: je 0x48a075 */
  if (zf) goto L_48a075;
L_48a028: /* 48a028: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a02b: jne 0x48a058 */
  if (!zf) goto L_48a058;
L_48a02d: /* 48a02d: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 48a02f: call 0x4620da */
  esp -= 4; W32(esp, 0x48a034u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a034: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a036: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a037: je 0x48a048 */
  if (zf) goto L_48a048;
L_48a039: /* 48a039: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48a03a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48a03d: mov ecx, eax */
  ecx = eax;
/* 48a03f: call 0x464d11 */
  esp -= 4; W32(esp, 0x48a044u); SPILL(); f_464d11(); if (g_unwind) return; RELOAD();
/* 48a044: mov esi, eax */
  esi = eax;
/* 48a046: jmp 0x48a04a */
  goto L_48a04a;
L_48a048: /* 48a048: xor esi, esi */
  esi = 0;
L_48a04a: /* 48a04a: mov ecx, 0x4d0ecc */
  ecx = 0x4d0eccu;
/* 48a04f: call 0x464006 */
  esp -= 4; W32(esp, 0x48a054u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a055: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a056: jmp 0x48a06d */
  goto L_48a06d;
L_48a058: /* 48a058: mov ecx, 0x4d0ecc */
  ecx = 0x4d0eccu;
/* 48a05d: call 0x464006 */
  esp -= 4; W32(esp, 0x48a062u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a063: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a066: call 0x46e601 */
  esp -= 4; W32(esp, 0x48a06bu); SPILL(); f_46e601(); if (g_unwind) return; RELOAD();
/* 48a06b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a06c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a06d: /* 48a06d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a070: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a075u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48a075: /* 48a075: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48a078: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48a079: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48a07a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48a081: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48a082: ret  */
  esp += 4; SPILL(); return;
}

void f_48a083(void) {
  LOAD_REGS();
L_48a083: /* 48a083: mov eax, 0x48ddf8 */
  eax = 0x48ddf8u;
/* 48a088: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48a08du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48a08d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48a08e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48a08f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 48a092: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48a093: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a094: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 48a097: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48a099: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 48a09c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48a09d: je 0x48a0ec */
  if (zf) goto L_48a0ec;
L_48a09f: /* 48a09f: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a0a2: jne 0x48a0cf */
  if (!zf) goto L_48a0cf;
L_48a0a4: /* 48a0a4: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 48a0a6: call 0x4620da */
  esp -= 4; W32(esp, 0x48a0abu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a0ab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a0ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a0ae: je 0x48a0bf */
  if (zf) goto L_48a0bf;
L_48a0b0: /* 48a0b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48a0b1: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48a0b4: mov ecx, eax */
  ecx = eax;
/* 48a0b6: call 0x4650b8 */
  esp -= 4; W32(esp, 0x48a0bbu); SPILL(); f_4650b8(); if (g_unwind) return; RELOAD();
/* 48a0bb: mov esi, eax */
  esi = eax;
/* 48a0bd: jmp 0x48a0c1 */
  goto L_48a0c1;
L_48a0bf: /* 48a0bf: xor esi, esi */
  esi = 0;
L_48a0c1: /* 48a0c1: mov ecx, 0x4d0ec4 */
  ecx = 0x4d0ec4u;
/* 48a0c6: call 0x464006 */
  esp -= 4; W32(esp, 0x48a0cbu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a0cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a0cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a0cd: jmp 0x48a0e4 */
  goto L_48a0e4;
L_48a0cf: /* 48a0cf: mov ecx, 0x4d0ec4 */
  ecx = 0x4d0ec4u;
/* 48a0d4: call 0x464006 */
  esp -= 4; W32(esp, 0x48a0d9u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a0d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a0da: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a0dd: call 0x4659be */
  esp -= 4; W32(esp, 0x48a0e2u); SPILL(); f_4659be(); if (g_unwind) return; RELOAD();
/* 48a0e2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a0e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a0e4: /* 48a0e4: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a0e7: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a0ecu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48a0ec: /* 48a0ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48a0ed: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 48a0f0: and edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 48a0f3: je 0x48a140 */
  if (zf) goto L_48a140;
L_48a0f5: /* 48a0f5: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a0f8: jne 0x48a123 */
  if (!zf) goto L_48a123;
L_48a0fa: /* 48a0fa: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48a0fc: call 0x4620da */
  esp -= 4; W32(esp, 0x48a101u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a101: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a103: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a104: je 0x48a113 */
  if (zf) goto L_48a113;
L_48a106: /* 48a106: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 48a109: mov dword ptr [eax], 0x4c740c */
  W32((uint32_t)(eax), 0x4c740cu);
/* 48a10f: mov esi, eax */
  esi = eax;
/* 48a111: jmp 0x48a115 */
  goto L_48a115;
L_48a113: /* 48a113: xor esi, esi */
  esi = 0;
L_48a115: /* 48a115: mov ecx, 0x4d085c */
  ecx = 0x4d085cu;
/* 48a11a: call 0x464006 */
  esp -= 4; W32(esp, 0x48a11fu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a11f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a121: jmp 0x48a138 */
  goto L_48a138;
L_48a123: /* 48a123: mov ecx, 0x4d085c */
  ecx = 0x4d085cu;
/* 48a128: call 0x464006 */
  esp -= 4; W32(esp, 0x48a12du); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a12d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a12e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a131: call 0x46e55f */
  esp -= 4; W32(esp, 0x48a136u); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 48a136: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a137: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a138: /* 48a138: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a13b: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a140u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48a140: /* 48a140: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a142: je 0x48a1f2 */
  if (zf) goto L_48a1f2;
L_48a148: /* 48a148: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a14b: jne 0x48a176 */
  if (!zf) goto L_48a176;
L_48a14d: /* 48a14d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48a14f: call 0x4620da */
  esp -= 4; W32(esp, 0x48a154u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a154: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a156: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a157: je 0x48a166 */
  if (zf) goto L_48a166;
L_48a159: /* 48a159: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 48a15c: mov dword ptr [eax], 0x4c7568 */
  W32((uint32_t)(eax), 0x4c7568u);
/* 48a162: mov esi, eax */
  esi = eax;
/* 48a164: jmp 0x48a168 */
  goto L_48a168;
L_48a166: /* 48a166: xor esi, esi */
  esi = 0;
L_48a168: /* 48a168: mov ecx, 0x4d0870 */
  ecx = 0x4d0870u;
/* 48a16d: call 0x464006 */
  esp -= 4; W32(esp, 0x48a172u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a173: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a174: jmp 0x48a18b */
  goto L_48a18b;
L_48a176: /* 48a176: mov ecx, 0x4d0870 */
  ecx = 0x4d0870u;
/* 48a17b: call 0x464006 */
  esp -= 4; W32(esp, 0x48a180u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a181: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a184: call 0x46e379 */
  esp -= 4; W32(esp, 0x48a189u); SPILL(); f_46e379(); if (g_unwind) return; RELOAD();
/* 48a189: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a18a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a18b: /* 48a18b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a18e: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a193u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 48a193: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a195: je 0x48a1f2 */
  if (zf) goto L_48a1f2;
L_48a197: /* 48a197: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a19a: jne 0x48a1d5 */
  if (!zf) goto L_48a1d5;
L_48a19c: /* 48a19c: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 48a19e: call 0x4620da */
  esp -= 4; W32(esp, 0x48a1a3u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a1a3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a1a4: mov ecx, eax */
  ecx = eax;
/* 48a1a6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 48a1a9: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a1ab: mov dword ptr [ebp - 4], 4 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 48a1b2: je 0x48a1c1 */
  if (zf) goto L_48a1c1;
L_48a1b4: /* 48a1b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48a1b5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48a1b8: call 0x473d03 */
  esp -= 4; W32(esp, 0x48a1bdu); SPILL(); f_473d03(); if (g_unwind) return; RELOAD();
/* 48a1bd: mov esi, eax */
  esi = eax;
/* 48a1bf: jmp 0x48a1c3 */
  goto L_48a1c3;
L_48a1c1: /* 48a1c1: xor esi, esi */
  esi = 0;
L_48a1c3: /* 48a1c3: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48a1c7: mov ecx, 0x4d08a4 */
  ecx = 0x4d08a4u;
/* 48a1cc: call 0x464006 */
  esp -= 4; W32(esp, 0x48a1d1u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a1d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a1d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a1d3: jmp 0x48a1ea */
  goto L_48a1ea;
L_48a1d5: /* 48a1d5: mov ecx, 0x4d08a4 */
  ecx = 0x4d08a4u;
/* 48a1da: call 0x464006 */
  esp -= 4; W32(esp, 0x48a1dfu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a1df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a1e0: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a1e3: call 0x479941 */
  esp -= 4; W32(esp, 0x48a1e8u); SPILL(); f_479941(); if (g_unwind) return; RELOAD();
/* 48a1e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a1e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a1ea: /* 48a1ea: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a1ed: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a1f2u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48a1f2: /* 48a1f2: test byte ptr [ebp + 0xc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48a1f6: je 0x48a245 */
  if (zf) goto L_48a245;
L_48a1f8: /* 48a1f8: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a1fb: jne 0x48a228 */
  if (!zf) goto L_48a228;
L_48a1fd: /* 48a1fd: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 48a1ff: call 0x4620da */
  esp -= 4; W32(esp, 0x48a204u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a204: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a206: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a207: je 0x48a218 */
  if (zf) goto L_48a218;
L_48a209: /* 48a209: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48a20a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48a20d: mov ecx, eax */
  ecx = eax;
/* 48a20f: call 0x46c585 */
  esp -= 4; W32(esp, 0x48a214u); SPILL(); f_46c585(); if (g_unwind) return; RELOAD();
/* 48a214: mov esi, eax */
  esi = eax;
/* 48a216: jmp 0x48a21a */
  goto L_48a21a;
L_48a218: /* 48a218: xor esi, esi */
  esi = 0;
L_48a21a: /* 48a21a: mov ecx, 0x4d08b0 */
  ecx = 0x4d08b0u;
/* 48a21f: call 0x464006 */
  esp -= 4; W32(esp, 0x48a224u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a224: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a225: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a226: jmp 0x48a23d */
  goto L_48a23d;
L_48a228: /* 48a228: mov ecx, 0x4d08b0 */
  ecx = 0x4d08b0u;
/* 48a22d: call 0x464006 */
  esp -= 4; W32(esp, 0x48a232u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a232: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a233: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a236: call 0x489827 */
  esp -= 4; W32(esp, 0x48a23bu); SPILL(); f_489827(); if (g_unwind) return; RELOAD();
/* 48a23b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a23c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a23d: /* 48a23d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a240: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a245u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48a245: /* 48a245: test byte ptr [ebp + 0xc], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48a249: je 0x48a296 */
  if (zf) goto L_48a296;
L_48a24b: /* 48a24b: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a24e: jne 0x48a279 */
  if (!zf) goto L_48a279;
L_48a250: /* 48a250: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48a252: call 0x4620da */
  esp -= 4; W32(esp, 0x48a257u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a257: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a259: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a25a: je 0x48a269 */
  if (zf) goto L_48a269;
L_48a25c: /* 48a25c: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 48a25f: mov dword ptr [eax], 0x4c7b20 */
  W32((uint32_t)(eax), 0x4c7b20u);
/* 48a265: mov esi, eax */
  esi = eax;
/* 48a267: jmp 0x48a26b */
  goto L_48a26b;
L_48a269: /* 48a269: xor esi, esi */
  esi = 0;
L_48a26b: /* 48a26b: mov ecx, 0x4d08a8 */
  ecx = 0x4d08a8u;
/* 48a270: call 0x464006 */
  esp -= 4; W32(esp, 0x48a275u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a275: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a276: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a277: jmp 0x48a28e */
  goto L_48a28e;
L_48a279: /* 48a279: mov ecx, 0x4d08a8 */
  ecx = 0x4d08a8u;
/* 48a27e: call 0x464006 */
  esp -= 4; W32(esp, 0x48a283u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a283: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a284: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a287: call 0x4898c9 */
  esp -= 4; W32(esp, 0x48a28cu); SPILL(); f_4898c9(); if (g_unwind) return; RELOAD();
/* 48a28c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a28d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a28e: /* 48a28e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a291: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a296u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48a296: /* 48a296: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 48a299: and edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 48a29c: je 0x48a2e9 */
  if (zf) goto L_48a2e9;
L_48a29e: /* 48a29e: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a2a1: jne 0x48a2cc */
  if (!zf) goto L_48a2cc;
L_48a2a3: /* 48a2a3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48a2a5: call 0x4620da */
  esp -= 4; W32(esp, 0x48a2aau); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a2aa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a2ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a2ad: je 0x48a2bc */
  if (zf) goto L_48a2bc;
L_48a2af: /* 48a2af: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 48a2b2: mov dword ptr [eax], 0x4c7d98 */
  W32((uint32_t)(eax), 0x4c7d98u);
/* 48a2b8: mov esi, eax */
  esi = eax;
/* 48a2ba: jmp 0x48a2be */
  goto L_48a2be;
L_48a2bc: /* 48a2bc: xor esi, esi */
  esi = 0;
L_48a2be: /* 48a2be: mov ecx, 0x4d0878 */
  ecx = 0x4d0878u;
/* 48a2c3: call 0x464006 */
  esp -= 4; W32(esp, 0x48a2c8u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a2c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a2c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a2ca: jmp 0x48a2e1 */
  goto L_48a2e1;
L_48a2cc: /* 48a2cc: mov ecx, 0x4d0878 */
  ecx = 0x4d0878u;
/* 48a2d1: call 0x464006 */
  esp -= 4; W32(esp, 0x48a2d6u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a2d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a2d7: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a2da: call 0x48996b */
  esp -= 4; W32(esp, 0x48a2dfu); SPILL(); f_48996b(); if (g_unwind) return; RELOAD();
/* 48a2df: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a2e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a2e1: /* 48a2e1: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a2e4: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a2e9u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48a2e9: /* 48a2e9: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a2eb: je 0x48a3fe */
  if (zf) goto L_48a3fe;
L_48a2f1: /* 48a2f1: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a2f4: jne 0x48a31f */
  if (!zf) goto L_48a31f;
L_48a2f6: /* 48a2f6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48a2f8: call 0x4620da */
  esp -= 4; W32(esp, 0x48a2fdu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a2fd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a2ff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a300: je 0x48a30f */
  if (zf) goto L_48a30f;
L_48a302: /* 48a302: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 48a305: mov dword ptr [eax], 0x4c7ea0 */
  W32((uint32_t)(eax), 0x4c7ea0u);
/* 48a30b: mov esi, eax */
  esi = eax;
/* 48a30d: jmp 0x48a311 */
  goto L_48a311;
L_48a30f: /* 48a30f: xor esi, esi */
  esi = 0;
L_48a311: /* 48a311: mov ecx, 0x4d088c */
  ecx = 0x4d088cu;
/* 48a316: call 0x464006 */
  esp -= 4; W32(esp, 0x48a31bu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a31b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a31c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a31d: jmp 0x48a334 */
  goto L_48a334;
L_48a31f: /* 48a31f: mov ecx, 0x4d088c */
  ecx = 0x4d088cu;
/* 48a324: call 0x464006 */
  esp -= 4; W32(esp, 0x48a329u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a32a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a32d: call 0x489a0d */
  esp -= 4; W32(esp, 0x48a332u); SPILL(); f_489a0d(); if (g_unwind) return; RELOAD();
/* 48a332: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a333: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a334: /* 48a334: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a337: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a33cu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 48a33c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a33e: je 0x48a3fe */
  if (zf) goto L_48a3fe;
L_48a344: /* 48a344: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a347: jne 0x48a382 */
  if (!zf) goto L_48a382;
L_48a349: /* 48a349: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 48a34b: call 0x4620da */
  esp -= 4; W32(esp, 0x48a350u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a350: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a351: mov ecx, eax */
  ecx = eax;
/* 48a353: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 48a356: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a358: mov dword ptr [ebp - 4], 0xa */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 48a35f: je 0x48a36e */
  if (zf) goto L_48a36e;
L_48a361: /* 48a361: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48a362: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48a365: call 0x478987 */
  esp -= 4; W32(esp, 0x48a36au); SPILL(); f_478987(); if (g_unwind) return; RELOAD();
/* 48a36a: mov esi, eax */
  esi = eax;
/* 48a36c: jmp 0x48a370 */
  goto L_48a370;
L_48a36e: /* 48a36e: xor esi, esi */
  esi = 0;
L_48a370: /* 48a370: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48a374: mov ecx, 0x4d0880 */
  ecx = 0x4d0880u;
/* 48a379: call 0x464006 */
  esp -= 4; W32(esp, 0x48a37eu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a37e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a37f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a380: jmp 0x48a397 */
  goto L_48a397;
L_48a382: /* 48a382: mov ecx, 0x4d0880 */
  ecx = 0x4d0880u;
/* 48a387: call 0x464006 */
  esp -= 4; W32(esp, 0x48a38cu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a38c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a38d: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a390: call 0x479b27 */
  esp -= 4; W32(esp, 0x48a395u); SPILL(); f_479b27(); if (g_unwind) return; RELOAD();
/* 48a395: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a396: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a397: /* 48a397: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a39a: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a39fu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 48a39f: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a3a1: je 0x48a3fe */
  if (zf) goto L_48a3fe;
L_48a3a3: /* 48a3a3: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a3a6: jne 0x48a3e1 */
  if (!zf) goto L_48a3e1;
L_48a3a8: /* 48a3a8: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 48a3aa: call 0x4620da */
  esp -= 4; W32(esp, 0x48a3afu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a3af: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a3b0: mov ecx, eax */
  ecx = eax;
/* 48a3b2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 48a3b5: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a3b7: mov dword ptr [ebp - 4], 0xc */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 48a3be: je 0x48a3cd */
  if (zf) goto L_48a3cd;
L_48a3c0: /* 48a3c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48a3c1: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48a3c4: call 0x47c56c */
  esp -= 4; W32(esp, 0x48a3c9u); SPILL(); f_47c56c(); if (g_unwind) return; RELOAD();
/* 48a3c9: mov esi, eax */
  esi = eax;
/* 48a3cb: jmp 0x48a3cf */
  goto L_48a3cf;
L_48a3cd: /* 48a3cd: xor esi, esi */
  esi = 0;
L_48a3cf: /* 48a3cf: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48a3d3: mov ecx, 0x4d0864 */
  ecx = 0x4d0864u;
/* 48a3d8: call 0x464006 */
  esp -= 4; W32(esp, 0x48a3ddu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a3dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a3de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a3df: jmp 0x48a3f6 */
  goto L_48a3f6;
L_48a3e1: /* 48a3e1: mov ecx, 0x4d0864 */
  ecx = 0x4d0864u;
/* 48a3e6: call 0x464006 */
  esp -= 4; W32(esp, 0x48a3ebu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a3eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a3ec: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a3ef: call 0x47d6fe */
  esp -= 4; W32(esp, 0x48a3f4u); SPILL(); f_47d6fe(); if (g_unwind) return; RELOAD();
/* 48a3f4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a3f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a3f6: /* 48a3f6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a3f9: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a3feu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48a3fe: /* 48a3fe: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 48a401: and edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 48a404: je 0x48a461 */
  if (zf) goto L_48a461;
L_48a406: /* 48a406: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a409: jne 0x48a444 */
  if (!zf) goto L_48a444;
L_48a40b: /* 48a40b: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 48a40d: call 0x4620da */
  esp -= 4; W32(esp, 0x48a412u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a412: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a413: mov ecx, eax */
  ecx = eax;
/* 48a415: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 48a418: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a41a: mov dword ptr [ebp - 4], 0xe */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 48a421: je 0x48a430 */
  if (zf) goto L_48a430;
L_48a423: /* 48a423: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48a424: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48a427: call 0x486692 */
  esp -= 4; W32(esp, 0x48a42cu); SPILL(); f_486692(); if (g_unwind) return; RELOAD();
/* 48a42c: mov esi, eax */
  esi = eax;
/* 48a42e: jmp 0x48a432 */
  goto L_48a432;
L_48a430: /* 48a430: xor esi, esi */
  esi = 0;
L_48a432: /* 48a432: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48a436: mov ecx, 0x4d08ac */
  ecx = 0x4d08acu;
/* 48a43b: call 0x464006 */
  esp -= 4; W32(esp, 0x48a440u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a441: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a442: jmp 0x48a459 */
  goto L_48a459;
L_48a444: /* 48a444: mov ecx, 0x4d08ac */
  ecx = 0x4d08acu;
/* 48a449: call 0x464006 */
  esp -= 4; W32(esp, 0x48a44eu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a44e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a44f: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a452: call 0x489b51 */
  esp -= 4; W32(esp, 0x48a457u); SPILL(); f_489b51(); if (g_unwind) return; RELOAD();
/* 48a457: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a458: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a459: /* 48a459: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a45c: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a461u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48a461: /* 48a461: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a463: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48a464: je 0x48a4b3 */
  if (zf) goto L_48a4b3;
L_48a466: /* 48a466: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a469: jne 0x48a496 */
  if (!zf) goto L_48a496;
L_48a46b: /* 48a46b: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 48a46d: call 0x4620da */
  esp -= 4; W32(esp, 0x48a472u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a472: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a474: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a475: je 0x48a486 */
  if (zf) goto L_48a486;
L_48a477: /* 48a477: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48a478: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48a47b: mov ecx, eax */
  ecx = eax;
/* 48a47d: call 0x46aa65 */
  esp -= 4; W32(esp, 0x48a482u); SPILL(); f_46aa65(); if (g_unwind) return; RELOAD();
/* 48a482: mov esi, eax */
  esi = eax;
/* 48a484: jmp 0x48a488 */
  goto L_48a488;
L_48a486: /* 48a486: xor esi, esi */
  esi = 0;
L_48a488: /* 48a488: mov ecx, 0x4d0ed0 */
  ecx = 0x4d0ed0u;
/* 48a48d: call 0x464006 */
  esp -= 4; W32(esp, 0x48a492u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a492: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a493: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a494: jmp 0x48a4ab */
  goto L_48a4ab;
L_48a496: /* 48a496: mov ecx, 0x4d0ed0 */
  ecx = 0x4d0ed0u;
/* 48a49b: call 0x464006 */
  esp -= 4; W32(esp, 0x48a4a0u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a4a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a4a1: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a4a4: call 0x4894fd */
  esp -= 4; W32(esp, 0x48a4a9u); SPILL(); f_4894fd(); if (g_unwind) return; RELOAD();
/* 48a4a9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a4aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a4ab: /* 48a4ab: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a4ae: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a4b3u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48a4b3: /* 48a4b3: cmp dword ptr [ebp - 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a4b6: je 0x48a505 */
  if (zf) goto L_48a505;
L_48a4b8: /* 48a4b8: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a4bb: jne 0x48a4e8 */
  if (!zf) goto L_48a4e8;
L_48a4bd: /* 48a4bd: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 48a4bf: call 0x4620da */
  esp -= 4; W32(esp, 0x48a4c4u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48a4c4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a4c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a4c7: je 0x48a4d8 */
  if (zf) goto L_48a4d8;
L_48a4c9: /* 48a4c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48a4ca: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48a4cd: mov ecx, eax */
  ecx = eax;
/* 48a4cf: call 0x464ddd */
  esp -= 4; W32(esp, 0x48a4d4u); SPILL(); f_464ddd(); if (g_unwind) return; RELOAD();
/* 48a4d4: mov esi, eax */
  esi = eax;
/* 48a4d6: jmp 0x48a4da */
  goto L_48a4da;
L_48a4d8: /* 48a4d8: xor esi, esi */
  esi = 0;
L_48a4da: /* 48a4da: mov ecx, 0x4d0ebc */
  ecx = 0x4d0ebcu;
/* 48a4df: call 0x464006 */
  esp -= 4; W32(esp, 0x48a4e4u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a4e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a4e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a4e6: jmp 0x48a4fd */
  goto L_48a4fd;
L_48a4e8: /* 48a4e8: mov ecx, 0x4d0ebc */
  ecx = 0x4d0ebcu;
/* 48a4ed: call 0x464006 */
  esp -= 4; W32(esp, 0x48a4f2u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48a4f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a4f3: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a4f6: call 0x46e6a3 */
  esp -= 4; W32(esp, 0x48a4fbu); SPILL(); f_46e6a3(); if (g_unwind) return; RELOAD();
/* 48a4fb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a4fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48a4fd: /* 48a4fd: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a500: call 0x486b0d */
  esp -= 4; W32(esp, 0x48a505u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48a505: /* 48a505: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48a508: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48a509: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48a50a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48a511: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48a512: ret  */
  esp += 4; SPILL(); return;
}

void f_48a513(void) {
  LOAD_REGS();
L_48a513: /* 48a513: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48a514: mov ebp, esp */
  ebp = esp;
/* 48a516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48a517: mov ebx, dword ptr [0x48e11c] */
  ebx = R32((uint32_t)(0x48e11cu));
/* 48a51d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a51e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 48a521: sub esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 48a524: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48a525: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 48a528: sub edi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 48a52b: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 48a52d: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 48a52f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x48a531u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48a531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a532: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x48a538u); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 48a538: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x48a53eu); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 48a53e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48a540: je 0x48a55c */
  if (zf) goto L_48a55c;
L_48a542: /* 48a542: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x48a544u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48a544: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a545: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x48a54bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 48a54b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48a54d: call 0x48bf32 */
  esp -= 4; W32(esp, 0x48a552u); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 48a552: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a553: mov dword ptr [ebp + 0xc], 1 */
  W32((uint32_t)(ebp + 0xcu), 0x1u);
/* 48a55a: jmp 0x48a560 */
  goto L_48a560;
L_48a55c: /* 48a55c: and dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_48a560: /* 48a560: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 48a563: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48a565: jne 0x48a572 */
  if (!zf) goto L_48a572;
L_48a567: /* 48a567: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x48a56du); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 48a56d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 48a570: jmp 0x48a574 */
  goto L_48a574;
L_48a572: /* 48a572: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_48a574: /* 48a574: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48a576: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 48a579: jne 0x48a5df */
  if (!zf) goto L_48a5df;
L_48a57b: /* 48a57b: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a57e: je 0x48a58a */
  if (zf) goto L_48a58a;
L_48a580: /* 48a580: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48a582: call 0x48bf2c */
  esp -= 4; W32(esp, 0x48a587u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 48a587: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a588: jmp 0x48a593 */
  goto L_48a593;
L_48a58a: /* 48a58a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x48a58cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48a58c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a58d: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x48a593u); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_48a593: /* 48a593: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48a595: mov edx, esi */
  edx = esi;
/* 48a597: jl 0x48a59b */
  if ((sf != of)) goto L_48a59b;
L_48a599: /* 48a599: mov edx, edi */
  edx = edi;
L_48a59b: /* 48a59b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48a59e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 48a5a1: jmp 0x48a5b0 */
  goto L_48a5b0;
L_48a5a3: /* 48a5a3: mov bx, word ptr [eax] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 48a5a6: cmp bx, word ptr [ecx] */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48a5a9: jne 0x48a5d1 */
  if (!zf) goto L_48a5d1;
L_48a5ab: /* 48a5ab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 48a5ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 48a5ad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 48a5ae: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 48a5af: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
L_48a5b0: /* 48a5b0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 48a5b2: jg 0x48a5a3 */
  if ((!zf && sf == of)) goto L_48a5a3;
L_48a5b4: /* 48a5b4: xor eax, eax */
  eax = 0;
L_48a5b6: /* 48a5b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48a5b8: jne 0x48a648 */
  if (!zf) goto L_48a648;
L_48a5be: /* 48a5be: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a5c0: je 0x48a648 */
  if (zf) goto L_48a648;
L_48a5c6: /* 48a5c6: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48a5c8: setge al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 48a5cb: lea eax, [eax + eax - 1] */
  eax = (uint32_t)(eax + eax + 0xffffffffu);
/* 48a5cf: jmp 0x48a648 */
  goto L_48a648;
L_48a5d1: /* 48a5d1: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 48a5d4: cmp ax, word ptr [ecx] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 48a5d7: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 48a5d9: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48a5dc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 48a5dd: jmp 0x48a5b6 */
  goto L_48a5b6;
L_48a5df: /* 48a5df: call dword ptr [0x48e124] */
  esp -= 4; W32(esp, 0x48a5e5u); SPILL(); f_412fe5(); if (g_unwind) return; /* MSVCR70!___lc_collate_cp_func */ RELOAD();
/* 48a5e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a5e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48a5e7: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48a5ea: xor edi, edi */
  edi = 0;
/* 48a5ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a5ed: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48a5f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48a5f1: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a5f4: call 0x48bf50 */
  esp -= 4; W32(esp, 0x48a5f9u); SPILL(); f_48bf50(); if (g_unwind) return; RELOAD();
/* 48a5f9: mov esi, eax */
  esi = eax;
/* 48a5fb: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48a5fe: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a600: jne 0x48a62d */
  if (!zf) goto L_48a62d;
L_48a602: /* 48a602: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a605: je 0x48a611 */
  if (zf) goto L_48a611;
L_48a607: /* 48a607: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48a609: call 0x48bf2c */
  esp -= 4; W32(esp, 0x48a60eu); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 48a60e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a60f: jmp 0x48a61a */
  goto L_48a61a;
L_48a611: /* 48a611: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x48a613u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48a613: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a614: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x48a61au); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_48a61a: /* 48a61a: call dword ptr [0x48e0b0] */
  esp -= 4; W32(esp, 0x48a620u); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 48a620: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 48a626: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 48a62b: jmp 0x48a648 */
  goto L_48a648;
L_48a62d: /* 48a62d: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a630: je 0x48a63c */
  if (zf) goto L_48a63c;
L_48a632: /* 48a632: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48a634: call 0x48bf2c */
  esp -= 4; W32(esp, 0x48a639u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 48a639: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a63a: jmp 0x48a645 */
  goto L_48a645;
L_48a63c: /* 48a63c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x48a63eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48a63e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a63f: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x48a645u); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_48a645: /* 48a645: lea eax, [esi - 2] */
  eax = (uint32_t)(esi + 0xfffffffeu);
L_48a648: /* 48a648: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48a649: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48a64a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48a64b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48a64c: ret  */
  esp += 4; SPILL(); return;
}

void f_48a64d(void) {
  LOAD_REGS();
L_48a64d: /* 48a64d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48a64e: mov ebp, esp */
  ebp = esp;
/* 48a650: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48a651: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48a652: mov ebx, dword ptr [0x48e11c] */
  ebx = R32((uint32_t)(0x48e11cu));
/* 48a658: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a659: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 48a65c: sub esi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 48a65f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48a660: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 48a663: sub edi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 48a666: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 48a668: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 48a66a: mov dword ptr [ebp + 0xc], 0x7fffffff */
  W32((uint32_t)(ebp + 0xcu), 0x7fffffffu);
/* 48a671: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x48a673u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48a673: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a674: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x48a67au); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 48a67a: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x48a680u); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 48a680: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48a682: je 0x48a69e */
  if (zf) goto L_48a69e;
L_48a684: /* 48a684: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x48a686u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48a686: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a687: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x48a68du); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 48a68d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48a68f: call 0x48bf32 */
  esp -= 4; W32(esp, 0x48a694u); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 48a694: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a695: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 48a69c: jmp 0x48a6a2 */
  goto L_48a6a2;
L_48a69e: /* 48a69e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_48a6a2: /* 48a6a2: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 48a6a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48a6a7: jne 0x48a6b4 */
  if (!zf) goto L_48a6b4;
L_48a6a9: /* 48a6a9: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x48a6afu); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 48a6af: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 48a6b2: jmp 0x48a6b6 */
  goto L_48a6b6;
L_48a6b4: /* 48a6b4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_48a6b6: /* 48a6b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48a6b8: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 48a6bb: jne 0x48a6f2 */
  if (!zf) goto L_48a6f2;
L_48a6bd: /* 48a6bd: cmp dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a6c0: je 0x48a6cc */
  if (zf) goto L_48a6cc;
L_48a6c2: /* 48a6c2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48a6c4: call 0x48bf2c */
  esp -= 4; W32(esp, 0x48a6c9u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 48a6c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a6ca: jmp 0x48a6d5 */
  goto L_48a6d5;
L_48a6cc: /* 48a6cc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x48a6ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48a6ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a6cf: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x48a6d5u); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_48a6d5: /* 48a6d5: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 48a6d7: ja 0x48a6eb */
  if ((!cf && !zf)) goto L_48a6eb;
L_48a6d9: /* 48a6d9: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 48a6dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a6dd: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48a6e0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48a6e3: call 0x4617bb */
  esp -= 4; W32(esp, 0x48a6e8u); SPILL(); hle_memcpy(); RELOAD();
/* 48a6e8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_48a6eb: /* 48a6eb: mov eax, esi */
  eax = esi;
/* 48a6ed: jmp 0x48a797 */
  goto L_48a797;
L_48a6f2: /* 48a6f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48a6f3: call dword ptr [0x48e0e4] */
  esp -= 4; W32(esp, 0x48a6f9u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 48a6f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48a6fb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a6fc: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* 48a6ff: je 0x48a76d */
  if (zf) goto L_48a76d;
L_48a701: /* 48a701: mov ebx, dword ptr [0x48e124] */
  ebx = R32((uint32_t)(0x48e124u));
/* 48a707: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x48a709u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48a709: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a70a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48a70b: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 48a70e: mov edi, 0x400 */
  edi = 0x400u;
/* 48a713: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a714: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48a717: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48a718: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a71b: call 0x48bf56 */
  esp -= 4; W32(esp, 0x48a720u); SPILL(); f_48bf56(); if (g_unwind) return; RELOAD();
/* 48a720: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48a723: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48a725: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 48a728: jne 0x48a751 */
  if (!zf) goto L_48a751;
L_48a72a: /* 48a72a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x48a72cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 48a72c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a72d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48a72f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48a731: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a732: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 48a735: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48a736: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48a739: call 0x48bf56 */
  esp -= 4; W32(esp, 0x48a73eu); SPILL(); f_48bf56(); if (g_unwind) return; RELOAD();
/* 48a73e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48a741: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48a743: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 48a746: jne 0x48a76d */
  if (!zf) goto L_48a76d;
L_48a748: /* 48a748: mov dword ptr [ebp + 0xc], 0x7fffffff */
  W32((uint32_t)(ebp + 0xcu), 0x7fffffffu);
/* 48a74f: jmp 0x48a76d */
  goto L_48a76d;
L_48a751: /* 48a751: xor eax, eax */
  eax = 0;
/* 48a753: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48a756: jle 0x48a76d */
  if ((zf || sf != of)) goto L_48a76d;
L_48a758: /* 48a758: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 48a75b: movzx cx, byte ptr [eax + ecx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + ecx)))) & 0xffffu);
/* 48a760: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 48a763: mov word ptr [edx + eax*2], cx */
  W16((uint32_t)(edx + eax*2), (ecx & 0xffffu));
/* 48a767: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 48a768: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48a76b: jl 0x48a758 */
  if ((sf != of)) goto L_48a758;
L_48a76d: /* 48a76d: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48a771: je 0x48a77d */
  if (zf) goto L_48a77d;
L_48a773: /* 48a773: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48a775: call 0x48bf2c */
  esp -= 4; W32(esp, 0x48a77au); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 48a77a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a77b: jmp 0x48a78a */
  goto L_48a78a;
L_48a77d: /* 48a77d: call dword ptr [0x48e11c] */
  esp -= 4; W32(esp, 0x48a783u); SPILL(); f_4126bb(); if (g_unwind) return; /* MSVCR70!___unguarded_readlc_active_add_func */ RELOAD();
/* 48a783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a784: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x48a78au); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
L_48a78a: /* 48a78a: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 48a78d: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x48a793u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 48a793: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 48a796: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_48a797: /* 48a797: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48a798: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48a799: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48a79a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48a79b: ret  */
  esp += 4; SPILL(); return;
}

void f_48a79c(void) {
  LOAD_REGS();
L_48a79c: /* 48a79c: jmp 0x4620da */
  SPILL(); f_4620da(); return;
}

void f_48a7a1(void) {
  LOAD_REGS();
L_48a7a1: /* 48a7a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48a7a2: mov ebp, esp */
  ebp = esp;
/* 48a7a4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48a7a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a7a8: call 0x48aca1 */
  esp -= 4; W32(esp, 0x48a7adu); SPILL(); f_48aca1(); if (g_unwind) return; RELOAD();
/* 48a7ad: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48a7b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 48a7b2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a7b3: je 0x48a84c */
  if (zf) goto L_48a84c;
L_48a7b9: /* 48a7b9: jle 0x48a7c5 */
  if ((zf || sf != of)) goto L_48a7c5;
L_48a7bb: /* 48a7bb: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48a7be: jg 0x48a7c5 */
  if ((!zf && sf == of)) goto L_48a7c5;
L_48a7c0: /* 48a7c0: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48a7c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48a7c4: ret  */
  esp += 4; SPILL(); return;
L_48a7c5: /* 48a7c5: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48a7c8: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 48a7ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48a7d0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48a7d3: jnp 0x48a84c */
  if (!pf) goto L_48a84c;
L_48a7d5: /* 48a7d5: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48a7d8: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 48a7de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48a7e0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48a7e3: jp 0x48a7ee */
  if (pf) goto L_48a7ee;
L_48a7e5: /* 48a7e5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48a7e7: fchs  */
  ST0 = -ST0;
/* 48a7e9: fst qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0);
/* 48a7ec: fstp st(1) */
  STI(1) = ST0; FPOP();
L_48a7ee: /* 48a7ee: fcomp qword ptr [0x48e320] */
  fpu_com(ST0, F64((uint32_t)(0x48e320u)));
  FPOP();
/* 48a7f4: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 48a7f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48a7f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48a7f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48a7fa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48a7fd: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48a800: jp 0x48a821 */
  if (pf) goto L_48a821;
L_48a802: /* 48a802: fld1  */
  FPUSH(1.0);
/* 48a804: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48a807: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a808: call 0x48a851 */
  esp -= 4; W32(esp, 0x48a80du); SPILL(); f_48a851(); if (g_unwind) return; RELOAD();
/* 48a80d: fld qword ptr [0x4c8e90] */
  { double v = F64((uint32_t)(0x4c8e90u)); FPUSH(v); }
/* 48a813: fdiv qword ptr [ebp + 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0x8u)));
/* 48a816: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48a819: fadd qword ptr [ebp + 8] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0x8u)));
/* 48a81c: fmul qword ptr [ebp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x10u)));
/* 48a81f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48a820: ret  */
  esp += 4; SPILL(); return;
L_48a821: /* 48a821: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48a824: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48a827: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a828: call 0x48a851 */
  esp -= 4; W32(esp, 0x48a82du); SPILL(); f_48a851(); if (g_unwind) return; RELOAD();
/* 48a82d: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48a830: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48a833: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 48a836: je 0x48a83f */
  if (zf) goto L_48a83f;
L_48a838: /* 48a838: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 48a839: jne 0x48a7c0 */
  if (!zf) goto L_48a7c0;
L_48a83b: /* 48a83b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48a83d: jmp 0x48a841 */
  goto L_48a841;
L_48a83f: /* 48a83f: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
L_48a841: /* 48a841: call 0x48b895 */
  esp -= 4; W32(esp, 0x48a846u); SPILL(); f_48b895(); if (g_unwind) return; RELOAD();
/* 48a846: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a847: jmp 0x48a7c0 */
  goto L_48a7c0;
L_48a84c: /* 48a84c: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48a84f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48a850: ret  */
  esp += 4; SPILL(); return;
}

void f_48a851(void) {
  LOAD_REGS();
L_48a851: /* 48a851: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48a852: mov ebp, esp */
  ebp = esp;
/* 48a854: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48a855: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48a856: fld qword ptr [0x4c9170] */
  { double v = F64((uint32_t)(0x4c9170u)); FPUSH(v); }
/* 48a85c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a85d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 48a860: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48a862: fchs  */
  ST0 = -ST0;
/* 48a864: fcomp qword ptr [esi] */
  fpu_com(ST0, F64((uint32_t)(esi)));
  FPOP();
/* 48a866: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48a868: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48a86b: je 0x48a974 */
  if (zf) goto L_48a974;
L_48a871: /* 48a871: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 48a874: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 48a87a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48a87c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48a87f: jnp 0x48a974 */
  if (!pf) goto L_48a974;
L_48a885: /* 48a885: fcomp qword ptr [esi] */
  fpu_com(ST0, F64((uint32_t)(esi)));
  FPOP();
/* 48a887: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48a889: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48a88c: jp 0x48a89d */
  if (pf) goto L_48a89d;
L_48a88e: /* 48a88e: fld qword ptr [0x48e2e0] */
  { double v = F64((uint32_t)(0x48e2e0u)); FPUSH(v); }
/* 48a894: mov ax, 1 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x1u) & 0xffffu);
/* 48a898: jmp 0x48a97b */
  goto L_48a97b;
L_48a89d: /* 48a89d: fld qword ptr [0x4c9178] */
  { double v = F64((uint32_t)(0x4c9178u)); FPUSH(v); }
/* 48a8a3: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 48a8a5: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 48a8ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48a8ad: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48a8b0: jp 0x48a8ba */
  if (pf) goto L_48a8ba;
L_48a8b2: /* 48a8b2: fld qword ptr [0x4c9180] */
  { double v = F64((uint32_t)(0x4c9180u)); FPUSH(v); }
/* 48a8b8: jmp 0x48a8c0 */
  goto L_48a8c0;
L_48a8ba: /* 48a8ba: fld qword ptr [0x4c8df8] */
  { double v = F64((uint32_t)(0x4c8df8u)); FPUSH(v); }
L_48a8c0: /* 48a8c0: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 48a8c2: call 0x463321 */
  esp -= 4; W32(esp, 0x48a8c7u); SPILL(); f_463321(); if (g_unwind) return; RELOAD();
/* 48a8c7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48a8c9: mov ecx, eax */
  ecx = eax;
/* 48a8cb: movsx eax, cx */
  eax = (uint32_t)(int32_t)(int16_t)((ecx & 0xffffu));
/* 48a8ce: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 48a8d1: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48a8d4: fld qword ptr [0x4c9160] */
  { double v = F64((uint32_t)(0x4c9160u)); FPUSH(v); }
/* 48a8da: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48a8dc: fsubr qword ptr [esi] */
  ST0 = (F64((uint32_t)(esi))) - ST0;
/* 48a8de: fld qword ptr [0x4c9168] */
  { double v = F64((uint32_t)(0x4c9168u)); FPUSH(v); }
/* 48a8e4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 48a8e6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 48a8e8: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 48a8ea: fld qword ptr [0x48e2d0] */
  { double v = F64((uint32_t)(0x48e2d0u)); FPUSH(v); }
/* 48a8f0: fchs  */
  ST0 = -ST0;
/* 48a8f2: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 48a8f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48a8f6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48a8f9: jp 0x48a911 */
  if (pf) goto L_48a911;
L_48a8fb: /* 48a8fb: fcom qword ptr [0x48e2d0] */
  fpu_com(ST0, F64((uint32_t)(0x48e2d0u)));
/* 48a901: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48a903: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48a906: jp 0x48a911 */
  if (pf) goto L_48a911;
L_48a908: /* 48a908: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48a90a: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 48a90d: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 48a90f: jmp 0x48a960 */
  goto L_48a960;
L_48a911: /* 48a911: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48a913: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 48a914: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48a916: fld qword ptr [0x4c9148] */
  { double v = F64((uint32_t)(0x4c9148u)); FPUSH(v); }
/* 48a91c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 48a91e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48a920: fadd qword ptr [0x4c9150] */
  ST0 = ST0 + (F64((uint32_t)(0x4c9150u)));
/* 48a926: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48a928: fadd qword ptr [0x4c9158] */
  ST0 = ST0 + (F64((uint32_t)(0x4c9158u)));
/* 48a92e: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 48a931: fld qword ptr [0x4c9128] */
  { double v = F64((uint32_t)(0x4c9128u)); FPUSH(v); }
/* 48a937: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48a939: fadd qword ptr [0x4c9130] */
  ST0 = ST0 + (F64((uint32_t)(0x4c9130u)));
/* 48a93f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48a941: fadd qword ptr [0x4c9138] */
  ST0 = ST0 + (F64((uint32_t)(0x4c9138u)));
/* 48a947: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 48a949: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48a94b: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 48a94e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 48a950: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 48a953: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 48a955: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 48a957: fmul qword ptr [ebp + 0xc] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xcu)));
/* 48a95a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 48a95c: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 48a95e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_48a960: /* 48a960: movsx eax, cx */
  eax = (uint32_t)(int32_t)(int16_t)((ecx & 0xffffu));
/* 48a963: movsx ecx, word ptr [ebp + 0x14] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0x14u)));
/* 48a967: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 48a969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a96a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a96b: call 0x48b8de */
  esp -= 4; W32(esp, 0x48a970u); SPILL(); f_48b8de(); if (g_unwind) return; RELOAD();
/* 48a970: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a971: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a972: jmp 0x48a97d */
  goto L_48a97d;
L_48a974: /* 48a974: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48a976: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 48a979: fldz  */
  FPUSH(0.0);
L_48a97b: /* 48a97b: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
L_48a97d: /* 48a97d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48a97e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48a97f: ret  */
  esp += 4; SPILL(); return;
}

void f_48a980(void) {
  LOAD_REGS();
L_48a980: /* 48a980: jmp 0x48aca1 */
  SPILL(); f_48aca1(); return;
}

void f_48a985(void) {
  LOAD_REGS();
L_48a985: /* 48a985: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48a986: mov ebp, esp */
  ebp = esp;
/* 48a988: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48a989: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48a98a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48a98d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48a98e: call 0x48aca1 */
  esp -= 4; W32(esp, 0x48a993u); SPILL(); f_48aca1(); if (g_unwind) return; RELOAD();
/* 48a993: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48a996: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 48a999: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48a99a: je 0x48aac2 */
  if (zf) goto L_48aac2;
L_48a9a0: /* 48a9a0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 48a9a1: je 0x48aaa0 */
  if (zf) goto L_48aaa0;
L_48a9a7: /* 48a9a7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 48a9a8: je 0x48aab0 */
  if (zf) goto L_48aab0;
L_48a9ae: /* 48a9ae: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48a9b1: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 48a9b7: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48a9ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48a9bc: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48a9bf: jp 0x48a9da */
  if (pf) goto L_48a9da;
L_48a9c1: /* 48a9c1: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 48a9c7: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48a9ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48a9cc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48a9cf: jp 0x48aac8 */
  if (pf) goto L_48aac8;
L_48a9d5: /* 48a9d5: jmp 0x48aabe */
  goto L_48aabe;
L_48a9da: /* 48a9da: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 48a9e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48a9e1: xor esi, esi */
  esi = 0;
/* 48a9e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48a9e5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48a9e8: jp 0x48a9f4 */
  if (pf) goto L_48a9f4;
L_48a9ea: /* 48a9ea: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48a9ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 48a9ed: fchs  */
  ST0 = -ST0;
/* 48a9ef: fst qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0);
/* 48a9f2: fstp st(1) */
  STI(1) = ST0; FPOP();
L_48a9f4: /* 48a9f4: fcom qword ptr [0x48e300] */
  fpu_com(ST0, F64((uint32_t)(0x48e300u)));
/* 48a9fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48a9fc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48a9ff: jp 0x48aa09 */
  if (pf) goto L_48aa09;
L_48aa01: /* 48aa01: fmul qword ptr [ebp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x10u)));
/* 48aa04: jmp 0x48aa9a */
  goto L_48aa9a;
L_48aa09: /* 48aa09: fcom qword ptr [0x4c8e80] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e80u)));
/* 48aa0f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48aa11: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48aa14: jp 0x48aa41 */
  if (pf) goto L_48aa41;
L_48aa16: /* 48aa16: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48aa18: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 48aa1a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48aa1c: push 0x4c9188 */
  { uint32_t v = 0x4c9188u; esp -= 4; W32(esp, v); }
/* 48aa21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48aa22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48aa23: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 48aa26: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48aa28: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 48aa2b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48aa2e: call 0x48b8bf */
  esp -= 4; W32(esp, 0x48aa33u); SPILL(); f_48b8bf(); if (g_unwind) return; RELOAD();
/* 48aa33: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 48aa36: fadd qword ptr [0x4c8e80] */
  ST0 = ST0 + (F64((uint32_t)(0x4c8e80u)));
/* 48aa3c: fmul qword ptr [ebp + 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x8u)));
/* 48aa3f: jmp 0x48aa6c */
  goto L_48aa6c;
L_48aa41: /* 48aa41: fcomp qword ptr [0x48e320] */
  fpu_com(ST0, F64((uint32_t)(0x48e320u)));
  FPOP();
/* 48aa47: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 48aa49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48aa4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48aa4b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48aa4d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48aa50: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48aa53: jp 0x48aa71 */
  if (pf) goto L_48aa71;
L_48aa55: /* 48aa55: fld1  */
  FPUSH(1.0);
/* 48aa57: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48aa5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48aa5b: call 0x48a851 */
  esp -= 4; W32(esp, 0x48aa60u); SPILL(); f_48a851(); if (g_unwind) return; RELOAD();
/* 48aa60: fld qword ptr [0x4c8e90] */
  { double v = F64((uint32_t)(0x4c8e90u)); FPUSH(v); }
/* 48aa66: fdiv qword ptr [ebp + 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0x8u)));
/* 48aa69: fsubr qword ptr [ebp + 8] */
  ST0 = (F64((uint32_t)(ebp + 0x8u))) - ST0;
L_48aa6c: /* 48aa6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48aa6f: jmp 0x48aa01 */
  goto L_48aa01;
L_48aa71: /* 48aa71: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48aa74: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48aa77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48aa78: call 0x48a851 */
  esp -= 4; W32(esp, 0x48aa7du); SPILL(); f_48a851(); if (g_unwind) return; RELOAD();
/* 48aa7d: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48aa80: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48aa83: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 48aa86: je 0x48aa8f */
  if (zf) goto L_48aa8f;
L_48aa88: /* 48aa88: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 48aa89: jne 0x48aa97 */
  if (!zf) goto L_48aa97;
L_48aa8b: /* 48aa8b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48aa8d: jmp 0x48aa91 */
  goto L_48aa91;
L_48aa8f: /* 48aa8f: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
L_48aa91: /* 48aa91: call 0x48b895 */
  esp -= 4; W32(esp, 0x48aa96u); SPILL(); f_48b895(); if (g_unwind) return; RELOAD();
/* 48aa96: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_48aa97: /* 48aa97: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_48aa9a: /* 48aa9a: test si, si */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 48aa9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48aa9e: jmp 0x48aabc */
  goto L_48aabc;
L_48aaa0: /* 48aaa0: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48aaa3: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 48aaa9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48aaab: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48aaae: jnp 0x48aab5 */
  if (!pf) goto L_48aab5;
L_48aab0: /* 48aab0: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48aab3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48aab4: ret  */
  esp += 4; SPILL(); return;
L_48aab5: /* 48aab5: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48aab8: test byte ptr [ebp + 0xf], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfu))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
L_48aabc: /* 48aabc: je 0x48aac8 */
  if (zf) goto L_48aac8;
L_48aabe: /* 48aabe: fchs  */
  ST0 = -ST0;
/* 48aac0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48aac1: ret  */
  esp += 4; SPILL(); return;
L_48aac2: /* 48aac2: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48aac5: fmul qword ptr [ebp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x10u)));
L_48aac8: /* 48aac8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48aac9: ret  */
  esp += 4; SPILL(); return;
}

void f_48aaca(void) {
  LOAD_REGS();
L_48aaca: /* 48aaca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48aacb: mov ebp, esp */
  ebp = esp;
/* 48aacd: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48aad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48aad1: call 0x48aca1 */
  esp -= 4; W32(esp, 0x48aad6u); SPILL(); f_48aca1(); if (g_unwind) return; RELOAD();
/* 48aad6: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48aad9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 48aadb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48aadc: je 0x48ab75 */
  if (zf) goto L_48ab75;
L_48aae2: /* 48aae2: jle 0x48aaee */
  if ((zf || sf != of)) goto L_48aaee;
L_48aae4: /* 48aae4: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48aae7: jg 0x48aaee */
  if ((!zf && sf == of)) goto L_48aaee;
L_48aae9: /* 48aae9: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48aaec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48aaed: ret  */
  esp += 4; SPILL(); return;
L_48aaee: /* 48aaee: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48aaf1: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 48aaf7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48aaf9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48aafc: jnp 0x48ab75 */
  if (!pf) goto L_48ab75;
L_48aafe: /* 48aafe: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48ab01: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 48ab07: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ab09: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48ab0c: jp 0x48ab17 */
  if (pf) goto L_48ab17;
L_48ab0e: /* 48ab0e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48ab10: fchs  */
  ST0 = -ST0;
/* 48ab12: fst qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0);
/* 48ab15: fstp st(1) */
  STI(1) = ST0; FPOP();
L_48ab17: /* 48ab17: fcomp qword ptr [0x48e3a0] */
  fpu_com(ST0, F64((uint32_t)(0x48e3a0u)));
  FPOP();
/* 48ab1d: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 48ab1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48ab20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48ab21: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ab23: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48ab26: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48ab29: jp 0x48ab4a */
  if (pf) goto L_48ab4a;
L_48ab2b: /* 48ab2b: fld1  */
  FPUSH(1.0);
/* 48ab2d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48ab30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48ab31: call 0x48ab7a */
  esp -= 4; W32(esp, 0x48ab36u); SPILL(); f_48ab7a(); if (g_unwind) return; RELOAD();
/* 48ab36: fld qword ptr [0x4c8e90] */
  { double v = F64((uint32_t)(0x4c8e90u)); FPUSH(v); }
/* 48ab3c: fdiv qword ptr [ebp + 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0x8u)));
/* 48ab3f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48ab42: fadd qword ptr [ebp + 8] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0x8u)));
/* 48ab45: fmul qword ptr [ebp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x10u)));
/* 48ab48: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48ab49: ret  */
  esp += 4; SPILL(); return;
L_48ab4a: /* 48ab4a: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48ab4d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48ab50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48ab51: call 0x48ab7a */
  esp -= 4; W32(esp, 0x48ab56u); SPILL(); f_48ab7a(); if (g_unwind) return; RELOAD();
/* 48ab56: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48ab59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48ab5c: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 48ab5f: je 0x48ab68 */
  if (zf) goto L_48ab68;
L_48ab61: /* 48ab61: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 48ab62: jne 0x48aae9 */
  if (!zf) goto L_48aae9;
L_48ab64: /* 48ab64: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48ab66: jmp 0x48ab6a */
  goto L_48ab6a;
L_48ab68: /* 48ab68: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
L_48ab6a: /* 48ab6a: call 0x48b895 */
  esp -= 4; W32(esp, 0x48ab6fu); SPILL(); f_48b895(); if (g_unwind) return; RELOAD();
/* 48ab6f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48ab70: jmp 0x48aae9 */
  goto L_48aae9;
L_48ab75: /* 48ab75: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48ab78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48ab79: ret  */
  esp += 4; SPILL(); return;
}

void f_48ab7a(void) {
  LOAD_REGS();
L_48ab7a: /* 48ab7a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48ab7b: mov ebp, esp */
  ebp = esp;
/* 48ab7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48ab7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48ab7f: fld qword ptr [0x4c9210] */
  { double v = F64((uint32_t)(0x4c9210u)); FPUSH(v); }
/* 48ab85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48ab86: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 48ab89: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48ab8b: fchs  */
  ST0 = -ST0;
/* 48ab8d: fcomp qword ptr [esi] */
  fpu_com(ST0, F64((uint32_t)(esi)));
  FPOP();
/* 48ab8f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ab91: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48ab94: je 0x48ac95 */
  if (zf) goto L_48ac95;
L_48ab9a: /* 48ab9a: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 48ab9d: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 48aba3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48aba5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48aba8: jnp 0x48ac95 */
  if (!pf) goto L_48ac95;
L_48abae: /* 48abae: fcomp qword ptr [esi] */
  fpu_com(ST0, F64((uint32_t)(esi)));
  FPOP();
/* 48abb0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48abb2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48abb5: jp 0x48abc6 */
  if (pf) goto L_48abc6;
L_48abb7: /* 48abb7: fld qword ptr [0x48e360] */
  { double v = F64((uint32_t)(0x48e360u)); FPUSH(v); }
/* 48abbd: mov ax, 1 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x1u) & 0xffffu);
/* 48abc1: jmp 0x48ac9c */
  goto L_48ac9c;
L_48abc6: /* 48abc6: fld qword ptr [0x4c9218] */
  { double v = F64((uint32_t)(0x4c9218u)); FPUSH(v); }
/* 48abcc: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 48abce: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 48abd4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48abd6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48abd9: jp 0x48abe3 */
  if (pf) goto L_48abe3;
L_48abdb: /* 48abdb: fld qword ptr [0x4c9180] */
  { double v = F64((uint32_t)(0x4c9180u)); FPUSH(v); }
/* 48abe1: jmp 0x48abe9 */
  goto L_48abe9;
L_48abe3: /* 48abe3: fld qword ptr [0x4c8df8] */
  { double v = F64((uint32_t)(0x4c8df8u)); FPUSH(v); }
L_48abe9: /* 48abe9: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 48abeb: call 0x463321 */
  esp -= 4; W32(esp, 0x48abf0u); SPILL(); f_463321(); if (g_unwind) return; RELOAD();
/* 48abf0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48abf2: mov ecx, eax */
  ecx = eax;
/* 48abf4: movsx eax, cx */
  eax = (uint32_t)(int32_t)(int16_t)((ecx & 0xffffu));
/* 48abf7: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 48abfa: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48abfd: fld qword ptr [0x4c9200] */
  { double v = F64((uint32_t)(0x4c9200u)); FPUSH(v); }
/* 48ac03: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48ac05: fsubr qword ptr [esi] */
  ST0 = (F64((uint32_t)(esi))) - ST0;
/* 48ac07: fld qword ptr [0x4c9208] */
  { double v = F64((uint32_t)(0x4c9208u)); FPUSH(v); }
/* 48ac0d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 48ac0f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 48ac11: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 48ac13: fld qword ptr [0x48e340] */
  { double v = F64((uint32_t)(0x48e340u)); FPUSH(v); }
/* 48ac19: fchs  */
  ST0 = -ST0;
/* 48ac1b: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 48ac1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ac1f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48ac22: jp 0x48ac3a */
  if (pf) goto L_48ac3a;
L_48ac24: /* 48ac24: fcom qword ptr [0x48e340] */
  fpu_com(ST0, F64((uint32_t)(0x48e340u)));
/* 48ac2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ac2c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48ac2f: jp 0x48ac3a */
  if (pf) goto L_48ac3a;
L_48ac31: /* 48ac31: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48ac33: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 48ac36: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 48ac38: jmp 0x48ac81 */
  goto L_48ac81;
L_48ac3a: /* 48ac3a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48ac3c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 48ac3d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48ac3f: fld qword ptr [0x4c91e8] */
  { double v = F64((uint32_t)(0x4c91e8u)); FPUSH(v); }
/* 48ac45: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48ac47: fadd qword ptr [0x4c91f0] */
  ST0 = ST0 + (F64((uint32_t)(0x4c91f0u)));
/* 48ac4d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48ac4f: fadd qword ptr [0x4c91f8] */
  ST0 = ST0 + (F64((uint32_t)(0x4c91f8u)));
/* 48ac55: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 48ac58: fld qword ptr [0x4c91d8] */
  { double v = F64((uint32_t)(0x4c91d8u)); FPUSH(v); }
/* 48ac5e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 48ac60: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48ac62: fadd qword ptr [0x4c91e0] */
  ST0 = ST0 + (F64((uint32_t)(0x4c91e0u)));
/* 48ac68: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 48ac6a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48ac6c: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 48ac6f: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 48ac71: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 48ac74: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 48ac76: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 48ac78: fmul qword ptr [ebp + 0xc] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xcu)));
/* 48ac7b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 48ac7d: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 48ac7f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_48ac81: /* 48ac81: movsx eax, cx */
  eax = (uint32_t)(int32_t)(int16_t)((ecx & 0xffffu));
/* 48ac84: movsx ecx, word ptr [ebp + 0x14] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0x14u)));
/* 48ac88: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 48ac8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48ac8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48ac8c: call 0x48b8de */
  esp -= 4; W32(esp, 0x48ac91u); SPILL(); f_48b8de(); if (g_unwind) return; RELOAD();
/* 48ac91: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48ac92: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48ac93: jmp 0x48ac9e */
  goto L_48ac9e;
L_48ac95: /* 48ac95: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48ac97: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 48ac9a: fldz  */
  FPUSH(0.0);
L_48ac9c: /* 48ac9c: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
L_48ac9e: /* 48ac9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48ac9f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48aca0: ret  */
  esp += 4; SPILL(); return;
}

void f_48aca1(void) {
  LOAD_REGS();
L_48aca1: /* 48aca1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 48aca5: xor ecx, ecx */
  ecx = 0;
/* 48aca7: mov cx, word ptr [eax + 6] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x6u))) & 0xffffu);
/* 48acab: mov edx, ecx */
  edx = ecx;
/* 48acad: and dx, 0x7ff0 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a & b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48acb2: cmp dx, 0x7ff0 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48acb7: jne 0x48acd9 */
  if (!zf) goto L_48acd9;
L_48acb9: /* 48acb9: test cl, 0xf */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48acbc: jne 0x48acd5 */
  if (!zf) goto L_48acd5;
L_48acbe: /* 48acbe: xor ecx, ecx */
  ecx = 0;
/* 48acc0: cmp word ptr [eax + 4], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48acc4: jne 0x48acd5 */
  if (!zf) goto L_48acd5;
L_48acc6: /* 48acc6: cmp word ptr [eax + 2], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x2u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48acca: jne 0x48acd5 */
  if (!zf) goto L_48acd5;
L_48accc: /* 48accc: cmp word ptr [eax], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48accf: jne 0x48acd5 */
  if (!zf) goto L_48acd5;
L_48acd1: /* 48acd1: xor eax, eax */
  eax = 0;
/* 48acd3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 48acd4: ret  */
  esp += 4; SPILL(); return;
L_48acd5: /* 48acd5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 48acd7: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 48acd8: ret  */
  esp += 4; SPILL(); return;
L_48acd9: /* 48acd9: movzx ecx, cx */
  ecx = (uint32_t)((ecx & 0xffffu));
/* 48acdc: test ecx, 0xffff7fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffff7fffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48ace2: jne 0x48acfb */
  if (!zf) goto L_48acfb;
L_48ace4: /* 48ace4: xor ecx, ecx */
  ecx = 0;
/* 48ace6: cmp word ptr [eax + 4], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48acea: jne 0x48acfb */
  if (!zf) goto L_48acfb;
L_48acec: /* 48acec: cmp word ptr [eax + 2], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x2u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48acf0: jne 0x48acfb */
  if (!zf) goto L_48acfb;
L_48acf2: /* 48acf2: cmp word ptr [eax], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48acf5: jne 0x48acfb */
  if (!zf) goto L_48acfb;
L_48acf7: /* 48acf7: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 48acfa: ret  */
  esp += 4; SPILL(); return;
L_48acfb: /* 48acfb: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48acff: ret  */
  esp += 4; SPILL(); return;
}

void f_48ad00(void) {
  LOAD_REGS();
L_48ad00: /* 48ad00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48ad01: mov ebp, esp */
  ebp = esp;
/* 48ad03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48ad04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48ad05: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48ad08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48ad09: call 0x48aca1 */
  esp -= 4; W32(esp, 0x48ad0eu); SPILL(); f_48aca1(); if (g_unwind) return; RELOAD();
/* 48ad0e: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48ad11: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 48ad14: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48ad15: je 0x48ae3d */
  if (zf) goto L_48ae3d;
L_48ad1b: /* 48ad1b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 48ad1c: je 0x48ae1b */
  if (zf) goto L_48ae1b;
L_48ad22: /* 48ad22: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 48ad23: je 0x48ae2b */
  if (zf) goto L_48ae2b;
L_48ad29: /* 48ad29: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48ad2c: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 48ad32: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48ad35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ad37: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48ad3a: jp 0x48ad55 */
  if (pf) goto L_48ad55;
L_48ad3c: /* 48ad3c: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 48ad42: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48ad45: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ad47: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48ad4a: jp 0x48ae43 */
  if (pf) goto L_48ae43;
L_48ad50: /* 48ad50: jmp 0x48ae39 */
  goto L_48ae39;
L_48ad55: /* 48ad55: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 48ad5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48ad5c: xor esi, esi */
  esi = 0;
/* 48ad5e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ad60: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48ad63: jp 0x48ad6f */
  if (pf) goto L_48ad6f;
L_48ad65: /* 48ad65: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48ad67: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 48ad68: fchs  */
  ST0 = -ST0;
/* 48ad6a: fst qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0);
/* 48ad6d: fstp st(1) */
  STI(1) = ST0; FPOP();
L_48ad6f: /* 48ad6f: fcom qword ptr [0x48e380] */
  fpu_com(ST0, F64((uint32_t)(0x48e380u)));
/* 48ad75: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ad77: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48ad7a: jp 0x48ad84 */
  if (pf) goto L_48ad84;
L_48ad7c: /* 48ad7c: fmul qword ptr [ebp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x10u)));
/* 48ad7f: jmp 0x48ae15 */
  goto L_48ae15;
L_48ad84: /* 48ad84: fcom qword ptr [0x4c8e80] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e80u)));
/* 48ad8a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ad8c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48ad8f: jp 0x48adbc */
  if (pf) goto L_48adbc;
L_48ad91: /* 48ad91: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48ad93: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 48ad95: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48ad97: push 0x4c9220 */
  { uint32_t v = 0x4c9220u; esp -= 4; W32(esp, v); }
/* 48ad9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48ad9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48ad9e: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 48ada1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48ada3: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 48ada6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48ada9: call 0x48b8bf */
  esp -= 4; W32(esp, 0x48adaeu); SPILL(); f_48b8bf(); if (g_unwind) return; RELOAD();
/* 48adae: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 48adb1: fadd qword ptr [0x4c8e80] */
  ST0 = ST0 + (F64((uint32_t)(0x4c8e80u)));
/* 48adb7: fmul qword ptr [ebp + 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x8u)));
/* 48adba: jmp 0x48ade7 */
  goto L_48ade7;
L_48adbc: /* 48adbc: fcomp qword ptr [0x48e3a0] */
  fpu_com(ST0, F64((uint32_t)(0x48e3a0u)));
  FPOP();
/* 48adc2: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 48adc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48adc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48adc6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48adc8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48adcb: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48adce: jp 0x48adec */
  if (pf) goto L_48adec;
L_48add0: /* 48add0: fld1  */
  FPUSH(1.0);
/* 48add2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48add5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48add6: call 0x48ab7a */
  esp -= 4; W32(esp, 0x48addbu); SPILL(); f_48ab7a(); if (g_unwind) return; RELOAD();
/* 48addb: fld qword ptr [0x4c8e90] */
  { double v = F64((uint32_t)(0x4c8e90u)); FPUSH(v); }
/* 48ade1: fdiv qword ptr [ebp + 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0x8u)));
/* 48ade4: fsubr qword ptr [ebp + 8] */
  ST0 = (F64((uint32_t)(ebp + 0x8u))) - ST0;
L_48ade7: /* 48ade7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48adea: jmp 0x48ad7c */
  goto L_48ad7c;
L_48adec: /* 48adec: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48adef: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 48adf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48adf3: call 0x48ab7a */
  esp -= 4; W32(esp, 0x48adf8u); SPILL(); f_48ab7a(); if (g_unwind) return; RELOAD();
/* 48adf8: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48adfb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48adfe: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 48ae01: je 0x48ae0a */
  if (zf) goto L_48ae0a;
L_48ae03: /* 48ae03: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 48ae04: jne 0x48ae12 */
  if (!zf) goto L_48ae12;
L_48ae06: /* 48ae06: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48ae08: jmp 0x48ae0c */
  goto L_48ae0c;
L_48ae0a: /* 48ae0a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
L_48ae0c: /* 48ae0c: call 0x48b895 */
  esp -= 4; W32(esp, 0x48ae11u); SPILL(); f_48b895(); if (g_unwind) return; RELOAD();
/* 48ae11: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_48ae12: /* 48ae12: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_48ae15: /* 48ae15: test si, si */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 48ae18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48ae19: jmp 0x48ae37 */
  goto L_48ae37;
L_48ae1b: /* 48ae1b: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48ae1e: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 48ae24: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ae26: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48ae29: jnp 0x48ae30 */
  if (!pf) goto L_48ae30;
L_48ae2b: /* 48ae2b: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48ae2e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48ae2f: ret  */
  esp += 4; SPILL(); return;
L_48ae30: /* 48ae30: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 48ae33: test byte ptr [ebp + 0xf], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfu))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
L_48ae37: /* 48ae37: je 0x48ae43 */
  if (zf) goto L_48ae43;
L_48ae39: /* 48ae39: fchs  */
  ST0 = -ST0;
/* 48ae3b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48ae3c: ret  */
  esp += 4; SPILL(); return;
L_48ae3d: /* 48ae3d: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48ae40: fmul qword ptr [ebp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x10u)));
L_48ae43: /* 48ae43: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48ae44: ret  */
  esp += 4; SPILL(); return;
}

void f_48ae45(void) {
  LOAD_REGS();
L_48ae45: /* 48ae45: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48ae46: mov ebp, esp */
  ebp = esp;
/* 48ae48: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48ae4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48ae4c: call 0x48b008 */
  esp -= 4; W32(esp, 0x48ae51u); SPILL(); f_48b008(); if (g_unwind) return; RELOAD();
/* 48ae51: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48ae54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 48ae56: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48ae57: je 0x48aeef */
  if (zf) goto L_48aeef;
L_48ae5d: /* 48ae5d: jle 0x48ae69 */
  if ((zf || sf != of)) goto L_48ae69;
L_48ae5f: /* 48ae5f: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48ae62: jg 0x48ae69 */
  if ((!zf && sf == of)) goto L_48ae69;
L_48ae64: /* 48ae64: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48ae67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48ae68: ret  */
  esp += 4; SPILL(); return;
L_48ae69: /* 48ae69: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 48ae6c: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 48ae72: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ae74: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48ae77: jnp 0x48aeef */
  if (!pf) goto L_48aeef;
L_48ae79: /* 48ae79: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48ae7c: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 48ae82: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ae84: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48ae87: jp 0x48ae92 */
  if (pf) goto L_48ae92;
L_48ae89: /* 48ae89: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48ae8b: fchs  */
  ST0 = -ST0;
/* 48ae8d: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 48ae90: fstp st(1) */
  STI(1) = ST0; FPOP();
L_48ae92: /* 48ae92: fcomp dword ptr [0x48e410] */
  fpu_com(ST0, F32((uint32_t)(0x48e410u)));
  FPOP();
/* 48ae98: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 48ae9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48ae9b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48ae9d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48aea0: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48aea3: jp 0x48aec4 */
  if (pf) goto L_48aec4;
L_48aea5: /* 48aea5: fld1  */
  FPUSH(1.0);
/* 48aea7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 48aeaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48aeab: call 0x48aef4 */
  esp -= 4; W32(esp, 0x48aeb0u); SPILL(); f_48aef4(); if (g_unwind) return; RELOAD();
/* 48aeb0: fld dword ptr [0x4c8e74] */
  { double v = F32((uint32_t)(0x4c8e74u)); FPUSH(v); }
/* 48aeb6: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* 48aeb9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48aebc: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 48aebf: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 48aec2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48aec3: ret  */
  esp += 4; SPILL(); return;
L_48aec4: /* 48aec4: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 48aec7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 48aeca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48aecb: call 0x48aef4 */
  esp -= 4; W32(esp, 0x48aed0u); SPILL(); f_48aef4(); if (g_unwind) return; RELOAD();
/* 48aed0: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48aed3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48aed6: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 48aed9: je 0x48aee2 */
  if (zf) goto L_48aee2;
L_48aedb: /* 48aedb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 48aedc: jne 0x48ae64 */
  if (!zf) goto L_48ae64;
L_48aede: /* 48aede: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48aee0: jmp 0x48aee4 */
  goto L_48aee4;
L_48aee2: /* 48aee2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
L_48aee4: /* 48aee4: call 0x48b895 */
  esp -= 4; W32(esp, 0x48aee9u); SPILL(); f_48b895(); if (g_unwind) return; RELOAD();
/* 48aee9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48aeea: jmp 0x48ae64 */
  goto L_48ae64;
L_48aeef: /* 48aeef: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 48aef2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48aef3: ret  */
  esp += 4; SPILL(); return;
}

void f_48aef4(void) {
  LOAD_REGS();
L_48aef4: /* 48aef4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48aef5: mov ebp, esp */
  ebp = esp;
/* 48aef7: fld dword ptr [0x4c9270] */
  { double v = F32((uint32_t)(0x4c9270u)); FPUSH(v); }
/* 48aefd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48aefe: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 48af01: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48af03: fchs  */
  ST0 = -ST0;
/* 48af05: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 48af07: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48af09: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48af0c: je 0x48affc */
  if (zf) goto L_48affc;
L_48af12: /* 48af12: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 48af15: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 48af1b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48af1d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48af20: jnp 0x48affc */
  if (!pf) goto L_48affc;
L_48af26: /* 48af26: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 48af28: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48af2a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48af2d: jp 0x48af3f */
  if (pf) goto L_48af3f;
L_48af2f: /* 48af2f: mov eax, dword ptr [0x48e3d0] */
  eax = R32((uint32_t)(0x48e3d0u));
/* 48af34: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 48af36: mov ax, 1 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x1u) & 0xffffu);
/* 48af3a: jmp 0x48b005 */
  goto L_48b005;
L_48af3f: /* 48af3f: fld dword ptr [0x4c9274] */
  { double v = F32((uint32_t)(0x4c9274u)); FPUSH(v); }
/* 48af45: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 48af47: fcom dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
/* 48af4d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48af4f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48af52: jp 0x48af5c */
  if (pf) goto L_48af5c;
L_48af54: /* 48af54: fld dword ptr [0x4c9278] */
  { double v = F32((uint32_t)(0x4c9278u)); FPUSH(v); }
/* 48af5a: jmp 0x48af62 */
  goto L_48af62;
L_48af5c: /* 48af5c: fld dword ptr [0x4c8dd8] */
  { double v = F32((uint32_t)(0x4c8dd8u)); FPUSH(v); }
L_48af62: /* 48af62: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 48af64: call 0x463321 */
  esp -= 4; W32(esp, 0x48af69u); SPILL(); f_463321(); if (g_unwind) return; RELOAD();
/* 48af69: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48af6b: mov ecx, eax */
  ecx = eax;
/* 48af6d: movsx eax, cx */
  eax = (uint32_t)(int32_t)(int16_t)((ecx & 0xffffu));
/* 48af70: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 48af73: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48af76: fld dword ptr [0x4c9268] */
  { double v = F32((uint32_t)(0x4c9268u)); FPUSH(v); }
/* 48af7c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48af7e: fsubr dword ptr [esi] */
  ST0 = (F32((uint32_t)(esi))) - ST0;
/* 48af80: fld dword ptr [0x4c926c] */
  { double v = F32((uint32_t)(0x4c926cu)); FPUSH(v); }
/* 48af86: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 48af88: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 48af8a: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 48af8c: fld dword ptr [0x48e3c0] */
  { double v = F32((uint32_t)(0x48e3c0u)); FPUSH(v); }
/* 48af92: fchs  */
  ST0 = -ST0;
/* 48af94: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 48af96: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48af98: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48af9b: jp 0x48afb1 */
  if (pf) goto L_48afb1;
L_48af9d: /* 48af9d: fcom dword ptr [0x48e3c0] */
  fpu_com(ST0, F32((uint32_t)(0x48e3c0u)));
/* 48afa3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48afa5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48afa8: jp 0x48afb1 */
  if (pf) goto L_48afb1;
L_48afaa: /* 48afaa: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 48afad: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 48afaf: jmp 0x48afe6 */
  goto L_48afe6;
L_48afb1: /* 48afb1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48afb3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 48afb4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48afb6: fld dword ptr [0x4c9260] */
  { double v = F32((uint32_t)(0x4c9260u)); FPUSH(v); }
/* 48afbc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48afbe: fadd dword ptr [0x4c9264] */
  ST0 = ST0 + (F32((uint32_t)(0x4c9264u)));
/* 48afc4: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 48afc7: fld dword ptr [0x4c925c] */
  { double v = F32((uint32_t)(0x4c925cu)); FPUSH(v); }
/* 48afcd: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 48afcf: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 48afd1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48afd3: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48afd6: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 48afd8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48afdb: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 48afdd: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 48afdf: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 48afe2: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 48afe4: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
L_48afe6: /* 48afe6: movsx eax, cx */
  eax = (uint32_t)(int32_t)(int16_t)((ecx & 0xffffu));
/* 48afe9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48afeb: movsx ecx, word ptr [ebp + 0x10] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0x10u)));
/* 48afef: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 48aff1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48aff2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48aff3: call 0x48ba7d */
  esp -= 4; W32(esp, 0x48aff8u); SPILL(); f_48ba7d(); if (g_unwind) return; RELOAD();
/* 48aff8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48aff9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48affa: jmp 0x48b005 */
  goto L_48b005;
L_48affc: /* 48affc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48affe: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 48b001: fldz  */
  FPUSH(0.0);
/* 48b003: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
L_48b005: /* 48b005: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48b006: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48b007: ret  */
  esp += 4; SPILL(); return;
}

void f_48b008(void) {
  LOAD_REGS();
L_48b008: /* 48b008: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 48b00c: xor eax, eax */
  eax = 0;
/* 48b00e: mov ax, word ptr [ecx + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 48b012: mov edx, eax */
  edx = eax;
/* 48b014: and dx, 0x7f80 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x7f80u);
  uint16_t r = (uint16_t)(a & b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48b019: cmp dx, 0x7f80 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x7f80u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48b01e: jne 0x48b032 */
  if (!zf) goto L_48b032;
L_48b020: /* 48b020: test al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48b022: jne 0x48b02e */
  if (!zf) goto L_48b02e;
L_48b024: /* 48b024: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48b028: jne 0x48b02e */
  if (!zf) goto L_48b02e;
L_48b02a: /* 48b02a: xor eax, eax */
  eax = 0;
/* 48b02c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 48b02d: ret  */
  esp += 4; SPILL(); return;
L_48b02e: /* 48b02e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 48b030: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 48b031: ret  */
  esp += 4; SPILL(); return;
L_48b032: /* 48b032: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 48b035: test eax, 0xffff7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff7fffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48b03a: jne 0x48b046 */
  if (!zf) goto L_48b046;
L_48b03c: /* 48b03c: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48b040: jne 0x48b046 */
  if (!zf) goto L_48b046;
L_48b042: /* 48b042: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 48b045: ret  */
  esp += 4; SPILL(); return;
L_48b046: /* 48b046: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48b04a: ret  */
  esp += 4; SPILL(); return;
}

void f_48b04b(void) {
  LOAD_REGS();
L_48b04b: /* 48b04b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48b04c: mov ebp, esp */
  ebp = esp;
/* 48b04e: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48b051: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b052: call 0x48b008 */
  esp -= 4; W32(esp, 0x48b057u); SPILL(); f_48b008(); if (g_unwind) return; RELOAD();
/* 48b057: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48b05a: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 48b05d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b05e: je 0x48b189 */
  if (zf) goto L_48b189;
L_48b064: /* 48b064: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 48b065: je 0x48b167 */
  if (zf) goto L_48b167;
L_48b06b: /* 48b06b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 48b06c: je 0x48b162 */
  if (zf) goto L_48b162;
L_48b072: /* 48b072: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 48b075: fcom dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
/* 48b07b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48b07e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48b080: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48b083: jp 0x48b09b */
  if (pf) goto L_48b09b;
L_48b085: /* 48b085: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 48b08b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48b08d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48b090: jp 0x48b18f */
  if (pf) goto L_48b18f;
L_48b096: /* 48b096: jmp 0x48b185 */
  goto L_48b185;
L_48b09b: /* 48b09b: fcom dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
/* 48b0a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b0a2: xor esi, esi */
  esi = 0;
/* 48b0a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48b0a6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48b0a9: jp 0x48b0b5 */
  if (pf) goto L_48b0b5;
L_48b0ab: /* 48b0ab: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48b0ad: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 48b0ae: fchs  */
  ST0 = -ST0;
/* 48b0b0: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 48b0b3: fstp st(1) */
  STI(1) = ST0; FPOP();
L_48b0b5: /* 48b0b5: fcom dword ptr [0x48e400] */
  fpu_com(ST0, F32((uint32_t)(0x48e400u)));
/* 48b0bb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48b0bd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48b0c0: jp 0x48b0c9 */
  if (pf) goto L_48b0c9;
L_48b0c2: /* 48b0c2: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 48b0c4: jmp 0x48b15c */
  goto L_48b15c;
L_48b0c9: /* 48b0c9: fcom dword ptr [0x4c8e6c] */
  fpu_com(ST0, F32((uint32_t)(0x4c8e6cu)));
/* 48b0cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48b0d1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48b0d4: jp 0x48b102 */
  if (pf) goto L_48b102;
L_48b0d6: /* 48b0d6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 48b0d8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48b0da: fld dword ptr [0x4c927c] */
  { double v = F32((uint32_t)(0x4c927cu)); FPUSH(v); }
/* 48b0e0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48b0e2: fadd dword ptr [0x4c9280] */
  ST0 = ST0 + (F32((uint32_t)(0x4c9280u)));
/* 48b0e8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48b0ea: fadd dword ptr [0x4c9284] */
  ST0 = ST0 + (F32((uint32_t)(0x4c9284u)));
/* 48b0f0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48b0f2: fadd dword ptr [0x4c8e6c] */
  ST0 = ST0 + (F32((uint32_t)(0x4c8e6cu)));
/* 48b0f8: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 48b0fa: fmulp st(3) */
  STI(3) = STI(3) * ST0;
  FPOP();
/* 48b0fc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48b0fe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48b100: jmp 0x48b15c */
  goto L_48b15c;
L_48b102: /* 48b102: fcomp dword ptr [0x48e410] */
  fpu_com(ST0, F32((uint32_t)(0x48e410u)));
  FPOP();
/* 48b108: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 48b10a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48b10b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48b10d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48b110: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 48b113: jp 0x48b136 */
  if (pf) goto L_48b136;
L_48b115: /* 48b115: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 48b117: fld1  */
  FPUSH(1.0);
/* 48b119: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 48b11c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b11d: call 0x48aef4 */
  esp -= 4; W32(esp, 0x48b122u); SPILL(); f_48aef4(); if (g_unwind) return; RELOAD();
/* 48b122: fld dword ptr [0x4c8e74] */
  { double v = F32((uint32_t)(0x4c8e74u)); FPUSH(v); }
/* 48b128: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* 48b12b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48b12e: fsubr dword ptr [ebp + 8] */
  ST0 = (F32((uint32_t)(ebp + 0x8u))) - ST0;
/* 48b131: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 48b134: jmp 0x48b15c */
  goto L_48b15c;
L_48b136: /* 48b136: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 48b139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b13a: call 0x48aef4 */
  esp -= 4; W32(esp, 0x48b13fu); SPILL(); f_48aef4(); if (g_unwind) return; RELOAD();
/* 48b13f: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48b142: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48b145: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 48b148: je 0x48b151 */
  if (zf) goto L_48b151;
L_48b14a: /* 48b14a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 48b14b: jne 0x48b159 */
  if (!zf) goto L_48b159;
L_48b14d: /* 48b14d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48b14f: jmp 0x48b153 */
  goto L_48b153;
L_48b151: /* 48b151: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
L_48b153: /* 48b153: call 0x48b895 */
  esp -= 4; W32(esp, 0x48b158u); SPILL(); f_48b895(); if (g_unwind) return; RELOAD();
/* 48b158: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_48b159: /* 48b159: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_48b15c: /* 48b15c: test si, si */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 48b15f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48b160: jmp 0x48b183 */
  goto L_48b183;
L_48b162: /* 48b162: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48b165: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48b166: ret  */
  esp += 4; SPILL(); return;
L_48b167: /* 48b167: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 48b16a: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 48b170: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 48b172: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 48b175: jnp 0x48b17c */
  if (!pf) goto L_48b17c;
L_48b177: /* 48b177: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48b17a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48b17b: ret  */
  esp += 4; SPILL(); return;
L_48b17c: /* 48b17c: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 48b17f: test byte ptr [ebp + 0xb], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xbu))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
L_48b183: /* 48b183: je 0x48b18f */
  if (zf) goto L_48b18f;
L_48b185: /* 48b185: fchs  */
  ST0 = -ST0;
/* 48b187: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48b188: ret  */
  esp += 4; SPILL(); return;
L_48b189: /* 48b189: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 48b18c: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
L_48b18f: /* 48b18f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48b190: ret  */
  esp += 4; SPILL(); return;
}

void f_48b191(void) {
  LOAD_REGS();
L_48b191: /* 48b191: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48b195: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48b199: call dword ptr [0x48e144] */
  esp -= 4; W32(esp, 0x48b19fu); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 48b19f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 48b1a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 48b1a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b1a6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b1a7: jle 0x48b1b8 */
  if ((zf || sf != of)) goto L_48b1b8;
L_48b1a9: /* 48b1a9: mov ecx, eax */
  ecx = eax;
/* 48b1ab: xor eax, eax */
  eax = 0;
L_48b1ad: /* 48b1ad: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 48b1ae: fmul qword ptr [0x4c9298] */
  ST0 = ST0 * (F64((uint32_t)(0x4c9298u)));
/* 48b1b4: jne 0x48b1ad */
  if (!zf) goto L_48b1ad;
L_48b1b6: /* 48b1b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
L_48b1b8: /* 48b1b8: jge 0x48b1c5 */
  if ((sf == of)) goto L_48b1c5;
L_48b1ba: /* 48b1ba: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_48b1bc: /* 48b1bc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 48b1bd: fmul qword ptr [0x4c9290] */
  ST0 = ST0 * (F64((uint32_t)(0x4c9290u)));
/* 48b1c3: jne 0x48b1bc */
  if (!zf) goto L_48b1bc;
L_48b1c5: /* 48b1c5: ret  */
  esp += 4; SPILL(); return;
}

void f_48b1c6(void) {
  LOAD_REGS();
L_48b1c6: /* 48b1c6: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48b1ca: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48b1ce: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 48b1d2: call 0x48b191 */
  esp -= 4; W32(esp, 0x48b1d7u); SPILL(); f_48b191(); if (g_unwind) return; RELOAD();
/* 48b1d7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 48b1da: ret  */
  esp += 4; SPILL(); return;
}

void f_48b1db(void) {
  LOAD_REGS();
L_48b1db: /* 48b1db: mov eax, 0x48de0a */
  eax = 0x48de0au;
/* 48b1e0: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48b1e5u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48b1e5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48b1e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b1e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48b1eb: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48b1ee: call 0x4612ba */
  esp -= 4; W32(esp, 0x48b1f3u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 48b1f3: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b1f7: mov ecx, 0x4d0868 */
  ecx = 0x4d0868u;
/* 48b1fc: call 0x464006 */
  esp -= 4; W32(esp, 0x48b201u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b201: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48b204: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b205: call 0x488d6c */
  esp -= 4; W32(esp, 0x48b20au); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 48b20a: mov esi, eax */
  esi = eax;
/* 48b20c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48b20e: jne 0x48b262 */
  if (!zf) goto L_48b262;
L_48b210: /* 48b210: mov eax, dword ptr [0x4d1188] */
  eax = R32((uint32_t)(0x4d1188u));
/* 48b215: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48b217: je 0x48b21d */
  if (zf) goto L_48b21d;
L_48b219: /* 48b219: mov esi, eax */
  esi = eax;
/* 48b21b: jmp 0x48b262 */
  goto L_48b262;
L_48b21d: /* 48b21d: push 0x4d1188 */
  { uint32_t v = 0x4d1188u; esp -= 4; W32(esp, v); }
/* 48b222: call 0x46c41e */
  esp -= 4; W32(esp, 0x48b227u); SPILL(); f_46c41e(); if (g_unwind) return; RELOAD();
/* 48b227: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b22a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b22b: jne 0x48b249 */
  if (!zf) goto L_48b249;
L_48b22d: /* 48b22d: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 48b232: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48b235: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x48b23bu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 48b23b: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 48b240: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 48b243: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b244: call 0x48bed8 */
  esp -= 4; W32(esp, 0x48b249u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_48b249: /* 48b249: mov eax, dword ptr [0x4d1188] */
  eax = R32((uint32_t)(0x4d1188u));
/* 48b24e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48b24f: mov edi, eax */
  edi = eax;
/* 48b251: mov ecx, edi */
  ecx = edi;
/* 48b253: mov esi, eax */
  esi = eax;
/* 48b255: call 0x461292 */
  esp -= 4; W32(esp, 0x48b25au); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 48b25a: mov ecx, edi */
  ecx = edi;
/* 48b25c: call 0x488de4 */
  esp -= 4; W32(esp, 0x48b261u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 48b261: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_48b262: /* 48b262: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b266: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48b269: call 0x4613d8 */
  esp -= 4; W32(esp, 0x48b26eu); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 48b26e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48b271: mov eax, esi */
  eax = esi;
/* 48b273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48b274: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48b27b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48b27c: ret  */
  esp += 4; SPILL(); return;
}

void f_48b27d(void) {
  LOAD_REGS();
L_48b27d: /* 48b27d: mov eax, 0x48de0a */
  eax = 0x48de0au;
/* 48b282: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48b287u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48b287: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48b28a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b28b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48b28d: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48b290: call 0x4612ba */
  esp -= 4; W32(esp, 0x48b295u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 48b295: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b299: mov ecx, 0x4d0898 */
  ecx = 0x4d0898u;
/* 48b29e: call 0x464006 */
  esp -= 4; W32(esp, 0x48b2a3u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b2a3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48b2a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b2a7: call 0x488d6c */
  esp -= 4; W32(esp, 0x48b2acu); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 48b2ac: mov esi, eax */
  esi = eax;
/* 48b2ae: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48b2b0: jne 0x48b304 */
  if (!zf) goto L_48b304;
L_48b2b2: /* 48b2b2: mov eax, dword ptr [0x4d118c] */
  eax = R32((uint32_t)(0x4d118cu));
/* 48b2b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48b2b9: je 0x48b2bf */
  if (zf) goto L_48b2bf;
L_48b2bb: /* 48b2bb: mov esi, eax */
  esi = eax;
/* 48b2bd: jmp 0x48b304 */
  goto L_48b304;
L_48b2bf: /* 48b2bf: push 0x4d118c */
  { uint32_t v = 0x4d118cu; esp -= 4; W32(esp, v); }
/* 48b2c4: call 0x46bc91 */
  esp -= 4; W32(esp, 0x48b2c9u); SPILL(); f_46bc91(); if (g_unwind) return; RELOAD();
/* 48b2c9: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b2cc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b2cd: jne 0x48b2eb */
  if (!zf) goto L_48b2eb;
L_48b2cf: /* 48b2cf: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 48b2d4: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48b2d7: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x48b2ddu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 48b2dd: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 48b2e2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 48b2e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b2e6: call 0x48bed8 */
  esp -= 4; W32(esp, 0x48b2ebu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_48b2eb: /* 48b2eb: mov eax, dword ptr [0x4d118c] */
  eax = R32((uint32_t)(0x4d118cu));
/* 48b2f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48b2f1: mov edi, eax */
  edi = eax;
/* 48b2f3: mov ecx, edi */
  ecx = edi;
/* 48b2f5: mov esi, eax */
  esi = eax;
/* 48b2f7: call 0x461292 */
  esp -= 4; W32(esp, 0x48b2fcu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 48b2fc: mov ecx, edi */
  ecx = edi;
/* 48b2fe: call 0x488de4 */
  esp -= 4; W32(esp, 0x48b303u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 48b303: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_48b304: /* 48b304: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b308: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48b30b: call 0x4613d8 */
  esp -= 4; W32(esp, 0x48b310u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 48b310: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48b313: mov eax, esi */
  eax = esi;
/* 48b315: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48b316: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48b31d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48b31e: ret  */
  esp += 4; SPILL(); return;
}

void f_48b31f(void) {
  LOAD_REGS();
L_48b31f: /* 48b31f: mov eax, 0x48de0a */
  eax = 0x48de0au;
/* 48b324: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48b329u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48b329: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48b32c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b32d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48b32f: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48b332: call 0x4612ba */
  esp -= 4; W32(esp, 0x48b337u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 48b337: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b33b: mov ecx, 0x4d0894 */
  ecx = 0x4d0894u;
/* 48b340: call 0x464006 */
  esp -= 4; W32(esp, 0x48b345u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b345: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48b348: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b349: call 0x488d6c */
  esp -= 4; W32(esp, 0x48b34eu); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 48b34e: mov esi, eax */
  esi = eax;
/* 48b350: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48b352: jne 0x48b3a6 */
  if (!zf) goto L_48b3a6;
L_48b354: /* 48b354: mov eax, dword ptr [0x4d1190] */
  eax = R32((uint32_t)(0x4d1190u));
/* 48b359: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48b35b: je 0x48b361 */
  if (zf) goto L_48b361;
L_48b35d: /* 48b35d: mov esi, eax */
  esi = eax;
/* 48b35f: jmp 0x48b3a6 */
  goto L_48b3a6;
L_48b361: /* 48b361: push 0x4d1190 */
  { uint32_t v = 0x4d1190u; esp -= 4; W32(esp, v); }
/* 48b366: call 0x46bed1 */
  esp -= 4; W32(esp, 0x48b36bu); SPILL(); f_46bed1(); if (g_unwind) return; RELOAD();
/* 48b36b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b36e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b36f: jne 0x48b38d */
  if (!zf) goto L_48b38d;
L_48b371: /* 48b371: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 48b376: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48b379: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x48b37fu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 48b37f: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 48b384: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 48b387: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b388: call 0x48bed8 */
  esp -= 4; W32(esp, 0x48b38du); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_48b38d: /* 48b38d: mov eax, dword ptr [0x4d1190] */
  eax = R32((uint32_t)(0x4d1190u));
/* 48b392: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48b393: mov edi, eax */
  edi = eax;
/* 48b395: mov ecx, edi */
  ecx = edi;
/* 48b397: mov esi, eax */
  esi = eax;
/* 48b399: call 0x461292 */
  esp -= 4; W32(esp, 0x48b39eu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 48b39e: mov ecx, edi */
  ecx = edi;
/* 48b3a0: call 0x488de4 */
  esp -= 4; W32(esp, 0x48b3a5u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 48b3a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_48b3a6: /* 48b3a6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b3aa: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48b3ad: call 0x4613d8 */
  esp -= 4; W32(esp, 0x48b3b2u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 48b3b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48b3b5: mov eax, esi */
  eax = esi;
/* 48b3b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48b3b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48b3bf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48b3c0: ret  */
  esp += 4; SPILL(); return;
}

void f_48b3c1(void) {
  LOAD_REGS();
L_48b3c1: /* 48b3c1: mov eax, 0x48de0a */
  eax = 0x48de0au;
/* 48b3c6: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48b3cbu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48b3cb: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48b3ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b3cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48b3d1: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48b3d4: call 0x4612ba */
  esp -= 4; W32(esp, 0x48b3d9u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 48b3d9: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b3dd: mov ecx, 0x4d08d4 */
  ecx = 0x4d08d4u;
/* 48b3e2: call 0x464006 */
  esp -= 4; W32(esp, 0x48b3e7u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b3e7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48b3ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b3eb: call 0x488d6c */
  esp -= 4; W32(esp, 0x48b3f0u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 48b3f0: mov esi, eax */
  esi = eax;
/* 48b3f2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48b3f4: jne 0x48b448 */
  if (!zf) goto L_48b448;
L_48b3f6: /* 48b3f6: mov eax, dword ptr [0x4d1194] */
  eax = R32((uint32_t)(0x4d1194u));
/* 48b3fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48b3fd: je 0x48b403 */
  if (zf) goto L_48b403;
L_48b3ff: /* 48b3ff: mov esi, eax */
  esi = eax;
/* 48b401: jmp 0x48b448 */
  goto L_48b448;
L_48b403: /* 48b403: push 0x4d1194 */
  { uint32_t v = 0x4d1194u; esp -= 4; W32(esp, v); }
/* 48b408: call 0x46c0cf */
  esp -= 4; W32(esp, 0x48b40du); SPILL(); f_46c0cf(); if (g_unwind) return; RELOAD();
/* 48b40d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b410: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b411: jne 0x48b42f */
  if (!zf) goto L_48b42f;
L_48b413: /* 48b413: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 48b418: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48b41b: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x48b421u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 48b421: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 48b426: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 48b429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b42a: call 0x48bed8 */
  esp -= 4; W32(esp, 0x48b42fu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_48b42f: /* 48b42f: mov eax, dword ptr [0x4d1194] */
  eax = R32((uint32_t)(0x4d1194u));
/* 48b434: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48b435: mov edi, eax */
  edi = eax;
/* 48b437: mov ecx, edi */
  ecx = edi;
/* 48b439: mov esi, eax */
  esi = eax;
/* 48b43b: call 0x461292 */
  esp -= 4; W32(esp, 0x48b440u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 48b440: mov ecx, edi */
  ecx = edi;
/* 48b442: call 0x488de4 */
  esp -= 4; W32(esp, 0x48b447u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 48b447: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_48b448: /* 48b448: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b44c: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48b44f: call 0x4613d8 */
  esp -= 4; W32(esp, 0x48b454u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 48b454: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48b457: mov eax, esi */
  eax = esi;
/* 48b459: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48b45a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48b461: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48b462: ret  */
  esp += 4; SPILL(); return;
}

void f_48b463(void) {
  LOAD_REGS();
L_48b463: /* 48b463: mov eax, 0x48de0a */
  eax = 0x48de0au;
/* 48b468: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48b46du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48b46d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48b470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b471: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48b473: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48b476: call 0x4612ba */
  esp -= 4; W32(esp, 0x48b47bu); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 48b47b: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b47f: mov ecx, 0x4d0890 */
  ecx = 0x4d0890u;
/* 48b484: call 0x464006 */
  esp -= 4; W32(esp, 0x48b489u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b489: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48b48c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b48d: call 0x488d6c */
  esp -= 4; W32(esp, 0x48b492u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 48b492: mov esi, eax */
  esi = eax;
/* 48b494: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48b496: jne 0x48b4ea */
  if (!zf) goto L_48b4ea;
L_48b498: /* 48b498: mov eax, dword ptr [0x4d1198] */
  eax = R32((uint32_t)(0x4d1198u));
/* 48b49d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48b49f: je 0x48b4a5 */
  if (zf) goto L_48b4a5;
L_48b4a1: /* 48b4a1: mov esi, eax */
  esi = eax;
/* 48b4a3: jmp 0x48b4ea */
  goto L_48b4ea;
L_48b4a5: /* 48b4a5: push 0x4d1198 */
  { uint32_t v = 0x4d1198u; esp -= 4; W32(esp, v); }
/* 48b4aa: call 0x46c35a */
  esp -= 4; W32(esp, 0x48b4afu); SPILL(); f_46c35a(); if (g_unwind) return; RELOAD();
/* 48b4af: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b4b2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b4b3: jne 0x48b4d1 */
  if (!zf) goto L_48b4d1;
L_48b4b5: /* 48b4b5: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 48b4ba: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48b4bd: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x48b4c3u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 48b4c3: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 48b4c8: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 48b4cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b4cc: call 0x48bed8 */
  esp -= 4; W32(esp, 0x48b4d1u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_48b4d1: /* 48b4d1: mov eax, dword ptr [0x4d1198] */
  eax = R32((uint32_t)(0x4d1198u));
/* 48b4d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48b4d7: mov edi, eax */
  edi = eax;
/* 48b4d9: mov ecx, edi */
  ecx = edi;
/* 48b4db: mov esi, eax */
  esi = eax;
/* 48b4dd: call 0x461292 */
  esp -= 4; W32(esp, 0x48b4e2u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 48b4e2: mov ecx, edi */
  ecx = edi;
/* 48b4e4: call 0x488de4 */
  esp -= 4; W32(esp, 0x48b4e9u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 48b4e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_48b4ea: /* 48b4ea: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b4ee: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48b4f1: call 0x4613d8 */
  esp -= 4; W32(esp, 0x48b4f6u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 48b4f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48b4f9: mov eax, esi */
  eax = esi;
/* 48b4fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48b4fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48b503: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48b504: ret  */
  esp += 4; SPILL(); return;
}

void f_48b505(void) {
  LOAD_REGS();
L_48b505: /* 48b505: mov eax, 0x48de0a */
  eax = 0x48de0au;
/* 48b50a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48b50fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48b50f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 48b512: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b513: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48b515: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48b518: call 0x4612ba */
  esp -= 4; W32(esp, 0x48b51du); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 48b51d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b521: mov ecx, 0x4d089c */
  ecx = 0x4d089cu;
/* 48b526: call 0x464006 */
  esp -= 4; W32(esp, 0x48b52bu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b52b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48b52e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b52f: call 0x488d6c */
  esp -= 4; W32(esp, 0x48b534u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 48b534: mov esi, eax */
  esi = eax;
/* 48b536: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48b538: jne 0x48b58c */
  if (!zf) goto L_48b58c;
L_48b53a: /* 48b53a: mov eax, dword ptr [0x4d119c] */
  eax = R32((uint32_t)(0x4d119cu));
/* 48b53f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 48b541: je 0x48b547 */
  if (zf) goto L_48b547;
L_48b543: /* 48b543: mov esi, eax */
  esi = eax;
/* 48b545: jmp 0x48b58c */
  goto L_48b58c;
L_48b547: /* 48b547: push 0x4d119c */
  { uint32_t v = 0x4d119cu; esp -= 4; W32(esp, v); }
/* 48b54c: call 0x486508 */
  esp -= 4; W32(esp, 0x48b551u); SPILL(); f_486508(); if (g_unwind) return; RELOAD();
/* 48b551: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b554: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b555: jne 0x48b573 */
  if (!zf) goto L_48b573;
L_48b557: /* 48b557: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 48b55c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 48b55f: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x48b565u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 48b565: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 48b56a: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 48b56d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b56e: call 0x48bed8 */
  esp -= 4; W32(esp, 0x48b573u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_48b573: /* 48b573: mov eax, dword ptr [0x4d119c] */
  eax = R32((uint32_t)(0x4d119cu));
/* 48b578: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48b579: mov edi, eax */
  edi = eax;
/* 48b57b: mov ecx, edi */
  ecx = edi;
/* 48b57d: mov esi, eax */
  esi = eax;
/* 48b57f: call 0x461292 */
  esp -= 4; W32(esp, 0x48b584u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 48b584: mov ecx, edi */
  ecx = edi;
/* 48b586: call 0x488de4 */
  esp -= 4; W32(esp, 0x48b58bu); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 48b58b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_48b58c: /* 48b58c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b590: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 48b593: call 0x4613d8 */
  esp -= 4; W32(esp, 0x48b598u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 48b598: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48b59b: mov eax, esi */
  eax = esi;
/* 48b59d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48b59e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48b5a5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48b5a6: ret  */
  esp += 4; SPILL(); return;
}

void f_48b5a7(void) {
  LOAD_REGS();
L_48b5a7: /* 48b5a7: mov eax, 0x48de32 */
  eax = 0x48de32u;
/* 48b5ac: call 0x4616c0 */
  esp -= 4; W32(esp, 0x48b5b1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 48b5b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48b5b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48b5b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48b5b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b5b5: xor ebx, ebx */
  ebx = 0;
/* 48b5b7: test byte ptr [ebp + 0xc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48b5bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48b5bc: je 0x48b615 */
  if (zf) goto L_48b615;
L_48b5be: /* 48b5be: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b5c1: jne 0x48b5f8 */
  if (!zf) goto L_48b5f8;
L_48b5c3: /* 48b5c3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 48b5c5: call 0x4620da */
  esp -= 4; W32(esp, 0x48b5cau); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48b5ca: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b5cc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b5cd: je 0x48b5de */
  if (zf) goto L_48b5de;
L_48b5cf: /* 48b5cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48b5d0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48b5d3: mov ecx, eax */
  ecx = eax;
/* 48b5d5: call 0x46c3fd */
  esp -= 4; W32(esp, 0x48b5dau); SPILL(); f_46c3fd(); if (g_unwind) return; RELOAD();
/* 48b5da: mov esi, eax */
  esi = eax;
/* 48b5dc: jmp 0x48b5e0 */
  goto L_48b5e0;
L_48b5de: /* 48b5de: xor esi, esi */
  esi = 0;
L_48b5e0: /* 48b5e0: mov ecx, 0x4d0868 */
  ecx = 0x4d0868u;
/* 48b5e5: call 0x464006 */
  esp -= 4; W32(esp, 0x48b5eau); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b5ea: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 48b5ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b5ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b5ef: mov ecx, edi */
  ecx = edi;
/* 48b5f1: call 0x486b0d */
  esp -= 4; W32(esp, 0x48b5f6u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 48b5f6: jmp 0x48b618 */
  goto L_48b618;
L_48b5f8: /* 48b5f8: mov ecx, 0x4d0868 */
  ecx = 0x4d0868u;
/* 48b5fd: call 0x464006 */
  esp -= 4; W32(esp, 0x48b602u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b602: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b603: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48b606: call 0x48b1db */
  esp -= 4; W32(esp, 0x48b60bu); SPILL(); f_48b1db(); if (g_unwind) return; RELOAD();
/* 48b60b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b60c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48b60f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b610: call 0x486b0d */
  esp -= 4; W32(esp, 0x48b615u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48b615: /* 48b615: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
L_48b618: /* 48b618: test byte ptr [ebp + 0xc], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48b61c: je 0x48b668 */
  if (zf) goto L_48b668;
L_48b61e: /* 48b61e: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b621: jne 0x48b64c */
  if (!zf) goto L_48b64c;
L_48b623: /* 48b623: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48b625: call 0x4620da */
  esp -= 4; W32(esp, 0x48b62au); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48b62a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b62c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b62d: je 0x48b63c */
  if (zf) goto L_48b63c;
L_48b62f: /* 48b62f: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 48b632: mov dword ptr [eax], 0x4c7a60 */
  W32((uint32_t)(eax), 0x4c7a60u);
/* 48b638: mov esi, eax */
  esi = eax;
/* 48b63a: jmp 0x48b63e */
  goto L_48b63e;
L_48b63c: /* 48b63c: xor esi, esi */
  esi = 0;
L_48b63e: /* 48b63e: mov ecx, 0x4d0898 */
  ecx = 0x4d0898u;
/* 48b643: call 0x464006 */
  esp -= 4; W32(esp, 0x48b648u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b648: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b649: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b64a: jmp 0x48b661 */
  goto L_48b661;
L_48b64c: /* 48b64c: mov ecx, 0x4d0898 */
  ecx = 0x4d0898u;
/* 48b651: call 0x464006 */
  esp -= 4; W32(esp, 0x48b656u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b656: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b657: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48b65a: call 0x48b27d */
  esp -= 4; W32(esp, 0x48b65fu); SPILL(); f_48b27d(); if (g_unwind) return; RELOAD();
/* 48b65f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48b661: /* 48b661: mov ecx, edi */
  ecx = edi;
/* 48b663: call 0x486b0d */
  esp -= 4; W32(esp, 0x48b668u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48b668: /* 48b668: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 48b66b: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 48b66e: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 48b671: je 0x48b6bd */
  if (zf) goto L_48b6bd;
L_48b673: /* 48b673: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b676: jne 0x48b6a1 */
  if (!zf) goto L_48b6a1;
L_48b678: /* 48b678: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48b67a: call 0x4620da */
  esp -= 4; W32(esp, 0x48b67fu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48b67f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b681: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b682: je 0x48b691 */
  if (zf) goto L_48b691;
L_48b684: /* 48b684: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 48b687: mov dword ptr [eax], 0x4c7ce8 */
  W32((uint32_t)(eax), 0x4c7ce8u);
/* 48b68d: mov esi, eax */
  esi = eax;
/* 48b68f: jmp 0x48b693 */
  goto L_48b693;
L_48b691: /* 48b691: xor esi, esi */
  esi = 0;
L_48b693: /* 48b693: mov ecx, 0x4d0894 */
  ecx = 0x4d0894u;
/* 48b698: call 0x464006 */
  esp -= 4; W32(esp, 0x48b69du); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b69d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b69e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b69f: jmp 0x48b6b6 */
  goto L_48b6b6;
L_48b6a1: /* 48b6a1: mov ecx, 0x4d0894 */
  ecx = 0x4d0894u;
/* 48b6a6: call 0x464006 */
  esp -= 4; W32(esp, 0x48b6abu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b6ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b6ac: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48b6af: call 0x48b31f */
  esp -= 4; W32(esp, 0x48b6b4u); SPILL(); f_48b31f(); if (g_unwind) return; RELOAD();
/* 48b6b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b6b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48b6b6: /* 48b6b6: mov ecx, edi */
  ecx = edi;
/* 48b6b8: call 0x486b0d */
  esp -= 4; W32(esp, 0x48b6bdu); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48b6bd: /* 48b6bd: cmp dword ptr [ebp - 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b6c0: je 0x48b7d2 */
  if (zf) goto L_48b7d2;
L_48b6c6: /* 48b6c6: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b6c9: jne 0x48b6f4 */
  if (!zf) goto L_48b6f4;
L_48b6cb: /* 48b6cb: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48b6cd: call 0x4620da */
  esp -= 4; W32(esp, 0x48b6d2u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48b6d2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b6d4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b6d5: je 0x48b6e4 */
  if (zf) goto L_48b6e4;
L_48b6d7: /* 48b6d7: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 48b6da: mov dword ptr [eax], 0x4c7df0 */
  W32((uint32_t)(eax), 0x4c7df0u);
/* 48b6e0: mov esi, eax */
  esi = eax;
/* 48b6e2: jmp 0x48b6e6 */
  goto L_48b6e6;
L_48b6e4: /* 48b6e4: xor esi, esi */
  esi = 0;
L_48b6e6: /* 48b6e6: mov ecx, 0x4d08d4 */
  ecx = 0x4d08d4u;
/* 48b6eb: call 0x464006 */
  esp -= 4; W32(esp, 0x48b6f0u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b6f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b6f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b6f2: jmp 0x48b709 */
  goto L_48b709;
L_48b6f4: /* 48b6f4: mov ecx, 0x4d08d4 */
  ecx = 0x4d08d4u;
/* 48b6f9: call 0x464006 */
  esp -= 4; W32(esp, 0x48b6feu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b6fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b6ff: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48b702: call 0x48b3c1 */
  esp -= 4; W32(esp, 0x48b707u); SPILL(); f_48b3c1(); if (g_unwind) return; RELOAD();
/* 48b707: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48b709: /* 48b709: mov ecx, edi */
  ecx = edi;
/* 48b70b: call 0x486b0d */
  esp -= 4; W32(esp, 0x48b710u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 48b710: cmp dword ptr [ebp - 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b713: je 0x48b7d2 */
  if (zf) goto L_48b7d2;
L_48b719: /* 48b719: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b71c: jne 0x48b757 */
  if (!zf) goto L_48b757;
L_48b71e: /* 48b71e: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 48b720: call 0x4620da */
  esp -= 4; W32(esp, 0x48b725u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48b725: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b726: mov ecx, eax */
  ecx = eax;
/* 48b728: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 48b72b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b72d: mov dword ptr [ebp - 4], 5 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 48b734: je 0x48b743 */
  if (zf) goto L_48b743;
L_48b736: /* 48b736: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48b737: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48b73a: call 0x47873b */
  esp -= 4; W32(esp, 0x48b73fu); SPILL(); f_47873b(); if (g_unwind) return; RELOAD();
/* 48b73f: mov esi, eax */
  esi = eax;
/* 48b741: jmp 0x48b745 */
  goto L_48b745;
L_48b743: /* 48b743: xor esi, esi */
  esi = 0;
L_48b745: /* 48b745: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b749: mov ecx, 0x4d08cc */
  ecx = 0x4d08ccu;
/* 48b74e: call 0x464006 */
  esp -= 4; W32(esp, 0x48b753u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b753: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b754: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b755: jmp 0x48b76c */
  goto L_48b76c;
L_48b757: /* 48b757: mov ecx, 0x4d08cc */
  ecx = 0x4d08ccu;
/* 48b75c: call 0x464006 */
  esp -= 4; W32(esp, 0x48b761u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b761: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b762: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48b765: call 0x4799e3 */
  esp -= 4; W32(esp, 0x48b76au); SPILL(); f_4799e3(); if (g_unwind) return; RELOAD();
/* 48b76a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b76b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48b76c: /* 48b76c: mov ecx, edi */
  ecx = edi;
/* 48b76e: call 0x486b0d */
  esp -= 4; W32(esp, 0x48b773u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 48b773: cmp dword ptr [ebp - 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b776: je 0x48b7d2 */
  if (zf) goto L_48b7d2;
L_48b778: /* 48b778: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b77b: jne 0x48b7b6 */
  if (!zf) goto L_48b7b6;
L_48b77d: /* 48b77d: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 48b77f: call 0x4620da */
  esp -= 4; W32(esp, 0x48b784u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48b784: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b785: mov ecx, eax */
  ecx = eax;
/* 48b787: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 48b78a: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b78c: mov dword ptr [ebp - 4], 7 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 48b793: je 0x48b7a2 */
  if (zf) goto L_48b7a2;
L_48b795: /* 48b795: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48b796: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48b799: call 0x47c46a */
  esp -= 4; W32(esp, 0x48b79eu); SPILL(); f_47c46a(); if (g_unwind) return; RELOAD();
/* 48b79e: mov esi, eax */
  esi = eax;
/* 48b7a0: jmp 0x48b7a4 */
  goto L_48b7a4;
L_48b7a2: /* 48b7a2: xor esi, esi */
  esi = 0;
L_48b7a4: /* 48b7a4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b7a8: mov ecx, 0x4d08a0 */
  ecx = 0x4d08a0u;
/* 48b7ad: call 0x464006 */
  esp -= 4; W32(esp, 0x48b7b2u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b7b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b7b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b7b4: jmp 0x48b7cb */
  goto L_48b7cb;
L_48b7b6: /* 48b7b6: mov ecx, 0x4d08a0 */
  ecx = 0x4d08a0u;
/* 48b7bb: call 0x464006 */
  esp -= 4; W32(esp, 0x48b7c0u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b7c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b7c1: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48b7c4: call 0x47d5ba */
  esp -= 4; W32(esp, 0x48b7c9u); SPILL(); f_47d5ba(); if (g_unwind) return; RELOAD();
/* 48b7c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b7ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48b7cb: /* 48b7cb: mov ecx, edi */
  ecx = edi;
/* 48b7cd: call 0x486b0d */
  esp -= 4; W32(esp, 0x48b7d2u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48b7d2: /* 48b7d2: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 48b7d5: and edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 48b7d8: je 0x48b835 */
  if (zf) goto L_48b835;
L_48b7da: /* 48b7da: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b7dd: jne 0x48b818 */
  if (!zf) goto L_48b818;
L_48b7df: /* 48b7df: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 48b7e1: call 0x4620da */
  esp -= 4; W32(esp, 0x48b7e6u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48b7e6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b7e7: mov ecx, eax */
  ecx = eax;
/* 48b7e9: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 48b7ec: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b7ee: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 48b7f5: je 0x48b804 */
  if (zf) goto L_48b804;
L_48b7f7: /* 48b7f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48b7f8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48b7fb: call 0x4864ce */
  esp -= 4; W32(esp, 0x48b800u); SPILL(); f_4864ce(); if (g_unwind) return; RELOAD();
/* 48b800: mov esi, eax */
  esi = eax;
/* 48b802: jmp 0x48b806 */
  goto L_48b806;
L_48b804: /* 48b804: xor esi, esi */
  esi = 0;
L_48b806: /* 48b806: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48b80a: mov ecx, 0x4d089c */
  ecx = 0x4d089cu;
/* 48b80f: call 0x464006 */
  esp -= 4; W32(esp, 0x48b814u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b814: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b815: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b816: jmp 0x48b82d */
  goto L_48b82d;
L_48b818: /* 48b818: mov ecx, 0x4d089c */
  ecx = 0x4d089cu;
/* 48b81d: call 0x464006 */
  esp -= 4; W32(esp, 0x48b822u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b823: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48b826: call 0x48b505 */
  esp -= 4; W32(esp, 0x48b82bu); SPILL(); f_48b505(); if (g_unwind) return; RELOAD();
/* 48b82b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b82c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48b82d: /* 48b82d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48b830: call 0x486b0d */
  esp -= 4; W32(esp, 0x48b835u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48b835: /* 48b835: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b837: je 0x48b886 */
  if (zf) goto L_48b886;
L_48b839: /* 48b839: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b83c: jne 0x48b869 */
  if (!zf) goto L_48b869;
L_48b83e: /* 48b83e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48b840: call 0x4620da */
  esp -= 4; W32(esp, 0x48b845u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 48b845: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 48b847: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b848: je 0x48b859 */
  if (zf) goto L_48b859;
L_48b84a: /* 48b84a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48b84b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 48b84e: mov ecx, eax */
  ecx = eax;
/* 48b850: call 0x46c337 */
  esp -= 4; W32(esp, 0x48b855u); SPILL(); f_46c337(); if (g_unwind) return; RELOAD();
/* 48b855: mov esi, eax */
  esi = eax;
/* 48b857: jmp 0x48b85b */
  goto L_48b85b;
L_48b859: /* 48b859: xor esi, esi */
  esi = 0;
L_48b85b: /* 48b85b: mov ecx, 0x4d0890 */
  ecx = 0x4d0890u;
/* 48b860: call 0x464006 */
  esp -= 4; W32(esp, 0x48b865u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b865: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b866: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b867: jmp 0x48b87e */
  goto L_48b87e;
L_48b869: /* 48b869: mov ecx, 0x4d0890 */
  ecx = 0x4d0890u;
/* 48b86e: call 0x464006 */
  esp -= 4; W32(esp, 0x48b873u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 48b873: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 48b874: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 48b877: call 0x48b463 */
  esp -= 4; W32(esp, 0x48b87cu); SPILL(); f_48b463(); if (g_unwind) return; RELOAD();
/* 48b87c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b87d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_48b87e: /* 48b87e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 48b881: call 0x486b0d */
  esp -= 4; W32(esp, 0x48b886u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
L_48b886: /* 48b886: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 48b889: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48b88a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48b88b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48b88c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 48b893: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48b894: ret  */
  esp += 4; SPILL(); return;
}

void f_48b895(void) {
  LOAD_REGS();
L_48b895: /* 48b895: test byte ptr [esp + 4], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48b89a: je 0x48b8a9 */
  if (zf) goto L_48b8a9;
L_48b89c: /* 48b89c: call dword ptr [0x48e0b0] */
  esp -= 4; W32(esp, 0x48b8a2u); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 48b8a2: mov dword ptr [eax], 0x21 */
  W32((uint32_t)(eax), 0x21u);
/* 48b8a8: ret  */
  esp += 4; SPILL(); return;
L_48b8a9: /* 48b8a9: test byte ptr [esp + 4], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4u))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48b8ae: je 0x48b8bc */
  if (zf) goto L_48b8bc;
L_48b8b0: /* 48b8b0: call dword ptr [0x48e0b0] */
  esp -= 4; W32(esp, 0x48b8b6u); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 48b8b6: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
L_48b8bc: /* 48b8bc: ret  */
  esp += 4; SPILL(); return;
}

void f_48b8bd(void) {
  LOAD_REGS();
L_48b8bd: /* 48b8bd: jmp 0x48b8de */
  SPILL(); f_48b8de(); return;
}

void f_48b8bf(void) {
  LOAD_REGS();
L_48b8bf: /* 48b8bf: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 48b8c3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 48b8c4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 48b8c8: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 48b8ca: js 0x48b8dd */
  if (sf) goto L_48b8dd;
L_48b8cc: /* 48b8cc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_48b8cd: /* 48b8cd: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 48b8d1: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 48b8d4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 48b8d5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 48b8d7: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 48b8d9: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 48b8db: jne 0x48b8cd */
  if (!zf) goto L_48b8cd;
L_48b8dd: /* 48b8dd: ret  */
  esp += 4; SPILL(); return;
}

void f_48b8de(void) {
  LOAD_REGS();
L_48b8de: /* 48b8de: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48b8df: mov ebp, esp */
  ebp = esp;
/* 48b8e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48b8e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48b8e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b8e4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 48b8e7: xor ecx, ecx */
  ecx = 0;
/* 48b8e9: mov cx, word ptr [esi + 6] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 48b8ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48b8ee: mov edi, 0x7ff */
  edi = 0x7ffu;
/* 48b8f3: mov eax, ecx */
  eax = ecx;
/* 48b8f5: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 48b8f8: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48b8fa: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48b8fd: jne 0x48b925 */
  if (!zf) goto L_48b925;
L_48b8ff: /* 48b8ff: test cl, 0xf */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48b902: jne 0x48b91d */
  if (!zf) goto L_48b91d;
L_48b904: /* 48b904: xor eax, eax */
  eax = 0;
/* 48b906: cmp word ptr [esi + 4], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x4u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48b90a: jne 0x48b91d */
  if (!zf) goto L_48b91d;
L_48b90c: /* 48b90c: cmp word ptr [esi + 2], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x2u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48b910: jne 0x48b91d */
  if (!zf) goto L_48b91d;
L_48b912: /* 48b912: cmp word ptr [esi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48b915: jne 0x48b91d */
  if (!zf) goto L_48b91d;
L_48b917: /* 48b917: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 48b918: jmp 0x48ba79 */
  goto L_48ba79;
L_48b91d: /* 48b91d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 48b91f: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 48b920: jmp 0x48ba79 */
  goto L_48ba79;
L_48b925: /* 48b925: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48b926: xor ebx, ebx */
  ebx = 0;
/* 48b928: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48b92b: jne 0x48b941 */
  if (!zf) goto L_48b941;
L_48b92d: /* 48b92d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48b92e: call 0x48bb90 */
  esp -= 4; W32(esp, 0x48b933u); SPILL(); f_48bb90(); if (g_unwind) return; RELOAD();
/* 48b933: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 48b936: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48b937: jle 0x48b941 */
  if ((zf || sf != of)) goto L_48b941;
L_48b939: /* 48b939: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 48b93c: jmp 0x48ba78 */
  goto L_48ba78;
L_48b941: /* 48b941: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 48b944: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48b947: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48b949: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48b94b: jl 0x48b966 */
  if ((sf != of)) goto L_48b966;
L_48b94d: /* 48b94d: test byte ptr [esi + 7], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x7u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48b951: fld qword ptr [0x48e360] */
  { double v = F64((uint32_t)(0x48e360u)); FPUSH(v); }
/* 48b957: je 0x48b95b */
  if (zf) goto L_48b95b;
L_48b959: /* 48b959: fchs  */
  ST0 = -ST0;
L_48b95b: /* 48b95b: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 48b95d: mov ax, 1 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x1u) & 0xffffu);
/* 48b961: jmp 0x48ba78 */
  goto L_48ba78;
L_48b966: /* 48b966: xor eax, eax */
  eax = 0;
/* 48b968: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48b96a: mov ax, word ptr [esi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 48b96e: jle 0x48b983 */
  if ((zf || sf != of)) goto L_48b983;
L_48b970: /* 48b970: and eax, 0xffff800f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff800fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48b975: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 48b978: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48b97a: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 48b97e: jmp 0x48ba74 */
  goto L_48ba74;
L_48b983: /* 48b983: mov edx, eax */
  edx = eax;
/* 48b985: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48b988: and edx, 0x8000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 48b98e: or eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48b991: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 48b992: cmp ecx, -0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffccu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48b995: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 48b998: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 48b99c: jge 0x48b9af */
  if ((sf == of)) goto L_48b9af;
L_48b99e: /* 48b99e: mov word ptr [esi + 6], dx */
  W16((uint32_t)(esi + 0x6u), (edx & 0xffffu));
/* 48b9a2: mov word ptr [esi + 4], bx */
  W16((uint32_t)(esi + 0x4u), (ebx & 0xffffu));
/* 48b9a6: mov word ptr [esi + 2], bx */
  W16((uint32_t)(esi + 0x2u), (ebx & 0xffffu));
/* 48b9aa: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 48b9ad: jmp 0x48b939 */
  goto L_48b939;
L_48b9af: /* 48b9af: cmp cx, -0x10 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0xfff0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 48b9b3: mov edi, ecx */
  edi = ecx;
/* 48b9b5: jg 0x48ba00 */
  if ((!zf && sf == of)) goto L_48ba00;
L_48b9b7: /* 48b9b7: mov dx, word ptr [esi + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x4u))) & 0xffffu);
/* 48b9bb: xor edi, edi */
  edi = 0;
/* 48b9bd: mov di, 0xfff0 */
  edi = (edi & 0xffff0000u) | ((uint32_t)(0xfff0u) & 0xffffu);
/* 48b9c1: sub di, cx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48b9c4: shr di, 4 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48b9c8: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 48b9cb: mov ax, word ptr [esi + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x2u))) & 0xffffu);
/* 48b9cf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 48b9d0: movzx ebx, di */
  ebx = (uint32_t)((edi & 0xffffu));
/* 48b9d3: mov edi, ebx */
  edi = ebx;
/* 48b9d5: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 48b9d8: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_48b9da: /* 48b9da: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 48b9dd: mov eax, edx */
  eax = edx;
/* 48b9df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 48b9e2: and dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 48b9e6: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 48b9e7: jne 0x48b9da */
  if (!zf) goto L_48b9da;
L_48b9e9: /* 48b9e9: and word ptr [esi + 6], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x6u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0x6u), r);
  }
/* 48b9ee: mov word ptr [esi + 2], ax */
  W16((uint32_t)(esi + 0x2u), (eax & 0xffffu));
/* 48b9f2: mov ax, word ptr [ebp - 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u))) & 0xffffu);
/* 48b9f6: mov word ptr [esi + 4], dx */
  W16((uint32_t)(esi + 0x4u), (edx & 0xffffu));
/* 48b9fa: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 48b9fd: mov word ptr [esi], ax */
  W16((uint32_t)(esi), (eax & 0xffffu));
L_48ba00: /* 48ba00: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
/* 48ba02: test di, di */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 48ba05: je 0x48ba70 */
  if (zf) goto L_48ba70;
L_48ba07: /* 48ba07: movsx eax, di */
  eax = (uint32_t)(int32_t)(int16_t)((edi & 0xffffu));
/* 48ba0a: xor edx, edx */
  edx = 0;
/* 48ba0c: mov dx, word ptr [esi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 48ba0f: mov dword ptr [ebp + 8], 0x10 */
  W32((uint32_t)(ebp + 0x8u), 0x10u);
/* 48ba16: sub dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 48ba19: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 48ba1b: mov ax, word ptr [esi + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x2u))) & 0xffffu);
/* 48ba1f: mov cx, di */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 48ba22: shr dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 15) & 1;
  zf = r == 0;
  sf = (r >> 15) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 48ba25: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48ba28: mov ebx, eax */
  ebx = eax;
/* 48ba2a: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ebx = r;
  }
  }
/* 48ba2c: mov cx, di */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 48ba2f: shr ax, cl */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 48ba32: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48ba35: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 48ba37: mov word ptr [esi], dx */
  W16((uint32_t)(esi), (edx & 0xffffu));
/* 48ba3a: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 48ba3c: mov dx, word ptr [esi + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x4u))) & 0xffffu);
/* 48ba40: mov ebx, edx */
  ebx = edx;
/* 48ba42: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ebx = r;
  }
  }
/* 48ba44: mov cx, di */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 48ba47: shr dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 48ba4a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 48ba4d: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48ba4f: mov word ptr [esi + 2], ax */
  W16((uint32_t)(esi + 0x2u), (eax & 0xffffu));
/* 48ba53: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 48ba55: mov ax, word ptr [esi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 48ba59: mov ebx, eax */
  ebx = eax;
/* 48ba5b: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 48ba5d: mov cx, di */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 48ba60: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 48ba62: shr ax, cl */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 48ba65: mov word ptr [esi + 4], dx */
  W16((uint32_t)(esi + 0x4u), (edx & 0xffffu));
/* 48ba69: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 48ba6c: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
L_48ba70: /* 48ba70: or word ptr [esi + 6], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x6u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi + 0x6u), r);
  }
L_48ba74: /* 48ba74: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
L_48ba78: /* 48ba78: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_48ba79: /* 48ba79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48ba7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48ba7b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48ba7c: ret  */
  esp += 4; SPILL(); return;
}

void f_48ba7d(void) {
  LOAD_REGS();
L_48ba7d: /* 48ba7d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48ba7e: mov ebp, esp */
  ebp = esp;
/* 48ba80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 48ba81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48ba82: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 48ba85: xor ecx, ecx */
  ecx = 0;
/* 48ba87: mov cx, word ptr [esi + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x2u))) & 0xffffu);
/* 48ba8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48ba8c: mov edi, 0xff */
  edi = 0xffu;
/* 48ba91: mov eax, ecx */
  eax = ecx;
/* 48ba93: shr eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 48ba96: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48ba98: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48ba9b: jne 0x48bab8 */
  if (!zf) goto L_48bab8;
L_48ba9d: /* 48ba9d: test cl, 0x7f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48baa0: jne 0x48bab0 */
  if (!zf) goto L_48bab0;
L_48baa2: /* 48baa2: cmp word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48baa6: jne 0x48bab0 */
  if (!zf) goto L_48bab0;
L_48baa8: /* 48baa8: xor eax, eax */
  eax = 0;
/* 48baaa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 48baab: jmp 0x48bb8c */
  goto L_48bb8c;
L_48bab0: /* 48bab0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 48bab2: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 48bab3: jmp 0x48bb8c */
  goto L_48bb8c;
L_48bab8: /* 48bab8: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 48babb: jne 0x48bad1 */
  if (!zf) goto L_48bad1;
L_48babd: /* 48babd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48babe: call 0x48bcb4 */
  esp -= 4; W32(esp, 0x48bac3u); SPILL(); f_48bcb4(); if (g_unwind) return; RELOAD();
/* 48bac3: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* 48bac6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48bac7: jle 0x48bad1 */
  if ((zf || sf != of)) goto L_48bad1;
L_48bac9: /* 48bac9: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 48bacc: jmp 0x48bb8c */
  goto L_48bb8c;
L_48bad1: /* 48bad1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 48bad4: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 48bad7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 48bad9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48badb: jl 0x48baf6 */
  if ((sf != of)) goto L_48baf6;
L_48badd: /* 48badd: test byte ptr [esi + 3], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48bae1: fld dword ptr [0x48e3d0] */
  { double v = F32((uint32_t)(0x48e3d0u)); FPUSH(v); }
/* 48bae7: je 0x48baeb */
  if (zf) goto L_48baeb;
L_48bae9: /* 48bae9: fchs  */
  ST0 = -ST0;
L_48baeb: /* 48baeb: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 48baed: mov ax, 1 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x1u) & 0xffffu);
/* 48baf1: jmp 0x48bb8c */
  goto L_48bb8c;
L_48baf6: /* 48baf6: xor eax, eax */
  eax = 0;
/* 48baf8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 48bafa: mov ax, word ptr [esi + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x2u))) & 0xffffu);
/* 48bafe: jle 0x48bb10 */
  if ((zf || sf != of)) goto L_48bb10;
L_48bb00: /* 48bb00: and eax, 0xffff807f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff807fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48bb05: shl ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 48bb08: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 48bb0a: mov word ptr [esi + 2], ax */
  W16((uint32_t)(esi + 0x2u), (eax & 0xffffu));
/* 48bb0e: jmp 0x48bb88 */
  goto L_48bb88;
L_48bb10: /* 48bb10: mov edx, eax */
  edx = eax;
/* 48bb12: and eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 48bb15: or ax, 0x80 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x80u);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48bb19: and edx, 0x8000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 48bb1f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 48bb20: cmp ecx, -0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe9u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 48bb23: mov word ptr [esi + 2], ax */
  W16((uint32_t)(esi + 0x2u), (eax & 0xffffu));
/* 48bb27: jge 0x48bb33 */
  if ((sf == of)) goto L_48bb33;
L_48bb29: /* 48bb29: and word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi), r);
  }
/* 48bb2d: mov word ptr [esi + 2], dx */
  W16((uint32_t)(esi + 0x2u), (edx & 0xffffu));
/* 48bb31: jmp 0x48bac9 */
  goto L_48bac9;
L_48bb33: /* 48bb33: cmp cx, -0x10 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0xfff0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 48bb37: mov edi, ecx */
  edi = ecx;
/* 48bb39: jg 0x48bb46 */
  if ((!zf && sf == of)) goto L_48bb46;
L_48bb3b: /* 48bb3b: and word ptr [esi + 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x2u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0x2u), r);
  }
/* 48bb40: mov word ptr [esi], ax */
  W16((uint32_t)(esi), (eax & 0xffffu));
/* 48bb43: lea edi, [ecx + 0x10] */
  edi = (uint32_t)(ecx + 0x10u);
L_48bb46: /* 48bb46: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
/* 48bb48: test di, di */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 48bb4b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 48bb4e: je 0x48bb84 */
  if (zf) goto L_48bb84;
L_48bb50: /* 48bb50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48bb51: xor eax, eax */
  eax = 0;
/* 48bb53: mov ax, word ptr [esi + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x2u))) & 0xffffu);
/* 48bb57: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 48bb59: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48bb5a: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 48bb5c: mov ebx, eax */
  ebx = eax;
/* 48bb5e: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 48bb60: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 48bb63: mov word ptr [ebp + 0xa], cx */
  W16((uint32_t)(ebp + 0xau), (ecx & 0xffffu));
/* 48bb67: mov cx, di */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 48bb6a: xor edi, edi */
  edi = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 48bb6c: mov di, word ptr [ebp + 0xa] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xau))) & 0xffffu);
/* 48bb70: shr di, cl */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 48bb73: mov cx, word ptr [ebp - 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu))) & 0xffffu);
/* 48bb77: or ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 48bb79: shr ax, cl */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 48bb7c: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 48bb7f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48bb80: mov word ptr [esi + 2], ax */
  W16((uint32_t)(esi + 0x2u), (eax & 0xffffu));
L_48bb84: /* 48bb84: or word ptr [esi + 2], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x2u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi + 0x2u), r);
  }
L_48bb88: /* 48bb88: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
L_48bb8c: /* 48bb8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48bb8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48bb8e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 48bb8f: ret  */
  esp += 4; SPILL(); return;
}

void f_48bb90(void) {
  LOAD_REGS();
L_48bb90: /* 48bb90: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 48bb94: xor edx, edx */
  edx = 0;
/* 48bb96: mov dx, word ptr [ecx + 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x6u))) & 0xffffu);
/* 48bb9a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48bb9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48bb9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48bb9d: xor eax, eax */
  eax = 0;
/* 48bb9f: xor esi, esi */
  esi = 0;
/* 48bba1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 48bba2: mov edi, edx */
  edi = edx;
/* 48bba4: and edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 48bba7: and edi, 0x8000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 48bbad: cmp dx, si */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48bbb0: mov word ptr [ecx + 6], dx */
  W16((uint32_t)(ecx + 0x6u), (edx & 0xffffu));
/* 48bbb4: jne 0x48bc47 */
  if (!zf) goto L_48bc47;
L_48bbba: /* 48bbba: cmp word ptr [ecx + 4], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x4u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48bbbe: jne 0x48bbcf */
  if (!zf) goto L_48bbcf;
L_48bbc0: /* 48bbc0: cmp word ptr [ecx + 2], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48bbc4: jne 0x48bbcf */
  if (!zf) goto L_48bbcf;
L_48bbc6: /* 48bbc6: cmp word ptr [ecx], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48bbc9: je 0x48bcaa */
  if (zf) goto L_48bcaa;
L_48bbcf: /* 48bbcf: mov bx, word ptr [ecx + 6] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x6u))) & 0xffffu);
L_48bbd3: /* 48bbd3: mov dx, word ptr [ecx + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x4u))) & 0xffffu);
/* 48bbd7: mov bx, dx */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((edx & 0xffffu)) & 0xffffu);
/* 48bbda: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 48bbde: mov word ptr [ecx + 4], dx */
  W16((uint32_t)(ecx + 0x4u), (edx & 0xffffu));
/* 48bbe2: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 48bbe5: sub eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 48bbe8: cmp bx, si */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 48bbeb: mov word ptr [ecx + 2], dx */
  W16((uint32_t)(ecx + 0x2u), (edx & 0xffffu));
/* 48bbef: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 48bbf2: je 0x48bbd3 */
  if (zf) goto L_48bbd3;
L_48bbf4: /* 48bbf4: mov word ptr [ecx + 6], bx */
  W16((uint32_t)(ecx + 0x6u), (ebx & 0xffffu));
/* 48bbf8: jmp 0x48bc47 */
  goto L_48bc47;
L_48bbfa: /* 48bbfa: mov dx, word ptr [ecx + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x4u))) & 0xffffu);
/* 48bbfe: xor ebx, ebx */
  ebx = 0;
/* 48bc00: mov bx, word ptr [ecx + 6] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x6u))) & 0xffffu);
/* 48bc04: shl bx, 1 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint32_t c = 1;
  uint16_t r = (uint16_t)((uint32_t)a << c);
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48bc07: xor esi, esi */
  esi = 0;
/* 48bc09: mov si, dx */
  esi = (esi & 0xffff0000u) | ((uint32_t)((edx & 0xffffu)) & 0xffffu);
/* 48bc0c: shr si, 0xf */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = 15;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48bc10: add edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 48bc12: or esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 48bc14: xor ebx, ebx */
  ebx = 0;
/* 48bc16: mov word ptr [ecx + 6], si */
  W16((uint32_t)(ecx + 0x6u), (esi & 0xffffu));
/* 48bc1a: mov si, word ptr [ecx + 2] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 48bc1e: mov bx, si */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 48bc21: shr bx, 0xf */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint32_t c = 15;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48bc25: add esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 48bc27: or ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 48bc29: mov word ptr [ecx + 4], bx */
  W16((uint32_t)(ecx + 0x4u), (ebx & 0xffffu));
/* 48bc2d: xor edx, edx */
  edx = 0;
/* 48bc2f: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 48bc32: xor ebx, ebx */
  ebx = 0;
/* 48bc34: mov bx, dx */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((edx & 0xffffu)) & 0xffffu);
/* 48bc37: shr bx, 0xf */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint32_t c = 15;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48bc3b: add edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 48bc3d: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
/* 48bc40: or ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 48bc42: mov word ptr [ecx + 2], bx */
  W16((uint32_t)(ecx + 0x2u), (ebx & 0xffffu));
/* 48bc46: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_48bc47: /* 48bc47: cmp word ptr [ecx + 6], 0x10 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x6u))); uint16_t b = (uint16_t)(0x10u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 48bc4c: jb 0x48bbfa */
  if (cf) goto L_48bbfa;
L_48bc4e: /* 48bc4e: jmp 0x48bc98 */
  goto L_48bc98;
L_48bc50: /* 48bc50: xor edx, edx */
  edx = 0;
/* 48bc52: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 48bc56: xor ebx, ebx */
  ebx = 0;
/* 48bc58: mov bx, word ptr [ecx] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 48bc5b: shr bx, 1 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint32_t c = 1;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48bc5e: mov esi, edx */
  esi = edx;
/* 48bc60: shl esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 48bc63: shr dx, 1 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = 1;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48bc66: or esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 48bc68: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 48bc6b: xor esi, esi */
  esi = 0;
/* 48bc6d: mov si, word ptr [ecx + 4] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x4u))) & 0xffffu);
/* 48bc71: mov ebx, esi */
  ebx = esi;
/* 48bc73: shl ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 48bc76: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 48bc78: mov word ptr [ecx + 2], dx */
  W16((uint32_t)(ecx + 0x2u), (edx & 0xffffu));
/* 48bc7c: xor edx, edx */
  edx = 0;
/* 48bc7e: mov dx, word ptr [ecx + 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x6u))) & 0xffffu);
/* 48bc82: shr si, 1 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = 1;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48bc85: mov ebx, edx */
  ebx = edx;
/* 48bc87: shl ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 48bc8a: or esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 48bc8c: shr dx, 1 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = 1;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48bc8f: mov word ptr [ecx + 4], si */
  W16((uint32_t)(ecx + 0x4u), (esi & 0xffffu));
/* 48bc93: mov word ptr [ecx + 6], dx */
  W16((uint32_t)(ecx + 0x6u), (edx & 0xffffu));
/* 48bc97: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_48bc98: /* 48bc98: cmp word ptr [ecx + 6], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x6u))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 48bc9d: jae 0x48bc50 */
  if (!cf) goto L_48bc50;
L_48bc9f: /* 48bc9f: and word ptr [ecx + 6], 0xf */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x6u))); uint16_t b = (uint16_t)(0xfu);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ecx + 0x6u), r);
  }
/* 48bca4: xor edx, edx */
  edx = 0;
/* 48bca6: mov dx, word ptr [ecx + 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x6u))) & 0xffffu);
L_48bcaa: /* 48bcaa: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 48bcac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48bcad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48bcae: mov word ptr [ecx + 6], dx */
  W16((uint32_t)(ecx + 0x6u), (edx & 0xffffu));
/* 48bcb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48bcb3: ret  */
  esp += 4; SPILL(); return;
}

void f_48bcb4(void) {
  LOAD_REGS();
L_48bcb4: /* 48bcb4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 48bcb8: xor edx, edx */
  edx = 0;
/* 48bcba: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 48bcbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48bcbf: xor eax, eax */
  eax = 0;
/* 48bcc1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 48bcc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48bcc3: mov esi, edx */
  esi = edx;
/* 48bcc5: and edx, 0x7f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 48bcc8: and esi, 0x8000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 48bcce: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 48bcd1: mov word ptr [ecx + 2], dx */
  W16((uint32_t)(ecx + 0x2u), (edx & 0xffffu));
/* 48bcd5: jne 0x48bced */
  if (!zf) goto L_48bced;
L_48bcd7: /* 48bcd7: mov di, word ptr [ecx] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 48bcda: test di, di */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 48bcdd: je 0x48bd67 */
  if (zf) goto L_48bd67;
L_48bce3: /* 48bce3: and word ptr [ecx], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ecx), r);
  }
/* 48bce6: push -0xf */
  { uint32_t v = 0xfffffff1u; esp -= 4; W32(esp, v); }
/* 48bce8: mov word ptr [ecx + 2], di */
  W16((uint32_t)(ecx + 0x2u), (edi & 0xffffu));
/* 48bcec: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
L_48bced: /* 48bced: cmp word ptr [ecx + 2], 0x80 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2u))); uint16_t b = (uint16_t)(0x80u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 48bcf3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48bcf4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 48bcf5: jae 0x48bd25 */
  if (!cf) goto L_48bd25;
L_48bcf7: /* 48bcf7: mov bp, word ptr [ecx + 2] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
L_48bcfb: /* 48bcfb: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 48bcfe: xor edi, edi */
  edi = 0;
/* 48bd00: xor ebx, ebx */
  ebx = 0;
/* 48bd02: mov di, dx */
  edi = (edi & 0xffff0000u) | ((uint32_t)((edx & 0xffffu)) & 0xffffu);
/* 48bd05: mov bx, bp */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((ebp & 0xffffu)) & 0xffffu);
/* 48bd08: shr di, 0xf */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint32_t c = 15;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48bd0c: shl bx, 1 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint32_t c = 1;
  uint16_t r = (uint16_t)((uint32_t)a << c);
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48bd0f: add edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 48bd11: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
/* 48bd14: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 48bd16: mov bp, di */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 48bd19: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 48bd1a: cmp bp, 0x80 */
  { uint16_t a = (uint16_t)((ebp & 0xffffu)); uint16_t b = (uint16_t)(0x80u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 48bd1f: jb 0x48bcfb */
  if (cf) goto L_48bcfb;
L_48bd21: /* 48bd21: mov word ptr [ecx + 2], bp */
  W16((uint32_t)(ecx + 0x2u), (ebp & 0xffffu));
L_48bd25: /* 48bd25: cmp word ptr [ecx + 2], 0x100 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2u))); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 48bd2b: jb 0x48bd5a */
  if (cf) goto L_48bd5a;
L_48bd2d: /* 48bd2d: mov bp, word ptr [ecx + 2] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
L_48bd31: /* 48bd31: xor edx, edx */
  edx = 0;
/* 48bd33: xor ebx, ebx */
  ebx = 0;
/* 48bd35: mov bx, word ptr [ecx] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 48bd38: mov dx, bp */
  edx = (edx & 0xffff0000u) | ((uint32_t)((ebp & 0xffffu)) & 0xffffu);
/* 48bd3b: shr bx, 1 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint32_t c = 1;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48bd3e: mov edi, edx */
  edi = edx;
/* 48bd40: shl edi, 0xf */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 48bd43: shr dx, 1 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = 1;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 48bd46: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 48bd48: mov bp, dx */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)((edx & 0xffffu)) & 0xffffu);
/* 48bd4b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 48bd4c: cmp bp, 0x100 */
  { uint16_t a = (uint16_t)((ebp & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 48bd51: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 48bd54: jae 0x48bd31 */
  if (!cf) goto L_48bd31;
L_48bd56: /* 48bd56: mov word ptr [ecx + 2], bp */
  W16((uint32_t)(ecx + 0x2u), (ebp & 0xffffu));
L_48bd5a: /* 48bd5a: and word ptr [ecx + 2], 0x7f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2u))); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ecx + 0x2u), r);
  }
/* 48bd5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 48bd60: xor edx, edx */
  edx = 0;
/* 48bd62: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 48bd66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_48bd67: /* 48bd67: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 48bd69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48bd6a: mov word ptr [ecx + 2], dx */
  W16((uint32_t)(ecx + 0x2u), (edx & 0xffffu));
/* 48bd6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48bd6f: ret  */
  esp += 4; SPILL(); return;
}

void f_48bd70(void) {
  LOAD_REGS();
L_48bd70: /* 48bd70: jmp dword ptr [0x48e1a0] */
  SPILL(); f_40149a(); return; /* MSVCR70!memcmp */
}

void f_48bd76(void) { hle_memset(); }

void f_48bd7c(void) {
  LOAD_REGS();
L_48bd7c: /* 48bd7c: jmp dword ptr [0x48e188] */
  SPILL(); f_41475a(); return; /* MSVCR70!_Gettnames */
}

void f_48bd82(void) {
  LOAD_REGS();
L_48bd82: /* 48bd82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 48bd83: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 48bd87: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48bd8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48bd8b: mov esi, ecx */
  esi = ecx;
/* 48bd8d: je 0x48bdb3 */
  if (zf) goto L_48bdb3;
L_48bd8f: /* 48bd8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48bd90: push 0x48bf5c */
  { uint32_t v = 0x48bf5cu; esp -= 4; W32(esp, v); }
/* 48bd95: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 48bd98: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 48bd9a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 48bd9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48bd9d: call 0x48be30 */
  esp -= 4; W32(esp, 0x48bda2u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 48bda2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48bda5: je 0x48bdae */
  if (zf) goto L_48bdae;
L_48bda7: /* 48bda7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 48bda8: call 0x461c65 */
  esp -= 4; W32(esp, 0x48bdadu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48bdad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_48bdae: /* 48bdae: mov eax, edi */
  eax = edi;
/* 48bdb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 48bdb1: jmp 0x48bdc8 */
  goto L_48bdc8;
L_48bdb3: /* 48bdb3: mov ecx, esi */
  ecx = esi;
/* 48bdb5: call 0x48bf5c */
  esp -= 4; W32(esp, 0x48bdbau); SPILL(); f_48bf5c(); if (g_unwind) return; RELOAD();
/* 48bdba: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 48bdbd: je 0x48bdc6 */
  if (zf) goto L_48bdc6;
L_48bdbf: /* 48bdbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 48bdc0: call 0x461c65 */
  esp -= 4; W32(esp, 0x48bdc5u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 48bdc5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_48bdc6: /* 48bdc6: mov eax, esi */
  eax = esi;
L_48bdc8: /* 48bdc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 48bdc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 48bdca: ret 4 */
  esp += 8; SPILL(); return;
}
